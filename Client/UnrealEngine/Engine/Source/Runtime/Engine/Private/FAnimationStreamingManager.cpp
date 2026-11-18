// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FAnimationStreamingManager @ 1473d55d0

FAnimationStreamingManager * __thiscall
FAnimationStreamingManager::FAnimationStreamingManager(FAnimationStreamingManager *this)

{
  this->_padding_ = 0;
  *(undefined8 *)&this->StreamingAnimations = 0;
  *(undefined8 *)&(this->StreamingAnimations).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingAnimations).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FAnimationStreamingManager__6B_;
  *(undefined4 *)&(this->StreamingAnimations).field_0x28 = 0;
  *(undefined4 *)&(this->StreamingAnimations).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingAnimations).field_0x34 = 0;
  *(undefined4 *)&(this->StreamingAnimations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StreamingAnimations).field_0x40 = 0;
  *(undefined4 *)&(this->StreamingAnimations).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~FAnimationStreamingManager @ 1473d9da0

void __thiscall
FAnimationStreamingManager::~FAnimationStreamingManager(FAnimationStreamingManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FAnimationStreamingManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->StreamingAnimations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StreamingAnimations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamingAnimations);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddLevel @ 1473e12d0

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
FAnimationStreamingManager::AddLevel(FAnimationStreamingManager *this,ULevel *param_1)

{
  return;
}

// AddStreamingAnim @ 1473e1600

