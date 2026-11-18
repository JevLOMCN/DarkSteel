// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 117

// StaticClass @ 14d77e8a0

UClass * __cdecl UMediaCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaCapture",
               &Z_Registration_Info_UClass_UMediaCapture.InnerSingleton,
               StaticRegisterNativesUMediaCapture,0x2d8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaCapture>,
               InternalVTableHelperCtorCaller<UMediaCapture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaCapture.InnerSingleton;
}

// UMediaCapture @ 14d78b260

UMediaCapture * __thiscall UMediaCapture::UMediaCapture(UMediaCapture *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaCapture__6B_;
  *(undefined8 *)&this->OnStateChanged = 0;
  *(undefined8 *)&(this->OnStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnStateChangedNative = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnOutputSynchronization = 0;
  *(undefined8 *)&(this->OnOutputSynchronization).field_0x8 = 0;
  *(undefined4 *)&(this->OnOutputSynchronization).field_0x10 = 0;
  (this->MediaOutput).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  FAudioDeviceHandle::FAudioDeviceHandle(&this->AudioDeviceHandle);
  (this->DesiredOutputSize).field0_0x0._s_0.X = 0x780;
  (this->DesiredOutputSize).field0_0x0._s_0.Y = 0x438;
  this->ValidSourceGPUMask = (atomic<FRHIGPUMask>)0x1;
  this->CaptureSourceType = SCENE_VIEWPORT;
  this->NumberOfCaptureFrame = 2;
  (this->FrameManager).Ptr = (FFrameManager *)0x0;
  this->CaptureRequestCount = 0;
  this->MediaState = (atomic<EMediaCaptureState>)0x4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AccessingCapturingSource,4000);
  (this->DesiredSize).field0_0x0._s_0.X = 0x780;
  (this->DesiredSize).field0_0x0._s_0.Y = 0x438;
  this->DesiredPixelFormat = PF_A2B10G10R10;
  this->DesiredOutputPixelFormat = PF_A2B10G10R10;
  *(undefined8 *)&this->DesiredOutputTextureDescription = 0;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x8 = 1;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x10 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x20 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x24 = 1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x28 = 1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x30 = 0x101;
  *(undefined2 *)&(this->DesiredOutputTextureDescription).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x40 = 0;
  *(int *)&(this->DesiredOutputTextureDescription).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x48 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x4c = 1;
  (this->DesiredOutputBufferDescription).BytesPerElement = 1;
  (this->DesiredOutputBufferDescription).NumElements = 1;
  (this->DesiredOutputBufferDescription).Usage = None;
  (this->DesiredOutputBufferDescription).Metadata = (FShaderParametersMetadata *)0x0;
  (this->DesiredCaptureOptions).bAutoRestartOnSourceSizeChange = false;
  (this->DesiredCaptureOptions).OverrunAction = Flush;
  (this->DesiredCaptureOptions).Crop = None;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->DesiredCaptureOptions).ColorConversionSettings);
  (this->DesiredCaptureOptions).CustomCapturePoint.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->DesiredCaptureOptions).ResizeMethod = None;
  (this->DesiredCaptureOptions).bSkipFrameWhenRunningExpensiveTasks = true;
  (this->DesiredCaptureOptions).bConvertToDesiredPixelFormat = true;
  (this->DesiredCaptureOptions).bForceAlphaToOneOnConversion = false;
  (this->DesiredCaptureOptions).bApplyLinearToSRGBConversion = false;
  (this->DesiredCaptureOptions).bAutostopOnCapture = false;
  (this->DesiredCaptureOptions).NumberOfFramesToCapture = -1;
  (this->DesiredCaptureOptions).CapturePhase = EndFrame;
  this->ConversionOperation = NONE;
  this->DesiredOutputResourceType = Texture;
  ::FString::FString(&this->MediaOutputName,L"[undefined]");
  this->bUseRequestedTargetSize = false;
  this->bLoggedOutputNotReady = false;
  this->bWaitingForStopCapture = false;
  this->bViewportHasFixedViewportSize = false;
  this->bPendingOutputResourcesInitialized = (atomic<bool>)0x0;
  this->bSyncHandlersInitialized = (atomic<bool>)0x0;
  this->bShouldCaptureRHIResource = (atomic<bool>)0x0;
  this->WaitingForRenderCommandExecutionCounter = (atomic<int>)0x0;
  (this->PendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCommands).ArrayNum = 0;
  (this->PendingCommands).ArrayMax = 0;
  this->PendingFrameCount = (atomic<int>)0x0;
  this->bIsAutoRestartRequired = (atomic<bool>)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CaptureDataQueueCriticalSection,4000);
  (this->CaptureDataQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureDataQueue).ArrayNum = 0;
  (this->CaptureDataQueue).ArrayMax = 0;
  (this->SyncHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncHandlers).ArrayNum = 0;
  (this->SyncHandlers).ArrayMax = 0;
  (this->SyncPointWatcher).Ptr = (FSyncPointWatcher *)0x0;
  (this->CaptureSource).Object = (FCaptureSource *)0x0;
  (this->CaptureSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ViewExtension).Object = (FMediaCaptureSceneViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CaptureRenderPipeline).Ptr = (FRenderPipeline *)0x0;
  return this;
}

// UMediaCapture @ 14d78b4c0

UMediaCapture * __thiscall UMediaCapture::UMediaCapture(UMediaCapture *this)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMediaCapture__6B_;
  *(undefined8 *)&this->OnStateChanged = 0;
  *(undefined8 *)&(this->OnStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnStateChangedNative = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnOutputSynchronization = 0;
  *(undefined8 *)&(this->OnOutputSynchronization).field_0x8 = 0;
  *(undefined4 *)&(this->OnOutputSynchronization).field_0x10 = 0;
  (this->MediaOutput).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  FAudioDeviceHandle::FAudioDeviceHandle(&this->AudioDeviceHandle);
  (this->DesiredOutputSize).field0_0x0._s_0.X = 0x780;
  (this->DesiredOutputSize).field0_0x0._s_0.Y = 0x438;
  this->ValidSourceGPUMask =
       (atomic<FRHIGPUMask>)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
  this->CaptureSourceType = SCENE_VIEWPORT;
  this->NumberOfCaptureFrame = 2;
  (this->FrameManager).Ptr = (FFrameManager *)0x0;
  this->CaptureRequestCount = 0;
  this->MediaState = (atomic<EMediaCaptureState>)0x4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AccessingCapturingSource,4000);
  (this->DesiredSize).field0_0x0._s_0.X = 0x780;
  (this->DesiredSize).field0_0x0._s_0.Y = 0x438;
  this->DesiredPixelFormat = PF_A2B10G10R10;
  this->DesiredOutputPixelFormat = PF_A2B10G10R10;
  *(undefined8 *)&this->DesiredOutputTextureDescription = 0;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x8 = 1;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x10 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x20 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x24 = 1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x28 = 1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x2c = 0x10001;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x30 = 0x101;
  *(undefined2 *)&(this->DesiredOutputTextureDescription).field_0x34 = 0xff00;
  *(undefined8 *)&(this->DesiredOutputTextureDescription).field_0x40 = 0;
  *(int *)&(this->DesiredOutputTextureDescription).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x48 = 0;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x4c = 1;
  (this->DesiredOutputBufferDescription).BytesPerElement = 1;
  (this->DesiredOutputBufferDescription).NumElements = 1;
  (this->DesiredOutputBufferDescription).Usage = None;
  (this->DesiredOutputBufferDescription).Metadata = (FShaderParametersMetadata *)0x0;
  (this->DesiredCaptureOptions).bAutoRestartOnSourceSizeChange = false;
  (this->DesiredCaptureOptions).OverrunAction = Flush;
  (this->DesiredCaptureOptions).Crop = None;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->DesiredCaptureOptions).ColorConversionSettings);
  (this->DesiredCaptureOptions).CustomCapturePoint.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->DesiredCaptureOptions).ResizeMethod = None;
  (this->DesiredCaptureOptions).bSkipFrameWhenRunningExpensiveTasks = true;
  (this->DesiredCaptureOptions).bConvertToDesiredPixelFormat = true;
  (this->DesiredCaptureOptions).bForceAlphaToOneOnConversion = false;
  (this->DesiredCaptureOptions).bApplyLinearToSRGBConversion = false;
  (this->DesiredCaptureOptions).bAutostopOnCapture = false;
  (this->DesiredCaptureOptions).NumberOfFramesToCapture = -1;
  (this->DesiredCaptureOptions).CapturePhase = EndFrame;
  this->ConversionOperation = NONE;
  this->DesiredOutputResourceType = Texture;
  ::FString::FString(&this->MediaOutputName,L"[undefined]");
  this->bUseRequestedTargetSize = false;
  this->bLoggedOutputNotReady = false;
  this->bWaitingForStopCapture = false;
  this->bViewportHasFixedViewportSize = false;
  this->bPendingOutputResourcesInitialized = (atomic<bool>)0x0;
  this->bSyncHandlersInitialized = (atomic<bool>)0x0;
  this->bShouldCaptureRHIResource = (atomic<bool>)0x0;
  this->WaitingForRenderCommandExecutionCounter = (atomic<int>)0x0;
  (this->PendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCommands).ArrayNum = 0;
  (this->PendingCommands).ArrayMax = 0;
  this->PendingFrameCount = (atomic<int>)0x0;
  this->bIsAutoRestartRequired = (atomic<bool>)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CaptureDataQueueCriticalSection,4000);
  (this->CaptureDataQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureDataQueue).ArrayNum = 0;
  (this->CaptureDataQueue).ArrayMax = 0;
  (this->SyncHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncHandlers).ArrayNum = 0;
  (this->SyncHandlers).ArrayMax = 0;
  (this->SyncPointWatcher).Ptr = (FSyncPointWatcher *)0x0;
  (this->CaptureSource).Object = (FCaptureSource *)0x0;
  (this->CaptureSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ViewExtension).Object = (FMediaCaptureSceneViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CaptureRenderPipeline).Ptr = (FRenderPipeline *)0x0;
  return this;
}

// ~UMediaCapture @ 14d78d120

void __thiscall UMediaCapture::~UMediaCapture(UMediaCapture *this)

{
  FRenderPipeline *pFVar1;
  FSyncPointWatcher *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FFrameManager *pFVar5;
  
  this->_padding_ = (longlong)&___7UMediaCapture__6B_;
  pFVar1 = (this->CaptureRenderPipeline).Ptr;
  if (pFVar1 != (FRenderPipeline *)0x0) {
    (*(code *)pFVar1[-1].RenderPasses.AllocatorInstance.Data)(&pFVar1[-1].RenderPasses);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CaptureSource).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SyncPointWatcher).Ptr;
  if (pFVar2 != (FSyncPointWatcher *)0x0) {
    (*(code *)pFVar2[-1].PendingCaptureFrames.TailCopy)(&pFVar2[-1].PendingCaptureFrames.TailCopy);
  }
  DestructItems<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,int>
            ((TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)
             (this->SyncHandlers).AllocatorInstance.Data,(this->SyncHandlers).ArrayNum);
  pFVar3 = (this->SyncHandlers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UMediaCapture::FQueuedCaptureData,int>
            ((FQueuedCaptureData *)(this->CaptureDataQueue).AllocatorInstance.Data,
             (this->CaptureDataQueue).ArrayNum);
  pFVar3 = (this->CaptureDataQueue).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CaptureDataQueueCriticalSection);
  DestructItems<TFuture<void>,int>
            ((TFuture<void> *)(this->PendingCommands).AllocatorInstance.Data,
             (this->PendingCommands).ArrayNum);
  pFVar3 = (this->PendingCommands).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MediaOutputName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->DesiredCaptureOptions).ColorConversionSettings);
  pvVar4 = *(void **)&(this->DesiredOutputTextureDescription).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AccessingCapturingSource);
  pFVar5 = (this->FrameManager).Ptr;
  if (pFVar5 != (FFrameManager *)0x0) {
    (*(code *)pFVar5[-1].PendingFrames.TailCopy)(&pFVar5[-1].PendingFrames.TailCopy);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&this->AudioDeviceHandle);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOutputSynchronization);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStateChangedNative).field_0x8,
             *(int *)&(this->OnStateChangedNative).field_0x10);
  pvVar4 = *(void **)&(this->OnStateChangedNative).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStateChangedNative);
  pvVar4 = *(void **)&(this->OnStateChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStateChanged);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d78eb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong *plVar2;
  atomic<int> *paVar3;
  UObject *pUVar4;
  FRHITexture *pFVar5;
  ForAnyElementType *pFVar6;
  FFrameManager *this_00;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar11;
  FRHIGPUBufferReadback *pFVar12;
  FRHIGPUTextureReadback *this_01;
  FName *pFVar13;
  FRHIGPUBufferReadback *pFVar14;
  FScriptContainerElement *pFVar15;
  FRHIGPUBufferReadback *pFVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong *plVar21;
  TReferenceControllerBase<1> *local_res18;
  FWeakObjectPtr local_res20;
  longlong *local_d8;
  FRHIGPUBufferReadback *local_d0;
  UObject *local_c8;
  UObject *local_c0;
  FString local_b8;
  FString local_a8;
  TSharedPtr<UE::MediaCaptureData::FFrame,1> local_98;
  FName local_88;
  longlong local_80;
  FName local_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  FWeakObjectPtr local_50;
  undefined8 local_40;
  
  TVar11 = FWeakObjectPtr::Pin(this);
  iVar19 = 0;
                    /* WARNING: Load size is inaccurate */
  pUVar4 = *TVar11.Object;
  *(undefined8 *)TVar11.Object = 0;
  if (local_c8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_c8);
    local_c8 = (UObject *)0x0;
  }
  if (pUVar4 != (UObject *)0x0) {
LAB_14d78ebfc:
    pFVar14 = (FRHIGPUBufferReadback *)0x0;
    if (iVar19 < *(int *)&pUVar4[4].field_0x8) {
      if (pUVar4[0xd].field_0x19 == '\0') {
        pFVar12 = ::operator_new(0x120);
        if (pFVar12 == (FRHIGPUBufferReadback *)0x0) {
          plVar21 = (longlong *)&DAT_00000010;
          pFVar12 = pFVar14;
        }
        else {
          *(undefined4 *)&pFVar12->_padding_ = 1;
          *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 1;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFTextureCaptureFrame_MediaCaptureData_UE___00_SharedPointerInternals__6B_
          ;
          UE::MediaCaptureData::FCaptureFrame::FCaptureFrame
                    ((FCaptureFrame *)&pFVar12->_padding_,iVar19);
          pFVar12->_padding_ = (longlong)&___7FTextureCaptureFrame_MediaCaptureData_UE__6B_;
          plVar21 = &pFVar12->_padding_;
          pFVar12[3]._padding_ = 0;
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        if (pUVar4[0xe].field_0xe == '\0') {
          ::FString::PrintfImpl(&local_b8,L"MediaCaptureTextureReadback_%d");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar18.Data = local_b8.Data.AllocatorInstance.Data;
          }
          this_01 = ::operator_new(0x58);
          if (this_01 != (FRHIGPUTextureReadback *)0x0) {
            pFVar13 = ::FName::FName(&local_88,(wchar_t *)FVar18.Data);
            pFVar14 = (FRHIGPUBufferReadback *)
                      FRHIGPUTextureReadback::FRHIGPUTextureReadback(this_01,*pFVar13);
          }
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar2 = plVar21 + 0x21;
          if (plVar2 == &local_80) {
            if (pFVar14 != (FRHIGPUBufferReadback *)0x0) {
              pFVar16 = pFVar14 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar16[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar16 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar16[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar14->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              pFVar16 = pFVar14;
              if ((FRHIResource *)pFVar14->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar14->_padding_);
              }
              goto LAB_14d78ee05;
            }
          }
          else {
            pFVar16 = (FRHIGPUBufferReadback *)*plVar2;
            *plVar2 = (longlong)pFVar14;
            if (pFVar16 != (FRHIGPUBufferReadback *)0x0) {
              pFVar14 = pFVar16 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar14 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar16->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              if ((FRHIResource *)pFVar16->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar16->_padding_);
              }
LAB_14d78ee05:
              ::operator_delete(pFVar16,0x58);
            }
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if (pUVar4[0xd].field_0xd != '\0') {
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined1 *)(plVar21 + 0x20) = 0;
        }
        pFVar6 = *(ForAnyElementType **)&pUVar4[4].field_0x10;
        if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        local_d8 = plVar21;
        local_d0 = pFVar12;
        if ((plVar21 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = (**(code **)(*local_d8 + 8))(local_d8);
        pFVar15 = pFVar6[4].Data;
        if (pFVar15 == pFVar6[5].Data) {
          pFVar15 = pFVar6[4].Data;
          pFVar6[5].Data = pFVar6[2].Data;
          if (pFVar15 == pFVar6[2].Data) {
            pFVar15 = FMemory::Malloc(0x10,8);
            *(undefined4 *)(pFVar15 + 0xc) = 0;
            *(undefined8 *)pFVar15 = 0;
          }
          else {
            pFVar6[4].Data = *(FScriptContainerElement **)pFVar15;
            *(undefined8 *)pFVar15 = 0;
          }
        }
        else {
          pFVar6[4].Data = *(FScriptContainerElement **)pFVar15;
          *(undefined8 *)pFVar15 = 0;
        }
        *(undefined4 *)(pFVar15 + 8) = uVar9;
        *(FScriptContainerElement **)pFVar6[3].Data = pFVar15;
        pFVar6[3].Data = pFVar15;
        LOCK();
        *(int *)&pFVar6[6].Data = *(int *)&pFVar6[6].Data + 1;
        UNLOCK();
        if (((pFVar6->Data <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar10 + 1;
        pFVar15 = pFVar6->Data;
        *(longlong **)(pFVar15 + (longlong)iVar10 * 0x10) = local_d8;
        *(FRHIGPUBufferReadback **)(pFVar15 + (longlong)iVar10 * 0x10 + 8) = local_d0;
        local_d0 = (FRHIGPUBufferReadback *)0x0;
        local_d8 = (longlong *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        iVar19 = iVar19 + 1;
      }
      else {
        local_res18 = ::operator_new(0x178);
        if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
          local_res18 = (TReferenceControllerBase<1> *)0x0;
          pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d78f0d2:
          lVar17._0_4_ = pTVar20[0x10].SharedReferenceCount;
          lVar17._4_4_ = pTVar20[0x10].WeakReferenceCount;
          if (((lVar17 == 0) || (pTVar20[0x11]._padding_ == 0)) ||
             (*(int *)(pTVar20[0x11]._padding_ + 8) < 1)) {
            if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_res18->SharedReferenceCount =
                   (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(TReferenceControllerBase<1> **)&pTVar20[0x10].SharedReferenceCount = pTVar20;
            if (local_res18 != (TReferenceControllerBase<1> *)pTVar20[0x11]._padding_) {
              if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_res18->WeakReferenceCount =
                     (atomic<int>)((int)local_res18->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar21 = (longlong *)pTVar20[0x11]._padding_;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar21 + 8))();
                }
              }
              pTVar20[0x11]._padding_ = (longlong)local_res18;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_res18);
          }
          if (local_res18 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d78f151;
        }
        else {
          local_res18->SharedReferenceCount = (atomic<int>)0x1;
          local_res18->WeakReferenceCount = (atomic<int>)0x1;
          local_res18->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFBufferCaptureFrame_MediaCaptureData_UE___00_SharedPointerInternals__6B_
          ;
          UE::MediaCaptureData::FCaptureFrame::FCaptureFrame
                    ((FCaptureFrame *)(local_res18 + 1),iVar19);
          local_res18[0x11].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x11].WeakReferenceCount = (atomic<int>)0x0;
          pTVar20 = local_res18 + 1;
          local_res18[0x12]._padding_ = 0;
          local_res18[1]._padding_ = (longlong)&___7FBufferCaptureFrame_MediaCaptureData_UE__6B_;
          local_res18[0x12].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x12].WeakReferenceCount = (atomic<int>)0x0;
          local_res18[0x13]._padding_ = 0;
          local_res18[0x13].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x13].WeakReferenceCount = (atomic<int>)0x0;
          local_res18[0x14]._padding_ = 0;
          local_res18[0x14].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x14].WeakReferenceCount = (atomic<int>)0x0;
          local_res18[0x15]._padding_ = 0;
          local_res18[0x15].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x15].WeakReferenceCount = (atomic<int>)0x0;
          local_res18[0x16]._padding_ = 0;
          local_res18[0x16].SharedReferenceCount = (atomic<int>)0x0;
          local_res18[0x16].WeakReferenceCount = (atomic<int>)0x0;
          local_res18[0x17]._padding_ = 1;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d78f0d2;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14d78f151:
          LOCK();
          local_res18->SharedReferenceCount =
               (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_res18);
        if (*(int *)&pUVar4[8].field_0xc == 0) {
          if (1 < (byte)LogMediaIOCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          }
          if (pUVar4[4].field_0x1c != '\0') {
            LOCK();
            pUVar4[4].field_0x1c = 0;
            UNLOCK();
            bVar8 = IsInGameThread();
            if (bVar8) {
              TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
              ProcessMulticastDelegate<UObject>
                        ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
                         (void *)0x0);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar4[1].field_0x18);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_res18);
              iVar19 = iVar19 + 1;
              goto LAB_14d78ebfc;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            local_res20.ObjectIndex = 0;
            local_res20.ObjectSerialNumber = 0;
            local_c0 = pUVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c0);
            local_40 = 0;
            local_58 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::
                        _vftable_;
            local_50 = local_res20;
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::
                          Call;
            AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_68);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_res18);
          iVar19 = iVar19 + 1;
          goto LAB_14d78ebfc;
        }
        if (pUVar4[0xe].field_0xe == '\0') {
          ::FString::PrintfImpl(&local_a8,L"MediaCaptureBufferReadback_%d");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar18.Data = local_a8.Data.AllocatorInstance.Data;
          }
          pFVar12 = ::operator_new(0x58);
          if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
            pFVar13 = ::FName::FName(&local_78,(wchar_t *)FVar18.Data);
            pFVar14 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar12,*pFVar13);
          }
          if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          paVar3 = &pTVar20[0x11].SharedReferenceCount;
          if (paVar3 == (atomic<int> *)&local_70) {
            if (pFVar14 != (FRHIGPUBufferReadback *)0x0) {
              pFVar12 = pFVar14 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar12[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar12 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar12[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar14->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              pFVar12 = pFVar14;
              if ((FRHIResource *)pFVar14->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar14->_padding_);
              }
              goto LAB_14d78f2b5;
            }
          }
          else {
            pFVar12 = *(FRHIGPUBufferReadback **)paVar3;
            *(FRHIGPUBufferReadback **)paVar3 = pFVar14;
            if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
              pFVar14 = pFVar12 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar14 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar12->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              if ((FRHIResource *)pFVar12->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar12->_padding_);
              }
LAB_14d78f2b5:
              ::operator_delete(pFVar12,0x58);
            }
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        if (pUVar4[0xd].field_0xd != '\0') {
          if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined1 *)&pTVar20[0x10]._padding_ = 0;
        }
        this_00 = *(FFrameManager **)&pUVar4[4].field_0x10;
        if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_res18->SharedReferenceCount =
               (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.Object = (FFrame *)pTVar20;
        local_98.SharedReferenceCount.ReferenceController = local_res18;
        UE::MediaCaptureData::FFrameManager::AddFrame(this_00,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_res18);
        iVar19 = iVar19 + 1;
      }
      goto LAB_14d78ebfc;
    }
    LOCK();
    pUVar4[0xe].field_0xc = 0;
    UNLOCK();
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return;
}

