#include "winrt/Windows.Storage.Pickers.h"
#include "winrt/Windows.Foundation.h"

winrt::Windows::Foundation::IAsyncAction Test()
{
    winrt::Windows::Storage::Pickers::FileOpenPicker picker;
    co_await picker.PickSingleFileAsync();
    
    co_return;
}

int main()
{
    Test();
}