void __thiscall
FAnimationStreamingManager::AddStreamingAnim
          (FAnimationStreamingManager *this,UAnimStreamable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *pTVar3;
  FStreamingAnimationData *pFVar4;
  TPairInitializer<UAnimStreamable_*_const_&,FStreamingAnimationData_*_const_&> local_res8;
  FStreamingAnimationData *local_res18 [2];
  FStreamingAnimationData ***local_38;
  FStreamingAnimationData **local_30;
  
  lpCriticalSection = &this->CriticalSection;
  local_res8.Value = (FStreamingAnimationData **)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                   *)&this->StreamingAnimations,(UAnimStreamable *)local_res8.Value);
  if ((pTVar3 == (TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *)0x0) ||
     (*(longlong *)&pTVar3->field_0x8 == 0)) {
    pFVar4 = ::operator_new(0x78);
    local_res18[0] = (FStreamingAnimationData *)0x0;
    if (pFVar4 != (FStreamingAnimationData *)0x0) {
      pFVar4->StreamableAnim = (UAnimStreamable *)0x0;
      (pFVar4->LoadedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->LoadedChunks).ArrayNum = 0;
      (pFVar4->LoadedChunks).ArrayMax = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pFVar4->LoadedChunksCritcalSection,4000);
      (pFVar4->LoadedChunkIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->LoadedChunkIndices).ArrayNum = 0;
      (pFVar4->LoadedChunkIndices).ArrayMax = 0;
      (pFVar4->RequestedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->RequestedChunks).ArrayNum = 0;
      (pFVar4->RequestedChunks).ArrayMax = 0;
      (pFVar4->LoadFailedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->LoadFailedChunks).ArrayNum = 0;
      (pFVar4->LoadFailedChunks).ArrayMax = 0;
      pFVar4->AnimationStreamingManager = (FAnimationStreamingManager *)0x0;
      FStreamingAnimationData::ResetRequestedChunks(pFVar4);
      local_res18[0] = pFVar4;
    }
    bVar2 = FStreamingAnimationData::Initialize
                      (local_res18[0],(UAnimStreamable *)local_res8.Value,this);
    pFVar4 = local_res18[0];
    if (bVar2) {
      local_38 = &local_res8.Value;
      local_30 = local_res18;
      TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UAnimStreamable_*_const_&,FStreamingAnimationData_*_const_&>_>
                ((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                  *)&this->StreamingAnimations,&local_res8,(bool *)&local_38);
    }
    else if (local_res18[0] != (FStreamingAnimationData *)0x0) {
      pFVar1 = (local_res18[0]->LoadFailedChunks).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar4->RequestedChunks).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar4->LoadedChunkIndices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar4->LoadedChunksCritcalSection);
      DestructItems<FLoadedAnimationChunk,int>
                ((FLoadedAnimationChunk *)(pFVar4->LoadedChunks).AllocatorInstance.Data,
                 (pFVar4->LoadedChunks).ArrayNum);
      pFVar1 = (pFVar4->LoadedChunks).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar4,0x78);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// BlockTillAllRequestsFinished @ 1473edbd0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FAnimationStreamingManager::BlockTillAllRequestsFinished
          (FAnimationStreamingManager *this,float param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_int___cdecl_FAnimationStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_3_::FStat_FAnimStreamingManager_BlockTillAllRequestsFinished>
  FVar16;
  longlong lVar17;
  FName FVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  ulonglong local_res20;
  undefined1 local_168 [8];
  ulonglong local_160;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FColor_u_0 local_128 [2];
  FName local_120;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_118;
  FName local_110;
  int local_100;
  int local_fc;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FName local_88;
  FName local_80 [4];
  int local_5c;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar24 = 0;
  iVar20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FAnimStreamingManager_BlockTillAllRequestsFinished ==
        (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FAnimationStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_3_::FStat_FAnimStreamingManager_BlockTillAllRequestsFinished>
         )0x0) {
      pFVar15 = ::FName::FName(&local_88,"FAnimStreamingManager_BlockTillAllRequestsFinished");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_FAnimStreamingManager_BlockTillAllRequestsFinished,*pFVar15,
                 L"FAnimStreamingManager_BlockTillAllRequestsFinished","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_FAnimStreamingManager_BlockTillAllRequestsFinished;
  if (StatPtr_FAnimStreamingManager_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FAnimationStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_3_::FStat_FAnimStreamingManager_BlockTillAllRequestsFinished>
       )0x0) {
    pFVar15 = ::FName::FName(local_80,"FAnimStreamingManager_BlockTillAllRequestsFinished");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FAnimationStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_3_::FStat_FAnimStreamingManager_BlockTillAllRequestsFinished>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FAnimStreamingManager_BlockTillAllRequestsFinished,*pFVar15,
                          L"FAnimStreamingManager_BlockTillAllRequestsFinished","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_1473edd7c:
    bVar10 = bVar14;
    bVar9 = bVar13;
    bVar13 = false;
    FVar18 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_120.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                   ,0x19d);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1473edd7c;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar13 = true;
  }
  pTVar1 = &this->StreamingAnimations;
  puVar2 = &(this->StreamingAnimations).field_0x10;
  local_158 = pTVar1;
  local_148 = puVar2;
  local_118 = pTVar1;
  if (param_1 != 0.0) {
    QueryPerformanceCounter(&local_f8);
    iVar20 = *(int *)&(this->StreamingAnimations).field_0x28;
    local_160 = 1;
    iStack_150 = 0;
    local_res20 = CONCAT44(local_res20._4_4_,1);
    dVar8 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    iStack_13c = iStack_150;
    local_138 = iStack_150;
    if (iVar20 != 0) {
      puVar22 = *(uint **)&(this->StreamingAnimations).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar2;
      }
      uVar19 = *puVar22;
      local_138 = iVar24;
      iStack_150 = iVar24;
      while (uVar19 == 0) {
        lVar17 = (longlong)iStack_150;
        local_138 = local_138 + 0x20;
        iStack_150 = iStack_150 + 1;
        iStack_13c = iVar20;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150)
        goto LAB_1473ee044;
        uVar19 = puVar22[lVar17 + 1];
      }
      local_res20 = (ulonglong)(-uVar19 & uVar19);
      uVar3 = local_res20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_fc = (int)lVar17;
      iStack_13c = local_138 + -1 + local_fc;
      if (iVar20 < iStack_13c) {
        iStack_13c = iVar20;
      }
    }
