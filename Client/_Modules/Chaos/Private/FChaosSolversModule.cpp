// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 29

// FChaosSolversModule @ 1436f5a10

FChaosSolversModule * __thiscall FChaosSolversModule::FChaosSolversModule(FChaosSolversModule *this)

{
  this->SolverActorClassProvider = (IChaosSolverActorClassProvider *)0x0;
  this->SettingsProvider = (IChaosSettingsProvider *)0x0;
  this->bPersistentTaskSpawned = false;
  this->PhysicsAsyncTask = (FAsyncTask<Chaos::FPersistentPhysicsTask> *)0x0;
  this->PhysicsInnerTask = (FPersistentPhysicsTask *)0x0;
  (this->PreExitHandle).ID = 0;
  (this->AllSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllSolvers).ArrayNum = 0;
  (this->AllSolvers).ArrayMax = 0;
  *(undefined8 *)&this->SolverMap = 0;
  *(undefined8 *)&(this->SolverMap).field_0x8 = 0;
  *(undefined8 *)&(this->SolverMap).field_0x20 = 0;
  *(undefined4 *)&(this->SolverMap).field_0x28 = 0;
  *(undefined4 *)&(this->SolverMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SolverMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SolverMap).field_0x34 = 0;
  *(undefined8 *)&(this->SolverMap).field_0x40 = 0;
  *(undefined4 *)&(this->SolverMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SolverLock,4000);
  this->SolverActorClass = (UClass *)0x0;
  this->SolverActorRequiredBaseClass = (UClass *)0x0;
  (this->GlobalCommandTaskEventRef).Reference = (FBaseGraphTask *)0x0;
  this->AverageUpdateTime = 0.0;
  this->TotalAverageUpdateTime = 0.0;
  this->Fps = 0.0;
  this->EffectiveFps = 0.0;
  this->bModuleInitialized = false;
  (this->OnCreateMaterialHandle).ID = 0;
  (this->OnDestroyMaterialHandle).ID = 0;
  (this->OnUpdateMaterialHandle).ID = 0;
  (this->OnCreateMaterialMaskHandle).ID = 0;
  (this->OnDestroyMaterialMaskHandle).ID = 0;
  (this->OnUpdateMaterialMaskHandle).ID = 0;
  return this;
}

// CreateSolver @ 1436fd880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPBDRigidsSolver * __thiscall
FChaosSolversModule::CreateSolver
          (FChaosSolversModule *this,UObject *param_1,double param_2,EChaosThreadingMode param_3,
          FName *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  PSRWLOCK SRWLock;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FChaosSolversModule *pFVar6;
  FPBDRigidsSolver *this_00;
  FPBDRigidsSolver *pFVar7;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FPhysicalMaterialManager *this_01;
  LPVOID pvVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar12;
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *pTVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FPBDRigidsSolver *pFVar17;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  undefined1 local_127 [3];
  undefined4 local_124;
  FPBDRigidsSolver *local_120;
  FPBDRigidsSolver *local_118;
  UObject *local_110;
  FName local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  FMemScope local_e8;
  FString local_e0;
  code *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  LARGE_INTEGER local_b0;
  FString local_a8;
  LARGE_INTEGER *local_98;
  longlong local_90;
  LARGE_INTEGER *local_88;
  longlong local_80;
  LARGE_INTEGER *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar17 = (FPBDRigidsSolver *)0x0;
  local_124 = 0;
  local_110 = param_1;
  FLLMScope::FLLMScope((FLLMScope *)&local_124,Chaos,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,Chaos,true);
  pFVar6 = GetModule();
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar6->SolverLock);
  this_00 = ::operator_new(0x17e8);
  pFVar7 = pFVar17;
  if (this_00 != (FPBDRigidsSolver *)0x0) {
    pFVar7 = Chaos::FPBDRigidsSolver::FPBDRigidsSolver
                       (this_00,(param_3 != SingleThread) + Single,local_110,param_2);
  }
  pFVar2 = (this->AllSolvers).AllocatorInstance.Data;
  local_120 = pFVar7;
  if (((pFVar2 <= (FScriptContainerElement *)&local_120) &&
      ((FScriptContainerElement *)&local_120 < pFVar2 + (longlong)(this->AllSolvers).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPBDRigidsSolver *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->AllSolvers).ArrayNum;
  piVar1 = &(this->AllSolvers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AllSolvers).AllocatorInstance,piVar1);
  }
  (this->AllSolvers).ArrayNum = iVar5 + 1;
  *(FPBDRigidsSolver **)((this->AllSolvers).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_120;
  uVar14 = ((uint)((ulonglong)local_110 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_110 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  pTVar8 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<UObject_const_*_const_&>
                     ((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->SolverMap,uVar14 >> 0x10 ^ uVar14,&local_110);
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  local_118 = pFVar7;
  if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)pTVar8->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPBDRigidsSolver *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = pTVar8->ArrayNum;
  if (iVar5 == pTVar8->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar5 + 1;
  *(FPBDRigidsSolver **)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_118;
  if (*param_4 != (FName)0x0) {
    ::FName::ToString(param_4,&local_a8);
    pFVar17 = (FPBDRigidsSolver *)&DAT_00000001;
  }
  ::FString::PrintfImpl(&local_e0,L"%s (%d)");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar15.Data = local_e0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_108,(wchar_t *)FVar15.Data);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((pFVar17 != (FPBDRigidsSolver *)0x0) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  Chaos::FPhysicsSolverBase::SetDebugName((FPhysicsSolverBase *)pFVar7,&local_108);
  this_01 = Chaos::FPhysicalMaterialManager::Get();
  SRWLock = (PSRWLOCK)pFVar7->_padding_;
  if (`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 == false) {
    FCsvProfilerTrace::OutputInlineStat("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
    `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat912 = true;
  }
  uVar14 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,"CSV_AcquireSceneWriteLock")
  ;
  QueryPerformanceCounter(&local_b0);
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireBeginFields>((TLogScope<0> *)&local_98);
    QueryPerformanceCounter(&local_100);
    *local_98 = local_100;
    *(undefined1 *)(local_98 + 1) = 1;
    *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
  }
  pvVar9 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  uVar16 = (int)((ulonglong)pvVar9 >> 0x20) + 1;
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)uVar16 << 0x20 | (ulonglong)pvVar9 & 0xffffffff));
  if (uVar16 + (int)pvVar9 == 1) {
    AcquireSRWLockExclusive(SRWLock);
  }
  puVar10 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_c8 = &local_128;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar10);
  *(int *)&pFVar11[2].field_0x4 = *(int *)&pFVar11[2].field_0x4 + 1;
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquiredFields>((TLogScope<0> *)&local_88);
    QueryPerformanceCounter(&local_f8);
    *local_88 = local_f8;
    *(undefined8 *)(local_80 + 0x28) = *(undefined8 *)(local_80 + 0x20);
  }
  FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar14);
  pTVar12 = Chaos::FPhysicalMaterialManager::GetPrimaryMaterials_External(this_01);
  Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::CopyFrom
            (&pFVar7->QueryMaterials_External,pTVar12);
  pTVar13 = Chaos::FPhysicalMaterialManager::GetPrimaryMaterialMasks_External(this_01);
  Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::CopyFrom
            (&pFVar7->QueryMaterialMasks_External,pTVar13);
  pTVar12 = Chaos::FPhysicalMaterialManager::GetPrimaryMaterials_External(this_01);
  Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::CopyFrom(&pFVar7->SimMaterials,pTVar12);
  pTVar13 = Chaos::FPhysicalMaterialManager::GetPrimaryMaterialMasks_External(this_01);
  Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::CopyFrom
            (&pFVar7->SimMaterialMasks,pTVar13);
  pvVar9 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  uVar14 = (int)((ulonglong)pvVar9 >> 0x20) - 1;
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)uVar14 << 0x20 | (ulonglong)pvVar9 & 0xffffffff));
  if (uVar14 + (int)pvVar9 == 0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  puVar10 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_b8 = local_127;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar10);
  if ((*(int *)&pFVar11[2].field_0x4 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameThreadContext > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,200,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPBDRigidsSolver *)(*pcVar3)();
    return pFVar7;
  }
  *(int *)&pFVar11[2].field_0x4 = *(int *)&pFVar11[2].field_0x4 + -1;
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireEndFields>((TLogScope<0> *)&local_78);
    QueryPerformanceCounter(&local_f0);
    *local_78 = local_f0;
    *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
  }
  pFVar6 = GetModule();
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar6->SolverLock);
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_124);
  return pFVar7;
}

