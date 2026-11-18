// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 13

// FAppleARKitVideoOverlay @ 14cfcfb00

FAppleARKitVideoOverlay * __thiscall
FAppleARKitVideoOverlay::FAppleARKitVideoOverlay(FAppleARKitVideoOverlay *this)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *this_00;
  UPackage *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  FAppleARKitVideoOverlay *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FAppleARKitVideoOverlay__6B_;
  (this->OverlayVertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->IndexBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->MID_CameraOverlay).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MID_DepthOcclusionOverlay).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MID_MatteOcclusionOverlay).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MID_SceneDepthColoration).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->OcclusionMatteTexture).field0_0x0.DebugPtr = (UAppleARKitOcclusionTexture *)0x0;
  (this->OcclusionDepthTexture).field0_0x0.DebugPtr = (UAppleARKitOcclusionTexture *)0x0;
  (this->CameraTexture).field0_0x0.DebugPtr = (UARTextureCameraImage *)0x0;
  (this->SceneDepthTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->SceneDepthConfidenceTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->OcclusionType = None;
  this->bOcclusionDepthTextureRecentlyUpdated = false;
  this->UVOffsets[0].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->UVOffsets[1].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00 = UARKitCameraOverlayMaterialLoader::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = GetTransientPackage();
  pUVar6 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)(pUVar1 + 1),(UObject *)pUVar5,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MID_CameraOverlay).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MID_CameraOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                         ,0x56,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FAppleARKitVideoOverlay *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MID_CameraOverlay).field0_0x0.DebugPtr = pUVar6;
  }
  pUVar5 = GetTransientPackage();
  pUVar6 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)&pUVar1[1].field_0x8,(UObject *)pUVar5,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MID_DepthOcclusionOverlay).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MID_DepthOcclusionOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                         ,0x59,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FAppleARKitVideoOverlay *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MID_DepthOcclusionOverlay).field0_0x0.DebugPtr = pUVar6;
  }
  pUVar5 = GetTransientPackage();
  pUVar6 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)&pUVar1[1].field_0x10,(UObject *)pUVar5,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MID_MatteOcclusionOverlay).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MID_MatteOcclusionOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                         ,0x5c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FAppleARKitVideoOverlay *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MID_MatteOcclusionOverlay).field0_0x0.DebugPtr = pUVar6;
  }
  pUVar5 = GetTransientPackage();
  pUVar6 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)&pUVar1[1].field_0x18,(UObject *)pUVar5,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MID_SceneDepthOcclusion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                         ,0x5f,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FAppleARKitVideoOverlay *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr = pUVar6;
  }
  pUVar5 = GetTransientPackage();
  pUVar6 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)&pUVar1[1].field_0x20,(UObject *)pUVar5,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MID_SceneDepthColoration).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MID_SceneDepthColoration",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                         ,0x62,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FAppleARKitVideoOverlay *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MID_SceneDepthColoration).field0_0x0.DebugPtr = pUVar6;
  }
  uVar3 = CVarDebugOverlayMode._8_8_;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_88.DelegateSize = 0;
  pcVar2 = *(code **)(*(longlong *)CVarDebugOverlayMode._8_8_ + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_60);
  local_48 = &local_88;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAppleARKitVideoOverlay::FAppleARKitVideoOverlay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  (*pcVar2)(uVar3,&local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_78);
  if ((local_88.DelegateSize != 0) &&
     (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  return this;
}

// ~FAppleARKitVideoOverlay @ 14cfd1040

void __thiscall FAppleARKitVideoOverlay::~FAppleARKitVideoOverlay(FAppleARKitVideoOverlay *this)

{
  FRHIBuffer *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  this->_padding_ = (longlong)&___7FAppleARKitVideoOverlay__6B_;
  local_28 = 0;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  (**(code **)(*(longlong *)CVarDebugOverlayMode._8_8_ + 0xe0))
            (CVarDebugOverlayMode._8_8_,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  pFVar1 = (this->IndexBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->OverlayVertexBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 14cfd2c40

void __thiscall
FAppleARKitVideoOverlay::AddReferencedObjects
          (FAppleARKitVideoOverlay *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MID_CameraOverlay,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MID_DepthOcclusionOverlay,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MID_MatteOcclusionOverlay,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MID_SceneDepthOcclusion,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MID_SceneDepthColoration,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->OcclusionMatteTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->OcclusionDepthTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->CameraTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SceneDepthTexture,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014cfd2d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SceneDepthConfidenceTexture,0,0);
  return;
}

// GetPassthroughCameraUVs_RenderThread @ 14cfd6fa0

bool __thiscall
FAppleARKitVideoOverlay::GetPassthroughCameraUVs_RenderThread
          (FAppleARKitVideoOverlay *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          EDeviceScreenOrientation param_2)

{
  TVector2<double> *pTVar1;
  
  pTVar1 = this->UVOffsets;
  if (1 < (byte)(param_2 - LandscapeLeft)) {
    pTVar1 = this->UVOffsets + 1;
  }
  UARUtilitiesFunctionLibrary::GetPassthroughCameraUVs(param_1,pTVar1);
  return true;
}

// GetReferencerName @ 14cfd7b20

FString * __thiscall
FAppleARKitVideoOverlay::GetReferencerName
          (FAppleARKitVideoOverlay *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FAppleARKitVideoOverlay");
  return __return_storage_ptr__;
}

// RenderVideoOverlayWithMaterial @ 14cfdcd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FAppleARKitVideoOverlay::RenderVideoOverlayWithMaterial
          (FAppleARKitVideoOverlay *this,FRHICommandList *param_1,FSceneView *param_2,
          FAppleARKitFrame *param_3,UMaterialInstanceDynamic *param_4,bool param_5)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  int iVar2;
  Type TVar3;
  FRHIBuffer *pFVar4;
  FShaderMapResource *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FMaterialRenderProxy *pFVar14;
  FAppleARKitVideoOverlay *pFVar15;
  TVector2<double>_u_0 TVar16;
  bool bVar17;
  uint uVar18;
  atomic<unsigned_int> aVar19;
  FRHIBreadcrumbAllocator *pFVar20;
  FRHIBreadcrumbNode *pFVar21;
  TVector2<double> *pTVar22;
  atomic<FRHIShader_*> this_00;
  FMaterialShaderType *pFVar23;
  atomic<FRHIShader_*> aVar24;
  atomic<FRHIShader_*> this_01;
  atomic<FRHIShader_*> aVar25;
  FShaderMapPointerTable *pFVar26;
  atomic<FRHIShader_*> aVar27;
  FRHIBatchedShaderParameters *pFVar28;
  atomic<FRHIShader_*> aVar29;
  IRHICommandContext *pIVar30;
  undefined8 *puVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_4c8 [32];
  TUniformBufferRef<FViewUniformShaderParameters> *local_480;
  atomic<FRHIShader_*> local_478;
  undefined1 local_468 [16];
  FMaterialRenderProxy *local_458;
  FAppleARKitVideoOverlay *local_450;
  undefined1 *local_448;
  FNameEntryId FStack_440;
  uint uStack_43c;
  wchar_t *local_438;
  undefined ***pppuStack_430;
  ERHIAccess local_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  int iStack_404;
  wchar_t *local_400;
  undefined ***pppuStack_3f8;
  ERHIAccess local_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  FMaterial *local_3d8;
  FRHIBreadcrumbScope local_3d0;
  char local_3c0;
  undefined **local_3b8;
  undefined8 *local_3b0;
  undefined4 local_3a8;
  undefined **local_3a0;
  undefined4 *local_398;
  undefined4 local_390;
  FRHIBreadcrumbScope local_388;
  char local_378;
  TVector2<double>_u_0 local_370;
  char *local_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 local_350;
  wchar_t *pwStack_348;
  char *local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  wchar_t *pwStack_328;
  TVector2<double>_u_0 local_318;
  TVector2<double>_u_0 local_308;
  TVector2<double>_u_0 local_2f8;
  FMetadataSerializer local_2e8;
  FMetadataSerializer local_2c8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  wchar_t *local_298;
  undefined ***pppuStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  wchar_t *local_260;
  undefined ***pppuStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  TVector2<double>_u_0 local_238;
  TVector2<double> local_228;
  TVector2<double> local_218;
  FGraphicsPipelineStateInitializer local_208;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (param_4 == (UMaterialInstanceDynamic *)0x0) {
    return;
  }
  local_450 = this;
  bVar17 = UObjectBase::IsValidLowLevel((UObjectBase *)param_4);
  if (!bVar17) {
    return;
  }
  aVar29 = (atomic<FRHIShader_*>)0x0;
  local_378 = '\0';
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (param_5) {
    if ((iVar2 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_360 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
      ;
      pwStack_348 = L"RenderVideoOverlay_Occlusion";
      uStack_358 = 300;
      ::Desc._padding_ = CONCAT44(uStack_354,300);
      local_350 = 0;
      ::Desc._padding_ = (longlong)u_VideoOverlay__O;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x52a8a7e0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FAppleARKitVideoOverlay::RenderVideoOverlayWithMaterial'::__l10::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar20 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar21 = FMemStackBase::Alloc(&pFVar20->Inner,0x50,8);
    pFVar21->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar21->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar21->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar21->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar21->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar21->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar21->Allocator = pFVar20;
    pFVar21->TraceCpuSpecId = 0;
    pFVar21->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar18 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar21->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar21->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar21->ID = uVar18;
    pFVar21->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BJ___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar21[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar17 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar17)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar19 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)::Desc._padding_,(uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar19;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_2e8);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)::Desc.TraceCpuSpecId,
                   (wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                   (wchar_t *)::Desc._padding_,&local_2e8.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_2e8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar21->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_388,(FRHIComputeCommandList *)param_1,pFVar21);
    local_378 = '\x01';
    local_3c0 = '\0';
  }
  else {
    local_3c0 = 0;
    if ((iVar2 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_340 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
      ;
      pwStack_328 = L"RenderVideoOverlay_Background";
      uStack_338 = 0x12d;
      ::Desc._padding_ = CONCAT44(uStack_334,0x12d);
      local_330 = 0;
      ::Desc._padding_ = (longlong)u_VideoOverlay__B;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x52a8a858;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FAppleARKitVideoOverlay::RenderVideoOverlayWithMaterial'::__l15::<lambda_2>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar20 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar21 = FMemStackBase::Alloc(&pFVar20->Inner,0x50,8);
    pFVar21->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar21->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar21->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar21->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar21->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar21->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar21->Allocator = pFVar20;
    pFVar21->TraceCpuSpecId = 0;
    pFVar21->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar18 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar21->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar21->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar21->ID = uVar18;
    pFVar21->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BK___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar21[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar17 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar17)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar19 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)::Desc._padding_,(uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar19;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_2c8);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)::Desc.TraceCpuSpecId,
                   (wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                   (wchar_t *)::Desc._padding_,&local_2c8.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_2c8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar21->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_3d0,(FRHIComputeCommandList *)param_1,pFVar21);
    local_3c0 = '\x01';
  }
  pFVar15 = local_450;
  pTVar1 = &local_450->OverlayVertexBufferRHI;
  if ((local_450->OverlayVertexBufferRHI).Reference == (FRHIBuffer *)0x0) {
    local_128 = ___xmm_3f800000000000003f80000000000000;
    uStack_120 = _UNK_15076b198;
    local_108 = ___xmm_3f800000000000000000000000000000;
    uStack_100 = _UNK_150689648;
    local_e8 = ___xmm_3f800000000000003f8000003f800000;
    uStack_e0 = _UNK_150a07f68;
    local_c8 = ___xmm_3f80000000000000000000003f800000;
    uStack_c0 = _UNK_15076b188;
    local_118 = 0;
    local_114 = 0x3f800000;
    local_f8 = 0;
    local_d8 = 0x3f800000;
    local_d4 = 0x3f800000;
    local_b8 = 0x3f800000;
    local_428 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
    local_3b8 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_430 = &local_3b8;
    local_438 = L"VideoOverlayVertexBuffer";
    uStack_43c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uStack_424 = 2;
    local_298 = L"VideoOverlayVertexBuffer";
    local_448 = &DAT_00000080;
    FStack_440.Value = 0x4001;
    uStack_2a0 = CONCAT44(uStack_43c,0x4001);
    uStack_420 = 0;
    local_418 = 0;
    local_2a8 = 0x80;
    local_288 = CONCAT44(2,local_428);
    local_3a8 = 0x80;
    local_278 = 0;
    uStack_280 = 0;
    local_3b0 = &local_128;
    pppuStack_290 = pppuStack_430;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_468);
    local_3b8 = &___7FResourceArrayUploadInterface__6B_;
    if (pTVar1 == (TRefCountPtr<FRHIBuffer> *)local_468) {
LAB_14cfdd307:
      if ((FRHIBuffer *)local_468._0_8_ != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_468._0_8_);
      }
    }
    else {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)local_468._0_8_;
      local_468._0_8_ = (FRHIBuffer *)0x0;
      if (pFVar4 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
        goto LAB_14cfdd307;
      }
    }
    local_318 = (TVector2<double>_u_0)
                *(TVector2<double>_u_0 *)&(param_3->Camera).ImageResolution.field0_0x0._s_0;
    uVar7 = local_318._0_4_;
    uVar8 = local_318._4_4_;
    uVar9 = local_318._8_4_;
    uVar10 = local_318._12_4_;
    dVar33 = (double)*(int *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0 + 8);
    dVar32 = (double)*(int *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0 + 0xc);
    local_370._s_0.X = dVar32;
    local_370._s_0.Y = dVar33;
    if (dVar32 < dVar33) {
      local_370._s_0.X = dVar33;
      local_370._s_0.Y = dVar32;
    }
    dVar11 = local_318._s_0.X;
    dVar12 = local_318._s_0.Y;
    TVar16 = local_318;
    if (dVar11 <= dVar12) {
      local_318._s_0.Y = dVar11;
      local_318._s_0.X = dVar12;
      TVar16 = local_238;
    }
    local_238 = TVar16;
    pTVar22 = UARUtilitiesFunctionLibrary::GetUVOffset
                        (&local_228,(TVector2<double> *)&local_370._s_0,
                         (TVector2<double> *)&local_318._s_0);
    dVar13 = (pTVar22->field0_0x0)._s_0.Y;
    pFVar15->UVOffsets[0].field0_0x0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
    pFVar15->UVOffsets[0].field0_0x0._s_0.Y = dVar13;
    local_2f8._s_0.X = dVar32;
    if (dVar33 < dVar32) {
      local_2f8._s_0.X = dVar33;
      dVar33 = dVar32;
    }
    local_308._0_4_ = uVar7;
    local_308._4_4_ = uVar8;
    local_308._8_4_ = uVar9;
    local_308._12_4_ = uVar10;
    if (dVar12 <= dVar11) {
      local_308._0_4_ = uVar9;
      local_308._4_4_ = uVar10;
      local_308._8_4_ = uVar7;
      local_308._12_4_ = uVar8;
    }
    local_2f8._s_0.Y = dVar33;
    pTVar22 = UARUtilitiesFunctionLibrary::GetUVOffset
                        (&local_218,(TVector2<double> *)&local_2f8._s_0,
                         (TVector2<double> *)&local_308._s_0);
    dVar33 = (pTVar22->field0_0x0)._s_0.Y;
    pFVar15->UVOffsets[1].field0_0x0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
    pFVar15->UVOffsets[1].field0_0x0._s_0.Y = dVar33;
  }
  pTVar1 = &pFVar15->IndexBufferRHI;
  if ((pFVar15->IndexBufferRHI).Reference == (FRHIBuffer *)0x0) {
    local_a8 = 0x10000;
    local_a4 = 0x20002;
    local_a0 = 0x30001;
    local_3f0 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
    local_3a0 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_3f8 = &local_3a0;
    uStack_40c = 2;
    iStack_404 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_400 = L"VideoOverlayIndexBuffer";
    uStack_3ec = 2;
    local_410 = 0xc;
    uStack_408 = 0x8001;
    local_270 = 0x20000000c;
    uStack_268 = CONCAT44(iStack_404,0x8001);
    uStack_3e8 = 0;
    local_260 = L"VideoOverlayIndexBuffer";
    local_3e0 = 0;
    local_250 = CONCAT44(2,local_3f0);
    local_390 = 0xc;
    local_240 = 0;
    uStack_248 = 0;
    local_398 = &local_a8;
    pppuStack_258 = pppuStack_3f8;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_468 + 8));
    local_3a0 = &___7FResourceArrayUploadInterface__6B_;
    if (pTVar1 != (TRefCountPtr<FRHIBuffer> *)(local_468 + 8)) {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)local_468._8_8_;
      local_468._8_8_ = (FRHIBuffer *)0x0;
      if (pFVar4 == (FRHIBuffer *)0x0) goto LAB_14cfdd560;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    if ((FRHIBuffer *)local_468._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_468._8_8_);
    }
  }
