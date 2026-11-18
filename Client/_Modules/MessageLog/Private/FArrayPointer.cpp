// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 6

// GetItems @ 142bfd290

TArrayView<TSharedPtr<IMessageLogListing,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<IMessageLogListing,1>_>::GetItems
          (FArrayPointer<TSharedPtr<IMessageLogListing,1>_> *this,
          TArrayView<TSharedPtr<IMessageLogListing,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<IMessageLogListing,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<IMessageLogListing,1> *)(this->ItemsSource->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedPtr<IMessageLogListing,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142bfd300

TArrayView<TSharedRef<FMessageFilter,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FMessageFilter,1>_>::GetItems
          (FArrayPointer<TSharedRef<FMessageFilter,1>_> *this,
          TArrayView<TSharedRef<FMessageFilter,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<FMessageFilter,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<FMessageFilter,1> *)(this->ItemsSource->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedRef<FMessageFilter,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142bfd370

TArrayView<TSharedRef<FTokenizedMessage,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FTokenizedMessage,1>_>::GetItems
          (FArrayPointer<TSharedRef<FTokenizedMessage,1>_> *this,
          TArrayView<TSharedRef<FTokenizedMessage,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<FTokenizedMessage,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<FTokenizedMessage,1> *)(this->ItemsSource->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedRef<FTokenizedMessage,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 142c06cb0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<IMessageLogListing,1>_>::IsSame
          (FArrayPointer<TSharedPtr<IMessageLogListing,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142c06cc0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FMessageFilter,1>_>::IsSame
          (FArrayPointer<TSharedRef<FMessageFilter,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142c06cd0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FTokenizedMessage,1>_>::IsSame
          (FArrayPointer<TSharedRef<FTokenizedMessage,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

