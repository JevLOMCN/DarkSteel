// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 7

// FAutomationScreenshotTaker @ 148c7ee70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAutomationScreenshotTaker * __thiscall
FAutomationScreenshotTaker::FAutomationScreenshotTaker
          (FAutomationScreenshotTaker *this,UWorld *param_1,FString *param_2,FString *param_3,
          FAutomationScreenshotOptions *param_4)

{
  UGameViewportClient *this_00;
  FSceneViewport *this_01;
  TIntPoint<int>_u_0 *pTVar1;
  undefined8 local_res8;
  
  this->_padding_ = (longlong)&___7FAutomationScreenshotTaker__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  (this->Context).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Data.ArrayNum = 0;
  (this->Context).Data.ArrayMax = 0;
  ::FString::FString(&this->ScreenShotName,param_2);
  ::FString::FString(&this->Notes,param_3);
  FAutomationScreenshotOptions::FAutomationScreenshotOptions(&this->Options,param_4);
  FAutomationTestScreenshotEnvSetup::FAutomationTestScreenshotEnvSetup(&this->EnvSetup);
  this->bNeedsViewportSizeRestore = false;
  this->bDeleteQueued = false;
  FAutomationTestScreenshotEnvSetup::Setup(&this->EnvSetup,param_1,&this->Options);
  this_00 = AutomationCommon::GetAnyGameViewportClient();
  if (this_00 != (UGameViewportClient *)0x0) {
    this_01 = UGameViewportClient::GetGameViewport(this_00);
    if (this_01 != (FSceneViewport *)0x0) {
      pTVar1 = (TIntPoint<int>_u_0 *)
               (**(code **)(this_01->_padding_ + 0x10))(&this_01->_padding_,&local_res8);
      (this->ViewportRestoreSize).field0_0x0 = *pTVar1;
      UAutomationBlueprintFunctionLibrary::GetAutomationScreenshotSize
                ((FAutomationScreenshotOptions *)&local_res8);
      FSceneViewport::SetViewportSize(this_01,(undefined4)local_res8,local_res8._4_4_);
      this->bNeedsViewportSizeRestore = true;
    }
  }
  FlushRenderingCommands();
  TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FAutomationScreenshotTaker>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)&UGameViewportClient::ScreenshotCapturedDelegate,
             (FAutomationScreenshotTaker *)&local_res8,(pmf_28015a23)this);
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FAutomationScreenshotTaker>
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelRemovedFromWorld,(FAutomationScreenshotTaker *)&local_res8,
             (pmf_0659fe5e)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAutomationScreenshotTaker>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FScreenshotRequest::ScreenshotProcessedDelegate,
             (FAutomationScreenshotTaker *)&local_res8,(pmf_0bb4dd5a)this);
  return this;
}

// ~FAutomationScreenshotTaker @ 148c80c00

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
FAutomationScreenshotTaker::~FAutomationScreenshotTaker(FAutomationScreenshotTaker *this)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  UGameViewportClient *this_00;
  FSceneViewport *this_01;
  
  this->_padding_ = (longlong)&___7FAutomationScreenshotTaker__6B_;
  pFVar2 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->OnScreenshotCompared,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FScreenshotRequest::ScreenshotProcessedDelegate,this);
  this_00 = AutomationCommon::GetAnyGameViewportClient();
  if (this_00 != (UGameViewportClient *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UGameViewportClient::ScreenshotCapturedDelegate,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  if ((this->bNeedsViewportSizeRestore != false) && (this_00 != (UGameViewportClient *)0x0)) {
    this_01 = UGameViewportClient::GetGameViewport(this_00);
    FSceneViewport::SetViewportSize
              (this_01,(this->ViewportRestoreSize).field0_0x0._s_0.X,
               (this->ViewportRestoreSize).field0_0x0._s_0.Y);
  }
  FAutomationTestScreenshotEnvSetup::Restore(&this->EnvSetup);
  pFVar2 = FAutomationTestFramework::Get();
  FAutomationTestFramework::NotifyScreenshotTakenAndCompared(pFVar2);
  FAutomationTestScreenshotEnvSetup::~FAutomationTestScreenshotEnvSetup(&this->EnvSetup);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenShotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Context).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// DeleteSelfNextFrame @ 148c8cec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAutomationScreenshotTaker::DeleteSelfNextFrame(FAutomationScreenshotTaker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined ***pppuVar3;
  undefined1 auStackY_88 [32];
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  FAutomationScreenshotTaker *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->bDeleteQueued == false) {
    this_00 = FTSTicker::GetCoreTicker();
    local_38 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__DeleteSelfNextFrame_FAutomationScreenshotTaker__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAutomationScreenshotTaker::DeleteSelfNextFrame'::__l5::<lambda_1>,bool,float>
                  ::Call;
    local_30 = this;
    FTSTicker::AddTicker
              (this_00,&local_58,L"ScreenshotCleanup",__real_3dcccccd,
               (TUniqueFunction<bool___cdecl(float)> *)local_48);
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    this->bDeleteQueued = true;
  }
  return;
}

