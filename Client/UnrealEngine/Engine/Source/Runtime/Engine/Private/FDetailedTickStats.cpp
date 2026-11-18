// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FDetailedTickStats @ 147ea4be0

FDetailedTickStats * __thiscall
FDetailedTickStats::FDetailedTickStats
          (FDetailedTickStats *this,int param_1,float param_2,float param_3,float param_4,
          wchar_t *param_5)

{
  this->_padding_ = (longlong)&___7FDetailedTickStats__6B_;
  (this->AllStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllStats).ArrayNum = 0;
  (this->AllStats).ArrayMax = 0;
  *(undefined8 *)&this->ObjectToStatsMap = 0;
  *(undefined8 *)&(this->ObjectToStatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToStatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToStatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x48 = 0;
  *(undefined8 *)&(this->ObjectsInFlight).Elements = 0;
  *(undefined8 *)&(this->ObjectsInFlight).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectsInFlight).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectsInFlight).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectsInFlight).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectsInFlight).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsInFlight).Elements.field_0x34 = 0;
  (this->ObjectsInFlight).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectsInFlight).HashSize = 0;
  this->NumObjectsToReport = param_1;
  this->TimeBetweenLogDumps = param_2;
  this->MinTimeBetweenLogDumps = param_3;
  this->TimesToReport = param_4;
  this->GCIndex = 0;
  this->GCCallBackRegistered = false;
  this->LastTimeOfLogDump = 0.0;
  ::FString::FString(&this->OperationPerformed,param_5);
  (this->OnPreGarbageCollectDelegateHandle).ID = 0;
  return this;
}

// ~FDetailedTickStats @ 147ea8ca0

void __thiscall FDetailedTickStats::~FDetailedTickStats(FDetailedTickStats *this)

{
  ulong64 uVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->_padding_ = (longlong)&___7FDetailedTickStats__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  uVar1 = (this->OnPreGarbageCollectDelegateHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    uVar8 = 0;
    if (0 < (this_00->InvocationList).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (this_00->InvocationList).AllocatorInstance.Data + lVar10;
        if (((*(int *)&pFVar9[8].field_0x0 != 0) &&
            (*(longlong **)&pFVar9->field_0x0 != (longlong *)0x0)) &&
           (puVar7 = (ulong64 *)(**(code **)(**(longlong **)&pFVar9->field_0x0 + 0x40))(),
           *puVar7 == uVar1)) {
          if ((*(int *)&pFVar9[8].field_0x0 != 0) &&
             (*(undefined8 **)&pFVar9->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar9->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar9,0,0,0x10);
            *(undefined4 *)&pFVar9[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar8 < (this_00->InvocationList).ArrayNum);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  pFVar9 = (this->OperationPerformed).Data.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  (this->ObjectsInFlight).HashSize = 0;
  FVar2 = (this->ObjectsInFlight).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectsInFlight).Elements);
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectToStatsMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToStatsMap);
  DestructItems<FTickStats,int>
            ((FTickStats *)(this->AllStats).AllocatorInstance.Data,(this->AllStats).ArrayNum);
  pFVar9 = (this->AllStats).AllocatorInstance.Data;
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar9);
  return;
}

// BeginObject @ 147eb0ee0

