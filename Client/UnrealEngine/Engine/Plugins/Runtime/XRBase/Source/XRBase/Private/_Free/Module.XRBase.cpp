// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 406

// CVarSink'' @ 1413bf800

void __cdecl `dynamic_initializer_for_'FHeadMountedDisplayBase::CVarSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = FHeadMountedDisplayBase::CVarSinkHandler;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FHeadMountedDisplayBase::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  FHeadMountedDisplayBase::CVarSink.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  FHeadMountedDisplayBase::CVarSink.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  FHeadMountedDisplayBase::CVarSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(`dynamic_atexit_destructor_for_'FHeadMountedDisplayBase::CVarSink__);
  return;
}

// CustomModelSourceId'' @ 1413bf990

void __cdecl `dynamic_initializer_for_'UXRDeviceVisualizationComponent::CustomModelSourceId__(void)

{
  ::FName::FName(&UXRDeviceVisualizationComponent::CustomModelSourceId,L"Custom");
  return;
}

// FeatureName'' @ 1413bf9b0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// OnXRDeviceOnDisconnectDelegate'' @ 1413bf9d0

void __cdecl
`dynamic_initializer_for_'UHeadMountedDisplayFunctionLibrary::OnXRDeviceOnDisconnectDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UHeadMountedDisplayFunctionLibrary::
         OnXRDeviceOnDisconnectDelegate__);
  return;
}

// OnXRInteractionProfileChanged'' @ 1413bf9f0

void __cdecl
`dynamic_initializer_for_'FXRTrackingSystemDelegates::OnXRInteractionProfileChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRInteractionProfileChanged__
        );
  return;
}

// OnXRPlayAreaChanged'' @ 1413bfa10

void __cdecl `dynamic_initializer_for_'FXRTrackingSystemDelegates::OnXRPlayAreaChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRPlayAreaChanged__);
  return;
}

// OnXRTimedInputActionDelegateMap'' @ 1413bfa30

void __cdecl
`dynamic_initializer_for_'UHeadMountedDisplayFunctionLibrary::OnXRTimedInputActionDelegateMap__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'UHeadMountedDisplayFunctionLibrary::
         OnXRTimedInputActionDelegateMap__);
  return;
}

// OnXRTrackingOriginChanged'' @ 1413bfa50

void __cdecl `dynamic_initializer_for_'FXRTrackingSystemDelegates::OnXRTrackingOriginChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRTrackingOriginChanged__);
  return;
}

// ShaderTypeRegistration'' @ 1413bfa70

void __cdecl `dynamic_initializer_for_'FDisplayMappingPS::ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &FDisplayMappingPS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'FDisplayMappingPS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413bfb70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bfc30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bfcf0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bfdb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__0A__04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bfe70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bff30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413bfff0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 2;
    local_14 = 0;
    local_c = 0x100;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c0180

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__0A___V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 2;
    local_14 = 0;
    local_c = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c0310

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010101;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c04b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__01_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010102;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c0650

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010100;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CEnableHMDCmd'' @ 1413c07f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CEnableHMDCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = EnableHMD;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_EnableHMD",
                    L"Enables or disables the HMD device. Use 1, True, or Yes to enable, 0, False or No to disable."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CEnableHMDCmd,L"vr.bEnableHMD",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CEnableHMDCmd__);
  return;
}

// `dynamic_initializer_for_'CEnableStereoCmd'' @ 1413c0970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CEnableStereoCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = EnableStereo;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_EnableStereo",
                    L"Enables or disables the stereo rendering. Use 1, True, or Yes to enable, 0, False or No to disable."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CEnableStereoCmd,L"vr.bEnableStereo",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CEnableStereoCmd__);
  return;
}

// `dynamic_initializer_for_'CForceTrackingCmd'' @ 1413c0af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CForceTrackingCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ForceTracking;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_ForceTracking",
                    L"If set, head tracking is enabled even when stereo rendering is disabled.\nMay not be supported by all XR implementations."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CForceTrackingCmd,L"vr.HeadTracking.bEnforced",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CForceTrackingCmd__);
  return;
}

// `dynamic_initializer_for_'CHMDResetCmd'' @ 1413c0c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CHMDResetCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HMDReset;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_HMDReset",
                    L"Reset the rotation and position of the head mounted display.\nPass in an optional yaw for the new rotation in degrees."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CHMDResetCmd,L"vr.HeadTracking.Reset",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CHMDResetCmd__);
  return;
}

// `dynamic_initializer_for_'CHMDResetOrientationCmd'' @ 1413c0df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CHMDResetOrientationCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HMDResetOrientation;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_HMDResetOrientation",
                    L"Reset the rotation of the head mounted display.\nPass in an optional yaw for the new rotation in degrees ."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CHMDResetOrientationCmd,L"vr.HeadTracking.ResetOrientation",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CHMDResetOrientationCmd__);
  return;
}

// `dynamic_initializer_for_'CHMDResetPositionCmd'' @ 1413c0f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CHMDResetPositionCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HMDResetPosition;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_HMDResetPosition",
                    L"Reset the position of the head mounted display.");
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CHMDResetPositionCmd,L"vr.HeadTracking.ResetPosition",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CHMDResetPositionCmd__);
  return;
}

// `dynamic_initializer_for_'CHMDStatusCmd'' @ 1413c10f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CHMDStatusCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HMDStatus;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_HMDStatus",
                    L"Reports the current status of the head tracking.");
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CHMDStatusCmd,L"vr.HeadTracking.Status",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CHMDStatusCmd__);
  return;
}

// `dynamic_initializer_for_'CHMDVersionCmd'' @ 1413c1270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CHMDVersionCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HMDVersion;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_HMDVersion",
                    L"Prints version information for the current HMD device.");
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CHMDVersionCmd,L"vr.HMDVersion",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CHMDVersionCmd__);
  return;
}

// `dynamic_initializer_for_'CShowTrackingSensorsCmd'' @ 1413c13f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CShowTrackingSensorsCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ShowTrackingSensors;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_ShowTrackingSensors",
                    L"Show or hide the location and coverage area of the tracking sensors\nUse 1, True, or Yes to enable, 0, False or No to disable."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CShowTrackingSensorsCmd,L"vr.Debug.VisualizeTrackingSensors",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CShowTrackingSensorsCmd__);
  return;
}

// `dynamic_initializer_for_'CSpectatorModeCmd'' @ 1413c1570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CSpectatorModeCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = SpectatorScreenMode;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CVarText_SpectatorScreenMode",
                    L"Changes the look of the spectator if supported by the HMD plugin.\n 0: disable mirroring\n 1: single eye\n 2: stereo pair\nNumbers larger than 2 may be possible and specify HMD plugin-specific variations.\nNegative values are treated the same as 0."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CSpectatorModeCmd,L"vr.SpectatorScreenMode",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CSpectatorModeCmd__);
  return;
}

// `dynamic_initializer_for_'CTrackingOriginCmd'' @ 1413c16f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CTrackingOriginCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TrackingOrigin;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_TrackingOrigin",
                    L"Floor or 0 - tracking origin is at the floor, Eye or 1 - tracking origin is at the eye level."
                   );
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CTrackingOriginCmd,L"vr.TrackingOrigin",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CTrackingOriginCmd__);
  return;
}

// `dynamic_initializer_for_'CVarCameraSmoothing'' @ 1413c1870

void __cdecl _dynamic_initializer_for__CVarCameraSmoothing__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCameraSmoothing,L"xr.CinematicCameraSmoothing",local_res8,
             L"Enable/disable cinematic camera smoothing for head mounted displays. Intended for trailer capture only, and likely to be disorienting in normal play.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCameraSmoothing__);
  return;
}

// `dynamic_initializer_for_'CVarCameraSmoothingPitchDecay'' @ 1413c18c0

void __cdecl _dynamic_initializer_for__CVarCameraSmoothingPitchDecay__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.18;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCameraSmoothingPitchDecay,L"xr.CinematicCameraSmoothing.PitchDecay",local_res8,
             L"When cinematic camera smoothing is enabled, the difference between actual HMD pitch and in-game camera pitch is reduced by a factor of DeltaTime / PitchDecay each frame.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCameraSmoothingPitchDecay__);
  return;
}

// `dynamic_initializer_for_'CVarCameraSmoothingRollDecay'' @ 1413c1910

void __cdecl _dynamic_initializer_for__CVarCameraSmoothingRollDecay__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCameraSmoothingRollDecay,L"xr.CinematicCameraSmoothing.RollDecay",local_res8,
             L"When cinematic camera smoothing is enabled, the difference between actual HMD roll and in-game camera roll is reduced by a factor of DeltaTime / RollDecay each frame.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCameraSmoothingRollDecay__);
  return;
}

// `dynamic_initializer_for_'CVarCameraSmoothingYawDecay'' @ 1413c1960

void __cdecl _dynamic_initializer_for__CVarCameraSmoothingYawDecay__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.18;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCameraSmoothingYawDecay,L"xr.CinematicCameraSmoothing.YawDecay",local_res8,
             L"When cinematic camera smoothing is enabled, the difference between actual HMD yaw and in-game camera yaw is reduced by a factor of DeltaTime / YawDecay each frame.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCameraSmoothingYawDecay__);
  return;
}

// `dynamic_initializer_for_'CVarHiddenAreaMask'' @ 1413c19b0

void __cdecl _dynamic_initializer_for__CVarHiddenAreaMask__(void)

{
  FText *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  int local_res8 [8];
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"HeadMountedDisplay",L"CVarText_HiddenAreaMask",
                    L"Enable or disable hidden area mask\n0: disabled\n1: enabled");
  pFVar1 = FText::ToString(this);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHiddenAreaMask,L"vr.HiddenAreaMask",local_res8,pwVar2,0x60);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__CVarHiddenAreaMask__);
  return;
}

// `dynamic_initializer_for_'CVarMobileDynamicResolution_Dep'' @ 1413c1a40

void __cdecl _dynamic_initializer_for__CVarMobileDynamicResolution_Dep__(void)

{
  FAutoConsoleVariableDeprecated::FAutoConsoleVariableDeprecated
            (&CVarMobileDynamicResolution_Dep,L"xr.MobileLDRDynamicResolution",
             L"xr.MobilePrimaryScalingMode",L"5.7",Ensure,Ensure,L"");
  return;
}

// `dynamic_initializer_for_'CVarMobilePrimaryScalingMode'' @ 1413c1a90

void __cdecl _dynamic_initializer_for__CVarMobilePrimaryScalingMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobilePrimaryScalingMode,L"xr.MobilePrimaryScalingMode",local_res8,
             L"Controls whether mobile primary scaling is redirected to be performed by the HMD runtime when it would otherwise be unsupported.\nIn mobile renderer configurations where normal post-processing is disabled (e.g. Mobile LDR or Mobile HDR + Tonemap Subpass), primary and secondary scaling are normally impossible to perform.\nHowever, when using an HMD, it is possible to redirect primary scaling to the HMD\'s runtime compositor by rendering the upper left of a fixed size render target and submitting the render target to the runtime along with its view rect.\nThis approach only supports spatial upscaling (percentages <=100) and leaves some unused space in the RT, but it allows changing the resolution without reallocating the RT, making it suitable for dynamic resolution.\n0 - Never redirect primary scaling to the HMD runtime\n1 - Redirect primary scaling to the HMD runtime when it would otherwise be unsupported, and dynamic resolution is being used\n2 - Redirect primary scaling to the HMD runtime when it would otherwise be unsupported (not recommended, use xr.SecondaryScreenPercentage.HMDRenderTarget for fixed percentages)\n"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarMobilePrimaryScalingMode__);
  return;
}

// `dynamic_initializer_for_'CVarSecondaryScreenPercentageHMDRenderTarget'' @ 1413c1ae0

void __cdecl _dynamic_initializer_for__CVarSecondaryScreenPercentageHMDRenderTarget__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 100.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSecondaryScreenPercentageHMDRenderTarget,
             L"xr.SecondaryScreenPercentage.HMDRenderTarget",local_res8,
             L"Sets the XR render target texture size as a percentage of recommended texture size. Replaces r.SecondaryScreenPercentage.GameViewport when using an HMD.\nWhen using an HMD, secondary spatial scaling is redirected to be performed the HMD runtime by submitting a larger or smaller render target to the runtime.\nThis saves time by combining secondary scaling with the HMD runtime\'s compositor\'s distortion pass, and allows performing secondary scaling even in configurations where it would otherwise be unsupported (e.g. Mobile LDR or Mobile HDR + Tonemap Subpass).\nThe recommended texture size is the size that will result in no under-sampling in most distorted area of the view when computing the final image to be displayed on the device.\nNote that the recommended texture size will likely be larger than the display panel resolution of the device as the texture is used as input data for the final composition/lens distortion pass provided by the device\'s runtime.\nA value of 100 (default) will use the device\'s recommended texture size.\n"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSecondaryScreenPercentageHMDRenderTarget__);
  return;
}

// `dynamic_initializer_for_'CWorldToMetersCmd'' @ 1413c1b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CWorldToMetersCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  FText local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = WorldToMeters;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_58,L"HeadMountedDisplay",L"CCommandText_WorldToMeters",
                    L"Get or set the current world to meters scale.");
  pFVar3 = FText::ToString(this);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CWorldToMetersCmd,L"vr.WorldToMetersScale",pwVar4,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CWorldToMetersCmd__);
  return;
}

// `dynamic_initializer_for_'CompatExecRegistration'' @ 1413c1cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CompatExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&CompatExecRegistration,CompatExec);
  atexit(_dynamic_atexit_destructor_for__CompatExecRegistration__);
  return;
}

// `dynamic_initializer_for_'LegacySources'' @ 1413c1ce0

void __cdecl XRMotionControllerBase_Impl::_dynamic_initializer_for__LegacySources__(void)

{
  LegacySources[0] = IMotionController::LeftHandSourceId;
  LegacySources[1] = IMotionController::RightHandSourceId;
  ::FName::FName(LegacySources + 2,L"AnyHand");
  ::FName::FName(LegacySources + 3,L"Pad");
  ::FName::FName(LegacySources + 4,L"ExternalCamera");
  ::FName::FName(LegacySources + 5,L"Gun");
  ::FName::FName(LegacySources + 6,L"HMD");
  ::FName::FName(LegacySources + 7,L"Chest");
  ::FName::FName(LegacySources + 8,L"LeftShoulder");
  ::FName::FName(LegacySources + 9,L"RightShoulder");
  ::FName::FName(LegacySources + 10,L"LeftElbow");
  ::FName::FName(LegacySources + 0xb,L"RightElbow");
  ::FName::FName(LegacySources + 0xc,L"Waist");
  ::FName::FName(LegacySources + 0xd,L"LeftKnee");
  ::FName::FName(LegacySources + 0xe,L"RightKnee");
  ::FName::FName(LegacySources + 0xf,L"LeftFoot");
  ::FName::FName(LegacySources + 0x10,L"RightFoot");
  ::FName::FName(LegacySources + 0x11,L"Special");
  return;
}

// `dynamic_initializer_for_'LogHeadMountedDisplayCommand'' @ 1413c1e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHeadMountedDisplayCommand__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogHeadMountedDisplayCommand,L"LogHeadMountedDisplayCommand",
             Display,All);
  atexit(_dynamic_atexit_destructor_for__LogHeadMountedDisplayCommand__);
  return;
}

// `dynamic_initializer_for_'LogMotionTracking'' @ 1413c1e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMotionTracking__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMotionTracking,L"LogMotionTracking",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMotionTracking__);
  return;
}

// `dynamic_initializer_for_'LogUHeadMountedDisplay'' @ 1413c1ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUHeadMountedDisplay__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUHeadMountedDisplay,L"LogUHeadMountedDisplay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUHeadMountedDisplay__);
  return;
}

// `dynamic_initializer_for_'LogXRDeviceVisualizationComponent'' @ 1413c1f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogXRDeviceVisualizationComponent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogXRDeviceVisualizationComponent,
             L"LogXRDeviceVisualizationComponent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogXRDeviceVisualizationComponent__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantXRBase'' @ 1413c1f40

void __cdecl _dynamic_initializer_for__ModuleRegistrantXRBase__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "XRBase";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"XRBase",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FXRBaseModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h__Script_XRBase_3503565961'' @ 1413c1f90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h__Script_XRBase_3503565961__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h__Script_XRBase_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h__Script_XRBase_2522344785'' @ 1413c1fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h__Script_XRBase_2522344785__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h__Script_XRBase_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h__Script_XRBase_3928909756'' @ 1413c2010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h__Script_XRBase_3928909756__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h__Script_XRBase_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRAssetFunctionLibrary_h__Script_XRBase_1670282298'' @ 1413c2050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRAssetFunctionLibrary_h__Script_XRBase_1670282298__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRAssetFunctionLibrary_h__Script_XRBase_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h__Script_XRBase_600198308'' @ 1413c2090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h__Script_XRBase_600198308__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h__Script_XRBase_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h__Script_XRBase_4185851218'' @ 1413c20d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h__Script_XRBase_4185851218__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/XRBase",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h__Script_XRBase_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_XRBase'' @ 1413c2110

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_XRBase__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcbf1c4ba;
  local_res8[0].DeclarationsHash = 0xfa1a9ba4;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_XRBase,L"/Script/XRBase",
             &Z_Registration_Info_UPackage__Script_XRBase,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14cf75270

void * __thiscall FXRBaseModule::_scalar_deleting_destructor_(FXRBaseModule *this,uint param_1)

