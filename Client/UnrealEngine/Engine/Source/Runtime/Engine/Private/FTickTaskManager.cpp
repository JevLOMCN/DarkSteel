// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// operator() @ 1488b5200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FTickTaskManager::StartFrame'::__l34::<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x48);
  uVar5 = 0;
  if (param_1 < iVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    local_78 = (longlong)param_1;
    local_70 = (longlong)iVar1;
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
  local_68.AllocatorInstance.SecondaryData = (ForElementType<FTickFunction_*>)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 8;
  FTickFunction::QueueTickFunctionParallel
            (*(FTickFunction **)(*(longlong *)(lVar2 + 0x40) + (longlong)param_1 * 8),
             (FTickContext *)(*(longlong *)this + 0x20),&local_68);
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FTickFunction_*>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddTickFunction @ 1488b91b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::AddTickFunction(FTickTaskManager *this,ULevel *param_1,FTickFunction *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTickTaskLevel *pFVar3;
  
  if (6 < (param_2->TickGroup).Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickFunction->TickGroup >= 0 && TickFunction->TickGroup < TG_NewlySpawned",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0x898,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (ULevel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Level",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0x8c3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->TickTaskLevel == (FTickTaskLevel *)0x0) {
    pFVar3 = (FTickTaskLevel *)(**(code **)(this->_padding_ + 8))(this);
    param_1->TickTaskLevel = pFVar3;
    if (pFVar3 == (FTickTaskLevel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level->TickTaskLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8ca,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pFVar3 = param_1->TickTaskLevel;
  FTickTaskLevel::AddTickFunction(pFVar3,param_2);
  ((param_2->InternalData).Ptr)->TickTaskLevel = pFVar3;
  return;
}

// AllocateTickTaskLevel @ 1488b9800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickTaskLevel * __thiscall FTickTaskManager::AllocateTickTaskLevel(FTickTaskManager *this)

{
  FTickTaskLevel *pFVar1;
  FTickTaskSequencer *pFVar2;
  
  pFVar1 = ::operator_new(0x130);
  if (pFVar1 != (FTickTaskLevel *)0x0) {
    pFVar2 = FTickTaskSequencer::Get();
    pFVar1->TickTaskSequencer = pFVar2;
    *(undefined8 *)&(pFVar1->AllEnabledTickFunctions).Elements = 0;
    *(undefined8 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar1->AllEnabledTickFunctions).Elements.field_0x30 = 0xffffffff;
    (pFVar1->AllEnabledTickFunctions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar1->AllEnabledTickFunctions).HashSize = 0;
    (pFVar1->AllCoolingDownTickFunctions).Head = (FTickFunction *)0x0;
    *(undefined8 *)&(pFVar1->AllDisabledTickFunctions).Elements = 0;
    *(undefined8 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar1->AllDisabledTickFunctions).Elements.field_0x30 = 0xffffffff;
    (pFVar1->AllDisabledTickFunctions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar1->AllDisabledTickFunctions).HashSize = 0;
    *(undefined8 *)&pFVar1->TickFunctionsToReschedule = 0;
    *(undefined8 *)&(pFVar1->TickFunctionsToReschedule).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->NewlySpawnedTickFunctions).Elements = 0;
    *(undefined8 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar1->NewlySpawnedTickFunctions).Elements.field_0x30 = 0xffffffff;
    (pFVar1->NewlySpawnedTickFunctions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar1->NewlySpawnedTickFunctions).HashSize = 0;
    (pFVar1->Context).World = (UWorld *)0x0;
    (pFVar1->Context).DeltaSeconds = 0.0;
    pFVar1->bTickNewlySpawned = false;
    (pFVar1->Context).Thread = GameThread;
    (pFVar1->Context).TickType = '\x02';
    (pFVar1->Context).TickGroup = '\0';
    (pFVar1->Context).bLogTick = false;
    (pFVar1->Context).bLogTicksShowPrerequistes = false;
    return pFVar1;
  }
  return (FTickTaskLevel *)0x0;
}

// DumpAllTickFunctions @ 1488bd450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::DumpAllTickFunctions
          (FTickTaskManager *this,FOutputDevice *param_1,UWorld *param_2,bool param_3,bool param_4,
          bool param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  void **ppvVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ULevel *pUVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_res18 [2];
  ulonglong in_stack_ffffffffffffff60;
  int local_98 [2];
  longlong local_90;
  longlong local_88;
  ForAnyElementType local_80;
  int local_78 [2];
  void *local_70;
  undefined8 local_68;
  void **local_58;
  undefined8 uStack_50;
  FString local_48;
  
  uVar14 = 0;
  local_res18[0] = 0;
  local_98[0] = 0;
  FOutputDevice::Log(param_1,L"");
  bVar6 = param_5;
  FOutputDevice::LogfImpl
            (param_1,
             L"============================ Tick Functions (%s) ============================");
  if ((param_2 == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8d8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (bVar6 == false) {
    iVar7 = UWorld::GetNumLevels(param_2);
    if (0 < iVar7) {
      do {
        pUVar10 = UWorld::GetLevel(param_2,(int)uVar14);
        if ((pUVar10->bIsVisible != '\0') && (pUVar10->TickTaskLevel != (FTickTaskLevel *)0x0)) {
          FTickTaskLevel::DumpAllTickFunctions
                    (pUVar10->TickTaskLevel,param_1,local_res18,local_98,param_3,param_4);
        }
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
        iVar7 = UWorld::GetNumLevels(param_2);
      } while ((int)uVar16 < iVar7);
    }
    FOutputDevice::Log(param_1,L"");
    FOutputDevice::LogfImpl
              (param_1,L"Total registered tick functions: %d, enabled: %d, disabled: %d.");
    FOutputDevice::Log(param_1,L"");
  }
  else {
    local_70 = (void *)0x0;
    local_68 = 0;
    (**(code **)(this->_padding_ + 0x40))
              (this,param_2,&local_70,local_res18,1,in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    lVar12 = (longlong)(int)local_68;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,(int)local_68,&local_80,local_78,local_78 + 1);
    memset(local_80.Data + (longlong)iVar7 * 0xc,0,lVar12 * 0xc);
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    lVar12 = uStack_50;
    local_58 = &local_70;
    uStack_50._0_4_ = 0;
    uVar13 = uVar14;
    uVar15 = uVar14;
    uVar18 = uVar14;
    uVar16 = (uint)uStack_50;
    uStack_50 = lVar12;
    while( true ) {
      ppvVar4 = local_58;
      uVar11 = (uint)uVar13;
      uVar9 = 0;
      if (((int)uVar11 < 0) || (*(int *)(local_58 + 1) <= (int)uVar11)) break;
      if (((int)uVar11 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_90 = (longlong)(int)uVar11;
      uVar17 = (uint)uVar18;
      local_88 = local_90 * 0xc;
      uVar2 = *(undefined8 *)(local_88 + (longlong)*ppvVar4);
      uVar8 = uVar9;
      if ((int)uVar17 < local_78[0]) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ppvVar4 = local_58;
      *(undefined8 *)(local_80.Data + uVar15) = uVar2;
      uVar8 = uVar9;
      if ((int)uVar16 < *(int *)(local_58 + 1)) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)(local_88 + 8 + (longlong)*ppvVar4);
      if ((int)uVar17 < local_78[0]) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      *(undefined4 *)(local_80.Data + uVar15 + 8) = uVar1;
      uVar15 = uVar15 + 0xc;
      uVar16 = uVar16 + 1;
      uVar13 = (ulonglong)uVar16;
    }
    AlgoImpl::
    IntroSortInternal<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,_FTickTaskManager::DumpAllTickFunctions_::__l12::<lambda_1>_>_>
              ((FSortedTickContextGroup *)local_80.Data,local_78[0],(FIdentityFunctor)param_5,
               (<lambda_1> *)&param_5);
    if (0 < local_78[0]) {
      do {
        uVar11 = (uint)uVar14;
        uVar16 = uVar9;
        if ((int)uVar11 < local_78[0]) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        iVar7 = local_78[0];
        if (uVar16 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_78[0];
        }
        uVar16 = uVar9;
        if ((int)uVar11 < iVar7) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FName::ToString((FName *)(local_80.Data + (longlong)(int)uVar11 * 0xc),&local_48);
        FOutputDevice::LogfImpl(param_1,L"%s, %d");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar14 = (ulonglong)(uVar11 + 1);
      } while ((int)(uVar11 + 1) < local_78[0]);
    }
    FOutputDevice::Log(param_1,L"");
    FOutputDevice::LogfImpl(param_1,L"Total enabled tick functions: %d.");
    FOutputDevice::Log(param_1,L"");
    if ((FSortedTickContextGroup *)local_80.Data != (FSortedTickContextGroup *)0x0) {
      FMemory::Free(local_80.Data);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
  }
  return;
}

// EndFrame @ 1488be170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskManager::EndFrame(FTickTaskManager *this)

{
  undefined1 *puVar1;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  FTickTaskSequencer *pFVar3;
  undefined8 *puVar4;
  FTickTaskLevel *this_01;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FTaskSyncManager *this_02;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void *local_68 [2];
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  pFVar3 = this->TickTaskSequencer;
  if ((pFVar3->bLogTicks != false) && (4 < (byte)LogTick._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FTickTaskSequencer::EndFrame(void)___ptr64'::__l6::LOG_Static,
               (FLogCategoryBase *)&LogTick);
  }
  iVar2 = (pFVar3->TickBatches).ArrayNum;
  pFVar9 = (pFVar3->TickBatches).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
  uVar12 = 0;
  while( true ) {
    if ((pFVar3->TickBatches).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    puVar4 = *(undefined8 **)(pFVar9 + 8);
    *(undefined4 *)pFVar9 = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    if (*(int *)((longlong)puVar4 + 0x14) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(puVar4 + 1),0,(int *)((longlong)puVar4 + 0x14));
    }
    *(undefined4 *)(puVar4 + 4) = 0;
    if (*(int *)((longlong)puVar4 + 0x24) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(puVar4 + 3),0,(int *)((longlong)puVar4 + 0x24));
    }
    pFVar9 = pFVar9 + 0x10;
  }
  pFVar3->TickBatchesNum = 0;
  this->bTickNewlySpawned = false;
  uVar13 = uVar12;
  if (0 < (this->LevelList).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < (this->LevelList).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = *(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + uVar13);
      FTickTaskLevel::ScheduleTickFunctionCooldowns(this_01);
      this_00 = &this_01->NewlySpawnedTickFunctions;
      this_01->bTickNewlySpawned = false;
      if (*(int *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x8 !=
          *(int *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x34) {
        TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator((TIterator *)local_58,this_00);
        if (local_3c < *(int *)(local_48 + 0x18)) {
          do {
            plVar5 = *(longlong **)(*(longlong *)local_58._0_8_ + (longlong)local_3c * 0x10);
            if (1 < (byte)LogTick._0_1_) {
              (**(code **)(*plVar5 + 0x20))(plVar5,local_68);
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)
                         &`public:_void___cdecl_FTickTaskLevel::EndFrame(void)___ptr64'::__l8::
                          LOG_Static,(FLogCategoryBase *)&LogTick);
              if (local_68[0] != (void *)0x0) {
                FMemory::Free(local_68[0]);
              }
            }
            local_40 = local_40 & ~local_4c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
          } while (local_3c < *(int *)(local_48 + 0x18));
        }
        local_res10[0] = 0;
        `FTickTaskLevel::EndFrame'::__l5::<lambda_1>::operator()(local_res10);
        bVar7 = 1 < (this_01->NewlySpawnedTickFunctions).HashSize;
        if (!bVar7) {
          TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
          UnhashElements(this_00);
        }
        puVar1 = &(this_01->NewlySpawnedTickFunctions).Elements.field_0xc;
        *(undefined4 *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x34 = 0;
        iVar2 = *(int *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x2c;
        *(undefined4 *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x28 = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)&(this_01->NewlySpawnedTickFunctions).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this_01->NewlySpawnedTickFunctions).Elements.field_0x10,0);
        }
        if (bVar7) {
          (this_01->NewlySpawnedTickFunctions).HashSize = 1;
          TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Rehash
                    (this_00);
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < (this->LevelList).ArrayNum);
  }
  this_02 = UE::Tick::FTaskSyncManager::Get();
  if (this_02 != (FTaskSyncManager *)0x0) {
    UE::Tick::FTaskSyncManager::EndFrame(this_02,(this->Context).World);
  }
  (this->Context).World = (UWorld *)0x0;
  (this->LevelList).ArrayNum = 0;
  if ((this->LevelList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LevelList).AllocatorInstance,0,&(this->LevelList).ArrayMax);
  }
  return;
}

// FillLevelList @ 1488bf7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::FillLevelList
          (FTickTaskManager *this,TArray<ULevel_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  if (((this->LevelList).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LevelList.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8b5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((param_1->AllocatorInstance).Data + lVar10);
      if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x240) & 0x20) != 0)) &&
         (pFVar2 = (FScriptContainerElement *)(lVar3 + 0x158), *(longlong *)pFVar2 != 0)) {
        pFVar4 = (this->LevelList).AllocatorInstance.Data;
        if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)(this->LevelList).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->LevelList).ArrayNum;
        piVar1 = &(this->LevelList).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LevelList).AllocatorInstance,piVar1);
        }
        (this->LevelList).ArrayNum = iVar8 + 1;
        *(longlong *)((this->LevelList).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             *(longlong *)pFVar2;
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// FreeTickTaskLevel @ 1488c0390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskManager::FreeTickTaskLevel(FTickTaskManager *this,FTickTaskLevel *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->LevelList).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->LevelList).ArrayNum * 8;
  do {
    if (pFVar4 == pFVar1) {
LAB_1488c03e6:
      if (param_1 != (FTickTaskLevel *)0x0) {
        FTickTaskLevel::~FTickTaskLevel(param_1);
        ::operator_delete(param_1,0x130);
        return;
      }
      return;
    }
    if (*(FTickTaskLevel **)pFVar4 == param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LevelList.Contains(TickTaskLevel)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x7c3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_1488c03e6;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// Get @ 1488c1b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickTaskManager * __cdecl FTickTaskManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FTickTaskManager *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance._padding_ = (longlong)&___7FTickTaskManager__6B_;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.TickTaskSequencer = FTickTaskSequencer::Get();
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.ArrayNum = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.ArrayMax = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.World = (UWorld *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.DeltaSeconds = 0.0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.Thread = GameThread;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.TickType.Value = '\x02';
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.TickGroup.Value = '\0';
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.bLogTick = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.bLogTicksShowPrerequistes = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.bTickNewlySpawned = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.ArrayNum = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.ArrayMax = 0;
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FTickTaskManager *)(*pcVar1)();
            return pFVar3;
          }
        }
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0x70))
                (IConsoleManager::Singleton,L"dumpticks",
                 L"Dumps all tick functions registered with FTickTaskManager to log.",0);
      UE::Tick::FTaskSyncManager::Get();
      atexit(`FTickTaskManager::Get'::__l2::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::
              __l2::SingletonInstance;
    }
  }
  return &`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2
          ::SingletonInstance;
}

// GetEnabledTickFunctionCounts @ 1488c2c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::GetEnabledTickFunctionCounts
          (FTickTaskManager *this,UWorld *param_1,
          TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess> *param_2,int *param_3,
          bool param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  FTickTaskLevel *pFVar3;
  longlong *plVar4;
  FTickFunction *pFVar5;
  FInternalData *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  ULevel *pUVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  FName local_res10;
  FName local_98;
  undefined1 local_90 [12];
  uint local_84;
  longlong local_80;
  uint local_78;
  int local_74;
  
  if ((param_1 == (UWorld *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x910,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_5) && ((param_1->TickGroup).Value < 7)) && (2 < (byte)LogTick._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`private:_virtual_void___cdecl_FTickTaskManager::GetEnabledTickFunctionCounts(UWorld*___ptr64,TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>&___ptr64,int&___ptr64,bool,bool)___ptr64'
                ::__l13::LOG_Static,(FLogCategoryBase *)&LogTick);
  }
  dVar1 = param_1->TimeSeconds;
  dVar2 = param_1->UnpausedTimeSeconds;
  iVar13 = 0;
  iVar10 = UWorld::GetNumLevels(param_1);
  fVar8 = __real_bf800000;
  if (0 < iVar10) {
    do {
      pUVar11 = UWorld::GetLevel(param_1,iVar13);
      if ((pUVar11->bIsVisible != '\0') &&
         (pFVar3 = pUVar11->TickTaskLevel, pFVar3 != (FTickTaskLevel *)0x0)) {
        TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator((TIterator *)local_90,&pFVar3->AllEnabledTickFunctions);
        if (local_74 < *(int *)(local_80 + 0x18)) {
          do {
            plVar4 = *(longlong **)(*(longlong *)local_90._0_8_ + (longlong)local_74 * 0x10);
            (**(code **)(*plVar4 + 0x28))(plVar4,&local_res10,param_4);
            piVar12 = TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::
                      FindOrAddImpl<FName_const_&>(param_2,&local_res10);
            *piVar12 = *piVar12 + 1;
            local_78 = local_78 & ~local_84;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_90 + 8));
          } while (local_74 < *(int *)(local_80 + 0x18));
        }
        *param_3 = *param_3 +
                   (*(int *)&(pFVar3->AllEnabledTickFunctions).Elements.field_0x8 -
                   *(int *)&(pFVar3->AllEnabledTickFunctions).Elements.field_0x34);
        pFVar5 = (pFVar3->AllCoolingDownTickFunctions).Head;
joined_r0x0001488c2df7:
        do {
          if (pFVar5 == (FTickFunction *)0x0) break;
          if (param_5) {
            uVar14 = SUB84(dVar1,0);
            uVar15 = (int)((ulonglong)dVar1 >> 0x20);
            if (pFVar5->bTickEvenWhenPaused != 0) {
              uVar14 = SUB84(dVar2,0);
              uVar15 = (int)((ulonglong)dVar2 >> 0x20);
            }
            pFVar6 = (pFVar5->InternalData).Ptr;
            fVar16 = fVar8;
            if (pFVar6 != (FInternalData *)0x0) {
              fVar16 = pFVar6->LastTickGameTimeSeconds;
            }
            if (fVar16 != (float)(double)CONCAT44(uVar15,uVar14)) {
              pFVar5 = pFVar6->Next;
              goto joined_r0x0001488c2df7;
            }
          }
          (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,&local_98,param_4);
          piVar12 = TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::
                    FindOrAddImpl<FName_const_&>(param_2,&local_98);
          *piVar12 = *piVar12 + 1;
          pFVar5 = ((pFVar5->InternalData).Ptr)->Next;
          *param_3 = *param_3 + 1;
        } while( true );
      }
      iVar13 = iVar13 + 1;
      iVar10 = UWorld::GetNumLevels(param_1);
    } while (iVar13 < iVar10);
  }
  return;
}

// RunPauseFrame @ 1488dc310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::RunPauseFrame
          (FTickTaskManager *this,UWorld *param_1,float param_2,ELevelTick param_3,
          TArray<ULevel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  (this->Context).World = param_1;
  (this->Context).DeltaSeconds = param_2;
  this->bTickNewlySpawned = true;
  (this->Context).TickGroup.Value = '\0';
  (this->Context).TickType.Value = (uchar)param_3;
  (this->Context).Thread = GameThread;
  FillLevelList(this,param_4);
  uVar5 = 0;
  if (0 < (this->LevelList).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LevelList).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FTickTaskLevel::RunPauseFrame
                (*(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + lVar6),
                 &this->Context);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->LevelList).ArrayNum);
  }
  (this->Context).World = (UWorld *)0x0;
  piVar1 = &(this->LevelList).ArrayMax;
  this->bTickNewlySpawned = false;
  (this->LevelList).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LevelList).AllocatorInstance,0,piVar1);
  }
  return;
}

// RunTickGroup @ 1488dc430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::RunTickGroup(FTickTaskManager *this,ETickingGroup param_1,bool param_2)

{
  TEnumAsByte<ETickingGroup> *pTVar1;
  int *piVar2;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType *pFVar3;
  longlong lVar4;
  FTickFunction *this_01;
  FInternalData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FTaskSyncManager *this_02;
  FName *pFVar17;
  TStatIdData *pTVar18;
  FTickTaskSequencer *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_TG_NewlySpawned> FVar20;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  longlong lVar21;
  FNameEntryId FVar22;
  uint uVar23;
  FName FVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FName FVar27;
  int iVar28;
  int local_res20;
  uint local_148;
  int local_144;
  FColor_u_0 local_140;
  atomic<unsigned_int> local_13c;
  FColor_u_0 local_138 [2];
  FTickFunction *local_130;
  float fStack_128;
  uint uStack_124;
  TArray<FTickFunction_*,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  longlong local_108;
  FName local_100;
  FName local_f8;
  uint local_f0;
  uint uStack_ec;
  FTaskSyncManager *local_e8;
  FName local_e0;
  FName local_d0;
  FTickTaskSequencer *local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  undefined1 local_a0 [12];
  uint local_94;
  longlong local_90;
  uint local_88;
  int local_84;
  FName local_70;
  FName local_68;
  FName local_60 [4];
  
  if (((this->Context).TickGroup.Value != param_1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.TickGroup == Group",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x845,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->bTickNewlySpawned == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bTickNewlySpawned",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x846,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  this_02 = UE::Tick::FTaskSyncManager::Get();
  local_e8 = this_02;
  if (this_02 != (FTaskSyncManager *)0x0) {
    UE::Tick::FTaskSyncManager::StartTickGroup(this_02,(this->Context).World,param_1,&local_120);
  }
  FTickTaskSequencer::ReleaseTickGroup(this->TickTaskSequencer,param_1,param_2,&local_120);
  pTVar1 = &(this->Context).TickGroup;
  pTVar1->Value = pTVar1->Value + '\x01';
  if (!param_2) goto LAB_1488dcce7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'::
       __l22::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'
                           ::__l22::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'::
     __l22::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_TickTask_RunTickGroup_BlockTillComplete = (TStatIdData *)0x0;
    pFVar17 = ::FName::FName(&local_70,"STAT_TickTask_RunTickGroup_BlockTillComplete");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'
                ::__l22::StatPtr_STAT_TickTask_RunTickGroup_BlockTillComplete,*pFVar17,
               L"STAT_TickTask_RunTickGroup_BlockTillComplete","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'
                         ::__l22::_thread_safe_static_guard_0__);
  }
  pTVar18 = _StatPtr_STAT_TickTask_RunTickGroup_BlockTillComplete;
  if (_StatPtr_STAT_TickTask_RunTickGroup_BlockTillComplete == (TStatIdData *)0x0) {
    pFVar17 = ::FName::FName(&local_68,"STAT_TickTask_RunTickGroup_BlockTillComplete");
    pTVar18 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FTickTaskManager::RunTickGroup(ETickingGroup,bool)___ptr64'
                          ::__l22::StatPtr_STAT_TickTask_RunTickGroup_BlockTillComplete,*pFVar17,
                         L"STAT_TickTask_RunTickGroup_BlockTillComplete","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar18->Name;
  bVar13 = false;
  bVar10 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar12 = false;
  bVar14 = false;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_1488dc68d:
    bVar10 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    local_100 = local_e0;
    FVar27 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140._s_0,(pTVar18->StatDescriptionAnsi).Ptr);
      bVar13 = false;
      bVar10 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_110.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(pTVar18->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x854);
        bVar13 = true;
        bVar10 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488dc68d;
    local_100 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar12 = true;
  }
  local_144 = 0;
  do {
    local_res20 = 0;
    local_148 = 0;
    if ((this->LevelList).ArrayNum < 1) goto LAB_1488dcc98;
    local_108 = 0;
    do {
      lVar21 = local_108;
      uVar15 = 0;
      if ((int)local_148 < (this->LevelList).ArrayNum) {
        uVar15 = ~local_148 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar28 = 0;
      lVar4 = *(longlong *)((this->LevelList).AllocatorInstance.Data + lVar21);
      this_00 = (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *)
                (lVar4 + 0xc0);
      *(uchar *)(lVar4 + 0x121) = (this->Context).TickGroup.Value;
      if (*(int *)(lVar4 + 200) != *(int *)(lVar4 + 0xf4)) {
        local_13c = GFrameCounter._0_4_;
        pFVar19 = FTickTaskSequencer::Get();
        local_c0 = pFVar19;
        TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator((TIterator *)local_a0,this_00);
        aVar11 = local_13c;
        if (local_84 < *(int *)(local_90 + 0x18)) {
          do {
            this_01 = *(FTickFunction **)(*(longlong *)local_a0._0_8_ + (longlong)local_84 * 0x10);
            if (((this_01->InternalData).Ptr)->TickVisitedGFrameCounter != aVar11) {
              FTickFunction::QueueTickFunction(this_01,pFVar19,(FTickContext *)(lVar4 + 0x110));
            }
            iVar28 = iVar28 + 1;
            if (0.0 < this_01->TickInterval) {
              if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
                uVar15 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)this_01 >> 4)) * -0x7a143595;
                uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                lVar21 = lVar4 + 0x40;
                if (*(longlong *)(lVar4 + 0x48) != 0) {
                  lVar21 = *(longlong *)(lVar4 + 0x48);
                }
                iVar16 = *(int *)(lVar21 + ((longlong)*(int *)(lVar4 + 0x50) - 1U &
                                           (longlong)(int)(uVar15 >> 0x10 ^ uVar15)) * 4);
                if (iVar16 != -1) {
                  do {
                    if (*(FTickFunction **)(*(longlong *)(lVar4 + 8) + (longlong)iVar16 * 0x10) ==
                        this_01) {
                      TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                      ::RemoveByIndex((TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                                       *)(lVar4 + 8),iVar16);
                      break;
                    }
                    iVar16 = *(int *)(*(longlong *)(lVar4 + 8) + 8 + (longlong)iVar16 * 0x10);
                  } while (iVar16 != -1);
                }
              }
              pFVar5 = (this_01->InternalData).Ptr;
              pFVar3 = (ForAnyElementType *)(lVar4 + 0xb0);
              fStack_128 = this_01->TickInterval;
              pFVar5->bWasInterval = true;
              uStack_124 = uStack_124 & 0xffffff00;
              local_130 = this_01;
              if (((pFVar3->Data <= (FScriptContainerElement *)&local_130) &&
                  ((FScriptContainerElement *)&local_130 <
                   pFVar3->Data + (longlong)*(int *)(lVar4 + 0xbc) * 0x10)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar16 = *(int *)(lVar4 + 0xb8);
              if (iVar16 == *(int *)(lVar4 + 0xbc)) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,pFVar3,(int *)(lVar4 + 0xbc));
              }
              *(int *)(lVar4 + 0xb8) = iVar16 + 1;
              pFVar6 = pFVar3->Data;
              *(FTickFunction **)(pFVar6 + (longlong)iVar16 * 0x10) = local_130;
              *(ulonglong *)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = CONCAT44(uStack_124,fStack_128)
              ;
              pFVar19 = local_c0;
            }
            local_88 = local_88 & ~local_94;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a0 + 8));
            lVar21 = local_108;
          } while (local_84 < *(int *)(local_90 + 0x18));
        }
        bVar14 = 1 < *(int *)(lVar4 + 0x108);
        if (!bVar14) {
          TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
          UnhashElements(this_00);
        }
        *(undefined4 *)(lVar4 + 200) = 0;
        if (*(int *)(lVar4 + 0xcc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)(lVar4 + 0xcc));
        }
        *(undefined4 *)(lVar4 + 0xf0) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0xf4) = 0;
        *(undefined4 *)(lVar4 + 0xe8) = 0;
        if ((*(int *)(lVar4 + 0xec) < 0) || (0x80 < *(int *)(lVar4 + 0xec))) {
          *(undefined4 *)(lVar4 + 0xec) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0xd0),0);
        }
        if (bVar14) {
          *(undefined4 *)(lVar4 + 0x108) = 1;
          TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Rehash
                    (this_00);
        }
      }
      FVar27 = local_100;
      uVar25 = 0;
      local_res20 = local_res20 + iVar28;
      local_148 = local_148 + 1;
      local_108 = lVar21 + 8;
    } while ((int)local_148 < (this->LevelList).ArrayNum);
    if ((local_res20 == 0) || ((this->Context).TickGroup.Value != '\a')) goto LAB_1488dcc98;
    FVar20 = StatPtr_STAT_TG_NewlySpawned;
    if (StatPtr_STAT_TG_NewlySpawned == (FThreadSafeStaticStat<FStat_STAT_TG_NewlySpawned>)0x0) {
      pFVar17 = ::FName::FName(local_60,"STAT_TG_NewlySpawned");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_TG_NewlySpawned>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_NewlySpawned,*pFVar17,
                          L"TG_NewlySpawned","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar20;
    bVar14 = false;
    bVar9 = false;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    FVar22 = FVar24.ComparisonIndex.Value;
    uVar15 = FVar24.Number;
    if ((FVar22.Value == 0) && (uVar15 == 0)) {
LAB_1488dcb23:
      bVar8 = false;
      FVar24 = local_d0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_138[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
        bVar14 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f8.ComparisonIndex.Value = FVar22.Value;
          local_f8.Number = uVar15;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                     ,0x860);
          bVar14 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1488dcb23;
      local_f0 = FVar22.Value;
      uStack_ec = uVar15;
      local_d0 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar8 = true;
    }
    FTickTaskSequencer::ReleaseTickGroup(this->TickTaskSequencer,TG_NewlySpawned,true,&local_120);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_03 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_03 == (FThreadStats *)0x0) {
        this_04 = FThreadStatsPool::Get();
        this_03 = FThreadStatsPool::GetFromPool(this_04);
      }
      if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
        local_b0.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_b0.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b8);
        local_b0.StatData.Pad[4] = '\0';
        local_b0.StatData.Pad[5] = '\0';
        local_b0.StatData.Pad[6] = '\0';
        local_b0.StatData.Pad[7] = '\0';
        local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_03,&local_b0);
        piVar2 = &this_03->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(this_03,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_03,false,false);
        }
      }
    }
    local_144 = local_144 + 1;
  } while (local_144 < 0x65);
  uVar26 = uVar25;
  if (0 < (this->LevelList).ArrayNum) {
    do {
      uVar23 = (uint)uVar25;
      uVar15 = 0;
      if ((int)uVar23 < (this->LevelList).ArrayNum) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FTickTaskLevel::LogAndDiscardRunawayNewlySpawned
                (*(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + uVar26),
                 (uint)(this->Context).TickGroup.Value);
      uVar25 = (ulonglong)(uVar23 + 1);
      uVar26 = uVar26 + 8;
    } while ((int)(uVar23 + 1) < (this->LevelList).ArrayNum);
  }
LAB_1488dcc98:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_02 = local_e8;
  if (bVar12) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    this_02 = local_e8;
  }
LAB_1488dcce7:
  if (this_02 != (FTaskSyncManager *)0x0) {
    UE::Tick::FTaskSyncManager::EndTickGroup(this_02,(this->Context).World,param_1);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return;
}

// StartFrame @ 1488e07e0

/* WARNING: Removing unreachable block (ram,0x0001488e1628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskManager::StartFrame
          (FTickTaskManager *this,UWorld *param_1,float param_2,ELevelTick param_3,
          TArray<ULevel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  FTickTaskSequencer *pFVar2;
  FTickTaskLevel *this_00;
  FTickFunction *pFVar3;
  FInternalData *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  TConsoleVariableData<float> *pTVar9;
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  <lambda_1> <Var12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_QueueTicks> FVar16;
  TStatIdData *pTVar17;
  FTaskSyncManager *this_01;
  FThreadSafeStaticStat<FStat_STAT_TicksQueued> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  int *piVar21;
  FColor_u_0 FVar22;
  uint uVar23;
  uint uVar24;
  FName FVar25;
  int *piVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  byte bVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  uchar auVar33 [8];
  int *piVar34;
  int iVar35;
  int *piVar36;
  float fVar37;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  <lambda_1> local_res18;
  undefined1 local_res20 [8];
  longlong local_128;
  FName local_120;
  FColor_u_0 local_118;
  uint local_114;
  FName local_110;
  FName local_108;
  FName local_f8;
  FName local_e8;
  FTickTaskManager *local_e0;
  FName local_d8;
  FStatMessage local_d0;
  FStatMessage local_c0;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FTickTaskManager **local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70 [6];
  
  FVar16 = StatPtr_STAT_QueueTicks;
  if (StatPtr_STAT_QueueTicks == (FThreadSafeStaticStat<FStat_STAT_QueueTicks>)0x0) {
    pFVar15 = ::FName::FName(&local_90,"STAT_QueueTicks");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_QueueTicks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_QueueTicks,*pFVar15,
                        L"Queue Ticks","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_120 = *(FName *)FVar16;
  bVar29 = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  local_res18 = (<lambda_1>)0x0;
  FVar22.Bits = (uint)local_120.ComparisonIndex.Value;
  uVar23 = local_120.Number;
  if ((FVar22.Bits == 0) && (uVar23 == 0)) {
LAB_1488e0959:
    local_120 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar29 = 1;
      local_res18 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_118.Bits = FVar22.Bits;
        local_114 = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x7d2);
        bVar29 = 3;
        local_res18 = (<lambda_1>)0x3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488e0959;
    local_res10.Bits = FVar22.Bits;
    uStackX_14 = uVar23;
    FThreadStats::AddMessage(local_120,CycleScopeStart);
    local_res18 = (<lambda_1>)(bVar29 | 4);
  }
  if (`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat2003 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("QueueTicks");
    `public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat2003 = true;
  }
  FCsvProfiler::BeginExclusiveStat("QueueTicks","CSV_QueueTicks");
  pTVar9 = CVarStallStartFrame.Ref;
  bVar13 = IsInParallelGameThread();
  if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0.0 < pTVar9->ShadowedValue[0]) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
         ::__l8::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                             ::__l8::_thread_safe_static_guard_0__),
       `public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
       ::__l8::_thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_Tick_Intentional_Stall = (TStatIdData *)0x0;
      pFVar15 = ::FName::FName(&local_88,"STAT_Tick_Intentional_Stall");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l8::StatPtr_STAT_Tick_Intentional_Stall,*pFVar15,
                 L"STAT_Tick_Intentional_Stall","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                           ::__l8::_thread_safe_static_guard_0__);
    }
    pTVar17 = _StatPtr_STAT_Tick_Intentional_Stall;
    if (_StatPtr_STAT_Tick_Intentional_Stall == (TStatIdData *)0x0) {
      pFVar15 = ::FName::FName(&local_80,"STAT_Tick_Intentional_Stall");
      pTVar17 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                            ::__l8::StatPtr_STAT_Tick_Intentional_Stall,*pFVar15,
                           L"STAT_Tick_Intentional_Stall","STATGROUP_Quick","STATCAT_Advanced",
                           L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar25 = *(FName *)&pTVar17->Name;
    bVar13 = false;
    bVar7 = false;
    local_f8.ComparisonIndex.Value = 0;
    local_f8.Number = 0;
    if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1488e0b2a:
      bVar6 = false;
      FVar25 = local_f8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
        bVar13 = false;
        bVar7 = true;
        if (-1 < CpuChannel->Enabled) {
          local_110.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
          local_110.Number = FVar25.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_110,(pTVar17->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                     ,0x7d8);
          bVar13 = true;
          bVar7 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1488e0b2a;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar6 = true;
    }
    pTVar9 = CVarStallStartFrame.Ref;
    bVar14 = IsInParallelGameThread();
    if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FWindowsPlatformProcess::Sleep(pTVar9->ShadowedValue[0] * __real_3a83126f);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FThreadStats::AddMessage(FVar25,CycleScopeEnd);
    }
  }
  uVar23 = 0;
  this_01 = UE::Tick::FTaskSyncManager::Get();
  if (this_01 != (FTaskSyncManager *)0x0) {
    UE::Tick::FTaskSyncManager::StartFrame(this_01,param_1,param_2,param_3);
  }
  pFVar2 = this->TickTaskSequencer;
  (this->Context).DeltaSeconds = param_2;
  (this->Context).TickGroup.Value = '\0';
  (this->Context).TickType.Value = (uchar)param_3;
  (this->Context).Thread = GameThread;
  (this->Context).World = param_1;
  this->bTickNewlySpawned = true;
  FTickTaskSequencer::StartFrame(pFVar2);
  FillLevelList(this,param_4);
  bVar13 = FTickTaskSequencer::SingleThreadedMode();
  pTVar11 = CVarAllowConcurrentQueue.Ref;
  if (!bVar13) {
    bVar13 = IsInParallelGameThread();
    if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar10 = CVarAllowBatchedTicks.Ref;
    if (pTVar11->ShadowedValue[0] != 0) {
      bVar13 = IsInParallelGameThread();
      if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pTVar10->ShadowedValue[0] != 0) {
        local_res20[0] = 0;
        `FTickTaskManager::StartFrame'::__l34::<lambda_1>::operator()(local_res20);
      }
      if (0 < (this->LevelList).ArrayNum) {
        lVar31 = 0;
        do {
          uVar24 = 0;
          if ((int)uVar23 < (this->LevelList).ArrayNum) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FTickTaskLevel::StartFrameParallel
                    (*(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + lVar31),
                     &this->Context,&this->AllTickFunctions);
          uVar23 = uVar23 + 1;
          lVar31 = lVar31 + 8;
        } while ((int)uVar23 < (this->LevelList).ArrayNum);
      }
      auVar33 = (uchar  [8])(longlong)(this->AllTickFunctions).ArrayNum;
      if ((auVar33 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar18 = StatPtr_STAT_TicksQueued;
        if (StatPtr_STAT_TicksQueued == (FThreadSafeStaticStat<FStat_STAT_TicksQueued>)0x0) {
          pFVar15 = ::FName::FName(&local_78,"STAT_TicksQueued");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_TicksQueued>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TicksQueued,*pFVar15,
                              L"Ticks Queued","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                              ST_int64,false,false,MCR_Invalid);
        }
        FVar25 = *(FName *)FVar18;
        if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_d0.NameAndInfo.Number = FVar25.Number & 0xffffafff | 0xa000;
          local_e8 = FVar25;
          local_d0.StatData.Pad = auVar33;
          local_d0.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_d0);
          FStatsTrace::Add(&local_e8,(long64)auVar33);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
          ::__l44::__CsvProfilerStat2062 == false) {
        FCsvProfilerTrace::OutputInlineStat("TicksQueued",_GCsvCategory_Basic.Index);
        `public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
        ::__l44::__CsvProfilerStat2062 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("TicksQueued",_GCsvCategory_Basic.Index,(this->AllTickFunctions).ArrayNum,
                 Accumulate);
      pFVar2 = this->TickTaskSequencer;
      uVar23 = (this->AllTickFunctions).ArrayNum;
      local_128 = 0;
      piVar21 = (int *)&pFVar2->HiPriTickTasks[0][0].field_0xc;
      piVar36 = (int *)&pFVar2->ManualDispatchTicks[0].field_0xc;
      piVar34 = (int *)&pFVar2->TickCompletionEvents[0].field_0x2c;
      do {
        lVar31 = 0;
        piVar26 = piVar21;
        do {
          if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
          }
          if (*piVar26 < (int)uVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar23,(ForAnyElementType *)(piVar26 + -3),piVar26[-1],piVar26);
          }
          if (piVar26[0x100] < (int)uVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar23,(ForAnyElementType *)(piVar26 + 0xfd),piVar26[0xff],
                       piVar26 + 0x100);
          }
          lVar31 = lVar31 + 1;
          piVar26 = piVar26 + 4;
        } while (lVar31 < 8);
        if (*piVar34 < (int)uVar23) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                    (8,8,uVar23,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(piVar34 + -0xb),
                     piVar34[-1],piVar34);
        }
        if (*piVar36 < (int)uVar23) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar23,(ForAnyElementType *)(piVar36 + -3),piVar36[-1],piVar36);
        }
        piVar34 = piVar34 + 0xc;
        local_128 = local_128 + 1;
        piVar21 = piVar21 + 0x20;
        piVar36 = piVar36 + 4;
      } while (local_128 < 8);
      uVar28 = 0;
      uVar27 = uVar28;
      uVar32 = uVar28;
      if (0 < (this->LevelList).ArrayNum) {
        do {
          uVar24 = (uint)uVar27;
          uVar23 = 0;
          if ((int)uVar24 < (this->LevelList).ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar31 = *(longlong *)((this->LevelList).AllocatorInstance.Data + uVar32);
          uVar23 = (this->AllTickFunctions).ArrayNum + *(int *)(lVar31 + 0xb8);
          if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
          }
          if (*(int *)(lVar31 + 0xbc) < (int)uVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar23,(ForAnyElementType *)(lVar31 + 0xb0),*(int *)(lVar31 + 0xb8),
                       (int *)(lVar31 + 0xbc));
          }
          uVar27 = (ulonglong)(uVar24 + 1);
          uVar32 = uVar32 + 8;
        } while ((int)(uVar24 + 1) < (this->LevelList).ArrayNum);
      }
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTickTaskManager::StartFrame'::__l34::<lambda_2>,void,int>::
                 Call;
      local_98 = &local_e0;
      local_b0.DataPtr = (void **)0x0;
      local_b0.ArrayNum = 0;
      local_e0 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(this->AllTickFunctions).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_a0,local_res18,None,&local_b0);
      (this->AllTickFunctions).ArrayNum = 0;
      if ((this->AllTickFunctions).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->AllTickFunctions).AllocatorInstance,0,
                   &(this->AllTickFunctions).ArrayMax);
      }
      uVar27 = uVar28;
      if (0 < (this->LevelList).ArrayNum) {
        do {
          uVar24 = (uint)uVar28;
          uVar23 = 0;
          if ((int)uVar24 < (this->LevelList).ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FTickTaskLevel::DoDeferredRemoves
                    (*(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + uVar27));
          uVar28 = (ulonglong)(uVar24 + 1);
          uVar27 = uVar27 + 8;
        } while ((int)(uVar24 + 1) < (this->LevelList).ArrayNum);
      }
      goto LAB_1488e1526;
    }
  }
  iVar35 = 0;
  uVar23 = 0;
  if (0 < (this->LevelList).ArrayNum) {
    lVar31 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar23 < (this->LevelList).ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + lVar31);
      if ((*(int *)&(this_00->NewlySpawnedTickFunctions).Elements.field_0x8 !=
           *(int *)&(this_00->NewlySpawnedTickFunctions).Elements.field_0x34) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!NewlySpawnedTickFunctions.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                              ,0x4db,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this_00->Context).TickGroup.Value = '\0';
      iVar30 = 0;
      (this_00->Context).DeltaSeconds = (this->Context).DeltaSeconds;
      (this_00->Context).TickType.Value = (this->Context).TickType.Value;
      (this_00->Context).Thread = GameThread;
      (this_00->Context).World = (this->Context).World;
      this_00->bTickNewlySpawned = true;
      FTickTaskLevel::ScheduleTickFunctionCooldowns(this_00);
      pFVar3 = (this_00->AllCoolingDownTickFunctions).Head;
      fVar8 = 0.0;
      while (pFVar3 != (FTickFunction *)0x0) {
        pFVar4 = (pFVar3->InternalData).Ptr;
        fVar1 = (this_00->Context).DeltaSeconds;
        fVar37 = pFVar4->RelativeTickCooldown + fVar8;
        if (fVar1 <= fVar37) {
          pFVar4->RelativeTickCooldown = pFVar4->RelativeTickCooldown - (fVar1 - fVar8);
          break;
        }
        pFVar3->field_0xb = pFVar3->field_0xb & 0xf7;
        iVar30 = iVar30 + 1;
        pFVar3->field_0xb = pFVar3->field_0xb | 4;
        fVar8 = fVar37;
        pFVar3 = pFVar4->Next;
      }
      uVar23 = uVar23 + 1;
      lVar31 = lVar31 + 8;
      iVar35 = iVar35 + (*(int *)&(this_00->AllEnabledTickFunctions).Elements.field_0x8 -
                        *(int *)&(this_00->AllEnabledTickFunctions).Elements.field_0x34) + iVar30;
    } while ((int)uVar23 < (this->LevelList).ArrayNum);
    if ((iVar35 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar18 = StatPtr_STAT_TicksQueued;
      if (StatPtr_STAT_TicksQueued == (FThreadSafeStaticStat<FStat_STAT_TicksQueued>)0x0) {
        pFVar15 = ::FName::FName(local_70,"STAT_TicksQueued");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_TicksQueued>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TicksQueued,*pFVar15,
                            L"Ticks Queued","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                            ST_int64,false,false,MCR_Invalid);
      }
      FVar25 = *(FName *)FVar18;
      if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        local_c0.NameAndInfo.Number = FVar25.Number & 0xffffafff | 0xa000;
        local_d8 = FVar25;
        local_c0.StatData.Pad = (uchar  [8])(longlong)iVar35;
        local_c0.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar19,&local_c0);
        FStatsTrace::Add(&local_d8,(longlong)iVar35);
        if (pFVar19->ScopeCount == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  if (`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
      ::__l27::__CsvProfilerStat2045 == false) {
    FCsvProfilerTrace::OutputInlineStat("TicksQueued",_GCsvCategory_Basic.Index);
    `public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
    ::__l27::__CsvProfilerStat2045 = true;
  }
  FCsvProfiler::RecordCustomStat("TicksQueued",_GCsvCategory_Basic.Index,iVar35,Accumulate);
  if ((this->TickTaskSequencer->TickBatchesNum != 0) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7009048750584758988>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x2cc,"TickBatchesNum == 0"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar23 = 0;
  if (0 < (this->LevelList).ArrayNum) {
    lVar31 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar23 < (this->LevelList).ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FTickTaskLevel::QueueAllTicks
                (*(FTickTaskLevel **)((this->LevelList).AllocatorInstance.Data + lVar31));
      uVar23 = uVar23 + 1;
      lVar31 = lVar31 + 8;
    } while ((int)uVar23 < (this->LevelList).ArrayNum);
  }
  if (this->TickTaskSequencer->bAllowBatchedTicksForFrame != false) {
    this->TickTaskSequencer->bAllowBatchedTicksForFrame = false;
  }
LAB_1488e1526:
  FCsvProfiler::EndExclusiveStat("QueueTicks");
  <Var12 = local_res18;
  if (((byte)local_res18 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)<Var12 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((byte)<Var12 & 4) != 0) {
    FThreadStats::AddMessage(local_120,CycleScopeEnd);
  }
  return;
}

// operator() @ 150533480

bool __thiscall `FTickTaskManager::StartFrame'::__l34::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7009048750584760327>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7009048750584760327>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FTickTaskManager::StartFrame(UWorld*___ptr64,float,ELevelTick,TArray<ULevel*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`34'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

