// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator[] @ 1481c9bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int * __thiscall FParticleSystemWorldManager::FTickList::operator[](FTickList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < (this->TickList).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->TickList).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// Add @ 1481d1bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::FTickList::Add(FTickList *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPSCTickData *pFVar6;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if (this->Owner == (FParticleSystemWorldManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x3a9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = GetTickData(this->Owner,local_res10[0]);
  if (pFVar6->TickListHandle != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickData.TickListHandle == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x3ac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->TickList).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->TickList).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->TickList).ArrayNum;
  piVar1 = &(this->TickList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->TickList).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->TickList).AllocatorInstance.Data;
  (this->TickList).ArrayNum = iVar5 + 1;
  *(int *)(pFVar2 + (longlong)iVar5 * 4) = local_res10[0];
  pFVar6->TickListHandle = iVar5;
  return;
}

// Remove @ 14820e430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::FTickList::Remove(FTickList *this,int param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPSCTickData *pFVar6;
  FPSCTickData *pFVar7;
  uint uVar8;
  int iVar9;
  
  if (this->Owner == (FParticleSystemWorldManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x3b6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = GetTickData(this->Owner,param_1);
  if ((pFVar6->TickListHandle < 0) || ((this->TickList).ArrayNum <= pFVar6->TickListHandle)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickList.IsValidIndex(TickData.TickListHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x3ba,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = pFVar6->TickListHandle;
  uVar8 = 0;
  if ((int)uVar1 < (this->TickList).ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar9 = (this->TickList).ArrayNum;
  pFVar2 = (this->TickList).AllocatorInstance.Data;
  iVar5 = iVar9 + ~uVar1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove(pFVar2 + (longlong)(int)uVar1 * 4,pFVar2 + (longlong)(iVar9 - iVar5) * 4,
            (longlong)iVar5 << 2);
  }
  iVar9 = (this->TickList).ArrayNum + -1;
  (this->TickList).ArrayNum = iVar9;
  iVar5 = pFVar6->TickListHandle;
  if ((-1 < iVar5) && (iVar5 < iVar9)) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7 = GetTickData(this->Owner,
                         *(int *)((this->TickList).AllocatorInstance.Data + (longlong)iVar5 * 4));
    if (pFVar7->TickListHandle != (this->TickList).ArrayNum) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SwappedTickData.TickListHandle == TickList.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                         ,0x3c2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7->TickListHandle = pFVar6->TickListHandle;
  }
  pFVar6->TickListHandle = -1;
  return;
}

// Reset @ 148212e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::FTickList::Reset(FTickList *this)

{
  (this->TickList).ArrayNum = 0;
  if ((this->TickList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TickList).AllocatorInstance,0,&(this->TickList).ArrayMax);
  }
  return;
}