LAB_14cfdd560:
  TVar3 = param_2->FeatureLevel;
  GetRendererModule();
  local_458 = (FMaterialRenderProxy *)(**(code **)(param_4->_padding_ + 0x310))(param_4);
  local_3d8 = FMaterialRenderProxy::GetMaterialWithFallback(local_458,TVar3,&local_458);
  this_00 = (atomic<FRHIShader_*>)FMaterial::GetRenderingThreadShaderMap(local_3d8);
  if ((local_458->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap ==
      (FMaterialShaderMap *)0x0) {
    FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions
              ((FRHICommandListBase *)param_1,(FTaskHandle *)0x0);
  }
  local_208.RenderTargetsEnabled = 0;
  local_208.RenderTargetFormats.Elements[0] = '\0';
  local_208.RenderTargetFormats.Elements[1] = '\0';
  local_208.RenderTargetFormats.Elements[2] = '\0';
  local_208.RenderTargetFormats.Elements[3] = '\0';
  local_208.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_208.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_208.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_208.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_208.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_208.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_208.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_208.BlendState = (FRHIBlendState *)0x0;
  local_208.RasterizerState = (FRHIRasterizerState *)0x0;
  local_208.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_208.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_208.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_208.RenderTargetFlags.Elements[0] = None;
  local_208.RenderTargetFlags.Elements[1] = None;
  local_208.RenderTargetFlags.Elements[2] = None;
  local_208.RenderTargetFlags.Elements[3] = None;
  local_208.RenderTargetFlags.Elements[4] = None;
  local_208.RenderTargetFlags.Elements[5] = None;
  local_208.RenderTargetFlags.Elements[6] = None;
  local_208.RenderTargetFlags.Elements[7] = None;
  local_208.RenderTargetFormats.Elements[4] = '\0';
  local_208.RenderTargetFormats.Elements[5] = '\0';
  local_208.RenderTargetFormats.Elements[6] = '\0';
  local_208.RenderTargetFormats.Elements[7] = '\0';
  local_208.DepthStencilTargetFormat = PF_Unknown;
  local_208.DepthStencilTargetFlag = None;
  local_208.DepthTargetLoadAction = ENoAction;
  local_208.DepthTargetStoreAction = ENoAction;
  local_208.StencilTargetLoadAction = ENoAction;
  local_208.StencilTargetStoreAction = ENoAction;
  local_208.DepthStencilAccess.Value = DepthNop;
  local_208.NumSamples = 0;
  local_208.SubpassHint = None;
  local_208.SubpassIndex = '\0';
  local_208.ConservativeRasterization = Disabled;
  local_208.bDepthBounds = false;
  local_208.MultiViewCount = '\0';
  local_208.bHasFragmentDensityAttachment = false;
  local_208.bAllowVariableRateShading = true;
  local_208.ShadingRate = VRSSR_1x1;
  local_208.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_208.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_208);
  local_208.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (param_5) {
    local_208.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_208.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
  }
  else {
    local_208.BlendState =
         TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_208.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
  }
  local_208.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_208.PrimitiveType = PT_TriangleList;
  local_478 = this_00;
  if ((int)TVar3 < 2) {
    pFVar23 = TARKitCameraOverlayVS<1>::GetStaticType();
    aVar24 = (atomic<FRHIShader_*>)
             FShaderMapContent::GetShader
                       (*(FShaderMapContent **)((longlong)this_00 + 0x28),
                        (FHashedName *)&pFVar23->field_0x28,0);
    aVar27 = this_00;
    if ((aVar24 == (atomic<FRHIShader_*>)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                            ,0x17f,L""), aVar27 = aVar29, aVar24 = aVar29, bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = TARKitCameraOverlayPS<1>::GetStaticType();
    this_01 = (atomic<FRHIShader_*>)
              FShaderMapContent::GetShader
                        (*(FShaderMapContent **)((longlong)this_00 + 0x28),
                         (FHashedName *)&pFVar23->field_0x28,0);
    if (this_01 == (atomic<FRHIShader_*>)0x0) {
      local_478 = (atomic<FRHIShader_*>)0x0;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                          ,0x181,L"");
      this_01 = aVar29;
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    aVar25 = aVar29;
    if (aVar24 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)aVar27 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar25 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)aVar24 + 0xd4)];
      if ((aVar25 == (atomic<FRHIShader_*>)0x0) &&
         (aVar25 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)aVar24 + 0xd4),true),
         aVar25 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)aVar27);
          FShader::GetType((FShader *)aVar24,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMaterialShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar25 = (atomic<FRHIShader_*>)0x0;
      }
    }
    aVar27 = aVar29;
    local_208.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar25;
    if (this_01 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)local_478 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar27 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)this_01 + 0xd4)];
      if ((aVar27 == (atomic<FRHIShader_*>)0x0) &&
         (aVar27 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)this_01 + 0xd4),true),
         aVar27 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)local_478);
          FShader::GetType((FShader *)this_01,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMaterialShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar27 = (atomic<FRHIShader_*>)0x0;
      }
    }
    local_208.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar27;
    SetGraphicsPipelineState(param_1,&local_208,0,CheckApply,true);
    aVar27 = aVar29;
    if (aVar24 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)this_00 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar27 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)aVar24 + 0xd4)];
      if ((aVar27 == (atomic<FRHIShader_*>)0x0) &&
         (aVar27 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)aVar24 + 0xd4),true),
         aVar27 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if ((*(longlong *)((longlong)this_00 + 0x18) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FShader::GetType((FShader *)aVar24,*(FShaderMapPointerTable **)((longlong)this_00 + 0x18))
          ;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TARKitCameraOverlayVS<1>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar27 = (atomic<FRHIShader_*>)0x0;
      }
    }
    pFVar28 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    UE::Renderer::PostProcess::SetDrawRectangleParameters(pFVar28,(FShader *)aVar24,param_2);
    FMaterialShader::SetViewParameters
              ((FMaterialShader *)aVar24,pFVar28,param_2,&param_2->ViewUniformBuffer);
    FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)aVar27,pFVar28);
    if (this_01 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)this_00 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar29 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)this_01 + 0xd4)];
      if ((aVar29 == (atomic<FRHIShader_*>)0x0) &&
         (aVar29 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)this_01 + 0xd4),true),
         aVar29 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if ((*(longlong *)((longlong)this_00 + 0x18) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FShader::GetType((FShader *)this_01,*(FShaderMapPointerTable **)((longlong)this_00 + 0x18)
                          );
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TARKitCameraOverlayPS<1>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar29 = (atomic<FRHIShader_*>)0x0;
      }
    }
    pFVar28 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  }
  else {
    pFVar23 = TARKitCameraOverlayVS<0>::GetStaticType();
    aVar24 = (atomic<FRHIShader_*>)
             FShaderMapContent::GetShader
                       (*(FShaderMapContent **)((longlong)this_00 + 0x28),
                        (FHashedName *)&pFVar23->field_0x28,0);
    aVar27 = this_00;
    if ((aVar24 == (atomic<FRHIShader_*>)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                            ,0x188,L""), aVar27 = aVar29, aVar24 = aVar29, bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = TARKitCameraOverlayPS<0>::GetStaticType();
    this_01 = (atomic<FRHIShader_*>)
              FShaderMapContent::GetShader
                        (*(FShaderMapContent **)((longlong)this_00 + 0x28),
                         (FHashedName *)&pFVar23->field_0x28,0);
    if (this_01 == (atomic<FRHIShader_*>)0x0) {
      local_478 = (atomic<FRHIShader_*>)0x0;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                          ,0x18a,L"");
      this_01 = aVar29;
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    aVar25 = aVar29;
    if (aVar24 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)aVar27 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar25 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)aVar24 + 0xd4)];
      if ((aVar25 == (atomic<FRHIShader_*>)0x0) &&
         (aVar25 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)aVar24 + 0xd4),true),
         aVar25 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)aVar27);
          FShader::GetType((FShader *)aVar24,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMaterialShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar25 = (atomic<FRHIShader_*>)0x0;
      }
    }
    aVar27 = aVar29;
    local_208.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar25;
    if (this_01 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)local_478 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar27 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)this_01 + 0xd4)];
      if ((aVar27 == (atomic<FRHIShader_*>)0x0) &&
         (aVar27 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)this_01 + 0xd4),true),
         aVar27 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)local_478);
          FShader::GetType((FShader *)this_01,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMaterialShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar27 = (atomic<FRHIShader_*>)0x0;
      }
    }
    local_208.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar27;
    SetGraphicsPipelineState(param_1,&local_208,0,CheckApply,true);
    aVar27 = aVar29;
    if (aVar24 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)this_00 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar27 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)aVar24 + 0xd4)];
      if ((aVar27 == (atomic<FRHIShader_*>)0x0) &&
         (aVar27 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)aVar24 + 0xd4),true),
         aVar27 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)this_00);
          FShader::GetType((FShader *)aVar24,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TARKitCameraOverlayVS<0>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar27 = (atomic<FRHIShader_*>)0x0;
      }
    }
    pFVar28 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    UE::Renderer::PostProcess::SetDrawRectangleParameters(pFVar28,(FShader *)aVar24,param_2);
    FMaterialShader::SetViewParameters
              ((FMaterialShader *)aVar24,pFVar28,param_2,&param_2->ViewUniformBuffer);
    FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)aVar27,pFVar28);
    if (this_01 != (atomic<FRHIShader_*>)0x0) {
      pFVar5 = *(FShaderMapResource **)((longlong)this_00 + 8);
      if ((pFVar5 == (FShaderMapResource *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar29 = (pFVar5->RHIShaders).Ptr[*(int *)((longlong)this_01 + 0xd4)];
      if ((aVar29 == (atomic<FRHIShader_*>)0x0) &&
         (aVar29 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar5,*(int *)((longlong)this_01 + 0xd4),true),
         aVar29 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          pFVar26 = FShaderMapBase::GetPointerTable((FShaderMapBase *)this_00);
          FShader::GetType((FShader *)this_01,pFVar26);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TARKitCameraOverlayPS<0>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar29 = (atomic<FRHIShader_*>)0x0;
      }
    }
    pFVar28 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  }
  pFVar14 = local_458;
  local_480 = &param_2->ViewUniformBuffer;
  FMaterialShader::SetViewParameters((FMaterialShader *)this_01,pFVar28,param_2,local_480);
  FMaterialShader::SetParameters((FMaterialShader *)this_01,pFVar28,pFVar14,local_3d8,param_2);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)aVar29,pFVar28);
  pFVar15 = local_450;
  pFVar4 = (local_450->OverlayVertexBufferRHI).Reference;
  if ((pFVar4 != (FRHIBuffer *)0x0) && ((local_450->IndexBufferRHI).Reference != (FRHIBuffer *)0x0))
  {
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar31;
      *(undefined8 **)&param_1->field_0x30 = puVar31 + 1;
      puVar31[1] = 0;
      *puVar31 = &___7FRHICommandSetStreamSource__6B_;
      *(undefined4 *)(puVar31 + 2) = 0;
      puVar31[3] = pFVar4;
      *(undefined4 *)(puVar31 + 4) = 0;
    }
    else {
      pIVar30 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar30->_padding_ + 0x198))(pIVar30,0,pFVar4,0);
    }
    pFVar4 = (pFVar15->IndexBufferRHI).Reference;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar31;
      *(undefined8 **)&param_1->field_0x30 = puVar31 + 1;
      puVar31[1] = 0;
      *puVar31 = &___7FRHICommandDrawIndexedPrimitive__6B_;
      puVar31[2] = pFVar4;
      puVar31[3] = 0;
      puVar31[4] = 4;
      *(undefined4 *)(puVar31 + 5) = 2;
      *(undefined4 *)((longlong)puVar31 + 0x2c) = 1;
    }
    else {
      pIVar30 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar30->_padding_ + 0x1f8))(pIVar30,pFVar4,0,0);
    }
  }
  if (local_3c0 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_3d0);
  }
  if (local_378 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_388);
  }
  return;
}

