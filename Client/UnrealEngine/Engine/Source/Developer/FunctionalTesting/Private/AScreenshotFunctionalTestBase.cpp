// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 20

// StaticClass @ 148c74610

UClass * __cdecl AScreenshotFunctionalTestBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTestBase",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton,
               StaticRegisterNativesAScreenshotFunctionalTestBase,0x4c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AScreenshotFunctionalTestBase>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton;
}

// AScreenshotFunctionalTestBase @ 148c7eb40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AScreenshotFunctionalTestBase * __thiscall
AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
          (AScreenshotFunctionalTestBase *this,FVTableHelper *param_1)

{
  AFunctionalTest::AFunctionalTest((AFunctionalTest *)this,param_1);
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  (this->Notes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notes).Data.ArrayNum = 0;
  (this->Notes).Data.ArrayMax = 0;
  (this->ScreenshotCamera).field0_0x0.DebugPtr = (UCameraComponent *)0x0;
  (this->ScreenshotOptions).ViewSettings.field0_0x0.DebugPtr = (UAutomationViewSettings *)0x0;
  (this->ScreenshotOptions).Resolution.field0_0x0._s_0.X = 0.0;
  (this->ScreenshotOptions).Resolution.field0_0x0._s_0.Y = 0.0;
  (this->ScreenshotOptions).bOverride_OverrideTimeTo = false;
  (this->ScreenshotOptions).OverrideTimeTo = 0.0;
  (this->ScreenshotOptions).Delay = 0.2;
  (this->ScreenshotOptions).FrameDelay = 5;
  (this->ScreenshotOptions).bDisableNoisyRenderingFeatures = true;
  (this->ScreenshotOptions).bDisableTonemapping = true;
  (this->ScreenshotOptions).VisualizeBuffer.ComparisonIndex = 0;
  (this->ScreenshotOptions).VisualizeBuffer.Number = 0;
  (this->ScreenshotOptions).Tolerance = Zero;
  (this->ScreenshotOptions).ToleranceAmount.Red = '\0';
  (this->ScreenshotOptions).ToleranceAmount.Green = '\0';
  (this->ScreenshotOptions).ToleranceAmount.Blue = '\0';
  (this->ScreenshotOptions).ToleranceAmount.Alpha = '\0';
  (this->ScreenshotOptions).ToleranceAmount.MinBrightness = '\0';
  (this->ScreenshotOptions).ToleranceAmount.MaxBrightness = 0xff;
  (this->ScreenshotOptions).MaximumLocalError = 0.1;
  (this->ScreenshotOptions).MaximumGlobalError = 0.02;
  (this->ScreenshotOptions).bIgnoreAntiAliasing = true;
  (this->ScreenshotOptions).bIgnoreColors = false;
  (this->ScreenshotOptions).bAllowEmulatingSplitscreen = true;
  (this->ScreenshotEnvSetup).Object = (FAutomationTestScreenshotEnvSetup *)0x0;
  (this->ScreenshotEnvSetup).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// AScreenshotFunctionalTestBase @ 148c7ec10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AScreenshotFunctionalTestBase * __thiscall
AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
          (AScreenshotFunctionalTestBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UCameraComponent *this_00;
  FAutomationTestScreenshotEnvSetup *this_01;
  FName FVar5;
  FName local_res8;
  
  AFunctionalTest::AFunctionalTest((AFunctionalTest *)this,param_1);
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  (this->Notes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notes).Data.ArrayNum = 0;
  (this->Notes).Data.ArrayMax = 0;
  (this->ScreenshotCamera).field0_0x0.DebugPtr = (UCameraComponent *)0x0;
  (this->ScreenshotOptions).ViewSettings.field0_0x0.DebugPtr = (UAutomationViewSettings *)0x0;
  (this->ScreenshotOptions).Resolution.field0_0x0._s_0.X = 0.0;
  (this->ScreenshotOptions).Resolution.field0_0x0._s_0.Y = 0.0;
  (this->ScreenshotOptions).Delay = 0.2;
  (this->ScreenshotOptions).FrameDelay = 5;
  (this->ScreenshotOptions).bOverride_OverrideTimeTo = false;
  (this->ScreenshotOptions).OverrideTimeTo = 0.0;
  (this->ScreenshotOptions).bDisableNoisyRenderingFeatures = true;
  (this->ScreenshotOptions).bDisableTonemapping = true;
  (this->ScreenshotOptions).VisualizeBuffer.ComparisonIndex = 0;
  (this->ScreenshotOptions).VisualizeBuffer.Number = 0;
  (this->ScreenshotOptions).Tolerance = Low;
  (this->ScreenshotOptions).ToleranceAmount.Red = '\x10';
  (this->ScreenshotOptions).ToleranceAmount.Green = '\x10';
  (this->ScreenshotOptions).ToleranceAmount.Blue = '\x10';
  (this->ScreenshotOptions).MaximumLocalError = 0.1;
  (this->ScreenshotOptions).MaximumGlobalError = 0.02;
  (this->ScreenshotOptions).bIgnoreAntiAliasing = true;
  (this->ScreenshotOptions).bIgnoreColors = false;
  (this->ScreenshotOptions).bAllowEmulatingSplitscreen = true;
  (this->ScreenshotOptions).ToleranceAmount.Alpha = '\x10';
  (this->ScreenshotOptions).ToleranceAmount.MinBrightness = '\x10';
  (this->ScreenshotOptions).ToleranceAmount.MaxBrightness = 0xf0;
  (this->ScreenshotEnvSetup).Object = (FAutomationTestScreenshotEnvSetup *)0x0;
  (this->ScreenshotEnvSetup).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bNeedsViewSettingsRestore = false;
  this->bNeedsViewportRestore = false;
  this->bScreenshotCompleted = false;
  pFVar3 = ::FName::FName(&local_res8,L"Camera");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UCameraComponent_NoRegister();
  this_00 = (UCameraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UCameraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ScreenshotCamera).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  ((this->ScreenshotCamera).field0_0x0.DebugPtr)->bLockToHmd = '\0';
  this_01 = ::operator_new(0x1b8);
  if (this_01 != (FAutomationTestScreenshotEnvSetup *)0x0) {
    FVar5 = (FName)FAutomationTestScreenshotEnvSetup::FAutomationTestScreenshotEnvSetup(this_01);
  }
  local_res8 = FVar5;
  TSharedPtr<FAutomationTestScreenshotEnvSetup,1>::operator=<FAutomationTestScreenshotEnvSetup>
            (&this->ScreenshotEnvSetup,
             (TRawPtrProxy<FAutomationTestScreenshotEnvSetup> *)&local_res8);
  return this;
}

// ~AScreenshotFunctionalTestBase @ 148c80b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::~AScreenshotFunctionalTestBase(AScreenshotFunctionalTestBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScreenshotEnvSetup).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  return;
}

