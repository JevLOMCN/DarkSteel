// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// ~FObjectScopeHysteresisUpdater @ 14422b280

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::~FObjectScopeHysteresisUpdater
          (FObjectScopeHysteresisUpdater *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ObjectsToUpdate).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NetRefIndexToLocalIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetRefIndexToLocalIndex);
  pFVar1 = (this->LocalIndexToNetRefIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameCounters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Deinit @ 144235c60

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::Deinit(FObjectScopeHysteresisUpdater *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = &(this->FrameCounters).ArrayMax;
  (this->FrameCounters).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->LocalIndexToNetRefIndex).ArrayMax;
  (this->LocalIndexToNetRefIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LocalIndexToNetRefIndex).AllocatorInstance,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->NetRefIndexToLocalIndex).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->NetRefIndexToLocalIndex);
  }
  puVar2 = &(this->NetRefIndexToLocalIndex).field_0xc;
  *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->NetRefIndexToLocalIndex,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x34 = 0;
  iVar3 = *(int *)&(this->NetRefIndexToLocalIndex).field_0x2c;
  *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NetRefIndexToLocalIndex).field_0x10,0
              );
  }
  if (bVar4) {
    *(undefined4 *)&(this->NetRefIndexToLocalIndex).field_0x48 = 1;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->NetRefIndexToLocalIndex);
  }
  (this->UsedLocalIndices).BitCount = 0;
  piVar1 = &(this->UsedLocalIndices).Storage.ArrayMax;
  (this->UsedLocalIndices).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->UsedLocalIndices,0,piVar1);
  }
  (this->ObjectsToUpdate).BitCount = 0;
  piVar1 = &(this->ObjectsToUpdate).Storage.ArrayMax;
  (this->ObjectsToUpdate).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ObjectsToUpdate,0,piVar1);
  }
  return;
}

// FreeLocalIndex @ 14423aaa0

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::FreeLocalIndex
          (FObjectScopeHysteresisUpdater *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data;
  if ((this->UsedLocalIndices).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  uVar4 = 0;
  if ((int)param_1 < (this->LocalIndexToNetRefIndex).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = *(uint *)((this->LocalIndexToNetRefIndex).AllocatorInstance.Data +
                   (longlong)(int)param_1 * 4);
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            *)&this->NetRefIndexToLocalIndex,uVar4);
  pFVar1 = (this->ObjectsToUpdate).Storage.AllocatorInstance.Data;
  if ((this->ObjectsToUpdate).BitCount <= uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pFVar1 + (ulonglong)(uVar4 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 & ~(1 << (uVar4 & 0x1f));
  return;
}

// GetOrCreateLocalIndex @ 14423d1b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::GetOrCreateLocalIndex
          (FObjectScopeHysteresisUpdater *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18;
  uint *local_48;
  uint *local_40;
  uint *puVar6;
  
  puVar6 = (uint *)0x0;
  if (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
      *(int *)&(this->NetRefIndexToLocalIndex).field_0x34) {
    puVar12 = *(undefined1 **)&(this->NetRefIndexToLocalIndex).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->NetRefIndexToLocalIndex).field_0x38;
    }
    uVar5 = *(uint *)(puVar12 +
                     (ulonglong)(*(int *)&(this->NetRefIndexToLocalIndex).field_0x48 - 1U & param_1)
                     * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&this->NetRefIndexToLocalIndex)
        ;
        if (*puVar9 == param_1) {
          puVar7 = puVar9 + 1;
          if (puVar9 == (uint *)0x0) {
            puVar7 = puVar6;
          }
          if (puVar7 != (uint *)0x0) {
            return *puVar7;
          }
          break;
        }
        uVar5 = puVar9[2];
      } while (uVar5 != 0xffffffff);
    }
  }
  uVar5 = (this->UsedLocalIndices).Storage.ArrayNum;
  local_res8[0] = (this->UsedLocalIndices).BitCount;
  pFVar10 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data;
  puVar9 = puVar6;
  local_res10[0] = param_1;
  if (uVar5 == 0) {
LAB_14423d295:
    (this->UsedLocalIndices).BitCount = local_res8[0] + 0x100;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(this->UsedLocalIndices).Storage,local_res8[0] + 0x11f >> 5,No);
    uVar5 = (this->UsedLocalIndices).BitCount;
    if (uVar5 != 0) {
      pFVar10 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data +
                (longlong)(this->UsedLocalIndices).Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar10 = *(uint *)pFVar10 & 0xffffffffU >> (-(char)uVar5 & 0x1fU);
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->LocalIndexToNetRefIndex,0x100);
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddZeroed(&this->FrameCounters,0x100);
    uVar5 = local_res8[0];