// GrabScreenShot @ 148c92e90

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
FAutomationScreenshotTaker::GrabScreenShot
          (FAutomationScreenshotTaker *this,int param_1,int param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FString *pFVar6;
  FAutomationTestFramework *pFVar7;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar8;
  FString local_198;
  FReadAccessScope local_188;
  FAutomationScreenshotData local_168;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                         ,0x1b8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar4) {
    pUVar5 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    pFVar6 = AutomationCommon::GetWorldContext(&local_198,pUVar5);
    UAutomationBlueprintFunctionLibrary::BuildScreenshotData
              (&local_168,pFVar6,&this->ScreenShotName,param_1,param_2);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_168.ToleranceRed = (this->Options).ToleranceAmount.Red;
    local_168.MaximumLocalError = (this->Options).MaximumLocalError;
    local_168.MaximumGlobalError = (this->Options).MaximumGlobalError;
    local_168.ToleranceGreen = (this->Options).ToleranceAmount.Green;
    local_168.ToleranceBlue = (this->Options).ToleranceAmount.Blue;
    local_168.ToleranceAlpha = (this->Options).ToleranceAmount.Alpha;
    local_168.ToleranceMinBrightness = (this->Options).ToleranceAmount.MinBrightness;
    local_168.ToleranceMaxBrightness = (this->Options).ToleranceAmount.MaxBrightness;
    local_168.bIgnoreAntiAliasing = (this->Options).bIgnoreAntiAliasing;
    local_168.bIgnoreColors = (this->Options).bIgnoreColors;
    iVar1 = (this->Notes).Data.ArrayNum;
    local_168.bHasComparisonRules = true;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              (&local_168.Notes,(wchar_t *)(this->Notes).Data.AllocatorInstance.Data,iVar8);
    pFVar7 = FAutomationTestFramework::Get();
    this_00 = FAutomationTestFramework::OnScreenshotCaptured(pFVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_188);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&this_00->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_3,&local_168);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    if (4 < (byte)AutomationFunctionLibrary._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAutomationScreenshotTaker::GrabScreenShot(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
    }
    if (GIsAutomationTesting != false) {
      pFVar7 = FAutomationTestFramework::Get();
      TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FAutomationScreenshotTaker>
                ((TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                  *)&pFVar7->OnScreenshotCompared,(FAutomationScreenshotTaker *)&stack0x00000008,
                 (pmf_f5251232)this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FScreenshotRequest::ScreenshotProcessedDelegate,this);
      FAutomationScreenshotData::~FAutomationScreenshotData(&local_168);
      return;
    }
    FAutomationScreenshotData::~FAutomationScreenshotData(&local_168);
  }
  DeleteSelfNextFrame(this);
  return;
}

// OnComparisonComplete @ 148c956a0

void __thiscall
FAutomationScreenshotTaker::OnComparisonComplete
          (FAutomationScreenshotTaker *this,FAutomationScreenshotCompareResults *param_1)

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
  DeleteSelfNextFrame(this);
  return;
}

// OnScreenshotProcessed @ 148c95d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationScreenshotTaker::OnScreenshotProcessed(FAutomationScreenshotTaker *this)

{
  if (4 < (byte)AutomationFunctionLibrary._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAutomationScreenshotTaker::OnScreenshotProcessed(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&AutomationFunctionLibrary);
  }
  DeleteSelfNextFrame(this);
  return;
}

// WorldDestroyed @ 148ca1310

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
FAutomationScreenshotTaker::WorldDestroyed
          (FAutomationScreenshotTaker *this,ULevel *param_1,UWorld *param_2)

{
  UWorld *pUVar1;
  
  if ((param_1 == (ULevel *)0x0) &&
     (pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr), param_2 == pUVar1)) {
    (this->World).WeakPtr = (FWeakObjectPtr)0x0;
    DeleteSelfNextFrame(this);
  }
  return;
}

