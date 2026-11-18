// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// operator[] @ 14d7f9d20

FLKFSNRTResults * __thiscall
TArrayView<FLKFSNRTResults,int>::operator[](TArrayView<FLKFSNRTResults,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLKFSNRTResults *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLKFSNRTResults *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Slice @ 14d80a550

TArrayView<Audio::FPitchInfo_const_,int> * __thiscall
TArrayView<Audio::FPitchInfo_const_,int>::Slice
          (TArrayView<Audio::FPitchInfo_const_,int> *this,
          TArrayView<Audio::FPitchInfo_const_,int> *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<Audio::FPitchInfo_const_,int> *pTVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<Audio::FPitchInfo_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<Audio::FPitchInfo_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<Audio::FPitchInfo_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = this->DataPtr + param_1;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<Audio::FPitchInfo_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

