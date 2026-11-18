// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 21

// FGeometryCacheStreamingManager @ 14ca06d70

FGeometryCacheStreamingManager * __thiscall
FGeometryCacheStreamingManager::FGeometryCacheStreamingManager(FGeometryCacheStreamingManager *this)

{
  this->_padding_ = (longlong)&___7IGeometryCacheStreamingManager__6B_;
  this->_padding_ = (longlong)&___7FGeometryCacheStreamingManager__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->StreamingGeometryCaches = 0;
  *(undefined8 *)&(this->StreamingGeometryCaches).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingGeometryCaches).field_0x20 = 0;
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x28 = 0;
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x34 = 0;
  *(undefined8 *)&(this->StreamingGeometryCaches).field_0x40 = 0;
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x48 = 0;
  (this->StreamingComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingComponents).ArrayNum = 0;
  (this->StreamingComponents).ArrayMax = 0;
  (this->StreamingGeometryCachesLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FGeometryCacheStreamingManager @ 14ca08e90

void __thiscall
FGeometryCacheStreamingManager::~FGeometryCacheStreamingManager
          (FGeometryCacheStreamingManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FGeometryCacheStreamingManager__6B_;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  }
  pFVar1 = (this->StreamingComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StreamingGeometryCaches).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StreamingGeometryCaches).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamingGeometryCaches);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddGeometryCache @ 14ca0dca0

void __thiscall
FGeometryCacheStreamingManager::AddGeometryCache
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStreamingGeometryCacheData **ppFVar3;
  FStreamingGeometryCacheData *this_00;
  FStreamingGeometryCacheData *pFVar4;
  uint uVar5;
  UGeometryCacheTrackStreamable *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = (*IsInAsyncLoadingThread)();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAsyncLoadingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0xd9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  uVar5 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  ppFVar3 = TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
            ::FindOrAddImpl<UGeometryCacheTrackStreamable_*_const_&>
                      ((TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
                        *)&this->StreamingGeometryCaches,uVar5 >> 0x10 ^ uVar5,local_res10);
  if (*ppFVar3 == (FStreamingGeometryCacheData *)0x0) {
    this_00 = ::operator_new(0x140);
    pFVar4 = (FStreamingGeometryCacheData *)0x0;
    if (this_00 != (FStreamingGeometryCacheData *)0x0) {
      pFVar4 = FStreamingGeometryCacheData::FStreamingGeometryCacheData(this_00,local_res10[0]);
    }
    *ppFVar3 = pFVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return;
}

// AddLevel @ 14ca0dd80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGeometryCacheStreamingManager::AddLevel(FGeometryCacheStreamingManager *this,ULevel *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0xca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AddStreamingComponent @ 14ca0e190

void __thiscall
FGeometryCacheStreamingManager::AddStreamingComponent
          (FGeometryCacheStreamingManager *this,UGeometryCacheComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UGeometryCacheComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0x112,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UGeometryCacheComponent_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(&this->StreamingComponents,local_res10);
  (**(code **)(this->_padding_ + 200))(this,local_res10[0]);
  return;
}

// BlockTillAllRequestsFinished @ 14ca0ecb0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGeometryCacheStreamingManager::BlockTillAllRequestsFinished
          (FGeometryCacheStreamingManager *this,float param_1,bool param_2)

