#pragma once

namespace Core {
    using
	  System::Type,
	  System::Windows::Forms::Form,
	  System::Collections::SortedList;

    public ref class ServiceHandler {
    private:
	  SortedList^ Collection;
    public:
	  ServiceHandler();
	  ~ServiceHandler();

	  Form^ Get(Type^ type);
	  void AddSingleton(Form^ view);
    };
}
