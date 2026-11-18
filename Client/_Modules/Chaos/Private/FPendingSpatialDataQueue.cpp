// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FindOrAdd @ 1438b35b0

FPendingSpatialData * __thiscall
Chaos::FPendingSpatialDataQueue::FindOrAdd
          (FPendingSpatialDataQueue *this,FUniqueIdx param_1,EPendingSpatialDataOperation param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  FPendingSpatialData *pFVar8;
  FUniqueIdx local_res10 [2];
  
  local_res10[0].Idx = param_1.Idx;
  puVar7 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Find
                             (&this->ParticleToPendingData,local_res10);
  piVar1 = &(this->PendingData).ArrayNum;
  if (puVar7 == (uint *)0x0) {
    uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,piVar1,&(this->PendingData).ArrayMax);
    lVar2 = (longlong)(int)uVar5 * 0x48;
    DefaultConstructItems<Chaos::FPendingSpatialData,int>
              ((this->PendingData).AllocatorInstance.Data + lVar2,1);
    puVar7 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Add
                               (&this->ParticleToPendingData,local_res10);
    *puVar7 = uVar5;
    uVar6 = 0;
    if ((int)uVar5 < *piVar1) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FPendingSpatialData *)(*pcVar3)();
        return pFVar8;
      }
    }
    (this->PendingData).AllocatorInstance.Data[lVar2 + 0x40] = (FScriptContainerElement)param_2;
    uVar6 = 0;
    if ((int)uVar5 < *piVar1) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FPendingSpatialData *)(*pcVar3)();
        return pFVar8;
      }
    }
    return (FPendingSpatialData *)((this->PendingData).AllocatorInstance.Data + lVar2);
  }
  uVar6 = *puVar7;
  uVar5 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPendingSpatialData *)(*pcVar3)();
      return pFVar8;
    }
  }
  return (FPendingSpatialData *)
         ((this->PendingData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x48);
}

// Reset @ 143d68d90

void __thiscall Chaos::FPendingSpatialDataQueue::Reset(FPendingSpatialDataQueue *this)

{
  int iVar1;
  
  (this->PendingData).ArrayNum = 0;
  if ((this->PendingData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,&(this->PendingData).ArrayMax);
  }
  iVar1 = (this->ParticleToPendingData).Entries.ArrayMax;
  (this->ParticleToPendingData).Entries.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->ParticleToPendingData,0,
               &(this->ParticleToPendingData).Entries.ArrayMax);
  }
  return;
}