// DestroySolver @ 1436fe2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosSolversModule::DestroySolver(FChaosSolversModule *this,FPhysicsSolverBase *param_1)

{
  int iVar1;
  FChaosSolversModule *pFVar2;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 local_res8 [8];
  FPhysicsSolverBase *local_res10;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res18,Chaos,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Chaos,true);
  pFVar2 = GetModule();
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar2->SolverLock);
  iVar1 = TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::Remove
                    (&this->AllSolvers,&local_res10);
  if (iVar1 < 1) {
    if (local_res10 == (FPhysicsSolverBase *)0x0) goto LAB_1436fe3b6;
    if (2 < (byte)LogChaosGeneral._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosGeneral);
    }
  }
  else {
    this_00 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->SolverMap,local_res10->Owner);
    if (this_00 != (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar1 = TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::Remove
                        (this_00,&local_res10);
      if (iVar1 == 0) {
        `FChaosSolversModule::DestroySolver'::__l8::<lambda_1>::operator()(local_res8);
      }
    }
  }
  if (local_res10 != (FPhysicsSolverBase *)0x0) {
    Chaos::FPhysicsSolverBase::DestroySolver(local_res10);
  }
LAB_1436fe3b6:
  pFVar2 = GetModule();
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar2->SolverLock);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// DumpHierarchyStats @ 1436fe470

void __thiscall FChaosSolversModule::DumpHierarchyStats(FChaosSolversModule *this,int *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *_Str;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  ForAnyElementType local_48;
  int local_40 [2];
  
  pTVar2 = DumpHier_ElementBuckets.Ref;
  lVar9 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  bVar3 = IsInParallelGameThread();
  if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar8 = (longlong)local_58.Data.ArrayNum;
  _Src = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::ParseIntoArray(&local_58,&local_68,L",",true);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar6 = local_68.ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  iVar10 = local_68.ArrayNum + 2;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar10,&local_78,local_70,local_70 + 1);
  memset(local_78.Data + (longlong)iVar4 * 4,0,(longlong)iVar10 << 2);
  uVar7 = 0;
  if ((int)(local_70[0] - 1U) < local_70[0]) {
    uVar7 = ~(local_70[0] - 1U) >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar7 = 1;
  *(undefined4 *)(local_78.Data + (longlong)(local_70[0] + -1) * 4) = 0x7fffffff;
  if (1 < iVar6 + 1) {
    lVar8 = 4;
    do {
      uVar5 = 0;
      if ((int)(uVar7 - 1) < local_68.ArrayNum) {
        uVar5 = -uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(local_68.AllocatorInstance.Data + lVar9 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(local_68.AllocatorInstance.Data + lVar9);
      }
      iVar4 = _wtoi(_Str);
      uVar5 = 0;
      if ((int)uVar7 < local_70[0]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
      *(int *)(local_78.Data + lVar8) = iVar4;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < iVar6 + 1);
  }
  uVar7 = 0;
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_78.Data,local_70[0],local_res8[0],(TLess<void> *)local_res8);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar10,&local_48,local_40,local_40 + 1);
  memset(local_48.Data + (longlong)iVar6 * 4,0,(longlong)iVar10 << 2);
  iVar6 = (this->AllSolvers).ArrayNum;
  if (0 < iVar6) {
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->AllSolvers).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      Chaos::bPendingHierarchyDump = true;
    } while ((int)uVar7 < iVar6);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// GetAllSolvers @ 1436ff520

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FChaosSolversModule::GetAllSolvers(FChaosSolversModule *this)

{
  return &this->AllSolvers;
}

// GetDedicatedTask @ 1436ff810

FPersistentPhysicsTask * __thiscall FChaosSolversModule::GetDedicatedTask(FChaosSolversModule *this)

{
  return this->PhysicsInnerTask;
}

// GetModule @ 1436ffba0

FChaosSolversModule * __cdecl FChaosSolversModule::GetModule(void)

{
  FChaosSolversModule *pFVar1;
  FChaosSolversModule *this;
  
  if (::Instance == (FChaosSolversModule *)0x0) {
    pFVar1 = ::operator_new(0x118);
    this = (FChaosSolversModule *)0x0;
    if (pFVar1 != (FChaosSolversModule *)0x0) {
      pFVar1->SolverActorClassProvider = (IChaosSolverActorClassProvider *)0x0;
      pFVar1->SettingsProvider = (IChaosSettingsProvider *)0x0;
      pFVar1->bPersistentTaskSpawned = false;
      pFVar1->PhysicsAsyncTask = (FAsyncTask<Chaos::FPersistentPhysicsTask> *)0x0;
      pFVar1->PhysicsInnerTask = (FPersistentPhysicsTask *)0x0;
      (pFVar1->PreExitHandle).ID = 0;
      (pFVar1->AllSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->AllSolvers).ArrayNum = 0;
      (pFVar1->AllSolvers).ArrayMax = 0;
      *(undefined8 *)&pFVar1->SolverMap = 0;
      *(undefined8 *)&(pFVar1->SolverMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->SolverMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->SolverMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->SolverMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->SolverMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->SolverMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->SolverMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->SolverMap).field_0x48 = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar1->SolverLock,4000);
      pFVar1->SolverActorClass = (UClass *)0x0;
      pFVar1->SolverActorRequiredBaseClass = (UClass *)0x0;
      (pFVar1->GlobalCommandTaskEventRef).Reference = (FBaseGraphTask *)0x0;
      pFVar1->AverageUpdateTime = 0.0;
      pFVar1->TotalAverageUpdateTime = 0.0;
      pFVar1->Fps = 0.0;
      pFVar1->EffectiveFps = 0.0;
      pFVar1->bModuleInitialized = false;
      (pFVar1->OnCreateMaterialHandle).ID = 0;
      (pFVar1->OnDestroyMaterialHandle).ID = 0;
      (pFVar1->OnUpdateMaterialHandle).ID = 0;
      (pFVar1->OnCreateMaterialMaskHandle).ID = 0;
      (pFVar1->OnDestroyMaterialMaskHandle).ID = 0;
      (pFVar1->OnUpdateMaterialMaskHandle).ID = 0;
      this = pFVar1;
    }
    ::Instance = this;
    Initialize(this);
  }
  return ::Instance;
}

// GetSettingsProvider @ 1436ffee0

IChaosSettingsProvider * __thiscall
FChaosSolversModule::GetSettingsProvider(FChaosSolversModule *this)

{
  FInternalDefaultSettings *pFVar1;
  
  pFVar1 = &Chaos::GDefaultChaosSettings;
  if (this->SettingsProvider != (IChaosSettingsProvider *)0x0) {
    pFVar1 = (FInternalDefaultSettings *)this->SettingsProvider;
  }
  return (IChaosSettingsProvider *)pFVar1;
}

// GetSolverActorClass @ 1436fff00

UClass * __thiscall FChaosSolversModule::GetSolverActorClass(FChaosSolversModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (this->SolverActorClassProvider == (IChaosSolverActorClassProvider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverActorClassProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UClass *)(**(code **)*this->SolverActorClassProvider)();
  return pUVar3;
}

// GetSolvers @ 1436fff50

TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FChaosSolversModule::GetSolvers
          (FChaosSolversModule *this,
          TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar5 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SolverMap,param_1);
  if (pTVar5 != (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((__return_storage_ptr__ ==
         (TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> *)pTVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8,
             (pTVar5->AllocatorInstance).Data,(longlong)iVar1 << 3);
    }
  }
  return __return_storage_ptr__;
}

// GetSolvers @ 143700030

void __thiscall
FChaosSolversModule::GetSolvers
          (FChaosSolversModule *this,UObject *param_1,
          TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pTVar5 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SolverMap,param_1);
  if (pTVar5 != (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_2 == (TArray<Chaos::FPhysicsSolverBase_const_*,TSizedDefaultAllocator<32>_> *)pTVar5)
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      memcpy((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,
             (pTVar5->AllocatorInstance).Data,(longlong)iVar1 << 3);
    }
  }
  return;
}

// GetSolversMutable @ 1437000e0

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FChaosSolversModule::GetSolversMutable
          (FChaosSolversModule *this,
          TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar5 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SolverMap,param_1);
  if (pTVar5 != (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((__return_storage_ptr__ == pTVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8,
             (pTVar5->AllocatorInstance).Data,(longlong)iVar1 << 3);
    }
  }
  return __return_storage_ptr__;
}

// GetSolversMutable @ 1437001c0

void __thiscall
FChaosSolversModule::GetSolversMutable
          (FChaosSolversModule *this,UObject *param_1,
          TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pTVar5 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SolverMap,param_1);
  if (pTVar5 != (TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_2 == pTVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      memcpy((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,
             (pTVar5->AllocatorInstance).Data,(longlong)iVar1 << 3);
    }
  }
  return;
}

// Initialize @ 143700a80

void __thiscall FChaosSolversModule::Initialize(FChaosSolversModule *this)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  FPhysicalMaterialManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  ulong64 uVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (this->bModuleInitialized == false) {
    this_00 = Chaos::FPhysicalMaterialManager::Get();
    uVar7 = 0;
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnCreateMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnMaterialCreated
               ,(FWriteAccessScope *)&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    uVar5 = uVar7;
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_60);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_60);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialCreated,
                 true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_60);
      iVar3 = *(int *)&(this_00->OnMaterialCreated).field_0x10;
      puVar1 = &(this_00->OnMaterialCreated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialCreated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialCreated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialCreated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    (this->OnCreateMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnDestroyMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialDestroyed,(FWriteAccessScope *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_48);
    uVar5 = uVar7;
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialDestroyed
                 ,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = *(int *)&(this_00->OnMaterialDestroyed).field_0x10;
      puVar1 = &(this_00->OnMaterialDestroyed).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialDestroyed).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialDestroyed).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialDestroyed).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (this->OnDestroyMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnUpdateMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_48);
    uVar5 = uVar7;
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = *(int *)&(this_00->OnMaterialUpdated).field_0x10;
      puVar1 = &(this_00->OnMaterialUpdated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialUpdated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialUpdated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialUpdated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (this->OnUpdateMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnCreateMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskCreated,(FWriteAccessScope *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_48);
    uVar5 = uVar7;
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskCreated,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskCreated).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskCreated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskCreated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskCreated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskCreated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (this->OnCreateMaterialMaskHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnDestroyMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskDestroyed,(FWriteAccessScope *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_48);
    uVar5 = uVar7;
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskDestroyed,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskDestroyed).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskDestroyed).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskDestroyed).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskDestroyed).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskDestroyed).field_0x8 + (longlong)iVar3 * 0x10)
      ;
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (this->OnDestroyMaterialMaskHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnUpdateMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskUpdated,(FWriteAccessScope *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_48);
    if (((local_70.DelegateSize == 0) ||
        (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskUpdated,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_78,(FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        uVar7 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskUpdated).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskUpdated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskUpdated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskUpdated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskUpdated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = local_70.DelegateAllocator;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = local_70.DelegateSize;
      local_70.DelegateSize = 0;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (this->OnUpdateMaterialMaskHandle).ID = uVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    this->bModuleInitialized = true;
    return;
  }
  return;
}

// IsPersistentTaskEnabled @ 143701880

bool __thiscall FChaosSolversModule::IsPersistentTaskEnabled(FChaosSolversModule *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarChaosThreadEnabled.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0] == 1;
}

// IsPersistentTaskRunning @ 1437018e0

bool __thiscall FChaosSolversModule::IsPersistentTaskRunning(FChaosSolversModule *this)

{
  return this->bPersistentTaskSpawned;
}

// IsValidSolverActorClass @ 143701970

bool __thiscall
FChaosSolversModule::IsValidSolverActorClass(FChaosSolversModule *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = this->SolverActorRequiredBaseClass;
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return true;
    }
  }
  return false;
}

// MigrateSolver @ 143701c30

void __thiscall
FChaosSolversModule::MigrateSolver
          (FChaosSolversModule *this,FPhysicsSolverBase *param_1,UObject *param_2)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FPhysicsSolverBase *local_res10;
  UObject *local_res18 [2];
  
  pUVar1 = param_1->Owner;
  if (pUVar1 != param_2) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    if (pUVar1 != (UObject *)0x0) {
      pTVar6 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->SolverMap,pUVar1);
      iVar5 = TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::Remove
                        (pTVar6,&local_res10);
      if ((iVar5 == 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5282310325218049822>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                             ,0xe2,"OwnerList->Remove(InSolver)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res10->Owner = local_res18[0];
    if (local_res18[0] != (UObject *)0x0) {
      uVar7 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      pTVar6 = TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<UObject_const_*_const_&>
                         ((TMapBase<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->SolverMap,uVar7 >> 0x10 ^ uVar7,local_res18);
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)pTVar6->ArrayMax * 8)) &&
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
      iVar5 = pTVar6->ArrayNum;
      if (iVar5 == pTVar6->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      pTVar6->ArrayNum = iVar5 + 1;
      *(FPhysicsSolverBase **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10
      ;
    }
  }
  return;
}

// OnCreateMaterial @ 143701ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSolversModule::OnCreateMaterial(FChaosSolversModule *this,FMaterialHandle param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  FChaosPhysicsMaterial *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FMaterialHandle local_res10 [2];
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  FScriptContainerElement *local_100;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_f8;
  undefined4 uStack_f4;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  void *pvStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_100 = (FScriptContainerElement *)((ulonglong)local_100 & 0xffffffff00000000);
  bVar5 = false;
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar7 = Chaos::FMaterialHandle::Get(local_res10);
  if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049427>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0x26d,"Material");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar11 = (this->AllSolvers).AllocatorInstance.Data;
    iVar1 = (this->AllSolvers).ArrayNum;
    local_100 = pFVar11 + (longlong)iVar1 * 8;
    while( true ) {
      pFVar4 = local_100;
      if ((this->AllSolvers).ArrayNum != iVar1) {
        local_108 = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (pFVar11 == pFVar4) break;
      dStack_f0 = pFVar7->Friction;
      dStack_e8 = pFVar7->StaticFriction;
      lVar2 = *(longlong *)pFVar11;
      dStack_e0 = pFVar7->Restitution;
      dStack_d8 = pFVar7->Density;
      local_f8 = local_res10[0].InnerHandle;
      local_d0 = pFVar7->LinearEtherDrag;
      dStack_c8 = pFVar7->AngularEtherDrag;
      local_c0 = pFVar7->SleepingLinearThreshold;
      dStack_b8 = pFVar7->SleepingAngularThreshold;
      local_b0 = pFVar7->DisabledLinearThreshold;
      dStack_a8 = pFVar7->DisabledAngularThreshold;
      local_a0 = *(undefined8 *)&pFVar7->SleepCounterThreshold;
      pvStack_98 = pFVar7->UserData;
      local_90._0_4_ = pFVar7->BaseFrictionImpulse;
      local_90._4_1_ = pFVar7->FrictionCombineMode;
      local_90._5_1_ = pFVar7->RestitutionCombineMode;
      local_90._6_2_ = *(undefined2 *)&pFVar7->field_0x66;
      uStack_88._0_4_ = (pFVar7->Strength).TensileStrength;
      uStack_88._4_4_ = (pFVar7->Strength).CompressionStrength;
      local_80 = *(undefined8 *)&(pFVar7->Strength).ShearStrength;
      uStack_78._0_1_ = pFVar7->SoftCollisionMode;
      uStack_78._1_3_ = *(undefined3 *)&pFVar7->field_0x79;
      uStack_78._4_4_ = pFVar7->SoftCollisionThickness;
      local_70 = lVar2;
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 != (FSimCallbackCommandObject *)0x0) {
        local_68 = (code *)0x0;
        local_40 = (longlong *)0x0;
        puVar9 = FMemory::Malloc(0x98,8);
        *puVar9 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::`9'::<lambda_1>,1,1>
                   ::_vftable_;
        puVar9[1] = CONCAT44(uStack_f4,local_f8);
        puVar9[2] = dStack_f0;
        puVar9[3] = dStack_e8;
        puVar9[4] = dStack_e0;
        puVar9[5] = dStack_d8;
        puVar9[6] = local_d0;
        puVar9[7] = dStack_c8;
        puVar9[8] = local_c0;
        puVar9[9] = dStack_b8;
        puVar9[10] = local_b0;
        puVar9[0xb] = dStack_a8;
        puVar9[0xc] = local_a0;
        puVar9[0xd] = pvStack_98;
        puVar9[0xe] = local_90;
        puVar9[0xf] = uStack_88;
        puVar9[0x10] = local_80;
        puVar9[0x11] = uStack_78;
        puVar9[0x12] = local_70;
        if (puVar9 + 1 != (undefined8 *)0x0) {
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FChaosSolversModule::OnCreateMaterial'::__l9::<lambda_1>,void>
                     ::Call;
        }
        bVar5 = true;
        *(undefined2 *)&pFVar8->field_0x8 = 0;
        *(undefined ***)pFVar8 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined8 *)&pFVar8->field_0x10 = 0;
        *(undefined8 *)&pFVar8->field_0x18 = 0;
        *(undefined8 *)&pFVar8->field_0x20 = 0;
        *(undefined8 *)&pFVar8->field_0x28 = 0;
        *(undefined2 *)&pFVar8->field_0x40 = 1;
        *(code **)&pFVar8->Func = local_68;
        *(undefined8 **)&(pFVar8->Func).field_0x28 = puVar9;
        bVar6 = local_68 == (code *)0x0;
        local_40 = (longlong *)0x0;
        *(longlong *)&(pFVar8->Func).field_0x10 = local_58;
        *(undefined8 *)&(pFVar8->Func).field_0x18 = uStack_50;
        *(undefined8 *)&(pFVar8->Func).field_0x20 = local_48;
        local_68 = (code *)0x0;
        *(undefined8 *)&pFVar8->Func2 = 0;
        *(undefined8 *)&(pFVar8->Func2).field_0x28 = 0;
        pFVar8->bFuncHasTimeParameters = false;
        pFVar8->ExecuteOnStep = -1;
        if (bVar6) {
          local_107[0] = 0;
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_107);
        }
      }
      if ((bVar5) && (bVar5 = false, local_68 != (code *)0x0)) {
        plVar10 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar10 = local_40;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar2 + 0x98),pFVar8);
      pFVar11 = pFVar11 + 8;
    }
  }
  return;
}

