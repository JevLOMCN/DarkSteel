// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fd6c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassSystemRequirementTest::FGenericSubsystemAccessAPI::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  UMassTestWorldSubsystem *pUVar1;
  UMassTestEngineSubsystem *pUVar2;
  
  pUVar1 = FMassExecutionContext::GetMutableSubsystem<UMassTestWorldSubsystem,void>(param_1);
  **(undefined8 **)this = pUVar1;
  pUVar2 = FMassExecutionContext::GetMutableSubsystem<UMassTestEngineSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 8) = pUVar2;
  pUVar1 = FMassExecutionContext::GetSubsystem<UMassTestWorldSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 0x10) = pUVar1;
  pUVar2 = FMassExecutionContext::GetSubsystem<UMassTestEngineSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 0x18) = pUVar2;
  return;
}

// InstantTest @ 147166d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassSystemRequirementTest::FGenericSubsystemAccessAPI::InstantTest
          (FGenericSubsystemAccessAPI *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  undefined1 auStack_888 [32];
  undefined1 local_868;
  char local_867;
  undefined1 local_866;
  char local_865;
  undefined1 local_864;
  char local_863;
  undefined1 local_862;
  char local_861;
  undefined1 local_860;
  undefined1 local_85f;
  char local_85e;
  undefined1 local_85d;
  char local_85c;
  undefined1 local_85b;
  char local_85a;
  undefined1 local_859;
  char local_858;
  undefined1 local_857;
  undefined1 local_856;
  uint local_854;
  uint local_850;
  uint local_84c;
  uint local_848;
  uint local_844;
  uint local_840;
  uint local_83c;
  uint local_838;
  UMassTestWorldSubsystem *local_830;
  UMassTestEngineSubsystem *local_828;
  UWorld *local_820;
  UMassTestWorldSubsystem *local_818;
  UMassTestWorldSubsystem *local_810;
  UMassTestEngineSubsystem *local_808;
  UMassTestEngineSubsystem *local_800;
  undefined1 *local_7f8;
  undefined1 *local_7f0;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *local_7e8;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *local_7e0;
  <lambda_1> *local_7d8;
  FMassEntityQuery *local_7d0;
  FAutomationTestBase *local_7c8;
  FAutomationTestBase *local_7c0;
  UMassTestWorldSubsystem *local_7b8;
  FAutomationTestBase *local_7b0;
  UMassTestWorldSubsystem *local_7a8;
  FAutomationTestBase *local_7a0;
  UMassTestWorldSubsystem *local_798;
  FAutomationTestBase *local_790;
  UMassTestWorldSubsystem *local_788;
  FAutomationTestBase *local_780;
  FAutomationTestBase *local_778;
  UMassTestEngineSubsystem *local_770;
  FAutomationTestBase *local_768;
  UMassTestEngineSubsystem *local_760;
  FAutomationTestBase *local_758;
  UMassTestEngineSubsystem *local_750;
  FAutomationTestBase *local_748;
  UMassTestEngineSubsystem *local_740;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  <lambda_1> local_6b8;
  FMassSubsystemAccess local_698;
  FMassSubsystemAccess local_638;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_5d8;
  FMassExecutionContext local_5a8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_820 = FAITestHelpers::GetWorld();
  if ((local_820 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassSystemRequirementTest.cpp"
                         ,0x35,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FMassSubsystemAccess::FMassSubsystemAccess(&local_638,local_820);
  FMassSubsystemAccess::FMassSubsystemAccess(&local_698,local_820);
  local_7f8 = &this->field_0x308;
  FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestWorldSubsystem>
            ((FMassSubsystemRequirements *)local_7f8,ReadWrite);
  local_7f0 = &this->field_0x308;
  FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestEngineSubsystem>
            ((FMassSubsystemRequirements *)local_7f0,ReadWrite);
  local_7e8 = FMassSubsystemRequirements::GetRequiredMutableSubsystems
                        ((FMassSubsystemRequirements *)&this->field_0x308);
  local_7e0 = FMassSubsystemRequirements::GetRequiredConstSubsystems
                        ((FMassSubsystemRequirements *)&this->field_0x308);
  FMassSubsystemAccess::SetSubsystemRequirementBits(&local_638,local_7e0,local_7e8);
  FMassSubsystemAccess::SetSubsystemRequirements
            (&local_698,(FMassSubsystemRequirements *)&this->field_0x308);
  local_830 = UWorld::GetSubsystem<UMassTestWorldSubsystem>(local_820);
  local_828 = UEngine::GetEngineSubsystem<UMassTestEngineSubsystem>(GEngine);
  local_818 = (UMassTestWorldSubsystem *)0x0;
  local_808 = (UMassTestEngineSubsystem *)0x0;
  local_810 = (UMassTestWorldSubsystem *)0x0;
  local_800 = (UMassTestEngineSubsystem *)0x0;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassExecutionContext::FMassExecutionContext(&local_5a8,pFVar4,0.0,true);
  local_7d0 = (FMassEntityQuery *)&this->field_0x90;
  local_6b8.AccessWorldSubsystem = &local_818;
  local_6b8.AccessEngineSubsystem = &local_808;
  local_6b8.ConstAccessWorldSubsystem = &local_810;
  local_6b8.ConstAccessEngineSubsystem = &local_800;
  local_7d8 = &local_6b8;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_FMassSystemRequirementTest::FGenericSubsystemAccessAPI::InstantTest_::__l2::<lambda_1>_>
            (&local_5d8,local_7d8);
  FMassEntityQuery::ForEachEntityChunk(local_7d0,&local_5a8,&local_5d8);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_5d8);
  local_7c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FAutomationTestBase::TestNotNull<UMassTestWorldSubsystem>
                    (local_7c8,L"WorldSubsystem: Subsystem Actual is expected to be not NULL",
                     local_830);
  if (bVar2) {
    local_7c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_7b8 = local_818;
    ::FString::FString(&local_738,
                       L"WorldSubsystem: Mutable Subsystem fetched is expected to be the same as the Actual"
                      );
    bVar2 = FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem>
                      (&local_738,local_830,local_7b8,local_7c0);
    local_867 = !bVar2;
    local_854 = (uint)(byte)local_867;
    ::FString::~FString(&local_738);
    if (local_867 == '\0') {
      local_7b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_7a8 = local_810;
      ::FString::FString(&local_728,
                         L"WorldSubsystem: Const Subsystem fetched is expected to be the same as the Actual"
                        );
      bVar2 = FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem_const_>
                        (&local_728,local_830,local_7a8,local_7b0);
      local_865 = !bVar2;
      local_850 = (uint)(byte)local_865;
      ::FString::~FString(&local_728);
      if (local_865 == '\0') {
        local_7a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_798 = FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>(&local_638);
        ::FString::FString(&local_718,
                           L"WorldSubsystem: Subsystem fetched via bits-requirements is expected to be the same as the Actual"
                          );
        bVar2 = FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem_const_>
                          (&local_718,local_830,local_798,local_7a0);
        local_863 = !bVar2;
        local_84c = (uint)(byte)local_863;
        ::FString::~FString(&local_718);
        if (local_863 == '\0') {
          local_790 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_788 = FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>(&local_698);
          ::FString::FString(&local_708,
                             L"WorldSubsystem: Subsystem fetched via class-requirements is expected to be the same as the Actual"
                            );
          bVar2 = FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem_const_>
                            (&local_708,local_830,local_788,local_790);
          local_861 = !bVar2;
          local_848 = (uint)(byte)local_861;
          ::FString::~FString(&local_708);
          if (local_861 == '\0') {
            local_780 = FAITestBase::GetTestRunner((FAITestBase *)this);
            bVar2 = FAutomationTestBase::TestNotNull<UMassTestEngineSubsystem>
                              (local_780,
                               L"EngineSubsystem: Subsystem Actual is expected to be not NULL",
                               local_828);
            if (bVar2) {
              local_778 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_770 = local_808;
              ::FString::FString(&local_6f8,
                                 L"EngineSubsystem: Mutable Subsystem fetched is expected to be the same as the Actual"
                                );
              bVar2 = FTestHelpers::TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem>
                                (&local_6f8,local_828,local_770,local_778);
              local_85e = !bVar2;
              local_844 = (uint)(byte)local_85e;
              ::FString::~FString(&local_6f8);
              if (local_85e == '\0') {
                local_768 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_760 = local_800;
                ::FString::FString(&local_6e8,
                                   L"EngineSubsystem: Const Subsystem fetched is expected to be the same as the Actual"
                                  );
                bVar2 = FTestHelpers::
                        TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem_const_>
                                  (&local_6e8,local_828,local_760,local_768);
                local_85c = !bVar2;
                local_840 = (uint)(byte)local_85c;
                ::FString::~FString(&local_6e8);
                if (local_85c == '\0') {
                  local_758 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_750 = FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>
                                        (&local_638);
                  ::FString::FString(&local_6d8,
                                     L"EngineSubsystem: Subsystem fetched via bits-requirements is expected to be the same as the Actual"
                                    );
                  bVar2 = FTestHelpers::
                          TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem_const_>
                                    (&local_6d8,local_828,local_750,local_758);
                  local_85a = !bVar2;
                  local_83c = (uint)(byte)local_85a;
                  ::FString::~FString(&local_6d8);
                  if (local_85a == '\0') {
                    local_748 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_740 = FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>
                                          (&local_698);
                    ::FString::FString(&local_6c8,
                                       L"EngineSubsystem: Subsystem fetched via class-requirements is expected to be the same as the Actual"
                                      );
                    bVar2 = FTestHelpers::
                            TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem_const_>
                                      (&local_6c8,local_828,local_740,local_748);
                    local_858 = !bVar2;
                    local_838 = (uint)(byte)local_858;
                    ::FString::~FString(&local_6c8);
                    if (local_858 == '\0') {
                      local_856 = 1;
                      FMassExecutionContext::~FMassExecutionContext(&local_5a8);
                      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_698.MutableSubsystemsBitSet);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_698.ConstSubsystemsBitSet);
                      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_638.MutableSubsystemsBitSet);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_638.ConstSubsystemsBitSet);
                      local_868 = local_856;
                    }
                    else {
                      UE::AITestSuite::ConditionallyBreakOnTestFail();
                      local_857 = 0;
                      FMassExecutionContext::~FMassExecutionContext(&local_5a8);
                      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_698.MutableSubsystemsBitSet);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_698.ConstSubsystemsBitSet);
                      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_638.MutableSubsystemsBitSet);
                      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      ::
                      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                                (&local_638.ConstSubsystemsBitSet);
                      local_868 = local_857;
                    }
                  }
                  else {
                    UE::AITestSuite::ConditionallyBreakOnTestFail();
                    local_859 = 0;
                    FMassExecutionContext::~FMassExecutionContext(&local_5a8);
                    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                    ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
                    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    ::
                    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                              (&local_698.MutableSubsystemsBitSet);
                    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    ::
                    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                              (&local_698.ConstSubsystemsBitSet);
                    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                    ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
                    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    ::
                    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                              (&local_638.MutableSubsystemsBitSet);
                    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    ::
                    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                              (&local_638.ConstSubsystemsBitSet);
                    local_868 = local_859;
                  }
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_85b = 0;
                  FMassExecutionContext::~FMassExecutionContext(&local_5a8);
                  TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                  ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
                  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  ::
                  ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                            (&local_698.MutableSubsystemsBitSet);
                  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  ::
                  ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                            (&local_698.ConstSubsystemsBitSet);
                  TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                  ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
                  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  ::
                  ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                            (&local_638.MutableSubsystemsBitSet);
                  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  ::
                  ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                            (&local_638.ConstSubsystemsBitSet);
                  local_868 = local_85b;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_85d = 0;
                FMassExecutionContext::~FMassExecutionContext(&local_5a8);
                TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
                TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                ::
                ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                          (&local_698.MutableSubsystemsBitSet);
                TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                ::
                ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                          (&local_698.ConstSubsystemsBitSet);
                TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
                ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
                TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                ::
                ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                          (&local_638.MutableSubsystemsBitSet);
                TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                ::
                ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                          (&local_638.ConstSubsystemsBitSet);
                local_868 = local_85d;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_85f = 0;
              FMassExecutionContext::~FMassExecutionContext(&local_5a8);
              TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
              ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
              TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              ::
              ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        (&local_698.MutableSubsystemsBitSet);
              TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              ::
              ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        (&local_698.ConstSubsystemsBitSet);
              TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
              ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
              TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              ::
              ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        (&local_638.MutableSubsystemsBitSet);
              TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              ::
              ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        (&local_638.ConstSubsystemsBitSet);
              local_868 = local_85f;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_860 = 0;
            FMassExecutionContext::~FMassExecutionContext(&local_5a8);
            TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
            ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
            TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      (&local_698.MutableSubsystemsBitSet);
            TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      (&local_698.ConstSubsystemsBitSet);
            TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
            ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
            TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      (&local_638.MutableSubsystemsBitSet);
            TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
            ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                      (&local_638.ConstSubsystemsBitSet);
            local_868 = local_860;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_862 = 0;
          FMassExecutionContext::~FMassExecutionContext(&local_5a8);
          TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
          ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    (&local_698.MutableSubsystemsBitSet);
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    (&local_698.ConstSubsystemsBitSet);
          TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
          ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    (&local_638.MutableSubsystemsBitSet);
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                    (&local_638.ConstSubsystemsBitSet);
          local_868 = local_862;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_864 = 0;
        FMassExecutionContext::~FMassExecutionContext(&local_5a8);
        TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
        ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
        TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
        ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  (&local_698.MutableSubsystemsBitSet);
        TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
        ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  (&local_698.ConstSubsystemsBitSet);
        TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
        ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
        TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
        ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  (&local_638.MutableSubsystemsBitSet);
        TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
        ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  (&local_638.ConstSubsystemsBitSet);
        local_868 = local_864;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_866 = 0;
      FMassExecutionContext::~FMassExecutionContext(&local_5a8);
      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                (&local_698.MutableSubsystemsBitSet);
      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                (&local_698.ConstSubsystemsBitSet);
      TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
      ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                (&local_638.MutableSubsystemsBitSet);
      TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
      ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                (&local_638.ConstSubsystemsBitSet);
      local_868 = local_866;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_868 = 0;
    FMassExecutionContext::~FMassExecutionContext(&local_5a8);
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
    ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_698.Subsystems);
    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              (&local_698.MutableSubsystemsBitSet);
    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              (&local_698.ConstSubsystemsBitSet);
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::
    ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>(&local_638.Subsystems);
    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              (&local_638.MutableSubsystemsBitSet);
    TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
    ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
              (&local_638.ConstSubsystemsBitSet);
  }
  return (bool)local_868;
}