// operator() @ 14d790020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIGPUMask FVar1;
  TObjectPtr<UMediaCapture>_u_0 this_00;
  TIntPoint<int>_u_0 TVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  FRHITexture *this_01;
  void *pvVar5;
  bool bVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  FCaptureFrame *pFVar8;
  longlong lVar9;
  undefined1 auStackY_918 [32];
  FRHITexture *local_8e8;
  FRHICommandListImmediate *local_8e0;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_8d8;
  UObject *local_8c8;
  void *local_8c0;
  FRDGEventName local_8b8;
  FCaptureFrameArgs local_8a0;
  FRDGBuilder *local_868;
  TObjectPtr<UMediaCapture>_u_0 local_860;
  FRHITexture *local_858;
  undefined8 local_850;
  TIntPoint<int>_u_0 local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  FRDGBuilder local_828;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_918;
  FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
  local_8e0 = param_1;
  local_8c0 = this;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_1,(FRHIGPUMask)*(uint *)((longlong)this + 0x30));
  TVar7 = FWeakObjectPtr::Pin(this);
  lVar9 = 0;
  this_00.DebugPtr = *(UMediaCapture **)TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  if (local_8c8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_8c8);
    local_8c8 = (UObject *)0x0;
  }
  if (this_00.DebugPtr == (UMediaCapture *)0x0) goto LAB_14d7903dd;
  UE::MediaCaptureData::FFrameManager::PeekNextPending<UE::MediaCaptureData::FCaptureFrame>
            (((this_00.DebugPtr)->FrameManager).Ptr,&local_8d8);
  if ((local_8d8.Object != (FCaptureFrame *)0x0) && (*(longlong *)((longlong)this + 0x18) != 0)) {
    if ((local_8d8.Object == (FCaptureFrame *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
                       ((TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)((longlong)this + 0x18)
                       );
    if (((local_8d8.Object)->FrameId == pFVar8->FrameId) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_887742707559037823>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                           ,0x481,"NextPending->FrameId != CapturingFrame->FrameId"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_8b8.EventFormat = L"";
  local_8b8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8.FormattedEventName.Data.ArrayNum = 0;
  local_8b8.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_828,local_8e0,&local_8b8,None,GMaxRHIShaderPlatform);
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x50))
            (*(longlong **)((longlong)this + 8),&local_8e8);
  local_868 = &local_828;
  local_850 = 0;
  local_858 = (FRHITexture *)0x0;
  local_840 = 0;
  uStack_838 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  this_01 = local_8e8;
  local_8a0.GraphBuilder = &local_828;
  TVar2 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x28);
  local_858 = local_8e8;
  local_8e8 = (FRHITexture *)0x0;
  local_8a0.MediaCapture.field0_0x0 =
       (TObjectPtr<UMediaCapture>_u_0)(TObjectPtr<UMediaCapture>_u_0)this_00.DebugPtr;
  local_860.DebugPtr = this_00.DebugPtr;
  local_848 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  local_8a0.ResourceToCapture.Reference = this_01;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  pvVar5 = local_8c0;
  local_8a0.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_8a0.RDGResourceToCapture = (FRDGTexture *)0x0;
  local_8a0.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_8a0.DesiredSize.field0_0x0 = TVar2;
  UMediaCapture::ProcessCapture_RenderThread
            (this_00.DebugPtr,
             (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)((longlong)local_8c0 + 0x18),
             &local_8a0);
  if (5 < (byte)LogMediaIOCore._0_1_) {
    if (*(longlong *)((longlong)pvVar5 + 0x18) != 0) {
      TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
                ((TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)((longlong)pvVar5 + 0x18));
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  FRDGBuilder::Execute(&local_828);
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (local_8e8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_8e8);
  }
  FRDGBuilder::~FRDGBuilder(&local_828);
  pTVar4 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (GRHIGlobals.SupportsMultithreading == false) {
LAB_14d790327:
    if (5 < (byte)LogMediaIOCore._0_1_) {
      if (((local_8d8.Object != (FCaptureFrame *)0x0) && (local_8d8.Object == (FCaptureFrame *)0x0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    if (local_8d8.Object != (FCaptureFrame *)0x0) {
      UMediaCapture::ProcessReadyFrame_RenderThread
                (this_00.DebugPtr,local_8e0,this_00.DebugPtr,&local_8d8);
    }
  }
  else {
    bVar6 = IsInParallelGameThread();
    if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
      lVar9 = 4;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 1) goto LAB_14d790327;
  }
  LOCK();
  (this_00.DebugPtr)->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)(this_00.DebugPtr)->WaitingForRenderCommandExecutionCounter + -1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8.SharedReferenceCount.ReferenceController);
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00.DebugPtr);
LAB_14d7903dd:
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_8e0,FVar1);
  return;
}

// AddFrameInfoForCaptureImmediate @ 14d796120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMediaCapture::AddFrameInfoForCaptureImmediate(UMediaCapture *this,ulong64 param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTimecode *pFVar7;
  FFrameRate FVar8;
  undefined8 *puVar9;
  longlong lVar10;
  TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStack_10e8 [32];
  undefined8 *local_10c8;
  FScriptContainerElement *local_10c0;
  longlong local_10b8;
  longlong local_10b0;
  undefined8 local_10a8;
  undefined8 local_1098;
  undefined8 uStack_1090;
  ulonglong local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  FSharedReferencer<1> aFStack_1060 [2];
  undefined1 local_1050 [8];
  TReferenceControllerBase<1> *local_1048;
  FTimecode local_1040;
  uchar local_1028 [2];
  ulong64 local_1026;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14d796140;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10e8;
  local_1098 = 0;
  uStack_1090 = 0;
  local_1068 = 0;
  aFStack_1060[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_1070 = 0;
  local_1088 = local_1088 & 0xffffff0000000000;
  pFVar7 = FApp::GetTimecode(&local_1040);
  local_1098._0_4_ = pFVar7->Hours;
  local_1098._4_4_ = pFVar7->Minutes;
  uStack_1090._0_4_ = pFVar7->Seconds;
  uStack_1090._4_4_ = pFVar7->Frames;
  local_1088._0_4_ = pFVar7->Subframe;
  local_1088._4_1_ = pFVar7->bDropFrameFormat;
  local_1088._5_3_ = *(undefined3 *)&pFVar7->field_0x15;
  FVar8 = FApp::GetTimecodeFrameRate();
  uStack_1080 = *(undefined8 *)FVar8;
  local_1078 = param_1;
  puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0x370))(this,local_1050);
  if (&local_1068 != puVar9) {
    local_1068 = *puVar9;
    *puVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (aFStack_1060,(FSharedReferencer<1> *)(puVar9 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1048);
  lpCriticalSection = &this->CaptureDataQueueCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->CaptureDataQueue).ArrayNum < 1) ||
       (*(ulonglong *)((this->CaptureDataQueue).AllocatorInstance.Data + 0x20) < param_1)) {
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint1390 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint1390,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x56e,L"MediaCapture GT push frame %llu");
          __BookmarkPoint1390 = true;
        }
        uVar5 = CallstackTrace_GetCurrentId();
        local_1028[0] = '\x01';
        local_1028[1] = 'H';
        local_1026 = param_1;
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1390,uVar5,10,local_1028);
      }
      pTVar11 = &this->CaptureDataQueue;
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_1098) &&
         (lVar10 = (longlong)(this->CaptureDataQueue).ArrayMax,
         (FScriptContainerElement *)&local_1098 < pFVar2 + lVar10 * 0x40)) {
        local_10b0 = (longlong)(this->CaptureDataQueue).ArrayNum;
        local_10a8 = 0x40;
        local_10c8 = &local_1098;
        local_10c0 = pFVar2;
        local_10b8 = lVar10;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = (this->CaptureDataQueue).ArrayNum;
      piVar1 = &(this->CaptureDataQueue).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&pTVar11->AllocatorInstance,piVar1);
      }
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      (this->CaptureDataQueue).ArrayNum = iVar6 + 1;
      memmove(pFVar2 + 0x40,pFVar2,(longlong)iVar6 << 6);
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      *(undefined8 *)pFVar2 = local_1098;
      *(undefined8 *)(pFVar2 + 8) = uStack_1090;
      *(ulonglong *)(pFVar2 + 0x10) = local_1088;
      *(undefined8 *)(pFVar2 + 0x18) = uStack_1080;
      *(undefined4 *)(pFVar2 + 0x20) = (undefined4)local_1078;
      *(undefined4 *)(pFVar2 + 0x24) = local_1078._4_4_;
      *(undefined4 *)(pFVar2 + 0x28) = (undefined4)uStack_1070;
      *(undefined4 *)(pFVar2 + 0x2c) = uStack_1070._4_4_;
      *(undefined8 *)(pFVar2 + 0x30) = local_1068;
      *(TReferenceControllerBase<1> **)(pFVar2 + 0x38) = aFStack_1060[0].ReferenceController;
      aFStack_1060[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1068 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_1060[0].ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BeforeFrameCaptured_RenderingThread @ 14d797970

void __thiscall
UMediaCapture::BeforeFrameCaptured_RenderingThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,TRefCountPtr<FRHIBuffer> param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    return;
  }
  return;
}

// BeforeFrameCaptured_RenderingThread @ 14d7979a0

void __thiscall
UMediaCapture::BeforeFrameCaptured_RenderingThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,TRefCountPtr<FRHITexture> param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    return;
  }
  return;
}

// BeginDestroy @ 14d7979d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::BeginDestroy(UMediaCapture *this)

{
  char cVar1;
  FName local_res8 [4];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  if (((cVar1 == '\x01') || (cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar1 == '\x02'))
     && (2 < (byte)LogMediaIOCore._0_1_)) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,(FString *)&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  StopCapture_Callback(this,false,&local_28);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BroadcastStateChanged @ 14d797a80

void __thiscall UMediaCapture::BroadcastStateChanged(UMediaCapture *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
             (void *)0x0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnStateChangedNative);
  return;
}

// CacheMediaOutput @ 14d797d40

void __thiscall UMediaCapture::CacheMediaOutput(UMediaCapture *this,EMediaCaptureSourceType param_1)

{
  UMediaOutput *pUVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  code *pcVar3;
  bool bVar4;
  EPixelFormat EVar5;
  EMediaCaptureConversionOperation EVar6;
  TIntPoint<int>_u_0_s_0 *pTVar7;
  undefined1 local_res8 [8];
  
  if ((this->MediaOutput).field0_0x0.DebugPtr == (UMediaOutput *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MediaOutput",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x189,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->CaptureSourceType = param_1;
  pTVar7 = (TIntPoint<int>_u_0_s_0 *)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_res8);
  TVar2 = *pTVar7;
  (this->DesiredSize).field0_0x0._s_0 = TVar2;
  if ((TVar2.X == UMediaOutput::RequestCaptureSourceSize.field0_0x0._s_0.X) &&
     (TVar2.Y == UMediaOutput::RequestCaptureSourceSize.field0_0x0._s_0.Y)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pUVar1 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->bUseRequestedTargetSize = bVar4;
  EVar5 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
  pUVar1 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->DesiredPixelFormat = EVar5;
  EVar6 = (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,param_1);
  this->ConversionOperation = EVar6;
  return;
}

// CacheOutputOptions @ 14d798150

void __thiscall UMediaCapture::CacheOutputOptions(UMediaCapture *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  EMediaCaptureConversionOperation EVar3;
  int iVar4;
  UMediaOutput *pUVar5;
  undefined4 uVar6;
  EMediaCaptureResourceType EVar7;
  EPixelFormat EVar8;
  atomic<bool> aVar9;
  TIntPoint<int> TVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  FName local_88;
  undefined1 local_80 [4];
  float fStack_7c;
  undefined8 uStack_78;
  FShaderParametersMetadata *local_70;
  ForElementType<EPixelFormat> local_30;
  
  TVar10 = GetOutputSize(this);
  EVar3 = this->ConversionOperation;
                    /* WARNING: Load size is inaccurate */
  (this->DesiredOutputSize).field0_0x0 = (TIntPoint<int>_u_0)*TVar10.field0_0x0;
  if (EVar3 == CUSTOM) {
    EVar7 = (**(code **)(this->_padding_ + 0x3f8))(this);
  }
  else {
    EVar7 = Texture;
  }
  EVar3 = this->ConversionOperation;
  this->DesiredOutputResourceType = EVar7;
  if (EVar3 == NONE) {
LAB_14d7981d2:
    EVar8 = this->DesiredPixelFormat;
  }
  else if (EVar3 == RGBA8_TO_YUV_8BIT) {
    EVar8 = PF_B8G8R8A8;
  }
  else if (EVar3 == RGB10_TO_YUVv210_10BIT) {
    EVar8 = PF_R32G32B32A32_UINT;
  }
  else {
    if (EVar3 != CUSTOM) goto LAB_14d7981d2;
    EVar8 = (**(code **)(this->_padding_ + 0x3f0))(this,&this->DesiredPixelFormat);
  }
  this->DesiredOutputPixelFormat = EVar8;
  uVar11 = (**(code **)(this->_padding_ + 0x408))(this);
  uVar6 = FClearValueBinding::None.Value.Color[3];
  EVar3 = this->ConversionOperation;
  local_80 = (undefined1  [4])FClearValueBinding::None.ColorBinding;
  fStack_7c = FClearValueBinding::None.Value.Color[0];
  uStack_78._4_4_ = (int)FClearValueBinding::None.Value.Color[2];
  uStack_78._0_4_ = FClearValueBinding::None.Value.DSValue.Stencil;
  if (EVar3 != NONE) {
    if (EVar3 == RGBA8_TO_YUV_8BIT) {
      EVar8 = PF_B8G8R8A8;
      goto LAB_14d798243;
    }
    if (EVar3 == RGB10_TO_YUVv210_10BIT) {
      EVar8 = PF_R32G32B32A32_UINT;
      goto LAB_14d798243;
    }
    if (EVar3 == CUSTOM) {
      EVar8 = (**(code **)(this->_padding_ + 0x3f0))(this,&this->DesiredPixelFormat);
      goto LAB_14d798243;
    }
  }
  EVar8 = this->DesiredPixelFormat;
LAB_14d798243:
  TVar10 = GetOutputSize(this);
  local_88 = *(FName *)TVar10.field0_0x0;
  *(int *)&(this->DesiredOutputTextureDescription).field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  (this->DesiredOutputTextureDescription).field_0x33 = EVar8;
  *(uint *)&(this->DesiredOutputTextureDescription).field_0x24 = local_88.ComparisonIndex.Value;
  *(uint *)&(this->DesiredOutputTextureDescription).field_0x28 = local_88.Number;
  puVar2 = &(this->DesiredOutputTextureDescription).field_0x38;
  *(undefined2 *)&(this->DesiredOutputTextureDescription).field_0x31 = 1;
  *(undefined8 *)&this->DesiredOutputTextureDescription = uVar11;
  *(undefined2 *)&(this->DesiredOutputTextureDescription).field_0x34 = 0xff00;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x2c = 0x10001;
  (this->DesiredOutputTextureDescription).field_0x30 = 1;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x20 = 0;
  *(ulonglong *)&(this->DesiredOutputTextureDescription).field_0x8 = CONCAT44(fStack_7c,local_80);
  *(int *)&(this->DesiredOutputTextureDescription).field_0x10 = (int)uStack_78;
  *(int *)&(this->DesiredOutputTextureDescription).field_0x14 = uStack_78._4_4_;
  *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x18 = uVar6;
  if ((ForElementType<EPixelFormat> *)puVar2 != &local_30) {
    iVar4 = *(int *)&(this->DesiredOutputTextureDescription).field_0x4c;
    puVar1 = &(this->DesiredOutputTextureDescription).field_0x4c;
    *(undefined4 *)&(this->DesiredOutputTextureDescription).field_0x48 = 0;
    if (iVar4 == 0) {
      *(undefined4 *)puVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,0,iVar4,(ForElementType<EPixelFormat> *)puVar2,0,(int *)puVar1);
    }
  }
  if (this->ConversionOperation == CUSTOM) {
    (**(code **)(this->_padding_ + 0x400))(this,local_80,&this->DesiredSize);
  }
  else {
    uStack_78._0_4_ = 0;
    uStack_78._4_4_ = 0;
    local_80 = (undefined1  [4])0x1;
    fStack_7c = 1.4013e-45;
    local_70 = (FShaderParametersMetadata *)0x0;
  }
  pUVar5 = (this->MediaOutput).field0_0x0.DebugPtr;
  (this->DesiredOutputBufferDescription).BytesPerElement = (uint)local_80;
  (this->DesiredOutputBufferDescription).NumElements = (uint)fStack_7c;
  (this->DesiredOutputBufferDescription).Usage = (int)uStack_78;
  *(int *)&(this->DesiredOutputBufferDescription).field_0xc = uStack_78._4_4_;
  (this->DesiredOutputBufferDescription).Metadata = local_70;
  local_88 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_88,(FString *)local_80);
  pwVar12 = L"";
  if ((int)uStack_78 != 0) {
    pwVar12 = (wchar_t *)CONCAT44(fStack_7c,local_80);
  }
  ::FString::operator=(&this->MediaOutputName,pwVar12);
  if ((void *)CONCAT44(fStack_7c,local_80) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(fStack_7c,local_80));
  }
  aVar9 = (atomic<bool>)(**(code **)(this->_padding_ + 0x380))(this);
  LOCK();
  this->bShouldCaptureRHIResource = aVar9;
  UNLOCK();
  return;
}

// CaptureActiveSceneViewport @ 14d79ad30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMediaCapture::CaptureActiveSceneViewport(UMediaCapture *this,FMediaCaptureOptions *param_1)