// OnCreateMaterialMask @ 1437021d0

void __thiscall
FChaosSolversModule::OnCreateMaterialMask(FChaosSolversModule *this,FMaterialMaskHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPhysicsSolverBase *this_00;
  code *pcVar3;
  bool bVar4;
  FChaosPhysicsMaterialMask *pFVar5;
  FScriptContainerElement *pFVar6;
  FMaterialMaskHandle local_res10 [2];
  undefined1 local_res18 [16];
  <lambda_1> local_68;
  
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar5 = Chaos::FMaterialMaskHandle::Get(local_res10);
  if (pFVar5 == (FChaosPhysicsMaterialMask *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0x2af,"MaterialMask");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar2 = (this->AllSolvers).ArrayNum;
    pFVar6 = (this->AllSolvers).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllSolvers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      this_00 = *(FPhysicsSolverBase **)pFVar6;
      local_68.InHandle.InnerHandle = local_res10[0].InnerHandle;
      Chaos::FChaosPhysicsMaterialMask::FChaosPhysicsMaterialMask(&local_68.MaterialMaskCopy,pFVar5)
      ;
      local_68.Solver = this_00;
      Chaos::FPhysicsSolverBase::
      EnqueueCommandImmediate<_FChaosSolversModule::OnCreateMaterialMask_::__l9::<lambda_1>_>
                (this_00,&local_68);
      if (local_68.MaterialMaskCopy.MaskData.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.MaterialMaskCopy.MaskData.AllocatorInstance.Data);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// OnDestroyMaterial @ 1437022e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001437024bb) */

void __thiscall
FChaosSolversModule::OnDestroyMaterial(FChaosSolversModule *this,FMaterialHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FChaosPhysicsMaterial *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  FMaterialHandle local_res10 [2];
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_80;
  undefined4 uStack_7c;
  longlong local_68;
  undefined **local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar5 = false;
  local_84 = 0;
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar7 = Chaos::FMaterialHandle::Get(local_res10);
  if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0x283,"Material");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar10 = (this->AllSolvers).AllocatorInstance.Data;
    iVar2 = (this->AllSolvers).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllSolvers).ArrayNum != iVar2) {
        local_88[0] = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (pFVar10 == pFVar1) break;
      lVar3 = *(longlong *)pFVar10;
      local_80 = local_res10[0].InnerHandle;
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 == (FSimCallbackCommandObject *)0x0) {
        pFVar8 = (FSimCallbackCommandObject *)0x0;
      }
      else {
        local_40 = (undefined ***)0x0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::`9'::<lambda_1>,1,0>
                    ::_vftable_;
        bVar5 = true;
        uStack_50 = CONCAT44(uStack_7c,local_80);
        local_48 = lVar3;
        *(undefined ***)pFVar8 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar8->field_0x8 = 0;
        *(undefined8 *)&pFVar8->field_0x10 = 0;
        *(undefined8 *)&pFVar8->field_0x18 = 0;
        *(undefined8 *)&pFVar8->field_0x20 = 0;
        *(undefined8 *)&pFVar8->field_0x28 = 0;
        *(undefined2 *)&pFVar8->field_0x40 = 1;
        *(code **)&pFVar8->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FChaosSolversModule::OnDestroyMaterial'::__l9::<lambda_1>,void>::
             Call;
        *(undefined8 *)&(pFVar8->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar8->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::`9'::<lambda_1>,1,0>::
              _vftable_;
        *(ulonglong *)&(pFVar8->Func).field_0x18 = CONCAT44(uStack_7c,local_80);
        *(longlong *)&(pFVar8->Func).field_0x20 = lVar3;
        local_68 = 0;
        *(undefined8 *)&pFVar8->Func2 = 0;
        *(undefined8 *)&(pFVar8->Func2).field_0x28 = 0;
        pFVar8->bFuncHasTimeParameters = false;
        pFVar8->ExecuteOnStep = -1;
      }
      if ((bVar5) && (bVar5 = false, local_68 != 0)) {
        pppuVar9 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar9 = local_40;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar3 + 0x98),pFVar8);
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// OnDestroyMaterialMask @ 143702560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014370273b) */