// FinishTest @ 148c8efd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::FinishTest
          (AScreenshotFunctionalTestBase *this,EFunctionalTestResult param_1,FString *param_2)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  
  bVar1 = AFunctionalTest::IsReady((AFunctionalTest *)this);
  if ((bVar1) && (this->bScreenshotCompleted == false)) {
    if (((param_1 - Invalid & 0xfc) == 0) && (param_1 != Running)) {
                    /* WARNING: Could not recover jumptable at 0x000148c8f01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x868))(this,param_2);
      return;
    }
  }
  else {
    RestoreViewSettings(this);
    pFVar2 = FAutomationTestFramework::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar2->OnScreenshotTakenAndCompared,this);
    AFunctionalTest::FinishTest((AFunctionalTest *)this,param_1,param_2);
  }
  return;
}

// GetPrivateStaticClass @ 148c91680

UClass * __cdecl AScreenshotFunctionalTestBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTestBase",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton,
               StaticRegisterNativesAScreenshotFunctionalTestBase,0x4c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AScreenshotFunctionalTestBase>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton;
}

// IsReady_Implementation @ 148c94040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AScreenshotFunctionalTestBase::IsReady_Implementation(AScreenshotFunctionalTestBase *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if ((double)(this->ScreenshotOptions).Delay <
      pUVar1->TimeSeconds - (double)*(float *)&this->_padding_) {
    return (this->ScreenshotOptions).FrameDelay <
           (int)(GFrameNumber - *(int *)((longlong)&this->_padding_ + 4));
  }
  return false;
}

// OnComparisonComplete @ 148c955f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::OnComparisonComplete
          (AScreenshotFunctionalTestBase *this,FAutomationScreenshotCompareResults *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FAutomationEvent *pFVar4;
  FAutomationEvent local_48;
  
  pFVar3 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->OnScreenshotCompared,
             this);
  if ((char)this->_padding_ != '\0') {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    if (pFVar1 != (FAutomationTestBase *)0x0) {
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
      pFVar4 = FAutomationScreenshotCompareResults::ToAutomationEvent(param_1,&local_48);
      (*pcVar2)(pFVar1,pFVar4,0,0);
      if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
      }
      if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = FAutomationTestFramework::Get();
    FAutomationTestFramework::NotifyScreenshotTakenAndCompared(pFVar3);
  }
  return;
}

// OnScreenShotCaptured @ 148c95aa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::OnScreenShotCaptured
          (AScreenshotFunctionalTestBase *this,int param_1,int param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UGameViewportClient *pUVar5;
  UWorld *pUVar6;
  FAutomationTestFramework *pFVar7;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar8;
  FString local_1b8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a8;
  FReadAccessScope local_198;
  FAutomationScreenshotData local_178;
  
  pUVar5 = AutomationCommon::GetAnyGameViewportClient();
  if ((pUVar5 == (UGameViewportClient *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameViewportClient",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UGameViewportClient::ScreenshotCapturedDelegate,this);
  if ((char)this->_padding_ != '\0') {
    pUVar6 = AActor::GetWorld((AActor *)this);
    AutomationCommon::GetWorldContext(&local_1b8,pUVar6);
    AutomationCommon::CaptureFrameTrace(&local_1a8,&local_1b8,(FString *)&this->_padding_);
    UAutomationBlueprintFunctionLibrary::BuildScreenshotData
              (&local_178,&local_1b8,(FString *)&this->_padding_,param_1,param_2);
    local_178.ToleranceRed = (this->ScreenshotOptions).ToleranceAmount.Red;
    local_178.MaximumLocalError = (this->ScreenshotOptions).MaximumLocalError;
    local_178.MaximumGlobalError = (this->ScreenshotOptions).MaximumGlobalError;
    local_178.ToleranceGreen = (this->ScreenshotOptions).ToleranceAmount.Green;
    local_178.ToleranceBlue = (this->ScreenshotOptions).ToleranceAmount.Blue;
    local_178.ToleranceAlpha = (this->ScreenshotOptions).ToleranceAmount.Alpha;
    local_178.ToleranceMinBrightness = (this->ScreenshotOptions).ToleranceAmount.MinBrightness;
    local_178.ToleranceMaxBrightness = (this->ScreenshotOptions).ToleranceAmount.MaxBrightness;
    local_178.bIgnoreAntiAliasing = (this->ScreenshotOptions).bIgnoreAntiAliasing;
    local_178.bIgnoreColors = (this->ScreenshotOptions).bIgnoreColors;
    iVar1 = (this->Notes).Data.ArrayNum;
    local_178.bHasComparisonRules = true;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              (&local_178.Notes,(wchar_t *)(this->Notes).Data.AllocatorInstance.Data,iVar8);
    if (GIsAutomationTesting != false) {
      pFVar7 = FAutomationTestFramework::Get();
      TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<AScreenshotFunctionalTestBase>
                ((TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                  *)&pFVar7->OnScreenshotCompared,(AScreenshotFunctionalTestBase *)&stack0x00000008,
                 (pmf_978c1149)this);
    }
    pFVar7 = FAutomationTestFramework::Get();
    this_00 = FAutomationTestFramework::OnScreenshotAndTraceCaptured(pFVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_198);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&this_00->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_3,&local_1a8,&local_178);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_198);
    if (4 < (byte)LogScreenshotFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogScreenshotFunctionalTest);
    }
    FAutomationScreenshotData::~FAutomationScreenshotData(&local_178);
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnScreenshotTakenAndCompared @ 148c95f80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::OnScreenshotTakenAndCompared(AScreenshotFunctionalTestBase *this)

{
  code *pcVar1;
  FString local_18;
  
  this->bScreenshotCompleted = true;
  pcVar1 = *(code **)(this->_padding_ + 0x880);
  ::FString::FString(&local_18,L"");
  (*pcVar1)(this,5,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnTimeout @ 148c96990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTestBase::OnTimeout(AScreenshotFunctionalTestBase *this)

{
  this->bScreenshotCompleted = true;
  AFunctionalTest::OnTimeout((AFunctionalTest *)this);
  return;
}

// PrepareForScreenshot @ 148c96cb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::PrepareForScreenshot(AScreenshotFunctionalTestBase *this)

{
  FAutomationTestScreenshotEnvSetup *this_00;
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  UGameViewportClient *this_01;
  FSceneViewport *this_02;
  UWorld *pUVar5;
  TIntPoint<int>_u_0 *pTVar6;
  UObject *pUVar7;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  FString local_38;
  
  this_01 = AutomationCommon::GetAnyGameViewportClient();
  if (this_01 == (UGameViewportClient *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameViewportClient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x87,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x88,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->bNeedsViewSettingsRestore != false) || (this->bNeedsViewportRestore != false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bNeedsViewSettingsRestore && !bNeedsViewportRestore",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x89,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bScreenshotCompleted = false;
  this_02 = UGameViewportClient::GetGameViewport(this_01);
  if ((this->ScreenshotEnvSetup).Object == (FAutomationTestScreenshotEnvSetup *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ScreenshotEnvSetup).Object;
  pUVar5 = (UWorld *)(**(code **)(this_01->_padding_ + 0x180))(this_01);
  FAutomationTestScreenshotEnvSetup::Setup(this_00,pUVar5,&this->ScreenshotOptions);
  FlushRenderingCommands();
  this->bNeedsViewSettingsRestore = true;
  pTVar6 = (TIntPoint<int>_u_0 *)
           (**(code **)(this_02->_padding_ + 0x10))
                     (&this_02->_padding_,&(((TVector2<double>_u_0 *)local_res18)->_s_0).Y);
  (this->ViewportRestoreSize).field0_0x0 = *pTVar6;
  UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
            ((FAutomationScreenshotOptions *)&((TVector2<double>_u_0 *)local_res18)->_s_0);
  if ((this->ScreenshotOptions).bAllowEmulatingSplitscreen != false) {
    iVar4 = (**(code **)(*(longlong *)CVarEmulateSplitscreenMode._padding_ + 200))();
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        local_res18._0_4_ = local_res18._0_4_ * 2;
      }
      else {
        if (iVar4 != 2) {
          if (iVar4 != 3) {
            local_res8[0] = 0;
            `AScreenshotFunctionalTestBase::PrepareForScreenshot'::__l34::<lambda_1>::operator()
                      (local_res8);
            goto LAB_148c96e6d;
          }
          local_res18._0_4_ = local_res18._0_4_ * 2;
        }
        local_res18._4_4_ = local_res18._4_4_ * 2;
      }
    }
  }
LAB_148c96e6d:
  FSceneViewport::SetViewportSize(this_02,local_res18._0_4_,local_res18._4_4_);
  this->bNeedsViewportRestore = true;
  pTVar2 = GDumpGPUDumpOnScreenshotTest.Ref;
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
        (*pcVar1)();
        return;
      }
    }
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    FlushRenderingCommands();
    ::FString::FString(&local_38,L"r.ResetRenderTargetsExtent");
    pUVar7 = (UObject *)(**(code **)(this_01->_padding_ + 0x180))(this_01);
    UKismetSystemLibrary::ExecuteConsoleCommand(pUVar7,&local_38,(APlayerController *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrepareTest @ 148c97800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTestBase::PrepareTest(AScreenshotFunctionalTestBase *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  UGameViewportClient *pUVar4;
  UObject *pUVar5;
  APlayerController *this_00;
  longlong lVar6;
  ULocalPlayer *pUVar7;
  undefined4 uStack_24;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  AFunctionalTest::PrepareTest((AFunctionalTest *)this);
  pUVar4 = AutomationCommon::GetAnyGameViewportClient();
  if (pUVar4 == (UGameViewportClient *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameViewportClient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x42,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = (UObject *)(**(code **)(pUVar4->_padding_ + 0x180))(pUVar4);
  this_00 = UGameplayStatics::GetPlayerController(pUVar5,0);
  if (this_00 == (APlayerController *)0x0) goto LAB_148c978f9;
  uStack_c = uStack_1c & 0xfffffffe;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  pcVar1 = *(code **)(this_00->_padding_ + 0xef8);
  this_00->bAutoManageActiveCameraTarget = false;
  local_18 = 0;
  uStack_14 = uStack_24;
  uStack_10 = 0x40000000;
  (*pcVar1)(this_00,this,&local_18);
  pTVar2 = CVarEmulateSplitscreenMode.Ref;
  if ((this->ScreenshotOptions).bAllowEmulatingSplitscreen == false) goto LAB_148c978f9;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_148c978d9:
    lVar6 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_148c978d9;
    lVar6 = 4;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) - 1U < 3) {
    pUVar7 = APlayerController::GetLocalPlayer(this_00);
    pUVar7->bEmulateSplitscreen = true;
  }
LAB_148c978f9:
  PrepareForScreenshot(this);
  return;
}

// RequestScreenshot @ 148c98850

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::RequestScreenshot(AScreenshotFunctionalTestBase *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  UGameViewportClient *pUVar4;
  FString local_18;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0xff,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = AutomationCommon::GetAnyGameViewportClient();
  if (pUVar4 == (UGameViewportClient *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameViewportClient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x101,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FlushRenderingCommands();
  TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<AScreenshotFunctionalTestBase>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)&UGameViewportClient::ScreenshotCapturedDelegate,
             (AScreenshotFunctionalTestBase *)&stack0x00000010,(pmf_56846dfc)this);
  pTVar2 = GDumpGPUDumpOnScreenshotTest.Ref;
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
        (*pcVar1)();
        return;
      }
    }
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    FRDGBuilder::BeginResourceDump(&local_18,L"");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RestoreViewSettings @ 148c98e40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::RestoreViewSettings(AScreenshotFunctionalTestBase *this)

{
  code *pcVar1;
  bool bVar2;
  UGameViewportClient *this_00;
  FSceneViewport *pFVar3;
  
  this_00 = AutomationCommon::GetAnyGameViewportClient();
  if (this_00 != (UGameViewportClient *)0x0) {
    pFVar3 = UGameViewportClient::GetGameViewport(this_00);
    if (pFVar3 != (FSceneViewport *)0x0) goto LAB_148c98e8d;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("GameViewportClient && GameViewportClient->GetGameViewport()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                     ,0x124,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_148c98e8d:
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTestBase.cpp"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bNeedsViewSettingsRestore != false) {
    if ((this->ScreenshotEnvSetup).Object == (FAutomationTestScreenshotEnvSetup *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FAutomationTestScreenshotEnvSetup::Restore((this->ScreenshotEnvSetup).Object);
  }
  if (this->bNeedsViewportRestore != false) {
    pFVar3 = UGameViewportClient::GetGameViewport(this_00);
    FSceneViewport::SetViewportSize
              (pFVar3,(this->ViewportRestoreSize).field0_0x0._s_0.X,
               (this->ViewportRestoreSize).field0_0x0._s_0.Y);
  }
  this->bNeedsViewSettingsRestore = false;
  this->bNeedsViewportRestore = false;
  return;
}

// Serialize @ 148c9b640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::Serialize(AScreenshotFunctionalTestBase *this,FArchive *param_1)

{
  int iVar1;
  
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAutomationObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAutomationObjectVersion::GUID);
  if (iVar1 < 1) {
    (this->ScreenshotOptions).bDisableTonemapping = true;
  }
  return;
}

// Serialize @ 148c9b6a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTestBase::Serialize
          (AScreenshotFunctionalTestBase *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FAutomationObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FAutomationObjectVersion::GUID);
  if (iVar1 < 1) {
    (this->ScreenshotOptions).bDisableTonemapping = true;
  }
  return;
}

// StartTest @ 148c9d2d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTestBase::StartTest(AScreenshotFunctionalTestBase *this)

{
  FAutomationTestFramework *pFVar1;
  
  AFunctionalTest::StartTest((AFunctionalTest *)this);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<AScreenshotFunctionalTestBase>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar1->OnScreenshotTakenAndCompared,(AScreenshotFunctionalTestBase *)&stack0x00000008
             ,(pmf_511c41ff)this);
                    /* WARNING: Could not recover jumptable at 0x000148c9d309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8f0))(this);
  return;
}

// StaticRegisterNativesAScreenshotFunctionalTestBase @ 148c9d400

void __cdecl AScreenshotFunctionalTestBase::StaticRegisterNativesAScreenshotFunctionalTestBase(void)

{
  return;
}

// operator() @ 1505392d0

bool __thiscall
`AScreenshotFunctionalTestBase::PrepareForScreenshot'::__l34::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4158101033467248455>);
  if (bVar2) {
    (**(code **)(*(longlong *)CVarEmulateSplitscreenMode._padding_ + 200))();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4158101033467248455>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