{
  TMap<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
  *pTVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_BlockTillAllRequestsFinished> FVar10;
  ulonglong uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  
  iVar14 = 0;
  iVar16 = 0;
  FVar10 = StatPtr_STAT_BlockTillAllRequestsFinished;
  if (StatPtr_STAT_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<FStat_STAT_BlockTillAllRequestsFinished>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_BlockTillAllRequestsFinished");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_BlockTillAllRequestsFinished>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlockTillAllRequestsFinished,
                        *pFVar9,L"Wait Untill Requests Finished","STATGROUP_GeometryCache",
                        "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar15 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar15 == 0)) {
LAB_14ca0eded:
    bVar5 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                   ,0x9e);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0eded;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  pTVar1 = &this->StreamingGeometryCaches;
  local_68 = (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (param_1 == 0.0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_c8,
               (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_60 = 0;
    stack0xffffffffffffff78 = local_c8._16_16_;
    local_98 = (longlong *)local_c8._0_8_;
    auStack_90._0_8_ = local_c8._8_8_;
    local_78 = local_a8;
    pTStack_70 = pTStack_a0;
    uVar11 = local_c8._24_8_ >> 0x20;
    iVar16 = iVar14;
    if (*(int *)(local_c8._16_8_ + 0x18) <= local_c8._28_4_) goto LAB_14ca0eff0;
    do {
      FStreamingGeometryCacheData::BlockTillAllRequestsFinished
                (*(FStreamingGeometryCacheData **)(*local_98 + 8 + (longlong)(int)uVar11 * 0x18),0.0
                );
      uStack_80 = uStack_80 & ~auStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
      uVar11 = (ulonglong)uStack_7c;
    } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
    if ((char)local_60 == '\0') goto LAB_14ca0eff0;
  }
  else {
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_c8,
               (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    fVar7 = __real_3a83126f;
    local_60 = 0;
    stack0xffffffffffffff78 = local_c8._16_16_;
    local_98 = (longlong *)local_c8._0_8_;
    auStack_90._0_8_ = local_c8._8_8_;
    local_78 = local_a8;
    pTStack_70 = pTStack_a0;
    uVar11 = local_c8._24_8_ >> 0x20;
    if (*(int *)(local_c8._16_8_ + 0x18) <= local_c8._28_4_) goto LAB_14ca0eff0;
    do {
      QueryPerformanceCounter(&local_res8);
      fVar17 = (float)((dVar3 + (double)param_1) -
                      (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                      FGenericPlatformTime::SecondsPerCycle);
      if ((fVar17 < fVar7) ||
         (bVar8 = FStreamingGeometryCacheData::BlockTillAllRequestsFinished
                            (*(FStreamingGeometryCacheData **)
                              (*local_98 + 8 + (longlong)(int)uVar11 * 0x18),fVar17), !bVar8)) {
        iVar16 = 1;
        break;
      }
      uStack_80 = uStack_80 & ~auStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
      uVar11 = (ulonglong)uStack_7c;
      iVar16 = 0;
    } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
    if ((char)local_60 == '\0') goto LAB_14ca0eff0;
  }
  if (local_60._1_1_ != '\0') {
    iVar14 = 1;
    uVar15 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34;
    if (3 < uVar15) {
      uVar11 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((0 < (int)uVar15) && (local_68->HashSize < iVar14)) || (iVar14 < local_68->HashSize)) {
      local_68->HashSize = iVar14;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::Rehash(local_68);
    }
  }
LAB_14ca0eff0:
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return iVar16;
}

// CancelForcedResources @ 14ca0fc90

void __thiscall
FGeometryCacheStreamingManager::CancelForcedResources(FGeometryCacheStreamingManager *this)

{
  return;
}

// IsManagedComponent @ 14ca23610

bool __thiscall
FGeometryCacheStreamingManager::IsManagedComponent
          (FGeometryCacheStreamingManager *this,UGeometryCacheComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0x14a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar5 = (this->StreamingComponents).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->StreamingComponents).ArrayNum * 8;
  while( true ) {
    if (pFVar5 == pFVar1) {
      return false;
    }
    if (*(UGeometryCacheComponent **)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 8;
  }
  return true;
}

// IsManagedGeometryCache @ 14ca23690

bool __thiscall
FGeometryCacheStreamingManager::IsManagedGeometryCache
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->StreamingGeometryCaches).field_0x8 !=
      *(int *)&(this->StreamingGeometryCaches).field_0x34) {
    puVar6 = *(undefined1 **)&(this->StreamingGeometryCaches).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->StreamingGeometryCaches).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->StreamingGeometryCaches).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(UGeometryCacheTrackStreamable **)
             (*(longlong *)&this->StreamingGeometryCaches + (longlong)iVar4 * 0x18) == param_1)
        goto LAB_14ca2375c;
        iVar4 = *(int *)(*(longlong *)&this->StreamingGeometryCaches + 0x10 + (longlong)iVar4 * 0x18
                        );
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14ca2375c:
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return iVar4 != -1;
}

// IsStreamingInProgress @ 14ca23b10