LAB_1473ee044:
    uStack_14c = (undefined4)local_res20;
    iStack_130 = *(int *)&(this->StreamingAnimations).field_0x8 -
                 *(int *)&(this->StreamingAnimations).field_0x34;
    uVar19 = *(uint *)&(this->StreamingAnimations).field_0x28;
    TStack_b0._padding_ = CONCAT44(uStack_14c,iStack_150);
    uStack_140 = 0xffffffff;
    uVar23 = uVar19 & 0xffffffe0;
    TStack_b0.CurrentBitIndex = iStack_13c;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar19 >> 5;
    TStack_b0._28_4_ = iStack_13c;
    TStack_b0.BaseBitIndex = local_138;
    uStack_90 = CONCAT44(uStack_12c,iStack_130);
    iStack_134 = iStack_13c;
    local_b8 = pTVar1;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar19 < 0) || (iVar20 < (int)uVar19)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      iVar20 = (*pcVar7)();
      return iVar20;
    }
    pTVar1 = local_118;
    fVar11 = __real_3a83126f;
    uVar5 = *(uint *)&(this->StreamingAnimations).field_0x28;
    if (uVar19 != uVar5) {
      puVar21 = *(undefined1 **)&(this->StreamingAnimations).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar2;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar24 * 4);
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar24;
        uVar23 = uVar23 + 0x20;
        iVar24 = iVar24 + 1;
        uVar19 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_1473ee160;
        uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar19 = (int)lVar17 + -1 + uVar23;
      if ((int)uVar5 < (int)uVar19) {
        uVar19 = uVar5;
      }
    }
LAB_1473ee160:
    do {
      pTVar12 = local_b8;
      if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      lVar17 = (longlong)TStack_b0.CurrentBitIndex;
      if (((TStack_b0.CurrentBitIndex == uVar19) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar12 == pTVar1)) goto LAB_1473ee1ed;
      lVar6 = *(longlong *)pTVar12;
      QueryPerformanceCounter(&local_f0);
      fVar25 = (float)((dVar8 + (double)param_1) -
                      (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle);
      if ((fVar25 < fVar11) ||
         (bVar14 = FStreamingAnimationData::BlockTillAllRequestsFinished
                             (*(FStreamingAnimationData **)(lVar6 + 8 + lVar17 * 0x18),fVar25),
         !bVar14)) goto LAB_1473ee1e6;
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while( true );
  }
  iVar4 = *(int *)&(this->StreamingAnimations).field_0x28;
  local_160 = CONCAT44(local_160._4_4_,1);
  iStack_13c = iVar20;
  local_138 = iVar20;
  if (iVar4 != 0) {
    puVar22 = *(uint **)&(this->StreamingAnimations).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar19 = *puVar22;
    local_138 = iVar24;
    iVar20 = iVar24;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      local_138 = local_138 + 0x20;
      iVar20 = iVar20 + 1;
      iStack_13c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1473ede22;
      uVar19 = puVar22[lVar17 + 1];
    }
    local_160 = (ulonglong)(-uVar19 & uVar19);
    uVar3 = local_160 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_100 = (int)lVar17;
    iStack_13c = local_138 + -1 + local_100;
    if (iVar4 < iStack_13c) {
      iStack_13c = iVar4;
    }
  }