{
  *this = (FXRBaseModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature @ 14cf752b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_XRBase_DeviceModelLoadedDelegate__DelegateSignature @ 14cf752f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_XRBase_DeviceModelLoadedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_XRBase_DeviceModelLoadedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_XRBase_XRDeviceOnDisconnectDelegate__DelegateSignature @ 14cf75330

UFunction * __cdecl
Z_Construct_UDelegateFunction_XRBase_XRDeviceOnDisconnectDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_XRBase_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_XRBase_XRTimedInputActionDelegate__DelegateSignature @ 14cf75370

UFunction * __cdecl
Z_Construct_UDelegateFunction_XRBase_XRTimedInputActionDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_XRBase_XRTimedInputActionDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_XRBase @ 14cf753b0

UPackage * __cdecl Z_Construct_UPackage__Script_XRBase(void)

{
  if (Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton;
}

// Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary @ 14cf753f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey @ 14cf75430

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD @ 14cf75470

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate @ 14cf754b0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice @ 14cf754f0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice @ 14cf755f0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 14cf75630

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf75640

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD @ 14cf75650

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary @ 14cf75690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent @ 14cf756d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers @ 14cf75710

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer @ 14cf75750

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice @ 14cf75790

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource @ 14cf757d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75810

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent @ 14cf75820

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75860

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice @ 14cf75870

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices @ 14cf758b0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf758f0

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource @ 14cf75900

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTimeWasUsed_SetBit @ 14cf75940

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics::
NewProp_bTimeWasUsed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources @ 14cf75950

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bProvidedLinearVelocity_SetBit @ 14cf75990

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics::
NewProp_bProvidedLinearVelocity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bProvidedAngularVelocity_SetBit @ 14cf759a0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics::
NewProp_bProvidedAngularVelocity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bProvidedLinearAcceleration_SetBit @ 14cf759b0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics::
NewProp_bProvidedLinearAcceleration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf759c0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName @ 14cf759d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount @ 14cf75a10

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2 @ 14cf75a50

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount @ 14cf75a90

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75ad0

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf75ae0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking @ 14cf75af0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile @ 14cf75b30

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75b70

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsTracked_SetBit @ 14cf75b80

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::
NewProp_bIsTracked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary @ 14cf75b90

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasPositionalTracking_SetBit @ 14cf75bd0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::
NewProp_bHasPositionalTracking_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf75be0

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose @ 14cf75bf0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent @ 14cf75c30

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75c70

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bIsTracked_SetBit @ 14cf75c80

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::
NewProp_bIsTracked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bHasPositionalTracking_SetBit @ 14cf75c90

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::
NewProp_bHasPositionalTracking_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice @ 14cf75ca0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf75ce0

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose @ 14cf75cf0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource @ 14cf75d30

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Enable_SetBit @ 14cf75d70

void __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics
::NewProp_Enable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHandTrackingState @ 14cf75d80

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHandTrackingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHandTrackingState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault @ 14cf75dc0

UFunction * __cdecl
Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf75f10

void * __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData @ 14cf75f50

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName @ 14cf75f90

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState @ 14cf75fd0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerState @ 14cf76010

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors @ 14cf76050

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition @ 14cf76090

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity @ 14cf760d0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds @ 14cf76110

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf76150

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect @ 14cf76160

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin @ 14cf761a0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf761e0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform @ 14cf761f0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_IsActive_SetBit @ 14cf76230

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::
NewProp_IsActive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters @ 14cf76300

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform @ 14cf76340

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UXRDeviceVisualizationComponent @ 14cf76380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UXRDeviceVisualizationComponent(void)

{
  if (Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton,
               &Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString @ 14cf763c0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseFocus_SetBit @ 14cf76400

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::
NewProp_bUseFocus_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bHasFocus_SetBit @ 14cf76410

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::
NewProp_bHasFocus_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh @ 14cf76420

UFunction * __cdecl Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState @ 14cf76460

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource @ 14cf764a0

UFunction * __cdecl
Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRenderingIsActive_SetBit @ 14cf764e0

void __cdecl
Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::
NewProp_bRenderingIsActive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale @ 14cf764f0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive @ 14cf76530

UFunction * __cdecl Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewVisualizationState_SetBit @ 14cf76630

void __cdecl
Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::
NewProp_bNewVisualizationState_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSecondaryScreenPercentage @ 14cf76640

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSecondaryScreenPercentage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSecondaryScreenPercentage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive @ 14cf76680

UFunction * __cdecl
Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags @ 14cf766c0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsVisualizationActive_SetBit @ 14cf76700

void __cdecl
Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x650) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf76710

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition @ 14cf76720

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf76760

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UClass_UVRNotificationsComponent @ 14cf76770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVRNotificationsComponent(void)

{
  if (Z_Registration_Info_UClass_UVRNotificationsComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVRNotificationsComponent.OuterSingleton,
               &Z_Construct_UClass_UVRNotificationsComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVRNotificationsComponent.OuterSingleton;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking @ 14cf767b0

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf767f0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected @ 14cf76800

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf76840

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled @ 14cf76850

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf76890

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable @ 14cf768a0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition @ 14cf768e0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes @ 14cf76920

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf76960

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetHMDColorScaleAndBias_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetHMDColorScaleAndBias @ 14cf76970

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetHMDColorScaleAndBias(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetHMDColorScaleAndBias_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode @ 14cf769b0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDrawEyeFirst_SetBit @ 14cf769f0

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
::NewProp_bDrawEyeFirst_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bClearBlack_SetBit @ 14cf76a00

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
::NewProp_bClearBlack_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bUseAlpha_SetBit @ 14cf76a10

void __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
::NewProp_bUseAlpha_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister @ 14cf76a20

UClass * __cdecl Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"AsyncTask_LoadXRDeviceVisComponent",
               &Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton,
               UAsyncTask_LoadXRDeviceVisComponent::
               StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncTask_LoadXRDeviceVisComponent>,
               InternalVTableHelperCtorCaller<UAsyncTask_LoadXRDeviceVisComponent>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.InnerSingleton;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout @ 14cf76ba0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture @ 14cf76be0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin @ 14cf76c20

UFunction * __cdecl Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale @ 14cf76c60

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate @ 14cf76d60

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate @ 14cf76da0

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent @ 14cf76de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent(void)

{
  if (Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton,
               &Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton;
}

// Z_Construct_UClass_UXRAssetFunctionLibrary @ 14cf76e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UXRAssetFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton;
}

// NewProp_bManualAttachment_SetBit @ 14cf76e60

void __cdecl
Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::
NewProp_bManualAttachment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition @ 14cf76e70

UFunction * __cdecl
Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking @ 14cf76eb0

UFunction * __cdecl
Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 14cf76ef0

void __cdecl
Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::
NewProp_bManualAttachment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking @ 14cf76fc0

UFunction * __cdecl
Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UXRLoadingScreenFunctionLibrary @ 14cf77000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UXRLoadingScreenFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.OuterSingleton;
}

// NewProp_bClearBeforeAdd_SetBit @ 14cf77040

void __cdecl
Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics::
NewProp_bClearBeforeAdd_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash @ 14cf77050

UFunction * __cdecl
Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes @ 14cf77150

UFunction * __cdecl
Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen @ 14cf77190

UFunction * __cdecl Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowLoadingMovie_SetBit @ 14cf771d0

void __cdecl
Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::
NewProp_bShowLoadingMovie_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bShowOnSet_SetBit @ 14cf771e0

void __cdecl
Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::
NewProp_bShowOnSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen @ 14cf771f0

UFunction * __cdecl Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen @ 14cf77230

UFunction * __cdecl Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 14cf77270

void __cdecl
Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics
::NewProp_bManualAttachment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync @ 14cf77280

UFunction * __cdecl
Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 14cf772c0

void __cdecl
Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics
::NewProp_bManualAttachment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync @ 14cf772d0

UFunction * __cdecl
Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// AddPass<FXRCopyTexturePass,`AddXRCopyTexturePass'::__l6::<lambda_1>_> @ 14cf77630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<FXRCopyTexturePass,_AddXRCopyTexturePass_::__l6::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FXRCopyTexturePass *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  FRHIUniformBufferLayout *pFVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  code *pcVar11;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar11 = FXRCopyTexturePass::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar11 = (code *)(*pcVar11)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar11 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FXRCopyTexturePass",
                 L"FXRCopyTexturePass",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRCopyTexture.cpp"
                 ,0xb7,0x120,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FXRCopyTexturePass::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1e0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar11 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar11)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar7,Inline);
  pFVar10->_padding_ =
       (longlong)
       &TRDGLambdaPass<FXRCopyTexturePass,`AddXRCopyTexturePass'::`6'::<lambda_1>_>::_vftable_;
  pFVar10[1]._padding_ = (longlong)param_4->SrcTexture;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->SrcRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar10[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->SrcRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar10[1].Name.EventFormat = (wchar_t *)param_4->DstTexture;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->DstRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar10[1].Name.FormattedEventName.Data.ArrayNum =
       (param_4->DstRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar2 = *(FRHIUniformBufferLayout **)&(param_4->Options).bClearBlack;
  pFVar10[1].ParameterStruct.Contents = *(uchar **)&param_4->Options;
  pFVar10[1].ParameterStruct.Layout.Reference = pFVar2;
  uVar3._0_4_ = (param_4->Options).SrcDisplayFormat;
  uVar3._4_4_ = (param_4->Options).DstDisplayFormat;
  pFVar10[1].ParameterStruct.Metadata =
       *(FShaderParametersMetadata **)&(param_4->Options).SrcColorGamut;
  pFVar10[1].Flags = (short)(undefined4)uVar3;
  pFVar10[1].TaskMode = (char)((ulonglong)uVar3 >> 0x10);
  pFVar10[1].Pipeline = (char)((ulonglong)uVar3 >> 0x18);
  pFVar10[1].Handle = (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar3 >> 0x20);
  pFVar10[1].Workload = param_4->ArraySlice;
  uVar4 = *(undefined1 *)((longlong)&param_4->MipLevel + 2);
  uVar5 = *(undefined1 *)((longlong)&param_4->MipLevel + 3);
  pFVar10[1].field9_0x54 = (FRDGPass_u_84)*(undefined2 *)&param_4->MipLevel;
  pFVar10[1].field10_0x56 = (FRDGPass_u_86)uVar4;
  pFVar10[1].field11_0x57 = (FRDGPass_u_87)uVar5;
  *(FXRCopyTexturePass **)&pFVar10[1].CrossPipelineProducer = param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// ConstructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int> @ 14cf788a0

void __cdecl
ConstructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
          (void *param_1,FLayerData *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool *pbVar3;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 + (-0x54 - (longlong)param_2);
    lVar1 = (longlong)param_1 + 0xc;
    pbVar3 = &param_2->bShowBackground;
    do {
      *(undefined8 *)(pbVar3 + lVar2) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                   *)(pbVar3 + lVar2),
                  (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                   *)(pbVar3 + -0x54));
      *(uint *)(lVar1 + 0x44) = *(uint *)(pbVar3 + -4);
      *(bool *)(lVar1 + 0x48) = *pbVar3;
      param_3 = param_3 + -1;
      lVar1 = lVar1 + 0x58;
      pbVar3 = pbVar3 + 0x58;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int> @ 14cf78960

void __cdecl
ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
          (void *param_1,FStereoLayerToRenderTransfer *param_2,int param_3)

{
  FTextureResource *pFVar1;
  FRHITexture *this;
  undefined8 uVar2;
  double dVar3;
  TRefCountPtr<FRHITexture> *pTVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_3 != 0) {
    puVar5 = (uint *)((longlong)param_1 + 8);
    puVar6 = &param_2->Flags;
    do {
      puVar5[-2] = *(uint *)((longlong)puVar5 + (longlong)param_2 + (-8 - (longlong)param_1));
      puVar5[-1] = puVar6[-1];
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      uVar2 = *(undefined8 *)(puVar6 + 4);
      *(double *)(puVar5 + 2) = (((TVector2<double> *)(puVar6 + 2))->field0_0x0)._s_0.X;
      *(undefined8 *)(puVar5 + 4) = uVar2;
      uVar2 = *(undefined8 *)(puVar6 + 8);
      *(double *)(puVar5 + 6) = (((TBox2<double> *)(puVar6 + 6))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(puVar5 + 8) = uVar2;
      uVar2 = *(undefined8 *)(puVar6 + 0xc);
      *(double *)(puVar5 + 10) = (((TVector2<double> *)(puVar6 + 10))->field0_0x0)._s_0.X;
      *(undefined8 *)(puVar5 + 0xc) = uVar2;
      *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar6 + 0xe);
      dVar3 = *(double *)(puVar6 + 0x14);
      *(double *)(puVar5 + 0x12) =
           (((TTransform<double> *)(puVar6 + 0x12))->Rotation).XY.m128d_f64[0];
      *(double *)(puVar5 + 0x14) = dVar3;
      dVar3 = *(double *)(puVar6 + 0x18);
      *(double *)(puVar5 + 0x16) = ((__m128d *)(puVar6 + 0x16))->m128d_f64[0];
      *(double *)(puVar5 + 0x18) = dVar3;
      dVar3 = *(double *)(puVar6 + 0x1c);
      *(double *)(puVar5 + 0x1a) = (((VectorRegister4Double *)(puVar6 + 0x1a))->XY).m128d_f64[0];
      *(double *)(puVar5 + 0x1c) = dVar3;
      dVar3 = *(double *)(puVar6 + 0x20);
      *(double *)(puVar5 + 0x1e) = ((__m128d *)(puVar6 + 0x1e))->m128d_f64[0];
      *(double *)(puVar5 + 0x20) = dVar3;
      dVar3 = *(double *)(puVar6 + 0x24);
      *(double *)(puVar5 + 0x22) = (((VectorRegister4Double *)(puVar6 + 0x22))->XY).m128d_f64[0];
      *(double *)(puVar5 + 0x24) = dVar3;
      dVar3 = *(double *)(puVar6 + 0x28);
      *(double *)(puVar5 + 0x26) = ((__m128d *)(puVar6 + 0x26))->m128d_f64[0];
      *(double *)(puVar5 + 0x28) = dVar3;
      pFVar1 = *(FTextureResource **)(puVar6 + 0x2a);
      puVar5[0x2a] = 0;
      puVar5[0x2b] = 0;
      pTVar4 = (TRefCountPtr<FRHITexture> *)&pFVar1->_padding_;
      if (pFVar1 == (FTextureResource *)0x0) {
        pTVar4 = (TRefCountPtr<FRHITexture> *)(puVar6 + 0x2c);
      }
      this = pTVar4->Reference;
      *(FRHITexture **)(puVar5 + 0x2a) = this;
      if (this != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      puVar6 = puVar6 + 0x30;
      puVar5 = puVar5 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int> @ 14cf78ae0

void __cdecl
DestructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
          (FLayerData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Layers).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSplashData,int> @ 14cf78b40

void __cdecl DestructItems<FSplashData,int>(FSplashData *param_1,int param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &(param_1->Desc).Texture;
    do {
      if (pTVar1[2].Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[2].Reference);
      }
      if (pTVar1->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int> @ 14cf78b90

void __cdecl
DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>
          (FStereoLayerToRender *param_1,int param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Texture;
    do {
      if (pTVar1->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int> @ 14cf78be0

void __cdecl
DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
          (FStereoLayerToRenderTransfer *param_1,int param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Texture_Deprecated;
    do {
      if (pTVar1->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread11>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf79120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_DoNotWait_::__l2::TSTR_ExecuteOnRenderThread11>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread11>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf79271;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf79465;
  }
LAB_14cf79271:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf7934f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf7934f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf79465:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf794a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_DoNotWait_::__l2::TSTR_ExecuteOnRenderThread21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread21>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf795f1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf797e5;
  }
LAB_14cf795f1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf796cf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf796cf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf797e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread31>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf79820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_::__l2::TSTR_ExecuteOnRenderThread31>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread31>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf79971;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf79b65;
  }
LAB_14cf79971:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf79a4f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf79a4f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf79b65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread42>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf79ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_::__l2::TSTR_ExecuteOnRenderThread42>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread42>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf79cf1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf79ee5;
  }
LAB_14cf79cf1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf79dcf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf79dcf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf79ee5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf79f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf7a071;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf7a265;
  }
LAB_14cf7a071:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf7a14f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf7a14f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf7a265:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::TSTR_SetSpectatorScreenMode44>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf7a2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::SetSpectatorScreenMode_::__l2::TSTR_SetSpectatorScreenMode44>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::TSTR_SetSpectatorScreenMode44>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf7a3f1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf7a5e5;
  }
LAB_14cf7a3f1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf7a4cf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf7a4cf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf7a5e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf7a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout_::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::TSTR_SetSpectatorScreenModeTexturePlusEyeLayout69>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf7a771;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf7a965;
  }
LAB_14cf7a771:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf7a84f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf7a84f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf7a965:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::TSTR_SetSpectatorScreenTexture97>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cf7a9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultSpectatorScreenController::BeginRenderViewFamily_::__l2::TSTR_SetSpectatorScreenTexture97>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::TSTR_SetSpectatorScreenTexture97>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cf7aaf1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14cf7ace5;
  }
LAB_14cf7aaf1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14cf7abcf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf7abcf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14cf7ace5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HeapSiftDown<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_2>_>_>_> @ 14cf7afd0

void __cdecl
AlgoImpl::
HeapSiftDown<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>_>
          (FStereoLayerToRenderTransfer *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::<lambda_2>_>_>
          *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FTextureResource *pFVar21;
  FRHITexture *pFVar22;
  double dVar23;
  longlong lVar24;
  FRHITexture *pFVar25;
  uint uVar26;
  ELayerType EVar27;
  undefined7 uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ELayerType EVar32;
  bool bVar33;
  undefined7 uVar34;
  int iVar35;
  FStereoLayerToRenderTransfer *pFVar36;
  FStereoLayerToRenderTransfer *pFVar37;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar35 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      if (param_1[(longlong)iVar1 + 2].Priority < param_1[iVar35].Priority) {
        iVar35 = iVar1;
      }
      iVar35 = iVar35 + 1;
    }
    pFVar36 = param_1 + iVar35;
    pFVar37 = param_1 + param_2;
    if (pFVar36->Priority <= pFVar37->Priority) break;
    uVar29 = pFVar37->Id;
    iVar30 = pFVar37->Priority;
    uVar31 = pFVar37->Flags;
    EVar32 = pFVar37->PositionType;
    dVar2 = (pFVar37->QuadSize).field0_0x0._s_0.X;
    dVar3 = (pFVar37->QuadSize).field0_0x0._s_0.Y;
    dVar4 = (pFVar37->UVRect).Min.field0_0x0._s_0.X;
    dVar5 = (pFVar37->UVRect).Min.field0_0x0._s_0.Y;
    dVar6 = (pFVar37->UVRect).Max.field0_0x0._s_0.X;
    dVar7 = (pFVar37->UVRect).Max.field0_0x0._s_0.Y;
    bVar33 = (pFVar37->UVRect).bIsValid;
    uVar34 = *(undefined7 *)&(pFVar37->UVRect).field_0x21;
    lVar8 = pFVar37->_padding_;
    dVar9 = (pFVar37->Transform).Rotation.XY.m128d_f64[0];
    dVar10 = (pFVar37->Transform).Rotation.XY.m128d_f64[1];
    dVar11 = (pFVar37->Transform).Rotation.ZW.m128d_f64[0];
    dVar12 = (pFVar37->Transform).Rotation.ZW.m128d_f64[1];
    dVar13 = (pFVar37->Transform).Translation.XY.m128d_f64[0];
    dVar14 = (pFVar37->Transform).Translation.XY.m128d_f64[1];
    dVar15 = (pFVar37->Transform).Translation.ZW.m128d_f64[0];
    dVar16 = (pFVar37->Transform).Translation.ZW.m128d_f64[1];
    dVar17 = (pFVar37->Transform).Scale3D.XY.m128d_f64[0];
    dVar18 = (pFVar37->Transform).Scale3D.XY.m128d_f64[1];
    dVar19 = (pFVar37->Transform).Scale3D.ZW.m128d_f64[0];
    dVar20 = (pFVar37->Transform).Scale3D.ZW.m128d_f64[1];
    pFVar21 = pFVar37->Texture;
    pFVar22 = (pFVar37->Texture_Deprecated).Reference;
    iVar1 = pFVar36->Priority;
    uVar26 = pFVar36->Flags;
    EVar27 = pFVar36->PositionType;
    pFVar37->Id = pFVar36->Id;
    pFVar37->Priority = iVar1;
    pFVar37->Flags = uVar26;
    pFVar37->PositionType = EVar27;
    dVar23 = (pFVar36->QuadSize).field0_0x0._s_0.Y;
    (pFVar37->QuadSize).field0_0x0._s_0.X = (pFVar36->QuadSize).field0_0x0._s_0.X;
    (pFVar37->QuadSize).field0_0x0._s_0.Y = dVar23;
    dVar23 = (pFVar36->UVRect).Min.field0_0x0._s_0.Y;
    (pFVar37->UVRect).Min.field0_0x0._s_0.X = (pFVar36->UVRect).Min.field0_0x0._s_0.X;
    (pFVar37->UVRect).Min.field0_0x0._s_0.Y = dVar23;
    dVar23 = (pFVar36->UVRect).Max.field0_0x0._s_0.Y;
    (pFVar37->UVRect).Max.field0_0x0._s_0.X = (pFVar36->UVRect).Max.field0_0x0._s_0.X;
    (pFVar37->UVRect).Max.field0_0x0._s_0.Y = dVar23;
    uVar28 = *(undefined7 *)&(pFVar36->UVRect).field_0x21;
    lVar24 = pFVar36->_padding_;
    (pFVar37->UVRect).bIsValid = (pFVar36->UVRect).bIsValid;
    *(undefined7 *)&(pFVar37->UVRect).field_0x21 = uVar28;
    pFVar37->_padding_ = lVar24;
    dVar23 = (pFVar36->Transform).Rotation.XY.m128d_f64[1];
    (pFVar37->Transform).Rotation.XY.m128d_f64[0] = (pFVar36->Transform).Rotation.XY.m128d_f64[0];
    (pFVar37->Transform).Rotation.XY.m128d_f64[1] = dVar23;
    dVar23 = (pFVar36->Transform).Rotation.ZW.m128d_f64[1];
    (pFVar37->Transform).Rotation.ZW.m128d_f64[0] = (pFVar36->Transform).Rotation.ZW.m128d_f64[0];
    (pFVar37->Transform).Rotation.ZW.m128d_f64[1] = dVar23;
    dVar23 = (pFVar36->Transform).Translation.XY.m128d_f64[1];
    (pFVar37->Transform).Translation.XY.m128d_f64[0] =
         (pFVar36->Transform).Translation.XY.m128d_f64[0];
    (pFVar37->Transform).Translation.XY.m128d_f64[1] = dVar23;
    dVar23 = (pFVar36->Transform).Translation.ZW.m128d_f64[1];
    (pFVar37->Transform).Translation.ZW.m128d_f64[0] =
         (pFVar36->Transform).Translation.ZW.m128d_f64[0];
    (pFVar37->Transform).Translation.ZW.m128d_f64[1] = dVar23;
    dVar23 = (pFVar36->Transform).Scale3D.XY.m128d_f64[1];
    (pFVar37->Transform).Scale3D.XY.m128d_f64[0] = (pFVar36->Transform).Scale3D.XY.m128d_f64[0];
    (pFVar37->Transform).Scale3D.XY.m128d_f64[1] = dVar23;
    dVar23 = (pFVar36->Transform).Scale3D.ZW.m128d_f64[1];
    (pFVar37->Transform).Scale3D.ZW.m128d_f64[0] = (pFVar36->Transform).Scale3D.ZW.m128d_f64[0];
    (pFVar37->Transform).Scale3D.ZW.m128d_f64[1] = dVar23;
    pFVar25 = (pFVar36->Texture_Deprecated).Reference;
    pFVar37->Texture = pFVar36->Texture;
    (pFVar37->Texture_Deprecated).Reference = pFVar25;
    pFVar36->Id = uVar29;
    pFVar36->Priority = iVar30;
    pFVar36->Flags = uVar31;
    pFVar36->PositionType = EVar32;
    (pFVar36->QuadSize).field0_0x0._s_0.X = dVar2;
    (pFVar36->QuadSize).field0_0x0._s_0.Y = dVar3;
    (pFVar36->UVRect).Min.field0_0x0._s_0.X = dVar4;
    (pFVar36->UVRect).Min.field0_0x0._s_0.Y = dVar5;
    (pFVar36->UVRect).Max.field0_0x0._s_0.X = dVar6;
    (pFVar36->UVRect).Max.field0_0x0._s_0.Y = dVar7;
    (pFVar36->UVRect).bIsValid = bVar33;
    *(undefined7 *)&(pFVar36->UVRect).field_0x21 = uVar34;
    pFVar36->_padding_ = lVar8;
    (pFVar36->Transform).Rotation.XY.m128d_f64[0] = dVar9;
    (pFVar36->Transform).Rotation.XY.m128d_f64[1] = dVar10;
    (pFVar36->Transform).Rotation.ZW.m128d_f64[0] = dVar11;
    (pFVar36->Transform).Rotation.ZW.m128d_f64[1] = dVar12;
    (pFVar36->Transform).Translation.XY.m128d_f64[0] = dVar13;
    (pFVar36->Transform).Translation.XY.m128d_f64[1] = dVar14;
    (pFVar36->Transform).Translation.ZW.m128d_f64[0] = dVar15;
    (pFVar36->Transform).Translation.ZW.m128d_f64[1] = dVar16;
    (pFVar36->Transform).Scale3D.XY.m128d_f64[0] = dVar17;
    (pFVar36->Transform).Scale3D.XY.m128d_f64[1] = dVar18;
    (pFVar36->Transform).Scale3D.ZW.m128d_f64[0] = dVar19;
    (pFVar36->Transform).Scale3D.ZW.m128d_f64[1] = dVar20;
    pFVar36->Texture = pFVar21;
    (pFVar36->Texture_Deprecated).Reference = pFVar22;
    param_2 = iVar35;
  }
  return;
}

// HeapSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_2>_>_> @ 14cf7b220

void __cdecl
AlgoImpl::
HeapSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>
          (FStereoLayerToRenderTransfer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  FTextureResource *pFVar22;
  FRHITexture *pFVar23;
  double dVar24;
  longlong lVar25;
  FRHITexture *pFVar26;
  uint uVar27;
  ELayerType EVar28;
  undefined7 uVar29;
  uint uVar30;
  uint uVar31;
  ELayerType EVar32;
  undefined7 uVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  FStereoLayerToRenderTransfer *pFVar37;
  FStereoLayerToRenderTransfer *pFVar38;
  int iVar39;
  FStereoLayerToRenderTransfer *pFVar40;
  longlong lVar41;
  FIdentityFunctor local_res10 [8];
  TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::<lambda_2>_>
  local_res20;
  TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::<lambda_2>_>_>
  local_d8 [26];
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar34) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_d8[0].Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar34)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar35 = (param_2 + -2) / 2;
  HeapSiftDown<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>_>
            (param_1,iVar35,param_2,local_res10,local_d8);
  while (iVar35 != 0) {
    iVar35 = iVar35 + -1;
    HeapSiftDown<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>_>
              (param_1,iVar35,param_2,local_res10,local_d8);
  }
  iVar35 = param_2 + -1;
  lVar41 = (longlong)iVar35;
  if (0 < iVar35) {
    pFVar37 = param_1 + lVar41;
    do {
      uVar30 = param_1->Id;
      iVar36 = param_1->Priority;
      uVar31 = param_1->Flags;
      EVar32 = param_1->PositionType;
      dVar3 = (param_1->QuadSize).field0_0x0._s_0.X;
      dVar4 = (param_1->QuadSize).field0_0x0._s_0.Y;
      dVar5 = (param_1->UVRect).Min.field0_0x0._s_0.X;
      dVar6 = (param_1->UVRect).Min.field0_0x0._s_0.Y;
      dVar7 = (param_1->UVRect).Max.field0_0x0._s_0.X;
      dVar8 = (param_1->UVRect).Max.field0_0x0._s_0.Y;
      bVar34 = (param_1->UVRect).bIsValid;
      uVar33 = *(undefined7 *)&(param_1->UVRect).field_0x21;
      lVar9 = param_1->_padding_;
      dVar10 = (param_1->Transform).Rotation.XY.m128d_f64[0];
      dVar11 = (param_1->Transform).Rotation.XY.m128d_f64[1];
      dVar12 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
      dVar13 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
      dVar14 = (param_1->Transform).Translation.XY.m128d_f64[0];
      dVar15 = (param_1->Transform).Translation.XY.m128d_f64[1];
      dVar16 = (param_1->Transform).Translation.ZW.m128d_f64[0];
      dVar17 = (param_1->Transform).Translation.ZW.m128d_f64[1];
      dVar18 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
      dVar19 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
      dVar20 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
      dVar21 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
      pFVar22 = param_1->Texture;
      pFVar23 = (param_1->Texture_Deprecated).Reference;
      iVar39 = pFVar37->Priority;
      uVar27 = pFVar37->Flags;
      EVar28 = pFVar37->PositionType;
      param_1->Id = pFVar37->Id;
      param_1->Priority = iVar39;
      param_1->Flags = uVar27;
      param_1->PositionType = EVar28;
      dVar24 = (pFVar37->QuadSize).field0_0x0._s_0.Y;
      (param_1->QuadSize).field0_0x0._s_0.X = (pFVar37->QuadSize).field0_0x0._s_0.X;
      (param_1->QuadSize).field0_0x0._s_0.Y = dVar24;
      dVar24 = (pFVar37->UVRect).Min.field0_0x0._s_0.Y;
      (param_1->UVRect).Min.field0_0x0._s_0.X = (pFVar37->UVRect).Min.field0_0x0._s_0.X;
      (param_1->UVRect).Min.field0_0x0._s_0.Y = dVar24;
      dVar24 = (pFVar37->UVRect).Max.field0_0x0._s_0.Y;
      (param_1->UVRect).Max.field0_0x0._s_0.X = (pFVar37->UVRect).Max.field0_0x0._s_0.X;
      (param_1->UVRect).Max.field0_0x0._s_0.Y = dVar24;
      uVar29 = *(undefined7 *)&(pFVar37->UVRect).field_0x21;
      lVar25 = pFVar37->_padding_;
      (param_1->UVRect).bIsValid = (pFVar37->UVRect).bIsValid;
      *(undefined7 *)&(param_1->UVRect).field_0x21 = uVar29;
      param_1->_padding_ = lVar25;
      dVar24 = (pFVar37->Transform).Rotation.XY.m128d_f64[1];
      (param_1->Transform).Rotation.XY.m128d_f64[0] = (pFVar37->Transform).Rotation.XY.m128d_f64[0];
      (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar24;
      dVar24 = (pFVar37->Transform).Rotation.ZW.m128d_f64[1];
      (param_1->Transform).Rotation.ZW.m128d_f64[0] = (pFVar37->Transform).Rotation.ZW.m128d_f64[0];
      (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar24;
      dVar24 = (pFVar37->Transform).Translation.XY.m128d_f64[1];
      (param_1->Transform).Translation.XY.m128d_f64[0] =
           (pFVar37->Transform).Translation.XY.m128d_f64[0];
      (param_1->Transform).Translation.XY.m128d_f64[1] = dVar24;
      dVar24 = (pFVar37->Transform).Translation.ZW.m128d_f64[1];
      (param_1->Transform).Translation.ZW.m128d_f64[0] =
           (pFVar37->Transform).Translation.ZW.m128d_f64[0];
      (param_1->Transform).Translation.ZW.m128d_f64[1] = dVar24;
      dVar24 = (pFVar37->Transform).Scale3D.XY.m128d_f64[1];
      (param_1->Transform).Scale3D.XY.m128d_f64[0] = (pFVar37->Transform).Scale3D.XY.m128d_f64[0];
      (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar24;
      dVar24 = (pFVar37->Transform).Scale3D.ZW.m128d_f64[1];
      (param_1->Transform).Scale3D.ZW.m128d_f64[0] = (pFVar37->Transform).Scale3D.ZW.m128d_f64[0];
      (param_1->Transform).Scale3D.ZW.m128d_f64[1] = dVar24;
      pFVar26 = (pFVar37->Texture_Deprecated).Reference;
      param_1->Texture = pFVar37->Texture;
      (param_1->Texture_Deprecated).Reference = pFVar26;
      pFVar37->Id = uVar30;
      pFVar37->Priority = iVar36;
      pFVar37->Flags = uVar31;
      pFVar37->PositionType = EVar32;
      (pFVar37->QuadSize).field0_0x0._s_0.X = dVar3;
      (pFVar37->QuadSize).field0_0x0._s_0.Y = dVar4;
      (pFVar37->UVRect).Min.field0_0x0._s_0.X = dVar5;
      (pFVar37->UVRect).Min.field0_0x0._s_0.Y = dVar6;
      (pFVar37->UVRect).Max.field0_0x0._s_0.X = dVar7;
      (pFVar37->UVRect).Max.field0_0x0._s_0.Y = dVar8;
      (pFVar37->UVRect).bIsValid = bVar34;
      *(undefined7 *)&(pFVar37->UVRect).field_0x21 = uVar33;
      pFVar37->_padding_ = lVar9;
      (pFVar37->Transform).Rotation.XY.m128d_f64[0] = dVar10;
      (pFVar37->Transform).Rotation.XY.m128d_f64[1] = dVar11;
      (pFVar37->Transform).Rotation.ZW.m128d_f64[0] = dVar12;
      (pFVar37->Transform).Rotation.ZW.m128d_f64[1] = dVar13;
      (pFVar37->Transform).Translation.XY.m128d_f64[0] = dVar14;
      (pFVar37->Transform).Translation.XY.m128d_f64[1] = dVar15;
      (pFVar37->Transform).Translation.ZW.m128d_f64[0] = dVar16;
      (pFVar37->Transform).Translation.ZW.m128d_f64[1] = dVar17;
      (pFVar37->Transform).Scale3D.XY.m128d_f64[0] = dVar18;
      (pFVar37->Transform).Scale3D.XY.m128d_f64[1] = dVar19;
      (pFVar37->Transform).Scale3D.ZW.m128d_f64[0] = dVar20;
      (pFVar37->Transform).Scale3D.ZW.m128d_f64[1] = dVar21;
      pFVar37->Texture = pFVar22;
      (pFVar37->Texture_Deprecated).Reference = pFVar23;
      iVar39 = 0;
      if (1 < iVar35) {
        do {
          iVar2 = iVar39 * 2;
          iVar36 = iVar2 + 1;
          if (iVar2 + 2 < iVar35) {
            if (param_1[(longlong)iVar2 + 2].Priority < param_1[iVar36].Priority) {
              iVar36 = iVar2;
            }
            iVar36 = iVar36 + 1;
          }
          pFVar38 = param_1 + iVar36;
          pFVar40 = param_1 + iVar39;
          if (pFVar38->Priority <= pFVar40->Priority) break;
          uVar30 = pFVar40->Id;
          iVar2 = pFVar40->Priority;
          uVar31 = pFVar40->Flags;
          EVar32 = pFVar40->PositionType;
          dVar3 = (pFVar40->QuadSize).field0_0x0._s_0.X;
          dVar4 = (pFVar40->QuadSize).field0_0x0._s_0.Y;
          dVar5 = (pFVar40->UVRect).Min.field0_0x0._s_0.X;
          dVar6 = (pFVar40->UVRect).Min.field0_0x0._s_0.Y;
          dVar7 = (pFVar40->UVRect).Max.field0_0x0._s_0.X;
          dVar8 = (pFVar40->UVRect).Max.field0_0x0._s_0.Y;
          bVar34 = (pFVar40->UVRect).bIsValid;
          uVar33 = *(undefined7 *)&(pFVar40->UVRect).field_0x21;
          lVar9 = pFVar40->_padding_;
          dVar10 = (pFVar40->Transform).Rotation.XY.m128d_f64[0];
          dVar11 = (pFVar40->Transform).Rotation.XY.m128d_f64[1];
          dVar12 = (pFVar40->Transform).Rotation.ZW.m128d_f64[0];
          dVar13 = (pFVar40->Transform).Rotation.ZW.m128d_f64[1];
          dVar14 = (pFVar40->Transform).Translation.XY.m128d_f64[0];
          dVar15 = (pFVar40->Transform).Translation.XY.m128d_f64[1];
          dVar16 = (pFVar40->Transform).Translation.ZW.m128d_f64[0];
          dVar17 = (pFVar40->Transform).Translation.ZW.m128d_f64[1];
          dVar18 = (pFVar40->Transform).Scale3D.XY.m128d_f64[0];
          dVar19 = (pFVar40->Transform).Scale3D.XY.m128d_f64[1];
          dVar20 = (pFVar40->Transform).Scale3D.ZW.m128d_f64[0];
          dVar21 = (pFVar40->Transform).Scale3D.ZW.m128d_f64[1];
          pFVar22 = pFVar40->Texture;
          pFVar23 = (pFVar40->Texture_Deprecated).Reference;
          iVar39 = pFVar38->Priority;
          uVar27 = pFVar38->Flags;
          EVar28 = pFVar38->PositionType;
          pFVar40->Id = pFVar38->Id;
          pFVar40->Priority = iVar39;
          pFVar40->Flags = uVar27;
          pFVar40->PositionType = EVar28;
          dVar24 = (pFVar38->QuadSize).field0_0x0._s_0.Y;
          (pFVar40->QuadSize).field0_0x0._s_0.X = (pFVar38->QuadSize).field0_0x0._s_0.X;
          (pFVar40->QuadSize).field0_0x0._s_0.Y = dVar24;
          dVar24 = (pFVar38->UVRect).Min.field0_0x0._s_0.Y;
          (pFVar40->UVRect).Min.field0_0x0._s_0.X = (pFVar38->UVRect).Min.field0_0x0._s_0.X;
          (pFVar40->UVRect).Min.field0_0x0._s_0.Y = dVar24;
          dVar24 = (pFVar38->UVRect).Max.field0_0x0._s_0.Y;
          (pFVar40->UVRect).Max.field0_0x0._s_0.X = (pFVar38->UVRect).Max.field0_0x0._s_0.X;
          (pFVar40->UVRect).Max.field0_0x0._s_0.Y = dVar24;
          uVar29 = *(undefined7 *)&(pFVar38->UVRect).field_0x21;
          lVar25 = pFVar38->_padding_;
          (pFVar40->UVRect).bIsValid = (pFVar38->UVRect).bIsValid;
          *(undefined7 *)&(pFVar40->UVRect).field_0x21 = uVar29;
          pFVar40->_padding_ = lVar25;
          dVar24 = (pFVar38->Transform).Rotation.XY.m128d_f64[1];
          (pFVar40->Transform).Rotation.XY.m128d_f64[0] =
               (pFVar38->Transform).Rotation.XY.m128d_f64[0];
          (pFVar40->Transform).Rotation.XY.m128d_f64[1] = dVar24;
          dVar24 = (pFVar38->Transform).Rotation.ZW.m128d_f64[1];
          (pFVar40->Transform).Rotation.ZW.m128d_f64[0] =
               (pFVar38->Transform).Rotation.ZW.m128d_f64[0];
          (pFVar40->Transform).Rotation.ZW.m128d_f64[1] = dVar24;
          dVar24 = (pFVar38->Transform).Translation.XY.m128d_f64[1];
          (pFVar40->Transform).Translation.XY.m128d_f64[0] =
               (pFVar38->Transform).Translation.XY.m128d_f64[0];
          (pFVar40->Transform).Translation.XY.m128d_f64[1] = dVar24;
          dVar24 = (pFVar38->Transform).Translation.ZW.m128d_f64[1];
          (pFVar40->Transform).Translation.ZW.m128d_f64[0] =
               (pFVar38->Transform).Translation.ZW.m128d_f64[0];
          (pFVar40->Transform).Translation.ZW.m128d_f64[1] = dVar24;
          dVar24 = (pFVar38->Transform).Scale3D.XY.m128d_f64[1];
          (pFVar40->Transform).Scale3D.XY.m128d_f64[0] =
               (pFVar38->Transform).Scale3D.XY.m128d_f64[0];
          (pFVar40->Transform).Scale3D.XY.m128d_f64[1] = dVar24;
          dVar24 = (pFVar38->Transform).Scale3D.ZW.m128d_f64[1];
          (pFVar40->Transform).Scale3D.ZW.m128d_f64[0] =
               (pFVar38->Transform).Scale3D.ZW.m128d_f64[0];
          (pFVar40->Transform).Scale3D.ZW.m128d_f64[1] = dVar24;
          pFVar26 = (pFVar38->Texture_Deprecated).Reference;
          pFVar40->Texture = pFVar38->Texture;
          (pFVar40->Texture_Deprecated).Reference = pFVar26;
          pFVar38->Id = uVar30;
          pFVar38->Priority = iVar2;
          pFVar38->Flags = uVar31;
          pFVar38->PositionType = EVar32;
          (pFVar38->QuadSize).field0_0x0._s_0.X = dVar3;
          (pFVar38->QuadSize).field0_0x0._s_0.Y = dVar4;
          (pFVar38->UVRect).Min.field0_0x0._s_0.X = dVar5;
          (pFVar38->UVRect).Min.field0_0x0._s_0.Y = dVar6;
          (pFVar38->UVRect).Max.field0_0x0._s_0.X = dVar7;
          (pFVar38->UVRect).Max.field0_0x0._s_0.Y = dVar8;
          (pFVar38->UVRect).bIsValid = bVar34;
          *(undefined7 *)&(pFVar38->UVRect).field_0x21 = uVar33;
          pFVar38->_padding_ = lVar9;
          (pFVar38->Transform).Rotation.XY.m128d_f64[0] = dVar10;
          (pFVar38->Transform).Rotation.XY.m128d_f64[1] = dVar11;
          (pFVar38->Transform).Rotation.ZW.m128d_f64[0] = dVar12;
          (pFVar38->Transform).Rotation.ZW.m128d_f64[1] = dVar13;
          (pFVar38->Transform).Translation.XY.m128d_f64[0] = dVar14;
          (pFVar38->Transform).Translation.XY.m128d_f64[1] = dVar15;
          (pFVar38->Transform).Translation.ZW.m128d_f64[0] = dVar16;
          (pFVar38->Transform).Translation.ZW.m128d_f64[1] = dVar17;
          (pFVar38->Transform).Scale3D.XY.m128d_f64[0] = dVar18;
          (pFVar38->Transform).Scale3D.XY.m128d_f64[1] = dVar19;
          (pFVar38->Transform).Scale3D.ZW.m128d_f64[0] = dVar20;
          (pFVar38->Transform).Scale3D.ZW.m128d_f64[1] = dVar21;
          pFVar38->Texture = pFVar22;
          (pFVar38->Texture_Deprecated).Reference = pFVar23;
          iVar39 = iVar36;
        } while (iVar36 * 2 + 1 < iVar35);
      }
      iVar35 = iVar35 + -1;
      lVar41 = lVar41 + -1;
      pFVar37 = pFVar37 + -1;
    } while (0 < lVar41);
  }
  return;
}

// InternalConstructor<UAsyncTask_LoadXRDeviceVisComponent> @ 14cf7b710

void __cdecl InternalConstructor<UAsyncTask_LoadXRDeviceVisComponent>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UHeadMountedDisplayFunctionLibrary> @ 14cf7b760

void __cdecl InternalConstructor<UHeadMountedDisplayFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UHeadMountedDisplayFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMotionTrackedDeviceFunctionLibrary> @ 14cf7b790

void __cdecl InternalConstructor<UMotionTrackedDeviceFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UVRNotificationsComponent> @ 14cf7b7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UVRNotificationsComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UVRNotificationsComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UVRNotificationsComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UVRNotificationsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
  }
  return;
}

// InternalConstructor<UXRAssetFunctionLibrary> @ 14cf7b910

void __cdecl InternalConstructor<UXRAssetFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UXRAssetFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UXRDeviceVisualizationComponent> @ 14cf7b940

void __cdecl InternalConstructor<UXRDeviceVisualizationComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UStaticMeshComponent *this;
  FName FVar2;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UXRDeviceVisualizationComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IPhysicsComponent__
    ;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    FXRDeviceId::FXRDeviceId((FXRDeviceId *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    FVar2 = IMotionController::LeftHandSourceId;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 | 1;
    *(FName *)((longlong)&this[1]._padding_ + 4) = FVar2;
  }
  return;
}

// InternalConstructor<UXRLoadingScreenFunctionLibrary> @ 14cf7ba20

void __cdecl InternalConstructor<UXRLoadingScreenFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UXRLoadingScreenFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAsyncTask_LoadXRDeviceVisComponent> @ 14cf7ba50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncTask_LoadXRDeviceVisComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncTask_LoadXRDeviceVisComponent::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    *(undefined1 *)&this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHeadMountedDisplayFunctionLibrary> @ 14cf7bb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UHeadMountedDisplayFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHeadMountedDisplayFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionTrackedDeviceFunctionLibrary> @ 14cf7bbd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionTrackedDeviceFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionTrackedDeviceFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVRNotificationsComponent> @ 14cf7bc80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVRNotificationsComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVRNotificationsComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UVRNotificationsComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UVRNotificationsComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UVRNotificationsComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UXRAssetFunctionLibrary> @ 14cf7bc90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UXRAssetFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UXRAssetFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UXRAssetFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UXRDeviceVisualizationComponent> @ 14cf7bd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UXRDeviceVisualizationComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UXRDeviceVisualizationComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&UXRDeviceVisualizationComponent::_vftable__for__UObject__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UXRDeviceVisualizationComponent::_vftable__for__IPhysicsComponent__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    FXRDeviceId::FXRDeviceId((FXRDeviceId *)&this[1]._padding_);
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UXRLoadingScreenFunctionLibrary> @ 14cf7be70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UXRLoadingScreenFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UXRLoadingScreenFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UXRLoadingScreenFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_2>_>_> @ 14cf7bf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>
          (FStereoLayerToRenderTransfer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_public:_virtual_void___cdecl_FDefaultStereoLayers::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::<lambda_2>_>
          param_4)

{
  FStereoLayerToRenderTransfer *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FTextureResource *pFVar20;
  FRHITexture *pFVar21;
  double dVar22;
  FRHITexture *pFVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  ELayerType EVar27;
  undefined7 uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ELayerType EVar32;
  bool bVar33;
  undefined7 uVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  FStereoLayerToRenderTransfer *pFVar38;
  FStereoLayerToRenderTransfer *pFVar39;
  FStereoLayerToRenderTransfer *pFVar40;
  FStereoLayerToRenderTransfer *pFVar41;
  FStereoLayerToRenderTransfer *pFVar42;
  FStereoLayerToRenderTransfer *pFVar43;
  FStereoLayerToRenderTransfer **ppFVar44;
  float fVar45;
  undefined1 auStack_438 [48];
  FStereoLayerToRenderTransfer *local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined8 local_3b8;
  longlong lStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  FTextureResource *local_348;
  FRHITexture *pFStack_340;
  FStereoLayerToRenderTransfer *local_338;
  FStereoLayerToRenderTransfer *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar45 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar45;
    memset(local_320,0,0x2e8);
    ppFVar44 = &local_338;
    do {
      pFVar38 = ppFVar44[1];
      pFVar43 = *ppFVar44;
      pFVar1 = ppFVar44[2];
      local_408._0_4_ = (int)pFVar1;
      iVar36 = (int)(((longlong)pFVar38 - (longlong)pFVar43) / 0xc0) + 1;
      pFVar42 = pFVar43;
      if ((int)local_408 != 0) {
LAB_14cf7c010:
        if (8 < iVar36) {
          pFVar43 = pFVar42 + iVar36 / 2;
          uVar29 = pFVar43->Id;
          iVar30 = pFVar43->Priority;
          uVar31 = pFVar43->Flags;
          EVar32 = pFVar43->PositionType;
          dVar2 = (pFVar43->QuadSize).field0_0x0._s_0.X;
          dVar3 = (pFVar43->QuadSize).field0_0x0._s_0.Y;
          dVar4 = (pFVar43->UVRect).Min.field0_0x0._s_0.X;
          dVar5 = (pFVar43->UVRect).Min.field0_0x0._s_0.Y;
          dVar6 = (pFVar43->UVRect).Max.field0_0x0._s_0.X;
          dVar7 = (pFVar43->UVRect).Max.field0_0x0._s_0.Y;
          bVar33 = (pFVar43->UVRect).bIsValid;
          uVar34 = *(undefined7 *)&(pFVar43->UVRect).field_0x21;
          lVar37 = pFVar43->_padding_;
          dVar8 = (pFVar43->Transform).Rotation.XY.m128d_f64[0];
          dVar9 = (pFVar43->Transform).Rotation.XY.m128d_f64[1];
          dVar10 = (pFVar43->Transform).Rotation.ZW.m128d_f64[0];
          dVar11 = (pFVar43->Transform).Rotation.ZW.m128d_f64[1];
          dVar12 = (pFVar43->Transform).Translation.XY.m128d_f64[0];
          dVar13 = (pFVar43->Transform).Translation.XY.m128d_f64[1];
          dVar14 = (pFVar43->Transform).Translation.ZW.m128d_f64[0];
          dVar15 = (pFVar43->Transform).Translation.ZW.m128d_f64[1];
          dVar16 = (pFVar43->Transform).Scale3D.XY.m128d_f64[0];
          dVar17 = (pFVar43->Transform).Scale3D.XY.m128d_f64[1];
          dVar18 = (pFVar43->Transform).Scale3D.ZW.m128d_f64[0];
          dVar19 = (pFVar43->Transform).Scale3D.ZW.m128d_f64[1];
          pFVar20 = pFVar43->Texture;
          pFVar21 = (pFVar43->Texture_Deprecated).Reference;
          iVar36 = pFVar42->Priority;
          uVar26 = pFVar42->Flags;
          EVar27 = pFVar42->PositionType;
          pFVar43->Id = pFVar42->Id;
          pFVar43->Priority = iVar36;
          pFVar43->Flags = uVar26;
          pFVar43->PositionType = EVar27;
          dVar22 = (pFVar42->QuadSize).field0_0x0._s_0.Y;
          (pFVar43->QuadSize).field0_0x0._s_0.X = (pFVar42->QuadSize).field0_0x0._s_0.X;
          (pFVar43->QuadSize).field0_0x0._s_0.Y = dVar22;
          dVar22 = (pFVar42->UVRect).Min.field0_0x0._s_0.Y;
          (pFVar43->UVRect).Min.field0_0x0._s_0.X = (pFVar42->UVRect).Min.field0_0x0._s_0.X;
          (pFVar43->UVRect).Min.field0_0x0._s_0.Y = dVar22;
          dVar22 = (pFVar42->UVRect).Max.field0_0x0._s_0.Y;
          (pFVar43->UVRect).Max.field0_0x0._s_0.X = (pFVar42->UVRect).Max.field0_0x0._s_0.X;
          (pFVar43->UVRect).Max.field0_0x0._s_0.Y = dVar22;
          uVar28 = *(undefined7 *)&(pFVar42->UVRect).field_0x21;
          lVar35 = pFVar42->_padding_;
          (pFVar43->UVRect).bIsValid = (pFVar42->UVRect).bIsValid;
          *(undefined7 *)&(pFVar43->UVRect).field_0x21 = uVar28;
          pFVar43->_padding_ = lVar35;
          dVar22 = (pFVar42->Transform).Rotation.XY.m128d_f64[1];
          (pFVar43->Transform).Rotation.XY.m128d_f64[0] =
               (pFVar42->Transform).Rotation.XY.m128d_f64[0];
          (pFVar43->Transform).Rotation.XY.m128d_f64[1] = dVar22;
          dVar22 = (pFVar42->Transform).Rotation.ZW.m128d_f64[1];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[0] =
               (pFVar42->Transform).Rotation.ZW.m128d_f64[0];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[1] = dVar22;
          dVar22 = (pFVar42->Transform).Translation.XY.m128d_f64[1];
          (pFVar43->Transform).Translation.XY.m128d_f64[0] =
               (pFVar42->Transform).Translation.XY.m128d_f64[0];
          (pFVar43->Transform).Translation.XY.m128d_f64[1] = dVar22;
          dVar22 = (pFVar42->Transform).Translation.ZW.m128d_f64[1];
          (pFVar43->Transform).Translation.ZW.m128d_f64[0] =
               (pFVar42->Transform).Translation.ZW.m128d_f64[0];
          (pFVar43->Transform).Translation.ZW.m128d_f64[1] = dVar22;
          dVar22 = (pFVar42->Transform).Scale3D.XY.m128d_f64[1];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[0] =
               (pFVar42->Transform).Scale3D.XY.m128d_f64[0];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[1] = dVar22;
          dVar22 = (pFVar42->Transform).Scale3D.ZW.m128d_f64[1];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[0] =
               (pFVar42->Transform).Scale3D.ZW.m128d_f64[0];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[1] = dVar22;
          pFVar23 = (pFVar42->Texture_Deprecated).Reference;
          pFVar43->Texture = pFVar42->Texture;
          (pFVar43->Texture_Deprecated).Reference = pFVar23;
          pFVar42->Id = uVar29;
          pFVar42->Priority = iVar30;
          pFVar42->Flags = uVar31;
          pFVar42->PositionType = EVar32;
          (pFVar42->QuadSize).field0_0x0._s_0.X = dVar2;
          (pFVar42->QuadSize).field0_0x0._s_0.Y = dVar3;
          (pFVar42->UVRect).Min.field0_0x0._s_0.X = dVar4;
          (pFVar42->UVRect).Min.field0_0x0._s_0.Y = dVar5;
          (pFVar42->UVRect).Max.field0_0x0._s_0.X = dVar6;
          (pFVar42->UVRect).Max.field0_0x0._s_0.Y = dVar7;
          (pFVar42->UVRect).bIsValid = bVar33;
          *(undefined7 *)&(pFVar42->UVRect).field_0x21 = uVar34;
          pFVar42->_padding_ = lVar37;
          (pFVar42->Transform).Rotation.XY.m128d_f64[0] = dVar8;
          (pFVar42->Transform).Rotation.XY.m128d_f64[1] = dVar9;
          (pFVar42->Transform).Rotation.ZW.m128d_f64[0] = dVar10;
          (pFVar42->Transform).Rotation.ZW.m128d_f64[1] = dVar11;
          (pFVar42->Transform).Translation.XY.m128d_f64[0] = dVar12;
          (pFVar42->Transform).Translation.XY.m128d_f64[1] = dVar13;
          (pFVar42->Transform).Translation.ZW.m128d_f64[0] = dVar14;
          (pFVar42->Transform).Translation.ZW.m128d_f64[1] = dVar15;
          (pFVar42->Transform).Scale3D.XY.m128d_f64[0] = dVar16;
          (pFVar42->Transform).Scale3D.XY.m128d_f64[1] = dVar17;
          (pFVar42->Transform).Scale3D.ZW.m128d_f64[0] = dVar18;
          (pFVar42->Transform).Scale3D.ZW.m128d_f64[1] = dVar19;
          pFVar42->Texture = pFVar20;
          (pFVar42->Texture_Deprecated).Reference = pFVar21;
          pFVar40 = pFVar38 + 1;
          pFVar43 = pFVar42;
LAB_14cf7c1c0:
          pFVar39 = pFVar43;
          pFVar43 = pFVar39 + 1;
          if (pFVar43 <= pFVar38) goto code_r0x00014cf7c1cc;
          goto LAB_14cf7c1e0;
        }
        for (; pFVar43 = pFVar42, pFVar1 = pFVar42, pFVar42 < pFVar38;
            pFVar38 = (FStereoLayerToRenderTransfer *)((longlong)pFVar38 + 0xffffffffffffff40)) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar38) {
            if (pFVar43->Priority < pFVar1->Priority) {
              pFVar43 = pFVar1;
            }
          }
          local_3f8._0_4_ = pFVar43->Id;
          local_3f8._4_4_ = pFVar43->Priority;
          uStack_3f0._0_4_ = pFVar43->Flags;
          uStack_3f0._4_4_ = pFVar43->PositionType;
          local_3e8 = (pFVar43->QuadSize).field0_0x0._s_0.X;
          dStack_3e0 = (pFVar43->QuadSize).field0_0x0._s_0.Y;
          local_3d8 = (pFVar43->UVRect).Min.field0_0x0._s_0.X;
          dStack_3d0 = (pFVar43->UVRect).Min.field0_0x0._s_0.Y;
          local_3c8 = (pFVar43->UVRect).Max.field0_0x0._s_0.X;
          dStack_3c0 = (pFVar43->UVRect).Max.field0_0x0._s_0.Y;
          local_3b8 = *(undefined8 *)&(pFVar43->UVRect).bIsValid;
          lStack_3b0 = pFVar43->_padding_;
          local_3a8 = (pFVar43->Transform).Rotation.XY.m128d_f64[0];
          dStack_3a0 = (pFVar43->Transform).Rotation.XY.m128d_f64[1];
          local_398 = (pFVar43->Transform).Rotation.ZW.m128d_f64[0];
          dStack_390 = (pFVar43->Transform).Rotation.ZW.m128d_f64[1];
          local_388 = (pFVar43->Transform).Translation.XY.m128d_f64[0];
          dStack_380 = (pFVar43->Transform).Translation.XY.m128d_f64[1];
          local_378 = (pFVar43->Transform).Translation.ZW.m128d_f64[0];
          dStack_370 = (pFVar43->Transform).Translation.ZW.m128d_f64[1];
          local_368 = (pFVar43->Transform).Scale3D.XY.m128d_f64[0];
          dStack_360 = (pFVar43->Transform).Scale3D.XY.m128d_f64[1];
          local_358 = (pFVar43->Transform).Scale3D.ZW.m128d_f64[0];
          dStack_350 = (pFVar43->Transform).Scale3D.ZW.m128d_f64[1];
          local_348 = pFVar43->Texture;
          pFStack_340 = (pFVar43->Texture_Deprecated).Reference;
          uVar24 = *(undefined8 *)pFVar38;
          uVar25 = *(undefined8 *)((longlong)pFVar38 + 8);
          pFVar43->Id = (int)uVar24;
          pFVar43->Priority = (int)((ulonglong)uVar24 >> 0x20);
          *(undefined8 *)&pFVar43->Flags = uVar25;
          dVar2 = *(double *)&((TVector2<double> *)((longlong)pFVar38 + 0x18))->field0_0x0;
          (pFVar43->QuadSize).field0_0x0._s_0.X =
               (((TVector2<double> *)((longlong)pFVar38 + 0x10))->field0_0x0)._s_0.X;
          (pFVar43->QuadSize).field0_0x0._s_0.Y = dVar2;
          dVar2 = *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x28))->Min;
          (pFVar43->UVRect).Min.field0_0x0._s_0.X =
               *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x20))->Min;
          (pFVar43->UVRect).Min.field0_0x0._s_0.Y = dVar2;
          dVar2 = *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x38))->Min;
          (pFVar43->UVRect).Max.field0_0x0._s_0.X =
               *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x30))->Min;
          (pFVar43->UVRect).Max.field0_0x0._s_0.Y = dVar2;
          lVar37 = *(longlong *)((longlong)pFVar38 + 0x48);
          *(undefined8 *)&(pFVar43->UVRect).bIsValid =
               *(undefined8 *)&((TBox2<double> *)((longlong)pFVar38 + 0x40))->Min;
          pFVar43->_padding_ = lVar37;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x58))->Rotation;
          (pFVar43->Transform).Rotation.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x50))->Rotation;
          (pFVar43->Transform).Rotation.XY.m128d_f64[1] = dVar2;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x68))->Rotation;
          (pFVar43->Transform).Rotation.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x60))->Rotation;
          (pFVar43->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x78))->Rotation;
          (pFVar43->Transform).Translation.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x70))->Rotation;
          (pFVar43->Transform).Translation.XY.m128d_f64[1] = dVar2;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x88))->Rotation;
          (pFVar43->Transform).Translation.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x80))->Rotation;
          (pFVar43->Transform).Translation.ZW.m128d_f64[1] = dVar2;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x98))->Rotation;
          (pFVar43->Transform).Scale3D.XY.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x90))->Rotation;
          (pFVar43->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
          dVar2 = *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0xa8))->Rotation;
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[0] =
               *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0xa0))->Rotation;
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
          pFVar21 = ((TRefCountPtr<FRHITexture> *)((longlong)pFVar38 + 0xb8))->Reference;
          pFVar43->Texture = *(FTextureResource **)((longlong)pFVar38 + 0xb0);
          (pFVar43->Texture_Deprecated).Reference = pFVar21;
          *(undefined8 *)pFVar38 = local_3f8;
          *(undefined8 *)((longlong)pFVar38 + 8) = uStack_3f0;
          (((TVector2<double> *)((longlong)pFVar38 + 0x10))->field0_0x0)._s_0.X = local_3e8;
          *(double *)&((TVector2<double> *)((longlong)pFVar38 + 0x18))->field0_0x0 = dStack_3e0;
          *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x20))->Min = local_3d8;
          *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x28))->Min = dStack_3d0;
          *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x30))->Min = local_3c8;
          *(double *)&((TBox2<double> *)((longlong)pFVar38 + 0x38))->Min = dStack_3c0;
          *(undefined8 *)&((TBox2<double> *)((longlong)pFVar38 + 0x40))->Min = local_3b8;
          *(longlong *)((longlong)pFVar38 + 0x48) = lStack_3b0;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x50))->Rotation = local_3a8;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x58))->Rotation = dStack_3a0;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x60))->Rotation = local_398;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x68))->Rotation = dStack_390;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x70))->Rotation = local_388;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x78))->Rotation = dStack_380;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x80))->Rotation = local_378;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x88))->Rotation = dStack_370;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x90))->Rotation = local_368;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0x98))->Rotation = dStack_360;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0xa0))->Rotation = local_358;
          *(double *)&((TTransform<double> *)((longlong)pFVar38 + 0xa8))->Rotation = dStack_350;
          *(FTextureResource **)((longlong)pFVar38 + 0xb0) = local_348;
          ((TRefCountPtr<FRHITexture> *)((longlong)pFVar38 + 0xb8))->Reference = pFStack_340;
        }
        goto LAB_14cf7c602;
      }
