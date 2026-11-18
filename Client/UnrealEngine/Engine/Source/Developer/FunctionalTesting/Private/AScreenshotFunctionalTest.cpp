// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 18

// StaticClass @ 148c748e0

UClass * __cdecl AScreenshotFunctionalTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTest",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton,
               StaticRegisterNativesAScreenshotFunctionalTest,0x510,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AScreenshotFunctionalTest>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton;
}

// AScreenshotFunctionalTest @ 148c7ea70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AScreenshotFunctionalTest * __thiscall
AScreenshotFunctionalTest::AScreenshotFunctionalTest
          (AScreenshotFunctionalTest *this,FVTableHelper *param_1)

{
  AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
            ((AScreenshotFunctionalTestBase *)this,param_1);
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
  (this->RequestedVariants).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->RequestedVariants).NumBits = 0;
  (this->RequestedVariants).MaxBits = 0x80;
  return this;
}

// AScreenshotFunctionalTest @ 148c7eab0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AScreenshotFunctionalTest * __thiscall
AScreenshotFunctionalTest::AScreenshotFunctionalTest
          (AScreenshotFunctionalTest *this,FObjectInitializer *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  
  AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
            ((AScreenshotFunctionalTestBase *)this,param_1);
  pTVar1 = &this->RequestedVariants;
  this->bCameraCutOnScreenshotPrep = true;
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
  (this->RequestedVariants).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->RequestedVariants).NumBits = 2;
  (this->RequestedVariants).MaxBits = 0x80;
  (pTVar1->AllocatorInstance).InlineData[0] = '\0';
  (pTVar1->AllocatorInstance).InlineData[1] = '\0';
  (pTVar1->AllocatorInstance).InlineData[2] = '\0';
  (pTVar1->AllocatorInstance).InlineData[3] = '\0';
  iVar4 = (this->RequestedVariants).NumBits;
  uVar5 = iVar4 >> 0x1f & 0x1f;
  uVar3 = iVar4 + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar6 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar2 = (uint *)((longlong)FVar6 + (longlong)((int)uVar3 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  this->bVariantQueued = false;
  return this;
}

// ~AScreenshotFunctionalTest @ 148c80b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTest::~AScreenshotFunctionalTest(AScreenshotFunctionalTest *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
  FVar1 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  return;
}

// GetPrivateStaticClass @ 148c915c0

UClass * __cdecl AScreenshotFunctionalTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTest",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton,
               StaticRegisterNativesAScreenshotFunctionalTest,0x510,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AScreenshotFunctionalTest>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton;
}

// IsReady_Implementation @ 148c93f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AScreenshotFunctionalTest::IsReady_Implementation(AScreenshotFunctionalTest *this)

{
  UWorld *pUVar1;
  
  if (this->bVariantQueued == false) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    if ((double)*(float *)&this->_padding_ <
        pUVar1->TimeSeconds - (double)*(float *)&this->_padding_) {
      return *(int *)((longlong)&this->_padding_ + 4) <
             (int)(GFrameNumber - *(int *)((longlong)&this->_padding_ + 4));
    }
  }
  else {
    pUVar1 = AActor::GetWorld((AActor *)this);
    if ((double)*(float *)&this->_padding_ < pUVar1->TimeSeconds - (double)this->VariantTime) {
      return *(int *)((longlong)&this->_padding_ + 4) < (int)(GFrameNumber - this->VariantFrame);
    }
  }
  return false;
}

