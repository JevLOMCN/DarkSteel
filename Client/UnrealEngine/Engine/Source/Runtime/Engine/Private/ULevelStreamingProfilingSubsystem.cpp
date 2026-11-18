// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// StaticClass @ 1483cbf70

UClass * __cdecl ULevelStreamingProfilingSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingProfilingSubsystem",
               &Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton,
               StaticRegisterNativesULevelStreamingProfilingSubsystem,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreamingProfilingSubsystem>,
               InternalVTableHelperCtorCaller<ULevelStreamingProfilingSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton;
}

// ULevelStreamingProfilingSubsystem @ 1483e7a00

ULevelStreamingProfilingSubsystem * __thiscall
ULevelStreamingProfilingSubsystem::ULevelStreamingProfilingSubsystem
          (ULevelStreamingProfilingSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelStreamingProfilingSubsystem__6B_;
  (this->Handle_OnLevelStreamingTargetStateChanged).ID = 0;
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  this->bIsTracking = false;
  *(undefined8 *)&this->ActiveLevels = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveLevels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveLevels).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x48 = 0;
  (this->LevelStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelStats).ArrayNum = 0;
  (this->LevelStats).ArrayMax = 0;
  this->ReportWritingTask = (TTask<void>)0x0;
  FWorldLevelStreamingStats::FWorldLevelStreamingStats(&this->WorldLevelStreamingStats);
  return this;
}

// ULevelStreamingProfilingSubsystem @ 1483e7aa0

ULevelStreamingProfilingSubsystem * __thiscall
ULevelStreamingProfilingSubsystem::ULevelStreamingProfilingSubsystem
          (ULevelStreamingProfilingSubsystem *this,FObjectInitializer *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7ULevelStreamingProfilingSubsystem__6B_;
  (this->Handle_OnLevelStreamingTargetStateChanged).ID = 0;
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  this->bIsTracking = false;
  *(undefined8 *)&this->ActiveLevels = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveLevels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveLevels).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveLevels).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveLevels).field_0x48 = 0;
  (this->LevelStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelStats).ArrayNum = 0;
  (this->LevelStats).ArrayMax = 0;
  this->ReportWritingTask = (TTask<void>)0x0;
  FWorldLevelStreamingStats::FWorldLevelStreamingStats(&this->WorldLevelStreamingStats);
  return this;
}

// ~ULevelStreamingProfilingSubsystem @ 1483e9000

