// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetNode @ 1421cfd20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGraphNode * __thiscall
FReferenceChainSearch::FReferenceChain::GetNode(FReferenceChain *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGraphNode *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGraphNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FGraphNode **)((this->Nodes).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetReferenceInfo @ 1421d0680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TReferenceInfo<FReferenceChainSearch::FGraphNode> * __thiscall
FReferenceChainSearch::FReferenceChain::GetReferenceInfo(FReferenceChain *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TReferenceInfo<FReferenceChainSearch::FGraphNode> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ReferenceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TReferenceInfo<FReferenceChainSearch::FGraphNode> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TReferenceInfo<FReferenceChainSearch::FGraphNode> **)
          ((this->ReferenceInfos).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// IsExternal @ 1421d33f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FReferenceChainSearch::FReferenceChain::IsExternal(FReferenceChain *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = (this->Nodes).ArrayNum;
  if (iVar1 < 2) {
    return false;
  }
  uVar6 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar6 = ~(iVar1 - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->Nodes).ArrayNum;
  lVar2 = *(longlong *)
           (*(longlong *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8) + 8);
  if ((iVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  while( true ) {
    if (lVar2 == 0) {
      return true;
    }
    if (lVar2 == *(longlong *)(*(longlong *)(this->Nodes).AllocatorInstance.Data + 8)) break;
    lVar2 = *(longlong *)(lVar2 + 0x10);
  }
  return false;
}