LAB_14cf7c5f3:
      local_408 = pFVar1;
      HeapSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>
                (pFVar43,iVar36,param_3,param_4);
LAB_14cf7c602:
      ppFVar44 = ppFVar44 + -3;
    } while (&local_338 <= ppFVar44);
  }
  return;
code_r0x00014cf7c1cc:
  if (pFVar39[1].Priority <= pFVar42->Priority) goto LAB_14cf7c1c0;
LAB_14cf7c1e0:
  do {
    pFVar41 = pFVar40;
    pFVar40 = pFVar41 + -1;
    if (pFVar40 <= pFVar42) break;
  } while (pFVar42->Priority <= pFVar41[-1].Priority);
  if (pFVar43 <= pFVar40) {
    uVar29 = pFVar43->Id;
    iVar30 = pFVar43->Priority;
    uVar31 = pFVar39[1].Flags;
    EVar32 = pFVar39[1].PositionType;
    dVar2 = pFVar39[1].QuadSize.field0_0x0._s_0.X;
    dVar3 = pFVar39[1].QuadSize.field0_0x0._s_0.Y;
    dVar4 = pFVar39[1].UVRect.Min.field0_0x0._s_0.X;
    dVar5 = pFVar39[1].UVRect.Min.field0_0x0._s_0.Y;
    dVar6 = pFVar39[1].UVRect.Max.field0_0x0._s_0.X;
    dVar7 = pFVar39[1].UVRect.Max.field0_0x0._s_0.Y;
    bVar33 = pFVar39[1].UVRect.bIsValid;
    uVar34 = *(undefined7 *)&pFVar39[1].UVRect.field_0x21;
    lVar37 = pFVar39[1]._padding_;
    dVar8 = pFVar39[1].Transform.Rotation.XY.m128d_f64[0];
    dVar9 = pFVar39[1].Transform.Rotation.XY.m128d_f64[1];
    dVar10 = pFVar39[1].Transform.Rotation.ZW.m128d_f64[0];
    dVar11 = pFVar39[1].Transform.Rotation.ZW.m128d_f64[1];
    dVar12 = pFVar39[1].Transform.Translation.XY.m128d_f64[0];
    dVar13 = pFVar39[1].Transform.Translation.XY.m128d_f64[1];
    dVar14 = pFVar39[1].Transform.Translation.ZW.m128d_f64[0];
    dVar15 = pFVar39[1].Transform.Translation.ZW.m128d_f64[1];
    dVar16 = pFVar39[1].Transform.Scale3D.XY.m128d_f64[0];
    dVar17 = pFVar39[1].Transform.Scale3D.XY.m128d_f64[1];
    dVar18 = pFVar39[1].Transform.Scale3D.ZW.m128d_f64[0];
    dVar19 = pFVar39[1].Transform.Scale3D.ZW.m128d_f64[1];
    pFVar20 = pFVar39[1].Texture;
    pFVar21 = pFVar39[1].Texture_Deprecated.Reference;
    iVar36 = pFVar40->Priority;
    uVar26 = pFVar41[-1].Flags;
    EVar27 = pFVar41[-1].PositionType;
    pFVar43->Id = pFVar40->Id;
    pFVar43->Priority = iVar36;
    pFVar39[1].Flags = uVar26;
    pFVar39[1].PositionType = EVar27;
    dVar22 = pFVar41[-1].QuadSize.field0_0x0._s_0.Y;
    pFVar39[1].QuadSize.field0_0x0._s_0.X = pFVar41[-1].QuadSize.field0_0x0._s_0.X;
    pFVar39[1].QuadSize.field0_0x0._s_0.Y = dVar22;
    dVar22 = pFVar41[-1].UVRect.Min.field0_0x0._s_0.Y;
    pFVar39[1].UVRect.Min.field0_0x0._s_0.X = pFVar41[-1].UVRect.Min.field0_0x0._s_0.X;
    pFVar39[1].UVRect.Min.field0_0x0._s_0.Y = dVar22;
    dVar22 = pFVar41[-1].UVRect.Max.field0_0x0._s_0.Y;
    pFVar39[1].UVRect.Max.field0_0x0._s_0.X = pFVar41[-1].UVRect.Max.field0_0x0._s_0.X;
    pFVar39[1].UVRect.Max.field0_0x0._s_0.Y = dVar22;
    uVar28 = *(undefined7 *)&pFVar41[-1].UVRect.field_0x21;
    lVar35 = pFVar41[-1]._padding_;
    pFVar39[1].UVRect.bIsValid = pFVar41[-1].UVRect.bIsValid;
    *(undefined7 *)&pFVar39[1].UVRect.field_0x21 = uVar28;
    pFVar39[1]._padding_ = lVar35;
    dVar22 = pFVar41[-1].Transform.Rotation.XY.m128d_f64[1];
    pFVar39[1].Transform.Rotation.XY.m128d_f64[0] = pFVar41[-1].Transform.Rotation.XY.m128d_f64[0];
    pFVar39[1].Transform.Rotation.XY.m128d_f64[1] = dVar22;
    dVar22 = pFVar41[-1].Transform.Rotation.ZW.m128d_f64[1];
    pFVar39[1].Transform.Rotation.ZW.m128d_f64[0] = pFVar41[-1].Transform.Rotation.ZW.m128d_f64[0];
    pFVar39[1].Transform.Rotation.ZW.m128d_f64[1] = dVar22;
    dVar22 = pFVar41[-1].Transform.Translation.XY.m128d_f64[1];
    pFVar39[1].Transform.Translation.XY.m128d_f64[0] =
         pFVar41[-1].Transform.Translation.XY.m128d_f64[0];
    pFVar39[1].Transform.Translation.XY.m128d_f64[1] = dVar22;
    dVar22 = pFVar41[-1].Transform.Translation.ZW.m128d_f64[1];
    pFVar39[1].Transform.Translation.ZW.m128d_f64[0] =
         pFVar41[-1].Transform.Translation.ZW.m128d_f64[0];
    pFVar39[1].Transform.Translation.ZW.m128d_f64[1] = dVar22;
    dVar22 = pFVar41[-1].Transform.Scale3D.XY.m128d_f64[1];
    pFVar39[1].Transform.Scale3D.XY.m128d_f64[0] = pFVar41[-1].Transform.Scale3D.XY.m128d_f64[0];
    pFVar39[1].Transform.Scale3D.XY.m128d_f64[1] = dVar22;
    dVar22 = pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[1];
    pFVar39[1].Transform.Scale3D.ZW.m128d_f64[0] = pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[0];
    pFVar39[1].Transform.Scale3D.ZW.m128d_f64[1] = dVar22;
    pFVar23 = pFVar41[-1].Texture_Deprecated.Reference;
    pFVar39[1].Texture = pFVar41[-1].Texture;
    pFVar39[1].Texture_Deprecated.Reference = pFVar23;
    pFVar40->Id = uVar29;
    pFVar40->Priority = iVar30;
    pFVar41[-1].Flags = uVar31;
    pFVar41[-1].PositionType = EVar32;
    pFVar41[-1].QuadSize.field0_0x0._s_0.X = dVar2;
    pFVar41[-1].QuadSize.field0_0x0._s_0.Y = dVar3;
    pFVar41[-1].UVRect.Min.field0_0x0._s_0.X = dVar4;
    pFVar41[-1].UVRect.Min.field0_0x0._s_0.Y = dVar5;
    pFVar41[-1].UVRect.Max.field0_0x0._s_0.X = dVar6;
    pFVar41[-1].UVRect.Max.field0_0x0._s_0.Y = dVar7;
    pFVar41[-1].UVRect.bIsValid = bVar33;
    *(undefined7 *)&pFVar41[-1].UVRect.field_0x21 = uVar34;
    pFVar41[-1]._padding_ = lVar37;
    pFVar41[-1].Transform.Rotation.XY.m128d_f64[0] = dVar8;
    pFVar41[-1].Transform.Rotation.XY.m128d_f64[1] = dVar9;
    pFVar41[-1].Transform.Rotation.ZW.m128d_f64[0] = dVar10;
    pFVar41[-1].Transform.Rotation.ZW.m128d_f64[1] = dVar11;
    pFVar41[-1].Transform.Translation.XY.m128d_f64[0] = dVar12;
    pFVar41[-1].Transform.Translation.XY.m128d_f64[1] = dVar13;
    pFVar41[-1].Transform.Translation.ZW.m128d_f64[0] = dVar14;
    pFVar41[-1].Transform.Translation.ZW.m128d_f64[1] = dVar15;
    pFVar41[-1].Transform.Scale3D.XY.m128d_f64[0] = dVar16;
    pFVar41[-1].Transform.Scale3D.XY.m128d_f64[1] = dVar17;
    pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[0] = dVar18;
    pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[1] = dVar19;
    pFVar41[-1].Texture = pFVar20;
    pFVar41[-1].Texture_Deprecated.Reference = pFVar21;
    goto LAB_14cf7c1c0;
  }
  local_3f8._0_4_ = pFVar42->Id;
  local_3f8._4_4_ = pFVar42->Priority;
  uStack_3f0._0_4_ = pFVar42->Flags;
  uStack_3f0._4_4_ = pFVar42->PositionType;
  local_408._0_4_ = (int)local_408 + -1;
  local_3e8 = (pFVar42->QuadSize).field0_0x0._s_0.X;
  dStack_3e0 = (pFVar42->QuadSize).field0_0x0._s_0.Y;
  local_3d8 = (pFVar42->UVRect).Min.field0_0x0._s_0.X;
  dStack_3d0 = (pFVar42->UVRect).Min.field0_0x0._s_0.Y;
  local_3c8 = (pFVar42->UVRect).Max.field0_0x0._s_0.X;
  dStack_3c0 = (pFVar42->UVRect).Max.field0_0x0._s_0.Y;
  local_3b8 = *(undefined8 *)&(pFVar42->UVRect).bIsValid;
  lStack_3b0 = pFVar42->_padding_;
  local_3a8 = (pFVar42->Transform).Rotation.XY.m128d_f64[0];
  dStack_3a0 = (pFVar42->Transform).Rotation.XY.m128d_f64[1];
  local_398 = (pFVar42->Transform).Rotation.ZW.m128d_f64[0];
  dStack_390 = (pFVar42->Transform).Rotation.ZW.m128d_f64[1];
  local_388 = (pFVar42->Transform).Translation.XY.m128d_f64[0];
  dStack_380 = (pFVar42->Transform).Translation.XY.m128d_f64[1];
  local_378 = (pFVar42->Transform).Translation.ZW.m128d_f64[0];
  dStack_370 = (pFVar42->Transform).Translation.ZW.m128d_f64[1];
  local_368 = (pFVar42->Transform).Scale3D.XY.m128d_f64[0];
  dStack_360 = (pFVar42->Transform).Scale3D.XY.m128d_f64[1];
  local_358 = (pFVar42->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_350 = (pFVar42->Transform).Scale3D.ZW.m128d_f64[1];
  local_348 = pFVar42->Texture;
  pFStack_340 = (pFVar42->Texture_Deprecated).Reference;
  iVar36 = pFVar40->Priority;
  uVar26 = pFVar41[-1].Flags;
  EVar27 = pFVar41[-1].PositionType;
  pFVar42->Id = pFVar40->Id;
  pFVar42->Priority = iVar36;
  pFVar42->Flags = uVar26;
  pFVar42->PositionType = EVar27;
  dVar2 = pFVar41[-1].QuadSize.field0_0x0._s_0.Y;
  lVar35 = (longlong)pFVar40 + (-0xc0 - (longlong)pFVar42);
  (pFVar42->QuadSize).field0_0x0._s_0.X = pFVar41[-1].QuadSize.field0_0x0._s_0.X;
  (pFVar42->QuadSize).field0_0x0._s_0.Y = dVar2;
  dVar2 = pFVar41[-1].UVRect.Min.field0_0x0._s_0.Y;
  (pFVar42->UVRect).Min.field0_0x0._s_0.X = pFVar41[-1].UVRect.Min.field0_0x0._s_0.X;
  (pFVar42->UVRect).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = pFVar41[-1].UVRect.Max.field0_0x0._s_0.Y;
  (pFVar42->UVRect).Max.field0_0x0._s_0.X = pFVar41[-1].UVRect.Max.field0_0x0._s_0.X;
  (pFVar42->UVRect).Max.field0_0x0._s_0.Y = dVar2;
  uVar28 = *(undefined7 *)&pFVar41[-1].UVRect.field_0x21;
  lVar37 = pFVar41[-1]._padding_;
  (pFVar42->UVRect).bIsValid = pFVar41[-1].UVRect.bIsValid;
  *(undefined7 *)&(pFVar42->UVRect).field_0x21 = uVar28;
  pFVar42->_padding_ = lVar37;
  dVar2 = pFVar41[-1].Transform.Rotation.XY.m128d_f64[1];
  (pFVar42->Transform).Rotation.XY.m128d_f64[0] = pFVar41[-1].Transform.Rotation.XY.m128d_f64[0];
  (pFVar42->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = pFVar41[-1].Transform.Rotation.ZW.m128d_f64[1];
  (pFVar42->Transform).Rotation.ZW.m128d_f64[0] = pFVar41[-1].Transform.Rotation.ZW.m128d_f64[0];
  (pFVar42->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = pFVar41[-1].Transform.Translation.XY.m128d_f64[1];
  (pFVar42->Transform).Translation.XY.m128d_f64[0] =
       pFVar41[-1].Transform.Translation.XY.m128d_f64[0];
  (pFVar42->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = pFVar41[-1].Transform.Translation.ZW.m128d_f64[1];
  (pFVar42->Transform).Translation.ZW.m128d_f64[0] =
       pFVar41[-1].Transform.Translation.ZW.m128d_f64[0];
  (pFVar42->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = pFVar41[-1].Transform.Scale3D.XY.m128d_f64[1];
  (pFVar42->Transform).Scale3D.XY.m128d_f64[0] = pFVar41[-1].Transform.Scale3D.XY.m128d_f64[0];
  (pFVar42->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[1];
  (pFVar42->Transform).Scale3D.ZW.m128d_f64[0] = pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[0];
  (pFVar42->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  pFVar21 = pFVar41[-1].Texture_Deprecated.Reference;
  pFVar42->Texture = pFVar41[-1].Texture;
  (pFVar42->Texture_Deprecated).Reference = pFVar21;
  pFVar40->Id = (undefined4)local_3f8;
  pFVar40->Priority = local_3f8._4_4_;
  pFVar41[-1].Flags = (undefined4)uStack_3f0;
  pFVar41[-1].PositionType = uStack_3f0._4_4_;
  pFVar41[-1].QuadSize.field0_0x0._s_0.X = local_3e8;
  pFVar41[-1].QuadSize.field0_0x0._s_0.Y = dStack_3e0;
  pFVar41[-1].UVRect.Min.field0_0x0._s_0.X = local_3d8;
  pFVar41[-1].UVRect.Min.field0_0x0._s_0.Y = dStack_3d0;
  pFVar41[-1].UVRect.Max.field0_0x0._s_0.X = local_3c8;
  pFVar41[-1].UVRect.Max.field0_0x0._s_0.Y = dStack_3c0;
  *(undefined8 *)&pFVar41[-1].UVRect.bIsValid = local_3b8;
  pFVar41[-1]._padding_ = lStack_3b0;
  pFVar41[-1].Transform.Rotation.XY.m128d_f64[0] = local_3a8;
  pFVar41[-1].Transform.Rotation.XY.m128d_f64[1] = dStack_3a0;
  pFVar41[-1].Transform.Rotation.ZW.m128d_f64[0] = local_398;
  pFVar41[-1].Transform.Rotation.ZW.m128d_f64[1] = dStack_390;
  pFVar41[-1].Transform.Translation.XY.m128d_f64[0] = local_388;
  pFVar41[-1].Transform.Translation.XY.m128d_f64[1] = dStack_380;
  pFVar41[-1].Transform.Translation.ZW.m128d_f64[0] = local_378;
  pFVar41[-1].Transform.Translation.ZW.m128d_f64[1] = dStack_370;
  pFVar41[-1].Transform.Scale3D.XY.m128d_f64[0] = local_368;
  pFVar41[-1].Transform.Scale3D.XY.m128d_f64[1] = dStack_360;
  lVar37 = lVar35 / 6 + (lVar35 >> 0x3f);
  pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[0] = local_358;
  pFVar41[-1].Transform.Scale3D.ZW.m128d_f64[1] = dStack_350;
  pFVar41[-1].Texture = local_348;
  pFVar41[-1].Texture_Deprecated.Reference = pFStack_340;
  if ((lVar37 >> 5) - (lVar37 >> 0x3f) < ((longlong)pFVar38 - (longlong)pFVar43) / 0xc0) {
    if (pFVar43 < pFVar38) {
      *ppFVar44 = pFVar43;
      ppFVar44[1] = pFVar38;
      *(int *)(ppFVar44 + 2) = (int)local_408;
      ppFVar44 = ppFVar44 + 3;
    }
    if (pFVar40 <= pFVar42 + 1) goto LAB_14cf7c602;
    pFVar38 = pFVar41 + -2;
    pFVar43 = pFVar42;
  }
  else {
    if (pFVar42 + 1 < pFVar40) {
      *ppFVar44 = pFVar42;
      ppFVar44[1] = pFVar41 + -2;
      *(int *)(ppFVar44 + 2) = (int)local_408;
      ppFVar44 = ppFVar44 + 3;
    }
    if (pFVar38 <= pFVar43) goto LAB_14cf7c602;
  }
  iVar36 = (int)(((longlong)pFVar38 - (longlong)pFVar43) / 0xc0) + 1;
  pFVar42 = pFVar43;
  if ((int)local_408 == 0) goto LAB_14cf7c5f3;
  goto LAB_14cf7c010;
}

// NewObject<UAsyncTask_LoadXRDeviceVisComponent> @ 14cf7cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncTask_LoadXRDeviceVisComponent * __cdecl
NewObject<UAsyncTask_LoadXRDeviceVisComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncTask_LoadXRDeviceVisComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncTask_LoadXRDeviceVisComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncTask_LoadXRDeviceVisComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// SetShaderParametersLegacy<FRHICommandListImmediate,FDisplayMappingPS,FRHIPixelShader,enum_EDisplayOutputFormat_const_&,enum_EDisplayColorGamut_const_&,enum_EDisplayColorGamut_const_&,FRHITexture_*_&,FRHISamplerState_*_const_&,unsigned_int_&> @ 14cf7ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParametersLegacy<FRHICommandListImmediate,FDisplayMappingPS,FRHIPixelShader,enum_EDisplayOutputFormat_const_&,enum_EDisplayColorGamut_const_&,enum_EDisplayColorGamut_const_&,FRHITexture_*_&,FRHISamplerState_*_const_&,unsigned_int_&>
          (FRHICommandListImmediate *param_1,
          TShaderRefBase<FDisplayMappingPS,FShaderMapPointerTable> *param_2,FRHIPixelShader *param_3
          ,EDisplayOutputFormat *param_4,EDisplayColorGamut *param_5,EDisplayColorGamut *param_6,
          FRHITexture **param_7,FRHISamplerState **param_8,uint *param_9)

{
  ushort uVar1;
  EDisplayColorGamut EVar2;
  EDisplayColorGamut EVar3;
  FDisplayMappingPS *pFVar4;
  FRHIBatchedShaderParameters *this;
  uint uVar5;
  undefined1 auStackY_168 [32];
  EDisplayOutputFormat local_138;
  EDisplayColorGamut local_134;
  uint local_130 [2];
  FRHITexture *local_128;
  FRHISamplerState *local_120;
  TMatrix<float> local_118;
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  local_130[0] = *param_9;
  EVar2 = *param_5;
  pFVar4 = param_2->ShaderContent;
  uVar1 = (pFVar4->OutputDevice).NumBytes;
  uVar5 = (uint)uVar1;
  local_120 = *param_8;
  if (4 < uVar1) {
    uVar5 = 4;
  }
  local_128 = *param_7;
  local_138 = *param_4;
  EVar3 = *param_6;
  local_134 = EVar2;
  if (uVar5 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this,(uint)(pFVar4->OutputDevice).BufferIndex,(uint)(pFVar4->OutputDevice).BaseIndex,
               uVar5,&local_138);
  }
  uVar1 = (pFVar4->OutputGamut).NumBytes;
  uVar5 = (uint)uVar1;
  if (4 < uVar1) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this,(uint)(pFVar4->OutputGamut).BufferIndex,(uint)(pFVar4->OutputGamut).BaseIndex,
               uVar5,&local_134);
  }
  FDisplayMappingPS::GamutToXYZMatrix(&local_118,EVar3);
  FDisplayMappingPS::XYZToGamutMatrix(&local_d8,EVar2);
  VectorMatrixMultiply(&local_98,&local_d8,&local_118);
  uVar1 = (pFVar4->TextureToOutputGamutMatrix).NumBytes;
  uVar5 = (uint)uVar1;
  if (0x40 < uVar1) {
    uVar5 = 0x40;
  }
  if (uVar5 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this,(uint)(pFVar4->TextureToOutputGamutMatrix).BufferIndex,
               (uint)(pFVar4->TextureToOutputGamutMatrix).BaseIndex,uVar5,&local_98);
  }
  SetTextureParameter(this,&pFVar4->SceneTexture,local_128);
  SetSamplerParameter(this,&pFVar4->SceneSampler,local_120);
  uVar1 = (pFVar4->ArraySlice).NumBytes;
  uVar5 = (uint)uVar1;
  if (4 < uVar1) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this,(uint)(pFVar4->ArraySlice).BufferIndex,(uint)(pFVar4->ArraySlice).BaseIndex,
               uVar5,local_130);
  }
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)param_3,this);
  return;
}