void __thiscall
ULevelStreamingProfilingSubsystem::~ULevelStreamingProfilingSubsystem
          (ULevelStreamingProfilingSubsystem *this)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7ULevelStreamingProfilingSubsystem__6B_;
  FWorldLevelStreamingStats::~FWorldLevelStreamingStats(&this->WorldLevelStreamingStats);
  TVar3 = this->ReportWritingTask;
  if (TVar3 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar3)(TVar3,1);
    }
  }
  pFVar4 = (this->LevelStats).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->ActiveLevels).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ActiveLevels).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveLevels);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 1483eb200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`ULevelStreamingProfilingSubsystem::StopTrackingAndReport'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask>
  FVar13;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar14;
  IFileManager *pIVar15;
  FDateTime this_00;
  longlong *plVar16;
  void *pvVar17;
  FCsvProfiler *this_01;
  byte bVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  int iVar21;
  FName FVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_728 [32];
  undefined1 local_6b8 [4];
  FColor_u_0 local_6b4;
  FString local_6b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6a0;
  FName local_690;
  undefined4 uStack_688;
  undefined4 uStack_684;
  FName local_680;
  FName local_678;
  FName local_670;
  longlong *local_660;
  undefined8 *local_658;
  FString local_650;
  longlong *local_640;
  uint uStack_638;
  uint uStack_634;
  TBitArray<FDefaultBitArrayAllocator> *local_630;
  undefined4 uStack_628;
  uint uStack_624;
  uint local_620;
  undefined4 uStack_61c;
  int iStack_618;
  undefined4 uStack_614;
  longlong *local_610;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_608;
  undefined8 uStack_5e8;
  FName local_5e0;
  FName FStack_5d8;
  FName local_5d0;
  FName local_5c0;
  FName local_5b8;
  FString local_5b0;
  FString local_5a0 [2];
  char *local_580;
  undefined8 uStack_578;
  undefined4 local_554;
  undefined1 local_548 [32];
  uint *local_528;
  uint local_520;
  int local_514;
  void *local_508;
  undefined4 local_500;
  TStringBuilderBase<char8_t> local_4f8;
  uchar local_4d8 [1024];
  ulonglong local_d8 [22];
  
  local_d8[0] = __security_cookie.value ^ (ulonglong)auStackY_728;
  uVar24 = 0;
  local_658 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask>
         )0x0) {
      pFVar12 = ::FName::FName(&local_5c0,"STAT_LevelStreamingProfilingSubsystem_ReportWritingTask")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask,*pFVar12,
                 L"STAT_LevelStreamingProfilingSubsystem_ReportWritingTask","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask;
  if (StatPtr_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask>
       )0x0) {
    pFVar12 = ::FName::FName(&local_5b8,"STAT_LevelStreamingProfilingSubsystem_ReportWritingTask");
    FVar13 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_LevelStreamingProfilingSubsystem_ReportWritingTask,*pFVar12,
                          L"STAT_LevelStreamingProfilingSubsystem_ReportWritingTask",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_670.ComparisonIndex.Value = 0;
  local_670.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1483eb394:
    bVar6 = bVar9;
    bVar5 = bVar8;
    bVar8 = false;
    local_678 = local_670;
    FVar22 = local_670;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6b4._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_680.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_680.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_680,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\LevelStreamingProfilingSubsystem.cpp"
                   ,0xf3);
        bVar5 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1483eb394;
    local_690 = FVar22;
    local_678 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  pTVar14 = &FPaths::ProfilingDir(&local_5b0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_6a0,pTVar14,0x10 - (uint)(pTVar14->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_6a0,L"LevelStreaming",0xe);
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  pIVar15 = IFileManager::Get();
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_6a0.ArrayNum != 0) {
    FVar20.Data = local_6a0.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar15 + 0x60))(pIVar15,FVar20.Data,1);
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,local_5a0,L"%Y%m%d_%H%M%S");
  ::FString::PrintfImpl(&local_650,L"LevelStreaming_(%s).tsv");
  FVar20.Data = local_6a0.AllocatorInstance.Data;
  iVar21 = local_650.Data.ArrayNum + -1;
  if (local_650.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if ((local_6a0.ArrayNum == 0) && (iVar21 != -1)) {
    iVar10 = iVar21 + 2;
LAB_1483eb49a:
    local_6b0.Data.ArrayNum = local_6a0.ArrayNum;
    local_6b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar10 == 0) {
      local_6b0.Data.ArrayMax = 0;
      goto LAB_1483eb4ed;
    }
  }
  else {
    iVar10 = iVar21 + 1;
    if (local_6a0.ArrayNum == 0) goto LAB_1483eb49a;
  }
  local_6b0.Data.ArrayNum = local_6a0.ArrayNum;
  local_6b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar25 = iVar10 + local_6a0.ArrayNum;
  if ((int)uVar25 < local_6a0.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar25,0,(ForAnyElementType *)&local_6b0,local_6a0.ArrayNum,
             &local_6b0.Data.ArrayMax);
  if (local_6a0.ArrayNum != 0) {
    memcpy(local_6b0.Data.AllocatorInstance.Data,FVar20.Data,(longlong)local_6a0.ArrayNum * 2);
  }
LAB_1483eb4ed:
  ::FString::PathAppend(&local_6b0,(wchar_t *)local_650.Data.AllocatorInstance.Data,iVar21);
  if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.Data.AllocatorInstance.Data);
  }
  if (local_5a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0[0].Data.AllocatorInstance.Data);
  }
  pIVar15 = IFileManager::Get();
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_6b0.Data.ArrayNum != 0) {
    FVar20.Data = local_6b0.Data.AllocatorInstance.Data;
  }
  plVar16 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,FVar20.Data,0);
  local_660 = plVar16;
  if (plVar16 != (longlong *)0x0) {
    local_4f8.Base = local_4d8;
    local_4f8.bIsDynamic = false;
    local_4f8.bIsExternal = false;
    local_4f8.CurPos = local_4d8;
    local_690 = (FName)0x15061edf0;
    local_4f8.End = (uchar *)local_d8;
    uStack_688 = 1;
    uStack_578 = CONCAT44(uStack_684,1);
    local_580 = "\n";
    pvVar17 = FGenericPlatformString::Memcpy
                        (local_4d8,
                         "NameOnDisk\tNameInMemory\tTimeQueuedForLoadingMS\tTimeLoadingMS\tTimeQueuedForAddToWorldMS\tTimeAddingToWorldMS\tTimeInWorldS\tTimeQueuedForRemoveFromWorldMS\tTimeRemovingFromWorldMS\tStreamInDistance_Cell\tStreamInDistance_Content\tStreamInSourceLocation\tCellBounds\tContentBounds\tbIsHLOD"
                         ,0x115);
    local_4f8.CurPos = (uchar *)((longlong)pvVar17 + 0x115);
    (**(code **)(**(longlong **)this + 0x310))(*(longlong **)this,&local_4f8);
    (**(code **)(*plVar16 + 0x188))
              (plVar16,local_4f8.Base,(longlong)((int)local_4f8.CurPos - (int)local_4f8.Base));
    (**(code **)(*plVar16 + 0x188))(plVar16,"\n",1);
    lVar19 = *(longlong *)this;
    local_4f8.CurPos = local_4f8.Base;
    uVar27 = uVar24;
    if (0 < *(int *)(lVar19 + 0xb8)) {
      do {
        uVar11 = (uint)uVar27;
        uVar25 = 0;
        if ((int)uVar11 < *(int *)(lVar19 + 0xb8)) {
          uVar25 = ~uVar11 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = (FName *)(*(longlong *)(lVar19 + 0xb0) + uVar24);
        if (*(char *)((longlong)&pFVar12[0x26].ComparisonIndex.Value + 1) != '\0') {
          ::FName::AppendString(pFVar12,&local_4f8);
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          ::FName::AppendString(pFVar12 + 1,&local_4f8);
          uVar25 = pFVar12[0x11].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x13].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x15].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x17].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x19].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x1b].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x1d].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x1f].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          uVar25 = pFVar12[0x21].ComparisonIndex.Value;
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)uVar25 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.1f");
          }
          cVar1 = (char)pFVar12[0x25].ComparisonIndex.Value;
          if (cVar1 != '\0') {
            local_5e0 = pFVar12[0x22];
            FStack_5d8 = pFVar12[0x23];
            local_5d0 = pFVar12[0x24];
          }
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if (cVar1 != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%.0f,%.0f,%.0f");
          }
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)pFVar12[8].ComparisonIndex.Value != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl
                      (&local_4f8,(uchar *)"%.0f,%.0f,%.0f,%.0f,%.0f,%.0f");
          }
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          if ((char)pFVar12[0xf].ComparisonIndex.Value != '\0') {
            TStringBuilderBase<char8_t>::AppendfImpl
                      (&local_4f8,(uchar *)"%.0f,%.0f,%.0f,%.0f,%.0f,%.0f");
          }
          if (local_4f8.End < local_4f8.CurPos + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
          }
          *local_4f8.CurPos = '\t';
          local_4f8.CurPos = local_4f8.CurPos + 1;
          TStringBuilderBase<char8_t>::AppendfImpl(&local_4f8,(uchar *)"%d");
          (**(code **)(**(longlong **)this + 0x318))(*(longlong **)this,&local_4f8,uVar27);
          (**(code **)(*plVar16 + 0x188))
                    (plVar16,local_4f8.Base,(longlong)((int)local_4f8.CurPos - (int)local_4f8.Base))
          ;
          (**(code **)(*plVar16 + 0x188))(plVar16,"\n",1);
          local_4f8.CurPos = local_4f8.Base;
        }
        lVar19 = *(longlong *)this;
        uVar24 = uVar24 + 0x138;
        uVar27 = (ulonglong)(uVar11 + 1);
      } while ((int)(uVar11 + 1) < *(int *)(lVar19 + 0xb8));
    }
    uVar11 = 1;
    this_01 = FCsvProfiler::Get();
    FCsvProfiler::GetMetadataMapCopy
              (this_01,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_548);
    uVar25 = local_520;
    local_514 = local_548._8_4_ - local_514;
    if (0 < local_514) {
      uStack_638 = 0;
      local_620 = 0;
      uStack_624 = uStack_638;
      if (local_520 != 0) {
        puVar23 = (uint *)(local_548 + 0x10);
        if (local_528 != (uint *)0x0) {
          puVar23 = local_528;
        }
        uVar26 = *puVar23;
        local_620 = 0;
        uStack_638 = 0;
        while (uVar26 == 0) {
          lVar19 = (longlong)(int)uStack_638;
          local_620 = local_620 + 0x20;
          uStack_638 = uStack_638 + 1;
          uStack_624 = local_520;
          if ((int)((local_520 - 1) + ((int)(local_520 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_638
             ) goto LAB_1483ebf42;
          uVar26 = puVar23[lVar19 + 1];
        }
        uVar11 = -uVar26 & uVar26;
        uVar24 = (ulonglong)uVar11 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_690.ComparisonIndex.Value = (uint)lVar19;
        uStack_624 = ((uint)lVar19 - 1) + local_620;
        if ((int)local_520 < (int)uStack_624) {
          uStack_624 = local_520;
        }
      }
LAB_1483ebf42:
      local_640 = (longlong *)local_548;
      local_630 = (TBitArray<FDefaultBitArrayAllocator> *)(local_548 + 0x10);
      uVar26 = local_520 & 0xffffffe0;
      uStack_628 = 0xffffffff;
      TStack_608.CurrentBitIndex = uStack_624;
      TStack_608.UnvisitedBitMask = 0xffffffff;
      TStack_608._padding_ = CONCAT44(uVar11,uStack_638);
      uStack_61c = local_554;
      iVar21 = (int)local_520 >> 5;
      TStack_608._28_4_ = local_554;
      TStack_608.BaseBitIndex = local_620;
      uStack_5e8 = CONCAT44(uStack_614,local_514);
      bVar18 = (byte)local_520;
      uStack_634 = uVar11;
      iStack_618 = local_514;
      local_610 = local_640;
      TStack_608.Array = local_630;
      if (((int)local_520 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar25 != local_520) {
        puVar23 = (uint *)(local_548 + 0x10);
        if (local_528 != (uint *)0x0) {
          puVar23 = local_528;
        }
        uVar25 = -1 << (bVar18 & 0x1f) & puVar23[iVar21];
        while (uVar25 == 0) {
          lVar19 = (longlong)iVar21;
          uVar26 = uVar26 + 0x20;
          iVar21 = iVar21 + 1;
          uVar25 = local_520;
          if ((int)((local_520 - 1) + ((int)(local_520 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1483ec051;
          uVar25 = puVar23[lVar19 + 1];
        }
        uVar24 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar25 = (uVar26 - 1) + (int)lVar19;
        if ((int)local_520 < (int)uVar25) {
          uVar25 = local_520;
        }
      }
LAB_1483ec051:
      while( true ) {
        plVar7 = local_610;
        if ((int)local_610[1] - *(int *)((longlong)local_610 + 0x34) != (int)uStack_5e8) {
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_6b8);
        }
        plVar16 = local_660;
        lVar19 = (longlong)TStack_608.CurrentBitIndex;
        if (((TStack_608.CurrentBitIndex == uVar25) &&
            (TStack_608.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_548 + 0x10))) &&
           (plVar7 == (longlong *)local_548)) break;
        lVar2 = *plVar7;
        if (local_4f8.End < local_4f8.CurPos + 1) {
          TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
        }
        *local_4f8.CurPos = '[';
        local_4f8.CurPos = local_4f8.CurPos + 1;
        iVar21 = *(int *)(lVar2 + 8 + lVar19 * 0x28);
        pwVar3 = *(wchar_t **)(lVar2 + lVar19 * 0x28);
        iVar10 = iVar21 + -1;
        if (iVar21 == 0) {
          iVar10 = 0;
        }
        local_6b4.Bits = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar3,iVar10);
        if (local_4f8.End < local_4f8.CurPos + (int)local_6b4.Bits) {
          TStringBuilderBase<char8_t>::Extend(&local_4f8,(longlong)(int)local_6b4.Bits);
        }
        if (iVar10 != 0) {
          local_4f8.CurPos =
               UE::Core::Private::Convert(local_4f8.CurPos,local_6b4.Bits,pwVar3,iVar10);
        }
        if (local_4f8.End < local_4f8.CurPos + 2) {
          TStringBuilderBase<char8_t>::Extend(&local_4f8,2);
        }
        pvVar17 = FGenericPlatformString::Memcpy(local_4f8.CurPos,"]\t",2);
        local_4f8.CurPos = (uchar *)((longlong)pvVar17 + 2);
        iVar21 = *(int *)(lVar2 + 0x18 + lVar19 * 0x28);
        pwVar3 = *(wchar_t **)(lVar2 + 0x10 + lVar19 * 0x28);
        iVar10 = iVar21 + -1;
        if (iVar21 == 0) {
          iVar10 = 0;
        }
        iVar21 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar3,iVar10);
        if (local_4f8.End < local_4f8.CurPos + iVar21) {
          TStringBuilderBase<char8_t>::Extend(&local_4f8,(longlong)iVar21);
        }
        if (iVar10 != 0) {
          local_4f8.CurPos = UE::Core::Private::Convert(local_4f8.CurPos,iVar21,pwVar3,iVar10);
        }
        if (local_4f8.End < local_4f8.CurPos + 1) {
          TStringBuilderBase<char8_t>::Extend(&local_4f8,1);
        }
        *local_4f8.CurPos = '\t';
        TStack_608.UnvisitedBitMask = TStack_608.UnvisitedBitMask & ~TStack_608._padding_._4_4_;
        local_4f8.CurPos = local_4f8.CurPos + 1;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_608);
      }
      (**(code **)(*local_660 + 0x188))
                (local_660,local_4f8.Base,(longlong)((int)local_4f8.CurPos - (int)local_4f8.Base));
      (**(code **)(*plVar16 + 0x188))(plVar16,local_580,1);
      local_4f8.CurPos = local_4f8.Base;
      FVar22 = local_678;
      this = local_658;
    }
    (**(code **)(**(longlong **)this + 0x300))();
    local_500 = 0;
    if (local_508 != (void *)0x0) {
      FMemory::Free(local_508);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_548);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_4f8);
    (**(code **)*plVar16)(plVar16,1);
  }
  if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
  }
  if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// AugmentReportHeader @ 1483eff00

void __thiscall
ULevelStreamingProfilingSubsystem::AugmentReportHeader
          (ULevelStreamingProfilingSubsystem *this,TStringBuilderBase<char8_t> *param_1)

{
  return;
}

// AugmentReportRow @ 1483eff10

void __thiscall
ULevelStreamingProfilingSubsystem::AugmentReportRow
          (ULevelStreamingProfilingSubsystem *this,TStringBuilderBase<char8_t> *param_1,int param_2)

{
  return;
}

// Deinitialize @ 1483fb030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::Deinitialize(ULevelStreamingProfilingSubsystem *this)

{
  FDelegateHandle FVar1;
  
  if (this->bIsTracking != false) {
    StopTrackingAndReport(this);
  }
  if ((this->ReportWritingTask != (TTask<void>)0x0) &&
     (*(char *)((longlong)this->ReportWritingTask + 0xd0) == '\0')) {
    if (4 < (byte)LogLevelStreamingProfiling._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
    }
    if (this->ReportWritingTask != (TTask<void>)0x0) {
      UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->ReportWritingTask);
    }
  }
  FVar1.ID = (this->Handle_OnLevelStreamingTargetStateChanged).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,FVar1);
  }
  FVar1.ID = (this->Handle_OnLevelStreamingStateChanged).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingStateChanged,FVar1);
  }
  FVar1.ID = (this->Handle_OnLevelBeginAddToWorld).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingVisible,FVar1);
  }
  FVar1.ID = (this->Handle_OnLevelBeginRemoveFromWorld).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingInvisible,FVar1);
  }
  (this->Handle_OnLevelStreamingTargetStateChanged).ID = 0;
  (this->Handle_OnLevelStreamingStateChanged).ID = 0;
  (this->Handle_OnLevelBeginAddToWorld).ID = 0;
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = 0;
  return;
}

// DoesSupportWorldType @ 1483fc880

bool __thiscall
ULevelStreamingProfilingSubsystem::DoesSupportWorldType
          (ULevelStreamingProfilingSubsystem *this,Type param_1)

{
  return (param_1 - Game & 0xfffffffd) == 0;
}

// EnumToString @ 1483ffab0

wchar_t * __cdecl ULevelStreamingProfilingSubsystem::EnumToString(ELevelState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case None:
    return L"None";
  case QueuedForLoading:
    return L"QueuedForLoading";
  case Loading:
    return L"Loading";
  case Loaded:
    return L"Loaded";
  case QueuedForAddToWorld:
    return L"QueuedForAddToWorld";
  case AddingToWorld:
    return L"AddingToWorld";
  case AddedToWorld:
    return L"AddedToWorld";
  case QueuedForRemoveFromWorld:
    return L"QueuedForRemoveFromWorld";
  case RemovingFromWorld:
    return L"RemovingFromWorld";
  case RemovedFromWorld:
    return L"RemovedFromWorld";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\LevelStreamingProfilingSubsystem.cpp"
                     ,0x90,L"");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetLateStreamingDistanceSquared @ 148408920

double __cdecl ULevelStreamingProfilingSubsystem::GetLateStreamingDistanceSquared(void)

{
  return (double)GLateStreamingDistanceSquared;
}

// GetLevelStats @ 148408940

TArrayView<ULevelStreamingProfilingSubsystem::FLevelStats_const_,int> * __thiscall
ULevelStreamingProfilingSubsystem::GetLevelStats
          (ULevelStreamingProfilingSubsystem *this,
          TArrayView<ULevelStreamingProfilingSubsystem::FLevelStats_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<ULevelStreamingProfilingSubsystem::FLevelStats_const_,int> *pTVar4;
  
  iVar1 = (this->LevelStats).ArrayNum;
  __return_storage_ptr__->DataPtr = (FLevelStats *)(this->LevelStats).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<ULevelStreamingProfilingSubsystem::FLevelStats_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148409e60

UClass * __cdecl ULevelStreamingProfilingSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingProfilingSubsystem",
               &Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton,
               StaticRegisterNativesULevelStreamingProfilingSubsystem,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreamingProfilingSubsystem>,
               InternalVTableHelperCtorCaller<ULevelStreamingProfilingSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingProfilingSubsystem.InnerSingleton;
}

// MakeActiveLevel @ 148412380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
 __thiscall
ULevelStreamingProfilingSubsystem::MakeActiveLevel
          (ULevelStreamingProfilingSubsystem *this,ULevelStreaming *param_1,ELevelState param_2,
          ULevel *param_3)

{
  int *piVar1;
  TArray<ULevelStreamingProfilingSubsystem::FLevelStats,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FActiveLevel *pFVar18;
  UPackage *this_00;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar19;
  FPackagePath *this_01;
  FName FVar20;
  longlong *plVar21;
  UClass *pUVar22;
  undefined8 *puVar23;
  ELevelState EVar24;
  longlong lVar25;
  uint uVar26;
  FActiveLevel *pFVar27;
  undefined4 in_register_00000084;
  ULevelStreaming *pUVar28;
  UObjectBaseUtility *in_stack_00000028;
  undefined1 auStackY_148 [32];
  LARGE_INTEGER local_118;
  FName local_110;
  ULevelStreamingProfilingSubsystem *local_108;
  ULevelStreaming *local_100;
  FString local_f8;
  FString local_e0;
  undefined1 local_d0 [56];
  ulonglong local_98;
  
  pUVar28 = (ULevelStreaming *)CONCAT44(in_register_00000084,param_2);
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar2 = &this->LevelStats;
  iVar16 = (this->LevelStats).ArrayNum;
  piVar1 = &(this->LevelStats).ArrayMax;
  local_108 = this;
  local_100 = param_1;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x138,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LevelStats).ArrayNum = iVar16 + 1;
  DefaultConstructItems<ULevelStreamingProfilingSubsystem::FLevelStats,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 0x138,1);
  pFVar18 = ::operator_new(0x28);
  pFVar27 = (FActiveLevel *)0x0;
  if (pFVar18 != (FActiveLevel *)0x0) {
    pFVar18->StateStartTime = 0.0;
    (pFVar18->TimeAddedToWorld).bIsSet = false;
    pFVar18->StatsIndex = iVar16;
    pFVar27 = pFVar18;
  }
  uVar26 = 0;
  pFVar27->State = None;
  QueryPerformanceCounter(&local_118);
  pFVar27->StateStartTime =
       (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  EVar24 = (ELevelState)param_3;
  if (in_stack_00000028 == (UObjectBaseUtility *)0x0) {
    switch(EVar24) {
    case Loaded:
    case QueuedForAddToWorld:
    case AddingToWorld:
    case AddedToWorld:
    case QueuedForRemoveFromWorld:
    case RemovingFromWorld:
    case RemovedFromWorld:
      if (1 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(pUVar28,&local_e0);
        local_110 = (FName)pUVar28->_padding_;
        ::FName::ToString(&local_110,&local_f8);
        EnumToString(EVar24);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    this_00 = UObjectBaseUtility::GetPackage(in_stack_00000028);
    uVar4 = pFVar27->StatsIndex;
    lVar25 = this_00->_padding_;
    uVar17 = uVar26;
    if ((int)uVar4 < (this->LevelStats).ArrayNum) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      TVar19.Ptr = (FActiveLevel *)(*pcVar8)();
      return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
              )TVar19.Ptr;
    }
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x138 + 8) = lVar25;
    this_01 = UPackage::GetLoadedPath(this_00);
    FVar20 = FPackagePath::GetPackageFName(this_01);
    uVar4 = pFVar27->StatsIndex;
    uVar5 = *(undefined8 *)FVar20;
    uVar17 = 0;
    if ((int)uVar4 < (this->LevelStats).ArrayNum) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      TVar19.Ptr = (FActiveLevel *)(*pcVar8)();
      return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
              )TVar19.Ptr;
    }
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x138) = uVar5;
  }
  plVar21 = (longlong *)(**(code **)(pUVar28->_padding_ + 0x2b0))(pUVar28);
  if ((plVar21 != (longlong *)0x0) &&
     (pFVar18 = (FActiveLevel *)(**(code **)(*plVar21 + 8))(plVar21), pFVar18 != (FActiveLevel *)0x0
     )) {
    pUVar22 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
    dVar6 = (pFVar18->TimeAddedToWorld).TypedValue;
    iVar16 = (int)pUVar22->_padding_;
    if ((iVar16 <= *(int *)((longlong)dVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar6 + 0x30) + (longlong)iVar16 * 8)
        == &pUVar22->_padding_)) goto LAB_148412643;
  }
  pFVar18 = (FActiveLevel *)0x0;
LAB_148412643:
  if (pFVar18 != (FActiveLevel *)0x0) {
    puVar23 = (undefined8 *)(**(code **)(*(longlong *)(pFVar18 + 1) + 0x58))(pFVar18 + 1,local_d0);
    uVar4 = pFVar27->StatsIndex;
    uVar9 = *puVar23;
    uVar10 = puVar23[1];
    uVar11 = puVar23[2];
    uVar12 = puVar23[3];
    uVar13 = puVar23[4];
    uVar14 = puVar23[5];
    uVar5 = puVar23[6];
    uVar17 = 0;
    if ((int)uVar4 < (this->LevelStats).ArrayNum) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      TVar19.Ptr = (FActiveLevel *)(*pcVar8)();
      return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
              )TVar19.Ptr;
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    lVar25 = (longlong)(int)uVar4 * 0x138;
    *(undefined8 *)(pFVar7 + lVar25 + 0x10) = uVar9;
    *(undefined8 *)(pFVar7 + lVar25 + 0x10 + 8) = uVar10;
    *(undefined8 *)(pFVar7 + lVar25 + 0x20) = uVar11;
    *(undefined8 *)(pFVar7 + lVar25 + 0x20 + 8) = uVar12;
    *(undefined8 *)(pFVar7 + lVar25 + 0x30) = uVar13;
    *(undefined8 *)(pFVar7 + lVar25 + 0x30 + 8) = uVar14;
    *(undefined8 *)(pFVar7 + lVar25 + 0x40) = uVar5;
    puVar23 = (undefined8 *)(**(code **)(*(longlong *)(pFVar18 + 1) + 0x50))(pFVar18 + 1);
    uVar4 = pFVar27->StatsIndex;
    uVar9 = *puVar23;
    uVar10 = puVar23[1];
    uVar11 = puVar23[2];
    uVar12 = puVar23[3];
    uVar13 = puVar23[4];
    uVar14 = puVar23[5];
    uVar5 = puVar23[6];
    uVar17 = uVar26;
    if ((int)uVar4 < (this->LevelStats).ArrayNum) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      TVar19.Ptr = (FActiveLevel *)(*pcVar8)();
      return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
              )TVar19.Ptr;
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    lVar25 = (longlong)(int)uVar4 * 0x138;
    *(undefined8 *)(pFVar7 + lVar25 + 0x48) = uVar9;
    *(undefined8 *)(pFVar7 + lVar25 + 0x48 + 8) = uVar10;
    *(undefined8 *)(pFVar7 + lVar25 + 0x58) = uVar11;
    *(undefined8 *)(pFVar7 + lVar25 + 0x58 + 8) = uVar12;
    *(undefined8 *)(pFVar7 + lVar25 + 0x68) = uVar13;
    *(undefined8 *)(pFVar7 + lVar25 + 0x68 + 8) = uVar14;
    *(undefined8 *)(pFVar7 + lVar25 + 0x78) = uVar5;
    FVar3 = *(FScriptContainerElement *)((longlong)&pFVar18[2].StateStartTime + 1);
    uVar4 = pFVar27->StatsIndex;
    if ((int)uVar4 < (this->LevelStats).ArrayNum) {
      uVar26 = ~uVar4 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      TVar19.Ptr = (FActiveLevel *)(*pcVar8)();
      return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
              )TVar19.Ptr;
    }
    (pTVar2->AllocatorInstance).Data[(longlong)(int)uVar4 * 0x138 + 0x130] = FVar3;
  }
  UpdateLevelState(local_108,pFVar27,pUVar28,EVar24,pFVar27->StateStartTime);
  pUVar28 = local_100;
  local_100->_padding_ = (longlong)pFVar27;
  ::operator_delete((void *)0x0,0x28);
  return (TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
          )(FActiveLevel *)pUVar28;
}

// OnLevelFinishedAddToWorld @ 1484132c0

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
ULevelStreamingProfilingSubsystem::OnLevelFinishedAddToWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  double dVar1;
  int iVar2;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FActiveLevel *pFVar8;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar9;
  TOptional<double> *pTVar10;
  UWorldPartition *pUVar11;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  UWorld *this_00;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  ULevelStreaming *local_res18;
  undefined1 local_1e8 [8];
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  ULevelStreaming *local_1d0;
  undefined1 local_1c8 [40];
  FName local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FScriptContainerElement local_168 [8];
  ForAnyElementType FStack_160;
  undefined8 local_158;
  FScriptContainerElement local_150 [8];
  double local_148;
  FScriptContainerElement local_140 [8];
  FScriptContainerElement local_138 [8];
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 TStack_c8;
  FPlatformRWLock local_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 TStack_90;
  FLevelStreamingLoadedStatus local_78 [2];
  
  if (this->bIsTracking != false) {
    bVar22 = -1 < CpuChannel->Enabled;
    local_res10 = param_1;
    local_res18 = param_2;
    if (bVar22) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId731,"FortStreamingProfiling.OnLevelFinishedAddToWorld",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\LevelStreamingProfilingSubsystem.cpp"
                 ,0x2db);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId731);
    }
    local_1d8.ObjectIndex = 0;
    local_1d8.ObjectSerialNumber = 0;
    uVar21 = 0;
    uVar14 = uVar21;
    uVar13 = uVar21;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_1e0.ObjectIndex = 0;
      local_1e0.ObjectSerialNumber = 0;
      local_1d0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_1d0);
      uVar13 = local_1e0.ObjectIndex;
      local_1d8 = local_1e0;
      uVar14 = local_1e0.ObjectSerialNumber;
    }
    uVar19 = uVar13 - uVar14 ^ uVar14 >> 0xd;
    uVar13 = (-0x61c88647 - uVar19) - uVar14 ^ uVar19 << 8;
    uVar16 = (uVar14 - uVar13) - uVar19 ^ uVar13 >> 0xd;
    uVar19 = (uVar19 - uVar16) - uVar13 ^ uVar16 >> 0xc;
    uVar14 = (uVar13 - uVar19) - uVar16 ^ uVar19 << 0x10;
    uVar13 = (uVar16 - uVar14) - uVar19 ^ uVar14 >> 5;
    uVar16 = (uVar19 - uVar13) - uVar14 ^ uVar13 >> 3;
    uVar14 = (uVar14 - uVar16) - uVar13 ^ uVar16 << 10;
    pFVar8 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar13 - uVar14) - uVar16 ^ uVar14 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_1d8);
    local_1c8._24_8_ = pFVar8;
    if (*(FActiveLevel **)pFVar8 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_130);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      TVar9 = MakeActiveLevel(this,(ULevelStreaming *)local_1c8,(ELevelState)param_2,
                              (ULevel *)&DAT_00000005);
      if (pFVar8 != TVar9.Ptr) {
        uVar25 = *(undefined4 *)&(TVar9.Ptr)->field_0x4;
        TVar3.Ptr = *(FActiveLevel **)pFVar8;
        pFVar8->State = (TVar9.Ptr)->State;
        *(undefined4 *)&pFVar8->field_0x4 = uVar25;
        *(undefined8 *)TVar9.Ptr = 0;
        ::operator_delete(TVar3.Ptr,0x28);
      }
      ::operator_delete((void *)local_1c8._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar8)->State != AddingToWorld) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar8)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_120);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_110);
      local_1c8._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_1c8 + 8),&local_198);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_1c8 + 0x10));
    uVar14 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    uVar13 = uVar21;
    if ((int)uVar14 < (this->LevelStats).ArrayNum) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    dVar6 = (double)(longlong)local_1c8._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar14 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    uVar14 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    dVar1 = (*(FActiveLevel **)pFVar8)->StateStartTime;
    if ((int)uVar14 < (this->LevelStats).ArrayNum) {
      uVar21 = ~uVar14 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = local_res10;
    pFVar17 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x138 + 0xb0;
    if (local_150 != pFVar17) {
      *(double *)pFVar17 = dVar6 - dVar1;
      pFVar17[8] = (FScriptContainerElement)0x1;
    }
    TVar9.Ptr = *(FActiveLevel **)pFVar8;
    pTVar10 = &(TVar9.Ptr)->TimeAddedToWorld;
    if ((TOptional<double> *)&local_148 != pTVar10) {
      pTVar10->TypedValue = dVar6;
      ((TVar9.Ptr)->TimeAddedToWorld).bIsSet = true;
    }
    if ((local_res10 != (UWorld *)0x0) &&
       (pUVar11 = UWorld::GetWorldPartition(local_res10), pUVar11 != (UWorldPartition *)0x0)) {
      uVar14 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      uVar13 = 0;
      if ((int)uVar14 < (this->LevelStats).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar1 = __real_7fefffffffffffff;
      pFVar17 = (this->LevelStats).AllocatorInstance.Data;
      uVar25 = SUB84(__real_7fefffffffffffff,0);
      uVar26 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      lVar15 = (longlong)(int)uVar14 * 0x138;
      local_e0._s_0.X = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x10);
      local_e0._s_0.Y = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x10 + 8);
      local_e0._s_0.Z = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x20);
      TStack_c8._s_0.X = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x20 + 8);
      TStack_c8._s_0.Y = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x30);
      TStack_c8._s_0.Z = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x30 + 8);
      local_b0.Mutex.Mutex.Ptr = *(FWindowsSharedMutex *)&pFVar17[lVar15 + 0x40].field_0x0;
      if ((char)local_b0.Mutex.Mutex.Ptr != '\0') {
        pUVar11 = UWorld::GetWorldPartition(this_00);
        pTVar12 = UWorldPartition::GetStreamingSources(pUVar11);
        pFVar18 = (pTVar12->AllocatorInstance).Data;
        iVar2 = pTVar12->ArrayNum;
        pFVar17 = pFVar18 + 8;
        pFVar20 = pFVar18 + (longlong)iVar2 * 0x160;
        uVar23 = uVar25;
        uVar24 = uVar26;
        while( true ) {
          if (pTVar12->ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          pFVar8 = (FActiveLevel *)local_1c8._24_8_;
          param_2 = local_res18;
          if (pFVar18 == pFVar20) break;
          dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                            ((TVector<double> *)&local_e0._s_0,(TVector<double> *)&TStack_c8._s_0,
                             (TVector<double> *)pFVar17);
          if (dVar5 < (double)CONCAT44(uVar24,uVar23)) {
            local_158 = *(undefined8 *)(pFVar17 + 0x10);
                    /* WARNING: Load size is inaccurate */
            local_168 = *(FScriptContainerElement (*) [8])&pFVar17->field_0x0;
            FStack_160.Data = pFVar17[8];
            uVar23 = SUB84(dVar5,0);
            uVar24 = (int)((ulonglong)dVar5 >> 0x20);
          }
          pFVar18 = pFVar18 + 0x160;
          pFVar17 = pFVar17 + 0x160;
        }
        this_00 = local_res10;
        if ((double)CONCAT44(uVar24,uVar23) != dVar1) {
          if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
            ULevelStreaming::GetWorldAssetPackageName(local_res18,&local_100);
            local_1c8._32_8_ = param_2->_padding_;
            ::FName::ToString((FName *)(local_1c8 + 0x20),&local_188);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
                    /* WARNING: Load size is inaccurate */
          uVar14 = (*pFVar8)->StatsIndex;
          uVar13 = 0;
          if ((int)uVar14 < (this->LevelStats).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x138 + 0xf0
          ;
          if (local_140 != pFVar17) {
            *(double *)pFVar17 = SQRT((double)CONCAT44(uVar24,uVar23));
            pFVar17[8] = (FScriptContainerElement)0x1;
          }
                    /* WARNING: Load size is inaccurate */
          uVar14 = (*pFVar8)->StatsIndex;
          uVar13 = 0;
          if ((int)uVar14 < (this->LevelStats).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (this->LevelStats).AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x138 + 0x110;
          this_00 = local_res10;
          if (local_168 != pFVar17) {
            *(FScriptContainerElement (*) [8])pFVar17 = local_168;
            *(FScriptContainerElement **)(pFVar17 + 8) = FStack_160.Data;
            *(undefined8 *)(pFVar17 + 0x10) = local_158;
            pFVar17[0x18] = (FScriptContainerElement)0x1;
          }
        }
      }
                    /* WARNING: Load size is inaccurate */
      uVar14 = (*pFVar8)->StatsIndex;
      uVar13 = 0;
      if ((int)uVar14 < (this->LevelStats).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (this->LevelStats).AllocatorInstance.Data;
      lVar15 = (longlong)(int)uVar14 * 0x138;
      local_a8._s_0.X = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x48);
      local_a8._s_0.Y = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x48 + 8);
      local_a8._s_0.Z = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x58);
      TStack_90._s_0.X = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x58 + 8);
      TStack_90._s_0.Y = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x68);
      TStack_90._s_0.Z = (double)*(undefined8 *)(pFVar17 + lVar15 + 0x68 + 8);
      local_78[0]._0_8_ = *(undefined8 *)(pFVar17 + lVar15 + 0x78);
      if (local_78[0]._0_1_ != '\0') {
        pUVar11 = UWorld::GetWorldPartition(this_00);
        pTVar12 = UWorldPartition::GetStreamingSources(pUVar11);
        iVar2 = pTVar12->ArrayNum;
        pFVar17 = (pTVar12->AllocatorInstance).Data;
        pFVar18 = pFVar17 + (longlong)iVar2 * 0x160;
        while( true ) {
          if (pTVar12->ArrayNum != iVar2) {
            local_1e8[0] = 0;
            `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_1e8);
          }
          param_2 = local_res18;
          if (pFVar17 == pFVar18) break;
          dVar5 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                            ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&TStack_90._s_0,
                             (TVector<double> *)(pFVar17 + 8));
          uVar23 = SUB84(dVar5,0);
          uVar24 = (int)((ulonglong)dVar5 >> 0x20);
          if ((double)CONCAT44(uVar26,uVar25) <= dVar5) {
            uVar23 = uVar25;
            uVar24 = uVar26;
          }
          pFVar17 = pFVar17 + 0x160;
          uVar25 = uVar23;
          uVar26 = uVar24;
        }
        if ((double)CONCAT44(uVar26,uVar25) != dVar1) {
          if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
            ULevelStreaming::GetWorldAssetPackageName(local_res18,&local_f0);
            local_1a0 = (FName)param_2->_padding_;
            ::FName::ToString(&local_1a0,&local_178);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
                    /* WARNING: Load size is inaccurate */
          uVar14 = (*pFVar8)->StatsIndex;
          uVar13 = 0;
          if ((int)uVar14 < (this->LevelStats).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (this->LevelStats).AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x138 + 0x100;
          if (local_138 != pFVar17) {
            *(double *)pFVar17 = SQRT((double)CONCAT44(uVar26,uVar25));
            pFVar17[8] = (FScriptContainerElement)0x1;
          }
        }
      }
    }
                    /* WARNING: Load size is inaccurate */
    UpdateLevelState(this,*pFVar8,param_2,AddedToWorld,dVar6);
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OnLevelFinishedAsyncLoading @ 148413c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::OnLevelFinishedAsyncLoading
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  double dVar1;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  bool bVar8;
  FActiveLevel *pFVar9;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar10;
  UPackage *pUVar11;
  FPackagePath *this_00;
  FName FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  ELevelState EVar19;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_128;
  ULevelStreaming *local_120;
  undefined1 local_118 [40];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FScriptContainerElement local_c0 [8];
  FScriptContainerElement local_b8 [16];
  FScriptContainerElement local_a8 [8];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [3];
  
  if (this->bIsTracking != false) {
    uVar17 = 0;
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    uVar14 = 0;
    uVar13 = uVar17;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_120 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_120);
      uVar13 = local_res8.ObjectIndex;
      local_128 = local_res8;
      uVar14 = local_res8.ObjectSerialNumber;
    }
    uVar18 = uVar13 - uVar14 ^ uVar14 >> 0xd;
    uVar13 = (-0x61c88647 - uVar18) - uVar14 ^ uVar18 << 8;
    uVar15 = (uVar14 - uVar13) - uVar18 ^ uVar13 >> 0xd;
    uVar18 = (uVar18 - uVar15) - uVar13 ^ uVar15 >> 0xc;
    uVar14 = (uVar13 - uVar18) - uVar15 ^ uVar18 << 0x10;
    uVar13 = (uVar15 - uVar14) - uVar18 ^ uVar14 >> 5;
    uVar15 = (uVar18 - uVar13) - uVar14 ^ uVar13 >> 3;
    uVar14 = (uVar14 - uVar15) - uVar13 ^ uVar15 << 10;
    pFVar9 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar13 - uVar14) - uVar15 ^ uVar14 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_128);
    if (*(FActiveLevel **)pFVar9 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_a0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      TVar10 = MakeActiveLevel(this,(ULevelStreaming *)local_118,(ELevelState)param_2,
                               (ULevel *)&DAT_00000002);
      if (pFVar9 != TVar10.Ptr) {
        uVar7 = *(undefined4 *)&(TVar10.Ptr)->field_0x4;
        TVar2.Ptr = *(FActiveLevel **)pFVar9;
        pFVar9->State = (TVar10.Ptr)->State;
        *(undefined4 *)&pFVar9->field_0x4 = uVar7;
        *(undefined8 *)TVar10.Ptr = 0;
        ::operator_delete(TVar2.Ptr,0x28);
      }
      ::operator_delete((void *)local_118._0_8_,0x28);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_118 + 8));
    EVar19 = (*(FActiveLevel **)pFVar9)->State;
    dVar6 = (double)(longlong)local_118._8_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (EVar19 == QueuedForLoading) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_90);
        local_118._16_8_ = param_2->_padding_;
        ::FName::ToString((FName *)(local_118 + 0x10),&local_f0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      uVar13 = uVar17;
      if ((int)uVar14 < (this->LevelStats).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar14 * 0x138 + 0x131] =
           (FScriptContainerElement)0x1;
      uVar14 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      dVar1 = (*(FActiveLevel **)pFVar9)->StateStartTime;
      if ((int)uVar14 < (this->LevelStats).ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x138 + 0x80;
      if (local_c0 != pFVar16) {
        *(double *)pFVar16 = dVar6 - dVar1;
        pFVar16[8] = (FScriptContainerElement)0x1;
      }
      UpdateLevelState(this,*(FActiveLevel **)pFVar9,param_2,Loading,dVar6);
    }
    else if ((EVar19 != Loading) && (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString(EVar19);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_80);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = 0;
    if (param_3 == (ULevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        local_118._24_8_ = param_2->_padding_;
        ::FName::ToString((FName *)(local_118 + 0x18),&local_e0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      dVar1 = (*(FActiveLevel **)pFVar9)->StateStartTime;
      uVar17 = uVar14;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x138 + 0x90;
      if (local_b8 != pFVar16) {
        *(double *)pFVar16 = dVar6 - dVar1;
        pFVar16[8] = (FScriptContainerElement)0x1;
      }
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar19 = None;
      (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x138 + 0x131] =
           (FScriptContainerElement)0x1;
    }
    else {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,local_60);
        local_118._32_8_ = param_2->_padding_;
        ::FName::ToString((FName *)(local_118 + 0x20),&local_d0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_3);
      this_00 = UPackage::GetLoadedPath(pUVar11);
      FVar12 = FPackagePath::GetPackageFName(this_00);
      uVar3 = *(undefined8 *)FVar12;
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      uVar17 = uVar14;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)((this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x138) =
           uVar3;
      pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_3);
      lVar4 = pUVar11->_padding_;
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      uVar17 = uVar14;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(longlong *)((this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x138 + 8) =
           lVar4;
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      uVar17 = uVar14;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x138 + 0x131] =
           (FScriptContainerElement)0x1;
      uVar13 = (*(FActiveLevel **)pFVar9)->StatsIndex;
      dVar1 = (*(FActiveLevel **)pFVar9)->StateStartTime;
      if ((int)uVar13 < (this->LevelStats).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x138 + 0x90;
      if (local_a8 != pFVar16) {
        *(double *)pFVar16 = dVar6 - dVar1;
        pFVar16[8] = (FScriptContainerElement)0x1;
      }
      EVar19 = Loaded;
    }
    UpdateLevelState(this,*(FActiveLevel **)pFVar9,param_2,EVar19,dVar6);
  }
  return;
}

// OnLevelFinishedRemoveFromWorld @ 148414460

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
ULevelStreamingProfilingSubsystem::OnLevelFinishedRemoveFromWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  double dVar1;
  ELevelState EVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_a8;
  ULevelStreaming *local_a0;
  FName local_98;
  LARGE_INTEGER local_90;
  FScriptContainerElement local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60 [3];
  
  if (this->bIsTracking != false) {
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = uVar11;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      uVar7 = local_res8.ObjectIndex;
      local_a8 = local_res8;
      uVar8 = local_res8.ObjectSerialNumber;
    }
    uVar12 = uVar7 - uVar8 ^ uVar8 >> 0xd;
    uVar7 = (-0x61c88647 - uVar12) - uVar8 ^ uVar12 << 8;
    uVar9 = (uVar8 - uVar7) - uVar12 ^ uVar7 >> 0xd;
    uVar12 = (uVar12 - uVar9) - uVar7 ^ uVar9 >> 0xc;
    uVar8 = (uVar7 - uVar12) - uVar9 ^ uVar12 << 0x10;
    uVar7 = (uVar9 - uVar8) - uVar12 ^ uVar8 >> 5;
    uVar9 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 3;
    uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 << 10;
    pTVar6 = TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar7 - uVar8) - uVar9 ^ uVar8 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_a8);
    if (pTVar6->Ptr != (FActiveLevel *)0x0) {
      EVar2 = pTVar6->Ptr->State;
      if ((EVar2 != RemovingFromWorld) && (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
        EnumToString(EVar2);
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,local_60);
        local_98 = (FName)param_2->_padding_;
        ::FName::ToString(&local_98,&local_80);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      QueryPerformanceCounter(&local_90);
      uVar8 = pTVar6->Ptr->StatsIndex;
      uVar7 = uVar11;
      if ((int)uVar8 < (this->LevelStats).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      dVar4 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar8 * 0x138 + 0x131] =
           (FScriptContainerElement)0x1;
      uVar8 = pTVar6->Ptr->StatsIndex;
      dVar1 = pTVar6->Ptr->StateStartTime;
      if ((int)uVar8 < (this->LevelStats).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x138 + 0xe0;
      if (local_88 != pFVar10) {
        *(double *)pFVar10 = dVar4 - dVar1;
        pFVar10[8] = (FScriptContainerElement)0x1;
      }
      UpdateLevelState(this,pTVar6->Ptr,param_2,RemovedFromWorld,dVar4);
    }
  }
  return;
}