LAB_14423d2fa:
    local_res8[0] = uVar5;
    uVar5 = local_res8[0];
    pFVar10 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data;
    if (((this->UsedLocalIndices).BitCount <= local_res8[0]) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    uVar3 = local_res10[0];
    uVar8 = (ulonglong)(uVar5 >> 5);
    *(uint *)(pFVar10 + uVar8 * 4) = *(uint *)(pFVar10 + uVar8 * 4) | 1 << (uVar5 & 0x1f);
    lVar11 = (longlong)(int)local_res8[0];
    uVar5 = 0;
    if ((int)local_res8[0] < (this->LocalIndexToNetRefIndex).ArrayNum) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    *(uint *)((this->LocalIndexToNetRefIndex).AllocatorInstance.Data + lVar11 * 4) = uVar3;
    local_48 = local_res10;
    local_40 = local_res8;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->NetRefIndexToLocalIndex,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)&stack0x00000020,
               (bool *)&local_48);
    uVar5 = local_res10[0];
    pFVar10 = (this->ObjectsToUpdate).Storage.AllocatorInstance.Data;
    if (((this->ObjectsToUpdate).BitCount <= local_res10[0]) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    pFVar10 = pFVar10 + (ulonglong)(uVar5 >> 5) * 4;
    *(uint *)pFVar10 = *(uint *)pFVar10 | 1 << (uVar5 & 0x1f);
    return local_res8[0];
  }
LAB_14423d235:
  if (*(uint *)pFVar10 == 0xffffffff) goto code_r0x00014423d23d;
  uVar5 = ~*(uint *)pFVar10;
  local_res18 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> local_res18 & 1) == 0; local_res18 = local_res18 + 1) {
    }
  }
  iVar4 = 0x20;
  if (uVar5 != 0) {
    iVar4 = local_res18;
  }
  uVar3 = iVar4 + (int)puVar9;
  uVar5 = 0xffffffff;
  if (uVar3 < local_res8[0]) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0xffffffff) goto LAB_14423d2fa;
  goto LAB_14423d295;
code_r0x00014423d23d:
  uVar3 = (int)puVar6 + 1;
  puVar6 = (uint *)(ulonglong)uVar3;
  pFVar10 = pFVar10 + 4;
  puVar9 = (uint *)(ulonglong)((int)puVar9 + 0x20);
  if (uVar5 <= uVar3) goto LAB_14423d295;
  goto LAB_14423d235;
}

// Init @ 1442404f0

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::Init
          (FObjectScopeHysteresisUpdater *this,uint param_1)

