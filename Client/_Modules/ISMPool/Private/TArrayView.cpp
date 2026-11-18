// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 1

// Slice @ 1463427f0

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::Slice
          (TArrayView<float_const_,int> *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pfVar1 = this->DataPtr;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = pfVar1 + param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