LAB_1473ede22:
  uStack_14c = (undefined4)local_160;
  iStack_134 = local_5c;
  iStack_130 = *(int *)&(this->StreamingAnimations).field_0x8 -
               *(int *)&(this->StreamingAnimations).field_0x34;
  uVar19 = *(uint *)&(this->StreamingAnimations).field_0x28;
  uStack_140 = 0xffffffff;
  uVar23 = uVar19 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_14c,iVar20);
  TStack_e0.CurrentBitIndex = iStack_13c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_5c;
  TStack_e0.BaseBitIndex = local_138;
  uStack_c0 = CONCAT44(uStack_12c,iStack_130);
  iVar24 = (int)uVar19 >> 5;
  iStack_150 = iVar20;
  local_e8 = pTVar1;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar20 = (*pcVar7)();
    return iVar20;
  }
  pTVar1 = local_118;
  uVar5 = *(uint *)&(this->StreamingAnimations).field_0x28;
  if (uVar19 != uVar5) {
    puVar21 = *(undefined1 **)&(this->StreamingAnimations).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar24 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar24;
      uVar23 = uVar23 + 0x20;
      iVar24 = iVar24 + 1;
      uVar19 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_1473edf31;
      uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = (int)lVar17 + -1 + uVar23;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_1473edf31:
  while( true ) {
    pTVar12 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (((TStack_e0.CurrentBitIndex == uVar19) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar12 == pTVar1))
    break;
    FStreamingAnimationData::BlockTillAllRequestsFinished
              (*(FStreamingAnimationData **)
                (*(longlong *)pTVar12 + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x18),0.0);
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
LAB_1473ee1ed:
  iVar20 = 0;
LAB_1473ee1ef:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar20;
LAB_1473ee1e6:
  iVar20 = (int)local_160;
  goto LAB_1473ee1ef;
}

// CancelForcedResources @ 1473f1720

void __thiscall FAnimationStreamingManager::CancelForcedResources(FAnimationStreamingManager *this)

{
  return;
}

// GetLoadedChunk @ 147402500

/* WARNING: Enum "Type": Some values do not have unique names */

FCompressedAnimSequence * __thiscall
FAnimationStreamingManager::GetLoadedChunk
          (FAnimationStreamingManager *this,UAnimStreamable *param_1,uint param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *pTVar5;
  FString *pFVar6;
  uint *puVar7;
  FStaticBasicLogRecord *pFVar8;
  longlong *plVar9;
  longlong *plVar10;
  FCompressedAnimSequence *pFVar11;
  uint local_res18 [2];
  undefined1 local_48 [4];
  uint local_44;
  FString local_40 [2];
  
  if (0 < SpoofFailedAnimationChunkLoad) {
    return (FCompressedAnimSequence *)0x0;
  }
  lpCriticalSection = &this->CriticalSection;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                   *)&this->StreamingAnimations,param_1);
  if ((pTVar5 != (TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *)0x0) &&
     (lVar3 = *(longlong *)&pTVar5->field_0x8, lVar3 != 0)) {
    if (param_3) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50),local_res18);
      local_44 = (local_res18[0] + 1) % (uint)(param_1->RunningAnimPlatformData).Chunks.ArrayNum;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50),&local_44);
    }
    puVar7 = *(uint **)(lVar3 + 0x40);
    puVar1 = puVar7 + *(int *)(lVar3 + 0x48);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      if (*puVar7 == local_res18[0]) {
        iVar2 = *(int *)(lVar3 + 0x10);
        plVar10 = *(longlong **)(lVar3 + 8);
        plVar9 = plVar10 + (longlong)iVar2 * 4;
        uVar4 = local_res18[0];
        goto LAB_147402621;
      }
    }
    if (2 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,local_40,(UObject *)0x0,None);
      pFVar8 = &::LOG_Static;
      goto LAB_147402736;
    }
  }
LAB_147402759:
  pFVar11 = (FCompressedAnimSequence *)0x0;
LAB_14740275b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar11;
LAB_147402621:
  if (*(int *)(lVar3 + 0x10) != iVar2) {
    `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_48);
    uVar4 = local_res18[0];
  }
  if (plVar10 == plVar9) goto LAB_1474026ea;
  if (*(uint *)(plVar10 + 3) == uVar4) goto LAB_14740264c;
  plVar10 = plVar10 + 4;
  goto LAB_147402621;
LAB_14740264c:
  if (plVar10 != (longlong *)0x0) {
    if (*plVar10 == 0) {
      if (0.0 <= (double)plVar10[2]) {
        FWindowsPlatformTime::Seconds();
      }
      if (2 < (byte)LogAnimation._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,local_40,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar11 = (FCompressedAnimSequence *)*plVar10;
    goto LAB_14740275b;
  }
LAB_1474026ea:
  if (2 < (byte)LogAnimation._0_1_) {
    pFVar6 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)param_1,local_40,(UObject *)0x0,None);
    if ((pFVar6->Data).ArrayNum == 0) {
      pFVar8 = &::LOG_Static;
    }
    else {
      pFVar8 = &::LOG_Static;
    }
LAB_147402736:
    UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogAnimation);
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
  }
  goto LAB_147402759;
}

// GetMemorySizeForAnim @ 147402b80

ulong64 __thiscall
FAnimationStreamingManager::GetMemorySizeForAnim
          (FAnimationStreamingManager *this,UAnimStreamable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *pTVar6;
  longlong lVar7;
  longlong *plVar8;
  ulong64 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                   *)&this->StreamingAnimations,param_1);
  if ((pTVar6 == (TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *)0x0) ||
     (lVar5 = *(longlong *)&pTVar6->field_0x8, lVar5 == 0)) {
    uVar9 = 0;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x10);
    uVar9 = 0;
    plVar8 = *(longlong **)(lVar5 + 8);
    plVar10 = plVar8 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)(lVar5 + 0x10) != iVar1) {
        `TCheckedPointerIterator<FLoadedAnimationChunk_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (plVar8 == plVar10) break;
      if ((*plVar8 != 0) && (*(char *)((longlong)plVar8 + 0x1c) != '\0')) {
        lVar7 = *plVar8;
        iVar2 = *(int *)(lVar7 + 0x2c);
        iVar3 = *(int *)(lVar7 + 0xc);
        iVar4 = *(int *)(lVar7 + 0x5c);
        lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x20))();
        uVar9 = uVar9 + 0x80 + lVar7 + (longlong)iVar2 * 0xc + (longlong)iVar4 + (longlong)iVar3 * 4
        ;
      }
      plVar8 = plVar8 + 4;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar9;
}