// ~TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::<lambda_1>,1,1> @ 14cf7e8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FDefaultSpectatorScreenController::BeginRenderViewFamily_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>,0,0> @ 14cf7e8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0> @ 14cf7e8f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_ExecuteOnRenderThread_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0> @ 14cf7e910

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_ExecuteOnRenderThread_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1> @ 14cf7e930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_ExecuteOnRenderThread_DoNotWait_::__l2::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cf7e953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1> @ 14cf7e960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_ExecuteOnRenderThread_DoNotWait_::__l2::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cf7e983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::<lambda_1>,1,0> @ 14cf7e990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FDefaultSpectatorScreenController::SetSpectatorScreenMode_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::<lambda_1>,1,1> @ 14cf7e9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>,1,1> @ 14cf7e9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_3>,1,1>::
        _vftable_;
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            (*(FStereoLayerToRenderTransfer **)((longlong)this + 0x20),
             *(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            (*(FStereoLayerToRenderTransfer **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// operator() @ 14cf7fa40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`AddXRCopyTexturePass'::__l6::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  uint uVar2;
  FRDGResource *pFVar3;
  FRHITexture *pFVar4;
  TIntRect<int>_u_0 local_38;
  TIntRect<int>_u_0 local_28;
  
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x20);
  pFVar3 = *(FRDGResource **)((longlong)this + 0x18);
  uVar1 = *(uint *)((longlong)this + 0x54);
  uVar2 = *(uint *)((longlong)this + 0x50);
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x28);
  FRDGResource::ValidateRHIAccess(pFVar3);
  local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 8);
  pFVar4 = (FRHITexture *)pFVar3->ResourceRHI;
  pFVar3 = *(FRDGResource **)this;
  local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x10);
  FRDGResource::ValidateRHIAccess(pFVar3);
  XRCopyTexture_InRenderPass
            (param_1,(FRHITexture *)pFVar3->ResourceRHI,(TIntRect<int> *)&local_28._s_0,pFVar4,
             (TIntRect<int> *)&local_38._s_0,(FXRCopyTextureOptions *)((longlong)this + 0x30),uVar2,
             uVar1);
  return;
}

// `vcall'{152,{flat}}'_}' @ 14cf7fdf8

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{152,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__152__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{160,{flat}}'_}' @ 14cf7fe08

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{160,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__160__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))();
  return;
}

// `vcall'{168,{flat}}'_}' @ 14cf7fe18

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{168,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__168__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa8))();
  return;
}

// `vcall'{176,{flat}}'_}' @ 14cf7fe28

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{176,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__176__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb0))();
  return;
}

// `vcall'{184,{flat}}'_}' @ 14cf7fe38

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{184,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__184__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))();
  return;
}

// `vcall'{192,{flat}}'_}' @ 14cf7fe48

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{192,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__192__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))();
  return;
}