bool __thiscall
FGeometryCacheStreamingManager::IsStreamingInProgress
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FStreamingGeometryCacheData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FStreamingGeometryCacheData **ppFVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0x104,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  ppFVar5 = TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
            ::Find((TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
                    *)&this->StreamingGeometryCaches,param_1);
  if (ppFVar5 == (FStreamingGeometryCacheData **)0x0) {
    bVar3 = false;
  }
  else {
    if (*ppFVar5 == (FStreamingGeometryCacheData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("*CacheData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0x10a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = *ppFVar5;
    lpCriticalSection = &pFVar1->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar3 = 0 < (pFVar1->ChunksRequested).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return bVar3;
}

// MapChunk @ 14ca23fb0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FGeometryCacheStreamingManager::MapChunk
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1,uint param_2,
          uint *param_3)

{
  FStreamingGeometryCacheData **ppFVar1;
  uchar *puVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  ppFVar1 = TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
            ::Find((TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
                    *)&this->StreamingGeometryCaches,param_1);
  if (ppFVar1 == (FStreamingGeometryCacheData **)0x0) {
    if (1 < (byte)LogGeoCaStreaming._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreaming);
    }
    puVar2 = (uchar *)0x0;
  }
  else {
    puVar2 = FStreamingGeometryCacheData::MapChunk(*ppFVar1,param_2,param_3);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return puVar2;
}

// NotifyLevelChange @ 14ca24280

void __thiscall
FGeometryCacheStreamingManager::NotifyLevelChange(FGeometryCacheStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 14ca24290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGeometryCacheStreamingManager::NotifyLevelOffset
          (FGeometryCacheStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PrefetchData @ 14ca27040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCacheStreamingManager::PrefetchData
          (FGeometryCacheStreamingManager *this,UGeometryCacheComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res18;
  UGeometryCacheComponent *local_res20;
  code *local_38 [2];
  undefined **local_28;
  FGeometryCacheStreamingManager *local_20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    PrefetchDataInternal(this,param_1);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UGeometryCacheComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UGeometryCacheComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>
              ::_vftable_;
  local_18 = local_res18;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FGeometryCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,void>
                ::Call;
  local_20 = this;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// PrefetchDataInternal @ 14ca27cb0

void __thiscall
FGeometryCacheStreamingManager::PrefetchDataInternal
          (FGeometryCacheStreamingManager *this,UGeometryCacheComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGeometryCache *pUVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [16];
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0x120,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  cVar9 = (**(code **)(this->_padding_ + 0xd0))(this,param_1);
  if ((cVar9 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsManagedComponent(CacheComponent)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0x121,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  pUVar3 = (param_1->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar3 != (UGeometryCache *)0x0) {
    pFVar15 = (pUVar3->Tracks).AllocatorInstance.Data;
    iVar2 = (pUVar3->Tracks).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Tracks).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UGeometryCacheTrack>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar1) break;
      uVar4 = *(ulonglong *)pFVar15;
      if (uVar4 != 0) {
        pUVar12 = UGeometryCacheTrackStreamable::StaticClass();
        iVar11 = (int)pUVar12->_padding_;
        if ((iVar11 <= *(int *)(*(longlong *)(uVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar12->_padding_)) {
          uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          if (*(int *)&(this->StreamingGeometryCaches).field_0x8 !=
              *(int *)&(this->StreamingGeometryCaches).field_0x34) {
            puVar5 = *(undefined1 **)&(this->StreamingGeometryCaches).field_0x40;
            puVar13 = &(this->StreamingGeometryCaches).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar13 = puVar5;
            }
            iVar11 = *(int *)(puVar13 +
                             (ulonglong)
                             (*(int *)&(this->StreamingGeometryCaches).field_0x48 - 1U &
                             (uVar10 >> 0x10 ^ uVar10)) * 4);
            if (iVar11 != -1) {
              lVar6 = *(longlong *)&this->StreamingGeometryCaches;
              do {
                if (*(ulonglong *)(lVar6 + (longlong)iVar11 * 0x18) == uVar4) {
                  if ((iVar11 != -1) && (lVar6 = lVar6 + (longlong)iVar11 * 0x18, lVar6 != 0)) {
                    puVar14 = (undefined8 *)(lVar6 + 8);
                    if (puVar14 == (undefined8 *)0x0) goto LAB_14ca27e2a;
                    goto LAB_14ca27e50;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar6 + 0x10 + (longlong)iVar11 * 0x18);
              } while (iVar11 != -1);
            }
          }
          puVar14 = (undefined8 *)0x0;
LAB_14ca27e2a:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                             ,300,
                             L"No data could be prefetched for a track becasue the track was not registered with the manager."
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14ca27e50:
          FStreamingGeometryCacheData::PrefetchData((FStreamingGeometryCacheData *)*puVar14,param_1)
          ;
        }
      }
      pFVar15 = pFVar15 + 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ca27ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return;
}

// RemoveGeometryCache @ 14ca293b0

void __thiscall
FGeometryCacheStreamingManager::RemoveGeometryCache
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStreamingGeometryCacheData **ppFVar3;
  uint uVar4;
  FStreamingGeometryCacheData *this_00;
  UGeometryCacheTrackStreamable *local_res8;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0xe5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FStreamingGeometryCacheData *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  ppFVar3 = TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
            ::Find((TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
                    *)&this->StreamingGeometryCaches,param_1);
  if (ppFVar3 != (FStreamingGeometryCacheData **)0x0) {
    this_00 = *ppFVar3;
    local_res8 = param_1;
    if (*(int *)&(this->StreamingGeometryCaches).field_0x8 !=
        *(int *)&(this->StreamingGeometryCaches).field_0x34) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UGeometryCacheTrackStreamable_const_*>
                ((TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  *)&this->StreamingGeometryCaches,uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->StreamingGeometryCachesLock);
  if (this_00 != (FStreamingGeometryCacheData *)0x0) {
    FStreamingGeometryCacheData::~FStreamingGeometryCacheData(this_00);
    ::operator_delete(this_00,0x140);
  }
  return;
}

// RemoveLevel @ 14ca294a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGeometryCacheStreamingManager::RemoveLevel(FGeometryCacheStreamingManager *this,ULevel *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveStreamingComponent @ 14ca29700

void __thiscall
FGeometryCacheStreamingManager::RemoveStreamingComponent
          (FGeometryCacheStreamingManager *this,UGeometryCacheComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UGeometryCacheComponent *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UGeometryCacheComponent *local_res10;
  
  local_res10 = param_1;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                         ,0x11a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->StreamingComponents).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->StreamingComponents).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->StreamingComponents).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->StreamingComponents).AllocatorInstance.Data;
    bVar4 = *(UGeometryCacheComponent **)pFVar2 != local_res10;
    lVar6 = 0;
    pUVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UGeometryCacheComponent **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->StreamingComponents).ArrayNum = iVar9;
  }
  return;
}

// SetDisregardWorldResourcesForFrames @ 14ca2aac0

void __thiscall
FGeometryCacheStreamingManager::SetDisregardWorldResourcesForFrames
          (FGeometryCacheStreamingManager *this,int param_1)

{
  return;
}

// UnmapChunk @ 14ca2c980

void __thiscall
FGeometryCacheStreamingManager::UnmapChunk
          (FGeometryCacheStreamingManager *this,UGeometryCacheTrackStreamable *param_1,uint param_2)

{
  FStreamingGeometryCacheData **ppFVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  ppFVar1 = TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
            ::Find((TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
                    *)&this->StreamingGeometryCaches,param_1);
  if (ppFVar1 != (FStreamingGeometryCacheData **)0x0) {
    FStreamingGeometryCacheData::UnmapChunk(*ppFVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ca2c9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  return;
}

// UpdateResourceStreaming @ 14ca2e580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCacheStreamingManager::UpdateResourceStreaming
          (FGeometryCacheStreamingManager *this,float param_1,bool param_2)

{
  longlong lVar1;
  FName FVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  TConsoleVariableData<float> *pTVar11;
  TConsoleVariableData<float> *pTVar12;
  FObjectPtr_u_0 this_00;
  LARGE_INTEGER LVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_UpdateResourceStreaming> FVar18;
  UClass *pUVar19;
  FThreadSafeStaticStat<FStat_STAT_IOBandwidth> FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulonglong uVar21;
  undefined1 *puVar22;
  FObjectPtr_u_0 *pFVar23;
  ForAnyElementType FVar24;
  FScriptContainerElement *pFVar25;
  TMap<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
  *pTVar26;
  uint uVar27;
  FObjectPtr_u_0 *pFVar28;
  FScriptContainerElement *pFVar29;
  longlong *plVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  FObjectPtr_u_0 *local_1f0;
  FColor_u_0 local_1e8;
  int local_1e4;
  uint local_1e0;
  uint local_1dc;
  FObjectPtr_u_0 local_1d8;
  LARGE_INTEGER local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  FName local_1b8;
  TMap<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
  *local_1b0;
  FScriptContainerElement *local_1a8;
  FName local_1a0;
  FName local_198;
  undefined4 local_188;
  longlong local_180;
  FScriptContainerElement *local_178;
  FName local_170;
  FStatMessage local_168;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  FName local_d8;
  FName local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  *pTStack_70;
  
  FVar18 = StatPtr_STAT_UpdateResourceStreaming;
  if (StatPtr_STAT_UpdateResourceStreaming ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateResourceStreaming>)0x0) {
    pFVar17 = ::FName::FName(&local_d8,"STAT_UpdateResourceStreaming");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_UpdateResourceStreaming>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateResourceStreaming,*pFVar17,
                        L"Update Resource Streaming","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar18;
  bVar8 = false;
  bVar7 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                   ,0x5a);
        bVar8 = true;
        bVar7 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar14 = true;
      goto LAB_14ca2e701;
    }
  }
  bVar8 = bVar15;
  bVar7 = bVar14;
  bVar14 = false;
  local_1a0 = local_198;
LAB_14ca2e701:
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheStreamingManager.cpp"
                          ,0x5b,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
  pTVar26 = &this->StreamingGeometryCaches;
  local_1b0 = pTVar26;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_c8,
             (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              *)pTVar26);
  local_120 = 0;
  stack0xfffffffffffffeb8 = local_c8._16_16_;
  local_158 = (longlong *)local_c8._0_8_;
  auStack_150._0_8_ = local_c8._8_8_;
  local_138 = local_a8;
  pTStack_130 = pTStack_a0;
  uVar21 = local_c8._24_8_ >> 0x20;
  local_128 = (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
               *)pTVar26;
  if (local_c8._28_4_ < *(int *)(local_c8._16_8_ + 0x18)) {
    do {
      lVar3 = *(longlong *)(*local_158 + 8 + (longlong)(int)uVar21 * 0x18);
      *(undefined4 *)(lVar3 + 0x10) = 0;
      if (*(int *)(lVar3 + 0x14) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar3 + 8),0,(int *)(lVar3 + 0x14));
      }
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar21 = (ulonglong)uStack_13c;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
      uVar27 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      iVar16 = 1;
      if (3 < uVar27) {
        uVar21 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_188 = (undefined4)lVar3;
        iVar16 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar27) && (local_128->HashSize < iVar16)) || (iVar16 < local_128->HashSize)) {
        local_128->HashSize = iVar16;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  fVar10 = __real_c6610000;
  fVar9 = __real_46610000;
  local_1dc = (this->StreamingComponents).ArrayNum;
  uVar21 = (ulonglong)(int)local_1dc;
  pFVar29 = (this->StreamingComponents).AllocatorInstance.Data;
  pFVar25 = pFVar29 + uVar21 * 8;
  local_178 = pFVar25;
  do {
    local_1a8 = pFVar29;
    if ((this->StreamingComponents).ArrayNum != (int)uVar21) {
      local_1f8 = 0;
      `TCheckedPointerIterator<UGeometryCacheComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f8);
    }
    if (pFVar29 == pFVar25) {
      QueryPerformanceCounter(&local_1d0);
      FVar2 = local_1a0;
      dVar6 = (double)local_1d0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      LOCK();
      lVar3 = this->_padding_;
      *(undefined4 *)&this->_padding_ = 0;
      local_1d0.s.HighPart = 0;
      local_1d0.s.LowPart = (uint)lVar3;
      UNLOCK();
      dVar6 = dVar6 + __real_4170000000000000;
      FVar20 = StatPtr_STAT_IOBandwidth;
      if (StatPtr_STAT_IOBandwidth == (FThreadSafeStaticStat<FStat_STAT_IOBandwidth>)0x0) {
        pFVar17 = ::FName::FName(&local_d0,"STAT_IOBandwidth");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_IOBandwidth>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IOBandwidth,*pFVar17,
                            L"IO Bandwidth","STATGROUP_GeometryCache","STATCAT_Advanced",
                            L"GeometryCache",true,false,ST_int64,false,false,MCR_Physical);
      }
      iVar16 = 1;
      FVar4 = *(FName *)FVar20;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        LVar13 = local_1d0;
        local_168.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
        local_168.StatData.Pad = (uchar  [8])(local_1d0.QuadPart & 0xffffffff);
        local_170 = FVar4;
        local_168.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_168);
        FStatsTrace::Set(&local_170,LVar13.QuadPart & 0xffffffff);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
      pTVar26 = &this->StreamingGeometryCaches;
      this->LastTickTime = dVar6;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  *)pTVar26);
      local_e0 = 0;
      stack0xfffffffffffffef8 = local_98._16_16_;
      local_118 = (longlong *)local_98._0_8_;
      auStack_110._0_8_ = local_98._8_8_;
      local_f8 = local_78;
      pTStack_f0 = pTStack_70;
      uVar21 = local_98._24_8_ >> 0x20;
      local_e8 = (TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  *)pTVar26;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          FStreamingGeometryCacheData::UpdateStreamingStatus
                    (*(FStreamingGeometryCacheData **)
                      (*local_118 + 8 + (longlong)(int)uVar21 * 0x18));
          uStack_100 = uStack_100 & ~auStack_110._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
          uVar21 = (ulonglong)uStack_fc;
        } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
        if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
          uVar27 = *(int *)&(local_e8->Elements).field_0x8 -
                   *(int *)&(local_e8->Elements).field_0x34;
          if (3 < uVar27) {
            uVar21 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar16 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar27) && (local_e8->HashSize < iVar16)) || (iVar16 < local_e8->HashSize))
          {
            local_e8->HashSize = iVar16;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::Rehash(local_e8);
          }
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->StreamingGeometryCachesLock);
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar14) {
        FThreadStats::AddMessage(FVar2,CycleScopeEnd);
      }
      return;
    }
    lVar3 = *(longlong *)pFVar29;
    local_180 = *(longlong *)(lVar3 + 0x590);
    if (local_180 != 0) {
      local_1e0 = *(uint *)(local_180 + 0x58);
      uVar21 = (ulonglong)(int)local_1e0;
      pFVar28 = *(FObjectPtr_u_0 **)(local_180 + 0x50);
      local_1f0 = pFVar28 + uVar21;
      pFVar23 = local_1f0;
      while( true ) {
        if (*(int *)(local_180 + 0x58) != (int)uVar21) {
          local_1f7 = 0;
          `TCheckedPointerIterator<TObjectPtr<UGeometryCacheTrack>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1f7);
        }
        pFVar25 = local_178;
        pFVar29 = local_1a8;
        if (pFVar28 == pFVar23) break;
        local_1d8 = (FObjectPtr_u_0)pFVar28->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14ca2e913:
          if ((UGeometryCacheTrackStreamable *)local_1d8.Handle ==
              (UGeometryCacheTrackStreamable *)0x0) goto LAB_14ca2eb56;
          pUVar19 = UGeometryCacheTrackStreamable::StaticClass();
          bVar15 = FObjectPtr::IsA((FObjectPtr *)&local_1d8,pUVar19);
          this_00 = local_1d8;
          pTVar12 = CVarTrailingSeconds.Ref;
          if (((!bVar15) ||
              (pFVar23 = local_1f0,
              (UGeometryCacheTrackStreamable *)local_1d8.Handle ==
              (UGeometryCacheTrackStreamable *)0x0)) ||
             (uVar27 = ((uint)((ulonglong)local_1d8.Handle >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_1d8.Handle >> 4)) * -0x7a143595,
             uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb,
             *(int *)&(this->StreamingGeometryCaches).field_0x8 ==
             *(int *)(&pTVar26->field_0x0 + 0x34))) goto LAB_14ca2eb56;
          puVar22 = &pTVar26->field_0x38;
          if (*(undefined1 **)(&pTVar26->field_0x38 + 8) != (undefined1 *)0x0) {
            puVar22 = *(undefined1 **)(&pTVar26->field_0x38 + 8);
          }
          iVar16 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&pTVar26->field_0x48 - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
          if (iVar16 == -1) goto LAB_14ca2eb56;
          do {
            lVar1 = *(longlong *)&pTVar26->field_0x0 + (longlong)iVar16 * 0x18;
            if (*(UGeometryCacheTrackStreamable **)
                 (*(longlong *)&pTVar26->field_0x0 + (longlong)iVar16 * 0x18) ==
                (UGeometryCacheTrackStreamable *)local_1d8.Handle) {
              plVar30 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar30 = (longlong *)0x0;
              }
              if (plVar30 != (longlong *)0x0) {
                fVar33 = *(float *)(lVar3 + 0x59c);
                if (fVar9 <= *(float *)(lVar3 + 0x59c)) {
                  fVar33 = fVar9;
                }
                if (fVar33 <= fVar10) {
                  fVar33 = fVar10;
                }
                fVar32 = *(float *)(lVar3 + 0x5ac);
                bVar15 = IsInParallelGameThread();
                if (((!bVar15) && (bVar15 = IsInGameThread(), !bVar15)) &&
                   (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007945>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6c9,"GetShadowIndex() == 0"), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar11 = CVarLookaheadSeconds.Ref;
                fVar33 = (fVar33 + fVar32) - pTVar12->ShadowedValue[0] * *(float *)(lVar3 + 0x5f8);
                bVar15 = IsInParallelGameThread();
                if (((!bVar15) && (bVar15 = IsInGameThread(), !bVar15)) &&
                   (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007945>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6c9,"GetShadowIndex() == 0"), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                fVar31 = pTVar11->ShadowedValue[0] * *(float *)(lVar3 + 0x5f8) + fVar33;
                fVar32 = fVar31;
                if (fVar31 < fVar33) {
                  fVar32 = fVar33;
                  fVar33 = fVar31;
                }
                local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1c8.ArrayNum = 0;
                local_1c8.ArrayMax = 0;
                UGeometryCacheTrackStreamable::GetChunksForTimeRange
                          ((UGeometryCacheTrackStreamable *)this_00.Handle,fVar33,fVar32,
                           *(bool *)(lVar3 + 0x599),&local_1c8);
                iVar16 = local_1c8.ArrayNum;
                uVar21 = (ulonglong)local_1c8.ArrayNum;
                pFVar25 = local_1c8.AllocatorInstance.Data + uVar21 * 4;
                FVar24.Data = local_1c8.AllocatorInstance.Data;
                while( true ) {
                  if ((int)uVar21 != iVar16) {
                    local_1f6[0] = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_1f6);
                  }
                  if (FVar24.Data == pFVar25) break;
                  local_1e4 = *(int *)FVar24.Data;
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar30 + 8),&local_1e4);
                  uVar21 = local_1c8._8_8_ & 0xffffffff;
                  FVar24.Data = FVar24.Data + 4;
                }
                pFVar23 = local_1f0;
                pTVar26 = local_1b0;
                if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.AllocatorInstance.Data);
                  pFVar23 = local_1f0;
                  pTVar26 = local_1b0;
                }
              }
              goto LAB_14ca2eb56;
            }
            iVar16 = *(int *)(lVar1 + 0x10);
          } while (iVar16 != -1);
          pFVar28 = pFVar28 + 1;
          uVar21 = (ulonglong)local_1e0;
        }
        else {
          if ((UGeometryCacheTrackStreamable *)local_1d8.Handle !=
              (UGeometryCacheTrackStreamable *)0x0) {
            UE::GC::MarkAsReachable(local_1d8.Handle);
            goto LAB_14ca2e913;
          }
LAB_14ca2eb56:
          pFVar28 = pFVar28 + 1;
          uVar21 = (ulonglong)local_1e0;
        }
      }
    }
    uVar21 = (ulonglong)local_1dc;
    pFVar29 = pFVar29 + 8;
  } while( true );
}

