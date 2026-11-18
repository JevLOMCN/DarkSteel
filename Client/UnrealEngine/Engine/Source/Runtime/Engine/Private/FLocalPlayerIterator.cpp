// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetCurrent @ 147c55c00

void __thiscall FLocalPlayerIterator::GetCurrent(FLocalPlayerIterator *this)

{
  int *piVar1;
  int iVar2;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  while( true ) {
    iVar2 = (this->Iter).Index;
    if (iVar2 < 0) {
      return;
    }
    pTVar3 = (this->Iter).Container;
    if (pTVar3->ArrayNum <= iVar2) break;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar2 * 8) != 0) {
      return;
    }
    piVar1 = &(this->Iter).Index;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

// operator-> @ 1489bdc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall FLocalPlayerIterator::operator->(FLocalPlayerIterator *this)

{
  uint uVar1;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ULocalPlayer *pUVar6;
  
  uVar1 = (this->Iter).Index;
  pTVar2 = (this->Iter).Container;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (ULocalPlayer *)(*pcVar3)();
      return pUVar6;
    }
  }
  return *(ULocalPlayer **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 8);
}