// RenderVideoOverlay_RenderThread @ 14cfde070

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
FAppleARKitVideoOverlay::RenderVideoOverlay_RenderThread
          (FAppleARKitVideoOverlay *this,FRHICommandList *param_1,FSceneView *param_2,
          FAppleARKitFrame *param_3,float param_4)

{
  longlong lVar1;
  UMaterialInstanceDynamic *pUVar2;
  
  pUVar2 = (this->MID_CameraOverlay).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  if ((GDebugOverlayMode == 5) && (this->OcclusionType == SceneDepth)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (this->MID_SceneDepthColoration).field0_0x0.DebugPtr,
       pUVar2 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (this->MID_SceneDepthColoration).field0_0x0.DebugPtr;
  }
  RenderVideoOverlayWithMaterial(this,param_1,param_2,param_3,pUVar2,false);
  if (GDebugOverlayMode == 0) {
    if (this->OcclusionType == PersonSegmentation) {
      lVar1 = 0x30;
      if (this->bOcclusionDepthTextureRecentlyUpdated == false) {
        lVar1 = 0x38;
      }
      pUVar2 = *(UMaterialInstanceDynamic **)((longlong)this->UVOffsets + lVar1 + -0x78);
      UARUtilitiesFunctionLibrary::UpdateWorldToMeterScale(pUVar2,param_4);
      RenderVideoOverlayWithMaterial(this,param_1,param_2,param_3,pUVar2,true);
      this->bOcclusionDepthTextureRecentlyUpdated = false;
    }
    else if (this->OcclusionType == SceneDepth) {
      UARUtilitiesFunctionLibrary::UpdateWorldToMeterScale
                ((this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr,param_4);
      RenderVideoOverlayWithMaterial
                (this,param_1,param_2,param_3,(this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr,
                 true);
    }
  }
  return;
}

// SetOcclusionType @ 14cfde8d0

void __thiscall
FAppleARKitVideoOverlay::SetOcclusionType(FAppleARKitVideoOverlay *this,EARKitOcclusionType param_1)

{
  return;
}

// SetOverlayTexture @ 14cfde8e0

void __thiscall
FAppleARKitVideoOverlay::SetOverlayTexture
          (FAppleARKitVideoOverlay *this,UARTextureCameraImage *param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  float fVar2;
  UAppleARKitOcclusionTexture *pUVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UARTextureCameraImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  fVar2 = __real_3f800000;
  (this->CameraTexture).field0_0x0.DebugPtr = param_1;
  UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
            ((this->MID_CameraOverlay).field0_0x0.DebugPtr,(UTexture *)param_1,fVar2);
  UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
            ((this->MID_DepthOcclusionOverlay).field0_0x0.DebugPtr,(UTexture *)param_1,fVar2);
  UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
            ((this->MID_MatteOcclusionOverlay).field0_0x0.DebugPtr,(UTexture *)param_1,fVar2);
  UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
            ((this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr,(UTexture *)param_1,fVar2);
  pUVar1 = (this->MID_CameraOverlay).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
    if (GDebugOverlayMode == 0) {
      pUVar3 = (UAppleARKitOcclusionTexture *)(this->CameraTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 1) {
      pUVar3 = (this->OcclusionMatteTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 2) {
      pUVar3 = (this->OcclusionDepthTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 3) {
      pUVar3 = (UAppleARKitOcclusionTexture *)(this->SceneDepthTexture).field0_0x0.DebugPtr;
    }
    else {
      if (GDebugOverlayMode != 4) {
        return;
      }
      pUVar3 = (UAppleARKitOcclusionTexture *)
               (this->SceneDepthConfidenceTexture).field0_0x0.DebugPtr;
    }
    if (pUVar3 != (UAppleARKitOcclusionTexture *)0x0) {
      UARUtilitiesFunctionLibrary::UpdateCameraTextureParam(pUVar1,(UTexture *)pUVar3,fVar2);
    }
  }
  return;
}

// UpdateDebugOverlay @ 14cfdf800

void __thiscall FAppleARKitVideoOverlay::UpdateDebugOverlay(FAppleARKitVideoOverlay *this)

{
  UMaterialInstanceDynamic *pUVar1;
  UAppleARKitOcclusionTexture *pUVar2;
  
  pUVar1 = (this->MID_CameraOverlay).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
    if (GDebugOverlayMode == 0) {
      pUVar2 = (UAppleARKitOcclusionTexture *)(this->CameraTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 1) {
      pUVar2 = (this->OcclusionMatteTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 2) {
      pUVar2 = (this->OcclusionDepthTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 3) {
      pUVar2 = (UAppleARKitOcclusionTexture *)(this->SceneDepthTexture).field0_0x0.DebugPtr;
    }
    else {
      if (GDebugOverlayMode != 4) {
        return;
      }
      pUVar2 = (UAppleARKitOcclusionTexture *)
               (this->SceneDepthConfidenceTexture).field0_0x0.DebugPtr;
    }
    if (pUVar2 != (UAppleARKitOcclusionTexture *)0x0) {
      UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
                (pUVar1,(UTexture *)pUVar2,__real_3f800000);
      return;
    }
  }
  return;
}

// UpdateOcclusionTextures @ 14cfdfbe0

void __thiscall
FAppleARKitVideoOverlay::UpdateOcclusionTextures
          (FAppleARKitVideoOverlay *this,FAppleARKitFrame *param_1)

{
  return;
}

// UpdateSceneDepthTextures @ 14cfdfbf0

void __thiscall
FAppleARKitVideoOverlay::UpdateSceneDepthTextures
          (FAppleARKitVideoOverlay *this,UTexture *param_1,UTexture *param_2)

{
  UMaterialInstanceDynamic *pUVar1;
  
  if ((this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&DepthConfidenceTextureParamName,L"DepthConfidenceTexture");
      _Init_thread_footer(&::_TSS0);
    }
    UARUtilitiesFunctionLibrary::UpdateSceneDepthTexture
              ((this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr,param_1,__real_3f800000);
    UMaterialInstanceDynamic::SetTextureParameterValue
              ((this->MID_SceneDepthOcclusion).field0_0x0.DebugPtr,DepthConfidenceTextureParamName,
               param_2);
  }
  pUVar1 = (this->MID_SceneDepthColoration).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
    UARUtilitiesFunctionLibrary::UpdateSceneDepthTexture(pUVar1,param_1,__real_3f800000);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SceneDepthTexture).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->SceneDepthConfidenceTexture).field0_0x0.DebugPtr = param_2;
  pUVar1 = (this->MID_CameraOverlay).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
    if (GDebugOverlayMode == 0) {
      param_2 = (UTexture *)(this->CameraTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 1) {
      param_2 = (UTexture *)(this->OcclusionMatteTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 2) {
      param_2 = (UTexture *)(this->OcclusionDepthTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode == 3) {
      param_2 = (this->SceneDepthTexture).field0_0x0.DebugPtr;
    }
    else if (GDebugOverlayMode != 4) {
      return;
    }
    if ((UAppleARKitOcclusionTexture *)param_2 != (UAppleARKitOcclusionTexture *)0x0) {
      UARUtilitiesFunctionLibrary::UpdateCameraTextureParam(pUVar1,param_2,__real_3f800000);
    }
  }
  return;
}

// UpdateVideoTextures @ 14cfdfd60

void __thiscall
FAppleARKitVideoOverlay::UpdateVideoTextures
          (FAppleARKitVideoOverlay *this,FAppleARKitFrame *param_1)

{
  return;
}

