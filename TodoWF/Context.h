#pragma once
namespace Context {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;

	public ref class Client {
	private:
		SqlConnection context{ ConnectionString() };

		String^ ConnectionString() {
			String^ str = "Data Source=@server;Initial Catalog=@database;Integrated Security=@security;Encrypt=@encrypt";
			str = str->Replace("@server", "localhost\\SQLSERVER2022");
			str = str->Replace("@database", "TodoDatabase");
			str = str->Replace("@security", "True");
			str = str->Replace("@encrypt", "False");
			return str;
		}
	public:
		void Close() {
			if (context.State == Data::ConnectionState::Open) {
				context.Close();
			}
		}

		void Write(String^ query) {
			SqlCommand command(query, % context);
			try {
				context.Open();
				command.ExecuteNonQuery();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

		SqlDataReader^ Ready(String^ query) {
			SqlCommand command(query, % context);
			SqlDataReader^ payload{};
			try {
				context.Open();
				payload = command.ExecuteReader();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			return payload;
		};
	};
}