// OnLevelQueuedForAddToWorld @ 1484147d0

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
ULevelStreamingProfilingSubsystem::OnLevelQueuedForAddToWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  TArray<ULevelStreamingProfilingSubsystem::FLevelStats,TSizedDefaultAllocator<32>_> *this_00;
  ELevelState EVar1;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FActiveLevel *pFVar8;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_d8;
  ULevelStreaming *local_d0;
  undefined1 local_c8 [48];
  FScriptContainerElement local_98 [8];
  FScriptContainerElement local_90 [8];
  FScriptContainerElement local_88 [8];
  FScriptContainerElement local_80 [8];
  FScriptContainerElement local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  if (this->bIsTracking != false) {
    uVar14 = 0;
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    uVar11 = 0;
    uVar10 = uVar14;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_d0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_d0);
      uVar10 = local_res8.ObjectIndex;
      local_d8 = local_res8;
      uVar11 = local_res8.ObjectSerialNumber;
    }
    uVar15 = uVar10 - uVar11 ^ uVar11 >> 0xd;
    uVar10 = (-0x61c88647 - uVar11) - uVar15 ^ uVar15 << 8;
    uVar12 = (uVar11 - uVar10) - uVar15 ^ uVar10 >> 0xd;
    uVar15 = (uVar15 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar11 = (uVar10 - uVar15) - uVar12 ^ uVar15 << 0x10;
    uVar10 = (uVar12 - uVar11) - uVar15 ^ uVar11 >> 5;
    uVar12 = (uVar15 - uVar10) - uVar11 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar12) - uVar10 ^ uVar12 << 10;
    pFVar8 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar10 - uVar11) - uVar12 ^ uVar11 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_d8);
    if (*(FActiveLevel **)pFVar8 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      TVar9 = MakeActiveLevel(this,(ULevelStreaming *)local_c8,(ELevelState)param_2,
                              (ULevel *)&DAT_00000003);
      if (pFVar8 != TVar9.Ptr) {
        uVar5 = *(undefined4 *)&(TVar9.Ptr)->field_0x4;
        TVar2.Ptr = *(FActiveLevel **)pFVar8;
        pFVar8->State = (TVar9.Ptr)->State;
        *(undefined4 *)&pFVar8->field_0x4 = uVar5;
        *(undefined8 *)TVar9.Ptr = 0;
        ::operator_delete(TVar2.Ptr,0x28);
      }
      ::operator_delete((void *)local_c8._0_8_,0x28);
    }
    EVar1 = (*(FActiveLevel **)pFVar8)->State;
    if (EVar1 == RemovedFromWorld) {
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      this_00 = &this->LevelStats;
      iVar7 = TArray<ULevelStreamingProfilingSubsystem::FLevelStats,TSizedDefaultAllocator<32>_>::
              AddDefaulted(this_00);
      (*(FActiveLevel **)pFVar8)->StatsIndex = iVar7;
      uVar10 = uVar14;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c8._8_8_ = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138;
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FLevelStats::operator=
                ((FLevelStats *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138),
                 (FLevelStats *)local_c8._8_8_);
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      uVar14 = 0;
      uVar10 = uVar14;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138 + 0xa0;
      if (local_98 != pFVar13) {
        *(undefined8 *)pFVar13 = 0;
        pFVar13[8] = (FScriptContainerElement)0x1;
      }
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      uVar10 = uVar14;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138 + 0xb0;
      if (local_90 != pFVar13) {
        *(undefined8 *)pFVar13 = 0;
        pFVar13[8] = (FScriptContainerElement)0x1;
      }
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      uVar10 = uVar14;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138 + 0xc0;
      if (local_88 != pFVar13) {
        *(undefined8 *)pFVar13 = 0;
        pFVar13[8] = (FScriptContainerElement)0x1;
      }
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      uVar10 = uVar14;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138 + 0xd0;
      if (local_80 != pFVar13) {
        *(undefined8 *)pFVar13 = 0;
        pFVar13[8] = (FScriptContainerElement)0x1;
      }
      uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
      if ((int)uVar11 < (this->LevelStats).ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x138 + 0xe0;
      if (local_78 != pFVar13) {
        *(undefined8 *)pFVar13 = 0;
        pFVar13[8] = (FScriptContainerElement)0x1;
      }
    }
    else if ((EVar1 != Loaded) && (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString(EVar1);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_60);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_50);
      local_c8._16_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_c8 + 0x10),(FString *)(local_c8 + 0x20));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_c8._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._32_8_);
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_c8 + 0x18));
    uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    uVar10 = 0;
    if ((int)uVar11 < (this->LevelStats).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    dVar4 = (double)(longlong)local_c8._24_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar11 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    UpdateLevelState(this,*(FActiveLevel **)pFVar8,param_2,QueuedForAddToWorld,dVar4);
  }
  return;
}