{
  int iVar1;
  FSceneViewport *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  FMediaCaptureOptions *pFVar9;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> *pTVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  UMediaCapture *local_res18 [2];
  TSharedPtr<FSceneViewport,1> local_168;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_158;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_140;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FMediaCaptureOptions local_f0;
  
  local_158._16_8_ = 0;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  StopCapture_Callback(this,false,&local_158);
  bVar6 = IsInGameThread();
  pwVar12 = L"";
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0xe6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  pUVar5 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      pFVar2 = (FSceneViewport *)pUVar5[1]._padding_;
      pTVar3 = (TReferenceControllerBase<1> *)pUVar5[1]._padding_;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168.Object = pFVar2;
      local_168.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar2 == (FSceneViewport *)0x0) {
        if (2 < (byte)LogMediaIOCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
                  (&param_1->ColorConversionSettings);
        bVar6 = false;
      }
      else {
        pFVar9 = FMediaCaptureOptions::FMediaCaptureOptions(&local_f0,param_1);
        local_res18[0] = this;
        pTVar10 = MakeShared<UE::MediaCapture::Private::FSceneViewportCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,TSharedPtr<FSceneViewport,1>_&>
                            (&local_130,local_res18,pFVar9,&local_168);
        local_140.Object = (FCaptureSource *)pTVar10->Object;
        local_140.SharedReferenceCount.ReferenceController =
             (pTVar10->SharedReferenceCount).ReferenceController;
        if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar6 = StartSourceCapture(this,&local_140);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.SharedReferenceCount.ReferenceController);
        FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
                  (&pFVar9->ColorConversionSettings);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
                  (&param_1->ColorConversionSettings);
      }
      return bVar6;
    }
    pFVar11 = GetTypeName<UGameEngine>(&local_110);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UEngine>(&local_100,pUVar5);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  pFVar11 = GetTypeName<UGameEngine>(&local_120);
  if ((pFVar11->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// CaptureImmediate_RenderThread @ 14d79bd30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
UMediaCapture::CaptureImmediate_RenderThread(UMediaCapture *this,FCaptureFrameArgs *param_1)

{
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  FRHITexture *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FMediaCaptureUserData *pFVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  DWORD DVar13;
  FCaptureSource *pFVar14;
  FSlateThrottleManager *this_01;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *pTVar15;
  FCaptureFrameArgs *pFVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  uint uVar19;
  FCaptureFrame *pFVar20;
  TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_> *pTVar21;
  bool bVar22;
  bool bVar23;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_138;
  TIndexedContainerIterator<TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_>,UMediaCapture::FQueuedCaptureData,int>
  local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  FFrameRate FStack_100;
  ulong64 local_f8;
  ulong64 uStack_f0;
  FMediaCaptureUserData *local_e8;
  FSharedReferencer<1> FStack_e0;
  FString local_d8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_c8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_b8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_a0;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_90;
  FMediaCaptureUserData *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FCaptureFrameArgs local_70;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId737,"UMediaCapture::CaptureImmediate_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x2e1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId737);
  }
  ::FString::PrintfImpl(&local_d8,L"MediaCapturePipe: %llu");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar17.Data = local_d8.Data.AllocatorInstance.Data;
  }
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar17.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x2e2);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                         ,0x2e4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (this->bIsAutoRestartRequired == (atomic<bool>)0x0) {
    if (this->bPendingOutputResourcesInitialized == (atomic<bool>)0x0) {
      if (((this->MediaOutput).field0_0x0.DebugPtr != (UMediaOutput *)0x0) &&
         (cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar10 != '\0')) {
        this_00 = &this->CaptureSource;
        if (this_00->Object != (FCaptureSource *)0x0) {
          pFVar14 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
          cVar10 = (**(code **)(pFVar14->_padding_ + 0x40))(pFVar14);
          if (cVar10 != '\0') {
            if (1 < (byte)LogMediaIOCore._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
            }
            SetState(this,Error);
          }
        }
        cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this);
        if ((cVar10 == '\x01') ||
           (cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar10 == '\x03')) {
          if ((this->DesiredCaptureOptions).bSkipFrameWhenRunningExpensiveTasks != false) {
            this_01 = FSlateThrottleManager::Get();
            bVar8 = FSlateThrottleManager::IsAllowingExpensiveTasks(this_01);
            if (!bVar8) goto LAB_14d79be8a;
          }
          if (this_00->Object != (FCaptureSource *)0x0) {
            pFVar14 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
            cVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
            if (cVar10 == '\x02') {
              if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
                pFVar2 = (param_1->ResourceToCapture).Reference;
                lVar18 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
                uVar1 = *(undefined4 *)(lVar18 + 0x28);
                lVar18 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
                lVar18 = CONCAT44(uVar1,*(undefined4 *)(lVar18 + 0x24));
              }
              else {
                lVar18 = *(longlong *)&(param_1->RDGResourceToCapture->Desc).field_0x24;
              }
              pTVar3 = (this->CaptureSource).SharedReferenceCount.ReferenceController;
              pFVar14 = this_00->Object;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar14 == (FCaptureSource *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              pFVar14[1]._padding_ = lVar18;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            lpCriticalSection = &this->CaptureDataQueueCriticalSection;
            local_108 = (ulonglong)local_108._5_3_ << 0x28;
            local_118 = 0;
            uStack_110 = 0;
            FStack_100.Numerator = 60000;
            FStack_100.Denominator = 1;
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = (FMediaCaptureUserData *)0x0;
            FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pTVar21 = &this->CaptureDataQueue;
            local_128.Container = pTVar21;
            for (uVar19 = 0;
                (local_128.Index = uVar19, -1 < (int)uVar19 && ((int)uVar19 < pTVar21->ArrayNum));
                uVar19 = uVar19 + 1) {
              uVar12 = 0;
              if ((int)uVar19 < pTVar21->ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (*(ulong64 *)
                   ((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x40 + 0x20) ==
                  GFrameCounterRenderThread) {
                uVar12 = 0;
                if ((int)uVar19 < pTVar21->ArrayNum) {
                  uVar12 = ~uVar19 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                FVar7.ReferenceController = FStack_e0.ReferenceController;
                pFVar4 = (pTVar21->AllocatorInstance).Data;
                lVar18 = (longlong)(int)uVar19 * 0x40;
                local_118 = *(undefined8 *)(pFVar4 + lVar18);
                uStack_110 = *(undefined8 *)(pFVar4 + lVar18 + 8);
                pTVar3 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar18 + 0x38);
                pFVar5 = *(FMediaCaptureUserData **)(pFVar4 + lVar18 + 0x30);
                local_f8 = *(ulong64 *)(pFVar4 + lVar18 + 0x20);
                uStack_f0 = *(ulong64 *)(pFVar4 + lVar18 + 0x20 + 8);
                local_108 = *(longlong *)(pFVar4 + lVar18 + 0x10);
                FStack_100 = *(FFrameRate *)(pFVar4 + lVar18 + 0x10 + 8);
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_80 = local_e8;
                pTStack_78 = FStack_e0.ReferenceController;
                local_e8 = pFVar5;
                FStack_e0.ReferenceController = pTVar3;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar7.ReferenceController);
                TIndexedContainerIterator<TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_>,UMediaCapture::FQueuedCaptureData,int>
                ::RemoveCurrent(&local_128);
                LeaveCriticalSection((LPCRITICAL_SECTION)&this->CaptureDataQueueCriticalSection);
                cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this);
                if ((cVar10 == '\x03') && ((int)this->PendingFrameCount < 1)) {
                  local_b8._16_8_ = 0;
                  local_b8._0_8_ = 0;
                  local_b8._8_8_ = 0;
                  StopCapture_Callback(this,false,&local_b8);
                  bVar8 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FStack_e0.ReferenceController);
                  goto LAB_14d79be8d;
                }
                local_138.Object = (FCaptureFrame *)0x0;
                local_138.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this);
                if (cVar10 == '\x03') {
LAB_14d79c3da:
                  pFVar20 = local_138.Object;
                  cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this);
                  if (cVar10 != '\x03') {
                    if ((this->DesiredCaptureOptions).OverrunAction == Flush) {
                      WaitForSingleExperimentalSchedulingTaskToComplete(this);
                      pTVar15 = UE::MediaCaptureData::FFrameManager::
                                GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>
                                          ((this->FrameManager).Ptr,&local_90);
                      if (&local_138 != pTVar15) {
                        local_138.Object = pTVar15->Object;
                        pTVar15->Object = (FCaptureFrame *)0x0;
                        SharedPointerInternals::FSharedReferencer<1>::operator=
                                  (&local_138.SharedReferenceCount,&pTVar15->SharedReferenceCount);
                        pFVar20 = local_138.Object;
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_90.SharedReferenceCount.ReferenceController);
                      if (pFVar20 == (FCaptureFrame *)0x0) {
                        if (1 < (byte)LogMediaIOCore._0_1_) {
                          UE::Logging::Private::BasicLog<2>
                                    ((FStaticBasicLogRecord *)&PTR_u___s____No_frame_152bdbcf8,
                                     (FLogCategoryBase *)&LogMediaIOCore);
                        }
                        SetState(this,Error);
                        bVar8 = false;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_138.SharedReferenceCount.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(FStack_e0.ReferenceController);
                        goto LAB_14d79be8d;
                      }
                    }
                    else if (2 < (byte)LogMediaIOCore._0_1_) {
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
                    }
                  }
                }
                else {
                  pTVar15 = UE::MediaCaptureData::FFrameManager::
                            GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>
                                      ((this->FrameManager).Ptr,&local_a0);
                  if (&local_138 != pTVar15) {
                    local_138.Object = pTVar15->Object;
                    pTVar15->Object = (FCaptureFrame *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&local_138.SharedReferenceCount,&pTVar15->SharedReferenceCount);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_a0.SharedReferenceCount.ReferenceController);
                  pFVar20 = local_138.Object;
                  if (local_138.Object == (FCaptureFrame *)0x0) goto LAB_14d79c3da;
                }
                PrintFrameState(this);
                if (pFVar20 == (FCaptureFrame *)0x0) {
LAB_14d79c537:
                  if (-1 < CpuChannel->Enabled) {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&__CpuProfilerEventSpecId865,"UMediaCapture::Capture_Invalid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                               ,0x361);
                    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId865);
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                }
                else {
                  if ((pFVar20 == (FCaptureFrame *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    uVar9 = (*pcVar6)();
                    return (bool)uVar9;
                  }
                  if (pFVar20->FrameId == -1) goto LAB_14d79c537;
                }
                if (5 < (byte)LogMediaIOCore._0_1_) {
                  if (((pFVar20 != (FCaptureFrame *)0x0) && (pFVar20 == (FCaptureFrame *)0x0)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    uVar9 = (*pcVar6)();
                    return (bool)uVar9;
                  }
                  DVar13 = GetCurrentThreadId();
                  FThreadManager::GetThreadName(DVar13);
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
                }
                bVar8 = false;
                if (pFVar20 != (FCaptureFrame *)0x0) {
                  if ((pFVar20 == (FCaptureFrame *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    uVar9 = (*pcVar6)();
                    return (bool)uVar9;
                  }
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.Hours = (undefined4)local_118;
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.Minutes = local_118._4_4_;
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.Seconds = (undefined4)uStack_110;
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.Frames = uStack_110._4_4_;
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.Subframe =
                       (float)(undefined4)local_108;
                  (pFVar20->CaptureBaseData).SourceFrameTimecode.bDropFrameFormat =
                       (bool)local_108._4_1_;
                  *(uint3 *)&(pFVar20->CaptureBaseData).SourceFrameTimecode.field_0x15 =
                       local_108._5_3_;
                  (pFVar20->CaptureBaseData).SourceFrameTimecodeFramerate = FStack_100;
                  (pFVar20->CaptureBaseData).SourceFrameNumberRenderThread = local_f8;
                  (pFVar20->CaptureBaseData).SourceFrameNumber = uStack_f0;
                  this->CaptureRequestCount = this->CaptureRequestCount + 1;
                  (pFVar20->CaptureBaseData).SourceFrameNumber = (longlong)this->CaptureRequestCount
                  ;
                  if (&pFVar20->UserData != (TSharedPtr<FMediaCaptureUserData,1> *)&local_e8) {
                    (pFVar20->UserData).Object = local_e8;
                    local_e8 = (FMediaCaptureUserData *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&(pFVar20->UserData).SharedReferenceCount,&FStack_e0);
                  }
                  pFVar16 = UE::MediaCaptureData::FCaptureFrameArgs::FCaptureFrameArgs
                                      (&local_70,param_1);
                  bVar8 = ProcessCapture_RenderThread(this,&local_138,pFVar16);
                }
                bVar11 = UseExperimentalScheduling(this);
                if (!bVar11) {
                  UE::MediaCaptureData::FFrameManager::
                  PeekNextPending<UE::MediaCaptureData::FCaptureFrame>
                            ((this->FrameManager).Ptr,&local_c8);
                  if (local_c8.Object != (FCaptureFrame *)0x0) {
                    if (5 < (byte)LogMediaIOCore._0_1_) {
                      DVar13 = GetCurrentThreadId();
                      FThreadManager::GetThreadName(DVar13);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
                    }
                    bVar8 = ProcessReadyFrame_RenderThread
                                      (this,(FRHICommandListImmediate *)
                                            param_1->GraphBuilder->_padding_,this,&local_c8);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_c8.SharedReferenceCount.ReferenceController);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_138.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FStack_e0.ReferenceController);
                goto LAB_14d79be8d;
              }
              uVar12 = 0;
              if ((int)uVar19 < pTVar21->ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (*(ulonglong *)
                   ((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x40 + 0x20) <
                  GFrameCounterRenderThread) {
                uVar12 = 0;
                if ((int)uVar19 < pTVar21->ArrayNum) {
                  uVar12 = ~uVar19 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                if (0x14 < GFrameCounterRenderThread -
                           *(longlong *)
                            ((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x40 + 0x20
                            )) {
                  TIndexedContainerIterator<TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_>,UMediaCapture::FQueuedCaptureData,int>
                  ::RemoveCurrent(&local_128);
                  pTVar21 = local_128.Container;
                  uVar19 = local_128.Index;
                }
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if (2 < (byte)LogMediaIOCore._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
            }
            bVar8 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_e0.ReferenceController);
            goto LAB_14d79be8d;
          }
          if (1 < (byte)LogMediaIOCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          }
          SetState(this,Error);
        }
      }
    }
    else if (6 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
LAB_14d79be8a:
  bVar8 = false;
LAB_14d79be8d:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// CaptureImmediate_RenderThread @ 14d79c800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UMediaCapture::CaptureImmediate_RenderThread
          (UMediaCapture *this,FRDGBuilder *param_1,FRDGTexture *param_2,TIntRect<int> *param_3)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  FCaptureFrameArgs local_48;
  
  TVar1 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar2 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  LOCK();
  this->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)this->WaitingForRenderCommandExecutionCounter + 1);
  UNLOCK();
  local_48.ResourceToCapture.Reference = (FRHITexture *)0x0;
  local_48.GraphBuilder = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_48.DesiredSize.field0_0x0 = (this->DesiredSize).field0_0x0;
  local_48.MediaCapture.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)this;
  local_48.RDGResourceToCapture = param_2;
  local_48.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar1;
  local_48.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar2;
  bVar3 = CaptureImmediate_RenderThread(this,&local_48);
  if (local_48.ResourceToCapture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.ResourceToCapture.Reference);
  }
  LOCK();
  this->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)this->WaitingForRenderCommandExecutionCounter + -1);
  UNLOCK();
  if ((!bVar3) && (6 < (byte)LogMediaIOCore._0_1_)) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  return;
}

// CaptureImmediate_RenderThread @ 14d79c8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UMediaCapture::CaptureImmediate_RenderThread
          (UMediaCapture *this,FRDGBuilder *param_1,FRHITexture *param_2,TIntRect<int> *param_3)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  FCaptureFrameArgs local_48;
  
  TVar1 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar2 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_48.ResourceToCapture.Reference = (FRHITexture *)0x0;
  local_48.RDGResourceToCapture = (FRDGTexture *)0x0;
  local_48.GraphBuilder = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMediaCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_48.DesiredSize.field0_0x0 = (this->DesiredSize).field0_0x0;
  local_48.MediaCapture.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)this;
  if (param_2 != (FRHITexture *)0x0) {
    local_48.ResourceToCapture.Reference = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_48.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar1;
  local_48.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar2;
  bVar3 = CaptureImmediate_RenderThread(this,&local_48);
  if (local_48.ResourceToCapture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.ResourceToCapture.Reference);
  }
  if ((!bVar3) && (6 < (byte)LogMediaIOCore._0_1_)) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  return;
}

// CaptureRHITexture @ 14d79c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UMediaCapture::CaptureRHITexture
          (UMediaCapture *this,FRHICaptureResourceDescription *param_1,FMediaCaptureOptions *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaCaptureOptions *pFVar5;
  FMediaCaptureOptions *pFVar6;
  UMediaCapture *local_res8;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_1b8;
  FMediaCaptureOptions local_1a8;
  FMediaCaptureOptions local_e8;
  
  pTVar4 = ::operator_new(0xf0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_1b8.Object = ___xmm_00000000000000000000000000000010;
    local_1b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRHIResourceCaptureSource_Private_MediaCapture_UE___00_SharedPointerInternals__6B_
    ;
    pFVar5 = FMediaCaptureOptions::FMediaCaptureOptions(&local_1a8,param_2);
    pFVar6 = FMediaCaptureOptions::FMediaCaptureOptions(&local_e8,pFVar5);
    pTVar4[1]._padding_ = (longlong)&___7FCaptureSource_Private_MediaCapture_UE__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar4[1].SharedReferenceCount,(FObjectPtr)&local_res8);
    FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(pTVar4 + 2),pFVar6);
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar6->ColorConversionSettings);
    pTVar4[1]._padding_ = (longlong)&___7FRHIResourceCaptureSource_Private_MediaCapture_UE__6B_;
    pTVar4[0xe]._padding_ = (longlong)(param_1->ResourceSize).field0_0x0;
    pTVar4[0xe].SharedReferenceCount = *(atomic<int> *)&param_1->PixelFormat;
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar5->ColorConversionSettings);
    local_1b8.Object = (FCaptureSource *)(pTVar4 + 1);
    if (local_1b8.Object == (FCaptureSource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_1b8.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar2 = StartSourceCapture(this,&local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_2->ColorConversionSettings);
  return bVar2;
}

// CaptureRenderTargetImpl @ 14d79cba0

bool __thiscall
UMediaCapture::CaptureRenderTargetImpl(UMediaCapture *this,UTextureRenderTarget2D *param_1)

{
  return false;
}

// CaptureSceneViewport @ 14d79cbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMediaCapture::CaptureSceneViewport
          (UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1,FMediaCaptureOptions *param_2)

{
  bool bVar1;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> *pTVar2;
  UMediaCapture *local_res8;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_28;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> local_18;
  
  local_res8 = this;
  pTVar2 = MakeShared<UE::MediaCapture::Private::FSceneViewportCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,TSharedPtr<FSceneViewport,1>_&>
                     (&local_18,&local_res8,param_2,param_1);
  local_28.Object = (FCaptureSource *)pTVar2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = StartSourceCapture(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_2->ColorConversionSettings);
  return bVar1;
}

// CaptureSceneViewportImpl @ 14d79cc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMediaCapture::CaptureSceneViewportImpl(UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  return false;
}

// CaptureTextureRenderTarget2D @ 14d79cc40

bool __thiscall
UMediaCapture::CaptureTextureRenderTarget2D
          (UMediaCapture *this,UTextureRenderTarget2D *param_1,FMediaCaptureOptions *param_2)

{
  bool bVar1;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *pTVar2;
  UMediaCapture *local_res8;
  UTextureRenderTarget2D *local_res10;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_28;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> local_18;
  
  local_res8 = this;
  local_res10 = param_1;
  pTVar2 = MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&>
                     (&local_18,&local_res8,param_2,&local_res10);
  local_28.Object = (FCaptureSource *)pTVar2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = StartSourceCapture(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_2->ColorConversionSettings);
  return bVar1;
}

// GetAvailableSyncHandler @ 14d7a91d0

TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> * __thiscall
UMediaCapture::GetAvailableSyncHandler
          (UMediaCapture *this,
          TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *pTVar2;
  <lambda_1> local_res8;
  
  pTVar2 = TArray<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMediaCapture::GetAvailableSyncHandler_::__l2::<lambda_1>_>
                     (&this->SyncHandlers,local_res8);
  if (pTVar2 == (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)0x0) {
    __return_storage_ptr__->Object = (FMediaCaptureSyncData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetBytesPerPixel @ 14d7a9480

int __cdecl UMediaCapture::GetBytesPerPixel(EPixelFormat param_1)

{
  EPixelFormat local_res8 [8];
  EPixelFormat *local_res10 [3];
  
  switch(param_1) {
  case PF_A32B32G32R32F:
  case PF_R32G32B32A32_UINT:
    return 0x10;
  case PF_B8G8R8A8:
  case PF_FloatRGB:
  case PF_R32_FLOAT:
  case PF_G16R16:
  case PF_G16R16F:
  case PF_G16R16F_FILTER:
  case PF_A2B10G10R10:
  case PF_FloatR11G11B10:
  case PF_R32_UINT:
  case PF_R32_SINT:
  case PF_R8G8B8A8:
  case PF_A8R8G8B8:
  case PF_R16G16_UINT:
  case PF_R8G8B8A8_UINT:
  case PF_R8G8B8A8_SNORM:
  case PF_G16R16_SNORM:
    return 4;
  case PF_G8:
  case PF_A8:
  case PF_R8_UINT:
  case PF_R8_SINT:
    return 1;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `UMediaCapture::GetBytesPerPixel'::__l10::<lambda_1>::operator()(local_res10);
    return 0;
  case PF_FloatRGBA:
  case PF_G32R32F:
  case PF_A16B16G16R16:
  case PF_R16G16B16A16_UINT:
  case PF_R16G16B16A16_SINT:
  case PF_R16G16B16A16_UNORM:
  case PF_R16G16B16A16_SNORM:
  case PF_R32G32_UINT:
  case PF_R64_UINT:
    return 8;
  case PF_R16F:
  case PF_R16F_FILTER:
  case PF_V8U8:
  case PF_R16_UINT:
  case PF_R16_SINT:
  case PF_R5G6B5_UNORM:
  case PF_R8G8:
  case PF_B5G5R5A1_UNORM:
  case PF_R8G8_UINT:
    return 2;
  }
}

// GetCaptureFrameUserData_GameThread @ 14d7a9580

TSharedPtr<FMediaCaptureUserData,1> * __thiscall
UMediaCapture::GetCaptureFrameUserData_GameThread
          (UMediaCapture *this,TSharedPtr<FMediaCaptureUserData,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FMediaCaptureUserData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCaptureSourceType @ 14d7a95a0

FString * __thiscall
UMediaCapture::GetCaptureSourceType(UMediaCapture *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this_00;
  FString *pFVar4;
  
  this_00 = Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MediaIOCore();
    this_00 = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType,(UObject *)pUVar3,
                            L"EMediaCaptureSourceType");
    Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton = this_00;
    if (this_00 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                         ,0x395,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  UEnum::GetNameStringByValue
            (this_00,__return_storage_ptr__,(longlong)(char)this->CaptureSourceType);
  return __return_storage_ptr__;
}

// GetCapturingSceneViewport @ 14d7a9680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
UMediaCapture::GetCapturingSceneViewport
          (UMediaCapture *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__)

{
  FCaptureSource *pFVar1;
  
  pFVar1 = (this->CaptureSource).Object;
  if (pFVar1 != (FCaptureSource *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x60))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSceneViewport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCustomBufferDescription @ 14d7a9cb0

FRDGBufferDesc * __thiscall
UMediaCapture::GetCustomBufferDescription
          (UMediaCapture *this,FRDGBufferDesc *__return_storage_ptr__,TIntPoint<int> *param_1)

{
  FShaderParametersMetadata *pFVar1;
  uint uVar2;
  EBufferUsageFlags EVar3;
  undefined4 uVar4;
  
  uVar2 = (this->DesiredOutputBufferDescription).NumElements;
  EVar3 = (this->DesiredOutputBufferDescription).Usage;
  uVar4 = *(undefined4 *)&(this->DesiredOutputBufferDescription).field_0xc;
  pFVar1 = (this->DesiredOutputBufferDescription).Metadata;
  __return_storage_ptr__->BytesPerElement = (this->DesiredOutputBufferDescription).BytesPerElement;
  __return_storage_ptr__->NumElements = uVar2;
  __return_storage_ptr__->Usage = EVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  __return_storage_ptr__->Metadata = pFVar1;
  return __return_storage_ptr__;
}

// GetCustomOutputPixelFormat @ 14d7a9ce0

EPixelFormat __thiscall
UMediaCapture::GetCustomOutputPixelFormat(UMediaCapture *this,EPixelFormat *param_1)

{
  return *param_1;
}

// GetCustomOutputResourceType @ 14d7a9cf0

EMediaCaptureResourceType __thiscall UMediaCapture::GetCustomOutputResourceType(UMediaCapture *this)

{
  return this->DesiredOutputResourceType;
}

// GetCustomOutputSize @ 14d7a9d00

TIntPoint<int> __thiscall
UMediaCapture::GetCustomOutputSize(UMediaCapture *this,TIntPoint<int> *param_1)

{
  TIntPoint<int>_u_0 *in_R8;
  
  param_1->field0_0x0 = *in_R8;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetDesc @ 14d7a9fa0

FString * __thiscall UMediaCapture::GetDesc(UMediaCapture *this,FString *__return_storage_ptr__)

{
  UMediaOutput *pUVar1;
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  pUVar1 = (this->MediaOutput).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaOutput *)0x0) {
    ::FString::FString(&local_28,L"");
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s [none]");
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  else {
    (**(code **)(pUVar1->_padding_ + 0x178))(pUVar1,local_18);
    ::FString::FString(&local_28,L"");
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s [%s]");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetOutputBufferDescription @ 14d7ac860

FRDGBufferDesc * __thiscall
UMediaCapture::GetOutputBufferDescription
          (UMediaCapture *this,FRDGBufferDesc *__return_storage_ptr__)

{
  if (this->ConversionOperation != CUSTOM) {
    __return_storage_ptr__->BytesPerElement = 1;
    *(undefined8 *)&__return_storage_ptr__->Usage = 0;
    __return_storage_ptr__->Metadata = (FShaderParametersMetadata *)0x0;
    __return_storage_ptr__->NumElements = 1;
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x400))(this,__return_storage_ptr__,&this->DesiredSize);
  return __return_storage_ptr__;
}

// GetOutputPixelFormat @ 14d7ac8e0

EPixelFormat __thiscall UMediaCapture::GetOutputPixelFormat(UMediaCapture *this)

{
  EMediaCaptureConversionOperation EVar1;
  EPixelFormat EVar2;
  
  EVar1 = this->ConversionOperation;
  if (EVar1 != NONE) {
    if (EVar1 == RGBA8_TO_YUV_8BIT) {
      return PF_B8G8R8A8;
    }
    if (EVar1 == RGB10_TO_YUVv210_10BIT) {
      return PF_R32G32B32A32_UINT;
    }
    if (EVar1 == CUSTOM) {
                    /* WARNING: Could not recover jumptable at 0x00014d7ac904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      EVar2 = (**(code **)(this->_padding_ + 0x3f0))(this,&this->DesiredPixelFormat);
      return EVar2;
    }
  }
  return this->DesiredPixelFormat;
}

// GetOutputResourceType @ 14d7ac920

EMediaCaptureResourceType __thiscall UMediaCapture::GetOutputResourceType(UMediaCapture *this)

{
  EMediaCaptureResourceType EVar1;
  
  if (this->ConversionOperation != CUSTOM) {
    return Texture;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7ac92f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x3f8))();
  return EVar1;
}

// GetOutputSize @ 14d7ac940

TIntPoint<int> __thiscall UMediaCapture::GetOutputSize(UMediaCapture *this)

{
  EMediaCaptureConversionOperation EVar1;
  int iVar2;
  TIntPoint<int>_u_0 in_RDX;
  
  EVar1 = this->ConversionOperation;
  if (EVar1 != NONE) {
    if (EVar1 == RGBA8_TO_YUV_8BIT) {
      iVar2 = (this->DesiredSize).field0_0x0._s_0.X;
      *(int *)((longlong)in_RDX + 4) = (this->DesiredSize).field0_0x0._s_0.Y;
      *(int *)in_RDX = iVar2 / 2;
      return (TIntPoint<int>)in_RDX;
    }
    if (EVar1 == RGB10_TO_YUVv210_10BIT) {
      iVar2 = (this->DesiredSize).field0_0x0._s_0.X;
      *(int *)((longlong)in_RDX + 4) = (this->DesiredSize).field0_0x0._s_0.Y;
      *(int *)in_RDX = ((iVar2 + 0x2f) / 0x30) * 8;
      return (TIntPoint<int>)in_RDX;
    }
    if (EVar1 == CUSTOM) {
      (**(code **)(this->_padding_ + 1000))(this,in_RDX,&this->DesiredSize);
      return (TIntPoint<int>)in_RDX;
    }
  }
  *(TIntPoint<int>_u_0 *)in_RDX = (this->DesiredSize).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetOutputTextureDescription @ 14d7ac9f0

FRDGTextureDesc * __thiscall
UMediaCapture::GetOutputTextureDescription
          (UMediaCapture *this,FRDGTextureDesc *__return_storage_ptr__)

{
  EMediaCaptureConversionOperation EVar1;
  undefined8 uVar2;
  EClearBinding EVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EPixelFormat EVar8;
  undefined8 uVar9;
  TIntPoint<int> TVar10;
  
  uVar9 = (**(code **)(this->_padding_ + 0x408))();
  uVar7 = FClearValueBinding::None.Value.Color[3];
  uVar6 = FClearValueBinding::None.Value.Color[2];
  uVar5 = FClearValueBinding::None.Value.Color[1];
  uVar4 = FClearValueBinding::None.Value.Color[0];
  EVar3 = FClearValueBinding::None.ColorBinding;
  EVar1 = this->ConversionOperation;
  if (EVar1 != NONE) {
    if (EVar1 == RGBA8_TO_YUV_8BIT) {
      EVar8 = PF_B8G8R8A8;
      goto LAB_14d7aca6f;
    }
    if (EVar1 == RGB10_TO_YUVv210_10BIT) {
      EVar8 = PF_R32G32B32A32_UINT;
      goto LAB_14d7aca6f;
    }
    if (EVar1 == CUSTOM) {
      EVar8 = (**(code **)(this->_padding_ + 0x3f0))(this,&this->DesiredPixelFormat);
      goto LAB_14d7aca6f;
    }
  }
  EVar8 = this->DesiredPixelFormat;
LAB_14d7aca6f:
  TVar10 = GetOutputSize(this);
  uVar2 = *(undefined8 *)TVar10.field0_0x0;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar4,EVar3);
  *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT44(uVar6,uVar5);
  *(undefined8 *)__return_storage_ptr__ = uVar9;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = uVar7;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(undefined8 *)&__return_storage_ptr__->field_0x24 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = 0x101;
  __return_storage_ptr__->field_0x32 = 0;
  __return_storage_ptr__->field_0x33 = EVar8;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// GetOutputTextureFlags @ 14d7acb00

ETextureCreateFlags __thiscall UMediaCapture::GetOutputTextureFlags(UMediaCapture *this)

{
  return Shared|UAV|RenderTargetable;
}

// GetPrivateStaticClass @ 14d7ad0d0

UClass * __cdecl UMediaCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaCapture",
               &Z_Registration_Info_UClass_UMediaCapture.InnerSingleton,
               StaticRegisterNativesUMediaCapture,0x2d8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaCapture>,
               InternalVTableHelperCtorCaller<UMediaCapture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaCapture.InnerSingleton;
}

// GetRGBToYUVConversionMatrix @ 14d7ad520

TMatrix<double> * __thiscall UMediaCapture::GetRGBToYUVConversionMatrix(UMediaCapture *this)

{
  return &MediaShaders::RgbToYuvRec709Scaled;
}

// GetState @ 14d7ae010

EMediaCaptureState __thiscall UMediaCapture::GetState(UMediaCapture *this)

{
  return (EMediaCaptureState)this->MediaState;
}

// GetSupportedRgbaSwizzleFormats @ 14d7ae430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<EPixelFormat,DefaultKeyFuncs<EPixelFormat,0>,FDefaultSetAllocator> * __cdecl
UMediaCapture::GetSupportedRgbaSwizzleFormats(void)

{
  undefined1 auStack_68 [32];
  initializer_list<EPixelFormat> local_48;
  EPixelFormat local_38 [40];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_48._First = local_38;
    local_38[0] = PF_A32B32G32R32F;
    local_38[1] = PF_B8G8R8A8;
    local_38[2] = PF_G8;
    local_38[3] = PF_G16;
    local_48._Last = local_38 + 0x22;
    local_38[4] = PF_FloatRGB;
    local_38[5] = PF_FloatRGBA;
    local_38[6] = PF_R32_FLOAT;
    local_38[7] = PF_G16R16;
    local_38[8] = PF_G16R16F;
    local_38[9] = PF_G32R32F;
    local_38[10] = PF_A2B10G10R10;
    local_38[0xb] = PF_A16B16G16R16;
    local_38[0xc] = PF_R16F;
    local_38[0xd] = PF_FloatR11G11B10;
    local_38[0xe] = PF_A8;
    local_38[0xf] = PF_R32_UINT;
    local_38[0x10] = PF_R32_SINT;
    local_38[0x11] = PF_R16_UINT;
    local_38[0x12] = PF_R16_SINT;
    local_38[0x13] = PF_R16G16B16A16_UINT;
    local_38[0x14] = PF_R16G16B16A16_SINT;
    local_38[0x15] = PF_R5G6B5_UNORM;
    local_38[0x16] = PF_R8G8B8A8;
    local_38[0x17] = PF_A8R8G8B8;
    local_38[0x18] = PF_R8G8;
    local_38[0x19] = PF_R32G32B32A32_UINT;
    local_38[0x1a] = PF_R16G16_UINT;
    local_38[0x1b] = PF_R8_UINT;
    local_38[0x1c] = PF_R8G8B8A8_UINT;
    local_38[0x1d] = PF_R8G8B8A8_SNORM;
    local_38[0x1e] = PF_R16G16B16A16_UNORM;
    local_38[0x1f] = PF_R16G16B16A16_SNORM;
    local_38[0x20] = PF_R32G32_UINT;
    local_38[0x21] = PF_R8;
    TSet<enum_EPixelFormat,DefaultKeyFuncs<enum_EPixelFormat,0>,FDefaultSetAllocator>::
    TSet<enum_EPixelFormat,DefaultKeyFuncs<enum_EPixelFormat,0>,FDefaultSetAllocator>
              (&SupportedFormats,&local_48);
    atexit(`UMediaCapture::GetSupportedRgbaSwizzleFormats'::__l2::
           _dynamic_atexit_destructor_for__SupportedFormats__);
    _Init_thread_footer(&::_TSS0);
  }
  return &SupportedFormats;
}

// GetTextureRenderTarget @ 14d7ae580

UTextureRenderTarget2D * __thiscall UMediaCapture::GetTextureRenderTarget(UMediaCapture *this)

{
  FCaptureSource *pFVar1;
  UTextureRenderTarget2D *pUVar2;
  
  pFVar1 = (this->CaptureSource).Object;
  if (pFVar1 != (FCaptureSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7ae58f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UTextureRenderTarget2D *)(**(code **)(pFVar1->_padding_ + 0x58))();
    return pUVar2;
  }
  return (UTextureRenderTarget2D *)0x0;
}

// HasFinishedProcessing @ 14d7aed30

bool __thiscall UMediaCapture::HasFinishedProcessing(UMediaCapture *this)

{
  char cVar1;
  
  if (this->WaitingForRenderCommandExecutionCounter != (atomic<int>)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x2b0))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
      if (cVar1 != '\x04') {
        return false;
      }
    }
  }
  return true;
}

// InitializeCapture @ 14d7afba0

bool __thiscall UMediaCapture::InitializeCapture(UMediaCapture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaCapture.h"
             ,0x1d1,L"Pure virtual not implemented (%s)");
  return false;
}

// InitializeCaptureFrame @ 14d7afbe0

void __thiscall
UMediaCapture::InitializeCaptureFrame
          (UMediaCapture *this,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_1)

