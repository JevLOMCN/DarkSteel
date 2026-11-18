// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fd650

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassSystemRequirementTest::FGameSubsystemAccessAPI::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  UMassTestLocalPlayerSubsystem *pUVar1;
  UMassTestGameInstanceSubsystem *pUVar2;
  
  pUVar1 = FMassExecutionContext::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>(param_1);
  **(undefined8 **)this = pUVar1;
  pUVar2 = FMassExecutionContext::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 8) = pUVar2;
  pUVar1 = FMassExecutionContext::GetSubsystem<UMassTestLocalPlayerSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 0x10) = pUVar1;
  pUVar2 = FMassExecutionContext::GetSubsystem<UMassTestGameInstanceSubsystem,void>(param_1);
  **(undefined8 **)((longlong)this + 0x18) = pUVar2;
  return;
}

// InstantTest @ 147166010

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
FMassSystemRequirementTest::FGameSubsystemAccessAPI::InstantTest(FGameSubsystemAccessAPI *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  undefined1 auStack_8a8 [32];
  char local_888;
  undefined1 local_887;
  char local_886;
  undefined1 local_885;
  char local_884;
  undefined1 local_883;
  char local_882;
  undefined1 local_881;
  char local_880;
  undefined1 local_87f;
  char local_87e;
  undefined1 local_87d;
  char local_87c;
  undefined1 local_87b;
  char local_87a;
  undefined1 local_879;
  undefined1 local_878;
  UWorld *local_870;
  uint local_868;
  uint local_864;
  uint local_860;
  uint local_85c;
  uint local_858;
  uint local_854;
  uint local_850;
  uint local_84c;
  UMassTestLocalPlayerSubsystem *local_848;
  UMassTestGameInstanceSubsystem *local_840;
  ULocalPlayer *local_838;
  UMassTestLocalPlayerSubsystem *local_830;
  UGameInstance *local_828;
  UMassTestGameInstanceSubsystem *local_820;
  UMassTestLocalPlayerSubsystem *local_818;
  UMassTestLocalPlayerSubsystem *local_810;
  UMassTestGameInstanceSubsystem *local_808;
  UMassTestGameInstanceSubsystem *local_800;
  FAutomationTestBase *local_7f8;
  FAutomationTestBase *local_7f0;
  undefined1 *local_7e8;
  undefined1 *local_7e0;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *local_7d8;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *local_7d0;
  <lambda_1> *local_7c8;
  FMassEntityQuery *local_7c0;
  FAutomationTestBase *local_7b8;
  UMassTestLocalPlayerSubsystem *local_7b0;
  FAutomationTestBase *local_7a8;
  UMassTestLocalPlayerSubsystem *local_7a0;
  FAutomationTestBase *local_798;
  UMassTestLocalPlayerSubsystem *local_790;
  FAutomationTestBase *local_788;
  UMassTestLocalPlayerSubsystem *local_780;
  FAutomationTestBase *local_778;
  UMassTestGameInstanceSubsystem *local_770;
  FAutomationTestBase *local_768;
  UMassTestGameInstanceSubsystem *local_760;
  FAutomationTestBase *local_758;
  UMassTestGameInstanceSubsystem *local_750;
  FAutomationTestBase *local_748;
  UMassTestGameInstanceSubsystem *local_740;
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
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_870 = FAITestHelpers::GetWorld();
  if ((local_870 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassSystemRequirementTest.cpp"
                         ,0x6c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_838 = UWorld::GetFirstLocalPlayerFromController(local_870);
  if (local_838 == (ULocalPlayer *)0x0) {
    local_830 = (UMassTestLocalPlayerSubsystem *)0x0;
  }
  else {
    local_830 = ULocalPlayer::GetSubsystem<UMassTestLocalPlayerSubsystem>(local_838);
  }
  local_848 = local_830;
  local_828 = UWorld::GetGameInstance(local_870);
  if (local_828 == (UGameInstance *)0x0) {
    local_820 = (UMassTestGameInstanceSubsystem *)0x0;
  }
  else {
    local_820 = UGameInstance::GetSubsystem<UMassTestGameInstanceSubsystem>(local_828);
  }
  local_840 = local_820;
  bVar2 = UWorld::IsGameWorld(local_870);
  if (bVar2) {
    FMassSubsystemAccess::FMassSubsystemAccess(&local_638,local_870);
    FMassSubsystemAccess::FMassSubsystemAccess(&local_698,local_870);
    local_7e8 = &this->field_0x308;
    FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestLocalPlayerSubsystem>
              ((FMassSubsystemRequirements *)local_7e8,ReadWrite);
    local_7e0 = &this->field_0x308;
    FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestGameInstanceSubsystem>
              ((FMassSubsystemRequirements *)local_7e0,ReadWrite);
    local_7d8 = FMassSubsystemRequirements::GetRequiredMutableSubsystems
                          ((FMassSubsystemRequirements *)&this->field_0x308);
    local_7d0 = FMassSubsystemRequirements::GetRequiredConstSubsystems
                          ((FMassSubsystemRequirements *)&this->field_0x308);
    FMassSubsystemAccess::SetSubsystemRequirementBits(&local_638,local_7d0,local_7d8);
    FMassSubsystemAccess::SetSubsystemRequirements
              (&local_698,(FMassSubsystemRequirements *)&this->field_0x308);
    local_818 = (UMassTestLocalPlayerSubsystem *)0x0;
    local_808 = (UMassTestGameInstanceSubsystem *)0x0;
    local_810 = (UMassTestLocalPlayerSubsystem *)0x0;
    local_800 = (UMassTestGameInstanceSubsystem *)0x0;
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassExecutionContext::FMassExecutionContext(&local_5a8,pFVar4,0.0,true);
    local_7c0 = (FMassEntityQuery *)&this->field_0x90;
    local_6b8.AccessLocalPlayerSubsystem = &local_818;
    local_6b8.AccessGameInstanceSubsystem = &local_808;
    local_6b8.ConstAccessLocalPlayerSubsystem = &local_810;
    local_6b8.ConstAccessGameInstanceSubsystem = &local_800;
    local_7c8 = &local_6b8;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassSystemRequirementTest::FGameSubsystemAccessAPI::InstantTest_::__l2::<lambda_1>_>
              (&local_5d8,local_7c8);
    FMassEntityQuery::ForEachEntityChunk(local_7c0,&local_5a8,&local_5d8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_5d8);
    local_7b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_7b0 = local_818;
    ::FString::FString(&local_738,
                       L"LocalPlayerSubsystem: Mutable Subsystem fetched is expected to be the same as the Actual"
                      );
    bVar2 = FTestHelpers::TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem>
                      (&local_738,local_848,local_7b0,local_7b8);
    local_888 = !bVar2;
    local_84c = (uint)(byte)local_888;
    ::FString::~FString(&local_738);
    if (local_888 == '\0') {
      local_7a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_7a0 = local_810;
      ::FString::FString(&local_728,
                         L"LocalPlayerSubsystem: Const Subsystem fetched is expected to be the same as the Actual"
                        );
      bVar2 = FTestHelpers::
              TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem_const_>
                        (&local_728,local_848,local_7a0,local_7a8);
      local_886 = !bVar2;
      local_868 = (uint)(byte)local_886;
      ::FString::~FString(&local_728);
      if (local_886 == '\0') {
        local_798 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_790 = FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>
                              (&local_638);
        ::FString::FString(&local_718,
                           L"LocalPlayerSubsystem: Subsystem fetched via bits-requirements is expected to be the same as the Actual"
                          );
        bVar2 = FTestHelpers::
                TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem_const_>
                          (&local_718,local_848,local_790,local_798);
        local_884 = !bVar2;
        local_864 = (uint)(byte)local_884;
        ::FString::~FString(&local_718);
        if (local_884 == '\0') {
          local_788 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_780 = FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>
                                (&local_698);
          ::FString::FString(&local_708,
                             L"LocalPlayerSubsystem: Subsystem fetched via class-requirements is expected to be the same as the Actual"
                            );
          bVar2 = FTestHelpers::
                  TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem_const_>
                            (&local_708,local_848,local_780,local_788);
          local_882 = !bVar2;
          local_860 = (uint)(byte)local_882;
          ::FString::~FString(&local_708);
          if (local_882 == '\0') {
            local_778 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_770 = local_808;
            ::FString::FString(&local_6f8,
                               L"GameInstanceSubsystem: Mutable Subsystem fetched is expected to be the same as the Actual"
                              );
            bVar2 = FTestHelpers::
                    TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem>
                              (&local_6f8,local_840,local_770,local_778);
            local_880 = !bVar2;
            local_85c = (uint)(byte)local_880;
            ::FString::~FString(&local_6f8);
            if (local_880 == '\0') {
              local_768 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_760 = local_800;
              ::FString::FString(&local_6e8,
                                 L"GameInstanceSubsystem: Const Subsystem fetched is expected to be the same as the Actual"
                                );
              bVar2 = FTestHelpers::
                      TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem_const_>
                                (&local_6e8,local_840,local_760,local_768);
              local_87e = !bVar2;
              local_858 = (uint)(byte)local_87e;
              ::FString::~FString(&local_6e8);
              if (local_87e == '\0') {
                local_758 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_750 = FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>
                                      (&local_638);
                ::FString::FString(&local_6d8,
                                   L"GameInstanceSubsystem: Subsystem fetched via bits-requirements is expected to be the same as the Actual"
                                  );
                bVar2 = FTestHelpers::
                        TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem_const_>
                                  (&local_6d8,local_840,local_750,local_758);
                local_87c = !bVar2;
                local_854 = (uint)(byte)local_87c;
                ::FString::~FString(&local_6d8);
                if (local_87c == '\0') {
                  local_748 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_740 = FMassSubsystemAccess::
                              GetSubsystem<UMassTestGameInstanceSubsystem,void>(&local_698);
                  ::FString::FString(&local_6c8,
                                     L"GameInstanceSubsystem: Subsystem fetched via class-requirements is expected to be the same as the Actual"
                                    );
                  bVar2 = FTestHelpers::
                          TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem_const_>
                                    (&local_6c8,local_840,local_740,local_748);
                  local_87a = !bVar2;
                  local_850 = (uint)(byte)local_87a;
                  ::FString::~FString(&local_6c8);
                  if (local_87a == '\0') {
                    local_878 = 1;
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
                    local_887 = local_878;
                  }
                  else {
                    UE::AITestSuite::ConditionallyBreakOnTestFail();
                    local_879 = 0;
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
                    local_887 = local_879;
                  }
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_87b = 0;
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
                  local_887 = local_87b;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_87d = 0;
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
                local_887 = local_87d;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_87f = 0;
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
              local_887 = local_87f;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_881 = 0;
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
            local_887 = local_881;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_883 = 0;
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
          local_887 = local_883;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_885 = 0;
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
        local_887 = local_885;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_887 = 0;
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
  }
  else {
    local_7f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar2 = FAutomationTestBase::TestNull
                      (local_7f8,
                       L"LocalPlayerSubsystem subclass instance is expected to be NULL in non-game worlds"
                       ,local_848);
    if (bVar2) {
      local_7f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      bVar2 = FAutomationTestBase::TestNull
                        (local_7f0,
                         L"GameInstanceSubsystem subclass instance is expected to be NULL in non-game worlds"
                         ,local_840);
      if (bVar2) {
        local_887 = 1;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_887 = 0;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_887 = 0;
    }
  }
  return (bool)local_887;
}