bool __thiscall FDetailedTickStats::BeginObject(FDetailedTickStats *this,UObject *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  UObject *local_res8;
  UObject *local_res10 [3];
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->ObjectsInFlight).Elements.field_0x8 !=
      *(int *)&(this->ObjectsInFlight).Elements.field_0x34) {
    FVar4 = (this->ObjectsInFlight).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->ObjectsInFlight).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->ObjectsInFlight).HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                    );
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ObjectsInFlight).Elements;
      do {
        if (*(UObject **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          return false;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res10[0] = param_1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
  Emplace<UObject_const_*_const_&>(&this->ObjectsInFlight,&local_res8,(bool *)local_res10);
  return true;
}

// DumpStats @ 147eb78f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDetailedTickStats::DumpStats(FDetailedTickStats *this)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  atomic<double> aVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FTickStats *pFVar11;
  float fVar12;
  FIdentityFunctor local_res8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  aVar4 = FApp::CurrentTime;
  fVar12 = 0.0;
  fVar1 = this->TimeBetweenLogDumps;
  dVar2 = this->LastTimeOfLogDump;
  uVar10 = 0;
  for (uVar8 = uVar10; (-1 < (int)uVar8 && ((int)uVar8 < (this->AllStats).ArrayNum));
      uVar8 = uVar8 + 1) {
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (this->AllStats).AllocatorInstance.Data;
    if (pFVar9[(longlong)(int)uVar8 * 0x38 + 0x34] == (FScriptContainerElement)0x1) {
      fVar12 = fVar12 + *(float *)(pFVar9 + (longlong)(int)uVar8 * 0x38 + 0x2c);
    }
  }
  if (((this->TimesToReport <= fVar12 * __real_447a0000 &&
        fVar12 * __real_447a0000 != this->TimesToReport) || ((double)fVar1 + dVar2 < (double)aVar4))
     && ((double)this->MinTimeBetweenLogDumps < (double)FApp::CurrentTime - this->LastTimeOfLogDump)
     ) {
    this->LastTimeOfLogDump = (double)FApp::CurrentTime;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    iStack_dc = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    iStack_cc = 0;
    for (uVar8 = uVar10; (-1 < (int)uVar8 && ((int)uVar8 < (this->AllStats).ArrayNum));
        uVar8 = uVar8 + 1) {
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (FTickStats *)
                ((this->AllStats).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x38);
      if (pFVar11->bForSummary == true) {
        if (((local_e8.Data <= pFVar11) &&
            (pFVar11 < (FTickStats *)(local_e8.Data + (longlong)iStack_dc * 0x38))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_e0 == iStack_dc) {
          local_e0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_e8,&iStack_dc);
        }
        lVar6 = (longlong)local_e0;
        local_e0 = local_e0 + 1;
        pFVar9 = local_e8.Data + lVar6 * 0x38;
      }
      else {
        if (((local_d8.Data <= pFVar11) &&
            (pFVar11 < (FTickStats *)(local_d8.Data + (longlong)iStack_cc * 0x38))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_d0 == iStack_cc) {
          local_d0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_d8,&iStack_cc);
        }
        lVar6 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        pFVar9 = local_d8.Data + lVar6 * 0x38;
      }
      ::FString::FString((FString *)pFVar9,(FString *)pFVar11);
      ::FString::FString((FString *)(pFVar9 + 0x10),&pFVar11->ObjectDetailedInfo);
      *(FName *)(pFVar9 + 0x20) = pFVar11->ObjectClassFName;
      *(int *)(pFVar9 + 0x28) = pFVar11->GCIndex;
      *(float *)(pFVar9 + 0x2c) = pFVar11->TotalTime;
      *(int *)(pFVar9 + 0x30) = pFVar11->Count;
      pFVar9[0x34] = (FScriptContainerElement)pFVar11->bForSummary;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    AlgoImpl::
    IntroSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_>
              ((FTickStats *)local_e8.Data,local_e0,local_res8,(FTickStats *)&local_c8);
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_70 = 0;
    AlgoImpl::
    IntroSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_>
              ((FTickStats *)local_d8.Data,local_d0,local_res8,(FTickStats *)&local_90);
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    if (4 < (byte)LogLevel._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
    }
    iVar7 = local_e0;
    if (0 < local_e0) {
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar7) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar7 = local_e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((int)uVar10 < this->NumObjectsToReport) && (4 < (byte)LogLevel._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
          iVar7 = local_e0;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar7);
    }
    if (4 < (byte)LogLevel._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
    }
    DestructItems<FTickStats,int>((FTickStats *)local_d8.Data,local_d0);
    if ((FTickStats *)local_d8.Data != (FTickStats *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    DestructItems<FTickStats,int>((FTickStats *)local_e8.Data,local_e0);
    if ((FTickStats *)local_e8.Data != (FTickStats *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return;
}

// EndObject @ 147eb8c50

void __thiscall
FDetailedTickStats::EndObject(FDetailedTickStats *this,UObject *param_1,float param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar7;
  FString *pFVar8;
  uint uVar9;
  uint *puVar10;
  ForAnyElementType FVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint *puVar15;
  int local_res8 [2];
  UObject *local_res10;
  FString local_d8;
  FString local_c8;
  undefined8 local_b8;
  int local_b0;
  float local_ac;
  undefined4 local_a8;
  FScriptContainerElement local_a4;
  TPairInitializer<UObject_const_*_const_&,int_const_&> local_a0;
  int *local_90;
  undefined1 local_88 [24];
  FString local_70;
  FString local_60 [2];
  
  puVar15 = (uint *)0x0;
  local_res8[0] = 0;
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_res10 = param_1;
  if (*(int *)&(this->ObjectToStatsMap).field_0x8 != *(int *)&(this->ObjectToStatsMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ObjectToStatsMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ObjectToStatsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->ObjectToStatsMap).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                    4);
    if (iVar6 != -1) {
      do {
        lVar14 = *(longlong *)&this->ObjectToStatsMap + (longlong)iVar6 * 0x18;
        if (*(UObject **)(*(longlong *)&this->ObjectToStatsMap + (longlong)iVar6 * 0x18) == param_1)
        {
          puVar10 = (uint *)(lVar14 + 8);
          if (lVar14 == 0) {
            puVar10 = puVar15;
          }
          if (puVar10 != (uint *)0x0) {
            uVar9 = *puVar10;
            uVar5 = 0;
            if ((int)uVar9 < (this->AllStats).ArrayNum) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (this->AllStats).AllocatorInstance.Data;
            lVar14 = (longlong)(int)uVar9 * 0x38;
            if (*(int *)(pFVar13 + lVar14 + 0x28) == this->GCIndex) {
LAB_147eb8de7:
              bVar4 = true;
            }
            else {
              pFVar8 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)local_res10,(FString *)(local_88 + 8),
                                  (UObject *)0x0);
              iVar6 = (pFVar8->Data).ArrayNum;
              if (iVar6 == *(int *)(pFVar13 + lVar14 + 8)) {
                if (1 < iVar6) {
                  iVar6 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                                     *(wchar_t **)(pFVar13 + lVar14));
                  bVar4 = iVar6 == 0;
                  goto LAB_147eb8db8;
                }
LAB_147eb8dce:
                if (*(longlong *)(*(longlong *)&local_res10->field_0x10 + 0x18) ==
                    *(longlong *)(pFVar13 + lVar14 + 0x20)) {
                  puVar15 = (uint *)&DAT_00000001;
                  goto LAB_147eb8de7;
                }
              }
              else {
                bVar4 = *(int *)(pFVar13 + lVar14 + 8) + iVar6 == 1;
LAB_147eb8db8:
                if (bVar4) goto LAB_147eb8dce;
              }
              bVar4 = false;
              puVar15 = (uint *)&DAT_00000001;
            }
            if ((puVar15 != (uint *)0x0) &&
               ((FScriptContainerElement *)local_88._8_8_ != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_88._8_8_);
            }
            if (bVar4) {
              iVar6 = this->GCIndex;
              *(int *)(pFVar13 + lVar14 + 0x30) = *(int *)(pFVar13 + lVar14 + 0x30) + 1;
              *(int *)(pFVar13 + lVar14 + 0x28) = iVar6;
              *(float *)(pFVar13 + lVar14 + 0x2c) = param_2 + *(float *)(pFVar13 + lVar14 + 0x2c);
              goto LAB_147eb912d;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar14 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if (this->GCCallBackRegistered == false) {
    this->GCCallBackRegistered = true;
    this_00 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FDetailedTickStats>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)this_00,(FDetailedTickStats *)local_88,(pmf_0cda2a51)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnPreGarbageCollectDelegateHandle).ID = *FVar7.ID;
  }
  local_b0 = this->GCIndex;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_b8 = 0;
  pFVar8 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)local_res10,&local_70,(UObject *)0x0);
  if (&local_d8 != pFVar8) {
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_d8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_d8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pFVar8 = UObject::GetDetailedInfo(local_res10,local_60);
  if (&local_c8 != pFVar8) {
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_c8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  local_b8 = *(undefined8 *)(*(longlong *)&local_res10->field_0x10 + 0x18);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"No_Detailed_Info_Specified");
  if (iVar6 == 0) {
    ::FString::operator=(&local_c8,L"");
  }
  pFVar13 = (this->AllStats).AllocatorInstance.Data;
  local_a8 = 1;
  local_ac = param_2;
  local_a4 = (FScriptContainerElement)param_3;
  if (((pFVar13 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < pFVar13 + (longlong)(this->AllStats).ArrayMax * 0x38))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->AllStats).ArrayNum;
  piVar1 = &(this->AllStats).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->AllStats).AllocatorInstance,piVar1);
  }
  FVar11.Data = local_d8.Data.AllocatorInstance.Data;
  pFVar13 = (this->AllStats).AllocatorInstance.Data;
  (this->AllStats).ArrayNum = iVar6 + 1;
  pFVar13 = pFVar13 + (longlong)iVar6 * 0x38;
  *(undefined8 *)&pFVar13->field_0x0 = 0;
  lVar14 = (longlong)local_d8.Data.ArrayNum;
  *(int *)&pFVar13[8].field_0x0 = local_d8.Data.ArrayNum;
  if (local_d8.Data.ArrayNum == 0) {
    *(int *)(pFVar13 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_d8.Data.ArrayNum,
               (int *)(pFVar13 + 0xc));
    memcpy(*(void **)&pFVar13->field_0x0,FVar11.Data,lVar14 * 2);
  }
  FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  pFVar2 = pFVar13 + 0x10;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  lVar14 = (longlong)local_c8.Data.ArrayNum;
  *(int *)&pFVar13[0x18].field_0x0 = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    *(int *)(pFVar13 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_c8.Data.ArrayNum,
               (int *)(pFVar13 + 0x1c));
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar11.Data,lVar14 * 2);
  }
  *(undefined8 *)&pFVar13[0x20].field_0x0 = local_b8;
  *(int *)&pFVar13[0x28].field_0x0 = local_b0;
  *(float *)(pFVar13 + 0x2c) = local_ac;
  *(undefined4 *)&pFVar13[0x30].field_0x0 = local_a8;
  pFVar13[0x34] = local_a4;
  local_a0.Value = (int *)&local_res10;
  local_90 = local_res8;
  local_res8[0] = iVar6;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,int_const_&>_>
            ((TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
              *)&this->ObjectToStatsMap,&local_a0,(bool *)&local_a0.Value);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_147eb912d:
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::Remove
            (&this->ObjectsInFlight,local_res10);
  return;
}

// OnPreGarbageCollect @ 147ed0460

void __thiscall FDetailedTickStats::OnPreGarbageCollect(FDetailedTickStats *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->GCIndex = this->GCIndex + 1;
  if (*(int *)&(this->ObjectsInFlight).Elements.field_0x8 !=
      *(int *)&(this->ObjectsInFlight).Elements.field_0x34) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectsInFlight.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\UnrealEngine.h"
                       ,0xf1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Reset @ 147ed8de0

void __thiscall FDetailedTickStats::Reset(FDetailedTickStats *this)

{
  int *piVar1;
  TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
  *this_00;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  DestructItems<FTickStats,int>
            ((FTickStats *)(this->AllStats).AllocatorInstance.Data,(this->AllStats).ArrayNum);
  piVar1 = &(this->AllStats).ArrayMax;
  (this->AllStats).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->AllStats).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ObjectToStatsMap;
  bVar4 = 1 < *(int *)&(this->ObjectToStatsMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->ObjectToStatsMap).field_0xc;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ObjectToStatsMap).field_0x2c;
  *(undefined4 *)&(this->ObjectToStatsMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ObjectToStatsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectToStatsMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ObjectToStatsMap).field_0x48 = 1;
    TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