// OnScreenShotCaptured @ 148c957f0

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
AScreenshotFunctionalTest::OnScreenShotCaptured
          (AScreenshotFunctionalTest *this,int param_1,int param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  UGameViewportClient *pUVar6;
  UWorld *pUVar7;
  FOutputDeviceRedirector *pFVar8;
  FAutomationTestFramework *pFVar9;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar10;
  FString local_1b8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a8;
  FReadAccessScope local_198;
  FAutomationScreenshotData local_178;
  
  pUVar6 = AutomationCommon::GetAnyGameViewportClient();
  if ((pUVar6 == (UGameViewportClient *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameViewportClient",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTest.cpp"
                         ,0x9d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UGameViewportClient::ScreenshotCapturedDelegate,this);
  if ((char)this->_padding_ != '\0') {
    pUVar7 = AActor::GetWorld((AActor *)this);
    AutomationCommon::GetWorldContext(&local_1b8,pUVar7);
    AutomationCommon::CaptureFrameTrace(&local_1a8,&local_1b8,(FString *)&this->_padding_);
    UAutomationBlueprintFunctionLibrary::BuildScreenshotData
              (&local_178,&local_1b8,(FString *)&this->_padding_,param_1,param_2);
    local_178.ToleranceRed = *(uchar *)((longlong)&this->_padding_ + 1);
    local_178.MaximumLocalError = *(float *)&this->_padding_;
    local_178.MaximumGlobalError = *(float *)((longlong)&this->_padding_ + 4);
    local_178.ToleranceGreen = *(uchar *)((longlong)&this->_padding_ + 2);
    local_178.ToleranceBlue = *(uchar *)((longlong)&this->_padding_ + 3);
    local_178.ToleranceAlpha = *(uchar *)((longlong)&this->_padding_ + 4);
    local_178.ToleranceMinBrightness = *(uchar *)((longlong)&this->_padding_ + 5);
    local_178.ToleranceMaxBrightness = *(uchar *)((longlong)&this->_padding_ + 6);
    local_178.bIgnoreAntiAliasing = SUB81(this->_padding_,0);
    local_178.bIgnoreColors = *(bool *)((longlong)&this->_padding_ + 1);
    iVar1 = (int)this->_padding_;
    local_178.bHasComparisonRules = true;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(&local_178.Notes,(wchar_t *)this->_padding_,iVar10);
    ::FString::operator=(&local_178.VariantName,this->CurrentVariantName);
    pUVar4 = GEngine;
    if (this->VariantRestoreCommand != (wchar_t *)0x0) {
      pcVar3 = *(code **)(GEngine->_padding_ + 8);
      pFVar8 = GetGlobalLogSingleton();
      (*pcVar3)(&pUVar4->_padding_,0,this->VariantRestoreCommand,pFVar8);
      this->VariantRestoreCommand = (wchar_t *)0x0;
    }
    if (GIsAutomationTesting != false) {
      pFVar9 = FAutomationTestFramework::Get();
      TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<AScreenshotFunctionalTest>
                ((TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                  *)&pFVar9->OnScreenshotCompared,(AScreenshotFunctionalTest *)&stack0x00000008,
                 (pmf_1644ddf8)this);
    }
    pFVar9 = FAutomationTestFramework::Get();
    this_00 = FAutomationTestFramework::OnScreenshotAndTraceCaptured(pFVar9);
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

// OnScreenshotTakenAndCompared @ 148c95e90

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
AScreenshotFunctionalTest::OnScreenshotTakenAndCompared(AScreenshotFunctionalTest *this)

{
  double dVar1;
  FAutomationTestBase *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  UWorld *pUVar6;
  FString local_18;
  
  pFVar5 = FAutomationTestFramework::Get();
  this_00 = pFVar5->CurrentTest;
  FAutomationTestFramework::Get();
  bVar4 = FAutomationTestFramework::NeedUseLightweightStereoTestVariants();
  if (bVar4) {
    if (this_00 == (FAutomationTestBase *)0x0) goto LAB_148c95f30;
    bVar4 = FAutomationTestBase::HasAnyErrors(this_00);
    if (bVar4) goto LAB_148c95f30;
  }
  bVar4 = SetupNextVariant(this);
  if (bVar4) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,(void *)0x0)
    ;
    AScreenshotFunctionalTestBase::RestoreViewSettings((AScreenshotFunctionalTestBase *)this);
    this->VariantFrame = GFrameNumber;
    pUVar6 = AActor::GetWorld((AActor *)this);
    dVar1 = pUVar6->TimeSeconds;
    this->bVariantQueued = true;
    this->VariantTime = (float)dVar1;
                    /* WARNING: Could not recover jumptable at 0x000148c95f29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x8c8))(this);
    return;
  }
LAB_148c95f30:
  lVar2 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  pcVar3 = *(code **)(lVar2 + 0x880);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(this,5,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PrepareTest @ 148c97790

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTest::PrepareTest(AScreenshotFunctionalTest *this)

{
  APlayerCameraManager *pAVar1;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  
  UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
  AScreenshotFunctionalTestBase::PrepareTest((AScreenshotFunctionalTestBase *)this);
  if (this->bCameraCutOnScreenshotPrep != false) {
    pUVar2 = AActor::GetWorld((AActor *)this);
    pAVar3 = UGameplayStatics::GetPlayerController((UObject *)pUVar2,0);
    if ((pAVar3 != (APlayerController *)0x0) &&
       (pAVar1 = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr,
       pAVar1 != (APlayerCameraManager *)0x0)) {
      (**(code **)(pAVar1->_padding_ + 0x920))();
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)this->_padding_ + 0x668))();
      }
    }
  }
  UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
  return;
}

// ReprepareTest @ 148c97ed0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTest::ReprepareTest(AScreenshotFunctionalTest *this)

{
  double dVar1;
  UWorld *pUVar2;
  
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,(void *)0x0);
  AScreenshotFunctionalTestBase::RestoreViewSettings((AScreenshotFunctionalTestBase *)this);
  this->VariantFrame = GFrameNumber;
  pUVar2 = AActor::GetWorld((AActor *)this);
  dVar1 = pUVar2->TimeSeconds;
  this->bVariantQueued = true;
  this->VariantTime = (float)dVar1;
                    /* WARNING: Could not recover jumptable at 0x000148c97f29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8c8))(this);
  return;
}

// RequestScreenshot @ 148c98530

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTest::RequestScreenshot(AScreenshotFunctionalTest *this)

{
  EShaderPlatform EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FHighResScreenshotConfig *this_00;
  UGameViewportClient *this_01;
  FSceneViewport *pFVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  longlong lVar9;
  TVector2<double>_u_0 local_res10;
  TIntRect<int>_u_0 local_58;
  undefined4 local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  FString local_28;
  
  AScreenshotFunctionalTestBase::RequestScreenshot((AScreenshotFunctionalTestBase *)this);
  EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) &&
     (bVar4 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0), !bVar4)) {
    this_00 = GetHighResScreenshotConfig();
    UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
              ((FAutomationScreenshotOptions *)((longlong)&local_res10 + 8));
    bVar4 = FHighResScreenshotConfig::SetResolution
                      (this_00,local_res10._8_4_,local_res10._12_4_,__real_3f800000);
    if (!bVar4) {
      return;
    }
    this_01 = AutomationCommon::GetAnyGameViewportClient();
    if ((this_01 == (UGameViewportClient *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GameViewportClient",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTest.cpp"
                           ,0x69,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = UGameViewportClient::GetGameViewport(this_01);
    FViewport::TakeHighResScreenShot((FViewport *)&pFVar5->_padding_);
    return;
  }
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_58._8_4_ = 0;
  local_58._12_4_ = 0;
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar6 = IConsoleManager::Get();
      plVar7 = (longlong *)
               (**(code **)((longlong)*pIVar6 + 0xc0))
                         (pIVar6,L"r.ScreenshotTest.EmulateSplitscreenMode",1);
      pTVar8 = (TConsoleVariableData<int> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      CVarEmulateSplitscreenMode = pTVar8;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar8 = CVarEmulateSplitscreenMode;
    if (CVarEmulateSplitscreenMode == (TConsoleVariableData<int> *)0x0) {
      UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
                ((FAutomationScreenshotOptions *)&local_res10._s_0);
    }
    else {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar9 = 0;
      }
      else {
        lVar9 = 4;
      }
      iVar2 = *(int *)((longlong)pTVar8->ShadowedValue + lVar9);
      UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
                ((FAutomationScreenshotOptions *)&local_res10._s_0);
      if (iVar2 == 1) {
        iStack_30 = local_res10._0_4_ * 2;
        local_38 = local_res10._0_4_;
        iStack_2c = local_res10._4_4_;
        uStack_34 = 0;
        local_58._0_4_ = local_res10._0_4_;
        local_58._4_4_ = 0;
        local_58._12_4_ = local_res10._4_4_;
        local_58._8_4_ = iStack_30;
      }
      else if (iVar2 == 2) {
        iStack_44 = local_res10._4_4_;
        iStack_3c = local_res10._4_4_ * 2;
        local_48 = 0;
        iStack_40 = local_res10._0_4_;
        local_58._0_4_ = 0;
        local_58._4_4_ = local_res10._4_4_;
        local_58._8_4_ = local_res10._0_4_;
        local_58._12_4_ = iStack_3c;
      }
      else if (iVar2 == 3) {
        local_58._8_4_ = local_res10._0_4_ * 2;
        local_58._12_4_ = local_res10._4_4_ * 2;
        local_58._0_4_ = local_res10._0_4_;
        local_58._4_4_ = local_res10._4_4_;
      }
    }
    if ((((local_58._8_4_ - local_58._0_4_ != local_res10._0_4_) ||
         (local_58._12_4_ - local_58._4_4_ != local_res10._4_4_)) &&
        ((local_58._8_4_ != local_58._0_4_ || (local_58._12_4_ != local_58._4_4_)))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ViewRect.Size() == Size || ViewRect.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTest.cpp"
                           ,0x93,
                           L"Screenshot view rect should either match the expected automation screenshot size, or be empty (which requests a screenshot of the entire render target)."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::FString::FString(&local_28,L"");
  FScreenshotRequest::RequestScreenshot(&local_28,false,true,false,(TIntRect<int> *)&local_58._s_0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTest @ 148c9ad70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AScreenshotFunctionalTest::RunTest
          (AScreenshotFunctionalTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = &this->RequestedVariants;
  FVar11 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
  iVar3 = (this->RequestedVariants).NumBits;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)pTVar1;
  }
  uVar13 = 0;
  uVar14 = iVar3 + 0x1f;
  FVar10 = FVar11;
  if (uVar14 >> 5 != 0) {
    do {
      if (*(int *)FVar10 != 0) {
        puVar2 = (uint *)((longlong)FVar11 + uVar13 * 4);
        iVar4 = 0;
        bVar6 = *puVar2 != 0;
        if (bVar6) {
          for (; (*puVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar9 = 0x20;
        if (bVar6) {
          iVar9 = iVar4;
        }
        iVar9 = iVar9 + (int)uVar13 * 0x20;
        if (((iVar9 < iVar3) && (iVar9 != -1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!RequestedVariants.Contains(true)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\ScreenshotFunctionalTest.cpp"
                               ,0x2d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        break;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      FVar10 = (ForElementType<unsigned_int>)((longlong)FVar10 + 4);
    } while ((int)uVar12 < (int)(uVar14 >> 5));
  }
  bVar6 = FAutomationTestFramework::NeedPerformStereoTestVariants();
  if (bVar6) {
    bVar6 = FAutomationTestFramework::NeedUseLightweightStereoTestVariants();
    if (((this->RequestedVariants).NumBits < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    FVar11 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)pTVar1;
    }
    uVar14 = *(uint *)FVar11 | 1;
    if (bVar6) {
      uVar14 = *(uint *)FVar11 & 0xfffffffe;
    }
    *(uint *)FVar11 = uVar14;
    if (((this->RequestedVariants).NumBits < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    FVar11 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)pTVar1;
    }
    *(uint *)FVar11 = *(uint *)FVar11 | 2;
  }
  else {
    if (((this->RequestedVariants).NumBits < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    FVar11 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)pTVar1;
    }
    *(uint *)FVar11 = *(uint *)FVar11 | 1;
    if (((this->RequestedVariants).NumBits < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    FVar11 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)pTVar1;
    }
    *(uint *)FVar11 = *(uint *)FVar11 & 0xfffffffd;
  }
  SetupNextVariant(this);
  bVar6 = AFunctionalTest::RunTest((AFunctionalTest *)this,&local_18);
  DestructItems<FString,int>((FString *)0x0,0);
  return bVar6;
}

// Serialize @ 148c9b510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTest::Serialize(AScreenshotFunctionalTest *this,FArchive *param_1)

{
  int iVar1;
  
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAutomationObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAutomationObjectVersion::GUID);
  if (iVar1 < 1) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAutomationObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAutomationObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bCameraCutOnScreenshotPrep = true;
  }
  return;
}

// Serialize @ 148c9b5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AScreenshotFunctionalTest::Serialize
          (AScreenshotFunctionalTest *this,FStructuredArchiveRecord param_1)

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
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FAutomationObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FAutomationObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bCameraCutOnScreenshotPrep = true;
  }
  return;
}

// SetupNextVariant @ 148c9c640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AScreenshotFunctionalTest::SetupNextVariant(AScreenshotFunctionalTest *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  UEngine *pUVar7;
  undefined1 uVar8;
  ForElementType<unsigned_int> FVar9;
  FOutputDeviceRedirector *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  bool bVar16;
  
  FVar15 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
  iVar3 = (this->RequestedVariants).NumBits;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)&this->RequestedVariants;
  }
  uVar11 = 0;
  uVar14 = iVar3 + 0x1f;
  FVar9 = FVar15;
  if (uVar14 >> 5 != 0) {
    do {
      if (*(int *)FVar9 != 0) {
        puVar1 = (uint *)((longlong)FVar15 + uVar11 * 4);
        iVar4 = 0;
        bVar16 = *puVar1 != 0;
        if (bVar16) {
          for (; (*puVar1 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar13 = 0x20;
        if (bVar16) {
          iVar13 = iVar4;
        }
        uVar14 = iVar13 + (int)uVar11 * 0x20;
        if (iVar3 <= (int)uVar14) {
          return false;
        }
        if (uVar14 == 0xffffffff) {
          return false;
        }
        if (((int)uVar14 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        FVar15 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<unsigned_int>)0x0) {
          FVar15 = (ForElementType<unsigned_int>)&this->RequestedVariants;
        }
        puVar1 = (uint *)((longlong)FVar15 +
                         (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
        uVar11 = (ulonglong)_tls_index;
        *puVar1 = *puVar1 & ~(1 << ((byte)uVar14 & 0x1f));
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          VariantInfoArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          VariantInfoArray.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,2,0,&VariantInfoArray.AllocatorInstance,2,&VariantInfoArray.ArrayMax);
          FVar6 = VariantInfoArray.AllocatorInstance;
          *(wchar_t **)VariantInfoArray.AllocatorInstance.Data = L"";
          *(undefined8 *)(FVar6.Data + 8) = 0;
          *(undefined8 *)(FVar6.Data + 0x10) = 0;
          *(wchar_t **)(FVar6.Data + 0x18) = L"ViewRectOffset";
          *(wchar_t **)(FVar6.Data + 0x20) = L"r.Test.ViewRectOffset 5";
          *(wchar_t **)(FVar6.Data + 0x28) = L"r.Test.ViewRectOffset 0";
          atexit(`AScreenshotFunctionalTest::SetupVariant'::__l2::
                 _dynamic_atexit_destructor_for__VariantInfoArray__);
          _Init_thread_footer(&::_TSS0);
        }
        uVar12 = 0;
        if ((int)uVar14 < VariantInfoArray.ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pUVar7 = GEngine;
        pFVar2 = VariantInfoArray.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x18;
        if (*(longlong *)
             (VariantInfoArray.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x18 + 8) != 0) {
          pcVar5 = *(code **)(GEngine->_padding_ + 8);
          pFVar10 = GetGlobalLogSingleton();
          (*pcVar5)(&pUVar7->_padding_,0,*(undefined8 *)(pFVar2 + 8),pFVar10);
        }
        this->CurrentVariantName = *(wchar_t **)pFVar2;
        if (*(wchar_t **)(pFVar2 + 0x10) != (wchar_t *)0x0) {
          this->VariantRestoreCommand = *(wchar_t **)(pFVar2 + 0x10);
        }
        return true;
      }
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar12;
      FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
    } while ((int)uVar12 < (int)(uVar14 >> 5));
  }
  return false;
}

// SetupVariant @ 148c9c8f0

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
AScreenshotFunctionalTest::SetupVariant(AScreenshotFunctionalTest *this,EVariantType param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  UEngine *pUVar4;
  bool bVar5;
  uint uVar6;
  FOutputDeviceRedirector *pFVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,2,0,&VariantInfoArray.AllocatorInstance,2,&VariantInfoArray.ArrayMax);
      FVar3 = VariantInfoArray.AllocatorInstance;
      *(wchar_t **)VariantInfoArray.AllocatorInstance.Data = L"";
      *(undefined8 *)(FVar3.Data + 8) = 0;
      *(undefined8 *)(FVar3.Data + 0x10) = 0;
      *(wchar_t **)(FVar3.Data + 0x18) = L"ViewRectOffset";
      *(wchar_t **)(FVar3.Data + 0x20) = L"r.Test.ViewRectOffset 5";
      *(wchar_t **)(FVar3.Data + 0x28) = L"r.Test.ViewRectOffset 0";
      atexit(`AScreenshotFunctionalTest::SetupVariant'::__l2::
             _dynamic_atexit_destructor_for__VariantInfoArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar6 = 0;
  if ((int)param_1 < VariantInfoArray.ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = GEngine;
  pFVar1 = VariantInfoArray.AllocatorInstance.Data + (longlong)(int)param_1 * 0x18;
  if (*(longlong *)(VariantInfoArray.AllocatorInstance.Data + (longlong)(int)param_1 * 0x18 + 8) !=
      0) {
    pcVar2 = *(code **)(GEngine->_padding_ + 8);
    pFVar7 = GetGlobalLogSingleton();
    (*pcVar2)(&pUVar4->_padding_,0,*(undefined8 *)(pFVar1 + 8),pFVar7);
  }
  this->CurrentVariantName = *(wchar_t **)pFVar1;
  if (*(wchar_t **)(pFVar1 + 0x10) != (wchar_t *)0x0) {
    this->VariantRestoreCommand = *(wchar_t **)(pFVar1 + 0x10);
  }
  return;
}

// StaticRegisterNativesAScreenshotFunctionalTest @ 148c9d3f0

void __cdecl AScreenshotFunctionalTest::StaticRegisterNativesAScreenshotFunctionalTest(void)

{
  return;
}

// Tick @ 148c9e720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AScreenshotFunctionalTest::Tick(AScreenshotFunctionalTest *this,float param_1)

{
  bool bVar1;
  
  if (this->bVariantQueued == false) {
    if ((0.0 < *(float *)&this->_padding_) &&
       (*(float *)&this->_padding_ < *(float *)&this->_padding_)) {
      (**(code **)(this->_padding_ + 0x8e0))();
    }
  }
  else {
    bVar1 = AFunctionalTest::IsReady((AFunctionalTest *)this);
    if (bVar1) {
      this->bVariantQueued = false;
      (**(code **)(this->_padding_ + 0x8d0))(this);
    }
  }
  AFunctionalTest::Tick((AFunctionalTest *)this,param_1);
  return;
}

