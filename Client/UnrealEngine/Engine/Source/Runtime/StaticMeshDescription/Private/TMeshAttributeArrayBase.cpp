// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 4

// GetElementBase @ 144380ba0

TVector2<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector2<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector2<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
}

// GetElementBase @ 144380c20

TVector4<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10)
  ;
}

// GetElementBase @ 144380ca0

TVector<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xc);
}

// GetElementBase @ 144380d30

FName * __thiscall
TMeshAttributeArrayBase<FName>::GetElementBase(TMeshAttributeArrayBase<FName> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FName *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
}

