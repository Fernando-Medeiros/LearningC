#include "ServiceHandler.h"

using
System::Type,
System::Windows::Forms::Form;

Core::ServiceHandler::ServiceHandler()
{
    Collection = gcnew SortedList(0);
}

Core::ServiceHandler::~ServiceHandler()
{
    delete Collection;
}

Form^ Core::ServiceHandler::Get(Type^ type)
{
    auto index = Collection->IndexOfKey(type);
    return (Form^)Collection->GetByIndex(index);
}

void Core::ServiceHandler::AddSingleton(Form^ view)
{
    Collection->Add(view->GetType(), view);
}