// NotifyLevelChange @ 14740cd00

void __thiscall FAnimationStreamingManager::NotifyLevelChange(FAnimationStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 14740cd10

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
FAnimationStreamingManager::NotifyLevelOffset
          (FAnimationStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// OnAsyncFileCallback @ 14740cd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimationStreamingManager::OnAsyncFileCallback
          (FAnimationStreamingManager *this,FStreamingAnimationData *param_1,int param_2,
          long64 param_3,IBulkDataIORequest *param_4,bool param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UAnimStreamable *pUVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  FCompressedAnimSequence *pFVar10;
  FCompressedAnimSequence *this_00;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  LARGE_INTEGER local_158;
  UAnimStreamable *local_150;
  FName local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  FArchiveState local_118;
  undefined8 local_88;
  void *local_80;
  long64 local_78;
  undefined8 local_70;
  
  pvVar9 = (void *)(**(code **)((longlong)*param_4 + 0x18))();
  lpCriticalSection = &param_1->LoadedChunksCritcalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = (param_1->LoadedChunks).AllocatorInstance.Data;
  this_00 = (FCompressedAnimSequence *)0x0;
  iVar2 = (param_1->LoadedChunks).ArrayNum;
  pFVar12 = pFVar3;
  do {
    if (pFVar12 == pFVar3 + (longlong)iVar2 * 0x20) {
      uVar11 = 0xffffffff;
LAB_14740cdfb:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_14740ce2e:
      pFVar3 = (param_1->LoadedChunks).AllocatorInstance.Data;
      lVar13 = (longlong)(int)uVar11 * 0x20;
      QueryPerformanceCounter(&local_158);
      dVar6 = (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      dVar1 = *(double *)(pFVar3 + lVar13 + 0x10);
      if (pvVar9 == (void *)0x0) {
        if (2 < (byte)LogAnimation._0_1_) {
          local_140 = (FName)param_1->StreamableAnim->_padding_;
          ::FName::ToString(&local_140,&local_128);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        param_4._0_4_ = param_2;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int>
                  (&param_1->LoadFailedChunks,(uint *)&param_4);
      }
      else {
        if (*(longlong *)(pFVar3 + lVar13) != 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChunkStorage.CompressedAnimData == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                             ,0x15c,
                             L"Chunk storage already has data. (0x%p) ChunkIndex:%i LoadChunkIndex:%i"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar10 = ::operator_new(0x80);
        if (pFVar10 != (FCompressedAnimSequence *)0x0) {
          (pFVar10->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar10->CompressedTrackToSkeletonMapTable).ArrayNum = 0;
          (pFVar10->CompressedTrackToSkeletonMapTable).ArrayMax = 0;
          (pFVar10->CompressedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->CompressedCurveNames).ArrayNum = 0;
          (pFVar10->CompressedCurveNames).ArrayMax = 0;
          (pFVar10->IndexedCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->IndexedCurveNames).ArrayNum = 0;
          (pFVar10->IndexedCurveNames).ArrayMax = 0;
          *(undefined8 *)&pFVar10->CompressedByteStream = 0;
          *(undefined8 *)&(pFVar10->CompressedByteStream).field_0x8 = 0;
          *(undefined8 *)&(pFVar10->CompressedByteStream).field_0x10 = 0;
          *(undefined8 *)&(pFVar10->CompressedByteStream).field_0x18 = 0;
          (pFVar10->CompressedCurveByteStream).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar10->CompressedCurveByteStream).ArrayNum = 0;
          (pFVar10->CompressedCurveByteStream).ArrayMax = 0;
          (pFVar10->CompressedDataStructure).Ptr = (ICompressedAnimData *)0x0;
          (pFVar10->BoneCompressionCodec).field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0;
          (pFVar10->CurveCompressionCodec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
          pFVar10->CompressedRawDataSize = 0;
          this_00 = pFVar10;
        }
        local_118._padding_ = 0;
        local_118.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_118.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_118.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_118.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_118._40_8_ = 0;
        local_118.ArSerializingDefaults = 0;
        local_118.ArPortFlags = 0;
        local_118.ArMaxSerializeSize = 0;
        local_118.ArUEVer.FileVersionUE4 = 0;
        local_118.ArUEVer.FileVersionUE5 = 0;
        local_118.ArLicenseeUEVer = 0;
        local_118.ArEngineVer.Major = 0;
        local_118.ArEngineVer.Minor = 0;
        local_118.ArEngineVer.Patch = 0;
        local_118.ArEngineVer._6_2_ = 0;
        local_118.ArEngineVer.Changelist = 0;
        local_118.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_118.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_118.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_118.SerializedProperty = (FProperty *)0x0;
        local_118.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_118.bCustomVersionsAreReset = false;
        local_118._129_7_ = 0;
        local_118.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_118);
        local_88 = 0;
        local_118._padding_ = (longlong)&___7FMemoryReaderView__6B_;
        local_70 = 0x7fffffffffffffff;
        local_80 = pvVar9;
        local_78 = param_3;
        FArchiveState::SetIsLoading(&local_118,true);
        (**(code **)(local_118._padding_ + 0x108))(&local_118,0);
        pUVar4 = param_1->StreamableAnim;
        FCompressedAnimSequence::SerializeCompressedData
                  (this_00,(FArchive *)&local_118,false,(UObject *)pUVar4,
                   (USkeleton *)pUVar4->_padding_,
                   (pUVar4->BoneCompressionSettings).field0_0x0.DebugPtr,
                   (pUVar4->CurveCompressionSettings).field0_0x0.DebugPtr,true);
        local_150 = param_1->StreamableAnim;
        uVar11 = 0;
        if (param_2 < (local_150->RunningAnimPlatformData).Chunks.ArrayNum) {
          uVar11 = (uint)~param_2 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (((double)*(float *)((local_150->RunningAnimPlatformData).Chunks.AllocatorInstance.Data +
                               (longlong)param_2 * 0x40 + 4) < dVar6 - dVar1) &&
           (2 < (byte)LogAnimation._0_1_)) {
          local_148 = (FName)param_1->StreamableAnim->_padding_;
          ::FName::ToString(&local_148,&local_138);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
        LOCK();
        *(FCompressedAnimSequence **)(pFVar3 + lVar13) = this_00;
        UNLOCK();
        *(undefined8 *)(pFVar3 + lVar13 + 0x10) = 0xc000000000000000;
        pFVar3[lVar13 + 0x1c] = (FScriptContainerElement)0x1;
        if (4 < (byte)LogAnimation._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        }
        FMemory::Free(pvVar9);
        FArchive::~FArchive((FArchive *)&local_118);
      }
                    /* WARNING: Could not recover jumptable at 0x00014740d21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(int *)(pFVar12 + 0x18) == param_2) {
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar3 >> 5);
      uVar8 = 0;
      if ((int)uVar11 < iVar2) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 != 0) goto LAB_14740ce2e;
      goto LAB_14740cdfb;
    }
    pFVar12 = pFVar12 + 0x20;
  } while( true );
}

// RemoveLevel @ 14740eb90

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
FAnimationStreamingManager::RemoveLevel(FAnimationStreamingManager *this,ULevel *param_1)

{
  return;
}

// RemoveStreamingAnim @ 14740ee90

bool __thiscall
FAnimationStreamingManager::RemoveStreamingAnim
          (FAnimationStreamingManager *this,UAnimStreamable *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FStreamingAnimationData *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *pTVar6;
  uint uVar7;
  FLoadedAnimationChunk *pFVar8;
  FLoadedAnimationChunk *pFVar9;
  undefined1 local_res8 [8];
  UAnimStreamable *local_res18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                   *)&this->StreamingAnimations,param_1);
  if ((pTVar6 == (TTuple<UAnimStreamable_*,FStreamingAnimationData_*> *)0x0) ||
     (this_00 = *(FStreamingAnimationData **)&pTVar6->field_0x8,
     this_00 == (FStreamingAnimationData *)0x0)) {
    bVar4 = false;
  }
  else {
    local_res18 = param_1;
    if (*(int *)&(this->StreamingAnimations).field_0x8 !=
        *(int *)&(this->StreamingAnimations).field_0x34) {
      uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UAnimStreamable_const_*>
                ((TSet<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>,FDefaultSetAllocator>
                  *)&this->StreamingAnimations,uVar7 >> 0x10 ^ uVar7,&local_res18);
    }
    uVar7 = 0;
    do {
      FStreamingAnimationData::BlockTillAllRequestsFinished(this_00,0.0);
      bVar4 = FStreamingAnimationData::UpdateStreamingStatus(this_00);
      if (!bVar4) break;
      if (1 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pass < 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                           ,0x3c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 3);
    iVar1 = (this_00->LoadedChunks).ArrayNum;
    pFVar9 = (FLoadedAnimationChunk *)(this_00->LoadedChunks).AllocatorInstance.Data;
    pFVar8 = pFVar9 + iVar1;
    while( true ) {
      if ((this_00->LoadedChunks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar8) break;
      FStreamingAnimationData::FreeLoadedChunk(this_00,pFVar9);
      pFVar9 = pFVar9 + 1;
    }
    pFVar2 = (this_00->LoadFailedChunks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->RequestedChunks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->LoadedChunkIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->LoadedChunksCritcalSection);
    DestructItems<FLoadedAnimationChunk,int>
              ((FLoadedAnimationChunk *)(this_00->LoadedChunks).AllocatorInstance.Data,
               (this_00->LoadedChunks).ArrayNum);
    pFVar2 = (this_00->LoadedChunks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this_00,0x78);
    bVar4 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// SetDisregardWorldResourcesForFrames @ 147419350

void __thiscall
FAnimationStreamingManager::SetDisregardWorldResourcesForFrames
          (FAnimationStreamingManager *this,int param_1)

{
  return;
}

// UpdateResourceStreaming @ 14741b310

void __thiscall
FAnimationStreamingManager::UpdateResourceStreaming
          (FAnimationStreamingManager *this,float param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FLLMScope local_res20 [2];
  FMemScope local_a0;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UAnimStreamable_*,FStreamingAnimationData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimStreamable_*,FStreamingAnimationData_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FLLMScope::FLLMScope(local_res20,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,Animation,true);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = *(int *)&(this->StreamingAnimations).field_0x28;
  puVar1 = &(this->StreamingAnimations).field_0x10;
  iStack_90 = 0;
  pTVar2 = &this->StreamingAnimations;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->StreamingAnimations).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14741b40e;
      uVar10 = puVar13[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14741b40e:
  iStack_70 = *(int *)&(this->StreamingAnimations).field_0x8 -
              *(int *)&(this->StreamingAnimations).field_0x34;
  uVar10 = *(uint *)&(this->StreamingAnimations).field_0x28;
  uStack_80 = 0xffffffff;
  uVar14 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->StreamingAnimations).field_0x28;
  if (uVar10 != uVar5) {
    puVar12 = *(undefined1 **)&(this->StreamingAnimations).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14741b520;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_14741b520:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    FStreamingAnimationData::UpdateStreamingStatus
              (*(FStreamingAnimationData **)
                (*(longlong *)pTVar7 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

