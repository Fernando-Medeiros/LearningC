#pragma once
namespace Entity {
	using namespace System;

	public ref class User {
	public:
		int id{ 0 };
		String^ name{};
		String^ email{};
		String^ password{};
	};

	public ref class Task {
	public:
		int id{ 0 };
		String^ title{};
		String^ description{};

		Task(int _id, String^ _title, String^ _description
		) : id{ _id }, title{ _title }, description{ _description } {};

	};
}