// OnLevelQueuedForLoading @ 148414e50

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
ULevelStreamingProfilingSubsystem::OnLevelQueuedForLoading
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2)

{
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar1;
  undefined4 uVar2;
  FActiveLevel *pFVar3;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  FName local_res8;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  if (this->bIsTracking != false) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FVar8.Value = 0;
    uVar6 = 0;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_48);
      FVar8 = local_res8.ComparisonIndex.Value;
      local_res20 = local_res8;
      uVar6 = local_res8.Number;
    }
    uVar9 = FVar8.Value - uVar6 ^ uVar6 >> 0xd;
    uVar5 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
    uVar7 = (uVar6 - uVar5) - uVar9 ^ uVar5 >> 0xd;
    uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar6 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 0x10;
    uVar5 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 5;
    uVar7 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
    pFVar3 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_res20);
    if ((*(FActiveLevel **)pFVar3 != (FActiveLevel *)0x0) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_48);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((ULevelStreaming *)local_48.Data.AllocatorInstance.Data != (ULevelStreaming *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_38);
      local_res8 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((ULevelStreaming *)local_48.Data.AllocatorInstance.Data != (ULevelStreaming *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TVar4 = MakeActiveLevel(this,(ULevelStreaming *)&local_res8,(ELevelState)param_2,
                            (ULevel *)&DAT_00000001);
    if (pFVar3 != TVar4.Ptr) {
      uVar2 = *(undefined4 *)&(TVar4.Ptr)->field_0x4;
      TVar1.Ptr = *(FActiveLevel **)pFVar3;
      pFVar3->State = (TVar4.Ptr)->State;
      *(undefined4 *)&pFVar3->field_0x4 = uVar2;
      *(undefined8 *)TVar4.Ptr = 0;
      ::operator_delete(TVar1.Ptr,0x28);
    }
    ::operator_delete((void *)local_res8,0x28);
  }
  return;
}

// OnLevelQueuedForRemoveFromWorld @ 1484150a0

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
ULevelStreamingProfilingSubsystem::OnLevelQueuedForRemoveFromWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  FActiveLevel *pFVar6;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_a8;
  ULevelStreaming *local_a0;
  undefined1 local_98 [40];
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  if (this->bIsTracking != false) {
    uVar11 = 0;
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    uVar9 = uVar11;
    uVar8 = uVar11;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      uVar8 = local_res8.ObjectIndex;
      local_a8 = local_res8;
      uVar9 = local_res8.ObjectSerialNumber;
    }
    uVar12 = uVar8 - uVar9 ^ uVar9 >> 0xd;
    uVar8 = (-0x61c88647 - uVar12) - uVar9 ^ uVar12 << 8;
    uVar10 = (uVar9 - uVar8) - uVar12 ^ uVar8 >> 0xd;
    uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xc;
    uVar9 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 0x10;
    uVar8 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 5;
    uVar10 = (uVar12 - uVar8) - uVar9 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 10;
    pFVar6 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar8 - uVar9) - uVar10 ^ uVar9 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_a8);
    if (*(FActiveLevel **)pFVar6 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      TVar7 = MakeActiveLevel(this,(ULevelStreaming *)local_98,(ELevelState)param_2,
                              (ULevel *)&DAT_00000006);
      if (pFVar6 != TVar7.Ptr) {
        uVar4 = *(undefined4 *)&(TVar7.Ptr)->field_0x4;
        TVar1.Ptr = *(FActiveLevel **)pFVar6;
        pFVar6->State = (TVar7.Ptr)->State;
        *(undefined4 *)&pFVar6->field_0x4 = uVar4;
        *(undefined8 *)TVar7.Ptr = 0;
        ::operator_delete(TVar1.Ptr,0x28);
      }
      ::operator_delete((void *)local_98._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar6)->State != AddedToWorld) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar6)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_60);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_50);
      local_98._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_98 + 8),(FString *)(local_98 + 0x18));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_98._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._24_8_);
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_98 + 0x10));
    uVar9 = (*(FActiveLevel **)pFVar6)->StatsIndex;
    if ((int)uVar9 < (this->LevelStats).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    dVar3 = (double)(longlong)local_98._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    UpdateLevelState(this,*(FActiveLevel **)pFVar6,param_2,QueuedForRemoveFromWorld,dVar3);
  }
  return;
}

