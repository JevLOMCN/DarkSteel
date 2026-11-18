// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// GetItems @ 1469d18f0

TArrayView<UObject_*_const,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<UObject_*>::GetItems
          (FArrayPointer<UObject_*> *this,TArrayView<UObject_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UObject_*_const,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr = (UObject **)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UObject_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 1469d1960

TArrayView<FName_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<FName>::GetItems
          (FArrayPointer<FName> *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr = (FName *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FName_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 1469e3590

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<UObject_*>::IsSame
          (FArrayPointer<UObject_*> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 1469e35a0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<FName>::IsSame(FArrayPointer<FName> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