{
  FNetBitArray::Init(&this->ObjectsToUpdate,param_1);
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::OnMaxInternalNetRefIndexIncreased
          (FObjectScopeHysteresisUpdater *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  (this->ObjectsToUpdate).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ObjectsToUpdate).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->ObjectsToUpdate).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->ObjectsToUpdate).Storage.AllocatorInstance.Data +
             (longlong)(this->ObjectsToUpdate).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// RemoveHysteresis @ 14424ed50

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::RemoveHysteresis
          (FObjectScopeHysteresisUpdater *this,FNetBitArrayView *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  bool bVar14;
  FNetBitArrayView local_48;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId46,"FObjectScopeHysteresisUpdater_RemoveHysteresis",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ObjectScopeHysteresisUpdater.cpp"
               ,0x2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
  }
  if (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
      *(int *)&(this->NetRefIndexToLocalIndex).field_0x34) {
    FNetBitArrayView::FNetBitArrayView
              (&local_48,(uint *)(this->ObjectsToUpdate).Storage.AllocatorInstance.Data,
               (this->ObjectsToUpdate).BitCount);
    if ((local_48.BitCount != param_1->BitCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("A.GetNumBits() == B.GetNumBits()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x668,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar9 = 0;
    puVar10 = param_1->Storage;
    uVar12 = uVar9;
    puVar13 = local_48.Storage;
    if (local_48.WordCount != 0) {
      do {
        iVar11 = (int)uVar9;
        uVar8 = 0xffffffff;
        if ((int)uVar12 == local_48.WordCount - 1) {
          uVar8 = 0xffffffff >> (-(char)local_48.BitCount & 0x1fU);
        }
        for (uVar8 = uVar8 & *puVar10 & *puVar13; uVar8 != 0; uVar8 = uVar8 >> 1) {
          if (((uVar8 & 1) != 0) &&
             (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
              *(int *)&(this->NetRefIndexToLocalIndex).field_0x34)) {
            puVar1 = *(undefined1 **)&(this->NetRefIndexToLocalIndex).field_0x40;
            puVar6 = &(this->NetRefIndexToLocalIndex).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar6 = puVar1;
            }
            iVar4 = *(int *)(puVar6 + (*(int *)&(this->NetRefIndexToLocalIndex).field_0x48 - 1 &
                                      uVar9) * 4);
            if (iVar4 != -1) {
              do {
                piVar5 = (int *)((longlong)iVar4 * 0x10 +
                                *(longlong *)&this->NetRefIndexToLocalIndex);
                if (*piVar5 == (int)uVar9) {
                  puVar7 = (uint *)(piVar5 + 1);
                  if (piVar5 == (int *)0x0) {
                    puVar7 = (uint *)0x0;
                  }
                  if (puVar7 != (uint *)0x0) {
                    FreeLocalIndex(this,*puVar7);
                  }
                  break;
                }
                iVar4 = piVar5[2];
              } while (iVar4 != -1);
            }
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
        }
        uVar8 = (int)uVar12 + 1;
        puVar10 = puVar10 + 1;
        uVar9 = (ulonglong)(iVar11 + 0x20);
        uVar12 = (ulonglong)uVar8;
        puVar13 = puVar13 + 1;
      } while (uVar8 < local_48.WordCount);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// RemoveHysteresis @ 14424ef60

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::RemoveHysteresis
          (FObjectScopeHysteresisUpdater *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
      *(int *)&(this->NetRefIndexToLocalIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NetRefIndexToLocalIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NetRefIndexToLocalIndex).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->NetRefIndexToLocalIndex).field_0x48 - 1U & param_1)
                               * 4);
    if (uVar1 != 0xffffffff) {
      while (puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 +
                              *(longlong *)&this->NetRefIndexToLocalIndex), *puVar2 != param_1) {
        uVar1 = puVar2[2];
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      puVar3 = puVar2 + 1;
      if (puVar2 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      if (puVar3 != (uint *)0x0) {
        FreeLocalIndex(this,*puVar3);
        return;
      }
    }
  }
  return;
}

// RemoveHysteresis @ 14424efd0

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::RemoveHysteresis
          (FObjectScopeHysteresisUpdater *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId61,"FObjectScopeHysteresisUpdater_RemoveHysteresis",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ObjectScopeHysteresisUpdater.cpp"
               ,0x3d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
  }
  if (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
      *(int *)&(this->NetRefIndexToLocalIndex).field_0x34) {
    puVar7 = param_1->DataPtr;
    puVar1 = puVar7 + param_1->ArrayNum;
    if (puVar7 != puVar1) {
      do {
        if (*(int *)&(this->NetRefIndexToLocalIndex).field_0x8 !=
            *(int *)&(this->NetRefIndexToLocalIndex).field_0x34) {
          puVar2 = *(undefined1 **)&(this->NetRefIndexToLocalIndex).field_0x40;
          puVar5 = &(this->NetRefIndexToLocalIndex).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar5 = puVar2;
          }
          uVar3 = *(uint *)(puVar5 + (ulonglong)
                                     (*(int *)&(this->NetRefIndexToLocalIndex).field_0x48 - 1U &
                                     *puVar7) * 4);
          if (uVar3 != 0xffffffff) {
            do {
              puVar4 = (uint *)((longlong)(int)uVar3 * 0x10 +
                               *(longlong *)&this->NetRefIndexToLocalIndex);
              if (*puVar4 == *puVar7) {
                puVar6 = puVar4 + 1;
                if (puVar4 == (uint *)0x0) {
                  puVar6 = (uint *)0x0;
                }
                if (puVar6 != (uint *)0x0) {
                  FreeLocalIndex(this,*puVar6);
                }
                break;
              }
              uVar3 = puVar4[2];
            } while (uVar3 != 0xffffffff);
          }
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetHysteresisFrameCount @ 144252720

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::SetHysteresisFrameCount
          (FObjectScopeHysteresisUpdater *this,uint param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = GetOrCreateLocalIndex(this,param_1);
  uVar4 = 0;
  if ((int)uVar3 < (this->FrameCounters).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(ushort *)((this->FrameCounters).AllocatorInstance.Data + (longlong)(int)uVar3 * 2) = param_2;
  return;
}

// Update @ 144255b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Net::Private::FObjectScopeHysteresisUpdater::Update
          (FObjectScopeHysteresisUpdater *this,uchar param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ushort uVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  ulonglong *puVar17;
  FObjectScopeHysteresisUpdater *pFVar18;
  ushort uVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStackY_188 [32];
  undefined1 local_137;
  ushort local_136;
  uint local_134;
  ushort local_130;
  uint local_12c;
  uint local_128;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_120;
  ushort local_118 [4];
  FScriptContainerElement *local_110;
  FObjectScopeHysteresisUpdater *local_108;
  FScriptContainerElement *local_100;
  ForElementType<unsigned_int> local_f8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_108 = this;
  bVar23 = -1 < CpuChannel->Enabled;
  local_120 = param_2;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"FObjectScopeHysteresisUpdater_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ObjectScopeHysteresisUpdater.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  if ((0x7f < (byte)(param_1 - 1)) &&
     (bVar14 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6146959092410744755>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ObjectScopeHysteresisUpdater.cpp"
                          ,0x4d,"FramesSinceLastUpdate > 0 && FramesSinceLastUpdate <= 128"), bVar14
     )) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar11 = _UNK_150631e08;
  uVar10 = __xmm_00000003000000020000000100000000;
  local_130 = (ushort)param_1;
  local_100 = (this->FrameCounters).AllocatorInstance.Data;
  uVar19 = -local_130;
  local_128 = (this->UsedLocalIndices).BitCount;
  local_f8.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x20;
  local_110 = (this->UsedLocalIndices).Storage.AllocatorInstance.Data;
  local_12c = 0;
  local_136 = uVar19;
  if (local_128 != 0) {
    do {
      pFVar2 = local_100;
      uVar12 = local_130;
      uVar20 = *(uint *)local_110;
      if (uVar20 != 0) {
        uVar16 = local_12c + 2;
        iVar22 = -2 - local_12c;
        do {
          if ((uVar20 & 0xf) != 0) {
            sVar4 = *(short *)(pFVar2 + (ulonglong)uVar16 * 2);
            sVar5 = *(short *)(pFVar2 + (ulonglong)(uVar16 - 2) * 2);
            sVar6 = *(short *)(pFVar2 + (ulonglong)(uVar16 - 1) * 2);
            *(ushort *)(pFVar2 + (ulonglong)(uVar16 - 2) * 2) = sVar5 - uVar12;
            local_118[0] = sVar5 - uVar12;
            local_118[1] = sVar6 - uVar12;
            local_118[2] = sVar4 - uVar12;
            local_118[3] = *(short *)(pFVar2 + (ulonglong)(uVar16 + 1) * 2) - uVar12;
            *(ushort *)(pFVar2 + (ulonglong)(uVar16 - 1) * 2) = sVar6 - uVar12;
            puVar17 = &local_68;
            *(ushort *)(pFVar2 + (ulonglong)(uVar16 + 1) * 2) = local_118[3];
            *(ushort *)(pFVar2 + (ulonglong)uVar16 * 2) = sVar4 - uVar12;
            local_68 = uVar10;
            uStack_60 = uVar11;
            do {
              uVar7 = (uint)*puVar17;
              if (((uVar20 >> (uVar7 & 0x1f) & 1) != 0) && (uVar19 <= local_118[uVar7])) {
                local_134 = (uVar7 - 2) + uVar16;
                FVar21 = (ForElementType<unsigned_int>)&local_f8;
                if (local_f8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar21 = local_f8.SecondaryData;
                }
                if ((ulonglong)FVar21 <= &local_134) {
                  FVar21 = (ForElementType<unsigned_int>)&local_f8;
                  if (local_f8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar21 = local_f8.SecondaryData;
                  }
                  if ((&local_134 < (uint *)((longlong)FVar21 + (longlong)local_6c * 4)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                iVar15 = local_70;
                if (local_70 == local_6c) {
                  iVar15 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                     (0x404,&local_f8,&local_6c);
                }
                local_70 = iVar15 + 1;
                FVar21 = (ForElementType<unsigned_int>)&local_f8;
                if (local_f8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar21 = local_f8.SecondaryData;
                }
                *(uint *)((longlong)FVar21 + (longlong)iVar15 * 4) = local_134;
              }
              puVar17 = (ulonglong *)((longlong)puVar17 + 4);
            } while (puVar17 != local_58);
          }
          uVar16 = uVar16 + 4;
          uVar20 = uVar20 >> 4;
        } while (iVar22 + uVar16 < 0x20);
        if (local_70 != 0) {
          uVar20 = local_70 + local_120->ArrayNum;
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          piVar3 = &local_120->ArrayMax;
          if (local_120->ArrayMax < (int)uVar20) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar20,&local_120->AllocatorInstance,local_120->ArrayNum,piVar3);
          }
          iVar22 = local_70;
          pTVar13 = local_120;
          FVar21 = (ForElementType<unsigned_int>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar21 = local_f8.SecondaryData;
          }
          FVar1 = (ForElementType<unsigned_int>)((longlong)FVar21 + (longlong)local_70 * 4);
          pFVar18 = local_108;
          while( true ) {
            if (local_70 != iVar22) {
              local_137 = 0;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_137);
            }
            if (FVar21 == FVar1) break;
            uVar20 = *(uint *)FVar21;
            uVar16 = 0;
            if ((int)uVar20 < (pFVar18->LocalIndexToNetRefIndex).ArrayNum) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (pTVar13->AllocatorInstance).Data;
            pFVar2 = (pFVar18->LocalIndexToNetRefIndex).AllocatorInstance.Data +
                     (longlong)(int)uVar20 * 4;
            if (((pFVar8 <= pFVar2) && (pFVar2 < pFVar8 + (longlong)*piVar3 * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar15 = pTVar13->ArrayNum;
            if (iVar15 == *piVar3) {
              iVar15 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar13->AllocatorInstance,piVar3);
            }
            pFVar18 = local_108;
            pTVar13->ArrayNum = iVar15 + 1;
            *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar15 * 4) =
                 *(undefined4 *)pFVar2;
            FreeLocalIndex(local_108,uVar20);
            FVar21 = (ForElementType<unsigned_int>)((longlong)FVar21 + 4);
          }
          uVar19 = local_136;
          if (local_6c < 0) {
            local_70 = 0;
            if (local_6c != 0) {
              Core::Private::
              ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (4,4,0,&local_f8,0,&local_6c);
              uVar19 = local_136;
            }
          }
          else {
            local_70 = 0;
          }
        }
      }
      local_110 = local_110 + 4;
      local_12c = local_12c + 0x20;
    } while (local_12c < local_128);
  }
  if (local_f8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.SecondaryData);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

