// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FSearchEngineCore @ 14ae5ad90

FSearchEngineCore * __thiscall
Metasound::Frontend::FSearchEngineCore::FSearchEngineCore(FSearchEngineCore *this)

{
  FFrontendQueryStep FVar1;
  FFrontendQuery *pFVar2;
  IStepExecuter IVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar4;
  IStepExecuter *pIVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res8;
  
  IVar7 = (IStepExecuter)0x0;
  local_res8.Ptr = (FFrontendQueryStep *)((ulonglong)local_res8.Ptr & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FSearchEngineCore_Frontend_Metasound__6B_;
  (this->FindClassWithHighestMinorVersionQuery)._padding_ =
       (longlong)
       &
       ___7__TSearchEngineQuery_UFFindClassWithHighestMinorVersionQueryPolicy_Frontend_Metasound____V_Frontend_Metasound__6B_
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FindClassWithHighestMinorVersionQuery).QueryCriticalSection
             ,4000);
  FFindClassWithHighestMinorVersionQueryPolicy::CreateQuery
            (&(this->FindClassWithHighestMinorVersionQuery).Query);
  *(undefined8 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache = 0;
  *(undefined8 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x8 = 0;
  *(undefined8 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x20 = 0;
  *(undefined4 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x28 = 0;
  *(undefined4 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x34 = 0;
  *(undefined8 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x40 = 0;
  *(undefined4 *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x48 = 0;
  (this->FindAllRegisteredInterfacesWithNameQuery)._padding_ =
       (longlong)
       &
       ___7__TSearchEngineQuery_UFFindAllRegisteredInterfacesWithNameQueryPolicy_Frontend_Metasound____V_Frontend_Metasound__6B_
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &(this->FindAllRegisteredInterfacesWithNameQuery).QueryCriticalSection,4000);
  FFindAllRegisteredInterfacesWithNameQueryPolicy::CreateQuery
            (&(this->FindAllRegisteredInterfacesWithNameQuery).Query);
  *(undefined8 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache = 0;
  *(undefined8 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x8 = 0;
  *(undefined8 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x20 = 0;
  *(undefined4 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x28 = 0;
  *(undefined4 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x34 = 0;
  *(undefined8 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x40 = 0;
  *(undefined4 *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x48 = 0;
  (this->FindAllDefaultInterfaceVersionsForUClassQuery)._padding_ =
       (longlong)
       &
       ___7__TSearchEngineQuery_UFFindAllDefaultInterfaceVersionsForUClassQueryPolicy_Frontend_Metasound____V_Frontend_Metasound__6B_
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &(this->FindAllDefaultInterfaceVersionsForUClassQuery).QueryCriticalSection,4000);
  FFindAllDefaultInterfaceVersionsForUClassQueryPolicy::CreateQuery
            (&(this->FindAllDefaultInterfaceVersionsForUClassQuery).Query);
  *(undefined8 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache = 0;
  *(undefined8 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x8 = 0;
  *(undefined8 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x20 = 0;
  *(undefined4 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x28 = 0;
  *(undefined4 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x2c =
       0x80;
  *(undefined4 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x34 = 0;
  *(undefined8 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x40 = 0;
  *(undefined4 *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x48 = 0;
  (this->FindInterfaceWithHighestVersionQuery)._padding_ =
       (longlong)
       &
       ___7__TSearchEngineQuery_UFFindInterfaceWithHighestVersionQueryPolicy_Frontend_Metasound____V_Frontend_Metasound__6B_
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FindInterfaceWithHighestVersionQuery).QueryCriticalSection,
             4000);
  FFrontendQuery::FFrontendQuery(&(this->FindInterfaceWithHighestVersionQuery).Query);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource>
                     (&(this->FindInterfaceWithHighestVersionQuery).Query);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys>
                     (pFVar2);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus>
                     (pFVar2);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface>
                     (pFVar2);
  IVar3 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar3 != (IStepExecuter)0x0) {
    *(undefined ***)IVar3 =
         &___7FMapInterfaceToInterfaceName_SearchEngineQuerySteps_Frontend_Metasound__6B_;
    IVar6 = IVar3;
  }
  TVar4.Ptr = ::operator_new(8);
  if (TVar4.Ptr == (FFrontendQueryStep *)0x0) {
    TVar4.Ptr = (FFrontendQueryStep *)0x0;
    IVar3 = IVar7;
  }
  else {
    pIVar5 = ::operator_new(0x10);
    if (pIVar5 == (IStepExecuter *)0x0) {
      ((TVar4.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar6;
      IVar3 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar5[1] = IVar6;
      *pIVar5 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar4.Ptr)->StepExecuter).Ptr = pIVar5;
      local_res8.Ptr = (FFrontendQueryStep *)IVar7;
      IVar3 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar3 != (IStepExecuter)0x0) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar4.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar4.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar4.Ptr;
  pFVar2 = FFrontendQuery::AddStep(pFVar2,&local_res8);
  TVar4.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar5 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar5 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    ::operator_delete(TVar4.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  FFrontendQuery::
  AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion>(pFVar2);
  *(undefined8 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache = 0;
  *(undefined8 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x8 = 0;
  *(undefined8 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x20 = 0;
  *(undefined4 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x28 = 0;
  *(undefined4 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x34 = 0;
  *(undefined8 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x40 = 0;
  *(undefined4 *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x48 = 0;
  return this;
}

// ~FSearchEngineCore @ 14ae5c640

void __thiscall Metasound::Frontend::FSearchEngineCore::~FSearchEngineCore(FSearchEngineCore *this)

{
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
            (&this->FindInterfaceWithHighestVersionQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
            (&this->FindAllDefaultInterfaceVersionsForUClassQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
            (&this->FindAllRegisteredInterfacesWithNameQuery);
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::
  ~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
            (&this->FindClassWithHighestMinorVersionQuery);
  return;
}

// FindAllRegisteredInterfacesWithName @ 14ae714c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FSearchEngineCore::FindAllRegisteredInterfacesWithName
          (FSearchEngineCore *this,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  void *_Src;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStackY_a8 [32];
  FLLMScope local_68;
  FName local_64;
  FMemScope local_58;
  FFrontendQueryKey local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FSearchEngineCore::FindAllRegisteredInterfacesWithName");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId497,
               "metasound::FSearchEngineCore::FindAllRegisteredInterfacesWithName",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId497);
  }
  local_50.Key.TypeIndex = 3;
  local_50.Key._padding_ = (longlong)param_1;
  local_50.Hash = ::GetTypeHash(param_1.ComparisonIndex.Value);
  local_50.Hash = local_50.Hash + param_1.Number;
  FLLMScope::FLLMScope
            (&local_68,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_64 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_58,&local_64,true);
  lpCriticalSection = &(this->FindAllRegisteredInterfacesWithNameQuery).QueryCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update
            (&this->FindAllRegisteredInterfacesWithNameQuery);
  if (*(int *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x8 !=
      *(int *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x34) {
    puVar6 = *(undefined1 **)
              &(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache.field_0x38;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache
                                        .field_0x48 - 1U & local_50.Hash) * 4);
    while (iVar1 != -1) {
      lVar9 = (longlong)iVar1 * 0x38;
      bVar4 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache
                         + lVar9),&local_50);
      if (bVar4) {
        lVar9 = *(longlong *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache + lVar9;
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        puVar7 = (undefined8 *)(lVar9 + 0x20);
        if (lVar9 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        if (puVar7 == (undefined8 *)0x0) goto LAB_14ae71656;
        iVar1 = *(int *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        __return_storage_ptr__->ArrayNum = iVar1;
        if (iVar1 == 0) goto LAB_14ae7165a;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
        goto LAB_14ae7165c;
      }
      iVar1 = *(int *)(lVar9 + 0x30 +
                      *(longlong *)&(this->FindAllRegisteredInterfacesWithNameQuery).ResultCache);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14ae71656:
  __return_storage_ptr__->ArrayNum = 0;
LAB_14ae7165a:
  __return_storage_ptr__->ArrayMax = 0;
LAB_14ae7165c:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(&local_68);
  uVar8 = (ulonglong)local_50.Key.TypeIndex;
  if ((3 < local_50.Key.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar5;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] != UE::Core::Private::TDestructorCaller<FName>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_50);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// FindClassWithHighestMinorVersion @ 14ae71860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FSearchEngineCore::FindClassWithHighestMinorVersion
          (FSearchEngineCore *this,FMetasoundFrontendClassName *param_1,int param_2,
          FMetasoundFrontendClass *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FNodeClassRegistry *pFVar7;
  FNodeClassRegistry *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStackY_e8 [32];
  FLLMScope local_b8 [2];
  FMemScope local_b0;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  FName local_80;
  FFrontendQueryKey local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FSearchEngineCore::FindClassWithHighestMinorVersion");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId451,
               "metasound::FSearchEngineCore::FindClassWithHighestMinorVersion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1c3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId451);
  }
  SearchEngineQuerySteps::CreateKeyFromFullClassNameAndMajorVersion(&local_78,param_1,param_2);
  pFVar8 = (FNodeClassRegistry *)0x0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,10);
  uStack_8c = 1;
  FLLMScope::FLLMScope
            (local_b8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_80 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_80,true);
  lpCriticalSection = &(this->FindClassWithHighestMinorVersionQuery).QueryCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update
            (&this->FindClassWithHighestMinorVersionQuery);
  if (*(int *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x8 !=
      *(int *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x34) {
    puVar9 = *(undefined1 **)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->FindClassWithHighestMinorVersionQuery).ResultCache.field_0x38;
    }
    iVar1 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache.
                                        field_0x48 - 1U & local_78.Hash) * 4);
    while (iVar1 != -1) {
      lVar10 = (longlong)iVar1 * 0x50;
      bVar4 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache +
                         lVar10),&local_78);
      lVar6 = *(longlong *)&(this->FindClassWithHighestMinorVersionQuery).ResultCache;
      if (bVar4) {
        lVar6 = lVar6 + lVar10;
        pFVar7 = (FNodeClassRegistry *)(lVar6 + 0x20);
        if (lVar6 == 0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FNodeClassRegistry *)0x0) {
          local_a8 = *(undefined4 *)pFVar7;
          uStack_a4 = *(undefined8 *)&pFVar7->field_0x4;
          uStack_9c = *(undefined8 *)&pFVar7->field_0xc;
          uStack_94 = *(undefined8 *)((pFVar7->LazyInitCommands).AllocatorInstance.InlineData + 4);
          uStack_8c = *(undefined8 *)((pFVar7->LazyInitCommands).AllocatorInstance.InlineData + 0xc)
          ;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          FMemScope::~FMemScope(&local_b0);
          FLLMScope::~FLLMScope(local_b8);
          if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
            pFVar7 = ::operator_new(0x182b0);
            if (pFVar7 != (FNodeClassRegistry *)0x0) {
              pFVar8 = FNodeClassRegistry::FNodeClassRegistry(pFVar7);
            }
            FNodeClassRegistry::LazySingleton = pFVar8;
            if (pFVar8 == (FNodeClassRegistry *)0x0) goto LAB_14ae71a0b;
          }
          uVar5 = (**(code **)(*(longlong *)FNodeClassRegistry::LazySingleton + 0x68))
                            (FNodeClassRegistry::LazySingleton,&local_a8,param_3);
          goto LAB_14ae71a0e;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x48 + lVar10);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_b8);
LAB_14ae71a0b:
  uVar5 = 0;
LAB_14ae71a0e:
  if ((3 < local_78.Key.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.Key.TypeIndex])(&local_78);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (bool)uVar5;
}

// FindInterfaceWithHighestVersion @ 14ae72600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FSearchEngineCore::FindInterfaceWithHighestVersion
          (FSearchEngineCore *this,FName param_1,FMetasoundFrontendInterface *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  FMetasoundFrontendInterface *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStackY_98 [32];
  FLLMScope local_68;
  FName local_64;
  FMemScope local_58;
  FFrontendQueryKey local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FSearchEngineCore::FindInterfaceWithHighestVersion");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId505,
               "metasound::FSearchEngineCore::FindInterfaceWithHighestVersion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1f9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId505);
  }
  local_50.Key.TypeIndex = 3;
  local_50.Key._padding_ = (longlong)param_1;
  local_50.Hash = ::GetTypeHash(param_1.ComparisonIndex.Value);
  local_50.Hash = local_50.Hash + param_1.Number;
  FLLMScope::FLLMScope
            (&local_68,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_64 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_58,&local_64,true);
  lpCriticalSection = &(this->FindInterfaceWithHighestVersionQuery).QueryCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update
            (&this->FindInterfaceWithHighestVersionQuery);
  if (*(int *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x8 !=
      *(int *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x34) {
    puVar7 = *(undefined1 **)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->FindInterfaceWithHighestVersionQuery).ResultCache.field_0x38;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache.
                                        field_0x48 - 1U & local_50.Hash) * 4);
    while (iVar1 != -1) {
      lVar10 = (longlong)iVar1 * 0x88;
      bVar4 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache +
                         lVar10),&local_50);
      if (bVar4) {
        lVar10 = *(longlong *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache + lVar10;
        pFVar8 = (FMetasoundFrontendInterface *)(lVar10 + 0x20);
        if (lVar10 == 0) {
          pFVar8 = (FMetasoundFrontendInterface *)0x0;
        }
        if (pFVar8 != (FMetasoundFrontendInterface *)0x0) {
          FMetasoundFrontendInterface::operator=(param_2,pFVar8);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          bVar4 = true;
          goto LAB_14ae7278e;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&(this->FindInterfaceWithHighestVersionQuery).ResultCache + 0x80
                      + lVar10);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar4 = false;
LAB_14ae7278e:
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(&local_68);
  uVar9 = (ulonglong)local_50.Key.TypeIndex;
  if ((3 < local_50.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] != UE::Core::Private::TDestructorCaller<FName>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_50);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar4;
}

// FindUClassDefaultInterfaceVersions @ 14ae735a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FSearchEngineCore::FindUClassDefaultInterfaceVersions
          (FSearchEngineCore *this,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTopLevelAssetPath *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  void *_Src;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStackY_c8 [32];
  FLLMScope local_88;
  FName local_84;
  FMemScope local_78;
  FString local_70;
  FFrontendQueryKey local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FSearchEngineCore::FindUClassDefaultInterfaceVersions");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId489,
               "metasound::FSearchEngineCore::FindUClassDefaultInterfaceVersions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId489);
  }
  pFVar5 = FTopLevelAssetPath::ToString(param_1,&local_70);
  ::FString::FString((FString *)&local_60,pFVar5);
  local_60.Key.TypeIndex = 2;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  local_60.Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FLLMScope::FLLMScope
            (&local_88,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_84 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_78,&local_84,true);
  lpCriticalSection = &(this->FindAllDefaultInterfaceVersionsForUClassQuery).QueryCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
  Update(&this->FindAllDefaultInterfaceVersionsForUClassQuery);
  if (*(int *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x8 !=
      *(int *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x34) {
    puVar9 = *(undefined1 **)
              &(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache.field_0x38;
    }
    iVar1 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).
                                        ResultCache.field_0x48 - 1U & local_60.Hash) * 4);
    while (iVar1 != -1) {
      lVar12 = (longlong)iVar1 * 0x38;
      bVar4 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)
                           &(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache +
                         lVar12),&local_60);
      if (bVar4) {
        lVar12 = *(longlong *)&(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache +
                 lVar12;
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        puVar10 = (undefined8 *)(lVar12 + 0x20);
        if (lVar12 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        if (puVar10 == (undefined8 *)0x0) goto LAB_14ae73774;
        iVar1 = *(int *)(puVar10 + 1);
        _Src = (void *)*puVar10;
        __return_storage_ptr__->ArrayNum = iVar1;
        if (iVar1 == 0) goto LAB_14ae73778;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
        goto LAB_14ae7377b;
      }
      iVar1 = *(int *)(lVar12 + 0x30 +
                      *(longlong *)
                       &(this->FindAllDefaultInterfaceVersionsForUClassQuery).ResultCache);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14ae73774:
  __return_storage_ptr__->ArrayNum = 0;
LAB_14ae73778:
  __return_storage_ptr__->ArrayMax = 0;
LAB_14ae7377b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(&local_88);
  uVar11 = (ulonglong)local_60.Key.TypeIndex;
  if ((3 < local_60.Key.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11] ==
      UE::Core::Private::TDestructorCaller<FString>::Destruct) {
    if ((void *)local_60.Key._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_60.Key._padding_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(&local_60);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// FindUClassDefaultInterfaces @ 14ae738c0

TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FSearchEngineCore::FindUClassDefaultInterfaces
          (FSearchEngineCore *this,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool bVar5;
  <lambda_1> local_res8;
  FName local_res18 [2];
  FTopLevelAssetPath local_68;
  TStringView<wchar_t> local_58;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_res18[0] = param_1;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"metasound::FSearchEngineCore::FindUClassDefaultInterfaces");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId470,
               "metasound::FSearchEngineCore::FindUClassDefaultInterfaces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId470);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  pFVar4 = ::FName::ToString(local_res18,&local_38);
  local_68.PackageName.ComparisonIndex.Value = 0;
  local_68.PackageName.Number = 0;
  local_68.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetName.Number = 0;
  local_58.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_58.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_58.Size = 0;
  }
  FTopLevelAssetPath::TrySetPath(&local_68,&local_58);
  (*pcVar2)(this,&local_48,&local_68);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  Algo::
  Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FSearchEngineCore::FindUClassDefaultInterfaces_::__l2::<lambda_1>_>
            (&local_48,__return_storage_ptr__,local_res8);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// Prime @ 14ae7e830

void __thiscall Metasound::Frontend::FSearchEngineCore::Prime(FSearchEngineCore *this)

{
  bool bVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"metasound::FSearchEngineCore::Prime");
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId441,"metasound::FSearchEngineCore::Prime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId441);
  }
  (**(code **)(this->FindClassWithHighestMinorVersionQuery)._padding_)
            (&this->FindClassWithHighestMinorVersionQuery);
  (**(code **)(this->FindAllRegisteredInterfacesWithNameQuery)._padding_)();
  (**(code **)(this->FindInterfaceWithHighestVersionQuery)._padding_)();
  (**(code **)(this->FindAllDefaultInterfaceVersionsForUClassQuery)._padding_)();
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

