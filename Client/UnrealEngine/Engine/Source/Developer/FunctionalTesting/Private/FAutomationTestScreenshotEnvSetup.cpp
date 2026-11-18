// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 4

// FAutomationTestScreenshotEnvSetup @ 148c7f010

FAutomationTestScreenshotEnvSetup * __thiscall
FAutomationTestScreenshotEnvSetup::FAutomationTestScreenshotEnvSetup
          (FAutomationTestScreenshotEnvSetup *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"r.AntiAliasingMethod");
  (this->DefaultFeature_AntiAliasing).bModified = false;
  ::FString::FString(&(this->DefaultFeature_AntiAliasing).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.DefaultFeature.AutoExposure");
  (this->DefaultFeature_AutoExposure).bModified = false;
  ::FString::FString(&(this->DefaultFeature_AutoExposure).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.DefaultFeature.MotionBlur");
  (this->DefaultFeature_MotionBlur).bModified = false;
  ::FString::FString(&(this->DefaultFeature_MotionBlur).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.MotionBlurQuality");
  (this->MotionBlurQuality).bModified = false;
  ::FString::FString(&(this->MotionBlurQuality).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.SSR.Quality");
  (this->ScreenSpaceReflectionQuality).bModified = false;
  ::FString::FString(&(this->ScreenSpaceReflectionQuality).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.EyeAdaptationQuality");
  (this->EyeAdaptationQuality).bModified = false;
  ::FString::FString(&(this->EyeAdaptationQuality).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.ContactShadows");
  (this->ContactShadows).bModified = false;
  ::FString::FString(&(this->ContactShadows).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.TonemapperGamma");
  (this->TonemapperGamma).bModified = false;
  ::FString::FString(&(this->TonemapperGamma).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.Tonemapper.Sharpen");
  (this->TonemapperSharpen).bModified = false;
  ::FString::FString(&(this->TonemapperSharpen).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.ScreenPercentage");
  (this->ScreenPercentage).bModified = false;
  ::FString::FString(&(this->ScreenPercentage).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.DynamicRes.TestScreenPercentage");
  (this->DynamicResTestScreenPercentage).bModified = false;
  ::FString::FString(&(this->DynamicResTestScreenPercentage).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.DynamicRes.OperationMode");
  (this->DynamicResOperationMode).bModified = false;
  ::FString::FString(&(this->DynamicResOperationMode).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = ::FString::FString(&local_18,L"r.SecondaryScreenPercentage.GameViewport");
  (this->SecondaryScreenPercentage).bModified = false;
  ::FString::FString(&(this->SecondaryScreenPercentage).ConsoleVariableName,pFVar2);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutomationViewExtension).Object = (FAutomationViewExtension *)0x0;
  (this->AutomationViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FAutomationTestScreenshotEnvSetup @ 148c80cf0

void __thiscall
FAutomationTestScreenshotEnvSetup::~FAutomationTestScreenshotEnvSetup
          (FAutomationTestScreenshotEnvSetup *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AutomationViewExtension).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SecondaryScreenPercentage).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicResOperationMode).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicResTestScreenPercentage).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenPercentage).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TonemapperSharpen).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TonemapperGamma).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContactShadows).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EyeAdaptationQuality).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenSpaceReflectionQuality).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MotionBlurQuality).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFeature_MotionBlur).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFeature_AutoExposure).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFeature_AntiAliasing).ConsoleVariableName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Restore @ 148c98c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAutomationTestScreenshotEnvSetup::Restore(FAutomationTestScreenshotEnvSetup *this)

