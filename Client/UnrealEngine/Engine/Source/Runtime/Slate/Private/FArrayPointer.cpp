// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// GetItems @ 142810c40

TArrayView<TSharedPtr<SWidget,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<SWidget,1>_>::GetItems
          (FArrayPointer<TSharedPtr<SWidget,1>_> *this,
          TArrayView<TSharedPtr<SWidget,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<SWidget,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<SWidget,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<SWidget,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 14281f540

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<SWidget,1>_>::IsSame
          (FArrayPointer<TSharedPtr<SWidget,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// GetItems @ 1429417e0

TArrayView<TSharedPtr<FString,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FString,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FString,1>_> *this,
          TArrayView<TSharedPtr<FString,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FString,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FString,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FString,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 142956dd0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FString,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FString,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

