// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 5

// GetArrayForChannel @ 1443808d0

TMeshAttributeArrayBase<UE::Math::TVector2<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 144380960

TMeshAttributeArrayBase<UE::Math::TVector4<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 1443809f0

TMeshAttributeArrayBase<UE::Math::TVector<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 144380a80

TMeshAttributeArrayBase<FVertexInstanceID> * __thiscall
TMeshAttributeArraySet<FVertexInstanceID>::GetArrayForChannel
          (TMeshAttributeArraySet<FVertexInstanceID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<FVertexInstanceID> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<FVertexInstanceID> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<FVertexInstanceID> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 144380b10

TMeshAttributeArrayBase<FName> * __thiscall
TMeshAttributeArraySet<FName>::GetArrayForChannel(TMeshAttributeArraySet<FName> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<FName> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<FName> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<FName> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