// OnLevelStartedAddToWorld @ 148415460

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
ULevelStreamingProfilingSubsystem::OnLevelStartedAddToWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  double dVar1;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  UWorld *pUVar7;
  FActiveLevel *pFVar8;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_b8;
  ULevelStreaming *local_b0;
  undefined1 local_a8 [40];
  FScriptContainerElement local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  if ((this->bIsTracking != false) &&
     (pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this), param_1 == pUVar7)) {
    uVar10 = 0;
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    uVar11 = uVar10;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_b0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_b0);
      uVar10 = local_res8.ObjectIndex;
      local_b8 = local_res8;
      uVar11 = local_res8.ObjectSerialNumber;
    }
    uVar14 = uVar10 - uVar11 ^ uVar11 >> 0xd;
    uVar10 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
    uVar12 = (uVar11 - uVar10) - uVar14 ^ uVar10 >> 0xd;
    uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar11 = (uVar10 - uVar14) - uVar12 ^ uVar14 << 0x10;
    uVar10 = (uVar12 - uVar11) - uVar14 ^ uVar11 >> 5;
    uVar12 = (uVar14 - uVar10) - uVar11 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar12) - uVar10 ^ uVar12 << 10;
    pFVar8 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar10 - uVar11) - uVar12 ^ uVar11 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_b8);
    if (*(FActiveLevel **)pFVar8 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_78);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      TVar9 = MakeActiveLevel(this,(ULevelStreaming *)local_a8,(ELevelState)param_2,
                              (ULevel *)&DAT_00000004);
      if (pFVar8 != TVar9.Ptr) {
        uVar5 = *(undefined4 *)&(TVar9.Ptr)->field_0x4;
        TVar2.Ptr = *(FActiveLevel **)pFVar8;
        pFVar8->State = (TVar9.Ptr)->State;
        *(undefined4 *)&pFVar8->field_0x4 = uVar5;
        *(undefined8 *)TVar9.Ptr = 0;
        ::operator_delete(TVar2.Ptr,0x28);
      }
      ::operator_delete((void *)local_a8._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar8)->State != QueuedForAddToWorld) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar8)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_68);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_58);
      local_a8._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_a8 + 8),(FString *)(local_a8 + 0x18));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_a8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._24_8_);
      }
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_a8 + 0x10));
    uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    uVar10 = 0;
    if ((int)uVar11 < (this->LevelStats).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    dVar4 = (double)(longlong)local_a8._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar11 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    dVar1 = (*(FActiveLevel **)pFVar8)->StateStartTime;
    uVar10 = 0;
    if ((int)uVar11 < (this->LevelStats).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x138 + 0xa0;
    if (local_80 != pFVar13) {
      *(double *)pFVar13 = dVar4 - dVar1;
      pFVar13[8] = (FScriptContainerElement)0x1;
    }
    UpdateLevelState(this,*(FActiveLevel **)pFVar8,param_2,AddingToWorld,dVar4);
  }
  return;
}