{
  FCaptureFrame *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined3 uVar7;
  ulong64 uVar8;
  bool bVar9;
  bool bVar10;
  FTimecode *pFVar11;
  FFrameRate FVar12;
  undefined8 *puVar13;
  TSharedPtr<FMediaCaptureUserData,1> *pTVar14;
  int iVar15;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FTimecode local_28;
  
  if (param_1->Object != (FCaptureFrame *)0x0) {
    pFVar11 = FApp::GetTimecode(&local_28);
    iVar15 = pFVar11->Hours;
    iVar3 = pFVar11->Minutes;
    iVar4 = pFVar11->Seconds;
    iVar5 = pFVar11->Frames;
    fVar6 = pFVar11->Subframe;
    bVar10 = pFVar11->bDropFrameFormat;
    uVar7 = *(undefined3 *)&pFVar11->field_0x15;
    if ((param_1->Object == (FCaptureFrame *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = param_1->Object;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.Hours = iVar15;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.Minutes = iVar3;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.Seconds = iVar4;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.Frames = iVar5;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.Subframe = fVar6;
    (pFVar1->CaptureBaseData).SourceFrameTimecode.bDropFrameFormat = bVar10;
    *(undefined3 *)&(pFVar1->CaptureBaseData).SourceFrameTimecode.field_0x15 = uVar7;
    FVar12 = FApp::GetTimecodeFrameRate();
    FVar12 = *(FFrameRate *)FVar12;
    if ((param_1->Object == (FCaptureFrame *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (param_1->Object->CaptureBaseData).SourceFrameTimecodeFramerate = FVar12;
    uVar8 = GFrameCounter;
    if ((param_1->Object == (FCaptureFrame *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (param_1->Object->CaptureBaseData).SourceFrameNumberRenderThread = uVar8;
    iVar15 = this->CaptureRequestCount + 1;
    this->CaptureRequestCount = iVar15;
    if ((param_1->Object == (FCaptureFrame *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (param_1->Object->CaptureBaseData).SourceFrameNumber = (longlong)iVar15;
    puVar13 = (undefined8 *)(**(code **)(this->_padding_ + 0x370))(this,local_38);
    if ((param_1->Object == (FCaptureFrame *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = param_1->Object;
    pTVar14 = &pFVar1->UserData;
    if (pTVar14 != (TSharedPtr<FMediaCaptureUserData,1> *)puVar13) {
      pTVar14->Object = (FMediaCaptureUserData *)*puVar13;
      *puVar13 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->UserData).SharedReferenceCount,(FSharedReferencer<1> *)(puVar13 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return;
}

// InitializeOutputResources @ 14d7b00e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::InitializeOutputResources(UMediaCapture *this,int param_1)

{
  TPimplPtr<UE::MediaCaptureData::FFrameManager,0> *pTVar1;
  FFrameManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode **ppFVar5;
  undefined8 *puVar6;
  FNode *pFVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  FNode **ppFVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  UMediaCapture *local_e8;
  UMediaCapture *local_e0;
  longlong local_d8 [2];
  code *local_c8 [2];
  undefined **local_b8;
  FWeakObjectPtr local_b0;
  undefined8 local_a0;
  code *local_98 [2];
  undefined **local_88;
  FWeakObjectPtr FStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FWeakObjectPtr FStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (((this->DesiredOutputSize).field0_0x0._s_0.X < 1) ||
     ((this->DesiredOutputSize).field0_0x0._s_0.Y < 1)) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    if (this->MediaState == (atomic<EMediaCaptureState>)0x0) {
      return;
    }
    LOCK();
    this->MediaState = (atomic<EMediaCaptureState>)0x0;
    UNLOCK();
    bVar4 = IsInGameThread();
    if (bVar4) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
                 (void *)0x0);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStateChangedNative);
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    local_e0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_e0);
    local_a0 = 0;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
    local_b0 = local_f0;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_c8);
    return;
  }
  ppFVar5 = ::operator_new(0x70);
  ppFVar9 = (FNode **)0x0;
  if (ppFVar5 != (FNode **)0x0) {
    *(undefined8 *)(ppFVar5 + 1) = 0;
    *ppFVar5 = (FNode *)UE::Core::Private::PimplPtr::
                        DeleterFunc<UE::MediaCaptureData::FFrameManager>;
    ppFVar5[2] = (FNode *)0x0;
    ppFVar5[3] = (FNode *)0x0;
    ppFVar5[4] = (FNode *)0x0;
    ppFVar5[5] = (FNode *)0x0;
    ppFVar5[6] = (FNode *)0x0;
    ppFVar5[7] = (FNode *)0x0;
    ppFVar5[8] = (FNode *)0x0;
    ppFVar5[9] = (FNode *)0x0;
    ppFVar5[10] = (FNode *)0x0;
    ppFVar5[0xb] = (FNode *)0x0;
    ppFVar5[0xc] = (FNode *)0x0;
    ppFVar5[0xd] = (FNode *)0x0;
    puVar6 = FMemory::Malloc(0x10,8);
    *puVar6 = 0;
    ppFVar5[4] = (FNode *)puVar6;
    ppFVar5[7] = (FNode *)puVar6;
    ppFVar5[6] = (FNode *)puVar6;
    ppFVar5[5] = (FNode *)puVar6;
    LOCK();
    *(undefined4 *)(ppFVar5 + 8) = 0;
    UNLOCK();
    ppFVar5[9] = (FNode *)0x0;
    *(undefined4 *)(ppFVar5 + 0xd) = 0;
    puVar6 = FMemory::Malloc(0x10,8);
    *puVar6 = 0;
    ppFVar5[9] = (FNode *)puVar6;
    ppFVar5[0xc] = (FNode *)puVar6;
    ppFVar5[0xb] = (FNode *)puVar6;
    ppFVar5[10] = (FNode *)puVar6;
    LOCK();
    *(undefined4 *)(ppFVar5 + 0xd) = 0;
    UNLOCK();
    ppFVar9 = ppFVar5;
  }
  pTVar1 = &this->FrameManager;
  if ((TPimplPtr<UE::MediaCaptureData::FFrameManager,0> *)local_d8 == pTVar1) {
    if ((FFrameManager *)(ppFVar9 + 2) == (FFrameManager *)0x0) goto LAB_14d7b01fe;
    pFVar7 = *ppFVar9;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FFrameManager *)(ppFVar9 + 2);
    if (pFVar2 == (FFrameManager *)0x0) goto LAB_14d7b01fe;
    pFVar7 = pFVar2[-1].PendingFrames.TailCopy;
    ppFVar9 = &pFVar2[-1].PendingFrames.TailCopy;
  }
  (*(code *)pFVar7)(ppFVar9);
LAB_14d7b01fe:
  LOCK();
  this->bPendingOutputResourcesInitialized = (atomic<bool>)0x1;
  UNLOCK();
  LOCK();
  this->bSyncHandlersInitialized = (atomic<bool>)0x0;
  UNLOCK();
  this->NumberOfCaptureFrame = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_f8.ObjectIndex = 0;
  local_f8.ObjectSerialNumber = 0;
  local_e8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_e8);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  FStack_80 = local_f8;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMediaCapture::InitializeOutputResources_::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    FStack_50 = FStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`UMediaCapture::InitializeOutputResources'::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar8);
    uVar11 = (ulonglong)local_38;
    if ((2 < uVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar10 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar10 = local_40;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar10 = local_70;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  return;
}

// InitializeSyncHandlers_RenderThread @ 14d7b0cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMediaCapture::InitializeSyncHandlers_RenderThread(UMediaCapture *this)

{
  int *piVar1;
  TArray<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *pTVar3;
  FRHIResource *this_00;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint local_res8;
  FName local_res10;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  FString local_60 [2];
  
  uVar13 = this->NumberOfCaptureFrame;
  pTVar2 = &this->SyncHandlers;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  pTVar3 = (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)(pTVar2->AllocatorInstance).Data;
  iVar9 = (this->SyncHandlers).ArrayNum;
  piVar1 = &(this->SyncHandlers).ArrayMax;
  if (*piVar1 < (int)uVar13) {
    DestructItems<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,int>(pTVar3,iVar9);
    (this->SyncHandlers).ArrayNum = 0;
    if (*piVar1 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar13,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,int>(pTVar3,iVar9);
    (this->SyncHandlers).ArrayNum = 0;
  }
  pTVar6 = _UNK_150651568;
  pTVar5 = ___xmm_00000000000000000000000000000010;
  local_res8 = 0;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (0 < this->NumberOfCaptureFrame) {
    do {
      uVar13 = (uint)pTVar10;
      pTVar10 = ::operator_new(0x20);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_70 = pTVar5;
        pTStack_68 = pTVar6;
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMediaCaptureSyncData_UMediaCapture___00_SharedPointerInternals__6B_
        ;
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10[1]._padding_ = 0;
        pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
        if ((pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        uVar13 = local_res8;
        local_70 = pTVar10 + 1;
        pTStack_68 = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      cVar8 = (**(code **)(this->_padding_ + 0x380))(this);
      if (cVar8 == '\0') {
        ::FString::PrintfImpl(local_60,L"MediaCaptureSync_%02d");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_60[0].Data.ArrayNum != 0) {
          FVar11.Data = local_60[0].Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
        (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,local_78,&local_res10);
        if ((local_70 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_70 == (TReferenceControllerBase<1> *)local_78) {
LAB_14d7b0ebc:
          if (local_78 != (undefined1  [8])0x0) {
            FRHIResource::Release((FRHIResource *)local_78);
          }
        }
        else {
          this_00 = (FRHIResource *)local_70->_padding_;
          local_70->_padding_ = (longlong)local_78;
          local_78 = (undefined1  [8])0x0;
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_00);
            goto LAB_14d7b0ebc;
          }
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->SyncHandlers).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SyncHandlers).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar12 = local_70;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTStack_68;
      pTStack_68 = (TReferenceControllerBase<1> *)0x0;
      local_70 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_res8 = uVar13 + 1;
      pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)local_res8;
    } while ((int)local_res8 < this->NumberOfCaptureFrame);
  }
  LOCK();
  this->bSyncHandlersInitialized = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// IsOutputSynchronizationSupported @ 14d7b1740

bool __thiscall UMediaCapture::IsOutputSynchronizationSupported(UMediaCapture *this)

{
  return false;
}

// IsReadyToOutput @ 14d7b17e0

bool __thiscall UMediaCapture::IsReadyToOutput(UMediaCapture *this)

{
  return true;
}

// LockDMATexture_RenderThread @ 14d7b1fa0

void __thiscall
UMediaCapture::LockDMATexture_RenderThread(UMediaCapture *this,TRefCountPtr<FRHITexture> param_1)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// OnBeginFrame_GameThread @ 14d7b2640

void __thiscall UMediaCapture::OnBeginFrame_GameThread(UMediaCapture *this)

{
  FMediaCaptureSceneViewExtension *pFVar1;
  FCaptureSource *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1397,"MediaCapture::BeginFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x575);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1397);
  }
  pFVar1 = (this->ViewExtension).Object;
  if ((pFVar1 != (FMediaCaptureSceneViewExtension *)0x0) && (pFVar1->bValidPhase == false)) {
    SetState(this,Error);
  }
  pFVar2 = (this->CaptureSource).Object;
  if ((pFVar2 != (FCaptureSource *)0x0) &&
     (cVar4 = (**(code **)(pFVar2->_padding_ + 0x38))(), cVar4 == '\0')) {
    SetState(this,Error);
  }
  cVar4 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (cVar4 == '\0') {
    local_28._16_8_ = 0;
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    StopCapture_Callback(this,false,&local_28);
  }
  else {
    if (((this->CaptureSource).Object == (FCaptureSource *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar4 = (**(code **)(((this->CaptureSource).Object)->_padding_ + 0x40))();
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar4 == '\x01'))
    {
      AddFrameInfoForCaptureImmediate(this,GFrameCounter);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCustomCapture_RenderingThread @ 14d7b28e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UMediaCapture::OnCustomCapture_RenderingThread
          (UMediaCapture *this,FRDGBuilder *param_1,FCaptureBaseData *param_2,
          TSharedPtr<FMediaCaptureUserData,1> *param_3,FRDGTexture *param_4,FRDGTexture *param_5,
          FRHICopyTextureInfo *param_6,TVector2<double> *param_7,TVector2<double> *param_8)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnCustomCapture_RenderingThread @ 14d7b28f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UMediaCapture::OnCustomCapture_RenderingThread
          (UMediaCapture *this,FRDGBuilder *param_1,FCaptureBaseData *param_2,
          TSharedPtr<FMediaCaptureUserData,1> *param_3,FRDGTexture *param_4,FRDGBuffer *param_5,
          FRHICopyTextureInfo *param_6,TVector2<double> *param_7,TVector2<double> *param_8)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnEndFrame_GameThread @ 14d7b2900

void __thiscall UMediaCapture::OnEndFrame_GameThread(UMediaCapture *this)

{
  char cVar1;
  bool bVar2;
  FSlateThrottleManager *this_00;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1425,"MediaCaptureEndFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x591);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1425);
  }
  ::FString::PrintfImpl((FString *)&local_28,L"MediaCapturePipe: %llu");
  pwVar3 = L"";
  if (local_28._8_4_ != 0) {
    pwVar3 = (wchar_t *)local_28._0_8_;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar3,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x592);
  }
  if ((wchar_t *)local_28._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (this->bPendingOutputResourcesInitialized != (atomic<bool>)0x0) {
    FlushRenderingCommands();
  }
  if ((this->bIsAutoRestartRequired == (atomic<bool>)0x0) &&
     ((this->MediaOutput).field0_0x0.DebugPtr != (UMediaOutput *)0x0)) {
    cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (cVar1 == '\0') {
      local_28._16_8_ = 0;
      local_28._0_8_ = (wchar_t *)0x0;
      local_28._8_8_ = 0;
      StopCapture_Callback(this,false,&local_28);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if ((cVar1 == '\x01') || (cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar1 == '\x03')
       ) {
      if ((this->DesiredCaptureOptions).bSkipFrameWhenRunningExpensiveTasks != false) {
        this_00 = FSlateThrottleManager::Get();
        bVar2 = FSlateThrottleManager::IsAllowingExpensiveTasks(this_00);
        if (!bVar2) goto LAB_14d7b2abd;
      }
      cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
      if ((cVar1 == '\x03') && ((int)this->PendingFrameCount < 1)) {
        local_28._16_8_ = 0;
        local_28._0_8_ = (wchar_t *)0x0;
        local_28._8_8_ = 0;
        StopCapture_Callback(this,false,&local_28);
      }
      else {
        ProcessCapture_GameThread(this);
      }
    }
  }
LAB_14d7b2abd:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar4) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnFrameCaptured_AnyThread @ 14d7b2af0

void __thiscall
UMediaCapture::OnFrameCaptured_AnyThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,FMediaCaptureResourceData *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnFrameCaptured_RenderingThread @ 14d7b30d0

void __thiscall
UMediaCapture::OnFrameCaptured_RenderingThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,void *param_3,int param_4,int param_5,
          int param_6)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnRHIResourceCaptured_AnyThread @ 14d7b3340

void __thiscall
UMediaCapture::OnRHIResourceCaptured_AnyThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,TRefCountPtr<FRHIBuffer> param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    return;
  }
  return;
}

// OnRHIResourceCaptured_AnyThread @ 14d7b3370

void __thiscall
UMediaCapture::OnRHIResourceCaptured_AnyThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,TRefCountPtr<FRHITexture> param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    return;
  }
  return;
}

// OnRHIResourceCaptured_RenderingThread @ 14d7b33a0

void __thiscall
UMediaCapture::OnRHIResourceCaptured_RenderingThread
          (UMediaCapture *this,FRHICommandListImmediate *param_1,FCaptureBaseData *param_2,
          TSharedPtr<FMediaCaptureUserData,1> *param_3,TRefCountPtr<FRHIBuffer> param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
    return;
  }
  return;
}

// OnRHIResourceCaptured_RenderingThread @ 14d7b33d0

void __thiscall
UMediaCapture::OnRHIResourceCaptured_RenderingThread
          (UMediaCapture *this,FRHICommandListImmediate *param_1,FCaptureBaseData *param_2,
          TSharedPtr<FMediaCaptureUserData,1> *param_3,TRefCountPtr<FRHITexture> param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
    return;
  }
  return;
}

// OnRHITextureCaptured_RenderingThread @ 14d7b3740

void __thiscall
UMediaCapture::OnRHITextureCaptured_RenderingThread
          (UMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,TRefCountPtr<FRHITexture> param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
    return;
  }
  return;
}

// PostCaptureCleanup @ 14d7b5c60

/* WARNING: Type propagation algorithm not settling */

void __thiscall UMediaCapture::PostCaptureCleanup(UMediaCapture *this)

{
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *pTVar1;
  FOpenColorIODisplayView *pFVar2;
  FCaptureSource *pFVar3;
  FScriptContainerElement *pFVar4;
  FSyncPointWatcher *pFVar5;
  FRenderPipeline *pFVar6;
  char cVar7;
  FAudioDeviceHandle *pFVar8;
  FString *pFVar9;
  TObjectPtr<UOpenColorIOConfiguration>_u_0 local_110;
  FOpenColorIOColorSpace local_108;
  FOpenColorIOColorSpace local_d8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  EOpenColorIOViewTransformDirection local_78;
  TIntPoint<int>_u_0 local_70;
  undefined4 local_68;
  undefined2 local_64;
  int local_60;
  EMediaCapturePhase local_5c;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  FAudioDeviceHandle local_38;
  
  (**(code **)(this->_padding_ + 0x348))();
  pFVar8 = FAudioDeviceHandle::FAudioDeviceHandle(&local_38);
  pTVar1 = &this->CaptureSource;
  if (pTVar1->Object != (FCaptureSource *)0x0) {
    cVar7 = (**(code **)(this->_padding_ + 0x2f8))(this,pFVar8);
    if (cVar7 == '\0') goto LAB_14d7b5cc5;
  }
  FAudioDeviceHandle::operator=(&this->AudioDeviceHandle,pFVar8);
LAB_14d7b5cc5:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_38);
  pFVar3 = pTVar1->Object;
  if (pFVar3 != (FCaptureSource *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,0);
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *)&local_58) {
      pTVar1->Object = (FCaptureSource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CaptureSource).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  (this->DesiredSize).field0_0x0 = (TIntPoint<int>_u_0)0x2d000000500;
  (this->DesiredOutputSize).field0_0x0 = (TIntPoint<int>_u_0)0x2d000000500;
  this->DesiredPixelFormat = PF_A2B10G10R10;
  this->DesiredOutputPixelFormat = PF_A2B10G10R10;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&local_110.ObjectPtr);
  local_70 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->DesiredCaptureOptions).bAutoRestartOnSourceSizeChange = false;
  (this->DesiredCaptureOptions).OverrunAction = Flush;
  (this->DesiredCaptureOptions).Crop = None;
  local_68 = 0x10100;
  local_64 = 0;
  local_60 = -1;
  local_5c = EndFrame;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_110.DebugPtr != (UOpenColorIOConfiguration *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
  }
  (this->DesiredCaptureOptions).ColorConversionSettings.ConfigurationSource.field0_0x0.DebugPtr =
       (UOpenColorIOConfiguration *)local_110;
  FOpenColorIOColorSpace::operator=
            (&(this->DesiredCaptureOptions).ColorConversionSettings.SourceColorSpace,&local_108);
  FOpenColorIOColorSpace::operator=
            (&(this->DesiredCaptureOptions).ColorConversionSettings.DestinationColorSpace,&local_d8)
  ;
  pFVar2 = &(this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView;
  if (pFVar2 != (FOpenColorIODisplayView *)&local_a8) {
    pFVar4 = (pFVar2->Display).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Display).Data.AllocatorInstance.Data = local_a8.Data;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.Display.Data.
    ArrayNum = (int)local_a0;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.Display.Data.
    ArrayMax = local_a0._4_4_;
    local_a0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
  }
  pFVar9 = &(this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.View;
  if (pFVar9 != (FString *)&local_98) {
    pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar9->Data).AllocatorInstance.Data = local_98.Data;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.View.Data.ArrayNum
         = (int)local_90;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.View.Data.ArrayMax
         = local_90._4_4_;
    local_90 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
  }
  pFVar9 = &(this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.Description
  ;
  if (pFVar9 != (FString *)&local_88) {
    pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar9->Data).AllocatorInstance.Data = local_88.Data;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.Description.Data.
    ArrayNum = (int)local_80;
    (this->DesiredCaptureOptions).ColorConversionSettings.DestinationDisplayView.Description.Data.
    ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  (this->DesiredCaptureOptions).ColorConversionSettings.DisplayViewDirection = local_78;
  (this->DesiredCaptureOptions).CustomCapturePoint.field0_0x0 = local_70;
  (this->DesiredCaptureOptions).ResizeMethod = (EMediaCaptureResizeMethod)local_68;
  (this->DesiredCaptureOptions).bSkipFrameWhenRunningExpensiveTasks = local_68._1_1_;
  (this->DesiredCaptureOptions).bConvertToDesiredPixelFormat = local_68._2_1_;
  (this->DesiredCaptureOptions).bForceAlphaToOneOnConversion = local_68._3_1_;
  (this->DesiredCaptureOptions).bApplyLinearToSRGBConversion = local_64._0_1_;
  (this->DesiredCaptureOptions).bAutostopOnCapture = local_64._1_1_;
  (this->DesiredCaptureOptions).NumberOfFramesToCapture = local_60;
  (this->DesiredCaptureOptions).CapturePhase = local_5c;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&local_110.ObjectPtr);
  this->ConversionOperation = NONE;
  pFVar5 = (this->SyncPointWatcher).Ptr;
  if (pFVar5 != (FSyncPointWatcher *)0x0) {
    (this->SyncPointWatcher).Ptr = (FSyncPointWatcher *)0x0;
    (*(code *)pFVar5[-1].PendingCaptureFrames.TailCopy)();
  }
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ViewExtension != (TSharedPtr<FMediaCaptureSceneViewExtension,1> *)&local_48) {
    (this->ViewExtension).Object = (FMediaCaptureSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewExtension).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  pFVar6 = (this->CaptureRenderPipeline).Ptr;
  if (pFVar6 != (FRenderPipeline *)0x0) {
    (this->CaptureRenderPipeline).Ptr = (FRenderPipeline *)0x0;
    (*(code *)pFVar6[-1].RenderPasses.AllocatorInstance.Data)();
  }
  this->bLoggedOutputNotReady = false;
  ::FString::Reset(&this->MediaOutputName,0);
  this->bWaitingForStopCapture = false;
  return;
}

// PostCaptureCleanupImpl @ 14d7b5fb0

void __thiscall UMediaCapture::PostCaptureCleanupImpl(UMediaCapture *this)

{
  return;
}

// PostInitializeCaptureRHIResource @ 14d7b6120

bool __thiscall
UMediaCapture::PostInitializeCaptureRHIResource
          (UMediaCapture *this,FRHICaptureResourceDescription *param_1)

{
  return true;
}

// PostInitializeCaptureRenderTarget @ 14d7b6140

bool __thiscall
UMediaCapture::PostInitializeCaptureRenderTarget
          (UMediaCapture *this,UTextureRenderTarget2D *param_1)

{
  return true;
}

// PostInitializeCaptureViewport @ 14d7b6190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMediaCapture::PostInitializeCaptureViewport
          (UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  return true;
}

// PrepareAndDispatchCapture_GameThread @ 14d7b6f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMediaCapture::PrepareAndDispatchCapture_GameThread
          (UMediaCapture *this,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCaptureFrame *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  atomic<int> *paVar11;
  undefined1 auStack_118 [32];
  atomic<FRHIGPUMask> local_f8;
  FWeakObjectPtr local_f0;
  UMediaCapture *local_e8;
  FWeakObjectPtr local_e0;
  FCaptureSource *local_d8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  lpCriticalSection = &this->AccessingCapturingSource;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CaptureSource).Object != (FCaptureSource *)0x0) {
    LOCK();
    this->WaitingForRenderCommandExecutionCounter =
         (atomic<int>)((int)this->WaitingForRenderCommandExecutionCounter + 1);
    UNLOCK();
    local_f8 = this->ValidSourceGPUMask;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    local_e8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_e8);
    if (5 < (byte)LogMediaIOCore._0_1_) {
      if (param_1->Object != (FCaptureFrame *)0x0) {
        TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    pTVar1 = (this->CaptureSource).SharedReferenceCount.ReferenceController;
    local_e0 = local_f0;
    local_d8 = (this->CaptureSource).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar3 = param_1->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    TVar4 = (this->DesiredSize).field0_0x0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x40,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::`6'::<lambda_1>,1,1>
                         ::_vftable_;
    *(FWeakObjectPtr *)(local_90 + 1) = local_e0;
    local_90[3] = (code *)pTVar1;
    local_90[4] = (code *)pFVar3;
    local_90[2] = (code *)local_d8;
    local_90[5] = (code *)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    *(atomic<FRHIGPUMask> *)(local_90 + 7) = local_f8;
    *(TIntPoint<int>_u_0 *)(local_90 + 6) = TVar4;
    if ((FWeakObjectPtr *)(local_90 + 1) != (FWeakObjectPtr *)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMediaCapture::PrepareAndDispatchCapture_GameThread_::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar8);
      uVar10 = (ulonglong)local_58;
      if ((2 < uVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar9 = local_60;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar9 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar9 = local_90;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((((this->DesiredCaptureOptions).bAutostopOnCapture != false) &&
        (cVar7 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar7 == '\x01')) &&
       (this->CaptureRequestCount == (this->DesiredCaptureOptions).NumberOfFramesToCapture)) {
      local_d0._16_8_ = 0;
      local_d0._0_8_ = 0;
      local_d0._8_8_ = 0;
      StopCapture_Callback(this,true,&local_d0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PrintFrameState @ 14d7b7270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::PrintFrameState(UMediaCapture *this)

{
  FString local_18;
  
  if (6 < (byte)LogMediaIOCore._0_1_) {
    UE::MediaCaptureData::FFrameManager::GetFramesState((this->FrameManager).Ptr,&local_18);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessCapture_GameThread @ 14d7b72d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::ProcessCapture_GameThread(UMediaCapture *this)

{
  EMediaCaptureOverrunAction EVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  undefined3 uVar9;
  char cVar10;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *pTVar11;
  FTimecode *pFVar12;
  FFrameRate FVar13;
  undefined8 *puVar14;
  FCaptureFrame *pFVar15;
  bool bVar16;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_b8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_90;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_80;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FString local_60;
  FTimecode local_50 [2];
  
  local_b8.Object = (FCaptureFrame *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  cVar10 = (**(code **)(this->_padding_ + 0x2b0))();
  if (cVar10 == '\x03') {
LAB_14d7b735e:
    pFVar15 = local_b8.Object;
    cVar10 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (cVar10 != '\x03') {
      EVar1 = (this->DesiredCaptureOptions).OverrunAction;
      if (EVar1 == Flush) {
        bVar16 = -1 < CpuChannel->Enabled;
        if (bVar16) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1087,"MediaCapture::FlushRenderingCommands",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x43f);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1087);
        }
        if (6 < (byte)LogMediaIOCore._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
        FlushRenderingCommands();
        WaitForSingleExperimentalSchedulingTaskToComplete(this);
        pTVar11 = UE::MediaCaptureData::FFrameManager::
                  GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>
                            ((this->FrameManager).Ptr,&local_80);
        if (&local_b8 != pTVar11) {
          local_b8.Object = pTVar11->Object;
          pTVar11->Object = (FCaptureFrame *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_b8.SharedReferenceCount,&pTVar11->SharedReferenceCount);
          pFVar15 = local_b8.Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
        if (pFVar15 == (FCaptureFrame *)0x0) {
          if (1 < (byte)LogMediaIOCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          }
          local_a8._16_8_ = 0;
          local_a8._0_8_ = 0;
          local_a8._8_8_ = 0;
          StopCapture_Callback(this,false,&local_a8);
          if (bVar16) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_14d7b7607;
        }
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else if ((EVar1 == Skip) && (5 < (byte)LogMediaIOCore._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
    bVar16 = pFVar15 == (FCaptureFrame *)0x0;
  }
  else {
    pTVar11 = UE::MediaCaptureData::FFrameManager::
              GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>
                        ((this->FrameManager).Ptr,&local_90);
    if (&local_b8 != pTVar11) {
      local_b8.Object = pTVar11->Object;
      pTVar11->Object = (FCaptureFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_b8.SharedReferenceCount,&pTVar11->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    bVar16 = false;
    pFVar15 = local_b8.Object;
    if (local_b8.Object == (FCaptureFrame *)0x0) goto LAB_14d7b735e;
  }
  if (pFVar15 != (FCaptureFrame *)0x0) {
    pFVar12 = FApp::GetTimecode(local_50);
    fVar7 = pFVar12->Subframe;
    bVar8 = pFVar12->bDropFrameFormat;
    uVar9 = *(undefined3 *)&pFVar12->field_0x15;
    iVar3 = pFVar12->Hours;
    iVar4 = pFVar12->Minutes;
    iVar5 = pFVar12->Seconds;
    iVar6 = pFVar12->Frames;
    if ((bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pFVar15->CaptureBaseData).SourceFrameTimecode.Hours = iVar3;
    (pFVar15->CaptureBaseData).SourceFrameTimecode.Minutes = iVar4;
    (pFVar15->CaptureBaseData).SourceFrameTimecode.Seconds = iVar5;
    (pFVar15->CaptureBaseData).SourceFrameTimecode.Frames = iVar6;
    (pFVar15->CaptureBaseData).SourceFrameTimecode.Subframe = fVar7;
    (pFVar15->CaptureBaseData).SourceFrameTimecode.bDropFrameFormat = bVar8;
    *(undefined3 *)&(pFVar15->CaptureBaseData).SourceFrameTimecode.field_0x15 = uVar9;
    FVar13 = FApp::GetTimecodeFrameRate();
    (pFVar15->CaptureBaseData).SourceFrameTimecodeFramerate = *(FFrameRate *)FVar13;
    (pFVar15->CaptureBaseData).SourceFrameNumberRenderThread = GFrameCounter;
    this->CaptureRequestCount = this->CaptureRequestCount + 1;
    (pFVar15->CaptureBaseData).SourceFrameNumber = (longlong)this->CaptureRequestCount;
    puVar14 = (undefined8 *)(**(code **)(this->_padding_ + 0x370))(this,local_70);
    if (&pFVar15->UserData != (TSharedPtr<FMediaCaptureUserData,1> *)puVar14) {
      (pFVar15->UserData).Object = (FMediaCaptureUserData *)*puVar14;
      *puVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar15->UserData).SharedReferenceCount,(FSharedReferencer<1> *)(puVar14 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  }
  if (6 < (byte)LogMediaIOCore._0_1_) {
    UE::MediaCaptureData::FFrameManager::GetFramesState((this->FrameManager).Ptr,&local_60);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  PrepareAndDispatchCapture_GameThread(this,&local_b8);
LAB_14d7b7607:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// ProcessCapture_RenderThread @ 14d7b7640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
UMediaCapture::ProcessCapture_RenderThread
          (UMediaCapture *this,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_1,
          FCaptureFrameArgs *param_2)

{
  FRDGBuilder *pFVar1;
  FRHITexture *pFVar2;
  FFrameManager *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FRDGScope *this_00;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRDGTexture *pFVar9;
  FCaptureFrame *pFVar10;
  ForAnyElementType FVar11;
  UMediaCapture *pUVar12;
  FMediaCaptureUserData **ppFVar13;
  FRHIResource **ppFVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  int local_res10;
  int local_res18 [2];
  TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *local_res20;
  FWeakObjectPtr local_178;
  ulonglong local_170;
  TRDGEventScopeGuard<FRDGScope_RHI> local_168;
  char local_158;
  longlong *local_150;
  FRHIResource *local_148;
  FRHIResource *local_140;
  UMediaCapture *local_138;
  FString local_130;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_const_*,std::tuple<int_&&>_>
  local_120;
  FMediaCaptureUserData *local_110;
  TReferenceControllerBase<1> *local_108;
  FMediaCaptureUserData *local_100;
  TReferenceControllerBase<1> *local_f8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FWeakObjectPtr local_c0;
  longlong local_b0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  FTimecode local_88;
  FTimecode local_70;
  FTimecode local_58;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1472,"UMediaCapture::ProcessCapture_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x5c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1472);
  }
  local_res10 = -1;
  if (param_1->Object != (FCaptureFrame *)0x0) {
    local_res10 = (int)(param_1->Object->CaptureBaseData).SourceFrameNumberRenderThread;
  }
  bVar4 = false;
  local_158 = '\0';
  cVar6 = *(char *)((longlong)&param_2->GraphBuilder->_padding_ + 6);
  if ((cVar6 != '\0') && ((cVar6 != '\x01' || ((param_2->GraphBuilder->_padding_ & 4) == 0)))) {
    local_res18[0] = local_res10 % 10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_98 = 0x54d901f0;
      uStack_94 = 1;
      ::Desc._padding_._0_4_ = 0x54d901f0;
      ::Desc._padding_._4_4_ = uStack_9c;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_MediaCapture_Pr;
      ::Desc._padding_ = (longlong)u_MediaCapture_Pr;
      ::Desc._padding_._0_4_ = 0x5c8;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UMediaCapture::ProcessCapture_RenderThread'::__l10::Desc::operator()<int>'::__l3::
             <lambda_1>::operator()<int>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar1 = param_2->GraphBuilder;
    local_120._padding_ = (longlong)local_res18;
    local_120._Myfirst._Val = &::Desc;
    local_168.State = (FRDGScopeState *)pFVar1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar1->_padding_,(FRDGScope **)pFVar1);
    ((FState *)&pFVar1->_padding_)->Current = this_00;
    local_res20 = &this_00->Impl;
    local_170 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_168.Scope = this_00;
    if ((3 < local_170) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar15 = (code *)swi(3);
      uVar5 = (*pcVar15)();
      return (bool)uVar5;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[local_170])(local_res20);
    this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)pFVar1);
    pFVar7 = FRHIBreadcrumbAllocator::
             AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>,int_&&>
                       (this_01,&local_120);
    FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)local_res20,(FRDGScopeState *)pFVar1,pFVar7);
    (local_res20->Impl).TypeIndex = '\x02';
    if (*(bool *)((longlong)&pFVar1->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar1->_padding_);
    }
    bVar4 = true;
    local_158 = '\x01';
  }
  ::FString::PrintfImpl(&local_130,L"Process Capture Render Thread Frame %d");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar11.Data = local_130.Data.AllocatorInstance.Data;
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar11.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x5cb);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (bSimulateError != false) {
    SetState((param_2->MediaCapture).field0_0x0.DebugPtr,Error);
    bSimulateError = false;
LAB_14d7b78c6:
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_168);
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar2 = (param_2->ResourceToCapture).Reference;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    return false;
  }
  if (param_1->Object == (FCaptureFrame *)0x0) goto LAB_14d7b78c6;
  if (param_2->RDGResourceToCapture == (FRDGTexture *)0x0) {
    pFVar2 = (param_2->ResourceToCapture).Reference;
    if (pFVar2 != (FRHITexture *)0x0) {
      pFVar1 = param_2->GraphBuilder;
      TVar8 = CreateRenderTarget((FRHITexture *)&local_150,(wchar_t *)pFVar2);
      pFVar9 = FRDGBuilder::RegisterExternalTexture
                         (pFVar1,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
      param_2->RDGResourceToCapture = pFVar9;
      if (local_150 != (longlong *)0x0) {
        (**(code **)(*local_150 + 0x38))();
      }
      goto LAB_14d7b79a2;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    goto LAB_14d7b7d20;
  }
LAB_14d7b79a2:
  pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
  if (((pFVar10->bPrerollFrame != false) &&
      ((this->DesiredCaptureOptions).bAutostopOnCapture != false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetDesiredCaptureOptions().bAutostopOnCapture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                         ,0x5e5,L""), bVar4)) {
    pcVar15 = (code *)swi(3);
    uVar5 = (*pcVar15)();
    return (bool)uVar5;
  }
  pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
  if ((pFVar10->bPrerollFrame != false) ||
     ((this->DesiredCaptureOptions).bAutostopOnCapture != false)) {
    UE::MediaCapture::FRenderPipeline::InitializeResources_RenderThread
              ((((param_2->MediaCapture).field0_0x0.DebugPtr)->CaptureRenderPipeline).Ptr,param_1,
               param_2->GraphBuilder,param_2->RDGResourceToCapture);
  }
  cVar6 = (**(code **)(((param_2->MediaCapture).field0_0x0.DebugPtr)->_padding_ + 0x308))();
  pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
  if (((pFVar10->bPrerollFrame == false) && (cVar6 == '\0')) &&
     ((this->bLoggedOutputNotReady == false &&
      (this->bLoggedOutputNotReady = true, 3 < (byte)LogMediaIOCore._0_1_)))) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
  if ((pFVar10->bPrerollFrame != false) || (cVar6 == '\0')) {
    bVar4 = true;
    pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
    pFVar10->bPrerollFrame = false;
    pFVar3 = (this->FrameManager).Ptr;
    pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::
              operator*<UE::MediaCaptureData::FCaptureFrame>(param_1);
    UE::MediaCaptureData::FFrameManager::MarkAvailable(pFVar3,(FFrame *)pFVar10);
    goto LAB_14d7b7e49;
  }
  if (5 < (byte)LogMediaIOCore._0_1_) {
    FApp::GetTimecode(&local_88);
    FApp::GetTimecode(&local_70);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  pUVar12 = (param_2->MediaCapture).field0_0x0.DebugPtr;
  pcVar15 = *(code **)(pUVar12->_padding_ + 0x388);
  pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
  cVar6 = (*pcVar15)(pUVar12,&pFVar10->CaptureBaseData);
  if (cVar6 == '\0') {
    pFVar3 = (this->FrameManager).Ptr;
    bVar4 = true;
    pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::
              operator*<UE::MediaCaptureData::FCaptureFrame>(param_1);
    UE::MediaCaptureData::FFrameManager::MarkAvailable(pFVar3,(FFrame *)pFVar10);
    if (5 < (byte)LogMediaIOCore._0_1_) {
      FApp::GetTimecode(&local_58);
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_________________152bdcbf0,
                 (FLogCategoryBase *)&LogMediaIOCore);
    }
    goto LAB_14d7b7e49;
  }
  if (this->DesiredOutputResourceType == Texture) {
    pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
    cVar6 = (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10);
    if (cVar6 == '\0') {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_887742707559037442>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                         ,0x5fe,"CapturingFrame->IsTextureResource()");
      if (bVar4) {
        pcVar15 = (code *)swi(3);
        uVar5 = (*pcVar15)();
        return (bool)uVar5;
      }
      if (1 < (byte)LogMediaIOCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
    else {
      pUVar12 = (param_2->MediaCapture).field0_0x0.DebugPtr;
      pcVar15 = *(code **)(pUVar12->_padding_ + 0x398);
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      local_148 = (FRHIResource *)(**(code **)(pFVar10->_padding_ + 0x60))(pFVar10);
      if (local_148 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_148);
      }
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      local_110 = (pFVar10->UserData).Object;
      local_108 = (pFVar10->UserData).SharedReferenceCount.ReferenceController;
      if (local_108 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      ppFVar14 = &local_148;
      ppFVar13 = &local_110;
LAB_14d7b7ce2:
      (*pcVar15)(pUVar12,&pFVar10->CaptureBaseData,ppFVar13,ppFVar14);
      local_f0.Object = param_1->Object;
      local_f0.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame(param_2,&local_f0);
      if (bVar4) {
        bVar4 = true;
        goto LAB_14d7b7e49;
      }
    }
  }
  else {
    pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
    cVar6 = (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10);
    if (cVar6 != '\0') {
      pUVar12 = (param_2->MediaCapture).field0_0x0.DebugPtr;
      pcVar15 = *(code **)(pUVar12->_padding_ + 0x390);
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      local_140 = (FRHIResource *)(**(code **)(pFVar10->_padding_ + 0x68))(pFVar10);
      if (local_140 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_140);
      }
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      local_100 = (pFVar10->UserData).Object;
      local_f8 = (pFVar10->UserData).SharedReferenceCount.ReferenceController;
      if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f8->SharedReferenceCount = (atomic<int>)((int)local_f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_1);
      ppFVar14 = &local_140;
      ppFVar13 = &local_100;
      goto LAB_14d7b7ce2;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_887742707559037430>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x60a,"CapturingFrame->IsBufferResource()");
    if (bVar4) {
      pcVar15 = (code *)swi(3);
      uVar5 = (*pcVar15)();
      return (bool)uVar5;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
LAB_14d7b7d20:
  bVar4 = false;
  if (((param_2->MediaCapture).field0_0x0.DebugPtr)->bIsAutoRestartRequired == (atomic<bool>)0x0) {
    SetState((param_2->MediaCapture).field0_0x0.DebugPtr,Error);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_138 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_138);
    local_b0 = 0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::`182'::<lambda_2>,1,0>
                ::_vftable_;
    local_c0 = local_178;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaCapture::ProcessCapture_RenderThread'::__l182::<lambda_2>,void>
                  ::Call;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_d8);
  }
LAB_14d7b7e49:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_158 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_168);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar2 = (param_2->ResourceToCapture).Reference;
  if (pFVar2 == (FRHITexture *)0x0) {
    return bVar4;
  }
  FRHIResource::Release((FRHIResource *)pFVar2);
  return bVar4;
}

// ProcessReadyFrame_RenderThread @ 14d7b8310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaCapture::ProcessReadyFrame_RenderThread
          (UMediaCapture *this,FRHICommandListImmediate *param_1,UMediaCapture *param_2,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_3)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  FFrameManager *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  DWORD DVar10;
  FCaptureFrame *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_LockResource> FVar13;
  FRHIResource *pFVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_RHI_CaptureCallback> FVar17;
  TStatId TVar18;
  byte bVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  FRHIGPUMask FVar22;
  FNameEntryId FVar23;
  FName FVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  FName local_158;
  FColor_u_0 local_150;
  FColor_u_0 local_14c;
  FName local_148;
  LARGE_INTEGER local_140;
  FRHIResource *local_138;
  FName local_130;
  byte local_128;
  FName local_120;
  FName local_110;
  LARGE_INTEGER local_100;
  FRHIResource *local_f8;
  FRHIResource *local_f0;
  FStatMessage local_e8;
  FString local_d8;
  FStatMessage local_c8;
  FString local_b8;
  FSourceLocation local_a8;
  FMediaCaptureUserData *local_88;
  TReferenceControllerBase<1> *local_80;
  FMediaCaptureUserData *local_78;
  TReferenceControllerBase<1> *local_70;
  FMediaCaptureUserData *local_68;
  TReferenceControllerBase<1> *local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1612,"UMediaCapture::ProcessReadyFrame_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
               ,0x64c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1612);
  }
  bVar27 = true;
  cVar7 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2);
  if (cVar7 == '\0') goto LAB_14d7b8ee8;
  if ((param_3->Object == (FCaptureFrame *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if (param_3->Object->bReadbackRequested == (atomic<bool>)0x0) {
    if ((param_2->bShouldCaptureRHIResource != (atomic<bool>)0x0) &&
       (pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3),
       pFVar11->bDoingGPUCopy != (atomic<bool>)0x0)) {
      pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
      cVar7 = (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11);
      iVar4 = CpuChannel->Enabled;
      if (cVar7 == '\0') {
        bVar27 = iVar4 < 0;
        if (!bVar27) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1687,"UMediaCapture::RHIResourceCaptured",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x697);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1687);
        }
        pcVar5 = *(code **)(param_2->_padding_ + 0x3b8);
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        local_f0 = (FRHIResource *)(**(code **)(pFVar11->_padding_ + 0x68))(pFVar11);
        if (local_f0 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_f0);
        }
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        local_68 = (pFVar11->UserData).Object;
        local_60 = (pFVar11->UserData).SharedReferenceCount.ReferenceController;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        (*pcVar5)(param_2,param_1,&pFVar11->CaptureBaseData,&local_68,&local_f0);
      }
      else {
        if (-1 < iVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1676,"UMediaCapture::UnlockDMATexture_RenderThread",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x68c);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1676);
        }
        pcVar5 = *(code **)(this->_padding_ + 0x358);
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        local_138 = (FRHIResource *)(**(code **)(pFVar11->_padding_ + 0x60))(pFVar11);
        if (local_138 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_138);
        }
        (*pcVar5)(this,&local_138);
        if (-1 < iVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        bVar27 = CpuChannel->Enabled < 0;
        if (!bVar27) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1680,"UMediaCapture::RHIResourceCaptured",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x690);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1680);
        }
        TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        ::FString::PrintfImpl(&local_b8,L"MediaCapture Output Frame %d");
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar21.Data = local_b8.Data.AllocatorInstance.Data;
        }
        bVar8 = -1 < CpuChannel->Enabled;
        if (bVar8) {
          FCpuProfilerTrace::OutputBeginDynamicEvent
                    ((wchar_t *)FVar21.Data,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x691);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        TVar18.StatIdPtr = (TStatIdData *)StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback;
        if (StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback ==
            (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_CaptureCallback>)0x0) {
          pFVar12 = ::FName::FName(local_48,"STAT_MediaCapture_RenderThread_CaptureCallback");
          TVar18.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback,*pFVar12,
                          L"MediaCapture RenderThread CPU Capture Callback","STATGROUP_Media",
                          "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_a8.Impl._Line = 0x692;
        local_a8.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
        ;
        local_a8.Impl._Column = 5;
        local_a8.Impl._Function =
             "bool __cdecl UMediaCapture::ProcessReadyFrame_RenderThread(class FRHICommandListImmediate &,class UMediaCapture *,const class TSharedPtr<class UE::MediaCaptureData::FCaptureFrame,1> &)"
        ;
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)&local_130,TVar18,CycleStat|ClearEveryFrame,false,&local_a8
                  );
        pcVar5 = *(code **)(param_2->_padding_ + 0x3c0);
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        local_f8 = (FRHIResource *)(**(code **)(pFVar11->_padding_ + 0x60))(pFVar11);
        if (local_f8 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_f8);
        }
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        local_78 = (pFVar11->UserData).Object;
        local_70 = (pFVar11->UserData).SharedReferenceCount.ReferenceController;
        if (local_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        (*pcVar5)(param_2,param_1,&pFVar11->CaptureBaseData,&local_78,&local_f8);
        if ((local_128 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_128 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_128 & 4) != 0) {
          FThreadStats::AddMessage(local_130,CycleScopeEnd);
        }
        local_128 = 0;
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      if (!bVar27) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (5 < (byte)LogMediaIOCore._0_1_) {
        TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        DVar10 = GetCurrentThreadId();
        FThreadManager::GetThreadName(DVar10);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
      LOCK();
      pFVar11->bDoingGPUCopy = (atomic<bool>)0x0;
      UNLOCK();
      pFVar3 = (param_2->FrameManager).Ptr;
      pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::
                operator*<UE::MediaCaptureData::FCaptureFrame>(param_3);
      UE::MediaCaptureData::FFrameManager::CompleteNextPending(pFVar3,(FFrame *)pFVar11);
      bVar27 = true;
      LOCK();
      this->PendingFrameCount = (atomic<int>)((int)this->PendingFrameCount + -1);
      UNLOCK();
    }
    goto LAB_14d7b8ee8;
  }
  FVar2.GPUMask = *(uint *)&param_1->field_0x29c;
  FVar22.GPUMask = FVar2.GPUMask;
  if ((FVar2.GPUMask & FVar2.GPUMask - 1) != 0) {
    iVar4 = 0;
    if (FVar2.GPUMask != 0) {
      for (; (FVar2.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    bVar19 = 0;
    if (FVar2.GPUMask != 0) {
      bVar19 = (byte)iVar4;
    }
    FVar22.GPUMask = 1 << (bVar19 & 0x1f);
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar22);
  bVar8 = false;
  bVar27 = false;
  if ((param_2->DesiredCaptureOptions).OverrunAction != Flush) {
    pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    cVar7 = (**(code **)(pFVar11->_padding_ + 0x50))(pFVar11,FVar22.GPUMask);
    if (cVar7 != '\x01') {
      if (6 < (byte)LogMediaIOCore._0_1_) {
        TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      bVar27 = false;
      FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
      goto LAB_14d7b8ee8;
    }
  }
  FVar13 = StatPtr_STAT_MediaCapture_RenderThread_LockResource;
  if (StatPtr_STAT_MediaCapture_RenderThread_LockResource ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_LockResource>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_MediaCapture_RenderThread_LockResource");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_LockResource>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MediaCapture_RenderThread_LockResource,*pFVar12,
                        L"MediaCapture RenderThread LockResource","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar13;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar20 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar20 == 0)) {
LAB_14d7b85be:
    bVar6 = false;
    FVar24 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar23.Value;
        local_158.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                   ,0x668);
        bVar8 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b85be;
    local_158.ComparisonIndex.Value = FVar23.Value;
    local_158.Number = uVar20;
    local_120 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar8 = false;
    bVar6 = true;
  }
  pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
  pFVar14 = (FRHIResource *)(**(code **)(pFVar11->_padding_ + 0x30))(pFVar11,param_1);
  local_138 = pFVar14;
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_e8.NameAndInfo.Index.Value = local_120.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_e8.StatData.Pad = (uchar  [8])(local_140.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar15,&local_e8);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (pFVar14 != (FRHIResource *)0x0) {
    FVar17 = StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback;
    if (StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback ==
        (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_RHI_CaptureCallback>)0x0) {
      pFVar12 = ::FName::FName(&local_50,"STAT_MediaCapture_RenderThread_RHI_CaptureCallback");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_RHI_CaptureCallback>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback,*pFVar12,
                          L"MediaCapture RenderThread RHI Capture Callback","STATGROUP_Media",
                          "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar17;
    bVar27 = false;
    bVar8 = false;
    local_110.ComparisonIndex.Value = 0;
    local_110.Number = 0;
    FVar23 = FVar24.ComparisonIndex.Value;
    uVar20 = FVar24.Number;
    if ((FVar23.Value == 0) && (uVar20 == 0)) {
LAB_14d7b87e2:
      bVar6 = false;
      FVar24 = local_110;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_14c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_14c._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar27 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = FVar23.Value;
          local_148.Number = uVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x674);
          bVar27 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b87e2;
      local_148.ComparisonIndex.Value = FVar23.Value;
      local_148.Number = uVar20;
      local_110 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar6 = true;
    }
    TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    ::FString::PrintfImpl(&local_d8,L"MediaCapture Output Frame %d");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar21.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar26 = -1 < CpuChannel->Enabled;
    if (bVar26) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar21.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                 ,0x675);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_140 = *(LARGE_INTEGER *)(param_2->_padding_ + 0x3a0);
    local_14c.Bits = 0;
    local_150 = (FColor_u_0)(param_2->DesiredOutputSize).field0_0x0._s_0.Y;
    local_158.ComparisonIndex.Value = (param_2->DesiredOutputSize).field0_0x0._s_0.X;
    pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    local_88 = (pFVar11->UserData).Object;
    local_80 = (pFVar11->UserData).SharedReferenceCount.ReferenceController;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    (*(code *)local_140)
              (param_2,&pFVar11->CaptureBaseData,&local_88,local_138,local_158.ComparisonIndex.Value
               ,local_150.Bits,local_14c.Bits);
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar27) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar6) && (FVar24 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
        local_c8.NameAndInfo.Index.Value = local_110.ComparisonIndex.Value;
        local_c8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_100);
        local_c8.StatData.Pad[4] = '\0';
        local_c8.StatData.Pad[5] = '\0';
        local_c8.StatData.Pad[6] = '\0';
        local_c8.StatData.Pad[7] = '\0';
        local_c8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
        local_c8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
        local_c8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
        local_c8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar15,&local_c8);
        piVar1 = &pFVar15->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    (**(code **)(pFVar11->_padding_ + 0x40))(pFVar11);
  }
  if (5 < (byte)LogMediaIOCore._0_1_) {
    TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    DVar10 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar10);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
  LOCK();
  pFVar11->bReadbackRequested = (atomic<bool>)0x0;
  UNLOCK();
  LOCK();
  this->PendingFrameCount = (atomic<int>)((int)this->PendingFrameCount + -1);
  UNLOCK();
  pFVar3 = (param_2->FrameManager).Ptr;
  pFVar11 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::
            operator*<UE::MediaCaptureData::FCaptureFrame>(param_3);
  UE::MediaCaptureData::FFrameManager::CompleteNextPending(pFVar3,(FFrame *)pFVar11);
  bVar27 = true;
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
LAB_14d7b8ee8:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar27;
}

// ResetFixedViewportSize @ 14d7bb0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMediaCapture::ResetFixedViewportSize
          (UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->bViewportHasFixedViewportSize != false) && (param_1->Object != (FSceneViewport *)0x0))
  {
    if (param_2) {
      WaitForPendingTasks(this);
    }
    if (param_1->Object == (FSceneViewport *)0x0) {
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
    FSceneViewport::SetFixedViewportSize(param_1->Object,0,0);
    this->bViewportHasFixedViewportSize = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RestartCapture @ 14d7bb340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::RestartCapture(UMediaCapture *this)

{
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *pTVar1;
  FFrameManager *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  atomic<bool> aVar6;
  TIntPoint<int>_u_0 *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x3b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = &this->CaptureSource;
  if (4 < (byte)LogMediaIOCore._0_1_) {
    if (pTVar1->Object == (FCaptureSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x30))(pTVar1->Object,local_res10);
    if (pTVar1->Object == (FCaptureSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x30))(pTVar1->Object,local_res18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  this_00 = (this->FrameManager).Ptr;
  if (this_00 != (FFrameManager *)0x0) {
    local_20 = local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMediaCapture::RestartCapture'::__l30::<lambda_1>,void,TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&>
               ::Call;
    UE::MediaCaptureData::FFrameManager::ForEachFrame
              (this_00,(TFunctionRef<void___cdecl(TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&)>
                        *)&local_28);
  }
  cVar4 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (cVar4 != '\x04') {
    SetState(this,Preparing);
    WaitForPendingTasks(this);
    (**(code **)(this->_padding_ + 0x330))(this,0);
    if (pTVar1->Object == (FCaptureSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar7 = (TIntPoint<int>_u_0 *)
             (**(code **)(pTVar1->Object->_padding_ + 0x30))(pTVar1->Object,local_res20);
    (this->DesiredSize).field0_0x0 = *pTVar7;
    CacheOutputOptions(this);
    cVar5 = (**(code **)(this->_padding_ + 0x328))(this);
    cVar4 = '\0';
    if (cVar5 != '\0') {
      if (pTVar1->Object == (FCaptureSource *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      cVar4 = (**(code **)(pTVar1->Object->_padding_ + 0x20))();
    }
    aVar6 = (atomic<bool>)(**(code **)(this->_padding_ + 0x380))(this);
    LOCK();
    this->bShouldCaptureRHIResource = aVar6;
    UNLOCK();
    if (cVar4 != '\0') {
      InitializeOutputResources
                (this,((this->MediaOutput).field0_0x0.DebugPtr)->NumberOfTextureBuffers);
      cVar4 = (**(code **)(this->_padding_ + 0x2b0))(this);
      if (cVar4 != '\x04') goto LAB_14d7bb567;
    }
    SetState(this,Stopped);
  }
LAB_14d7bb567:
  LOCK();
  this->bIsAutoRestartRequired = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// SetCaptureAudioDevice @ 14d7bc040

bool __thiscall
UMediaCapture::SetCaptureAudioDevice(UMediaCapture *this,FAudioDeviceHandle *param_1)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (((this->CaptureSource).Object != (FCaptureSource *)0x0) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x2f8))(), cVar1 == '\0')) {
    return false;
  }
  FAudioDeviceHandle::operator=(&this->AudioDeviceHandle,param_1);
  return (bool)cVar1;
}

// SetFixedViewportSize @ 14d7bc710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMediaCapture::SetFixedViewportSize
          (UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1,TIntPoint<int> param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uStackX_1c;
  
  if (param_1->Object == (FSceneViewport *)0x0) {
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
  uStackX_1c = param_2.field0_0x0._4_4_;
  FSceneViewport::SetFixedViewportSize(param_1->Object,param_2.field0_0x0._0_4_,uStackX_1c);
  this->bViewportHasFixedViewportSize = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMediaOutput @ 14d7bc7e0

void __thiscall UMediaCapture::SetMediaOutput(UMediaCapture *this,UMediaOutput *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  if (cVar1 == '\x04') {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->MediaOutput).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetState @ 14d7bd1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaCapture::SetState(UMediaCapture *this,EMediaCaptureState param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8 [2];
  UMediaCapture *local_res18 [2];
  code *local_38 [2];
  undefined **local_28;
  FWeakObjectPtr local_20;
  undefined8 local_10;
  
  if (this->MediaState != (atomic<EMediaCaptureState>)param_1) {
    LOCK();
    this->MediaState = (atomic<EMediaCaptureState>)param_1;
    UNLOCK();
    bVar1 = IsInGameThread();
    if (bVar1) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
                 (void *)0x0);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStateChangedNative);
      return;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
    local_20 = local_res8[0];
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// SetValidSourceGPUMask @ 14d7bd310

void __thiscall UMediaCapture::SetValidSourceGPUMask(UMediaCapture *this,FRHIGPUMask param_1)

{
  LOCK();
  this->ValidSourceGPUMask = (atomic<FRHIGPUMask>)param_1.GPUMask;
  UNLOCK();
  return;
}

// ShouldCaptureRHIResource @ 14d7bd4f0

bool __thiscall UMediaCapture::ShouldCaptureRHIResource(UMediaCapture *this)

{
  return false;
}

// ShouldCaptureRHITexture @ 14d7bd510

bool __thiscall UMediaCapture::ShouldCaptureRHITexture(UMediaCapture *this)

{
  return false;
}

// ShouldCaptureThisFrame @ 14d7bd520

bool __thiscall UMediaCapture::ShouldCaptureThisFrame(UMediaCapture *this,FCaptureBaseData *param_1)

{
  return true;
}

// StartSourceCapture @ 14d7bd930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMediaCapture::StartSourceCapture
          (UMediaCapture *this,TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *param_1)

{
  TPimplPtr<UE::MediaCapture::FRenderPipeline,0> *pTVar1;
  TPimplPtr<UE::MediaCaptureData::FSyncPointWatcher,0> *pTVar2;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *this_00;
  EMediaCapturePhase EVar3;
  UMediaOutput *pUVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  FRenderPipeline *pFVar6;
  FRunnableThread *pFVar7;
  FSyncPointWatcher *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  EMediaCaptureSourceType EVar13;
  EPixelFormat EVar14;
  EMediaCaptureConversionOperation EVar15;
  char cVar16;
  atomic<bool> aVar17;
  bool bVar18;
  TIntPoint<int>_u_0_s_0 *pTVar19;
  TIntPoint<int>_u_0 *pTVar20;
  FCaptureSource *pFVar21;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  FNode **ppFVar25;
  undefined8 *puVar26;
  FRunnableThread *pFVar27;
  FNode *pFVar28;
  longlong *plVar29;
  TSharedPtr<FSceneViewport,1> *this_01;
  FSceneViewport *pFVar30;
  FRenderTarget *pFVar31;
  longlong lVar32;
  UTextureRenderTarget *this_02;
  FTextureRenderTargetResource *pFVar33;
  FMediaCaptureSceneViewExtension *this_03;
  FStaticBasicLogRecord *pFVar34;
  ForAnyElementType FVar35;
  FAutoRegister local_res18 [8];
  uint local_res20;
  FMediaCaptureSceneViewExtension *local_138;
  FSharedReferencer<1> local_130;
  TSharedRef<FMediaCaptureSceneViewExtension,1> local_128;
  FName local_118;
  UMediaCapture *local_110;
  TRawPtrProxy<FMediaCaptureSceneViewExtension> local_108;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  FString local_e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_b8;
  TSharedRef<ISceneViewExtension,1> local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  local_d0._16_8_ = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  StopCapture_Callback(this,false,&local_d0);
  if (param_1->Object == (FCaptureSource *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_887742707559038710>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                        ,0x10a,"false");
    if (!bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                          ,0x10e,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  if ((param_1->Object == (FCaptureSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FMediaCaptureOptions::operator=(&this->DesiredCaptureOptions,&param_1->Object->CaptureOptions);
  cVar12 = (**(code **)(this->_padding_ + 0x310))(this);
  if (cVar12 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if ((param_1->Object == (FCaptureSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  EVar13 = (**(code **)(param_1->Object->_padding_ + 0x28))();
  if (((this->MediaOutput).field0_0x0.DebugPtr == (UMediaOutput *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MediaOutput",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                          ,0x189,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pUVar4 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->CaptureSourceType = EVar13;
  pTVar19 = (TIntPoint<int>_u_0_s_0 *)(**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,local_88);
  TVar5 = *pTVar19;
  (this->DesiredSize).field0_0x0._s_0 = TVar5;
  if ((TVar5.X == UMediaOutput::RequestCaptureSourceSize.field0_0x0._s_0.X) &&
     (TVar5.Y == UMediaOutput::RequestCaptureSourceSize.field0_0x0._s_0.Y)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  pUVar4 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->bUseRequestedTargetSize = bVar10;
  EVar14 = (**(code **)(pUVar4->_padding_ + 0x2c0))();
  pUVar4 = (this->MediaOutput).field0_0x0.DebugPtr;
  this->DesiredPixelFormat = EVar14;
  EVar15 = (**(code **)(pUVar4->_padding_ + 0x2c8))(pUVar4,EVar13);
  this->ConversionOperation = EVar15;
  if (this->bUseRequestedTargetSize == false) {
    if ((this->DesiredCaptureOptions).ResizeMethod == ResizeSource) {
      pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(param_1);
      (**(code **)(pFVar21->_padding_ + 8))(pFVar21,(this->DesiredSize).field0_0x0);
    }
  }
  else {
    if ((param_1->Object == (FCaptureSource *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    pTVar20 = (TIntPoint<int>_u_0 *)
              (**(code **)(param_1->Object->_padding_ + 0x30))(param_1->Object,local_80);
    (this->DesiredSize).field0_0x0 = *pTVar20;
  }
  CacheOutputOptions(this);
  if ((param_1->Object == (FCaptureSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  cVar12 = (**(code **)(param_1->Object->_padding_ + 0x18))
                     (param_1->Object,&this->DesiredSize,this->DesiredPixelFormat,0);
  if (cVar12 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  SetState(this,Preparing);
  cVar16 = (**(code **)(this->_padding_ + 0x328))(this);
  cVar12 = '\0';
  if (cVar16 != '\0') {
    pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(param_1);
    cVar12 = (**(code **)(pFVar21->_padding_ + 0x20))(pFVar21);
  }
  aVar17 = (atomic<bool>)(**(code **)(this->_padding_ + 0x380))(this);
  LOCK();
  this->bShouldCaptureRHIResource = aVar17;
  UNLOCK();
  pTVar22 = ::operator_new(0x30);
  if (pTVar22 == (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar22 = (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    *(UMediaCapture **)(pTVar22 + 1) = this;
    (pTVar22->AllocatorInstance).Data =
         (FScriptContainerElement *)
         UE::Core::Private::PimplPtr::DeleterFunc<UE::MediaCapture::FRenderPipeline>;
    lVar32 = (longlong)(pTVar22 + 1) + 8;
    pTVar22->ArrayNum = 0;
    pTVar22->ArrayMax = 0;
    *(undefined8 *)lVar32 = 0;
    pTVar22[2].AllocatorInstance = 0;
    pTVar23 = UE::MediaCapture::FRenderPass::CreateRenderPasses(&local_100,this);
    if ((TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)lVar32 != pTVar23) {
      DestructItems<UE::MediaCapture::FRenderPass,int>
                (*(FRenderPass **)lVar32,*(int *)(pTVar22 + 2));
      if (*(void **)lVar32 != (void *)0x0) {
        FMemory::Free(*(void **)lVar32);
      }
      *(FScriptContainerElement **)lVar32 = (pTVar23->AllocatorInstance).Data;
      (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pTVar22 + 2) = pTVar23->ArrayNum;
      *(int *)((longlong)(pTVar22 + 2) + 4) = pTVar23->ArrayMax;
      pTVar23->ArrayNum = 0;
      pTVar23->ArrayMax = 0;
    }
    DestructItems<UE::MediaCapture::FRenderPass,int>
              ((FRenderPass *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if ((FRenderPass *)local_100.AllocatorInstance.Data != (FRenderPass *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  pTVar1 = &this->CaptureRenderPipeline;
  if ((TPimplPtr<UE::MediaCapture::FRenderPipeline,0> *)&local_78 == pTVar1) {
    if ((FRenderPipeline *)(pTVar22 + 1) != (FRenderPipeline *)0x0) {
      pFVar24 = (pTVar22->AllocatorInstance).Data;
      goto LAB_14d7bdd23;
    }
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = (FRenderPipeline *)(pTVar22 + 1);
    if (pFVar6 != (FRenderPipeline *)0x0) {
      pFVar24 = pFVar6[-1].RenderPasses.AllocatorInstance.Data;
      pTVar22 = &pFVar6[-1].RenderPasses;
LAB_14d7bdd23:
      (*(code *)pFVar24)(pTVar22);
    }
  }
  ppFVar25 = ::operator_new(0x60);
  if (ppFVar25 == (FNode **)0x0) {
    ppFVar25 = (FNode **)0x0;
  }
  else {
    *ppFVar25 = (FNode *)UE::Core::Private::PimplPtr::
                         DeleterFunc<UE::MediaCaptureData::FSyncPointWatcher>;
    *(undefined8 *)(ppFVar25 + 1) = 0;
    ppFVar25[3] = (FNode *)0x0;
    *(undefined1 *)(ppFVar25 + 4) = 0;
    *(undefined4 *)((longlong)ppFVar25 + 0x24) = 0;
    ppFVar25[2] = (FNode *)&___7FSyncPointWatcher_MediaCaptureData_UE__6B_;
    FEventRef::FEventRef((FEventRef *)(ppFVar25 + 5),AutoReset);
    ppFVar25[6] = (FNode *)this;
    ppFVar25[7] = (FNode *)0x0;
    *(undefined4 *)(ppFVar25 + 0xb) = 0;
    puVar26 = FMemory::Malloc(0x28,8);
    *puVar26 = 0;
    ppFVar25[7] = (FNode *)puVar26;
    ppFVar25[10] = (FNode *)puVar26;
    ppFVar25[9] = (FNode *)puVar26;
    ppFVar25[8] = (FNode *)puVar26;
    LOCK();
    *(undefined4 *)(ppFVar25 + 0xb) = 0;
    UNLOCK();
    LOCK();
    *(undefined1 *)(ppFVar25 + 4) = 1;
    UNLOCK();
    local_118 = *(FName *)((longlong)ppFVar25[6] + 0x18);
    ::FName::ToString(&local_118,&local_f0);
    ::FString::PrintfImpl(&local_e0,L"%s_SyncThread");
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    FVar35.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar35.Data = local_e0.Data.AllocatorInstance.Data;
    }
    pFVar27 = FRunnableThread::Create
                        ((FRunnable *)(ppFVar25 + 2),(wchar_t *)FVar35.Data,0x40000,TPri_Highest,
                         0xffffffffffffffff,None);
    pFVar7 = (FRunnableThread *)ppFVar25[3];
    if ((pFVar7 != pFVar27) && (ppFVar25[3] = (FNode *)pFVar27, pFVar7 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,1);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->SyncPointWatcher;
  if ((TPimplPtr<UE::MediaCaptureData::FSyncPointWatcher,0> *)&local_70 == pTVar2) {
    if ((FSyncPointWatcher *)(ppFVar25 + 2) != (FSyncPointWatcher *)0x0) {
      pFVar28 = *ppFVar25;
      goto LAB_14d7bde8a;
    }
  }
  else {
    pFVar8 = pTVar2->Ptr;
    pTVar2->Ptr = (FSyncPointWatcher *)(ppFVar25 + 2);
    if (pFVar8 != (FSyncPointWatcher *)0x0) {
      pFVar28 = pFVar8[-1].PendingCaptureFrames.TailCopy;
      ppFVar25 = &pFVar8[-1].PendingCaptureFrames.TailCopy;
LAB_14d7bde8a:
      (*(code *)pFVar28)(ppFVar25);
    }
  }
  if (cVar12 == '\0') {
LAB_14d7be1ed:
    bVar10 = false;
    local_b8._16_8_ = 0;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    StopCapture_Callback(this,false,&local_b8);
  }
  else {
    InitializeOutputResources
              (this,((this->MediaOutput).field0_0x0.DebugPtr)->NumberOfTextureBuffers);
    cVar12 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if ((cVar12 == '\x04') ||
       (cVar12 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar12 == '\0')) goto LAB_14d7be1ed;
    this_00 = &this->CaptureSource;
    bVar10 = true;
    TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator=(this_00,param_1);
    if ((this->DesiredCaptureOptions).CapturePhase != EndFrame) {
      bVar18 = FOpenColorIOColorConversionSettings::IsValid
                         (&(this->DesiredCaptureOptions).ColorConversionSettings);
      local_res20 = -(uint)bVar18 & 0x65;
      pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
      plVar29 = (longlong *)(**(code **)(pFVar21->_padding_ + 0x60))(pFVar21,local_58);
      lVar32 = *plVar29;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
      if (lVar32 == 0) {
        lVar32 = (**(code **)(pFVar21->_padding_ + 0x58))(pFVar21);
        if (lVar32 != 0) {
          pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
          this_02 = (UTextureRenderTarget *)(**(code **)(pFVar21->_padding_ + 0x58))(pFVar21);
          pFVar33 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this_02);
          if (pFVar33 != (FTextureRenderTargetResource *)0x0) {
            pFVar31 = (FRenderTarget *)&pFVar33->_padding_;
            goto LAB_14d7bdfa4;
          }
        }
      }
      else {
        this_01 = (TSharedPtr<FSceneViewport,1> *)
                  (**(code **)(pFVar21->_padding_ + 0x60))(pFVar21,local_48);
        pFVar30 = TSharedPtr<FSceneViewport,1>::operator->(this_01);
        pFVar31 = (FRenderTarget *)(**(code **)pFVar30->_padding_)(pFVar30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
LAB_14d7bdfa4:
        if (pFVar31 != (FRenderTarget *)0x0) {
          this_03 = ::operator_new(0x58);
          if (this_03 == (FMediaCaptureSceneViewExtension *)0x0) {
            this_03 = (FMediaCaptureSceneViewExtension *)0x0;
          }
          else {
            EVar3 = (this->DesiredCaptureOptions).CapturePhase;
            FSceneViewExtensionBase::FSceneViewExtensionBase
                      ((FSceneViewExtensionBase *)this_03,local_res18);
            this_03->_padding_ = (longlong)&___7FMediaCaptureSceneViewExtension__6B_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            (this_03->WeakCapture).WeakPtr = (FWeakObjectPtr)0x0;
            local_110 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=(&(this_03->WeakCapture).WeakPtr,(FObjectPtr)&local_110);
            this_03->CapturePhase = EVar3;
            this_03->Priority = local_res20;
            this_03->bPostProcessingEnabled = true;
            this_03->bValidPhase = true;
            (this_03->LastErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            (this_03->LastErrorMessage).Data.ArrayNum = 0;
            (this_03->LastErrorMessage).Data.ArrayMax = 0;
            this_03->CurrentRenderTarget = pFVar31;
            if ((((this_03->_padding_ != 0) && (this_03->_padding_ != 0)) &&
                (0 < *(int *)(this_03->_padding_ + 8))) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!InObject || !InObject->DoesSharedInstanceExist()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x7a5,L"Trying to share an already-shared object"), bVar18)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
          }
          local_108.Object = this_03;
          TSharedRef<FMediaCaptureSceneViewExtension,1>::
          TSharedRef<FMediaCaptureSceneViewExtension,1><FMediaCaptureSceneViewExtension>
                    (&local_128,&local_108);
          local_98.Object = (ISceneViewExtension *)local_128.Object;
          local_98.SharedReferenceCount.ReferenceController =
               local_128.SharedReferenceCount.ReferenceController;
          if (local_128.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FSceneViewExtensions::RegisterExtension(&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          local_138 = local_128.Object;
          local_130.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
          if (local_128.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (&this->ViewExtension != (TSharedPtr<FMediaCaptureSceneViewExtension,1> *)&local_138) {
            (this->ViewExtension).Object = local_128.Object;
            local_138 = (FMediaCaptureSceneViewExtension *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->ViewExtension).SharedReferenceCount,&local_130);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_130.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_128.SharedReferenceCount.ReferenceController);
          goto LAB_14d7be13f;
        }
      }
      if (2 < (byte)LogMediaIOCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
LAB_14d7be13f:
    if ((this->ViewExtension).Object != (FMediaCaptureSceneViewExtension *)0x0) {
      pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
      cVar12 = (**(code **)(pFVar21->_padding_ + 0x40))(pFVar21);
      if ((cVar12 != '\0') &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_887742707559038624>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                              ,0x160,
                              "CaptureSource->GetCaptureType() == UE::MediaCapture::Private::ECaptureType::Immediate"
                             ), bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
    pFVar21 = TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1>::operator->(this_00);
    cVar12 = (**(code **)(pFVar21->_padding_ + 0x40))(pFVar21);
    if (cVar12 == '\0') {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UMediaCapture>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnBeginFrame,(UMediaCapture *)local_68,(pmf_a57cc5e9)this);
      AddFrameInfoForCaptureImmediate(this,GFrameCounter);
    }
    else {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UMediaCapture>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEndFrame,(UMediaCapture *)(local_68 + 8),(pmf_a57cc5e9)this);
    }
  }
  if (GRHIGlobals.SupportsMultithreading == false) {
    if ((byte)LogMediaIOCore._0_1_ < 4) goto LAB_14d7be252;
    pFVar34 = &::LOG_Static;
  }
  else {
    cVar12 = (**(code **)(this->_padding_ + 0x360))(this);
    if ((cVar12 != '\0') || ((byte)LogMediaIOCore._0_1_ < 4)) goto LAB_14d7be252;
    pFVar34 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar34,(FLogCategoryBase *)&LogMediaIOCore);
LAB_14d7be252:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar10;
}

// StaticRegisterNativesUMediaCapture @ 14d7be450

void __cdecl UMediaCapture::StaticRegisterNativesUMediaCapture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMediaCapture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopCapture @ 14d7be540

void __thiscall UMediaCapture::StopCapture(UMediaCapture *this,bool param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  StopCapture_Callback(this,param_1,&local_28);
  return;
}

// StopCaptureImpl @ 14d7be570

void __thiscall UMediaCapture::StopCaptureImpl(UMediaCapture *this,bool param_1)

{
  return;
}

// StopCapture_Callback @ 14d7be620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMediaCapture::StopCapture_Callback
          (UMediaCapture *this,bool param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FFrameManager *this_00;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TFutureBase<void> *this_01;
  undefined1 auStack_10d8 [32];
  undefined1 local_10b8 [8];
  FWeakObjectPtr local_10b0;
  undefined1 local_10a8 [16];
  undefined1 local_1098 [40];
  undefined1 local_1070 [8];
  TReferenceControllerBase<1> *local_1068;
  code *local_1058 [5];
  undefined8 *local_1030;
  uchar local_1028 [4096];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14d7be640;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  if (this->bWaitingForStopCapture != false) goto LAB_14d7be986;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_10b0.ObjectIndex = 0;
    local_10b0.ObjectSerialNumber = 0;
    local_10a8._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_10b0,(FObjectPtr)local_10a8);
    local_1098._0_4_ = local_10b0.ObjectIndex;
    local_1098._4_4_ = local_10b0.ObjectSerialNumber;
    local_1098[8] = param_1;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(local_1098 + 0x10),
               param_2);
    local_1058[0] = (code *)0x0;
    local_1030 = FMemory::Malloc(0x30,8);
    *local_1030 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::`8'::<lambda_1>,1,1>
                   ::_vftable_;
    pFVar1 = (FWeakObjectPtr *)(local_1030 + 1);
    pFVar1->ObjectIndex = local_1098._0_4_;
    pFVar1->ObjectSerialNumber = local_1098._4_4_;
    *(undefined1 *)(local_1030 + 2) = local_1098[8];
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1030 + 3),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1098 + 0x10));
    if (pFVar1 != (FWeakObjectPtr *)0x0) {
      local_1058[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UMediaCapture::StopCapture_Callback'::__l8::<lambda_1>,void>::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_1058);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1098 + 0x10));
    goto LAB_14d7be986;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (cVar3 == '\x03') {
LAB_14d7be765:
    if (param_1) {
      cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
      if (cVar3 != '\x04') {
        cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
        if (cVar3 != '\x03') {
          SetState(this,StopRequested);
          if ((this->DesiredCaptureOptions).bAutostopOnCapture != true) {
            WaitForPendingTasks(this);
          }
        }
      }
      goto LAB_14d7be986;
    }
  }
  else {
    cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (cVar3 == '\x01') goto LAB_14d7be765;
  }
  this_00 = (this->FrameManager).Ptr;
  if (this_00 != (FFrameManager *)0x0) {
    local_10a8._8_8_ = local_10b8;
    local_10a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMediaCapture::StopCapture_Callback'::__l25::<lambda_2>,void,TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&>
         ::Call;
    UE::MediaCaptureData::FFrameManager::ForEachFrame
              (this_00,(TFunctionRef<void___cdecl(TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&)>
                        *)local_10a8);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (cVar3 != '\x04') {
    cVar3 = (**(code **)(this->_padding_ + 0x338))(this);
    if (cVar3 == '\0') {
      SetState(this,Stopped);
    }
    else {
      SetState(this,StopRequested);
      this->bWaitingForStopCapture = true;
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               this);
    while ((0 < (int)this->WaitingForRenderCommandExecutionCounter ||
           (this->bPendingOutputResourcesInitialized != (atomic<bool>)0x0))) {
      FlushRenderingCommands();
    }
    cVar3 = (**(code **)(this->_padding_ + 0x338))(this);
    if (cVar3 != '\0') {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_10b0.ObjectIndex = 0;
      local_10b0.ObjectSerialNumber = 0;
      local_10a8._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_10b0,(FObjectPtr)local_10a8);
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint632 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint632,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                     ,0x278,L"UMediaCapture::InitiateStopCapture");
          __BookmarkPoint632 = true;
        }
        uVar4 = CallstackTrace_GetCurrentId();
        local_1028[0] = '\0';
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint632,uVar4,1,local_1028);
      }
      this_01 = (TFutureBase<void> *)(**(code **)(this->_padding_ + 0x340))(this,local_1070);
      local_1098._0_4_ = local_10b0.ObjectIndex;
      local_1098._4_4_ = local_10b0.ObjectSerialNumber;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(local_1098 + 8),
                 param_2);
      TFutureBase<void>::Then<_UMediaCapture::StopCapture_Callback_::__l38::<lambda_3>_>
                (this_01,(TFuture<void> *)local_10a8,(<lambda_3> *)local_1098);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_10a8._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1068);
      goto LAB_14d7be986;
    }
    (**(code **)(this->_padding_ + 0x330))(this,0);
    PostCaptureCleanup(this);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_2);
LAB_14d7be986:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// StopCapture_Future @ 14d7be9c0

TFuture<void> * __thiscall
UMediaCapture::StopCapture_Future(UMediaCapture *this,TFuture<void> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TFuture<void> *pTVar3;
  undefined1 local_res10 [24];
  TPromise<void> local_28;
  
  local_res10[0] = 0;
  `UMediaCapture::StopCapture_Future'::__l2::<lambda_1>::operator()(local_res10);
  TPromise<void>::TPromise<void>(&local_28);
  TPromise<void>::EmplaceValue<>(&local_28);
  TPromise<void>::GetFuture(&local_28,__return_storage_ptr__);
  if ((local_28.State.Object != (TFutureState<void> *)0x0) &&
     ((local_28.State.Object)->field_0x68 == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFuture<void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.State.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SupportsAnyThreadCapture @ 14d7bec20

bool __thiscall UMediaCapture::SupportsAnyThreadCapture(UMediaCapture *this)

{
  return false;
}

// SupportsAutoRestart @ 14d7bec30

bool __thiscall UMediaCapture::SupportsAutoRestart(UMediaCapture *this)

{
  return false;
}

// SupportsStopCapture_Future @ 14d7bec40

bool __thiscall UMediaCapture::SupportsStopCapture_Future(UMediaCapture *this)

{
  return false;
}

// TryCaptureImmediate_RenderThread @ 14d7c1940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
UMediaCapture::TryCaptureImmediate_RenderThread
          (UMediaCapture *this,FRDGBuilder *param_1,FRDGTexture *param_2,TIntRect<int> *param_3)

{
  bool bVar1;
  FCaptureFrameArgs local_48;
  
  LOCK();
  this->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)this->WaitingForRenderCommandExecutionCounter + 1);
  UNLOCK();
  local_48.ResourceToCapture.Reference = (FRHITexture *)0x0;
  local_48.GraphBuilder = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMediaCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_48.DesiredSize.field0_0x0 = (this->DesiredSize).field0_0x0;
  local_48.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_48.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_48.MediaCapture.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)this;
  local_48.RDGResourceToCapture = param_2;
  bVar1 = CaptureImmediate_RenderThread(this,&local_48);
  if (local_48.ResourceToCapture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.ResourceToCapture.Reference);
  }
  LOCK();
  this->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)this->WaitingForRenderCommandExecutionCounter + -1);
  UNLOCK();
  return bVar1;
}

// TryCaptureImmediate_RenderThread @ 14d7c19f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
UMediaCapture::TryCaptureImmediate_RenderThread
          (UMediaCapture *this,FRDGBuilder *param_1,FRHITexture *param_2,TIntRect<int> *param_3)

{
  bool bVar1;
  FCaptureFrameArgs local_48;
  
  local_48.ResourceToCapture.Reference = (FRHITexture *)0x0;
  local_48.RDGResourceToCapture = (FRDGTexture *)0x0;
  local_48.GraphBuilder = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMediaCapture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_48.DesiredSize.field0_0x0 = (this->DesiredSize).field0_0x0;
  local_48.MediaCapture.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)this;
  if (param_2 != (FRHITexture *)0x0) {
    local_48.ResourceToCapture.Reference = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_48.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_48.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  bVar1 = CaptureImmediate_RenderThread(this,&local_48);
  if (local_48.ResourceToCapture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.ResourceToCapture.Reference);
  }
  return bVar1;
}

// UnlockDMATexture_RenderThread @ 14d7c2100

void __thiscall
UMediaCapture::UnlockDMATexture_RenderThread(UMediaCapture *this,TRefCountPtr<FRHITexture> param_1)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// UpdateAudioDeviceImpl @ 14d7c2940

bool __thiscall
UMediaCapture::UpdateAudioDeviceImpl(UMediaCapture *this,FAudioDeviceHandle *param_1)

{
  return true;
}

// UpdateRenderTargetImpl @ 14d7c2950

bool __thiscall
UMediaCapture::UpdateRenderTargetImpl(UMediaCapture *this,UTextureRenderTarget2D *param_1)

{
  return true;
}

// UpdateSceneViewport @ 14d7c2960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMediaCapture::UpdateSceneViewport(UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> *pTVar4;
  UMediaCapture *local_res8;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_28;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> local_18;
  
  if ((this->CaptureSource).Object == (FCaptureSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->CaptureSource).Object == (FCaptureSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8 = this;
  pTVar4 = MakeShared<UE::MediaCapture::Private::FSceneViewportCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,TSharedPtr<FSceneViewport,1>_&>
                     (&local_18,&local_res8,&((this->CaptureSource).Object)->CaptureOptions,param_1)
  ;
  local_28.Object = (FCaptureSource *)pTVar4->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = UpdateSource(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// UpdateSceneViewportImpl @ 14d7c2a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
UMediaCapture::UpdateSceneViewportImpl(UMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  return true;
}

// UpdateSource @ 14d7c2a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaCapture::UpdateSource
          (UMediaCapture *this,TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *param_1)

{
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  FCaptureSource *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_68;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_50;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_38;
  
  cVar5 = (**(code **)(this->_padding_ + 0x2b0))();
  if ((cVar5 != '\x01') && (cVar5 = (**(code **)(this->_padding_ + 0x2b0))(this), cVar5 != '\x02'))
  {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    local_68._16_8_ = 0;
    local_68._0_8_ = 0;
    local_68._8_8_ = 0;
    StopCapture_Callback(this,false,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                         ,0x1e4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar1 = &this->CaptureSource;
  pTVar2 = (this->CaptureSource).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != param_1) {
    pTVar1->Object = param_1->Object;
    param_1->Object = (FCaptureSource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CaptureSource).SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  if ((this->bUseRequestedTargetSize == false) &&
     ((this->DesiredCaptureOptions).ResizeMethod == ResizeSource)) {
    if ((pTVar1->Object == (FCaptureSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    (**(code **)(pTVar1->Object->_padding_ + 8))(pTVar1->Object,(this->DesiredSize).field0_0x0);
  }
  if ((pTVar1->Object == (FCaptureSource *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  cVar5 = (**(code **)(pTVar1->Object->_padding_ + 0x18))
                    (pTVar1->Object,&this->DesiredSize,this->DesiredPixelFormat,1);
  if (cVar5 == '\0') {
    if ((pTVar1->Object == (FCaptureSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x10))();
    pTVar8 = &local_50;
    local_50._16_8_ = 0;
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
  }
  else {
    if ((pTVar1->Object == (FCaptureSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    cVar5 = (**(code **)(pTVar1->Object->_padding_ + 0x48))();
    if (cVar5 != '\0') {
      lpCriticalSection = &this->AccessingCapturingSource;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      WaitForPendingTasks(this);
      if ((pFVar3 == (FCaptureSource *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,0);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    if ((pTVar1->Object == (FCaptureSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x10))();
    pTVar8 = &local_38;
    local_38._16_8_ = 0;
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
  }
  StopCapture_Callback(this,false,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// UpdateTextureRenderTarget2D @ 14d7c2ed0

bool __thiscall
UMediaCapture::UpdateTextureRenderTarget2D(UMediaCapture *this,UTextureRenderTarget2D *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *pTVar4;
  UMediaCapture *local_res8;
  UTextureRenderTarget2D *local_res10 [3];
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_28;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> local_18;
  
  local_res10[0] = param_1;
  if ((this->CaptureSource).Object == (FCaptureSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x222,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->CaptureSource).Object == (FCaptureSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8 = this;
  pTVar4 = MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&>
                     (&local_18,&local_res8,&((this->CaptureSource).Object)->CaptureOptions,
                      local_res10);
  local_28.Object = (FCaptureSource *)pTVar4->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = UpdateSource(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// UseAnyThreadCapture @ 14d7c2fb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UMediaCapture::UseAnyThreadCapture(UMediaCapture *this)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar1 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (!GRHIGlobals.SupportsMultithreading) {
    return false;
  }
  bVar3 = IsInParallelGameThread();
  lVar6 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar2 = CVarMediaIOScheduleOnAnyThread.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != 0) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar6 = 0;
    }
    if ((*(int *)((longlong)pTVar2->ShadowedValue + lVar6) != 0) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x360))(this), cVar4 != '\0')) {
      return true;
    }
    return false;
  }
  return false;
}

// UseExperimentalScheduling @ 14d7c3050

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UMediaCapture::UseExperimentalScheduling(UMediaCapture *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (!GRHIGlobals.SupportsMultithreading) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 1) {
    return false;
  }
  return true;
}

// ValidateMediaOutput @ 14d7c3480

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaCapture::ValidateMediaOutput(UMediaCapture *this)

{
  UMediaOutput *pUVar1;
  char cVar2;
  bool bVar3;
  void *local_18;
  undefined8 local_10;
  
  pUVar1 = (this->MediaOutput).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaOutput *)0x0) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    return false;
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,&local_18);
  if (cVar2 == '\0') {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      bVar3 = false;
      goto LAB_14d7c353a;
    }
  }
  else {
    if (((this->DesiredCaptureOptions).bAutostopOnCapture == false) ||
       (0 < (this->DesiredCaptureOptions).NumberOfFramesToCapture)) {
      bVar3 = true;
      goto LAB_14d7c353a;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  bVar3 = false;
LAB_14d7c353a:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar3;
}

// WaitForAllExperimentalSchedulingTasksToComplete @ 14d7c40b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMediaCapture::WaitForAllExperimentalSchedulingTasksToComplete(UMediaCapture *this)

{
  atomic<unsigned_int> aVar1;
  FSyncPointWatcher *pFVar2;
  float fVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  longlong lVar6;
  
  pTVar4 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (GRHIGlobals.SupportsMultithreading) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 4;
    }
    fVar3 = __real_3851b717;
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar6) == 1) {
      pFVar2 = (this->SyncPointWatcher).Ptr;
      aVar1 = pFVar2->PendingCaptureFramesCount;
      while (aVar1 != (atomic<unsigned_int>)0x0) {
        FWindowsPlatformProcess::SleepNoStats(fVar3);
        aVar1 = pFVar2->PendingCaptureFramesCount;
      }
      bVar5 = UseAnyThreadCapture(this);
      if ((!bVar5) && (bVar5 = IsInGameThread(), bVar5)) {
        FlushRenderingCommands();
      }
    }
  }
  return;
}

// WaitForGPU @ 14d7c41a0

void __thiscall UMediaCapture::WaitForGPU(UMediaCapture *this,FRHITexture *param_1)

{
  return;
}

// WaitForPendingTasks @ 14d7c41b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMediaCapture::WaitForPendingTasks(UMediaCapture *this)

{
  atomic<int> aVar1;
  atomic<unsigned_int> aVar2;
  FSyncPointWatcher *pFVar3;
  TConsoleVariableData<int> *pTVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  
  aVar1 = this->WaitingForRenderCommandExecutionCounter;
  pTVar4 = CVarMediaIOEnableExperimentalScheduling.Ref;
  while (CVarMediaIOEnableExperimentalScheduling.Ref = pTVar4, 0 < (int)aVar1) {
    FlushRenderingCommands();
    pTVar4 = CVarMediaIOEnableExperimentalScheduling.Ref;
    aVar1 = this->WaitingForRenderCommandExecutionCounter;
  }
  if (GRHIGlobals.SupportsMultithreading != false) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    fVar5 = __real_3851b717;
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 1) {
      pFVar3 = (this->SyncPointWatcher).Ptr;
      aVar2 = pFVar3->PendingCaptureFramesCount;
      while (aVar2 != (atomic<unsigned_int>)0x0) {
        FWindowsPlatformProcess::SleepNoStats(fVar5);
        aVar2 = pFVar3->PendingCaptureFramesCount;
      }
      bVar6 = UseAnyThreadCapture(this);
      if ((!bVar6) && (bVar6 = IsInGameThread(), bVar6)) {
        FlushRenderingCommands();
      }
    }
  }
  return;
}

// WaitForSingleExperimentalSchedulingTaskToComplete @ 14d7c4270

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMediaCapture::WaitForSingleExperimentalSchedulingTaskToComplete(UMediaCapture *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  FSyncPointWatcher *pFVar3;
  float fVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  
  pTVar5 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (GRHIGlobals.SupportsMultithreading) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    fVar4 = __real_3851b717;
    if (*(int *)((longlong)pTVar5->ShadowedValue + lVar7) == 1) {
      pFVar3 = (this->SyncPointWatcher).Ptr;
      aVar1 = pFVar3->PendingCaptureFramesCount;
      if (aVar1 != (atomic<unsigned_int>)0x0) {
        aVar2 = pFVar3->PendingCaptureFramesCount;
        while ((uint)aVar1 <= (uint)aVar2) {
          FWindowsPlatformProcess::SleepNoStats(fVar4);
          aVar2 = pFVar3->PendingCaptureFramesCount;
        }
      }
      bVar6 = UseAnyThreadCapture(this);
      if ((!bVar6) && (bVar6 = IsInGameThread(), bVar6)) {
        FlushRenderingCommands();
      }
    }
  }
  return;
}

// execCaptureActiveSceneViewport @ 14d7c5080

void __cdecl
UMediaCapture::execCaptureActiveSceneViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMediaCaptureOptions *pFVar3;
  FMediaCaptureOptions local_188;
  FMediaCaptureOptions local_c8;
  
  local_188.bAutoRestartOnSourceSizeChange = false;
  local_188.OverrunAction = Flush;
  local_188.Crop = None;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&local_188.ColorConversionSettings);
  local_188.CustomCapturePoint.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_188.ResizeMethod = None;
  local_188.bSkipFrameWhenRunningExpensiveTasks = true;
  local_188.bConvertToDesiredPixelFormat = true;
  local_188.bForceAlphaToOneOnConversion = false;
  local_188.bApplyLinearToSRGBConversion = false;
  local_188.bAutostopOnCapture = false;
  local_188.NumberOfFramesToCapture = -1;
  local_188.CapturePhase = EndFrame;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMediaCaptureOptions::FMediaCaptureOptions(&local_c8,&local_188);
  bVar2 = CaptureActiveSceneViewport((UMediaCapture *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&local_188.ColorConversionSettings);
  return;
}

// execCaptureTextureRenderTarget2D @ 14d7c5180

void __cdecl
UMediaCapture::execCaptureTextureRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMediaCaptureOptions *pFVar3;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *pTVar4;
  UTextureRenderTarget2D *local_res8;
  UTextureRenderTarget2D *local_res10;
  UMediaCapture *local_res18 [2];
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_1c8;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> local_1b8;
  FMediaCaptureOptions local_1a8;
  FMediaCaptureOptions local_e8;
  
  local_res8 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_1a8.bAutoRestartOnSourceSizeChange = false;
  local_1a8.OverrunAction = Flush;
  local_1a8.Crop = None;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&local_1a8.ColorConversionSettings);
  local_1a8.CustomCapturePoint.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_1a8.ResizeMethod = None;
  local_1a8.bSkipFrameWhenRunningExpensiveTasks = true;
  local_1a8.bConvertToDesiredPixelFormat = true;
  local_1a8.bForceAlphaToOneOnConversion = false;
  local_1a8.bApplyLinearToSRGBConversion = false;
  local_1a8.bAutostopOnCapture = false;
  local_1a8.NumberOfFramesToCapture = -1;
  local_1a8.CapturePhase = EndFrame;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMediaCaptureOptions::FMediaCaptureOptions(&local_e8,&local_1a8);
  local_res10 = local_res8;
  local_res18[0] = (UMediaCapture *)param_1;
  pTVar4 = MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&>
                     (&local_1b8,local_res18,pFVar3,&local_res10);
  local_1c8.Object = (FCaptureSource *)pTVar4->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = StartSourceCapture((UMediaCapture *)param_1,&local_1c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&pFVar3->ColorConversionSettings);
  *(bool *)param_3 = bVar2;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&local_1a8.ColorConversionSettings);
  return;
}

// execGetDesiredPixelFormat @ 14d7c53c0

void __cdecl
UMediaCapture::execGetDesiredPixelFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 6);
  return;
}

// execGetDesiredSize @ 14d7c53f0

void __cdecl UMediaCapture::execGetDesiredSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x20;
  return;
}

// execGetState @ 14d7c5420

void __cdecl UMediaCapture::execGetState(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetMediaOutput @ 14d7c5460

void __cdecl UMediaCapture::execSetMediaOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  char cVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  if (cVar3 == '\x04') {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)(param_1 + 3) = pUVar2;
  }
  return;
}

// execStopCapture @ 14d7c5510

void __cdecl UMediaCapture::execStopCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopCapture_Callback((UMediaCapture *)param_1,local_res10[0] != 0,&local_28);
  return;
}

// execUpdateTextureRenderTarget2D @ 14d7c55c0

void __cdecl
UMediaCapture::execUpdateTextureRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *pTVar4;
  UTextureRenderTarget2D *local_res8;
  UTextureRenderTarget2D *local_res10;
  UMediaCapture *local_res18;
  TSharedPtr<UE::MediaCapture::Private::FCaptureSource,1> local_38;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> local_28;
  
  local_res8 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(longlong *)&param_1[0x11].field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                       ,0x222,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)&param_1[0x11].field_0x8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_res18 = (UMediaCapture *)param_1;
  pTVar4 = MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&>
                     (&local_28,&local_res18,
                      (FMediaCaptureOptions *)(*(longlong *)&param_1[0x11].field_0x8 + 0x10),
                      &local_res10);
  local_38.Object = (FCaptureSource *)pTVar4->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = UpdateSource((UMediaCapture *)param_1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = bVar3;
  return;
}

// operator() @ 150586bd0

bool __thiscall `UMediaCapture::StopCapture_Future'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4091229170057608737>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4091229170057608737>,
                       &`public:___cdecl_`protected:_virtual_class_TFuture<void>___cdecl_UMediaCapture::StopCapture_Future(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586cd0

bool __thiscall `UMediaCapture::GetBytesPerPixel'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_887742707559037207>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_887742707559037207>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

