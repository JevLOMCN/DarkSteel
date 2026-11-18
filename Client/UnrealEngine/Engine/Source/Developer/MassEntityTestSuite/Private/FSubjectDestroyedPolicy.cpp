// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14718c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014718d178) */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FSubjectDestroyedPolicy::InstantTest(FSubjectDestroyedPolicy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  TNotNull<UScriptStruct_*> TVar5;
  TNotNull<UScriptStruct_*> *pTVar6;
  FRoleTraits *pFVar7;
  FMassEntityManager *pFVar8;
  longlong lVar9;
  FMassArchetypeSharedFragmentValues *pFVar10;
  undefined1 auStack_928 [32];
  FMassEntityHandle local_908;
  longlong local_900;
  bool local_8f8;
  char local_8f7;
  undefined1 local_8f6;
  bool local_8f5;
  char local_8f4;
  undefined1 local_8f3;
  bool local_8f2;
  char local_8f1;
  undefined1 local_8f0;
  char local_8ef;
  undefined1 local_8ee;
  bool local_8ed;
  char local_8ec;
  undefined1 local_8eb;
  bool local_8ea;
  char local_8e9;
  undefined1 local_8e8;
  char local_8e7;
  undefined1 local_8e6;
  char local_8e5;
  undefined1 local_8e4;
  undefined1 local_8e3;
  undefined1 local_8e0 [56];
  FMassArchetypeHandle local_8a8;
  int local_898;
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_870;
  int local_860;
  undefined1 local_858 [16];
  undefined1 local_848 [16];
  FSharedReferencer<1> local_838;
  TNotNull<UScriptStruct_*> *local_830;
  UScriptStruct *local_828;
  FMassEntityManager *local_820;
  FMassEntityManager *local_818;
  undefined1 local_810 [32];
  FMassEntityHandle local_7f0;
  FWeakObjectPtr local_7e8;
  ForAnyElementType local_7e0;
  FName *local_7d8;
  FName local_7d0;
  FWeakObjectPtr local_7c8;
  FWeakObjectPtr local_7c0;
  FWeakObjectPtr local_7b8;
  FWeakObjectPtr local_7b0;
  ForAnyElementType local_7a8;
  FRelationManager *local_7a0;
  FMassEntityHandle local_798;
  FWeakObjectPtr local_790;
  FMassEntityHandle local_788;
  FWeakObjectPtr local_780;
  FWeakObjectPtr local_778;
  FMassEntityHandle local_770;
  FMassEntityManager *local_768;
  FAutomationTestBase *local_760;
  FRelationManager *local_758;
  FAutomationTestBase *local_750;
  FName *local_748;
  FName local_740;
  UScriptStruct *local_738;
  TNotNull<UScriptStruct_*> *local_730;
  FTypeManager *local_728;
  FMassEntityManager *local_720;
  FMassEntityManager *local_718;
  FMassEntityManager *local_710;
  FRelationManager *local_708;
  FRelationManager *local_700;
  FMassEntityHandle local_6f8;
  FMassEntityManager *local_6f0;
  FMassEntityHandle local_6e8;
  FMassEntityManager *local_6e0;
  FAutomationTestBase *local_6d8;
  FMassEntityHandle local_6d0;
  FMassEntityManager *local_6c8;
  FAutomationTestBase *local_6c0;
  FRelationManager *local_6b8;
  FAutomationTestBase *local_6b0;
  FMassEntityHandle local_6a8;
  FMassEntityHandle local_6a0;
  undefined4 local_698;
  undefined4 local_694;
  UScriptStruct *local_690;
  UScriptStruct *local_688;
  UScriptStruct *local_680;
  FMassEntityHandle local_678;
  FMassEntityHandle local_670;
  FMassEntityHandle local_668;
  FAutomationTestBase *local_660;
  FMassEntityHandle local_658;
  FMassEntityHandle local_650;
  FName *local_648;
  FName local_640;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  undefined1 local_5a8 [8];
  FName local_5a0;
  undefined1 local_598 [8];
  undefined1 local_590 [8];
  undefined1 local_588 [8];
  FName local_580;
  undefined1 local_578 [8];
  TNotNull<UScriptStruct_*> local_570;
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  FName local_558;
  undefined1 local_550 [8];
  TNotNull<UScriptStruct_*> local_548 [2];
  FRelationTypeTraits local_538;
  FRelationTypeTraits local_488;
  FRelationTypeTraits local_3d8;
  FMassArchetypeSharedFragmentValues local_328;
  FMassArchetypeSharedFragmentValues local_2b8;
  FMassArchetypeSharedFragmentValues local_248;
  FMassArchetypeSharedFragmentValues local_1d8;
  FMassArchetypeSharedFragmentValues local_168;
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_928;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)local_8e0,(FMassArchetypeHandle *)&this->field_0x60);
  local_648 = &local_558;
  pFVar4 = ::FName::FName(local_648,"TestRelationA");
  local_640 = *pFVar4;
  TVar5 = FRelationTestBase::MakeRelationType((FName)local_550);
  local_838.ReferenceController =
       (TReferenceControllerBase<1> *)
       Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__
                 ((TNotNullBase<UScriptStruct_*> *)TVar5.Val);
  local_830 = local_548;
  pTVar6 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_830,(UScriptStruct **)&local_838);
  FRelationTestBase::CreateRelationTypeDescription(&local_3d8,pTVar6->Val);
  pFVar7 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&local_3d8.RoleTraits,0);
  pFVar7->DestructionPolicy = Destroy;
  pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_828 = (UScriptStruct *)FMassEntityManager::GetTypeManager(pFVar8);
  FTypeManager::RegisterType((FTypeManager *)local_828,(FRelationTypeTraits *)local_810);
  local_820 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar10 = &local_328;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar10->HashCache = 0;
    pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_328);
  FMassEntityManager::CreateEntity
            (local_820,(FMassArchetypeHandle *)(local_848 + 8),
             (FMassArchetypeSharedFragmentValues *)local_8e0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
  local_818 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar10 = &local_2b8;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar10->HashCache = 0;
    pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_2b8);
  FMassEntityManager::CreateEntity
            (local_818,(FMassArchetypeHandle *)local_858,
             (FMassArchetypeSharedFragmentValues *)local_8e0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
  local_810._8_8_ = *(undefined8 *)&this->field_0xa8;
  local_908.Index = local_858._0_4_;
  local_908.SerialNumber = local_858._4_4_;
  FRelationManager::CreateRelationInstance
            ((FRelationManager *)local_810._8_8_,(FTypeHandle)local_5a8,
             (FMassEntityHandle)local_810._0_8_,(FMassEntityHandle)local_848._8_8_);
  local_810._24_8_ =
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_810._16_8_ = local_848._8_8_;
  FMassEntityManager::DestroyEntity
            ((FMassEntityManager *)local_810._24_8_,(FMassEntityHandle)local_848._8_8_);
  pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar8);
  local_7e0.Data = (FScriptContainerElement *)FAITestBase::GetTestRunner((FAITestBase *)this);
  local_7e8 = (FWeakObjectPtr)
              TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_7f0.Index = local_858._0_4_;
  local_7f0.SerialNumber = local_858._4_4_;
  local_8f8 = FMassEntityManager::IsEntityValid
                        ((FMassEntityManager *)local_7e8,(FMassEntityHandle)local_858._0_8_);
  local_8f8 = !local_8f8;
  ::FString::FString(&local_628,"The object entity is destroyed along with the relation source");
  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)local_7e0.Data,&local_628,local_8f8);
  local_8f7 = !bVar2;
  local_8e0._53_3_ = 0;
  local_8e0[0x34] = local_8f7;
  ::FString::~FString(&local_628);
  if (local_8f7 == '\0') {
    ::FString::~FString(&local_3d8.DebugInFix);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                *)&local_3d8.RegisterObserversDelegate);
    local_7d8 = &local_5a0;
    pFVar4 = ::FName::FName(local_7d8,"TestRelationB");
    local_7d0 = *pFVar4;
    TVar5 = FRelationTestBase::MakeRelationType((FName)local_598);
    local_7c8 = (FWeakObjectPtr)
                Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__
                          ((TNotNullBase<UScriptStruct_*> *)TVar5.Val);
    local_7c0 = (FWeakObjectPtr)local_590;
    pTVar6 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                       ((TNotNull<UScriptStruct_*> *)local_7c0,(UScriptStruct **)&local_7c8);
    FRelationTestBase::CreateRelationTypeDescription(&local_488,pTVar6->Val);
    pFVar7 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                       (&local_488.RoleTraits,0);
    pFVar7->DestructionPolicy = CleanUp;
    pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_7b8 = (FWeakObjectPtr)FMassEntityManager::GetTypeManager(pFVar8);
    FTypeManager::RegisterType((FTypeManager *)local_7b8,(FRelationTypeTraits *)local_848);
    local_7b0 = (FWeakObjectPtr)
                TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pFVar10 = &local_248;
    for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pFVar10->HashCache = 0;
      pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_248);
    FMassEntityManager::CreateEntity
              ((FMassEntityManager *)local_7b0,(FMassArchetypeHandle *)(local_858 + 8),
               (FMassArchetypeSharedFragmentValues *)local_8e0);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
    local_7a8.Data =
         (FScriptContainerElement *)
         TSharedPtr<FMassEntityManager,1>::operator->
                   ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pFVar10 = &local_1d8;
    for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pFVar10->HashCache = 0;
      pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_1d8);
    FMassEntityManager::CreateEntity
              ((FMassEntityManager *)local_7a8.Data,&local_8a8,
               (FMassArchetypeSharedFragmentValues *)local_8e0);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
    local_7a0 = *(FRelationManager **)&this->field_0xa8;
    local_908 = (FMassEntityHandle)local_8a8.DataPtr.Object;
    FRelationManager::CreateRelationInstance
              (local_7a0,(FTypeHandle)local_588,(FMassEntityHandle)local_848._0_8_,
               (FMassEntityHandle)local_858._8_8_);
    local_790 = (FWeakObjectPtr)
                TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_798.Index = local_858._8_4_;
    local_798.SerialNumber = local_858._12_4_;
    FMassEntityManager::DestroyEntity
              ((FMassEntityManager *)local_790,(FMassEntityHandle)local_858._8_8_);
    pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar8);
    local_778 = (FWeakObjectPtr)FAITestBase::GetTestRunner((FAITestBase *)this);
    local_780 = (FWeakObjectPtr)
                TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_788 = (FMassEntityHandle)local_8a8.DataPtr.Object;
    local_8f5 = FMassEntityManager::IsEntityValid
                          ((FMassEntityManager *)local_780,
                           (FMassEntityHandle)local_8a8.DataPtr.Object);
    ::FString::FString(&local_618,
                       "The object entity is still valid once the relation source gets destroyed");
    bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)local_778,&local_618,local_8f5);
    local_8f4 = !bVar2;
    local_8e0._17_3_ = 0;
    local_8e0[0x10] = local_8f4;
    ::FString::~FString(&local_618);
    if (local_8f4 == '\0') {
      local_760 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_768 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_770 = (FMassEntityHandle)local_8a8.DataPtr.Object;
      local_8f2 = FMassEntityManager::IsEntityValid
                            (local_768,(FMassEntityHandle)local_8a8.DataPtr.Object);
      ::FString::FString(&local_608,
                         "The object entity is still valid once the the relation source gets destroyed"
                        );
      bVar2 = FAutomationTestBase::TestTrue(local_760,&local_608,local_8f2);
      local_8f1 = !bVar2;
      local_8e0._21_3_ = 0;
      local_8e0[0x14] = local_8f1;
      ::FString::~FString(&local_608);
      if (local_8f1 == '\0') {
        local_758 = *(FRelationManager **)&this->field_0xa8;
        FRelationManager::GetRelationSubjects
                  (local_758,&local_638,(FTypeHandle)local_848._0_8_,
                   (FMassEntityHandle)local_8a8.DataPtr.Object);
        local_750 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_860 = local_638.ArrayNum;
        local_8a8.DataPtr.SharedReferenceCount.ReferenceController._0_4_ = local_638.ArrayNum;
        ::FString::FString(&local_5f8,"Expected remaining sources count");
        bVar2 = FTestHelpers::TestEqual<int,int>
                          (&local_5f8,
                           (int)local_8a8.DataPtr.SharedReferenceCount.ReferenceController,0,
                           local_750);
        local_8ef = !bVar2;
        local_8e0._25_3_ = 0;
        local_8e0[0x18] = local_8ef;
        ::FString::~FString(&local_5f8);
        if (local_8ef == '\0') {
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_638);
          ::FString::~FString(&local_488.DebugInFix);
          Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
          ::
          ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                    ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      *)&local_488.RegisterObserversDelegate);
          local_748 = &local_580;
          pFVar4 = ::FName::FName(local_748,"TestRelationC");
          local_740 = *pFVar4;
          TVar5 = FRelationTestBase::MakeRelationType((FName)local_578);
          local_738 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__
                                (TVar5.Val);
          local_730 = &local_570;
          pTVar6 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                             (local_730,&local_738);
          FRelationTestBase::CreateRelationTypeDescription(&local_538,pTVar6->Val);
          pFVar7 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                             (&local_538.RoleTraits,0);
          pFVar7->DestructionPolicy = Splice;
          pFVar7 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                             (&local_538.RoleTraits,1);
          pFVar7->DestructionPolicy = Splice;
          pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_728 = FMassEntityManager::GetTypeManager(pFVar8);
          FTypeManager::RegisterType(local_728,(FRelationTypeTraits *)local_880);
          local_720 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          pFVar10 = &local_168;
          for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
            *(undefined1 *)&pFVar10->HashCache = 0;
            pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
          }
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_168);
          FMassEntityManager::CreateEntity
                    (local_720,(FMassArchetypeHandle *)local_890,
                     (FMassArchetypeSharedFragmentValues *)local_8e0);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
          local_718 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          pFVar10 = &local_f8;
          for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
            *(undefined1 *)&pFVar10->HashCache = 0;
            pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
          }
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
          FMassEntityManager::CreateEntity
                    (local_718,(FMassArchetypeHandle *)(local_880 + 8),
                     (FMassArchetypeSharedFragmentValues *)local_8e0);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
          local_710 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          pFVar10 = &local_88;
          for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
            *(undefined1 *)&pFVar10->HashCache = 0;
            pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
          }
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
          FMassEntityManager::CreateEntity
                    (local_710,(FMassArchetypeHandle *)(local_890 + 8),
                     (FMassArchetypeSharedFragmentValues *)local_8e0);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
          local_708 = *(FRelationManager **)&this->field_0xa8;
          local_908.Index = local_890._8_4_;
          local_908.SerialNumber = local_890._12_4_;
          FRelationManager::CreateRelationInstance
                    (local_708,(FTypeHandle)local_568,(FMassEntityHandle)local_880._0_8_,
                     (FMassEntityHandle)local_890._0_8_);
          local_700 = *(FRelationManager **)&this->field_0xa8;
          local_908.Index = local_890._0_4_;
          local_908.SerialNumber = local_890._4_4_;
          FRelationManager::CreateRelationInstance
                    (local_700,(FTypeHandle)local_560,(FMassEntityHandle)local_880._0_8_,
                     (FMassEntityHandle)local_880._8_8_);
          local_6f0 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_6f8.Index = local_890._0_4_;
          local_6f8.SerialNumber = local_890._4_4_;
          FMassEntityManager::DestroyEntity(local_6f0,(FMassEntityHandle)local_890._0_8_);
          pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          FMassEntityManager::FlushCommands(pFVar8);
          local_6d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_6e0 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_6e8.Index = local_890._8_4_;
          local_6e8.SerialNumber = local_890._12_4_;
          local_8ed = FMassEntityManager::IsEntityValid
                                (local_6e0,(FMassEntityHandle)local_890._8_8_);
          ::FString::FString(&local_5e8,
                             "The object entity is still valid once the relation source gets destroyed"
                            );
          bVar2 = FAutomationTestBase::TestTrue(local_6d8,&local_5e8,local_8ed);
          local_8ec = !bVar2;
          local_8e0._29_3_ = 0;
          local_8e0[0x1c] = local_8ec;
          ::FString::~FString(&local_5e8);
          if (local_8ec == '\0') {
            local_6c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_6c8 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_6d0.Index = local_880._8_4_;
            local_6d0.SerialNumber = local_880._12_4_;
            local_8ea = FMassEntityManager::IsEntityValid
                                  (local_6c8,(FMassEntityHandle)local_880._8_8_);
            ::FString::FString(&local_5d8,
                               "The leaf entity is still valid once the relation source gets destroyed"
                              );
            bVar2 = FAutomationTestBase::TestTrue(local_6c0,&local_5d8,local_8ea);
            local_8e9 = !bVar2;
            local_8e0._33_3_ = 0;
            local_8e0[0x20] = local_8e9;
            ::FString::~FString(&local_5d8);
            if (local_8e9 == '\0') {
              local_6b8 = *(FRelationManager **)&this->field_0xa8;
              FRelationManager::GetRelationSubjects
                        (local_6b8,&local_870,(FTypeHandle)local_880._0_8_,
                         (FMassEntityHandle)local_890._8_8_);
              local_6b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_8a8.DataPtr.SharedReferenceCount.ReferenceController._4_4_ = local_870.ArrayNum;
              local_898 = local_870.ArrayNum;
              ::FString::FString(&local_5c8,"Expected remaining sources count");
              bVar2 = FTestHelpers::TestEqual<int,int>(&local_5c8,local_898,1,local_6b0);
              local_8e7 = !bVar2;
              local_8e0._37_3_ = 0;
              local_8e0[0x24] = local_8e7;
              ::FString::~FString(&local_5c8);
              if (local_8e7 == '\0') {
                local_660 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_6a8.Index = local_880._8_4_;
                local_6a8.SerialNumber = local_880._12_4_;
                local_6a0.Index = local_880._8_4_;
                local_6a0.SerialNumber = local_880._12_4_;
                local_658.Index = local_880._8_4_;
                local_658.SerialNumber = local_880._12_4_;
                local_8e0._44_4_ = 1;
                local_8e0._41_3_ = 0;
                local_8e0[0x28] = 0 < local_870.ArrayNum;
                if (local_8e0._40_4_ == 0) {
                  local_698 = 0;
                  local_694 = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  local_900 = (longlong)local_870.ArrayNum;
                  local_908.Index = 0;
                  local_908.SerialNumber = 0;
                  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar2) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                }
                local_690 = (UScriptStruct *)local_870.AllocatorInstance.Data;
                local_688 = (UScriptStruct *)local_870.AllocatorInstance.Data;
                local_680 = (UScriptStruct *)local_870.AllocatorInstance.Data;
                local_678 = *(FMassEntityHandle *)local_870.AllocatorInstance.Data;
                local_670 = local_678;
                local_668 = local_678;
                local_650 = local_678;
                ::FString::FString(&local_5b8,"The leaf entity is the child now");
                bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                                  (&local_5b8,local_650,local_658,local_660);
                local_8e5 = !bVar2;
                local_8e0._49_3_ = 0;
                local_8e0[0x30] = local_8e5;
                ::FString::~FString(&local_5b8);
                if (local_8e5 == '\0') {
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_870);
                  ::FString::~FString(&local_538.DebugInFix);
                  Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  ::
                  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                              *)&local_538.RegisterObserversDelegate);
                  local_8e3 = 1;
                  FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
                  local_8f6 = local_8e3;
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_8e4 = 0;
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_870);
                  ::FString::~FString(&local_538.DebugInFix);
                  Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  ::
                  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                              *)&local_538.RegisterObserversDelegate);
                  FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
                  local_8f6 = local_8e4;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_8e6 = 0;
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_870);
                ::FString::~FString(&local_538.DebugInFix);
                Core::Private::Function::
                TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                ::
                ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                          ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                            *)&local_538.RegisterObserversDelegate);
                FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
                local_8f6 = local_8e6;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_8e8 = 0;
              ::FString::~FString(&local_538.DebugInFix);
              Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ::
              ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                        ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                          *)&local_538.RegisterObserversDelegate);
              FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
              local_8f6 = local_8e8;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_8eb = 0;
            ::FString::~FString(&local_538.DebugInFix);
            Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ::
            ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                        *)&local_538.RegisterObserversDelegate);
            FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
            local_8f6 = local_8eb;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_8ee = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_638);
          ::FString::~FString(&local_488.DebugInFix);
          Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
          ::
          ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                    ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      *)&local_488.RegisterObserversDelegate);
          FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
          local_8f6 = local_8ee;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_8f0 = 0;
        ::FString::~FString(&local_488.DebugInFix);
        Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
        ::
        ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                    *)&local_488.RegisterObserversDelegate);
        FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
        local_8f6 = local_8f0;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_8f3 = 0;
      ::FString::~FString(&local_488.DebugInFix);
      Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
      ::
      ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  *)&local_488.RegisterObserversDelegate);
      FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
      local_8f6 = local_8f3;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_8f6 = 0;
    ::FString::~FString(&local_3d8.DebugInFix);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                *)&local_3d8.RegisterObserversDelegate);
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_8e0);
  }
  return (bool)local_8f6;
}