// `vcall'{200,{flat}}'_}' @ 14cf7fe58

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultSpectatorScreenController::`vcall'{200,{flat}}' }' */

void __thiscall
FDefaultSpectatorScreenController::_vcall__200__flat______(FDefaultSpectatorScreenController *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf7fe5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 200))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cf7fe68

/* [thunk]:public: virtual void * __ptr64 __cdecl TXRLoadingScreenBase<struct FSplashData>::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TXRLoadingScreenBase<FSplashData>::_vector_deleting_destructor__adjustor_8__
          (TXRLoadingScreenBase<FSplashData> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TXRLoadingScreenBase<FSplashData> *)&this[-1].LastTimeInSeconds,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{104}' @ 14cf7fe78

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultStereoLayers::`vector deleting
   destructor'`adjustor{104}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultStereoLayers::_vector_deleting_destructor__adjustor_104__
          (FDefaultStereoLayers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDefaultStereoLayers *)(this[-1].HmdTransform.Translation.XY.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{120}' @ 14cf7fe88

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultStereoLayers::`vector deleting
   destructor'`adjustor{120}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultStereoLayers::_vector_deleting_destructor__adjustor_120__
          (FDefaultStereoLayers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDefaultStereoLayers *)(this[-1].HmdTransform.Rotation.ZW.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cf7fe98

/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultXRCamera::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultXRCamera::_vector_deleting_destructor__adjustor_8__(FDefaultXRCamera *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDefaultXRCamera *)&this[-1].field_0x238,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cf7fea8

/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultXRLoadingScreen::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultXRLoadingScreen::_vector_deleting_destructor__adjustor_8__
          (FDefaultXRLoadingScreen *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDefaultXRLoadingScreen *)&this[-1].field_0x68,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 14cf7feb8

/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultXRLoadingScreen::`vector deleting
   destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultXRLoadingScreen::_vector_deleting_destructor__adjustor_96__
          (FDefaultXRLoadingScreen *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDefaultXRLoadingScreen *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{256}' @ 14cf7fec8

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FHeadMountedDisplayBase::`vector deleting
   destructor'`adjustor{256}' (unsigned int) __ptr64 */

void * __thiscall
FHeadMountedDisplayBase::_vector_deleting_destructor__adjustor_256__
          (FHeadMountedDisplayBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FHeadMountedDisplayBase *)&this[-1].field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{248}' @ 14cf7fedc

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FHeadMountedDisplayBase::`vector deleting
   destructor'`adjustor{248}' (unsigned int) __ptr64 */

void * __thiscall
FHeadMountedDisplayBase::_vector_deleting_destructor__adjustor_248__
          (FHeadMountedDisplayBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FHeadMountedDisplayBase *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{104}' @ 14cf7fef0

/* [thunk]:public: virtual void * __ptr64 __cdecl FSimpleLayerManager::`vector deleting
   destructor'`adjustor{104}' (unsigned int) __ptr64 */

void * __thiscall
FSimpleLayerManager::_vector_deleting_destructor__adjustor_104__
          (FSimpleLayerManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSimpleLayerManager *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf7ff00

/* [thunk]:public: virtual void * __ptr64 __cdecl UVRNotificationsComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UVRNotificationsComponent::_vector_deleting_destructor__adjustor_40__
          (UVRNotificationsComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UVRNotificationsComponent *)&this[-1].XRPlayAreaChangedDelegate.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14cf7ff10

/* [thunk]:public: virtual void * __ptr64 __cdecl UXRDeviceVisualizationComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UXRDeviceVisualizationComponent::_vector_deleting_destructor__adjustor_592__
          (UXRDeviceVisualizationComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UXRDeviceVisualizationComponent *)&this[-1].field_0x450,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14cf7ff24

/* [thunk]:public: virtual void * __ptr64 __cdecl UXRDeviceVisualizationComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UXRDeviceVisualizationComponent::_vector_deleting_destructor__adjustor_600__
          (UXRDeviceVisualizationComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UXRDeviceVisualizationComponent *)&this[-1].field_0x448,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14cf7ff38

/* [thunk]:public: virtual void * __ptr64 __cdecl UXRDeviceVisualizationComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UXRDeviceVisualizationComponent::_vector_deleting_destructor__adjustor_608__
          (UXRDeviceVisualizationComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UXRDeviceVisualizationComponent *)&this[-1].field_0x440,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf7ff4c

/* [thunk]:public: virtual void * __ptr64 __cdecl UXRDeviceVisualizationComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UXRDeviceVisualizationComponent::_vector_deleting_destructor__adjustor_40__
          (UXRDeviceVisualizationComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UXRDeviceVisualizationComponent *)&this[-1].bIsRenderingActive,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cf7ff60

void * __thiscall
IBaseDelegateInstance<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf7ff90

void * __thiscall
IBaseDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf7ffc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf7fff0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80020

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy,`UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UVRNotificationsComponent,void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UVRNotificationsComponent,void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf800b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UVRNotificationsComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UVRNotificationsComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf800e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UXRDeviceVisualizationComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf801a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf801d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::BeginRenderViewFamily'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80280

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf802c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ExecuteOnRenderThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf803c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenMode'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultSpectatorScreenController::SetSpectatorScreenModeTexturePlusEyeLayout'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_3>,1,1>::
        _vftable_;
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            (*(FStereoLayerToRenderTransfer **)((longlong)this + 0x20),
             *(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            (*(FStereoLayerToRenderTransfer **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf804c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FARSupportInterface,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FARSupportInterface,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80500

void * __thiscall
FRDGAllocator::TObject<FDefaultStereoLayers_LayerRenderParams>::_scalar_deleting_destructor_
          (TObject<FDefaultStereoLayers_LayerRenderParams> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRenderLayersPass>::_scalar_deleting_destructor_
          (TObject<FRenderLayersPass> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FXRCopyTexturePass>::_scalar_deleting_destructor_
          (TObject<FXRCopyTexturePass> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80590

void * __thiscall
TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf805f0

void * __thiscall
TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::__l19::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80650

void * __thiscall
TRDGLambdaPass<FXRCopyTexturePass,`AddXRCopyTexturePass'::__l6::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf806b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultStereoLayers,SharedPointerInternals::DefaultDeleter<FDefaultStereoLayers>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultStereoLayers,SharedPointerInternals::DefaultDeleter<FDefaultStereoLayers>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf806f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultXRCamera,SharedPointerInternals::DefaultDeleter<FDefaultXRCamera>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultXRCamera,SharedPointerInternals::DefaultDeleter<FDefaultXRCamera>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80730

void * __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::_scalar_deleting_destructor_
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TStereoLayerManager_UFLayerDesc_IStereoLayers____6B_;
  DestructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
            ((FLayerData *)(this->LayerStack).AllocatorInstance.Data,(this->LayerStack).ArrayNum);
  pFVar1 = (this->LayerStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IStereoLayers__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf807b0

void * __thiscall
TXRLoadingScreenBase<FSplashData>::_scalar_deleting_destructor_
          (TXRLoadingScreenBase<FSplashData> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSplashData,int>
            ((FSplashData *)(this->Splashes).AllocatorInstance.Data,(this->Splashes).ArrayNum);
  pFVar1 = (this->Splashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7IXRLoadingScreen__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FDefaultSpectatorScreenController::_scalar_deleting_destructor_
          (FDefaultSpectatorScreenController *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FDefaultSpectatorScreenController__6B_;
  this_00 = (this->StereoLayersTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar3 = (this->DebugCanvasLayerIDs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->SpectatorScreenDelegate_RenderThread);
  pvVar4 = *(void **)&(this->SpectatorScreenDelegate_RenderThread).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SpectatorScreenDelegate_RenderThread);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7ISpectatorScreenController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf808f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FDefaultStereoLayers::_scalar_deleting_destructor_(FDefaultStereoLayers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>
            ((FStereoLayerToRender *)(this->SortedOverlayLayers).AllocatorInstance.Data,
             (this->SortedOverlayLayers).ArrayNum);
  pFVar1 = (this->SortedOverlayLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>
            ((FStereoLayerToRender *)(this->SortedSceneLayers).AllocatorInstance.Data,
             (this->SortedSceneLayers).ArrayNum);
  pFVar1 = (this->SortedSceneLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)&this->field_0x78);
  FSimpleLayerManager::~FSimpleLayerManager((FSimpleLayerManager *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80980

void * __thiscall
FDefaultXRCamera::_scalar_deleting_destructor_(FDefaultXRCamera *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__IXRCamera__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FHMDSceneViewExtension__;
  FLateUpdateManager::~FLateUpdateManager(&this->LateUpdate);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf809f0

void * __thiscall
FDefaultXRLoadingScreen::_scalar_deleting_destructor_(FDefaultXRLoadingScreen *this,uint param_1)

{
  *(undefined ***)&this->field_0x60 = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->field_0x60);
  DestructItems<FSplashData,int>(*(FSplashData **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->field_0x8);
  *(undefined ***)this = &___7IXRLoadingScreen__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80a70

void * __thiscall
FHMDSceneViewExtension::_scalar_deleting_destructor_(FHMDSceneViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FHeadMountedDisplayBase::_scalar_deleting_destructor_(FHeadMountedDisplayBase *this,uint param_1)

{
  FDefaultSpectatorScreenController *pFVar1;
  
  *(undefined ***)this = &_vftable__for__FXRTrackingSystemBase__;
  *(undefined ***)&this->field_0xf8 = &_vftable__for__IHeadMountedDisplay__;
  *(undefined ***)&this->field_0x100 = &_vftable__for__IStereoRendering__;
  pFVar1 = (this->SpectatorScreenController).Ptr;
  if (pFVar1 != (FDefaultSpectatorScreenController *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultStereoLayers).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x100 = &___7IStereoRendering__6B_;
  *(undefined ***)&this->field_0xf8 = IModuleInterface::vftable;
  FXRTrackingSystemBase::~FXRTrackingSystemBase((FXRTrackingSystemBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80b60

void * __thiscall
FSimpleLayerManager::_scalar_deleting_destructor_(FSimpleLayerManager *this,uint param_1)

{
  ~FSimpleLayerManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80ba0

void * __thiscall FXRSwapChain::_scalar_deleting_destructor_(FXRSwapChain *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *this_00;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FXRSwapChain__6B_;
  pFVar3 = (this->DebugLabel).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->RHITextureSwapChain).AllocatorInstance.Data,
             (this->RHITextureSwapChain).ArrayNum);
  pFVar3 = (this->RHITextureSwapChain).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->RHITexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80c40

void * __thiscall
FXRTrackingSystemBase::_scalar_deleting_destructor_(FXRTrackingSystemBase *this,uint param_1)

{
  ~FXRTrackingSystemBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80c80

void * __thiscall
ISpectatorScreenController::_scalar_deleting_destructor_
          (ISpectatorScreenController *this,uint param_1)

{
  *this = (ISpectatorScreenController)&___7ISpectatorScreenController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80cc0

void * __thiscall IStereoLayers::_scalar_deleting_destructor_(IStereoLayers *this,uint param_1)

{
  FRHITexture *pFVar1;
  
  this->_padding_ = (longlong)&___7IStereoLayers__6B_;
  pFVar1 = (this->SplashMovie).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SplashTexture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80d20

void * __thiscall
IXRLoadingScreen::_scalar_deleting_destructor_(IXRLoadingScreen *this,uint param_1)

{
  *this = (IXRLoadingScreen)&___7IXRLoadingScreen__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UAsyncTask_LoadXRDeviceVisComponent::_scalar_deleting_destructor_
          (UAsyncTask_LoadXRDeviceVisComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncTask_LoadXRDeviceVisComponent__6B_;
  pvVar1 = *(void **)&(this->OnLoadFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadFailure);
  pvVar1 = *(void **)&(this->OnModelLoaded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModelLoaded);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80e00

void * __thiscall
UHeadMountedDisplayFunctionLibrary::_scalar_deleting_destructor_
          (UHeadMountedDisplayFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UHeadMountedDisplayFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80e60

void * __thiscall
UMotionTrackedDeviceFunctionLibrary::_scalar_deleting_destructor_
          (UMotionTrackedDeviceFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80ec0

void * __thiscall
UVRNotificationsComponent::_scalar_deleting_destructor_
          (UVRNotificationsComponent *this,uint param_1)

{
  ~UVRNotificationsComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80f20

void * __thiscall
UXRAssetFunctionLibrary::_scalar_deleting_destructor_(UXRAssetFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UXRAssetFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf80f80

void * __thiscall
UXRDeviceVisualizationComponent::_scalar_deleting_destructor_
          (UXRDeviceVisualizationComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->DisplayMeshMaterialOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf81040

void * __thiscall
UXRLoadingScreenFunctionLibrary::_scalar_deleting_destructor_
          (UXRLoadingScreenFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UXRLoadingScreenFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AddDeviceVisualizationComponent @ 14cf81110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
XRAssetFunctionLibrary_Impl::AddDeviceVisualizationComponent
          (AActor *param_1,FXRDeviceId *param_2,bool param_3,TTransform<double> *param_4,
          bool param_5,
          TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *param_6)

{
  FScriptContainerElement *pFVar1;
  IXRSystemIdentifier *pIVar2;
  bool bVar3;
  IModularFeatures *this;
  UPrimitiveComponent *pUVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<IXRSystemAssets_*,TSizedDefaultAllocator<32>_> local_48;
  
  pUVar4 = (UPrimitiveComponent *)0x0;
  if ((param_1 == (AActor *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
    return (UPrimitiveComponent *)0x0;
  }
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"XRSystemAssets");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IXRSystemAssets>
            (this,&local_48,
             `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2
             ::FeatureName);
  iVar5 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 8;
  FVar6.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar5) {
      `TCheckedPointerIterator<IXRSystemAssets_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar6.Data == pFVar1) goto LAB_14cf8123d;
    pIVar2 = *(IXRSystemIdentifier **)FVar6.Data;
    bVar3 = FXRDeviceId::IsOwnedBy(param_2,pIVar2);
    if (bVar3) break;
    FVar6.Data = FVar6.Data + 8;
  }
  pUVar4 = SpawnDeviceComponent
                     (param_1,(IXRSystemAssets *)pIVar2,param_2->DeviceId,param_3,param_4,param_5,
                      param_6);
  if ((pUVar4 == (UPrimitiveComponent *)0x0) && (2 < (byte)LogHMD._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
LAB_14cf8123d:
    if (2 < (byte)LogHMD._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pUVar4;
}

// AddNamedDeviceVisualizationComponent @ 14cf816f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
XRAssetFunctionLibrary_Impl::AddNamedDeviceVisualizationComponent
          (AActor *param_1,FName param_2,FName param_3,bool param_4,TTransform<double> *param_5,
          FXRDeviceId *param_6,bool param_7,
          TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *param_8)

{
  FScriptContainerElement *pFVar1;
  IXRSystemAssets *pIVar2;
  bool bVar3;
  int iVar4;
  IModularFeatures *this;
  FName *pFVar5;
  UPrimitiveComponent *pUVar6;
  FXRDeviceId *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FName local_res18;
  bool local_res20;
  EControllerHand local_58;
  undefined1 local_57 [3];
  FXRDeviceId local_54;
  TArray<IXRSystemAssets_*,TSizedDefaultAllocator<32>_> local_48;
  
  local_58 = Special;
  pUVar6 = (UPrimitiveComponent *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  bVar3 = IMotionController::GetHandEnumForSourceName(param_3,&local_58);
  if (bVar3) {
    this = IModularFeatures::Get();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"XRSystemAssets");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    IModularFeatures::GetModularFeatureImplementations<IXRSystemAssets>
              (this,&local_48,
               `public:_static_class_FName___cdecl_IXRSystemAssets::GetModularFeatureName(void)'::
               __l2::FeatureName);
    iVar8 = local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar9.Data = local_48.AllocatorInstance.Data;
    do {
      if (local_48.ArrayNum != iVar8) {
        `TCheckedPointerIterator<IXRSystemAssets_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_57);
      }
      if (FVar9.Data == pFVar1) goto LAB_14cf81860;
      pIVar2 = *(IXRSystemAssets **)FVar9.Data;
      if ((param_2 == (FName)0x0) ||
         (pFVar5 = (FName *)(**(code **)*pIVar2)(pIVar2,&local_54), *pFVar5 == param_2)) {
        iVar4 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,local_58);
        pUVar6 = SpawnDeviceComponent(param_1,pIVar2,iVar4,local_res20,param_5,param_7,param_8);
        if (pUVar6 != (UPrimitiveComponent *)0x0) goto LAB_14cf8183a;
      }
      FVar9.Data = FVar9.Data + 8;
    } while( true );
  }
LAB_14cf81898:
  if (2 < (byte)LogHMD._0_1_) {
    ::FName::ToString(&local_res18,(FString *)&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return (UPrimitiveComponent *)0x0;
LAB_14cf8183a:
  pFVar7 = FXRDeviceId::FXRDeviceId(&local_54,(IXRSystemIdentifier *)pIVar2,iVar4);
  param_6->SystemName = pFVar7->SystemName;
  param_6->DeviceId = pFVar7->DeviceId;
LAB_14cf81860:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (pUVar6 != (UPrimitiveComponent *)0x0) {
    return pUVar6;
  }
  goto LAB_14cf81898;
}

// AddXRCopyTexturePass @ 14cf82750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
AddXRCopyTexturePass
          (FRDGBuilder *param_1,FRDGEventName *param_2,FRDGTexture *param_3,TIntRect<int> *param_4,
          FRDGTexture *param_5,TIntRect<int> *param_6,FXRCopyTextureOptions *param_7)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *local_f0;
  FRenderTargetBinding local_e8;
  FMemStackBase *local_d0;
  FGenerateMipsParams local_c8;
  FRDGTextureAccess local_b8;
  <lambda_1> local_a0;
  
  if (((param_5->Desc).field_0x32 == '\x01') && ((param_3->Desc).field_0x32 == '\x01')) {
    uVar3 = *(ushort *)&(param_3->Desc).field_0x2e;
    uVar4 = *(ushort *)&(param_5->Desc).field_0x2e;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    uVar10 = (uint)uVar3;
  }
  else {
    uVar10 = 1;
  }
  bVar2 = (param_3->Desc).field_0x30;
  if ((param_7->bOutputMipChain == false) || (bVar2 < 2)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (uint)(byte)(param_5->Desc).field_0x30;
  }
  iVar12 = 0;
  if (uVar10 != 0) {
    do {
      iVar11 = 0;
      if (uVar7 != 0) {
        local_d0 = (FMemStackBase *)&param_1->_padding_;
        plVar1 = &param_1->_padding_;
        do {
          puVar9 = FMemStackBase::Alloc(local_d0,0x130,0x10);
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)0x0;
            bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                               ,0x61,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            *puVar9 = &___7__TObject_VFXRCopyTexturePass___FRDGAllocator__6B_;
            puVar9[2] = 0;
            *(undefined4 *)(puVar9 + 3) = 0;
            *(undefined8 *)((longlong)puVar9 + 0x1c) = 0;
            FRenderTargetBindingSlots::FRenderTargetBindingSlots
                      ((FRenderTargetBindingSlots *)(puVar9 + 6));
          }
          local_f0 = puVar9;
          if ((((undefined8 **)*plVar1 <= &local_f0) &&
              (&local_f0 < (undefined8 **)*plVar1 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)param_1->_padding_;
          if (iVar8 == *(int *)((longlong)&param_1->_padding_ + 4)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)plVar1,
                               (int *)((longlong)&param_1->_padding_ + 4));
          }
          *(int *)&param_1->_padding_ = iVar8 + 1;
          *(undefined8 **)(*plVar1 + (longlong)iVar8 * 8) = local_f0;
          FRDGTextureAccess::FRDGTextureAccess(&local_b8,param_3,SRVGraphics);
          puVar9[2] = local_b8.Texture;
          *(FRDGTextureSubresourceRange *)(puVar9 + 3) = local_b8.SubresourceRange;
          local_e8.ResolveTexture = (FRDGTexture *)0x0;
          puVar9[4] = local_b8._16_8_;
          local_e8.LoadAction = param_7->LoadAction;
          local_e8.MipIndex = (uchar)iVar11;
          local_e8.ArraySlice = (short)iVar12;
          local_e8.Texture = param_5;
          bVar6 = FRenderTargetBinding::Validate(&local_e8);
          if ((!bVar6) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Validate()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                 ,0x216,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar9[6] = local_e8.Texture;
          puVar9[7] = local_e8.ResolveTexture;
          puVar9[8] = CONCAT44(local_e8._20_4_,
                               CONCAT22(local_e8.ArraySlice,
                                        CONCAT11(local_e8.MipIndex,local_e8.LoadAction)));
          local_a0.SrcRect.field0_0x0._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(param_4->field0_0x0)._s_0.Min.field0_0x0;
          local_a0.Options.FeatureLevel.FeatureLevel = (param_7->FeatureLevel).FeatureLevel;
          local_a0.Options.ShaderPlatform.Platform = (param_7->ShaderPlatform).Platform;
          local_a0.Options.LoadAction = param_7->LoadAction;
          local_a0.Options.BlendMod = param_7->BlendMod;
          local_a0.Options.bClearBlack = param_7->bClearBlack;
          local_a0.Options.bOutputMipChain = param_7->bOutputMipChain;
          local_a0.Options.bNeedsDisplayMapping = param_7->bNeedsDisplayMapping;
          local_a0.Options.bSrcIsLinear = param_7->bSrcIsLinear;
          local_a0.Options.bSrcSupportsHDR = param_7->bSrcSupportsHDR;
          local_a0.Options.bDstSupportsHDR = param_7->bDstSupportsHDR;
          local_a0.Options._14_2_ = *(undefined2 *)&param_7->field_0xe;
          local_a0.SrcRect.field0_0x0._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(param_4->field0_0x0)._s_0.Max.field0_0x0;
          local_a0.Options.SrcColorGamut = param_7->SrcColorGamut;
          local_a0.Options.DstColorGamut = param_7->DstColorGamut;
          local_a0.Options.SrcDisplayFormat = param_7->SrcDisplayFormat;
          local_a0.Options.DstDisplayFormat = param_7->DstDisplayFormat;
          local_a0.DstRect.field0_0x0._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(param_6->field0_0x0)._s_0.Min.field0_0x0;
          local_a0.DstRect.field0_0x0._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(param_6->field0_0x0)._s_0.Max.field0_0x0;
          local_a0.SrcTexture = param_3;
          local_a0.DstTexture = param_5;
          local_a0.ArraySlice = iVar12;
          local_a0.MipLevel = iVar11;
          FRDGBuilder::AddPass<FXRCopyTexturePass,_AddXRCopyTexturePass_::__l6::<lambda_1>_>
                    (param_1,param_2,(FXRCopyTexturePass *)(puVar9 + 2),Raster,&local_a0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar7);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar10);
  }
  if (((param_7->bOutputMipChain != false) && (1 < (byte)(param_5->Desc).field_0x30)) && (bVar2 < 2)
     ) {
    local_c8.Filter = ___xmm_00000001000000010000000100000001;
    local_c8.AddressU = _UNK_150631da4;
    local_c8.AddressV = _UNK_150631da8;
    local_c8.AddressW = _UNK_150631dac;
    FGenerateMips::Execute
              (param_1,(param_7->FeatureLevel).FeatureLevel,param_5,&local_c8,AutoDetect);
  }
  return;
}

// CompatExec @ 14cf84910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl CompatExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  wchar_t *local_res10;
  ForAnyElementType FVar9;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_res10 = param_2;
  bVar4 = FParse::Command(&local_res10,L"vr.SetTrackingOrigin",true);
  if (bVar4) {
    FString::PrintfImpl(&local_98,L"vr.TrackingOrigin %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_98.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  bVar4 = FParse::Command(&local_res10,L"vr.MirrorMode",true);
  if (bVar4) {
    FString::PrintfImpl(&local_88,L"vr.SpectatorScreenMode %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_88.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    goto LAB_14cf84d29;
  }
  bVar4 = FParse::Command(&local_res10,L"HMDPOS",true);
  if (!bVar4) {
    bVar4 = FParse::Command(&local_res10,L"HMD",true);
    if (bVar4) {
      bVar4 = FParse::Command(&local_res10,L"ON",true);
      if ((bVar4) || (bVar4 = FParse::Command(&local_res10,L"ENABLE",true), bVar4)) {
        FString::operator=(&local_b8,L"vr.bEnableHMD True");
      }
      bVar4 = FParse::Command(&local_res10,L"OFF",true);
      if ((!bVar4) && (bVar4 = FParse::Command(&local_res10,L"DISABLE",true), !bVar4))
      goto LAB_14cf84d29;
      pwVar7 = L"vr.bEnableHMD False";
    }
    else {
      bVar4 = FParse::Command(&local_res10,L"STEREO",true);
      if (bVar4) {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        bVar4 = FParse::Command(&local_res10,L"ON",true);
        if ((bVar4) || (bVar4 = FParse::Command(&local_res10,L"ENABLE",true), bVar4)) {
          pwVar7 = L"vr.bEnableStereo True";
LAB_14cf84cf0:
          FString::operator=(&local_b8,pwVar7);
        }
        else {
          bVar4 = FParse::Command(&local_res10,L"OFF",true);
          if ((bVar4) || (bVar4 = FParse::Command(&local_res10,L"DISABLE",true), bVar4)) {
            pwVar7 = L"vr.bEnableStereo False";
            goto LAB_14cf84cf0;
          }
          bVar4 = FParse::Value(local_res10,L"W2M=",&local_58,true,(wchar_t **)0x0);
          if (bVar4) {
            FString::PrintfImpl(&local_68,L"vr.WorldToMetersScale %s");
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            local_b8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            local_b8.Data.ArrayNum = local_68.Data.ArrayNum;
            local_b8.Data.ArrayMax = local_68.Data.ArrayMax;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14cf84d29;
      }
      bVar4 = FParse::Command(&local_res10,L"HMDVERSION",true);
      if (!bVar4) goto LAB_14cf84d29;
      pwVar7 = L"vr.HMDVersion";
    }
    FString::operator=(&local_b8,pwVar7);
    goto LAB_14cf84d29;
  }
  FParse::Token(&local_a8,&local_res10,false);
  FString::FString(&local_38,L"EYE");
  if (local_a8.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_a8.Data.ArrayNum) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar4 = iVar6 == 0;
      goto LAB_14cf84a73;
    }
    bVar2 = false;
LAB_14cf84ad6:
    bVar4 = true;
    bVar3 = true;
    if (bVar2) goto LAB_14cf84adc;
  }
  else {
    bVar4 = local_38.Data.ArrayNum + local_a8.Data.ArrayNum == 1;
LAB_14cf84a73:
    bVar2 = false;
    if (bVar4) goto LAB_14cf84ad6;
    FString::FString(&local_48,L"FLOOR");
    if (local_a8.Data.ArrayNum == local_48.Data.ArrayNum) {
      if (local_a8.Data.ArrayNum < 2) {
        bVar2 = true;
        goto LAB_14cf84ad6;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_48.Data.AllocatorInstance.Data);
      bVar4 = iVar6 == 0;
    }
    else {
      bVar4 = local_48.Data.ArrayNum + local_a8.Data.ArrayNum == 1;
    }
    bVar2 = true;
    if (bVar4) goto LAB_14cf84ad6;
    bVar3 = false;
LAB_14cf84adc:
    bVar4 = bVar3;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FString::PrintfImpl(&local_78,L"vr.TrackingOrigin %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_78.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_14cf84d29:
  if (local_b8.Data.ArrayNum < 2) {
    uVar5 = 0;
  }
  else {
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    FOutputDevice::LogfImpl(param_3,Warning,L"%s is deprecated. Use %s instead");
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar8.Data = local_b8.Data.AllocatorInstance.Data;
    }
    uVar5 = (**(code **)((longlong)*IConsoleManager::Singleton + 0xe8))
                      (IConsoleManager::Singleton,FVar8.Data,param_3,param_1,FVar9.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return (bool)uVar5;
}

// DecayRotatorTowardsTarget @ 14cf86de0

void __cdecl
DecayRotatorTowardsTarget(TRotator<double> *param_1,TRotator<double> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  TConsoleVariableData<float> *pTVar9;
  TConsoleVariableData<float> *pTVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  
  pTVar9 = CVarCameraSmoothingRollDecay.Ref;
  dVar28 = param_2->Pitch - param_1->Pitch;
  dVar30 = param_2->Yaw - param_1->Yaw;
  dVar4 = param_2->Roll;
  auVar20._0_8_ = dVar4 - param_1->Roll;
  auVar18._8_4_ = SUB84(dVar30,0);
  auVar18._0_8_ = dVar28;
  auVar18._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar19 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar19 = roundpd(in_XMM1,auVar19,3);
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar25._0_8_ = auVar19._0_8_ * dVar5;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar25._8_8_ = auVar19._8_8_ * dVar6;
  auVar20._8_8_ = 0;
  auVar19 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar28 = dVar28 - auVar25._0_8_;
  dVar30 = dVar30 - auVar25._8_8_;
  auVar19 = roundpd(auVar25,auVar19,3);
  dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar21._8_4_ = SUB84(dVar30,0);
  auVar21._0_8_ = dVar28;
  auVar21._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar24 = auVar21._8_8_ + dVar6;
  dVar31 = auVar20._0_8_ - auVar19._0_8_ * dVar7;
  dVar32 = 0.0 - auVar19._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar14 = -(ulonglong)(0.0 <= dVar28);
  uVar16 = -(ulonglong)(0.0 <= dVar30);
  auVar26._0_8_ = uVar14 & (ulonglong)dVar28;
  auVar26._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar30);
  auVar26._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar30) >> 0x20);
  auVar27._0_4_ = ~(uint)uVar14 & SUB84(dVar28 + dVar5,0);
  auVar27._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar28 + dVar5) >> 0x20);
  auVar27._8_4_ = ~(uint)uVar16 & SUB84(dVar24,0);
  auVar27._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar22._8_4_ = SUB84(dVar32,0);
  auVar22._0_8_ = dVar31;
  auVar22._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  dVar24 = auVar22._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar27 = auVar27 | auVar26;
  uVar14 = -(ulonglong)(0.0 <= dVar31);
  uVar16 = -(ulonglong)(0.0 <= dVar32);
  auVar29._0_4_ = ~(uint)uVar14 & SUB84(dVar31 + dVar7,0);
  auVar29._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar31 + dVar7) >> 0x20);
  auVar29._8_4_ = ~(uint)uVar16 & SUB84(dVar24,0);
  auVar29._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar19._8_4_ = (int)((ulonglong)dVar32 & uVar16);
  auVar19._0_8_ = (ulonglong)dVar31 & uVar14;
  auVar19._12_4_ = (int)(((ulonglong)dVar32 & uVar16) >> 0x20);
  auVar29 = auVar29 | auVar19;
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar27._0_8_);
  uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar27._8_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar29._0_8_);
  auVar33._0_8_ = uVar16 & (ulonglong)(auVar27._0_8_ - dVar5);
  uVar14 = uVar17 & (ulonglong)(auVar27._8_8_ - dVar6);
  auVar33._8_4_ = (undefined4)uVar14;
  auVar33._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar16 & auVar27._0_4_;
  auVar23._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar27._4_4_;
  auVar23._8_4_ = ~(uint)uVar17 & auVar27._8_4_;
  auVar23._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar27._12_4_;
  bVar11 = IsInParallelGameThread();
  lVar13 = 4;
  if (bVar11) {
LAB_14cf86f05:
    lVar12 = 0;
  }
  else {
    bVar11 = IsInGameThread();
    if (bVar11) goto LAB_14cf86f05;
    lVar12 = 4;
  }
  pTVar10 = CVarCameraSmoothingPitchDecay.Ref;
  fVar1 = *(float *)((longlong)pTVar9->ShadowedValue + lVar12);
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_14cf86f2a:
    lVar12 = 0;
  }
  else {
    bVar11 = IsInGameThread();
    if (bVar11) goto LAB_14cf86f2a;
    lVar12 = 4;
  }
  pTVar9 = CVarCameraSmoothingYawDecay.Ref;
  fVar2 = *(float *)((longlong)pTVar10->ShadowedValue + lVar12);
  bVar11 = IsInParallelGameThread();
  if (!bVar11) {
    bVar11 = IsInGameThread();
    if (!bVar11) goto LAB_14cf86f4c;
  }
  lVar13 = 0;
LAB_14cf86f4c:
  fVar8 = __real_38d1b717;
  fVar3 = *(float *)((longlong)pTVar9->ShadowedValue + lVar13);
  if (fVar1 <= __real_38d1b717) {
    param_1->Roll = dVar4;
  }
  else {
    param_1->Roll =
         (double)(param_3 / fVar1) *
         (double)((ulonglong)(auVar29._0_8_ - dVar7) & uVar15 |
                 CONCAT44(~(uint)(uVar15 >> 0x20) & auVar29._4_4_,~(uint)uVar15 & auVar29._0_4_)) +
         param_1->Roll;
  }
  if (fVar2 <= fVar8) {
    param_1->Pitch = param_2->Pitch;
  }
  else {
    param_1->Pitch = (double)(param_3 / fVar2) * SUB168(auVar33 | auVar23,0) + param_1->Pitch;
  }
  if (fVar3 <= fVar8) {
    param_1->Yaw = param_2->Yaw;
  }
  else {
    param_1->Yaw = (double)(param_3 / fVar3) * SUB168(auVar33 | auVar23,8) + param_1->Yaw;
  }
  return;
}

// DrawDebugTrackingSensorLocations @ 14cf87f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DrawDebugTrackingSensorLocations(UCanvas *param_1,APlayerController *param_2)

{
  undefined4 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  UEngine *pUVar12;
  int iVar13;
  char cVar14;
  bool bVar15;
  UWorldProxy UVar16;
  IXRTrackingSystem *pIVar17;
  longlong *plVar18;
  TRotator<double> *this;
  TTransform<double> *pTVar19;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_508 [32];
  FColor_u_0 local_4c8;
  undefined1 local_4c4 [4];
  FColor_u_0 local_4c0 [2];
  undefined4 *local_4b8;
  ulonglong local_4b0;
  TVector<double>_u_0 local_4a8;
  double local_490;
  double dStack_488;
  double local_480;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_460;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_430;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  TVector<double>_u_0 local_3e0;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3b0;
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_380;
  undefined1 local_368 [24];
  double dStack_350;
  TVector<double>_u_0 local_348;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  TVector<double> local_298;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  UVar16.World = GWorld.World;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
    return;
  }
  if (param_2 == (APlayerController *)0x0) {
    param_2 = UWorld::GetFirstPlayerController(GWorld.World);
    if (param_2 == (APlayerController *)0x0) {
      return;
    }
  }
  else {
    UVar16.World = AActor::GetWorld((AActor *)param_2);
  }
  local_4b8 = (undefined4 *)0x0;
  local_4b0 = 0;
  pIVar17 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
  (**(code **)((longlong)*pIVar17 + 0x38))(pIVar17,&local_4b8,2);
  if ((int)local_4b0 != 0) {
    pIVar17 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    cVar14 = (**(code **)((longlong)*pIVar17 + 0x30))(pIVar17);
    local_4c8 = FColor::Red.field0_0x0;
    if (cVar14 != '\0') {
      local_4c8 = FColor::Green.field0_0x0;
    }
    local_4c0[0] = FColor::Yellow.field0_0x0;
    pUVar2 = (UObject *)param_2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UObject *)0x0)) {
      plVar18 = (longlong *)(**(code **)(param_2->_padding_ + 0x7e0))(param_2);
      if (pUVar2 == (UObject *)0x0) goto LAB_14cf8902d;
    }
    else {
      UE::GC::MarkAsReachable(pUVar2);
      plVar18 = (longlong *)(**(code **)(param_2->_padding_ + 0x7e0))(param_2);
    }
    if (plVar18 != (longlong *)0x0) {
      this = (TRotator<double> *)(**(code **)(*(longlong *)pUVar2 + 0x830))(pUVar2,local_2c8);
      UE::Math::TRotator<double>::Quaternion(this,(TQuat<double> *)local_418);
      if (plVar18[0x37] == 0) {
        pTVar19 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar19 = (TTransform<double> *)(plVar18[0x37] + 0x1f0);
      }
      local_3f8 = *(undefined4 *)(pTVar19->Translation).XY.m128d_f64;
      uStack_3f4 = *(undefined4 *)((longlong)(pTVar19->Translation).XY.m128d_f64 + 4);
      uStack_3f0 = *(undefined4 *)((pTVar19->Translation).XY.m128d_f64 + 1);
      uStack_3ec = *(undefined4 *)((longlong)(pTVar19->Translation).XY.m128d_f64 + 0xc);
      local_3e8 = *(undefined4 *)(pTVar19->Translation).ZW.m128d_f64;
      uStack_3e4 = *(undefined4 *)((longlong)(pTVar19->Translation).ZW.m128d_f64 + 4);
      cVar14 = (**(code **)(*plVar18 + 0x6e0))(plVar18,0);
      if (cVar14 == '\0') {
        pIVar17 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
        (**(code **)((longlong)*pIVar17 + 0x58))(pIVar17,0,&local_328,local_2b0);
        local_318 = local_318 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dStack_310 = dStack_310 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_328 = local_328 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dStack_320 = dStack_320 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar30._8_4_ = SUB84(dStack_310,0);
        auVar30._0_8_ = local_318;
        auVar30._12_4_ = (int)((ulonglong)dStack_310 >> 0x20);
        dVar4 = (double)local_418._0_8_ * auVar30._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                (double)local_408._8_8_ * local_328 +
                (double)local_418._8_8_ * local_318 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                (double)local_408._0_8_ * dStack_320 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar5 = (double)local_418._0_8_ * local_318 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                (double)local_408._8_8_ * dStack_320 +
                (double)local_418._8_8_ * dStack_310 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                (double)local_408._0_8_ * local_328 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar27 = SUB84(dVar5,0);
        uVar28 = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_308._8_4_ = uVar27;
        local_308._0_8_ = dVar4;
        local_308._12_4_ = uVar28;
        dVar5 = (double)local_418._0_8_ * dStack_320 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                (double)local_408._8_8_ * local_318 +
                (double)local_418._8_8_ * local_328 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                (double)local_408._0_8_ * auVar30._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar6 = (double)local_418._0_8_ * local_328 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                (double)local_408._8_8_ * dStack_310 +
                (double)local_418._8_8_ * dStack_320 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                (double)local_408._0_8_ * local_318 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar31 = SUB84(dVar6,0);
        uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_418._8_4_ = uVar27;
        local_418._0_8_ = dVar4;
        local_418._12_4_ = uVar28;
        local_2f8._8_4_ = uVar31;
        local_2f8._0_8_ = dVar5;
        local_2f8._12_4_ = uVar32;
        local_408._8_4_ = uVar31;
        local_408._0_8_ = dVar5;
        local_408._12_4_ = uVar32;
      }
      iVar13 = (int)local_4b0;
      uVar21 = (ulonglong)(int)local_4b0;
      puVar1 = local_4b8 + uVar21;
      puVar22 = local_4b8;
      while( true ) {
        uVar11 = __xmm_80000000800000008000000080000000;
        fVar9 = __real_3c8efa35;
        dVar4 = __real_3ff0000000000000;
        if ((int)uVar21 != iVar13) {
          local_4c4[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4c4);
        }
        pUVar12 = GEngine;
        if (puVar22 == puVar1) break;
        uVar27 = *puVar22;
        if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
           (bVar15 = FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar17 = (pUVar12->XRSystem).Object;
        (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,uVar27,local_368,&local_490);
        dVar5 = dStack_350 * (double)local_418._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                (double)local_408._8_8_ * (double)local_368._0_8_ +
                (double)local_368._16_8_ * (double)local_418._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                (double)local_368._8_8_ * (double)local_408._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar6 = (double)local_368._16_8_ * (double)local_418._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                (double)local_408._8_8_ * (double)local_368._8_8_ +
                dStack_350 * (double)local_418._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                (double)local_368._0_8_ * (double)local_408._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar27 = SUB84(dVar6,0);
        uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_2e8._8_4_ = uVar27;
        local_2e8._0_8_ = dVar5;
        local_2e8._12_4_ = uVar28;
        dVar6 = (double)local_368._8_8_ * (double)local_418._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                (double)local_368._16_8_ * (double)local_408._8_8_ +
                (double)local_418._8_8_ * (double)local_368._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dStack_350 * (double)local_408._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar7 = (double)local_368._0_8_ * (double)local_418._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dStack_350 * (double)local_408._8_8_ +
                (double)local_418._8_8_ * (double)local_368._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                (double)local_368._16_8_ * (double)local_408._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar31 = SUB84(dVar7,0);
        uVar32 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_368._8_4_ = uVar27;
        local_368._0_8_ = dVar5;
        local_368._12_4_ = uVar28;
        local_2d8._8_4_ = uVar31;
        local_2d8._0_8_ = dVar6;
        local_2d8._12_4_ = uVar32;
        unique0x100021d5 = uVar31;
        local_368._16_8_ = dVar6;
        unique0x100021d9 = uVar32;
        local_348._s_0.X = local_490;
        local_348._s_0.Y = dStack_488;
        local_348._s_0.Z = local_480;
        pTVar20 = UE::Math::TQuat<double>::RotateVector
                            ((TQuat<double> *)local_418,&local_298,
                             (TVector<double> *)&local_348._s_0);
        local_490 = (pTVar20->field0_0x0)._s_0.X;
        dStack_488 = (pTVar20->field0_0x0)._s_0.Y;
        local_480 = (pTVar20->field0_0x0)._s_0.Z;
        fVar23 = tanf(local_27c * fVar9);
        fVar24 = tanf(local_278 * fVar9);
        fVar25 = tanf(local_280 * fVar9);
        fVar26 = tanf(local_274 * fVar9);
        fVar26 = (float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000);
        UE::Math::TQuat<double>::operator*
                  ((TQuat<double> *)local_368,&local_258,&UE::Math::TMatrix<double>::Identity);
        dVar29 = _UNK_150689518;
        dVar7 = ___xmm_00000000000000003ff0000000000000;
        dVar6 = _UNK_15061cbc8;
        dVar5 = ___xmm_3ff00000000000000000000000000000;
        local_1d8.M[0][2] = 0.0;
        local_1d8.M[0][3] = 0.0;
        local_1d8.M[1][2] = 0.0;
        local_1d8.M[1][3] = 0.0;
        local_1d8.M[3][3] = dVar4;
        local_1d8.M[3][0] = local_490;
        local_1d8.M[3][1] = dStack_488;
        local_1d8.M[3][2] = local_480;
        local_1d8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
        local_1d8.M[0][1] = _UNK_150689518;
        local_1d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_1d8.M[1][1] = _UNK_15061cbc8;
        local_1d8.M[2][0] = 0.0;
        local_1d8.M[2][1] = 0.0;
        local_1d8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
        local_1d8.M[2][3] = _UNK_150689518;
        VectorMatrixMultiply(&local_258,&local_258,&local_1d8);
        local_158.M[3][3] = dVar4;
        local_158.M[0][2] = 0.0;
        local_158.M[0][3] = 0.0;
        local_158.M[1][2] = 0.0;
        local_158.M[1][3] = 0.0;
        local_158.M[3][0] = (double)CONCAT44(uStack_3f4,local_3f8);
        local_158.M[3][1] = (double)CONCAT44(uStack_3ec,uStack_3f0);
        local_158.M[0][0] = dVar7;
        local_158.M[0][1] = dVar29;
        local_158.M[3][2] = (double)CONCAT44(uStack_3e4,local_3e8);
        local_158.M[1][0] = dVar5;
        local_158.M[1][1] = dVar6;
        local_158.M[2][0] = 0.0;
        local_158.M[2][1] = 0.0;
        local_158.M[2][2] = dVar7;
        local_158.M[2][3] = dVar29;
        VectorMatrixMultiply(&local_258,&local_258,&local_158);
        fVar10 = __real_bf800000;
        fVar9 = __real_40a00000;
        dVar29 = (double)local_26c;
        local_4a8._s_0.X =
             local_258.M[1][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
             local_258.M[0][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             local_258.M[2][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
             local_258.M[3][0] * dVar4;
        local_4a8._s_0.Y =
             local_258.M[1][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
             local_258.M[0][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             local_258.M[2][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
             local_258.M[3][1] * dVar4;
        local_4a8._s_0.Z =
             local_258.M[1][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
             local_258.M[0][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             local_258.M[2][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
             local_258.M[3][2] * dVar4;
        dVar5 = dVar29 * (double)fVar24;
        dVar8 = dVar29 * (double)fVar23;
        dVar4 = dVar29 * (double)(float)((uint)fVar25 ^ uVar11);
        local_448._s_0.X =
             local_258.M[1][0] * dVar8 + local_258.M[0][0] * dVar29 + local_258.M[2][0] * dVar5 +
             local_258.M[3][0] * __real_3ff0000000000000;
        local_448._s_0.Y =
             local_258.M[1][1] * dVar8 + local_258.M[0][1] * dVar29 + local_258.M[2][1] * dVar5 +
             local_258.M[3][1] * __real_3ff0000000000000;
        local_448._s_0.Z =
             local_258.M[1][2] * dVar8 + local_258.M[0][2] * dVar29 + local_258.M[2][2] * dVar5 +
             local_258.M[3][2] * __real_3ff0000000000000;
        dVar6 = dVar29 * (double)fVar26;
        local_478._s_0.X =
             local_258.M[1][0] * dVar4 + local_258.M[0][0] * dVar29 + local_258.M[2][0] * dVar5 +
             local_258.M[3][0] * __real_3ff0000000000000;
        local_478._s_0.Y =
             local_258.M[1][1] * dVar4 + local_258.M[0][1] * dVar29 + local_258.M[2][1] * dVar5 +
             local_258.M[3][1] * __real_3ff0000000000000;
        local_478._s_0.Z =
             local_258.M[1][2] * dVar4 + local_258.M[0][2] * dVar29 + local_258.M[2][2] * dVar5 +
             local_258.M[3][2] * __real_3ff0000000000000;
        local_460._s_0.X =
             local_258.M[1][0] * dVar4 + local_258.M[0][0] * dVar29 + local_258.M[2][0] * dVar6 +
             local_258.M[3][0] * __real_3ff0000000000000;
        local_460._s_0.Y =
             local_258.M[1][1] * dVar4 + local_258.M[0][1] * dVar29 + local_258.M[2][1] * dVar6 +
             local_258.M[3][1] * __real_3ff0000000000000;
        local_460._s_0.Z =
             local_258.M[1][2] * dVar4 + local_258.M[0][2] * dVar29 + local_258.M[2][2] * dVar6 +
             local_258.M[3][2] * __real_3ff0000000000000;
        dVar7 = (double)local_270;
        local_430._s_0.X =
             local_258.M[1][0] * dVar8 + local_258.M[0][0] * dVar29 + local_258.M[2][0] * dVar6 +
             local_258.M[3][0] * __real_3ff0000000000000;
        local_430._s_0.Y =
             local_258.M[1][1] * dVar8 + local_258.M[0][1] * dVar29 + local_258.M[2][1] * dVar6 +
             local_258.M[3][1] * __real_3ff0000000000000;
        local_430._s_0.Z =
             local_258.M[1][2] * dVar8 + local_258.M[0][2] * dVar29 + local_258.M[2][2] * dVar6 +
             local_258.M[3][2] * __real_3ff0000000000000;
        dVar6 = dVar7 * (double)fVar23;
        dVar4 = dVar7 * (double)fVar24;
        dVar29 = dVar7 * (double)(float)((uint)fVar25 ^ uVar11);
        local_3b0._s_0.X =
             dVar6 * local_258.M[1][0] + dVar7 * local_258.M[0][0] + dVar4 * local_258.M[2][0] +
             __real_3ff0000000000000 * local_258.M[3][0];
        local_3b0._s_0.Y =
             dVar6 * local_258.M[1][1] + dVar7 * local_258.M[0][1] + dVar4 * local_258.M[2][1] +
             __real_3ff0000000000000 * local_258.M[3][1];
        local_3b0._s_0.Z =
             dVar6 * local_258.M[1][2] + dVar7 * local_258.M[0][2] + dVar4 * local_258.M[2][2] +
             __real_3ff0000000000000 * local_258.M[3][2];
        dVar5 = dVar7 * (double)fVar26;
        local_3e0._s_0.X =
             dVar29 * local_258.M[1][0] + dVar7 * local_258.M[0][0] + dVar4 * local_258.M[2][0] +
             __real_3ff0000000000000 * local_258.M[3][0];
        local_3e0._s_0.Y =
             dVar29 * local_258.M[1][1] + dVar7 * local_258.M[0][1] + dVar4 * local_258.M[2][1] +
             __real_3ff0000000000000 * local_258.M[3][1];
        local_3e0._s_0.Z =
             dVar29 * local_258.M[1][2] + dVar7 * local_258.M[0][2] + dVar4 * local_258.M[2][2] +
             __real_3ff0000000000000 * local_258.M[3][2];
        local_3c8._s_0.X =
             dVar29 * local_258.M[1][0] + dVar7 * local_258.M[0][0] + dVar5 * local_258.M[2][0] +
             __real_3ff0000000000000 * local_258.M[3][0];
        local_3c8._s_0.Y =
             dVar29 * local_258.M[1][1] + dVar7 * local_258.M[0][1] + dVar5 * local_258.M[2][1] +
             __real_3ff0000000000000 * local_258.M[3][1];
        local_3c8._s_0.Z =
             dVar29 * local_258.M[1][2] + dVar7 * local_258.M[0][2] + dVar5 * local_258.M[2][2] +
             __real_3ff0000000000000 * local_258.M[3][2];
        local_398._s_0.X =
             dVar6 * local_258.M[1][0] + dVar7 * local_258.M[0][0] + dVar5 * local_258.M[2][0] +
             __real_3ff0000000000000 * local_258.M[3][0];
        local_398._s_0.Y =
             dVar6 * local_258.M[1][1] + dVar7 * local_258.M[0][1] + dVar5 * local_258.M[2][1] +
             __real_3ff0000000000000 * local_258.M[3][1];
        local_398._s_0.Z =
             dVar6 * local_258.M[1][2] + dVar7 * local_258.M[0][2] + dVar5 * local_258.M[2][2] +
             __real_3ff0000000000000 * local_258.M[3][2];
        DrawDebugPoint(UVar16.World,(TVector<double> *)&local_4a8._s_0,__real_40a00000,
                       (FColor *)&local_4c8._s_0,false,__real_bf800000,'\0');
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_4a8._s_0,
                      (TVector<double> *)&local_448._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_4a8._s_0,
                      (TVector<double> *)&local_478._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_4a8._s_0,
                      (TVector<double> *)&local_460._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_4a8._s_0,
                      (TVector<double> *)&local_430._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_448._s_0,
                      (TVector<double> *)&local_478._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_478._s_0,
                      (TVector<double> *)&local_460._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_460._s_0,
                      (TVector<double> *)&local_430._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_430._s_0,
                      (TVector<double> *)&local_448._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_3b0._s_0,
                      (TVector<double> *)&local_3e0._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_3e0._s_0,
                      (TVector<double> *)&local_3c8._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_3c8._s_0,
                      (TVector<double> *)&local_398._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_398._s_0,
                      (TVector<double> *)&local_3b0._s_0,(FColor *)&local_4c8._s_0,false,fVar10,'\0'
                      ,0.0);
        dVar4 = (double)local_268;
        local_380._s_0.X =
             local_258.M[1][0] * 0.0 + local_258.M[0][0] * dVar4 +
             local_258.M[2][0] * ___xmm_3ff00000000000000000000000000000 +
             local_258.M[3][0] * _UNK_15061cbc8;
        local_380._s_0.Y =
             local_258.M[1][1] * 0.0 + local_258.M[0][1] * dVar4 +
             local_258.M[2][1] * ___xmm_3ff00000000000000000000000000000 +
             local_258.M[3][1] * _UNK_15061cbc8;
        local_380._s_0.Z =
             local_258.M[1][2] * 0.0 + local_258.M[0][2] * dVar4 +
             local_258.M[2][2] * ___xmm_3ff00000000000000000000000000000 +
             local_258.M[3][2] * _UNK_15061cbc8;
        DrawDebugLine(UVar16.World,(TVector<double> *)&local_4a8._s_0,
                      (TVector<double> *)&local_380._s_0,(FColor *)&local_4c0[0]._s_0,false,fVar10,
                      '\0',0.0);
        DrawDebugPoint(UVar16.World,(TVector<double> *)&local_380._s_0,fVar9,
                       (FColor *)&local_4c0[0]._s_0,false,fVar10,'\0');
        uVar21 = local_4b0 & 0xffffffff;
        puVar22 = puVar22 + 1;
      }
    }
  }
LAB_14cf8902d:
  if (local_4b8 != (undefined4 *)0x0) {
    FMemory::Free(local_4b8);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayFunctionLibrary @ 14cf89120

void __cdecl EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionTrackedDeviceFunctionLibrary @ 14cf89130

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionTrackedDeviceFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVRNotificationsComponent @ 14cf89140

void __cdecl EmptyLinkFunctionForGeneratedCodeVRNotificationsComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeXRAssetFunctionLibrary @ 14cf89150

void __cdecl EmptyLinkFunctionForGeneratedCodeXRAssetFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeXRBase_init @ 14cf89160

void __cdecl EmptyLinkFunctionForGeneratedCodeXRBase_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeXRDeviceVisualizationComponent @ 14cf89170

void __cdecl EmptyLinkFunctionForGeneratedCodeXRDeviceVisualizationComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeXRLoadingScreenFunctionLibrary @ 14cf89180

void __cdecl EmptyLinkFunctionForGeneratedCodeXRLoadingScreenFunctionLibrary(void)

{
  return;
}

// EnableHMD @ 14cf89190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnableHMD(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  
  if (((GEngine != (UEngine *)0x0) &&
      (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) &&
     (plVar5 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))(), plVar5 != (longlong *)0x0)) {
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)pFVar2;
      }
      bVar4 = FToBoolHelper::FromCStringWide(pwVar6);
                    /* WARNING: Could not recover jumptable at 0x00014cf8924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,bVar4,*(code **)(*plVar5 + 0x58));
      return;
    }
    (**(code **)(*plVar5 + 0x48))(plVar5);
    FOutputDevice::LogfImpl(param_3,L"HMD device is %s");
  }
  return;
}

// EnableStereo @ 14cf89630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnableStereo(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
            FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  IStereoRendering *pIVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  
  if ((GEngine == (UEngine *)0x0) ||
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 == (IXRTrackingSystem *)0x0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
  }
  if (param_1->ArrayNum == 0) {
    if ((GEngine != (UEngine *)0x0) &&
       (pIVar3 = (GEngine->StereoRenderingDevice).Object, pIVar3 != (IStereoRendering *)0x0)) {
      (**(code **)((longlong)*pIVar3 + 8))();
    }
    FOutputDevice::LogfImpl(param_3,L"Stereo is %s");
  }
  else {
    if ((param_1->ArrayNum < 1) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)pFVar2;
    }
    bVar6 = FToBoolHelper::FromCStringWide(pwVar10);
    if ((GEngine != (UEngine *)0x0) &&
       ((GEngine->StereoRenderingDevice).Object != (IStereoRendering *)0x0)) {
      if ((plVar9 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar9 + 0x48))(plVar9), cVar7 == '\0')) {
        FOutputDevice::Log(param_3,L"HMD is disabled. Use \'vr.bEnableHMD True\' to re-enable it.");
      }
      pUVar5 = GEngine;
      if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar3 = (pUVar5->StereoRenderingDevice).Object;
      (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,bVar6);
    }
  }
  return;
}

// ExecuteOnRHIThread @ 14cf8b860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ExecuteOnRHIThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *this;
  undefined8 *puVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if (!bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = GetImmediateCommandList_ForRenderCommand();
  bVar2 = IsInRHIThread();
  if ((!bVar2) && ((GRHICommandList.bLatchedBypass == false || ((this->field_0x29b & 0x20) == 0))))
  {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar3;
    *(undefined8 **)&this->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>
               ::_vftable_;
    puVar3[2] = *(undefined8 *)param_1;
    puVar3[3] = 0;
    puVar3[3] = *(undefined8 *)&param_1->field_0x8;
    FRHICommandListImmediate::ImmediateFlush(this,FlushRHIThread,None);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf8b93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this);
  return;
}

// ExecuteOnRHIThread @ 14cf8b950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ExecuteOnRHIThread(TFunctionRef<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *this;
  undefined8 *puVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if (!bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = GetImmediateCommandList_ForRenderCommand();
  bVar2 = IsInRHIThread();
  if ((!bVar2) && ((GRHICommandList.bLatchedBypass == false || ((this->field_0x29b & 0x20) == 0))))
  {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar3;
    *(undefined8 **)&this->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>::_vftable_;
    puVar3[2] = *(undefined8 *)param_1;
    puVar3[3] = 0;
    puVar3[3] = *(undefined8 *)&param_1->field_0x8;
    FRHICommandListImmediate::ImmediateFlush(this,FlushRHIThread,None);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf8ba2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  return;
}

// ExecuteOnRHIThread_DoNotWait @ 14cf8ba40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ExecuteOnRHIThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRHICommandListImmediate *this;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = IsInRHIThread();
    if (!bVar3) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                         ,0x59,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  this = GetImmediateCommandList_ForRenderCommand();
  bVar3 = IsInRHIThread();
  if ((!bVar3) && ((GRHICommandList.bLatchedBypass == false || ((this->field_0x29b & 0x20) == 0))))
  {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,0x10);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
               _vftable_;
    lVar1 = *(longlong *)param_1;
    puVar5[2] = lVar1;
    puVar5[7] = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)();
    }
    return true;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6,this);
  return false;
}

// ExecuteOnRHIThread_DoNotWait @ 14cf8bb60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ExecuteOnRHIThread_DoNotWait(TFunction<void___cdecl(void)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRHICommandListImmediate *this;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = IsInRHIThread();
    if (!bVar3) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                         ,0x59,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  this = GetImmediateCommandList_ForRenderCommand();
  bVar3 = IsInRHIThread();
  if ((!bVar3) && ((GRHICommandList.bLatchedBypass == false || ((this->field_0x29b & 0x20) == 0))))
  {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,0x10);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>::_vftable_;
    lVar1 = *(longlong *)param_1;
    puVar5[2] = lVar1;
    puVar5[7] = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)();
    }
    return true;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6);
  return false;
}

// ExecuteOnRenderThread @ 14cf8bc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ExecuteOnRenderThread(TFunctionRef<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78 [3];
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  local_78[1] = *(undefined ***)param_1;
  local_78[2] = *(undefined ***)&param_1->field_0x8;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_::__l2::TSTR_ExecuteOnRenderThread42>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78[0];
    local_48[1] = local_78[1];
    local_48[2] = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread42>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// ExecuteOnRenderThread @ 14cf8be10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ExecuteOnRenderThread(TFunctionRef<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78 [3];
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ExecuteOnRenderThread'::`2'::<lambda_1>,1,0>::_vftable_;
  local_78[1] = *(undefined ***)param_1;
  local_78[2] = *(undefined ***)&param_1->field_0x8;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_::__l2::TSTR_ExecuteOnRenderThread31>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78[0];
    local_48[1] = local_78[1];
    local_48[2] = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`ExecuteOnRenderThread'::__l2::TSTR_ExecuteOnRenderThread31>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// ExecuteOnRenderThread_DoNotWait @ 14cf8bfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  code **ppcVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88 = *(code **)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    puVar5 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,local_78);
  }
  local_b8[0] = (code *)0x0;
  ppcVar3 = FMemory::Malloc(0x40,0x10);
  local_90 = ppcVar3;
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  ppcVar3[7] = (code *)0x0;
  ppcVar3[2] = local_88;
  if (local_88 != (code *)0x0) {
    plVar6 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar6 = local_60;
    }
    (**(code **)*plVar6)();
  }
  if (ppcVar3 + 2 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_DoNotWait_::__l2::TSTR_ExecuteOnRenderThread21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_b8[0];
    local_30 = local_90;
    local_90 = (code **)0x0;
    local_58._16_8_ = local_a8[0];
    local_58._24_8_ = local_a8[1];
    local_58._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread21>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar7 = (ulonglong)local_28;
    if (2 < uVar7) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar3 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar3 = local_30;
        }
        (**(code **)(*ppcVar3 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar3 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar3 = local_90;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar6 = local_60;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// ExecuteOnRenderThread_DoNotWait @ 14cf8c1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ExecuteOnRenderThread_DoNotWait(TFunction<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  code **ppcVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRThreadUtils.cpp"
                       ,9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88 = *(code **)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    puVar5 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,local_78);
  }
  local_b8[0] = (code *)0x0;
  ppcVar3 = FMemory::Malloc(0x40,0x10);
  local_90 = ppcVar3;
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`ExecuteOnRenderThread_DoNotWait'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  ppcVar3[7] = (code *)0x0;
  ppcVar3[2] = local_88;
  if (local_88 != (code *)0x0) {
    plVar6 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar6 = local_60;
    }
    (**(code **)*plVar6)();
  }
  if (ppcVar3 + 2 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnRenderThread_DoNotWait'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ExecuteOnRenderThread_DoNotWait_::__l2::TSTR_ExecuteOnRenderThread11>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_b8[0];
    local_30 = local_90;
    local_90 = (code **)0x0;
    local_58._16_8_ = local_a8[0];
    local_58._24_8_ = local_a8[1];
    local_58._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`ExecuteOnRenderThread_DoNotWait'::__l2::TSTR_ExecuteOnRenderThread11>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar7 = (ulonglong)local_28;
    if (2 < uVar7) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar3 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar3 = local_30;
        }
        (**(code **)(*ppcVar3 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar3 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar3 = local_90;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar6 = local_60;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// FDeviceModelLoadedDelegate_DelegateWrapper @ 14cf8c3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FDeviceModelLoadedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UPrimitiveComponent *param_2)

{
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FXRDeviceOnDisconnectDelegate_DelegateWrapper @ 14cf8c420

void __cdecl
FXRDeviceOnDisconnectDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FXRTimedInputActionDelegate_DelegateWrapper @ 14cf8c4d0

void __cdecl
FXRTimedInputActionDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2,FTimespan param_3)

{
  float local_18 [2];
  long64 local_10;
  
  local_18[0] = param_2;
  local_10 = param_3.Ticks;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_18);
  return;
}

// ForceTracking @ 14cf8c990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ForceTracking(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
             FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IXRTrackingSystem *pIVar4;
  wchar_t *pwVar5;
  
  if ((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar1;
      }
      bVar3 = FToBoolHelper::FromCStringWide(pwVar5);
      pIVar4 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
                    /* WARNING: Could not recover jumptable at 0x00014cf8ca4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar4 + 0x160))(pIVar4,bVar3,*(code **)((longlong)*pIVar4 + 0x160));
      return;
    }
    pIVar4 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    (**(code **)((longlong)*pIVar4 + 0x158))(pIVar4);
    FOutputDevice::LogfImpl(param_3,L"Forced head tracking is %s");
  }
  return;
}

// GetLayerDescMember @ 14cf8faf0

bool __cdecl GetLayerDescMember(FLayerDesc *param_1,FLayerDesc *param_2)

{
  IStereoLayers::FLayerDesc::operator=(param_2,param_1);
  return true;
}

// GetSpectatorScreenController @ 14cf90bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISpectatorScreenController * __cdecl HMDConsoleCommandsHelpers::GetSpectatorScreenController(void)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  longlong lVar5;
  ISpectatorScreenController *pIVar6;
  longlong *plVar7;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    lVar5 = (**(code **)((longlong)*pIVar1 + 0x118))();
    pUVar3 = GEngine;
    if (lVar5 != 0) {
      if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pIVar6 = (ISpectatorScreenController *)(*pcVar2)();
          return pIVar6;
        }
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar3->XRSystem).Object + 0x118))();
                    /* WARNING: Could not recover jumptable at 0x00014cf90c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar6 = (ISpectatorScreenController *)
               (**(code **)(*plVar7 + 0xb0))(plVar7,*(code **)(*plVar7 + 0xb0));
      return pIVar6;
    }
  }
  return (ISpectatorScreenController *)0x0;
}

// GetSpectatorScreenController @ 14cf90c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISpectatorScreenController * __cdecl HMDFunctionLibraryHelpers::GetSpectatorScreenController(void)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  ISpectatorScreenController *pIVar3;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x118))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf90ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar3 = (ISpectatorScreenController *)
               (**(code **)(*plVar2 + 0xb0))(plVar2,*(code **)(*plVar2 + 0xb0));
      return pIVar3;
    }
  }
  return (ISpectatorScreenController *)0x0;
}

// HMDReset @ 14cf92050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
HMDReset(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,FOutputDevice *param_3
        )

{
  FScriptContainerElement *pFVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  wchar_t *_Str;
  double dVar6;
  float fVar7;
  
  if ((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
    fVar7 = 0.0;
    if (0 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      dVar6 = _wtof(_Str);
      fVar7 = (float)dVar6;
    }
    pUVar4 = GEngine;
    if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (pUVar4->XRSystem).Object;
    (**(code **)((longlong)*pIVar2 + 0xb8))(pIVar2,fVar7);
  }
  return;
}

// HMDResetOrientation @ 14cf92100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
HMDResetOrientation(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
                   FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  wchar_t *_Str;
  double dVar6;
  float fVar7;
  
  if ((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
    fVar7 = 0.0;
    if (0 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      dVar6 = _wtof(_Str);
      fVar7 = (float)dVar6;
    }
    pUVar4 = GEngine;
    if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (pUVar4->XRSystem).Object;
    (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,fVar7);
  }
  return;
}

// HMDResetPosition @ 14cf921b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
HMDResetPosition(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
                FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014cf921cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 200))();
    return;
  }
  return;
}

// HMDStatus @ 14cf921e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
HMDStatus(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    pTVar2 = (GEngine->XRSystem).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,2);
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1);
    if (cVar3 != '\0') {
      (**(code **)((longlong)*pIVar1 + 0x158))(pIVar1);
    }
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    if (cVar3 != '\0') {
      (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
    }
    FOutputDevice::LogfImpl
              (param_3,
               L"Position tracking status: %s\nHead tracking allowed: %s\nNumber of tracking sensors: %d"
              );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// HMDVersion @ 14cf92330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
HMDVersion(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  void *local_18 [2];
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*puVar2;
    }
    FOutputDevice::Log(param_3,pwVar3);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// InRHIOrValidThread @ 14cf92720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl InRHIOrValidThread(void)

{
  bool bVar1;
  FRHICommandListImmediate *pFVar2;
  
  if (!GIsThreadedRendering) {
    bVar1 = IsInGameThread();
    return bVar1;
  }
  bVar1 = IsRHIThreadRunning();
  if (!bVar1) {
    bVar1 = IsInActualRenderingThread();
    return bVar1;
  }
  bVar1 = IsInRHIThread();
  if (bVar1) {
    return true;
  }
  bVar1 = IsInActualRenderingThread();
  if (((bVar1) &&
      (pFVar2 = GetImmediateCommandList_ForRenderCommand(), GRHICommandList.bLatchedBypass != false)
      ) && ((pFVar2->field_0x29b & 0x20) != 0)) {
    return true;
  }
  return false;
}

// MarkLayerTextureForUpdate @ 14cf934c0

void __cdecl MarkLayerTextureForUpdate(FLayerDesc *param_1)

{
  return;
}

// SetLayerDescMember @ 14cf9aa80

void __cdecl SetLayerDescMember(FLayerDesc *param_1,FLayerDesc *param_2)

{
  FShapeWrapper *pFVar1;
  FRHITexture *pFVar2;
  FRHITexture *pFVar3;
  IStereoLayerShape *pIVar4;
  double dVar5;
  undefined7 uVar6;
  IStereoLayerShape *pIVar7;
  IStereoLayerShape IVar8;
  longlong alStack_18 [2];
  
  param_1->Id = param_2->Id;
  dVar5 = (param_2->Transform).Rotation.XY.m128d_f64[1];
  (param_1->Transform).Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0];
  (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  (param_1->Transform).Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Transform).Translation.XY.m128d_f64[1];
  (param_1->Transform).Translation.XY.m128d_f64[0] =
       (param_2->Transform).Translation.XY.m128d_f64[0];
  (param_1->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Transform).Translation.ZW.m128d_f64[1];
  (param_1->Transform).Translation.ZW.m128d_f64[0] =
       (param_2->Transform).Translation.ZW.m128d_f64[0];
  (param_1->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  (param_1->Transform).Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  (param_1->Transform).Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  (param_1->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_2->QuadSize).field0_0x0._s_0.Y;
  (param_1->QuadSize).field0_0x0._s_0.X = (param_2->QuadSize).field0_0x0._s_0.X;
  (param_1->QuadSize).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_2->UVRect).Min.field0_0x0._s_0.Y;
  (param_1->UVRect).Min.field0_0x0._s_0.X = (param_2->UVRect).Min.field0_0x0._s_0.X;
  (param_1->UVRect).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_2->UVRect).Max.field0_0x0._s_0.Y;
  (param_1->UVRect).Max.field0_0x0._s_0.X = (param_2->UVRect).Max.field0_0x0._s_0.X;
  (param_1->UVRect).Max.field0_0x0._s_0.Y = dVar5;
  uVar6 = *(undefined7 *)&(param_2->UVRect).field_0x21;
  (param_1->UVRect).bIsValid = (param_2->UVRect).bIsValid;
  *(undefined7 *)&(param_1->UVRect).field_0x21 = uVar6;
  (param_1->LayerSize).field0_0x0 = (param_2->LayerSize).field0_0x0;
  param_1->Priority = param_2->Priority;
  param_1->PositionType = param_2->PositionType;
  (param_1->TextureObj).WeakPtr = (param_2->TextureObj).WeakPtr;
  pFVar2 = (param_2->Texture).Reference;
  pFVar3 = (param_1->Texture).Reference;
  if (pFVar3 != pFVar2) {
    (param_1->Texture).Reference = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  (param_1->LeftTextureObj).WeakPtr = (param_2->LeftTextureObj).WeakPtr;
  pFVar2 = (param_2->LeftTexture).Reference;
  pFVar3 = (param_1->LeftTexture).Reference;
  if (pFVar3 != pFVar2) {
    (param_1->LeftTexture).Reference = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar1 = &param_1->Shape;
  param_1->Flags = param_2->Flags;
  pIVar4 = (param_2->Shape).Wrapped.Ptr;
  pIVar7 = (IStereoLayerShape *)0x0;
  if (pIVar4 != (IStereoLayerShape *)0x0) {
    pIVar7 = (IStereoLayerShape *)(**(code **)((longlong)*pIVar4 + 8))();
  }
  if (pFVar1 == (FShapeWrapper *)alStack_18) {
    if (pIVar7 == (IStereoLayerShape *)0x0) {
      return;
    }
    IVar8 = *pIVar7;
  }
  else {
    pIVar4 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar7;
    if (pIVar4 == (IStereoLayerShape *)0x0) {
      return;
    }
    IVar8 = *pIVar4;
    pIVar7 = pIVar4;
  }
  (**(code **)((longlong)IVar8 + 0x10))(pIVar7,1);
  return;
}

// ShowTrackingSensors @ 14cf9bef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ShowTrackingSensors(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
                   FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDelegateHandle FVar6;
  wchar_t *pwVar7;
  wchar_t local_res8 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    Handle.ID = 0;
    _Init_thread_footer(&_TSS0);
  }
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)pFVar1;
    }
    bVar3 = FToBoolHelper::FromCStringWide(pwVar7);
    if ((Handle.ID != 0) != bVar3) {
      if (bVar3) {
        local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_28);
        local_10 = &local_50;
        puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseStaticDelegateInstance___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar4[3] = DrawDebugTrackingSensorLocations;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        FVar6 = UDebugDrawService::Register
                          (local_res8,
                           (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                            *)L"Game");
                    /* WARNING: Load size is inaccurate */
        Handle.ID = *FVar6.ID;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
      }
      else {
        UDebugDrawService::Unregister(Handle);
        Handle.ID = 0;
      }
    }
  }
  FOutputDevice::LogfImpl(param_3,L"Tracking sensor drawing is %s");
  return;
}

