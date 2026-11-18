// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// GetItems @ 142dacdd0

TArrayView<TSharedPtr<FText,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FText,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FText,1>_> *this,
          TArrayView<TSharedPtr<FText,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FText,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FText,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FText,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142dace40

TArrayView<TSharedRef<CheckBoxList::FItemPair,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>::GetItems
          (FArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> *this,
          TArrayView<TSharedRef<CheckBoxList::FItemPair,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<CheckBoxList::FItemPair,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<CheckBoxList::FItemPair,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedRef<CheckBoxList::FItemPair,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 142db6e00

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FText,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FText,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142db6e10

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>::IsSame
          (FArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