// OnLevelStartedAsyncLoading @ 148415860

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
ULevelStreamingProfilingSubsystem::OnLevelStartedAsyncLoading
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2)

{
  double dVar1;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  FActiveLevel *pFVar8;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  ULevelStreaming *local_b8;
  undefined1 local_b0 [48];
  FScriptContainerElement local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  if (this->bIsTracking != false) {
    uVar10 = 0;
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    uVar11 = uVar10;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_b8 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_b8);
      uVar10 = local_res8.ObjectIndex;
      local_res20 = local_res8;
      uVar11 = local_res8.ObjectSerialNumber;
    }
    uVar14 = uVar10 - uVar11 ^ uVar11 >> 0xd;
    uVar10 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
    uVar12 = (uVar11 - uVar10) - uVar14 ^ uVar10 >> 0xd;
    uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar11 = (uVar10 - uVar14) - uVar12 ^ uVar14 << 0x10;
    uVar10 = (uVar12 - uVar11) - uVar14 ^ uVar11 >> 5;
    uVar12 = (uVar14 - uVar10) - uVar11 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar12) - uVar10 ^ uVar12 << 10;
    pFVar8 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar10 - uVar11) - uVar12 ^ uVar11 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_res20);
    if (*(FActiveLevel **)pFVar8 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_78);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      TVar9 = MakeActiveLevel(this,(ULevelStreaming *)local_b0,(ELevelState)param_2,
                              (ULevel *)&DAT_00000001);
      if (pFVar8 != TVar9.Ptr) {
        uVar5 = *(undefined4 *)&(TVar9.Ptr)->field_0x4;
        TVar2.Ptr = *(FActiveLevel **)pFVar8;
        pFVar8->State = (TVar9.Ptr)->State;
        *(undefined4 *)&pFVar8->field_0x4 = uVar5;
        *(undefined8 *)TVar9.Ptr = 0;
        ::operator_delete(TVar2.Ptr,0x28);
      }
      ::operator_delete((void *)local_b0._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar8)->State != QueuedForLoading) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar8)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_68);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_58);
      local_b0._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_b0 + 8),(FString *)(local_b0 + 0x20));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_b0._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._32_8_);
      }
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_b0 + 0x10));
    dVar6 = __real_4170000000000000;
    uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    uVar10 = 0;
    if ((int)uVar11 < (this->LevelStats).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    dVar4 = (double)(longlong)local_b0._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar11 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    uVar11 = (*(FActiveLevel **)pFVar8)->StatsIndex;
    dVar1 = (*(FActiveLevel **)pFVar8)->StateStartTime;
    uVar10 = 0;
    if ((int)uVar11 < (this->LevelStats).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x138 + 0x80;
    if (local_80 != pFVar13) {
      *(double *)pFVar13 = dVar4 - dVar1;
      pFVar13[8] = (FScriptContainerElement)0x1;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_b0 + 0x18));
    UpdateLevelState(this,*(FActiveLevel **)pFVar8,param_2,Loading,
                     (double)(longlong)local_b0._24_8_ * FGenericPlatformTime::SecondsPerCycle +
                     dVar6);
  }
  return;
}

// OnLevelStartedRemoveFromWorld @ 148415c70

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
ULevelStreamingProfilingSubsystem::OnLevelStartedRemoveFromWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  double dVar1;
  ELevelState EVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  UWorld *pUVar6;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  *pTVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_a8;
  ULevelStreaming *local_a0;
  FName local_98;
  LARGE_INTEGER local_90;
  FString local_88;
  FScriptContainerElement local_78 [8];
  FScriptContainerElement local_70 [8];
  FString local_68;
  FString local_58 [3];
  
  if ((this->bIsTracking != false) &&
     (pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this), param_1 == pUVar6)) {
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    uVar13 = 0;
    uVar10 = uVar13;
    uVar9 = uVar13;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      uVar9 = local_res8.ObjectIndex;
      local_a8 = local_res8;
      uVar10 = local_res8.ObjectSerialNumber;
    }
    uVar14 = uVar9 - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar14) - uVar10 ^ uVar14 << 8;
    uVar11 = (uVar10 - uVar9) - uVar14 ^ uVar9 >> 0xd;
    uVar14 = (uVar14 - uVar11) - uVar9 ^ uVar11 >> 0xc;
    uVar10 = (uVar9 - uVar14) - uVar11 ^ uVar14 << 0x10;
    uVar9 = (uVar11 - uVar10) - uVar14 ^ uVar10 >> 5;
    uVar11 = (uVar14 - uVar9) - uVar10 ^ uVar9 >> 3;
    uVar10 = (uVar10 - uVar11) - uVar9 ^ uVar11 << 10;
    pTVar7 = TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar9 - uVar10) - uVar11 ^ uVar10 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_a8);
    if (pTVar7->Ptr != (FActiveLevel *)0x0) {
      EVar2 = pTVar7->Ptr->State;
      if ((EVar2 != QueuedForRemoveFromWorld) && (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
        EnumToString(EVar2);
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_68);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,local_58);
        local_98 = (FName)param_2->_padding_;
        ::FName::ToString(&local_98,&local_88);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
      }
      QueryPerformanceCounter(&local_90);
      uVar10 = pTVar7->Ptr->StatsIndex;
      if ((int)uVar10 < (this->LevelStats).ArrayNum) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      dVar4 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar10 * 0x138 + 0x131] =
           (FScriptContainerElement)0x1;
      uVar10 = pTVar7->Ptr->StatsIndex;
      dVar1 = pTVar7->Ptr->StateStartTime;
      uVar9 = 0;
      if ((int)uVar10 < (this->LevelStats).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x138 + 0xd0;
      if (local_78 != pFVar12) {
        *(double *)pFVar12 = dVar4 - dVar1;
        pFVar12[8] = (FScriptContainerElement)0x1;
      }
      if ((pTVar7->Ptr->TimeAddedToWorld).bIsSet != false) {
        pdVar8 = TOptional<double>::GetValue(&pTVar7->Ptr->TimeAddedToWorld);
        dVar1 = *pdVar8;
        uVar10 = pTVar7->Ptr->StatsIndex;
        uVar9 = 0;
        if ((int)uVar10 < (this->LevelStats).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x138 + 0xc0;
        if (local_70 != pFVar12) {
          *(double *)pFVar12 = dVar4 - dVar1;
          pFVar12[8] = (FScriptContainerElement)0x1;
        }
      }
      UpdateLevelState(this,pTVar7->Ptr,param_2,RemovingFromWorld,dVar4);
    }
  }
  return;
}

// OnLevelStreamingStateChanged @ 148416080

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
ULevelStreamingProfilingSubsystem::OnLevelStreamingStateChanged
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3,ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  UWorld *pUVar1;
  TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>
  *this_00;
  FStaticBasicLogRecord *pFVar2;
  FName local_res10;
  ULevelStreaming *local_res18 [2];
  FString local_58;
  FString local_48;
  
  local_res18[0] = param_2;
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 != pUVar1) {
    return;
  }
  if (param_5 != param_4) {
    this_00 = &(this->WorldLevelStreamingStats).LevelsLoading;
    TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>::
    Remove(this_00,param_2);
    TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>::
    Remove(&(this->WorldLevelStreamingStats).LevelsMakingVisible,param_2);
    TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>::
    Remove(&(this->WorldLevelStreamingStats).LevelsMakingInvisible,param_2);
    if (param_5 != Loading) {
      if (param_5 == MakingVisible) {
        this_00 = &(this->WorldLevelStreamingStats).LevelsMakingVisible;
      }
      else {
        if (param_5 != MakingInvisible) goto LAB_148416144;
        this_00 = &(this->WorldLevelStreamingStats).LevelsMakingInvisible;
      }
    }
    TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>::
    Emplace<ULevelStreaming_const_*_const_&>
              (this_00,(ULevelStreaming **)&local_res10,(bool *)local_res18);
  }