{
  code *pcVar1;
  IConsoleVariable *pIVar2;
  bool bVar3;
  UGameViewportClient *pUVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  undefined1 local_48 [16];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                       ,0x141,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FConsoleVariableSwapperTempl<int>::Restore(&this->DefaultFeature_AntiAliasing);
  FConsoleVariableSwapperTempl<int>::Restore(&this->DefaultFeature_AutoExposure);
  FConsoleVariableSwapperTempl<int>::Restore(&this->DefaultFeature_MotionBlur);
  FConsoleVariableSwapperTempl<int>::Restore(&this->MotionBlurQuality);
  FConsoleVariableSwapperTempl<int>::Restore(&this->ScreenSpaceReflectionQuality);
  FConsoleVariableSwapperTempl<int>::Restore(&this->EyeAdaptationQuality);
  FConsoleVariableSwapperTempl<int>::Restore(&this->ContactShadows);
  FConsoleVariableSwapperTempl<float>::Restore(&this->TonemapperGamma);
  FConsoleVariableSwapperTempl<float>::Restore(&this->ScreenPercentage);
  FConsoleVariableSwapperTempl<int>::Restore(&this->DynamicResOperationMode);
  FConsoleVariableSwapperTempl<int>::Restore(&this->DynamicResTestScreenPercentage);
  FConsoleVariableSwapperTempl<float>::Restore(&this->SecondaryScreenPercentage);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AutomationViewExtension != (TSharedPtr<FAutomationViewExtension,1> *)&local_38) {
    (this->AutomationViewExtension).Object = (FAutomationViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AutomationViewExtension).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pUVar4 = AutomationCommon::GetAnyGameViewportClient();
  if (pUVar4 != (UGameViewportClient *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar8 = IConsoleManager::Get();
        ICVar = (IConsoleVariable *)
                (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.BufferVisualizationTarget",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (ICVar != (IConsoleVariable *)0x0) {
      plVar9 = &pUVar4->_padding_;
      lVar5 = (**(code **)(pUVar4->_padding_ + 0x38))(plVar9);
      if (lVar5 != 0) {
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x38))(plVar9);
        *puVar6 = *puVar6 & 0xfbffffff;
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x38))(plVar9);
        pIVar2 = ICVar;
        local_28 = 0xe000000;
        *puVar6 = *puVar6 | 8;
        lVar5 = *(longlong *)pIVar2;
        local_24 = 0;
        local_20 = 0;
        local_18 = 0;
        local_14 = 0xf000000;
        local_10 = 0x1000000;
        uVar7 = (**(code **)(lVar5 + 0xa8))(pIVar2,local_48,&local_28);
        (**(code **)(lVar5 + 0xb0))(pIVar2,L"",uVar7);
      }
    }
  }
  return;
}

// Setup @ 148c9c220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FAutomationTestScreenshotEnvSetup::Setup
          (FAutomationTestScreenshotEnvSetup *this,UWorld *param_1,
          FAutomationScreenshotOptions *param_2)

{
  EComparisonTolerance EVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationViewExtension *this_00;
  UGameViewportClient *pUVar4;
  longlong lVar5;
  uint *puVar6;
  FString *pFVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  uint uVar10;
  wchar_t *pwVar11;
  FAutoRegister local_res8 [8];
  FName local_res10;
  UWorld *local_res18;
  TRawPtrProxy<FAutomationViewExtension> local_res20;
  FAutomationViewExtension *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FAutomationViewExtension,1> local_58;
  TSharedRef<ISceneViewExtension,1> local_48;
  FString local_38;
  
  bVar3 = IsInGameThread();
  pwVar11 = L"";
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                       ,0x104,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_res18);
  if (param_2->bDisableNoisyRenderingFeatures == false) {
    if (param_2->bDisableTonemapping == false) goto LAB_148c9c30f;
  }
  else {
    FConsoleVariableSwapperTempl<int>::Set(&this->DefaultFeature_AntiAliasing,0);
    FConsoleVariableSwapperTempl<int>::Set(&this->DefaultFeature_AutoExposure,0);
    FConsoleVariableSwapperTempl<int>::Set(&this->DefaultFeature_MotionBlur,0);
    FConsoleVariableSwapperTempl<int>::Set(&this->MotionBlurQuality,0);
    FConsoleVariableSwapperTempl<int>::Set(&this->ScreenSpaceReflectionQuality,0);
    FConsoleVariableSwapperTempl<int>::Set(&this->ContactShadows,0);
  }
  FConsoleVariableSwapperTempl<int>::Set(&this->EyeAdaptationQuality,0);
  FConsoleVariableSwapperTempl<float>::Set(&this->TonemapperGamma,__real_400ccccd);