void __thiscall
FChaosSolversModule::OnDestroyMaterialMask(FChaosSolversModule *this,FMaterialMaskHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FChaosPhysicsMaterialMask *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  FMaterialMaskHandle local_res10 [2];
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> local_80;
  undefined4 uStack_7c;
  longlong local_68;
  undefined **local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar5 = false;
  local_84 = 0;
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar7 = Chaos::FMaterialMaskHandle::Get(local_res10);
  if (pFVar7 == (FChaosPhysicsMaterialMask *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049339>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0x2c5,"MaterialMask");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar10 = (this->AllSolvers).AllocatorInstance.Data;
    iVar2 = (this->AllSolvers).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllSolvers).ArrayNum != iVar2) {
        local_88[0] = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (pFVar10 == pFVar1) break;
      lVar3 = *(longlong *)pFVar10;
      local_80 = local_res10[0].InnerHandle;
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 == (FSimCallbackCommandObject *)0x0) {
        pFVar8 = (FSimCallbackCommandObject *)0x0;
      }
      else {
        local_40 = (undefined ***)0x0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::`9'::<lambda_1>,1,0>
                    ::_vftable_;
        bVar5 = true;
        uStack_50 = CONCAT44(uStack_7c,local_80);
        local_48 = lVar3;
        *(undefined ***)pFVar8 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar8->field_0x8 = 0;
        *(undefined8 *)&pFVar8->field_0x10 = 0;
        *(undefined8 *)&pFVar8->field_0x18 = 0;
        *(undefined8 *)&pFVar8->field_0x20 = 0;
        *(undefined8 *)&pFVar8->field_0x28 = 0;
        *(undefined2 *)&pFVar8->field_0x40 = 1;
        *(code **)&pFVar8->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FChaosSolversModule::OnDestroyMaterialMask'::__l9::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar8->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar8->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::`9'::<lambda_1>,1,0>
              ::_vftable_;
        *(ulonglong *)&(pFVar8->Func).field_0x18 = CONCAT44(uStack_7c,local_80);
        *(longlong *)&(pFVar8->Func).field_0x20 = lVar3;
        local_68 = 0;
        *(undefined8 *)&pFVar8->Func2 = 0;
        *(undefined8 *)&(pFVar8->Func2).field_0x28 = 0;
        pFVar8->bFuncHasTimeParameters = false;
        pFVar8->ExecuteOnStep = -1;
      }
      if ((bVar5) && (bVar5 = false, local_68 != 0)) {
        pppuVar9 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar9 = local_40;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar3 + 0x98),pFVar8);
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// OnUpdateMaterial @ 143702b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSolversModule::OnUpdateMaterial(FChaosSolversModule *this,FMaterialHandle param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  FChaosPhysicsMaterial *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FMaterialHandle local_res10 [2];
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  FScriptContainerElement *local_100;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_f8;
  undefined4 uStack_f4;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  void *pvStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_100 = (FScriptContainerElement *)((ulonglong)local_100 & 0xffffffff00000000);
  bVar5 = false;
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar7 = Chaos::FMaterialHandle::Get(local_res10);
  if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,600,"Material");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar11 = (this->AllSolvers).AllocatorInstance.Data;
    iVar1 = (this->AllSolvers).ArrayNum;
    local_100 = pFVar11 + (longlong)iVar1 * 8;
    while( true ) {
      pFVar4 = local_100;
      if ((this->AllSolvers).ArrayNum != iVar1) {
        local_108 = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (pFVar11 == pFVar4) break;
      dStack_f0 = pFVar7->Friction;
      dStack_e8 = pFVar7->StaticFriction;
      lVar2 = *(longlong *)pFVar11;
      dStack_e0 = pFVar7->Restitution;
      dStack_d8 = pFVar7->Density;
      local_f8 = local_res10[0].InnerHandle;
      local_d0 = pFVar7->LinearEtherDrag;
      dStack_c8 = pFVar7->AngularEtherDrag;
      local_c0 = pFVar7->SleepingLinearThreshold;
      dStack_b8 = pFVar7->SleepingAngularThreshold;
      local_b0 = pFVar7->DisabledLinearThreshold;
      dStack_a8 = pFVar7->DisabledAngularThreshold;
      local_a0 = *(undefined8 *)&pFVar7->SleepCounterThreshold;
      pvStack_98 = pFVar7->UserData;
      local_90._0_4_ = pFVar7->BaseFrictionImpulse;
      local_90._4_1_ = pFVar7->FrictionCombineMode;
      local_90._5_1_ = pFVar7->RestitutionCombineMode;
      local_90._6_2_ = *(undefined2 *)&pFVar7->field_0x66;
      uStack_88._0_4_ = (pFVar7->Strength).TensileStrength;
      uStack_88._4_4_ = (pFVar7->Strength).CompressionStrength;
      local_80 = *(undefined8 *)&(pFVar7->Strength).ShearStrength;
      uStack_78._0_1_ = pFVar7->SoftCollisionMode;
      uStack_78._1_3_ = *(undefined3 *)&pFVar7->field_0x79;
      uStack_78._4_4_ = pFVar7->SoftCollisionThickness;
      local_70 = lVar2;
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 != (FSimCallbackCommandObject *)0x0) {
        local_68 = (code *)0x0;
        local_40 = (longlong *)0x0;
        puVar9 = FMemory::Malloc(0x98,8);
        *puVar9 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::`9'::<lambda_1>,1,1>
                   ::_vftable_;
        puVar9[1] = CONCAT44(uStack_f4,local_f8);
        puVar9[2] = dStack_f0;
        puVar9[3] = dStack_e8;
        puVar9[4] = dStack_e0;
        puVar9[5] = dStack_d8;
        puVar9[6] = local_d0;
        puVar9[7] = dStack_c8;
        puVar9[8] = local_c0;
        puVar9[9] = dStack_b8;
        puVar9[10] = local_b0;
        puVar9[0xb] = dStack_a8;
        puVar9[0xc] = local_a0;
        puVar9[0xd] = pvStack_98;
        puVar9[0xe] = local_90;
        puVar9[0xf] = uStack_88;
        puVar9[0x10] = local_80;
        puVar9[0x11] = uStack_78;
        puVar9[0x12] = local_70;
        if (puVar9 + 1 != (undefined8 *)0x0) {
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FChaosSolversModule::OnUpdateMaterial'::__l9::<lambda_1>,void>
                     ::Call;
        }
        bVar5 = true;
        *(undefined2 *)&pFVar8->field_0x8 = 0;
        *(undefined ***)pFVar8 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined8 *)&pFVar8->field_0x10 = 0;
        *(undefined8 *)&pFVar8->field_0x18 = 0;
        *(undefined8 *)&pFVar8->field_0x20 = 0;
        *(undefined8 *)&pFVar8->field_0x28 = 0;
        *(undefined2 *)&pFVar8->field_0x40 = 1;
        *(code **)&pFVar8->Func = local_68;
        *(undefined8 **)&(pFVar8->Func).field_0x28 = puVar9;
        bVar6 = local_68 == (code *)0x0;
        local_40 = (longlong *)0x0;
        *(longlong *)&(pFVar8->Func).field_0x10 = local_58;
        *(undefined8 *)&(pFVar8->Func).field_0x18 = uStack_50;
        *(undefined8 *)&(pFVar8->Func).field_0x20 = local_48;
        local_68 = (code *)0x0;
        *(undefined8 *)&pFVar8->Func2 = 0;
        *(undefined8 *)&(pFVar8->Func2).field_0x28 = 0;
        pFVar8->bFuncHasTimeParameters = false;
        pFVar8->ExecuteOnStep = -1;
        if (bVar6) {
          local_107[0] = 0;
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_107);
        }
      }
      if ((bVar5) && (bVar5 = false, local_68 != (code *)0x0)) {
        plVar10 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar10 = local_40;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar2 + 0x98),pFVar8);
      pFVar11 = pFVar11 + 8;
    }
  }
  return;
}

// OnUpdateMaterialMask @ 143702ea0

void __thiscall
FChaosSolversModule::OnUpdateMaterialMask(FChaosSolversModule *this,FMaterialMaskHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPhysicsSolverBase *this_00;
  code *pcVar3;
  bool bVar4;
  FChaosPhysicsMaterialMask *pFVar5;
  FScriptContainerElement *pFVar6;
  FMaterialMaskHandle local_res10 [2];
  undefined1 local_res18 [16];
  <lambda_1> local_68;
  
  local_res10[0].InnerHandle = param_1.InnerHandle;
  pFVar5 = Chaos::FMaterialMaskHandle::Get(local_res10);
  if (pFVar5 == (FChaosPhysicsMaterialMask *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5282310325218049383>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosSolversModule.cpp"
                       ,0x299,"MaterialMask");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar2 = (this->AllSolvers).ArrayNum;
    pFVar6 = (this->AllSolvers).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllSolvers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      this_00 = *(FPhysicsSolverBase **)pFVar6;
      local_68.InHandle.InnerHandle = local_res10[0].InnerHandle;
      Chaos::FChaosPhysicsMaterialMask::FChaosPhysicsMaterialMask(&local_68.MaterialMaskCopy,pFVar5)
      ;
      local_68.Solver = this_00;
      Chaos::FPhysicsSolverBase::
      EnqueueCommandImmediate<_FChaosSolversModule::OnUpdateMaterialMask_::__l9::<lambda_1>_>
                (this_00,&local_68);
      if (local_68.MaterialMaskCopy.MaskData.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.MaterialMaskCopy.MaskData.AllocatorInstance.Data);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// Shutdown @ 1437042d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FChaosSolversModule::Shutdown(FChaosSolversModule *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  FDelegateHandle FVar8;
  FTaskGraphInterface *pFVar9;
  FPhysicalMaterialManager *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [8];
  TRefCountPtr<FBaseGraphTask> local_70;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (this->bModuleInitialized != false) {
    pFVar11 = (this->AllSolvers).AllocatorInstance.Data;
    iVar4 = (this->AllSolvers).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->AllSolvers).ArrayNum != iVar4) {
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (pFVar11 == pFVar2) break;
      lVar5 = *(longlong *)pFVar11;
      lVar6 = *(longlong *)(lVar5 + 0x268);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0xd0) == '\0')) {
        pFVar9 = FTaskGraphInterface::Get();
        pcVar7 = *(code **)((longlong)*pFVar9 + 0x60);
        local_70.Reference = *(FBaseGraphTask **)(lVar5 + 0x268);
        if (local_70.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&(local_70.Reference)->field_0x30 = *(int *)&(local_70.Reference)->field_0x30 + 1;
          UNLOCK();
        }
        local_68.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_40 = 1;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,1,0,&local_68,1,&local_3c);
        FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
        if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar10 = local_68.SecondaryData;
        }
        ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                  ((void *)FVar10,&local_70,1);
        (*pcVar7)(pFVar9,&local_68,0xff);
        FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
        if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar10 = local_68.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_40);
        if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_68.SecondaryData);
        }
        if (local_70.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &(local_70.Reference)->field_0x30;
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
          }
        }
      }
      pFVar11 = pFVar11 + 8;
    }
    this_00 = Chaos::FPhysicalMaterialManager::Get();
    FVar8.ID = (this->OnCreateMaterialHandle).ID;
    if (FVar8.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialCreated,
                 FVar8);
    }
    FVar8.ID = (this->OnDestroyMaterialHandle).ID;
    if (FVar8.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialDestroyed
                 ,FVar8);
    }
    FVar8.ID = (this->OnUpdateMaterialHandle).ID;
    if (FVar8.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,FVar8);
    }
    this->bModuleInitialized = false;
  }
  return;
}

// ShutdownModule @ 1437044f0

void __thiscall FChaosSolversModule::ShutdownModule(FChaosSolversModule *this)

{
  Shutdown(this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  return;
}

// StartupModule @ 1437045a0

void __thiscall FChaosSolversModule::StartupModule(FChaosSolversModule *this)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  FPhysicalMaterialManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  ulong64 uVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  undefined1 auStackX_8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_78;
  FDelegateAllocation FStack_70;
  FDestructionSentinel FStack_60;
  FDestructionSentinel FStack_48;
  FDelegateAllocation *pFStack_30;
  
  if (this->bModuleInitialized == false) {
    this_00 = Chaos::FPhysicalMaterialManager::Get();
    uVar7 = 0;
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnCreateMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnMaterialCreated
               ,(FWriteAccessScope *)&FStack_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_60);
    uVar5 = uVar7;
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_60);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_60);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialCreated,
                 true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_60);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_60);
      iVar3 = *(int *)&(this_00->OnMaterialCreated).field_0x10;
      puVar1 = &(this_00->OnMaterialCreated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialCreated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialCreated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialCreated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_60);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
      }
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    (this->OnCreateMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnDestroyMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialDestroyed,(FWriteAccessScope *)&FStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_48);
    uVar5 = uVar7;
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnMaterialDestroyed
                 ,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_48);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      iVar3 = *(int *)&(this_00->OnMaterialDestroyed).field_0x10;
      puVar1 = &(this_00->OnMaterialDestroyed).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialDestroyed).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialDestroyed).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialDestroyed).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if (FStack_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
    }
    (this->OnDestroyMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnUpdateMaterial;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&FStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_48);
    uVar5 = uVar7;
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_48);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      iVar3 = *(int *)&(this_00->OnMaterialUpdated).field_0x10;
      puVar1 = &(this_00->OnMaterialUpdated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialUpdated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialUpdated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialUpdated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if (FStack_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
    }
    (this->OnUpdateMaterialHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnCreateMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskCreated,(FWriteAccessScope *)&FStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_48);
    uVar5 = uVar7;
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskCreated,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_48);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskCreated).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskCreated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskCreated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskCreated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskCreated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if (FStack_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
    }
    (this->OnCreateMaterialMaskHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnDestroyMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskDestroyed,(FWriteAccessScope *)&FStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_48);
    uVar5 = uVar7;
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskDestroyed,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_48);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar5 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskDestroyed).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskDestroyed).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskDestroyed).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskDestroyed).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskDestroyed).field_0x8 + (longlong)iVar3 * 0x10)
      ;
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if (FStack_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
    }
    (this->OnDestroyMaterialMaskHandle).ID = uVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    TStack_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    pFStack_30 = &FStack_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      puVar4[4] = OnUpdateMaterialMask;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosSolversModule____A6AXUFMaterialMaskHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = this;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnMaterialMaskUpdated,(FWriteAccessScope *)&FStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&TStack_78,(FReadAccessScope *)&FStack_48);
    if (((FStack_70.DelegateSize == 0) ||
        (FStack_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnMaterialMaskUpdated,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_78,(FReadAccessScope *)&FStack_48);
      if ((FStack_70.DelegateSize != 0) &&
         (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)FStack_70.DelegateAllocator + 0x40))
                           (FStack_70.DelegateAllocator,auStackX_8);
        uVar7 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&FStack_48);
      iVar3 = *(int *)&(this_00->OnMaterialMaskUpdated).field_0x10;
      puVar1 = &(this_00->OnMaterialMaskUpdated).field_0x14;
      if (iVar3 == *(int *)puVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialMaskUpdated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialMaskUpdated).field_0x10 = iVar3 + 1;
      pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
               (*(longlong *)&(this_00->OnMaterialMaskUpdated).field_0x8 + (longlong)iVar3 * 0x10);
      *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar8 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_78,(FWriteAccessScope *)&FStack_48);
      if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar8);
      }
      *pFVar8 = FStack_70.DelegateAllocator;
      FStack_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar8 + 1) = FStack_70.DelegateSize;
      FStack_70.DelegateSize = 0;
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if (FStack_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
    }
    (this->OnUpdateMaterialMaskHandle).ID = uVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_78,(FWriteAccessScope *)&FStack_48);
    if ((FStack_70.DelegateSize != 0) &&
       (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_70,0,0,0x10);
      FStack_70.DelegateSize = 0;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (FStack_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_78.AccessDetector);
    this->bModuleInitialized = true;
    return;
  }
  return;
}

// SyncTask @ 143704630

void __thiscall FChaosSolversModule::SyncTask(FChaosSolversModule *this,bool param_1)

{
  return;
}

// operator() @ 1504a1cb0

bool __thiscall `FChaosSolversModule::DestroySolver'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5282310325218049788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5282310325218049788>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

