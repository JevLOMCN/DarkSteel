// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 3

// StartupModule @ 14ead93a0

void __thiscall FNNEDenoiserModule::StartupModule(FNNEDenoiserModule *this)

{
  <lambda_1> local_res18 [2];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FNNEDenoiserModule::StartupModule_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res18);
  return;
}

// ShutdownModule @ 14ead93d0

void __thiscall FNNEDenoiserModule::ShutdownModule(FNNEDenoiserModule *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ViewExtension != (TSharedPtr<UE::NNEDenoiser::Private::FViewExtension,1> *)&local_18) {
    (this->ViewExtension).Object = (FViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewExtension).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// operator() @ 14eae96c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FNNEDenoiserModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FViewExtension *this_00;
  FViewExtension **ppFVar4;
  FAutoRegister local_res10 [8];
  TRawPtrProxy<UE::NNEDenoiser::Private::FViewExtension> local_res18;
  FViewExtension *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<UE::NNEDenoiser::Private::FViewExtension,1> local_28;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  bVar3 = IsRayTracingAllowed();
  if (!bVar3) {
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      return;
    }
    return;
  }
  this_00 = ::operator_new(0x80);
  if (this_00 == (FViewExtension *)0x0) {
    this_00 = (FViewExtension *)0x0;
  }
  else {
    FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00,local_res10)
    ;
    this_00->_padding_ = (longlong)&___7FViewExtension_Private_NNEDenoiser_UE__6B_;
    (this_00->DenoiserToSwap).Ptr = (IPathTracingDenoiser *)0x0;
    (this_00->SpatialTemporalDenoiserToSwap).Ptr = (IPathTracingSpatialTemporalDenoiser *)0x0;
    (this_00->RuntimeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->RuntimeName).Data.ArrayNum = 0;
    (this_00->RuntimeName).Data.ArrayMax = 0;
    (this_00->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AssetName).Data.ArrayNum = 0;
    (this_00->AssetName).Data.ArrayMax = 0;
    (this_00->TemporalAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TemporalAssetName).Data.ArrayNum = 0;
    (this_00->TemporalAssetName).Data.ArrayMax = 0;
    this_00->bIsActive = false;
    this_00->TimeoutCounter = 0;
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
  local_res18.Object = this_00;
  TSharedRef<UE::NNEDenoiser::Private::FViewExtension,1>::
  TSharedRef<UE::NNEDenoiser::Private::FViewExtension,1><UE::NNEDenoiser::Private::FViewExtension>
            (&local_28,&local_res18);
  local_18.Object = (ISceneViewExtension *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  local_38 = local_28.Object;
  local_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar1 = *(longlong *)this;
  ppFVar4 = (FViewExtension **)(lVar1 + 8);
  if (ppFVar4 != &local_38) {
    *ppFVar4 = local_28.Object;
    local_38 = (FViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x10),&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