LAB_148416144:
  if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
    ::EnumToString(param_5);
    ::EnumToString(param_4);
    ULevelStreaming::GetWorldAssetPackageName(param_2,&local_48);
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling)
    ;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  switch(param_5) {
  case Removed:
    OnStreamingLevelRemoved(this,param_1,param_2);
    break;
  case Unloaded:
    if (param_4 == Loading) {
      OnLevelFinishedAsyncLoading(this,param_1,param_2,(ULevel *)0x0);
      return;
    }
    if ((byte)LogLevelStreamingProfiling._0_1_ < 6) {
      return;
    }
    ::EnumToString(param_4);
    pFVar2 = &::LOG_Static;
    goto LAB_148416353;
  case FailedToLoad:
switchD_148416250_caseD_2:
    OnLevelFinishedAsyncLoading(this,param_1,param_2,param_3);
    break;
  case Loading:
    OnLevelStartedAsyncLoading(this,param_1,param_2);
    break;
  case LoadedNotVisible:
    if (((param_4 == Unloaded) || (param_4 == Loading)) || (param_4 == LoadedNotVisible)) {
      if (param_3 != (ULevel *)0x0) goto switchD_148416250_caseD_2;
      if ((byte)LogLevelStreamingProfiling._0_1_ < 6) {
        return;
      }
      ::EnumToString(param_4);
      pFVar2 = &::LOG_Static;
    }
    else {
      if (param_4 == MakingInvisible) {
        OnLevelFinishedRemoveFromWorld(this,param_1,param_2,param_3);
        return;
      }
      if ((byte)LogLevelStreamingProfiling._0_1_ < 6) {
        return;
      }
      ::EnumToString(param_4);
      pFVar2 = &::LOG_Static;
    }
    goto LAB_148416353;
  case LoadedVisible:
    if (param_4 == MakingVisible) {
      OnLevelFinishedAddToWorld(this,param_1,param_2,param_3);
      return;
    }
    if ((byte)LogLevelStreamingProfiling._0_1_ < 6) {
      return;
    }
    ::EnumToString(param_4);
    pFVar2 = &::LOG_Static;
LAB_148416353:
    UE::Logging::Private::BasicLog<6>(pFVar2,(FLogCategoryBase *)&LogLevelStreamingProfiling);
  }
  return;
}

// OnLevelStreamingTargetStateChanged @ 1484163a0

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
ULevelStreamingProfilingSubsystem::OnLevelStreamingTargetStateChanged
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3,ELevelStreamingState param_4,ELevelStreamingTargetState param_5,
          ELevelStreamingTargetState param_6)

{
  UWorld *pUVar1;
  FName local_res10;
  FString local_50;
  FString local_40;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar1) {
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ::EnumToString(param_6);
      ::EnumToString(param_5);
      ::EnumToString(param_4);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_40);
      local_res10 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res10,&local_50);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if ((param_6 != Unloaded) && (param_6 != UnloadedAndRemoved)) {
      if (param_6 == LoadedNotVisible) {
        if (param_4 == Unloaded) {
          OnLevelQueuedForLoading(this,param_1,param_2);
        }
        else if (param_4 == LoadedNotVisible) {
          OnLevelUnqueuedForRemoveFromWorld(this,param_1,param_2,param_3);
        }
        else if (param_4 != MakingVisible) {
          if (param_4 == LoadedVisible) {
            OnLevelQueuedForRemoveFromWorld(this,param_1,param_2,param_3);
          }
          else if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
            ::EnumToString(param_4);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
          }
        }
      }
      else if (param_6 == LoadedVisible) {
        if (param_4 == LoadedNotVisible) {
          OnLevelQueuedForAddToWorld(this,param_1,param_2,param_3);
        }
        else if (param_4 == LoadedVisible) {
          OnLevelUnqueuedForAddToWorld(this,param_1,param_2,param_3);
        }
        else if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
          ::EnumToString(param_4);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        }
      }
    }
  }
  return;
}

// OnLevelUnqueuedForAddToWorld @ 148416620

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
ULevelStreamingProfilingSubsystem::OnLevelUnqueuedForAddToWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  FActiveLevel *pFVar6;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_a8;
  ULevelStreaming *local_a0;
  undefined1 local_98 [40];
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  if (this->bIsTracking != false) {
    uVar11 = 0;
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    uVar9 = uVar11;
    uVar8 = uVar11;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      uVar8 = local_res8.ObjectIndex;
      local_a8 = local_res8;
      uVar9 = local_res8.ObjectSerialNumber;
    }
    uVar12 = uVar8 - uVar9 ^ uVar9 >> 0xd;
    uVar8 = (-0x61c88647 - uVar12) - uVar9 ^ uVar12 << 8;
    uVar10 = (uVar9 - uVar8) - uVar12 ^ uVar8 >> 0xd;
    uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xc;
    uVar9 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 0x10;
    uVar8 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 5;
    uVar10 = (uVar12 - uVar8) - uVar9 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 10;
    pFVar6 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar8 - uVar9) - uVar10 ^ uVar9 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_a8);
    if (*(FActiveLevel **)pFVar6 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      TVar7 = MakeActiveLevel(this,(ULevelStreaming *)local_98,(ELevelState)param_2,
                              (ULevel *)&DAT_00000003);
      if (pFVar6 != TVar7.Ptr) {
        uVar4 = *(undefined4 *)&(TVar7.Ptr)->field_0x4;
        TVar1.Ptr = *(FActiveLevel **)pFVar6;
        pFVar6->State = (TVar7.Ptr)->State;
        *(undefined4 *)&pFVar6->field_0x4 = uVar4;
        *(undefined8 *)TVar7.Ptr = 0;
        ::operator_delete(TVar1.Ptr,0x28);
      }
      ::operator_delete((void *)local_98._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar6)->State != QueuedForAddToWorld) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar6)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_60);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_50);
      local_98._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_98 + 8),(FString *)(local_98 + 0x18));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_98._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._24_8_);
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_98 + 0x10));
    uVar9 = (*(FActiveLevel **)pFVar6)->StatsIndex;
    if ((int)uVar9 < (this->LevelStats).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    dVar3 = (double)(longlong)local_98._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    UpdateLevelState(this,*(FActiveLevel **)pFVar6,param_2,Loaded,dVar3);
  }
  return;
}

// OnLevelUnqueuedForLoading @ 148416970

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
ULevelStreamingProfilingSubsystem::OnLevelUnqueuedForLoading
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  FName local_res8;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if (this->bIsTracking != false) {
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_28);
      local_res8 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FVar5.Value = 0;
    uVar3 = FVar5.Value;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res20 = (FName)param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
      FVar5 = local_res8.ComparisonIndex.Value;
      local_res20 = local_res8;
      uVar3 = local_res8.Number;
    }
    if (*(int *)&(this->ActiveLevels).field_0x8 != *(int *)&(this->ActiveLevels).field_0x34) {
      uVar2 = FVar5.Value - uVar3 ^ uVar3 >> 0xd;
      uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
      uVar6 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
      uVar3 = (uVar2 - uVar6) - uVar4 ^ uVar6 >> 0xc;
      uVar2 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
      uVar4 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 5;
      uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
      uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
      iVar1 = TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TObjectKey<ULevelStreaming_const_>_>
                        ((TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
                          *)&this->ActiveLevels,uVar2 >> 0xf ^ (uVar4 - uVar2) - uVar3,
                         (TObjectKey<ULevelStreaming_const_> *)&local_res20);
      if (iVar1 != 0) {
        return;
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_28);
      local_res8 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnLevelUnqueuedForRemoveFromWorld @ 148416b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::OnLevelUnqueuedForRemoveFromWorld
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,
          ULevel *param_3)

{
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  FActiveLevel *pFVar6;
  TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>
  TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_a8;
  ULevelStreaming *local_a0;
  undefined1 local_98 [40];
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  if (this->bIsTracking != false) {
    uVar11 = 0;
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    uVar9 = uVar11;
    uVar8 = uVar11;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      uVar8 = local_res8.ObjectIndex;
      local_a8 = local_res8;
      uVar9 = local_res8.ObjectSerialNumber;
    }
    uVar12 = uVar8 - uVar9 ^ uVar9 >> 0xd;
    uVar8 = (-0x61c88647 - uVar12) - uVar9 ^ uVar12 << 8;
    uVar10 = (uVar9 - uVar8) - uVar12 ^ uVar8 >> 0xd;
    uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xc;
    uVar9 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 0x10;
    uVar8 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 5;
    uVar10 = (uVar12 - uVar8) - uVar9 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 10;
    pFVar6 = (FActiveLevel *)
             TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
             ::FindOrAddImpl<TObjectKey<ULevelStreaming_const_>_>
                       ((TMapBase<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>_>
                         *)&this->ActiveLevels,(uVar8 - uVar9) - uVar10 ^ uVar9 >> 0xf,
                        (TObjectKey<ULevelStreaming_const_> *)&local_a8);
    if (*(FActiveLevel **)pFVar6 == (FActiveLevel *)0x0) {
      if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_70);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      TVar7 = MakeActiveLevel(this,(ULevelStreaming *)local_98,(ELevelState)param_2,
                              (ULevel *)&DAT_00000007);
      if (pFVar6 != TVar7.Ptr) {
        uVar4 = *(undefined4 *)&(TVar7.Ptr)->field_0x4;
        TVar1.Ptr = *(FActiveLevel **)pFVar6;
        pFVar6->State = (TVar7.Ptr)->State;
        *(undefined4 *)&pFVar6->field_0x4 = uVar4;
        *(undefined8 *)TVar7.Ptr = 0;
        ::operator_delete(TVar1.Ptr,0x28);
      }
      ::operator_delete((void *)local_98._0_8_,0x28);
    }
    if (((*(FActiveLevel **)pFVar6)->State != QueuedForRemoveFromWorld) &&
       (1 < (byte)LogLevelStreamingProfiling._0_1_)) {
      EnumToString((*(FActiveLevel **)pFVar6)->State);
      ULevelStreaming::GetWorldAssetPackageName(param_2,&local_60);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogLevelStreamingProfiling._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName(param_2,local_50);
      local_98._8_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_98 + 8),(FString *)(local_98 + 0x18));
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      if ((void *)local_98._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._24_8_);
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)(local_98 + 0x10));
    uVar9 = (*(FActiveLevel **)pFVar6)->StatsIndex;
    if ((int)uVar9 < (this->LevelStats).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    dVar3 = (double)(longlong)local_98._16_8_ * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->LevelStats).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x138 + 0x131] =
         (FScriptContainerElement)0x1;
    UpdateLevelState(this,*(FActiveLevel **)pFVar6,param_2,AddedToWorld,dVar3);
  }
  return;
}

