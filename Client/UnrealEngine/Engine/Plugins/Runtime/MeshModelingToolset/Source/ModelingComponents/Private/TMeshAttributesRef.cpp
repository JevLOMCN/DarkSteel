// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// GetRawArray @ 14ca926f0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_>::GetRawArray
          (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_> *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  uint uVar6;
  FMeshAttributeArraySetBase *pFVar7;
  
  pFVar2 = this->ArrayPtr;
  if ((pFVar2 == (FMeshAttributeArraySetBase *)0x0) || (pFVar2->NumElements == 0)) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    uVar6 = 0;
    if (param_1 < (int)pFVar2[2].Type) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar2 + 1;
    }
    if ((int)pFVar7[param_1].Type < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->DataPtr = (TVector<float> *)pFVar7[param_1]._padding_;
    iVar1 = this->ArrayPtr->NumElements;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