// SpawnDeviceComponent @ 14cf9c130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
XRAssetFunctionLibrary_Impl::SpawnDeviceComponent
          (AActor *param_1,IXRSystemAssets *param_2,int param_3,bool param_4,
          TTransform<double> *param_5,bool param_6,
          TDelegate<void___cdecl(UPrimitiveComponent_*),FDefaultDelegateUserPolicy> *param_7)

{
  UPrimitiveComponent *this;
  
  if ((param_1 != (AActor *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    this = (UPrimitiveComponent *)
           (**(code **)((longlong)*param_2 + 0x18))
                     (param_2,param_3,param_1,0x1000000,param_6,param_7);
    if (this != (UPrimitiveComponent *)0x0) {
      UActorComponent::RegisterComponent((UActorComponent *)this);
      if (!param_4) {
        if ((param_1->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
          AActor::SetRootComponent(param_1,(USceneComponent *)this);
        }
        else {
          (**(code **)(*(longlong *)this + 0x508))(this);
        }
      }
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this,param_5,false,(FHitResult *)0x0,None);
    }
    return this;
  }
  if (2 < (byte)LogHMD._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHMD);
  }
  return (UPrimitiveComponent *)0x0;
}

// SpectatorScreenMode @ 14cf9c240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
SpectatorScreenMode(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
                   FOutputDevice *param_3)

{
  IXRTrackingSystem *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  FName local_res20;
  FString local_28;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if ((pIVar1 != (IXRTrackingSystem *)0x0) &&
     (lVar8 = (**(code **)((longlong)*pIVar1 + 0x118))(), pUVar4 = GEngine, lVar8 != 0)) {
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar9 = (longlong *)(**(code **)((longlong)*(pUVar4->XRSystem).Object + 0x118))();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0xb0))(plVar9);
    if (plVar9 != (longlong *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        ScreenModeEnum = StaticEnum<enum_ESpectatorScreenMode>();
        _Init_thread_footer(&_TSS0);
      }
      uVar7 = 0xffffffff;
      if (param_1->ArrayNum == 0) {
        if ((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0))
        {
          bVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
          uVar7 = (uint)bVar6;
        }
        UEnum::GetNameStringByIndex(ScreenModeEnum,&local_28,uVar7);
        FOutputDevice::LogfImpl(param_3,L"Spectator screen mode is set to: %s");
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)pFVar2;
      }
      bVar5 = TCString<wchar_t>::IsNumeric(pwVar11);
      if (bVar5) {
        if ((param_1->ArrayNum < 1) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 8) == 0) {
          uVar7 = _wtoi(L"");
        }
        else {
          uVar7 = _wtoi(*(wchar_t **)pFVar2);
        }
      }
      else {
        if ((param_1->ArrayNum < 1) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)pFVar2;
        }
        pFVar10 = FName::FName(&local_res20,pwVar11);
        uVar7 = UEnum::GetIndexByName(ScreenModeEnum,*pFVar10,None);
      }
      if (7 < uVar7) {
        if ((param_1->ArrayNum < 1) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FOutputDevice::LogfImpl(param_3,Error,L"Invalid spectator screen mode: %s");
      }
                    /* WARNING: Could not recover jumptable at 0x00014cf9c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 8))(plVar9,uVar7 & 0xff);
      return;
    }
  }
  FOutputDevice::LogfImpl
            (param_3,Error,
             L"SpectatorScreenMode is not controllable now, cannot change or get mode.");
  return;
}

// TrackingOrigin @ 14cf9d730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TrackingOrigin(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
              FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    TrackingOriginEnum = StaticEnum<enum_EHMDTrackingOrigin::Type>();
    _Init_thread_footer(&_TSS0);
  }
  iVar6 = -1;
  if (param_1->ArrayNum == 0) {
    if ((GEngine != (UEngine *)0x0) &&
       (pIVar2 = (GEngine->XRSystem).Object, pIVar2 != (IXRTrackingSystem *)0x0)) {
      iVar6 = (**(code **)((longlong)*pIVar2 + 0x88))();
    }
    UEnum::GetNameStringByIndex(TrackingOriginEnum,&local_28,iVar6);
    FOutputDevice::LogfImpl(param_3,L"Tracking orgin is set to %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    bVar4 = TCString<wchar_t>::IsNumeric(pwVar8);
    if (bVar4) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        uVar5 = _wtoi(L"");
      }
      else {
        uVar5 = _wtoi(*(wchar_t **)pFVar1);
      }
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)pFVar1;
      }
      pFVar7 = FName::FName(&local_res8,pwVar8);
      uVar5 = UEnum::GetIndexByName(TrackingOriginEnum,*pFVar7,None);
    }
    if (1 < uVar5) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FOutputDevice::LogfImpl(param_3,Error,L"Invalid tracking orgin, %s");
    }
    if ((GEngine != (UEngine *)0x0) &&
       (pIVar2 = (GEngine->XRSystem).Object, pIVar2 != (IXRTrackingSystem *)0x0)) {
      (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,uVar5);
    }
  }
  return;
}

// WorldToMeters @ 14cf9e390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
WorldToMeters(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
             FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  AWorldSettings *pAVar4;
  wchar_t *pwVar5;
  double dVar6;
  
  if (param_1->ArrayNum == 0) {
    UWorld::GetWorldSettings(param_2,false,true);
    FOutputDevice::LogfImpl(param_3,L"World to meters scale is %0.2f");
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)pFVar1;
  }
  bVar3 = TCString<wchar_t>::IsNumeric(pwVar5);
  if (bVar3) {
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar1;
    }
    dVar6 = _wtof(pwVar5);
    if (0.0 < (float)dVar6) {
      pAVar4 = UWorld::GetWorldSettings(param_2,false,true);
      pAVar4->WorldToMeters = (float)dVar6;
      return;
    }
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FOutputDevice::LogfImpl
            (param_3,Error,L"Invalid argument, %s. World to meters scale must be larger than 0.");
  return;
}

// XRCopyTexture_InRenderPass @ 14cf9e550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
XRCopyTexture_InRenderPass
          (FRHICommandListImmediate *param_1,FRHITexture *param_2,TIntRect<int> *param_3,
          FRHITexture *param_4,TIntRect<int> *param_5,FXRCopyTextureOptions *param_6,uint param_7,
          uint param_8)

{
  EXRCopyTextureBlendModifier EVar1;
  ushort uVar2;
  FShaderMapResource *pFVar3;
  code *pcVar4;
  float fVar5;
  FShaderMapBase *pFVar6;
  FShaderMapBase *pFVar7;
  FRHICommandListBase *this;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  TRefCountPtr<FRHIBlendState> TVar11;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar12;
  FName FVar13;
  atomic<FRHIShader_*> aVar14;
  atomic<FRHIShader_*> aVar15;
  FRHIBatchedShaderParameters *pFVar16;
  FName *pFVar17;
  FModuleManager *this_01;
  IModuleInterface *pIVar18;
  byte bVar19;
  uint uVar20;
  FDisplayMappingPS *this_02;
  FDisplayMappingPS *pFVar21;
  FDisplayMappingPS *pFVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  FShaderMapBase *pFVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_3a8 [32];
  uint local_328 [2];
  FRHISamplerState *local_320;
  FRHITexture *local_318;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  FName local_300;
  FShaderMapBase *local_2f8;
  TShaderRefBase<FDisplayMappingPS,FShaderMapPointerTable> local_2e8;
  TIntRect<int> *local_2d8;
  FShaderMapBase *local_2d0;
  int local_2c8;
  int iStack_2c4;
  FRHICommandListBase *local_2b8;
  TIntRect<int> *local_2b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_298;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_288;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_278;
  FShader *local_268;
  FShaderMapBase *local_260;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  FName local_240;
  undefined1 local_238 [8];
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FGraphicsPipelineStateInitializer local_1d8;
  ulonglong local_f8;
  
  fVar5 = __real_3f800000;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_304 = *(int *)&param_5->field0_0x0;
  local_2b0 = param_5;
  local_30c = *(int *)((longlong)&param_5->field0_0x0 + 4);
  bVar19 = (byte)param_8;
  local_328[0] = local_304 >> (bVar19 & 0x1f);
  iVar23 = local_30c >> (bVar19 & 0x1f);
  local_308 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  uVar20 = 1 << (bVar19 & 0x1f);
  uVar9 = local_308 + -1 + uVar20 >> (bVar19 & 0x1f);
  local_310 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  iVar27 = uVar9 - local_328[0];
  uVar24 = local_310 + -1 + uVar20 >> (bVar19 & 0x1f);
  iVar25 = uVar24 - iVar23;
  local_320 = (FRHISamplerState *)CONCAT44(local_320._4_4_,uVar24);
  fVar28 = __real_3f800000 / (float)uVar20;
  fVar29 = (float)(int)local_328[0];
  local_318 = param_2;
  local_2d8 = param_3;
  local_2c8 = iVar27;
  iStack_2c4 = iVar25;
  local_2b8 = (FRHICommandListBase *)param_1;
  lVar10 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar20 = *(uint *)(lVar10 + 0x24);
  lVar10 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar24 = *(uint *)(lVar10 + 0x28);
  if ((*(int *)((longlong)&local_2d8->field0_0x0 + 8) == *(int *)&local_2d8->field0_0x0) &&
     (*(int *)((longlong)&local_2d8->field0_0x0 + 0xc) ==
      *(int *)((longlong)&local_2d8->field0_0x0 + 4))) {
    (local_2d8->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    *(int *)((longlong)&local_2d8->field0_0x0 + 8) = (int)(float)uVar20;
    *(int *)((longlong)&local_2d8->field0_0x0 + 0xc) = (int)(float)uVar24;
  }
  if (((param_6->bClearBlack != false) || (param_6->BlendMod == Opaque)) ||
     (param_6->BlendMod == InvertAlpha)) {
    lVar10 = (**(code **)(param_4->_padding_ + 0x20))(param_4);
    uVar24 = *(uint *)(lVar10 + 0x28) >> (bVar19 & 0x1f);
    lVar10 = (**(code **)(param_4->_padding_ + 0x20))(param_4);
    uVar20 = *(uint *)(lVar10 + 0x24) >> (bVar19 & 0x1f);
    if (uVar24 == 0) {
      uVar24 = 1;
    }
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)(int)uVar20,(float)(int)uVar24,fVar5);
    if (param_6->bClearBlack == false) {
      DrawClearQuadAlpha((FRHICommandList *)param_1,fVar5);
    }
    else {
      DrawClearQuadMRT((FRHICommandList *)param_1,true,1,&FLinearColor::Black,false,0.0,false,0);
    }
  }
  if ((iVar27 != 0) && (iVar25 != 0)) {
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,(float)(int)local_328[0],(float)iVar23,0.0,
               (float)(int)uVar9,(float)(int)local_320,fVar5);
    local_1d8.RenderTargetsEnabled = 0;
    local_1d8.RenderTargetFormats.Elements[0] = '\0';
    local_1d8.RenderTargetFormats.Elements[1] = '\0';
    local_1d8.RenderTargetFormats.Elements[2] = '\0';
    local_1d8.RenderTargetFormats.Elements[3] = '\0';
    local_1d8.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_1d8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_1d8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_1d8.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_1d8.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_1d8.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_1d8.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_1d8.BlendState = (FRHIBlendState *)0x0;
    local_1d8.RasterizerState = (FRHIRasterizerState *)0x0;
    local_1d8.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_1d8.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_1d8.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_1d8.RenderTargetFlags.Elements[0] = None;
    local_1d8.RenderTargetFlags.Elements[1] = None;
    local_1d8.RenderTargetFlags.Elements[2] = None;
    local_1d8.RenderTargetFlags.Elements[3] = None;
    local_1d8.RenderTargetFlags.Elements[4] = None;
    local_1d8.RenderTargetFlags.Elements[5] = None;
    local_1d8.RenderTargetFlags.Elements[6] = None;
    local_1d8.RenderTargetFlags.Elements[7] = None;
    local_1d8.RenderTargetFormats.Elements[4] = '\0';
    local_1d8.RenderTargetFormats.Elements[5] = '\0';
    local_1d8.RenderTargetFormats.Elements[6] = '\0';
    local_1d8.RenderTargetFormats.Elements[7] = '\0';
    local_1d8.DepthStencilTargetFormat = PF_Unknown;
    local_1d8.DepthStencilTargetFlag = None;
    local_1d8.DepthTargetLoadAction = ENoAction;
    local_1d8.DepthTargetStoreAction = ENoAction;
    local_1d8.StencilTargetLoadAction = ENoAction;
    local_1d8.StencilTargetStoreAction = ENoAction;
    local_1d8.DepthStencilAccess.Value = DepthNop;
    local_1d8.NumSamples = 0;
    local_1d8.SubpassHint = None;
    local_1d8.SubpassIndex = '\0';
    local_1d8.ConservativeRasterization = Disabled;
    local_1d8.bDepthBounds = false;
    local_1d8.MultiViewCount = '\0';
    local_1d8.bHasFragmentDensityAttachment = false;
    local_1d8.bAllowVariableRateShading = true;
    local_1d8.ShadingRate = VRSSR_1x1;
    local_1d8.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_1d8.StatePrecachePSOHash = 0;
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_1d8);
    EVar1 = param_6->BlendMod;
    TVar11 = TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI;
    if ((((EVar1 != Opaque) &&
         ((TVar11 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                    ::StaticResource.StateRHI, EVar1 != TransparentAlphaPassthrough &&
          (TVar11 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                    ::StaticResource.StateRHI, EVar1 != PremultipliedAlphaBlend)))) &&
        (TVar11 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                  ::StaticResource.StateRHI, EVar1 != InvertAlpha)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRCopyTexture.cpp"
                           ,0x129,L"Unsupported copy modifier"),
       TVar11 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                ::StaticResource.StateRHI, bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1d8.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d8.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d8.PrimitiveType = PT_TriangleList;
    local_1d8.BlendState = TVar11.Reference;
    this_00 = GetGlobalShaderMap((param_6->ShaderPlatform).Platform);
    pFVar12 = (FShaderType *)FScreenVS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_2a8,pFVar12,0);
    if (local_2a8.ShaderContent == (FShader *)0x0) {
      FVar13 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_258);
      FName::ToString((FName *)FVar13,&local_230);
      FScreenVS::GetStaticType();
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_02 = (FDisplayMappingPS *)0x0;
    FScreenVS::GetStaticType();
    local_2e8.ShaderContent = (FDisplayMappingPS *)0x0;
    local_2e8.ShaderMap = (FShaderMapBase *)0x0;
    local_2d0 = (FShaderMapBase *)0x0;
    local_2f8 = (FShaderMapBase *)0x0;
    lVar10 = (**(code **)(local_318->_padding_ + 0x20))();
    if ((*(char *)(lVar10 + 0x32) == '\x01') || (*(char *)(lVar10 + 0x32) == '\x04')) {
      bVar19 = 1;
    }
    else {
      bVar19 = 0;
    }
    pFVar22 = this_02;
    if (param_6->bNeedsDisplayMapping == false) {
      if (bVar19 == 0) {
        pFVar12 = (FShaderType *)FScreenPS::GetStaticType();
        FGlobalShaderMap::GetShader(this_00,&local_298,pFVar12,0);
        if ((FDisplayMappingPS *)local_298.ShaderContent == (FDisplayMappingPS *)0x0) {
          FVar13 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_250);
          FName::ToString((FName *)FVar13,&local_210);
          FScreenPS::GetStaticType();
          bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FScreenPS::GetStaticType();
        local_2d0 = local_298.ShaderMap;
        pFVar21 = (FDisplayMappingPS *)local_298.ShaderContent;
        pFVar26 = local_298.ShaderMap;
        this_02 = (FDisplayMappingPS *)local_298.ShaderContent;
      }
      else {
        pFVar12 = (FShaderType *)FScreenPSArraySlice::GetStaticType();
        FGlobalShaderMap::GetShader(this_00,&local_288,pFVar12,0);
        if ((FDisplayMappingPS *)local_288.ShaderContent == (FDisplayMappingPS *)0x0) {
          FVar13 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_248);
          FName::ToString((FName *)FVar13,&local_200);
          FScreenPSArraySlice::GetStaticType();
          bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FScreenPSArraySlice::GetStaticType();
        local_2f8 = local_288.ShaderMap;
        pFVar21 = (FDisplayMappingPS *)local_288.ShaderContent;
        pFVar22 = (FDisplayMappingPS *)local_288.ShaderContent;
        pFVar26 = local_288.ShaderMap;
      }
    }
    else {
      bVar8 = param_6->bSrcIsLinear;
      pFVar12 = (FShaderType *)FDisplayMappingPS::GetStaticType();
      FGlobalShaderMap::GetShader
                (this_00,&local_278,pFVar12,(uint)bVar19 + (-(uint)(bVar8 != false) & 2));
      if ((FDisplayMappingPS *)local_278.ShaderContent == (FDisplayMappingPS *)0x0) {
        FVar13 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_238);
        FName::ToString((FName *)FVar13,&local_220);
        FDisplayMappingPS::GetStaticType();
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FDisplayMappingPS::GetStaticType();
      local_2e8.ShaderContent = (FDisplayMappingPS *)local_278.ShaderContent;
      local_2e8.ShaderMap = local_278.ShaderMap;
      pFVar21 = (FDisplayMappingPS *)local_278.ShaderContent;
      pFVar26 = local_278.ShaderMap;
    }
    local_1d8.BoundShaderState.VertexDeclarationRHI =
         (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    aVar14 = (atomic<FRHIShader_*>)0x0;
    if (local_2a8.ShaderContent != (FShader *)0x0) {
      pFVar3 = ((local_2a8.ShaderMap)->Resource).Reference;
      if ((pFVar3 == (FShaderMapResource *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x426,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar14 = (pFVar3->RHIShaders).Ptr[(local_2a8.ShaderContent)->ResourceIndex];
      if ((aVar14 == (atomic<FRHIShader_*>)0x0) &&
         (aVar14 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar3,(local_2a8.ShaderContent)->ResourceIndex,true),
         aVar14 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if (((local_2a8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FShader::GetType(local_2a8.ShaderContent,(local_2a8.ShaderMap)->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar14 = (atomic<FRHIShader_*>)0x0;
      }
    }
    aVar15 = (atomic<FRHIShader_*>)0x0;
    local_1d8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar14;
    if (pFVar21 != (FDisplayMappingPS *)0x0) {
      pFVar3 = (pFVar26->Resource).Reference;
      if ((pFVar3 == (FShaderMapResource *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x426,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar15 = (pFVar3->RHIShaders).Ptr[*(int *)((FShaderTarget *)&pFVar21->_padding_ + 1)];
      if ((aVar15 == (atomic<FRHIShader_*>)0x0) &&
         (aVar15 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar3,*(int *)((FShaderTarget *)&pFVar21->_padding_ + 1),true),
         aVar15 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if ((pFVar26->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FShader::GetType((FShader *)pFVar21,pFVar26->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGlobalShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar15 = (atomic<FRHIShader_*>)0x0;
      }
    }
    this = local_2b8;
    local_1d8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar15;
    SetGraphicsPipelineState((FRHICommandList *)local_2b8,&local_1d8,0,CheckApply,true);
    pFVar7 = local_2d0;
    pFVar6 = local_2e8.ShaderMap;
    pFVar21 = local_2e8.ShaderContent;
    pFVar26 = local_2f8;
    if ((*(int *)((longlong)&local_2b0->field0_0x0 + 8) - *(int *)&local_2b0->field0_0x0 !=
         *(int *)((longlong)&local_2d8->field0_0x0 + 8) - *(int *)&local_2d8->field0_0x0) ||
       (local_320 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                    ::StaticResource.StateRHI.Reference,
       *(int *)((longlong)&local_2b0->field0_0x0 + 0xc) -
       *(int *)((longlong)&local_2b0->field0_0x0 + 4) !=
       *(int *)((longlong)&local_2d8->field0_0x0 + 0xc) -
       *(int *)((longlong)&local_2d8->field0_0x0 + 4))) {
      local_320 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                  ::StaticResource.StateRHI.Reference;
    }
    if (this_02 == (FDisplayMappingPS *)0x0) {
      if (pFVar22 == (FDisplayMappingPS *)0x0) {
        if (local_2e8.ShaderContent != (FDisplayMappingPS *)0x0) {
          pFVar3 = ((local_2e8.ShaderMap)->Resource).Reference;
          if ((pFVar3 == (FShaderMapResource *)0x0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x426,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar25 = *(int *)((FShaderTarget *)&pFVar21->_padding_ + 1);
          aVar14 = (pFVar3->RHIShaders).Ptr[iVar25];
          if ((aVar14 == (atomic<FRHIShader_*>)0x0) &&
             (aVar14 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar25,true),
             aVar14 == (atomic<FRHIShader_*>)0x0)) {
            if (4 < (byte)LogShaders._0_1_) {
              if ((pFVar6->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("PointerTable",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                     ,0x9b4,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FShader::GetType((FShader *)pFVar21,pFVar6->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDisplayMappingPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            aVar14 = (atomic<FRHIShader_*>)0x0;
          }
          SetShaderParametersLegacy<FRHICommandListImmediate,FDisplayMappingPS,FRHIPixelShader,enum_EDisplayOutputFormat_const_&,enum_EDisplayColorGamut_const_&,enum_EDisplayColorGamut_const_&,FRHITexture_*_&,FRHISamplerState_*_const_&,unsigned_int_&>
                    ((FRHICommandListImmediate *)this,&local_2e8,(FRHIPixelShader *)aVar14,
                     &param_6->DstDisplayFormat,&param_6->DstColorGamut,&param_6->SrcColorGamut,
                     &local_318,&local_320,&param_7);
        }
      }
      else {
        pFVar3 = (local_2f8->Resource).Reference;
        if ((pFVar3 == (FShaderMapResource *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        aVar14 = (pFVar3->RHIShaders).Ptr[*(int *)((FShaderTarget *)&pFVar22->_padding_ + 1)];
        if ((aVar14 == (atomic<FRHIShader_*>)0x0) &&
           (aVar14 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash
                               (pFVar3,*(int *)((FShaderTarget *)&pFVar22->_padding_ + 1),true),
           aVar14 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            if ((pFVar26->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("PointerTable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                   ,0x9b4,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FShader::GetType((FShader *)pFVar22,pFVar26->PointerTable);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenPSArraySlice,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar14 = (atomic<FRHIShader_*>)0x0;
        }
        pFVar16 = FRHICommandListBase::GetScratchShaderParameters(this);
        local_328[0] = param_7;
        SetTextureParameter(pFVar16,(FShaderResourceParameter *)&pFVar22->OutputDevice,local_318);
        SetSamplerParameter(pFVar16,(FShaderResourceParameter *)&(pFVar22->OutputDevice).NumBytes,
                            local_320);
        uVar2 = (pFVar22->TextureToOutputGamutMatrix).BufferIndex;
        uVar20 = (uint)uVar2;
        if (4 < uVar2) {
          uVar20 = 4;
        }
        if (uVar20 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (pFVar16,(uint)(pFVar22->OutputGamut).BaseIndex,
                     (uint)(pFVar22->OutputGamut).NumBytes,uVar20,local_328);
        }
        FRHICommandList::SetBatchedShaderParameters
                  ((FRHICommandList *)this,(FRHIGraphicsShader *)aVar14,pFVar16);
      }
    }
    else {
      pFVar3 = (local_2d0->Resource).Reference;
      if ((pFVar3 == (FShaderMapResource *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x426,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar14 = (pFVar3->RHIShaders).Ptr[*(int *)((FShaderTarget *)&this_02->_padding_ + 1)];
      if ((aVar14 == (atomic<FRHIShader_*>)0x0) &&
         (aVar14 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar3,*(int *)((FShaderTarget *)&this_02->_padding_ + 1),true),
         aVar14 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FShader::GetType((FShader *)this_02,pFVar7->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar14 = (atomic<FRHIShader_*>)0x0;
      }
      pFVar16 = FRHICommandListBase::GetScratchShaderParameters(this);
      SetTextureParameter(pFVar16,(FShaderResourceParameter *)&this_02->OutputDevice,local_318);
      SetSamplerParameter(pFVar16,(FShaderResourceParameter *)&(this_02->OutputDevice).NumBytes,
                          local_320);
      FRHICommandList::SetBatchedShaderParameters
                ((FRHICommandList *)this,(FRHIGraphicsShader *)aVar14,pFVar16);
    }
    pFVar17 = FName::FName(&local_240,"Renderer");
    local_300 = *pFVar17;
    this_01 = FModuleManager::Get();
    bVar8 = FModuleManager::IsModuleLoaded(this_01,local_300);
    if (!bVar8) {
      FName::ToString(&local_300,&local_1f0);
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar18 = FModuleManager::GetModule(this_01,local_300);
    local_268 = local_2a8.ShaderContent;
    local_260 = local_2a8.ShaderMap;
    (**(code **)((longlong)*pIVar18 + 0xe8))
              (pIVar18,this,(float)local_304 * fVar28 - fVar29,
               (float)local_30c * fVar28 - (float)iVar23);
  }
  return;
}

// Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister @ 14cf9f6e0

UClass * __cdecl Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"HeadMountedDisplayFunctionLibrary",
               &Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton,
               UHeadMountedDisplayFunctionLibrary::
               StaticRegisterNativesUHeadMountedDisplayFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHeadMountedDisplayFunctionLibrary>,
               InternalVTableHelperCtorCaller<UHeadMountedDisplayFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister @ 14cf9f7a0

UClass * __cdecl Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"MotionTrackedDeviceFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton,
               UMotionTrackedDeviceFunctionLibrary::
               StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionTrackedDeviceFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionTrackedDeviceFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UVRNotificationsComponent_NoRegister @ 14cf9f860

UClass * __cdecl Z_Construct_UClass_UVRNotificationsComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"VRNotificationsComponent",
               &Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton,
               UVRNotificationsComponent::StaticRegisterNativesUVRNotificationsComponent,0x1e0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UVRNotificationsComponent>,
               InternalVTableHelperCtorCaller<UVRNotificationsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton;
}

// Z_Construct_UClass_UXRAssetFunctionLibrary_NoRegister @ 14cf9f920

UClass * __cdecl Z_Construct_UClass_UXRAssetFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRAssetFunctionLibrary",
               &Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton,
               UXRAssetFunctionLibrary::StaticRegisterNativesUXRAssetFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UXRAssetFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UXRAssetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRAssetFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister @ 14cf9f9e0

UClass * __cdecl Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRDeviceVisualizationComponent",
               &Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton,
               UXRDeviceVisualizationComponent::StaticRegisterNativesUXRDeviceVisualizationComponent
               ,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UXRDeviceVisualizationComponent>,
               InternalVTableHelperCtorCaller<UXRDeviceVisualizationComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.InnerSingleton;
}

// Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister @ 14cf9faa0

UClass * __cdecl Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRLoadingScreenFunctionLibrary",
               &Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton,
               UXRLoadingScreenFunctionLibrary::StaticRegisterNativesUXRLoadingScreenFunctionLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UXRLoadingScreenFunctionLibrary>,
               InternalVTableHelperCtorCaller<UXRLoadingScreenFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_XRBase @ 14cfa6b00

void __cdecl IMPLEMENT_MODULE_XRBase(void)

{
  return;
}

// CVarSink'' @ 1504541f0

void __cdecl `dynamic_atexit_destructor_for_'FHeadMountedDisplayBase::CVarSink__(void)

{
  FHeadMountedDisplayBase::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// OnXRDeviceOnDisconnectDelegate'' @ 150454210

void __cdecl
`dynamic_atexit_destructor_for_'UHeadMountedDisplayFunctionLibrary::OnXRDeviceOnDisconnectDelegate__
          (void)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UHeadMountedDisplayFunctionLibrary::OnXRDeviceOnDisconnectDelegate);
  return;
}

// OnXRInteractionProfileChanged'' @ 150454230

void __cdecl
`dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRInteractionProfileChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FXRTrackingSystemDelegates::OnXRInteractionProfileChanged._8_8_,
             FXRTrackingSystemDelegates::OnXRInteractionProfileChanged._16_4_);
  if (FXRTrackingSystemDelegates::OnXRInteractionProfileChanged._8_8_ != 0) {
    FMemory::Free((void *)FXRTrackingSystemDelegates::OnXRInteractionProfileChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged);
  return;
}

// OnXRPlayAreaChanged'' @ 150454270

void __cdecl `dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRPlayAreaChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FXRTrackingSystemDelegates::OnXRPlayAreaChanged._8_8_,
             FXRTrackingSystemDelegates::OnXRPlayAreaChanged._16_4_);
  if (FXRTrackingSystemDelegates::OnXRPlayAreaChanged._8_8_ != 0) {
    FMemory::Free((void *)FXRTrackingSystemDelegates::OnXRPlayAreaChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FXRTrackingSystemDelegates::OnXRPlayAreaChanged);
  return;
}

// OnXRTimedInputActionDelegateMap'' @ 1504542b0

void __cdecl
`dynamic_atexit_destructor_for_'UHeadMountedDisplayFunctionLibrary::
OnXRTimedInputActionDelegateMap__(void)

{
  UHeadMountedDisplayFunctionLibrary::OnXRTimedInputActionDelegateMap._72_4_ = 0;
  if (UHeadMountedDisplayFunctionLibrary::OnXRTimedInputActionDelegateMap._64_8_ != 0) {
    FMemory::Free((void *)UHeadMountedDisplayFunctionLibrary::OnXRTimedInputActionDelegateMap._64_8_
                 );
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FXRTimedInputActionDelegate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FXRTimedInputActionDelegate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FXRTimedInputActionDelegate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UHeadMountedDisplayFunctionLibrary::OnXRTimedInputActionDelegateMap);
  return;
}

// OnXRTrackingOriginChanged'' @ 1504542f0

void __cdecl
`dynamic_atexit_destructor_for_'FXRTrackingSystemDelegates::OnXRTrackingOriginChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._8_8_,
             FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._16_4_);
  if (FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._8_8_ != 0) {
    FMemory::Free((void *)FXRTrackingSystemDelegates::OnXRTrackingOriginChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FXRTrackingSystemDelegates::OnXRTrackingOriginChanged)
  ;
  return;
}

// ShaderTypeRegistration'' @ 150454330

void __cdecl `dynamic_atexit_destructor_for_'FDisplayMappingPS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 150454340

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504543c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454440

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504544c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__0A__04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454540

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504545c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454640

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504546c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__0A___V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454740

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504547c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__01_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454840

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CEnableHMDCmd'' @ 1504548c0

void __cdecl _dynamic_atexit_destructor_for__CEnableHMDCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CEnableHMDCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CEnableStereoCmd'' @ 1504548e0

void __cdecl _dynamic_atexit_destructor_for__CEnableStereoCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CEnableStereoCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CForceTrackingCmd'' @ 150454900

void __cdecl _dynamic_atexit_destructor_for__CForceTrackingCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CForceTrackingCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CHMDResetCmd'' @ 150454920

void __cdecl _dynamic_atexit_destructor_for__CHMDResetCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHMDResetCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CHMDResetOrientationCmd'' @ 150454940

void __cdecl _dynamic_atexit_destructor_for__CHMDResetOrientationCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHMDResetOrientationCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CHMDResetPositionCmd'' @ 150454960

void __cdecl _dynamic_atexit_destructor_for__CHMDResetPositionCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHMDResetPositionCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CHMDStatusCmd'' @ 150454980

void __cdecl _dynamic_atexit_destructor_for__CHMDStatusCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHMDStatusCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CHMDVersionCmd'' @ 1504549a0

void __cdecl _dynamic_atexit_destructor_for__CHMDVersionCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHMDVersionCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CShowTrackingSensorsCmd'' @ 1504549c0

void __cdecl _dynamic_atexit_destructor_for__CShowTrackingSensorsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CShowTrackingSensorsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CSpectatorModeCmd'' @ 1504549e0

void __cdecl _dynamic_atexit_destructor_for__CSpectatorModeCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CSpectatorModeCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CTrackingOriginCmd'' @ 150454a00

void __cdecl _dynamic_atexit_destructor_for__CTrackingOriginCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CTrackingOriginCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCameraSmoothing'' @ 150454a20

void __cdecl _dynamic_atexit_destructor_for__CVarCameraSmoothing__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCameraSmoothing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCameraSmoothingPitchDecay'' @ 150454a40

void __cdecl _dynamic_atexit_destructor_for__CVarCameraSmoothingPitchDecay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCameraSmoothingPitchDecay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCameraSmoothingRollDecay'' @ 150454a60

void __cdecl _dynamic_atexit_destructor_for__CVarCameraSmoothingRollDecay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCameraSmoothingRollDecay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCameraSmoothingYawDecay'' @ 150454a80

void __cdecl _dynamic_atexit_destructor_for__CVarCameraSmoothingYawDecay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCameraSmoothingYawDecay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHiddenAreaMask'' @ 150454aa0

void __cdecl _dynamic_atexit_destructor_for__CVarHiddenAreaMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHiddenAreaMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobilePrimaryScalingMode'' @ 150454ac0

void __cdecl _dynamic_atexit_destructor_for__CVarMobilePrimaryScalingMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMobilePrimaryScalingMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSecondaryScreenPercentageHMDRenderTarget'' @ 150454ae0

void __cdecl _dynamic_atexit_destructor_for__CVarSecondaryScreenPercentageHMDRenderTarget__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSecondaryScreenPercentageHMDRenderTarget);
  return;
}

// `dynamic_atexit_destructor_for_'CWorldToMetersCmd'' @ 150454b00

void __cdecl _dynamic_atexit_destructor_for__CWorldToMetersCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CWorldToMetersCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CompatExecRegistration'' @ 150454b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CompatExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&CompatExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150454b40

void __cdecl
``FDefaultSpectatorScreenController::RenderSpectatorScreen_RenderThread'::__l17::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150454b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogHeadMountedDisplayCommand'' @ 150454b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHeadMountedDisplayCommand__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHeadMountedDisplayCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogMotionTracking'' @ 150454b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMotionTracking__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMotionTracking);
  return;
}

// `dynamic_atexit_destructor_for_'LogUHeadMountedDisplay'' @ 150454ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUHeadMountedDisplay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUHeadMountedDisplay);
  return;
}

// `dynamic_atexit_destructor_for_'LogXRDeviceVisualizationComponent'' @ 150454bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogXRDeviceVisualizationComponent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogXRDeviceVisualizationComponent);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150454be0

void __cdecl
`FRenderLayersPass::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderLayersPass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150454c00

void __cdecl
`FXRCopyTexturePass::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FXRCopyTexturePass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150454c20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FDisplayMappingPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