// OnStreamingLevelRemoved @ 148417370

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
ULevelStreamingProfilingSubsystem::OnStreamingLevelRemoved
          (ULevelStreamingProfilingSubsystem *this,UWorld *param_1,ULevelStreaming *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  uint uVar6;
  FName local_res8;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  if (this->bIsTracking != false) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FVar4.Value = 0;
    uVar3 = FVar4.Value;
    if (param_2 != (ULevelStreaming *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res20 = (FName)param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
      FVar4 = local_res8.ComparisonIndex.Value;
      local_res20 = local_res8;
      uVar3 = local_res8.Number;
    }
    if (*(int *)&(this->ActiveLevels).field_0x8 != *(int *)&(this->ActiveLevels).field_0x34) {
      uVar2 = FVar4.Value - uVar3 ^ uVar3 >> 0xd;
      uVar6 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
      uVar5 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xd;
      uVar3 = (uVar2 - uVar5) - uVar6 ^ uVar5 >> 0xc;
      uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 << 0x10;
      uVar2 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 5;
      uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 >> 3;
      uVar5 = (uVar6 - uVar3) - uVar2 ^ uVar3 << 10;
      iVar1 = TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TObjectKey<ULevelStreaming_const_>_>
                        ((TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
                          *)&this->ActiveLevels,(uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xf,
                         (TObjectKey<ULevelStreaming_const_> *)&local_res20);
      if ((iVar1 != 0) && (5 < (byte)LogLevelStreamingProfiling._0_1_)) {
        ULevelStreaming::GetWorldAssetPackageName(param_2,&local_18);
        local_res8 = (FName)param_2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// PostInitialize @ 148418820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::PostInitialize(ULevelStreamingProfilingSubsystem *this)

{
  FDelegateHandle FVar1;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingTargetState,enum_ELevelStreamingTargetState),FDefaultDelegateUserPolicy>
          ::AddUObject<ULevelStreamingProfilingSubsystem>
                    (&FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,
                     (ULevelStreamingProfilingSubsystem *)&stack0x00000008,(pmf_8da03be1)this);
                    /* WARNING: Load size is inaccurate */
  (this->Handle_OnLevelStreamingTargetStateChanged).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
          ::AddUObject<ULevelStreamingProfilingSubsystem>
                    (&FLevelStreamingDelegates::OnLevelStreamingStateChanged,
                     (ULevelStreamingProfilingSubsystem *)&stack0x00000008,(pmf_1749f36c)this);
                    /* WARNING: Load size is inaccurate */
  (this->Handle_OnLevelStreamingStateChanged).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
          ::AddUObject<ULevelStreamingProfilingSubsystem>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                      *)&FLevelStreamingDelegates::OnLevelBeginMakingVisible,
                     (ULevelStreamingProfilingSubsystem *)&stack0x00000008,(pmf_2bea50c6)this);
                    /* WARNING: Load size is inaccurate */
  (this->Handle_OnLevelBeginAddToWorld).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
          ::AddUObject<ULevelStreamingProfilingSubsystem>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                      *)&FLevelStreamingDelegates::OnLevelBeginMakingInvisible,
                     (ULevelStreamingProfilingSubsystem *)&stack0x00000008,(pmf_2bea50c6)this);
                    /* WARNING: Load size is inaccurate */
  (this->Handle_OnLevelBeginRemoveFromWorld).ID = *FVar1.ID;
  if (GStartProfilingAutomatically != false) {
    if ((this->ReportWritingTask != (TTask<void>)0x0) &&
       (*(char *)((longlong)this->ReportWritingTask + 0xd0) == '\0')) {
      if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      }
      if (this->ReportWritingTask != (TTask<void>)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->ReportWritingTask);
      }
    }
    if (this->bIsTracking == false) {
      this->bIsTracking = true;
      if (4 < (byte)LogLevelStreamingProfiling._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      }
      (this->LevelStats).ArrayNum = 0;
      if ((this->LevelStats).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x138,8,0,&(this->LevelStats).AllocatorInstance,0,&(this->LevelStats).ArrayMax);
      }
      TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
               *)&this->ActiveLevels);
      return;
    }
    if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      return;
    }
  }
  return;
}

// PostReport @ 1484189c0

void __thiscall
ULevelStreamingProfilingSubsystem::PostReport(ULevelStreamingProfilingSubsystem *this)

{
  return;
}

// RecordLevelStreamingCountsToCSV @ 14841cc30

void __thiscall
ULevelStreamingProfilingSubsystem::RecordLevelStreamingCountsToCSV
          (ULevelStreamingProfilingSubsystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FCsvProfiler *this_00;
  int local_res10 [2];
  <lambda_1> local_18;
  
  this_00 = FCsvProfiler::Get();
  bVar4 = FCsvProfiler::IsCapturing(this_00);
  if (bVar4) {
    local_18.NumLevelsMakingVisible = local_res10;
    iVar5 = *(int *)&(this->WorldLevelStreamingStats).LevelsLoading.Elements.field_0x8;
    iVar1 = *(int *)&(this->WorldLevelStreamingStats).LevelsLoading.Elements.field_0x34;
    local_res10[0] = 0;
    local_18.__this = this;
    Algo::
    ForEach<TSet<ULevelStreaming_const_*,DefaultKeyFuncs<ULevelStreaming_const_*,0>,FDefaultSetAllocator>_&,_ULevelStreamingProfilingSubsystem::RecordLevelStreamingCountsToCSV_::__l5::<lambda_1>_>
              (&(this->WorldLevelStreamingStats).LevelsMakingVisible,&local_18);
    iVar2 = *(int *)&(this->WorldLevelStreamingStats).LevelsMakingInvisible.Elements.field_0x8;
    iVar3 = *(int *)&(this->WorldLevelStreamingStats).LevelsMakingInvisible.Elements.field_0x34;
    if (__CsvProfilerStat387 == false) {
      FCsvProfilerTrace::OutputInlineStat("NumLevelsLoading",_GCsvCategory_LevelStreaming.Index);
      __CsvProfilerStat387 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("NumLevelsLoading",_GCsvCategory_LevelStreaming.Index,iVar5 - iVar1,Set);
    if (__CsvProfilerStat388 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("NumLevelsMakingVisible",_GCsvCategory_LevelStreaming.Index);
      __CsvProfilerStat388 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("NumLevelsMakingVisible",_GCsvCategory_LevelStreaming.Index,local_res10[0],Set);
    if (__CsvProfilerStat389 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("NumLevelsMakingInvisible",_GCsvCategory_LevelStreaming.Index);
      __CsvProfilerStat389 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("NumLevelsMakingInvisible",_GCsvCategory_LevelStreaming.Index,iVar2 - iVar3,Set);
    if (__CsvProfilerStat390 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("NumLevelsPendingPurge",_GCsvCategory_LevelStreaming.Index);
      __CsvProfilerStat390 = true;
    }
    iVar5 = FLevelStreamingGCHelper::GetNumLevelsPendingPurge();
    FCsvProfiler::RecordCustomStat
              ("NumLevelsPendingPurge",_GCsvCategory_LevelStreaming.Index,iVar5,Set);
  }
  return;
}

// ShouldCreateSubsystem @ 148427640

bool __thiscall
ULevelStreamingProfilingSubsystem::ShouldCreateSubsystem
          (ULevelStreamingProfilingSubsystem *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  undefined1 local_res18 [8];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pUVar5 = StaticClass();
  GetDerivedClasses(pUVar5,&local_28,true);
  iVar3 = local_28.ArrayNum;
  uVar7 = (ulonglong)local_28.ArrayNum;
  if (0 < local_28.ArrayNum) {
    lVar2 = this->_padding_;
    pFVar1 = local_28.AllocatorInstance.Data + uVar7 * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar3) {
        `TCheckedPointerIterator<UClass_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        uVar7 = local_28._8_8_ & 0xffffffff;
      }
      if (FVar6.Data == pFVar1) goto LAB_1484276e0;
      if (lVar2 == *(longlong *)FVar6.Data) break;
      FVar6.Data = FVar6.Data + 8;
    }
  }
  if (GLevelStreamingProfilingEnabled != false) {
    bVar4 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1484276e2;
    }
  }
LAB_1484276e0:
  bVar4 = false;
LAB_1484276e2:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar4;
}

// StartTracking @ 148427950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::StartTracking(ULevelStreamingProfilingSubsystem *this)

{
  if ((this->ReportWritingTask != (TTask<void>)0x0) &&
     (*(char *)((longlong)this->ReportWritingTask + 0xd0) == '\0')) {
    if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
    }
    if (this->ReportWritingTask != (TTask<void>)0x0) {
      UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->ReportWritingTask);
    }
  }
  if (this->bIsTracking != false) {
    if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
      return;
    }
    return;
  }
  this->bIsTracking = true;
  if (4 < (byte)LogLevelStreamingProfiling._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling)
    ;
  }
  (this->LevelStats).ArrayNum = 0;
  if ((this->LevelStats).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,0,&(this->LevelStats).AllocatorInstance,0,&(this->LevelStats).ArrayMax);
  }
  TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<ULevelStreaming_const_>,TUniquePtr<ULevelStreamingProfilingSubsystem::FActiveLevel,TDefaultDelete<ULevelStreamingProfilingSubsystem::FActiveLevel>_>,0>,FDefaultSetAllocator>
           *)&this->ActiveLevels);
  return;
}

// StaticRegisterNativesULevelStreamingProfilingSubsystem @ 148427a90

void __cdecl
ULevelStreamingProfilingSubsystem::StaticRegisterNativesULevelStreamingProfilingSubsystem(void)

{
  return;
}

// StopTrackingAndReport @ 148427b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
ULevelStreamingProfilingSubsystem::StopTrackingAndReport(ULevelStreamingProfilingSubsystem *this)

{
  int *piVar1;
  TTask<void> *pTVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport>
  FVar8;
  TTask<void> TVar9;
  undefined8 *puVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  TTask<void> this_02;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  longlong local_48;
  FName local_40;
  FStatMessage local_30;
  
  this_02 = (TTask<void>)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport ==
        (FThreadSafeStaticStat<_public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport,*pFVar7,
                 L"STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport;
  if (StatPtr_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,
                            "STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevelStreamingProfilingSubsystem::StopTrackingAndReport(void)_::_2_::FStat_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport,
                         *pFVar7,L"STAT_LevelStreamingProfilingSubsystem_StopTrackingAndReport",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_148427cdb:
    bVar5 = false;
    FVar13 = local_40;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\LevelStreamingProfilingSubsystem.cpp"
                   ,0xe6);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148427cdb;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  if (this->bIsTracking == false) {
    if (2 < (byte)LogLevelStreamingProfiling._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling);
    }
    goto LAB_148427de7;
  }
  this->bIsTracking = false;
  if (4 < (byte)LogLevelStreamingProfiling._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreamingProfiling)
    ;
  }
  TVar9 = (TTask<void>)
          TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
          ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      *)&UE::Tasks::Private::SmallTaskAllocator);
  if (TVar9 != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar9,2,true);
    *(undefined ***)TVar9 =
         &UE::Tasks::Private::
          TExecutableTaskBase<`ULevelStreamingProfilingSubsystem::StopTrackingAndReport'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar9,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ProfilingDebugging\\LevelStreamingProfilingSubsystem.cpp(240)"
               ,BackgroundLow,None,None);
    ((FTaskBase *)((longlong)TVar9 + 0xd8))->_padding_ = (longlong)this;
    *(undefined ***)TVar9 =
         &UE::Tasks::Private::
          TExecutableTask<`ULevelStreamingProfilingSubsystem::StopTrackingAndReport'::`2'::<lambda_1>_>
          ::_vftable_;
    this_02 = TVar9;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_02,0x100);
  pTVar2 = &this->ReportWritingTask;
  if (pTVar2 == (TTask<void> *)&local_48) {
    if (this_02 == (TTask<void>)0x0) goto LAB_148427de7;
    LOCK();
    piVar1 = (int *)((longlong)this_02 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_148427de7;
    puVar10 = *(undefined8 **)this_02;
  }
  else {
    TVar9 = *pTVar2;
    *pTVar2 = this_02;
    if (TVar9 == (TTask<void>)0x0) goto LAB_148427de7;
    LOCK();
    piVar1 = (int *)((longlong)TVar9 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_148427de7;
    puVar10 = *(undefined8 **)TVar9;
    this_02 = TVar9;
  }
  (*(code *)*puVar10)(this_02,1);
LAB_148427de7:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_30.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_30.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_30.StatData.Pad[4] = '\0';
      local_30.StatData.Pad[5] = '\0';
      local_30.StatData.Pad[6] = '\0';
      local_30.StatData.Pad[7] = '\0';
      local_30.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_30.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_30.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_30.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_30);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateLevelState @ 14842b010

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
ULevelStreamingProfilingSubsystem::UpdateLevelState
          (ULevelStreamingProfilingSubsystem *this,FActiveLevel *param_1,ULevelStreaming *param_2,
          ELevelState param_3,double param_4)

{
  uint uVar1;
  ELevelState EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = param_1->StatsIndex;
  EVar2 = param_1->State;
  param_1->StateStartTime = param_4;
  param_1->State = param_3;
  pcVar3 = *(code **)(this->_padding_ + 0x308);
  uVar5 = 0;
  if ((int)uVar1 < (this->LevelStats).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  (*pcVar3)(this,param_1->StatsIndex,
            (this->LevelStats).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x138,param_2,EVar2,
            param_3);
  return;
}

// UpdateTrackingData @ 14842ce20

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
ULevelStreamingProfilingSubsystem::UpdateTrackingData
          (ULevelStreamingProfilingSubsystem *this,int param_1,FLevelStats *param_2,
          ULevelStreaming *param_3,ELevelState param_4,ELevelState param_5)

{
  return;
}