LAB_148c9c30f:
  FConsoleVariableSwapperTempl<int>::Set(&this->DynamicResTestScreenPercentage,0);
  FConsoleVariableSwapperTempl<int>::Set(&this->DynamicResOperationMode,0);
  UEngine::EmitDynamicResolutionEvent(GEngine,EndFrame);
  UEngine::EmitDynamicResolutionEvent(GEngine,BeginFrame);
  FConsoleVariableSwapperTempl<float>::Set(&this->ScreenPercentage,__real_42c80000);
  FConsoleVariableSwapperTempl<float>::Set(&this->SecondaryScreenPercentage,__real_42c80000);
  EVar1 = param_2->Tolerance;
  if (EVar1 == Zero) {
    (param_2->ToleranceAmount).Red = '\0';
    (param_2->ToleranceAmount).Green = '\0';
    (param_2->ToleranceAmount).Blue = '\0';
    (param_2->ToleranceAmount).Alpha = '\0';
    (param_2->ToleranceAmount).MinBrightness = '\0';
    (param_2->ToleranceAmount).MaxBrightness = 0xff;
  }
  else if (EVar1 == Low) {
    (param_2->ToleranceAmount).Red = '\x10';
    (param_2->ToleranceAmount).Green = '\x10';
    (param_2->ToleranceAmount).Blue = '\x10';
    (param_2->ToleranceAmount).Alpha = '\x10';
    (param_2->ToleranceAmount).MinBrightness = '\x10';
    (param_2->ToleranceAmount).MaxBrightness = 0xf0;
  }
  else if (EVar1 == Medium) {
    (param_2->ToleranceAmount).Red = '\x18';
    (param_2->ToleranceAmount).Green = '\x18';
    (param_2->ToleranceAmount).Blue = '\x18';
    (param_2->ToleranceAmount).Alpha = '\x18';
    (param_2->ToleranceAmount).MinBrightness = '\x18';
    (param_2->ToleranceAmount).MaxBrightness = 0xdc;
  }
  else if (EVar1 == High) {
    (param_2->ToleranceAmount).Red = ' ';
    (param_2->ToleranceAmount).Green = ' ';
    (param_2->ToleranceAmount).Blue = ' ';
    (param_2->ToleranceAmount).Alpha = ' ';
    (param_2->ToleranceAmount).MinBrightness = '@';
    (param_2->ToleranceAmount).MaxBrightness = '`';
  }
  this_00 = ::operator_new(0x88);
  if (this_00 == (FAutomationViewExtension *)0x0) {
    this_00 = (FAutomationViewExtension *)0x0;
  }
  else {
    FWorldSceneViewExtension::FWorldSceneViewExtension
              ((FWorldSceneViewExtension *)this_00,local_res8,param_1);
    this_00->_padding_ = (longlong)&___7FAutomationViewExtension__6B_;
    FAutomationScreenshotOptions::FAutomationScreenshotOptions(&this_00->Options,param_2);
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_res20.Object = this_00;
  TSharedRef<FAutomationViewExtension,1>::
  TSharedRef<FAutomationViewExtension,1><FAutomationViewExtension>(&local_58,&local_res20);
  local_48.Object = (ISceneViewExtension *)local_58.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  local_68 = local_58.Object;
  local_60.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->AutomationViewExtension != (TSharedPtr<FAutomationViewExtension,1> *)&local_68) {
    (this->AutomationViewExtension).Object = local_58.Object;
    local_68 = (FAutomationViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AutomationViewExtension).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pUVar4 = AutomationCommon::GetAnyGameViewportClient();
  if (pUVar4 != (UGameViewportClient *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar8 = IConsoleManager::Get();
        ICVar = (IConsoleVariable *)
                (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.BufferVisualizationTarget");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (ICVar != (IConsoleVariable *)0x0) {
      plVar9 = &pUVar4->_padding_;
      lVar5 = (**(code **)(pUVar4->_padding_ + 0x38))(plVar9);
      if (lVar5 != 0) {
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x38))(plVar9);
        *puVar6 = -(uint)(param_2->VisualizeBuffer != (FName)0x0) & 0x4000000 | *puVar6 & 0xfbffffff
        ;
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x38))(plVar9);
        uVar10 = 0;
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        if (param_2->VisualizeBuffer == (FName)0x0) {
          uVar10 = 8;
        }
        *puVar6 = uVar10 | *puVar6 & 0xfffffff7;
        pFVar7 = ::FName::ToString(&param_2->VisualizeBuffer,&local_38);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        IConsoleVariable::Set<wchar_t_const_*>(ICVar,pwVar11,ECVF_SetByCode,local_res10);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

