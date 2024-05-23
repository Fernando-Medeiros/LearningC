#pragma once
namespace Entity {
	using namespace System;

	public ref class User {
	public:
		int id;
		String^ name{};
		String^ email{};
		String^ password{};
	};

	public ref class Task {
	public:
		int id;
		String^ title{};
		String^ description{};
	};
}