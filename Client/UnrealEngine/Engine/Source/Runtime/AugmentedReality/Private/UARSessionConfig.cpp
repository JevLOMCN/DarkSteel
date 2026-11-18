// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 90

// StaticClass @ 14cf353e0

UClass * __cdecl UARSessionConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSessionConfig",
               &Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton,
               StaticRegisterNativesUARSessionConfig,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARSessionConfig>,
               InternalVTableHelperCtorCaller<UARSessionConfig>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton;
}

// UARSessionConfig @ 14cf42750

UARSessionConfig * __thiscall
UARSessionConfig::UARSessionConfig(UARSessionConfig *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bUsePersonSegmentationForOcclusion = true;
  this->bUseSceneDepthForOcclusion = false;
  this->bUseAutomaticImageScaleEstimation = true;
  this->bUseStandardOnboardingUX = false;
  this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
  (this->CandidateImages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateImages).ArrayNum = 0;
  (this->CandidateImages).ArrayMax = 0;
  (this->WorldMapData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapData).ArrayNum = 0;
  (this->WorldMapData).ArrayMax = 0;
  (this->CandidateObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateObjects).ArrayNum = 0;
  (this->CandidateObjects).ArrayMax = 0;
  (this->DesiredVideoFormat).FPS = 0;
  (this->DesiredVideoFormat).Width = 0;
  (this->DesiredVideoFormat).Height = 0;
  (this->SerializedARCandidateImageDatabase).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SerializedARCandidateImageDatabase).ArrayNum = 0;
  (this->SerializedARCandidateImageDatabase).ArrayMax = 0;
  this->EnabledSessionTrackingFeature = None;
  this->SceneReconstructionMethod = None;
  (this->PlaneComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PointComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->FaceComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ImageComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->QRCodeComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PoseComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EnvironmentProbeComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MeshComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GeoAnchorComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->bUseOptimalVideoFormat = true;
  this->MaxNumberOfTrackedFaces = 1;
  return this;
}

// UARSessionConfig @ 14cf42820

UARSessionConfig * __thiscall UARSessionConfig::UARSessionConfig(UARSessionConfig *this)

{
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  UMaterial *pUVar3;
  
  pFVar1 = FObjectInitializer::Get();
  UDataAsset::UDataAsset((UDataAsset *)this,pFVar1);
  this->bTrackSceneObjects = true;
  this->bUsePersonSegmentationForOcclusion = true;
  this->bUseSceneDepthForOcclusion = false;
  this->bUseAutomaticImageScaleEstimation = true;
  this->bUseStandardOnboardingUX = false;
  this->WorldAlignment = Gravity;
  this->SessionType = World;
  this->PlaneDetectionMode_DEPRECATED = HorizontalPlaneDetection;
  this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
  (this->CandidateImages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateImages).ArrayNum = 0;
  (this->CandidateImages).ArrayMax = 0;
  (this->WorldMapData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapData).ArrayNum = 0;
  (this->WorldMapData).ArrayMax = 0;
  (this->CandidateObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateObjects).ArrayNum = 0;
  (this->CandidateObjects).ArrayMax = 0;
  (this->DesiredVideoFormat).FPS = 0;
  (this->DesiredVideoFormat).Width = 0;
  (this->DesiredVideoFormat).Height = 0;
  (this->SerializedARCandidateImageDatabase).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SerializedARCandidateImageDatabase).ArrayNum = 0;
  (this->SerializedARCandidateImageDatabase).ArrayMax = 0;
  this->bHorizontalPlaneDetection = true;
  this->bVerticalPlaneDetection = true;
  this->bEnableAutoFocus = true;
  this->LightEstimationMode = AmbientLightEstimate;
  this->FrameSyncMode = SyncTickWithCameraImage;
  this->bEnableAutomaticCameraOverlay = true;
  this->bEnableAutomaticCameraTracking = true;
  this->bResetCameraTracking = true;
  this->bResetTrackedObjects = true;
  this->MaxNumSimultaneousImagesTracked = 1;
  this->bUseOptimalVideoFormat = true;
  this->MaxNumberOfTrackedFaces = 1;
  this->EnabledSessionTrackingFeature = None;
  this->SceneReconstructionMethod = None;
  pUVar2 = UARPlaneComponent::StaticClass();
  (this->PlaneComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARPointComponent::StaticClass();
  (this->PointComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARFaceComponent::StaticClass();
  (this->FaceComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARImageComponent::StaticClass();
  (this->ImageComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARTrackedQRCode::StaticClass();
  (this->QRCodeComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARPoseComponent::StaticClass();
  (this->PoseComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UAREnvironmentProbeComponent::StaticClass();
  (this->EnvironmentProbeComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARObjectComponent::StaticClass();
  (this->ObjectComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARMeshComponent::StaticClass();
  (this->MeshComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARGeoAnchorComponent::StaticClass();
  (this->GeoAnchorComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar3;
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar3;
  return this;
}

// ~UARSessionConfig @ 14cf44800

void __thiscall UARSessionConfig::~UARSessionConfig(UARSessionConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
  pFVar1 = (this->SerializedARCandidateImageDatabase).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldMapData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateImages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// AddCandidateImage @ 14cf495d0

void __thiscall
UARSessionConfig::AddCandidateImage(UARSessionConfig *this,UARCandidateImage *param_1)

{
  TArray<TObjectPtr<UARCandidateImage>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UARCandidateImage *local_18 [2];
  
  pTVar1 = &this->CandidateImages;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UARCandidateImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->CandidateImages).ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CandidateImages).ArrayNum;
  piVar2 = &(this->CandidateImages).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->CandidateImages).ArrayNum = iVar6 + 1;
  *(UARCandidateImage **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UARCandidateImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddCandidateObject @ 14cf496c0

void __thiscall
UARSessionConfig::AddCandidateObject(UARSessionConfig *this,UARCandidateObject *param_1)

{
  TArray<TObjectPtr<UARCandidateObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UARCandidateObject *local_18 [2];
  
  if (param_1 != (UARCandidateObject *)0x0) {
    pTVar1 = &this->CandidateObjects;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(this->CandidateObjects).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->CandidateObjects).ArrayNum;
    piVar2 = &(this->CandidateObjects).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->CandidateObjects).ArrayNum = iVar6 + 1;
    *(UARCandidateObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UARCandidateObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// ClearCandidateImages @ 14cf4bc80

void __thiscall UARSessionConfig::ClearCandidateImages(UARSessionConfig *this)

{
  int *piVar1;
  
  piVar1 = &(this->CandidateImages).ArrayMax;
  (this->CandidateImages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CandidateImages).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetCandidateImageList @ 14cf507c0

TArray<UARCandidateImage_*,TSizedDefaultAllocator<32>_> * __thiscall
UARSessionConfig::GetCandidateImageList(UARSessionConfig *this)

{
  return (TArray<UARCandidateImage_*,TSizedDefaultAllocator<32>_> *)&this->CandidateImages;
}

// GetCandidateObjectList @ 14cf509b0

TArray<UARCandidateObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UARSessionConfig::GetCandidateObjectList(UARSessionConfig *this)

{
  return (TArray<UARCandidateObject_*,TSizedDefaultAllocator<32>_> *)&this->CandidateObjects;
}

// GetDesiredVideoFormat @ 14cf50ba0

FARVideoFormat * __thiscall
UARSessionConfig::GetDesiredVideoFormat
          (UARSessionConfig *this,FARVideoFormat *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->DesiredVideoFormat).Height;
  iVar2 = (this->DesiredVideoFormat).Width;
  __return_storage_ptr__->FPS = (this->DesiredVideoFormat).FPS;
  __return_storage_ptr__->Width = iVar2;
  __return_storage_ptr__->Height = iVar1;
  return __return_storage_ptr__;
}

// GetEnabledSessionTrackingFeature @ 14cf50be0

EARSessionTrackingFeature __thiscall
UARSessionConfig::GetEnabledSessionTrackingFeature(UARSessionConfig *this)

{
  return this->EnabledSessionTrackingFeature;
}

// GetEnvironmentCaptureProbeType @ 14cf50bf0

EAREnvironmentCaptureProbeType __thiscall
UARSessionConfig::GetEnvironmentCaptureProbeType(UARSessionConfig *this)

{
  return this->EnvironmentCaptureProbeType;
}

// GetEnvironmentProbeComponentClass @ 14cf50c10

UClass * __thiscall UARSessionConfig::GetEnvironmentProbeComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->EnvironmentProbeComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UAREnvironmentProbeComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->EnvironmentProbeComponentClass).Class.field0_0x0.DebugPtr,
         pUVar4 != (UClass *)0x0)) {
        pUVar3 = UAREnvironmentProbeComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->EnvironmentProbeComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UAREnvironmentProbeComponent::StaticClass();
  return pUVar4;
}

// GetFaceComponentClass @ 14cf50da0

UClass * __thiscall UARSessionConfig::GetFaceComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->FaceComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARFaceComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->FaceComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
        pUVar3 = UARFaceComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->FaceComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARFaceComponent::StaticClass();
  return pUVar4;
}

// GetFaceTrackingDirection @ 14cf50e60

EARFaceTrackingDirection __thiscall
UARSessionConfig::GetFaceTrackingDirection(UARSessionConfig *this)

{
  return this->FaceTrackingDirection;
}

// GetFaceTrackingUpdate @ 14cf50e70

EARFaceTrackingUpdate __thiscall UARSessionConfig::GetFaceTrackingUpdate(UARSessionConfig *this)

{
  return this->FaceTrackingUpdate;
}

// GetFrameSyncMode @ 14cf50e80

EARFrameSyncMode __thiscall UARSessionConfig::GetFrameSyncMode(UARSessionConfig *this)

{
  return this->FrameSyncMode;
}

// GetGeoAnchorComponentClass @ 14cf50f80

UClass * __thiscall UARSessionConfig::GetGeoAnchorComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->GeoAnchorComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARGeoAnchorComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->GeoAnchorComponentClass).Class.field0_0x0.DebugPtr,
         pUVar4 != (UClass *)0x0)) {
        pUVar3 = UARGeoAnchorComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->GeoAnchorComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARGeoAnchorComponent::StaticClass();
  return pUVar4;
}

// GetImageComponentClass @ 14cf512b0

UClass * __thiscall UARSessionConfig::GetImageComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->ImageComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARImageComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->ImageComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0))
      {
        pUVar3 = UARImageComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->ImageComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARImageComponent::StaticClass();
  return pUVar4;
}

// GetLightEstimationMode @ 14cf51d30

EARLightEstimationMode __thiscall UARSessionConfig::GetLightEstimationMode(UARSessionConfig *this)

{
  return this->LightEstimationMode;
}

// GetMaxNumSimultaneousImagesTracked @ 14cf52470

int __thiscall UARSessionConfig::GetMaxNumSimultaneousImagesTracked(UARSessionConfig *this)

{
  return this->MaxNumSimultaneousImagesTracked;
}

// GetMeshComponentClass @ 14cf52480

UClass * __thiscall UARSessionConfig::GetMeshComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->MeshComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARMeshComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->MeshComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
        pUVar3 = UARMeshComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->MeshComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARMeshComponent::StaticClass();
  return pUVar4;
}

// GetObjectComponentClass @ 14cf53090

UClass * __thiscall UARSessionConfig::GetObjectComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->ObjectComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARObjectComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->ObjectComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0))
      {
        pUVar3 = UARObjectComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->ObjectComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARObjectComponent::StaticClass();
  return pUVar4;
}

// GetPlaneComponentClass @ 14cf534a0

UClass * __thiscall UARSessionConfig::GetPlaneComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->PlaneComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARPlaneComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->PlaneComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0))
      {
        pUVar3 = UARPlaneComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->PlaneComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARPlaneComponent::StaticClass();
  return pUVar4;
}

// GetPlaneDetectionMode @ 14cf53560

EARPlaneDetectionMode __thiscall UARSessionConfig::GetPlaneDetectionMode(UARSessionConfig *this)

{
  return -(this->bVerticalPlaneDetection != false) & VerticalPlaneDetection |
         this->bHorizontalPlaneDetection != false;
}

// GetPointComponentClass @ 14cf536e0

UClass * __thiscall UARSessionConfig::GetPointComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->PointComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARPointComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->PointComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0))
      {
        pUVar3 = UARPointComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->PointComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARPointComponent::StaticClass();
  return pUVar4;
}

// GetPoseComponentClass @ 14cf537a0

UClass * __thiscall UARSessionConfig::GetPoseComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->PoseComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARPoseComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->PoseComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
        pUVar3 = UARPoseComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->PoseComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARPoseComponent::StaticClass();
  return pUVar4;
}

// GetPrivateStaticClass @ 14cf55260

UClass * __cdecl UARSessionConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSessionConfig",
               &Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton,
               StaticRegisterNativesUARSessionConfig,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARSessionConfig>,
               InternalVTableHelperCtorCaller<UARSessionConfig>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton;
}

// GetQRCodeComponentClass @ 14cf55e30

UClass * __thiscall UARSessionConfig::GetQRCodeComponentClass(UARSessionConfig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->QRCodeComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UARQRCodeComponent::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar4 = (this->QRCodeComponentClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0))
      {
        pUVar3 = UARQRCodeComponent::StaticClass();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return (this->QRCodeComponentClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = UARQRCodeComponent::StaticClass();
  return pUVar4;
}

// GetSceneReconstructionMethod @ 14cf55f60

EARSceneReconstruction __thiscall
UARSessionConfig::GetSceneReconstructionMethod(UARSessionConfig *this)

{
  return this->SceneReconstructionMethod;
}

// GetSerializedARCandidateImageDatabase @ 14cf55f70

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UARSessionConfig::GetSerializedARCandidateImageDatabase(UARSessionConfig *this)

{
  return &this->SerializedARCandidateImageDatabase;
}

// GetSessionType @ 14cf560f0

EARSessionType __thiscall UARSessionConfig::GetSessionType(UARSessionConfig *this)

{
  return this->SessionType;
}

// GetWorldAlignment @ 14cf56790

EARWorldAlignment __thiscall UARSessionConfig::GetWorldAlignment(UARSessionConfig *this)

{
  return this->WorldAlignment;
}

// GetWorldMapData @ 14cf567a0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UARSessionConfig::GetWorldMapData(UARSessionConfig *this)

{
  return &this->WorldMapData;
}

// RemoveCandidateImage @ 14cf5c2a0

void __thiscall
UARSessionConfig::RemoveCandidateImage(UARSessionConfig *this,UARCandidateImage *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UARCandidateImage *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UARCandidateImage *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UARCandidateImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->CandidateImages).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->CandidateImages).ArrayMax * 8
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->CandidateImages).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->CandidateImages).AllocatorInstance.Data;
    bVar4 = *(UARCandidateImage **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UARCandidateImage **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->CandidateImages).ArrayNum = iVar9;
  }
  return;
}

// RemoveCandidateImageAtIndex @ 14cf5c430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARSessionConfig::RemoveCandidateImageAtIndex(UARSessionConfig *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->CandidateImages).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->CandidateImages).ArrayNum + ~param_1;
    _Dst = (this->CandidateImages).AllocatorInstance.Data + (longlong)param_1 * 8;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
    }
    piVar1 = &(this->CandidateImages).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->CandidateImages).AllocatorInstance,(this->CandidateImages).ArrayNum,
               &(this->CandidateImages).ArrayMax);
    return;
  }
  if (2 < (byte)LogBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    return;
  }
  return;
}

// Serialize @ 14cf5d560

void __thiscall UARSessionConfig::Serialize(UARSessionConfig *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVRObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FVRObjectVersion::GUID);
  if ((iVar1 < 2) && (this->PlaneDetectionMode_DEPRECATED == None)) {
    this->bHorizontalPlaneDetection = false;
    this->bVerticalPlaneDetection = false;
  }
  return;
}

// Serialize @ 14cf5d5c0

void __thiscall UARSessionConfig::Serialize(UARSessionConfig *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FVRObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  iVar1 = FArchiveState::CustomVer(this_00,&FVRObjectVersion::GUID);
  if ((iVar1 < 2) && (this->PlaneDetectionMode_DEPRECATED == None)) {
    this->bHorizontalPlaneDetection = false;
    this->bVerticalPlaneDetection = false;
  }
  return;
}

// SetCandidateObjectList @ 14cf5fad0

void __thiscall
UARSessionConfig::SetCandidateObjectList
          (UARSessionConfig *this,TArray<UARCandidateObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  piVar1 = &(this->CandidateObjects).ArrayMax;
  (this->CandidateObjects).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&(this->CandidateObjects).AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UARCandidateObject>,UARCandidateObject_*,int>
            ((this->CandidateObjects).AllocatorInstance.Data,(UARCandidateObject **)pFVar3,iVar2);
  return;
}

// SetDesiredVideoFormat @ 14cf5fb60

void __thiscall
UARSessionConfig::SetDesiredVideoFormat(UARSessionConfig *this,FARVideoFormat *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1->Width;
  iVar1 = param_1->Height;
  (this->DesiredVideoFormat).FPS = param_1->FPS;
  (this->DesiredVideoFormat).Width = iVar2;
  (this->DesiredVideoFormat).Height = iVar1;
  return;
}

// SetEnableAutoFocus @ 14cf5fb80

void __thiscall UARSessionConfig::SetEnableAutoFocus(UARSessionConfig *this,bool param_1)

{
  this->bEnableAutoFocus = param_1;
  return;
}

// SetFaceTrackingDirection @ 14cf5fd70

void __thiscall
UARSessionConfig::SetFaceTrackingDirection(UARSessionConfig *this,EARFaceTrackingDirection param_1)

{
  this->FaceTrackingDirection = param_1;
  return;
}

// SetFaceTrackingUpdate @ 14cf5fd80

void __thiscall
UARSessionConfig::SetFaceTrackingUpdate(UARSessionConfig *this,EARFaceTrackingUpdate param_1)

{
  this->FaceTrackingUpdate = param_1;
  return;
}

// SetResetCameraTracking @ 14cf60890

void __thiscall UARSessionConfig::SetResetCameraTracking(UARSessionConfig *this,bool param_1)

{
  this->bResetCameraTracking = param_1;
  return;
}

// SetResetTrackedObjects @ 14cf608a0

void __thiscall UARSessionConfig::SetResetTrackedObjects(UARSessionConfig *this,bool param_1)

{
  this->bResetTrackedObjects = param_1;
  return;
}

// SetSceneReconstructionMethod @ 14cf608b0

void __thiscall
UARSessionConfig::SetSceneReconstructionMethod
          (UARSessionConfig *this,EARSceneReconstruction param_1)

{
  this->SceneReconstructionMethod = param_1;
  return;
}

// SetSessionTrackingFeatureToEnable @ 14cf608c0

void __thiscall
UARSessionConfig::SetSessionTrackingFeatureToEnable
          (UARSessionConfig *this,EARSessionTrackingFeature param_1)

{
  this->EnabledSessionTrackingFeature = param_1;
  return;
}

// SetWorldMapData @ 14cf60950

void __thiscall
UARSessionConfig::SetWorldMapData
          (UARSessionConfig *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->WorldMapData;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorldMapData).ArrayNum = param_1->ArrayNum;
    (this->WorldMapData).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ShouldEnableAutoFocus @ 14cf609c0

bool __thiscall UARSessionConfig::ShouldEnableAutoFocus(UARSessionConfig *this)

{
  return this->bEnableAutoFocus;
}

// ShouldEnableCameraTracking @ 14cf609d0

bool __thiscall UARSessionConfig::ShouldEnableCameraTracking(UARSessionConfig *this)

{
  return this->bEnableAutomaticCameraTracking;
}

// ShouldRenderCameraOverlay @ 14cf609e0

bool __thiscall UARSessionConfig::ShouldRenderCameraOverlay(UARSessionConfig *this)

{
  return this->bEnableAutomaticCameraOverlay;
}

// ShouldResetCameraTracking @ 14cf609f0

bool __thiscall UARSessionConfig::ShouldResetCameraTracking(UARSessionConfig *this)

{
  return this->bResetCameraTracking;
}

// ShouldResetTrackedObjects @ 14cf60a00

bool __thiscall UARSessionConfig::ShouldResetTrackedObjects(UARSessionConfig *this)

{
  return this->bResetTrackedObjects;
}

// ShouldUseOptimalVideoFormat @ 14cf60a10

bool __thiscall UARSessionConfig::ShouldUseOptimalVideoFormat(UARSessionConfig *this)

{
  return this->bUseOptimalVideoFormat;
}

// StaticRegisterNativesUARSessionConfig @ 14cf61480

void __cdecl UARSessionConfig::StaticRegisterNativesUARSessionConfig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_UARSessionConfig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddCandidateImage @ 14cf6ada0

void __cdecl UARSessionConfig::execAddCandidateImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UARCandidateImage *local_res10;
  
  local_res10 = (UARCandidateImage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddCandidateImage((UARSessionConfig *)param_1,local_res10);
  return;
}

// execAddCandidateObject @ 14cf6ae30

void __cdecl
UARSessionConfig::execAddCandidateObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *local_res10;
  UObject *local_18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UObject *)0x0) {
    local_18[0] = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((*(UObject ***)&param_1[2].field_0x20 <= local_18) &&
       (local_18 < *(UObject ***)&param_1[2].field_0x20 + *(int *)&param_1[3].field_0x4)) {
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
    iVar4 = *(int *)(param_1 + 3);
    if (iVar4 == *(int *)&param_1[3].field_0x4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1[2].field_0x20,
                         (int *)&param_1[3].field_0x4);
    }
    *(int *)(param_1 + 3) = iVar4 + 1;
    *(UObject **)(*(longlong *)&param_1[2].field_0x20 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
  }
  return;
}

// execClearCandidateImages @ 14cf6c250

void __cdecl
UARSessionConfig::execClearCandidateImages(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)&param_1[2].field_0x4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&param_1[1].field_0x20,0,(int *)&param_1[2].field_0x4);
  }
  return;
}

// execGetCandidateImageList @ 14cf6da70

void __cdecl
UARSessionConfig::execGetCandidateImageList(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[1].field_0x20) {
    iVar1 = *(int *)(param_1 + 2);
    _Src = *(void **)&param_1[1].field_0x20;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetCandidateObjectList @ 14cf6db50

void __cdecl
UARSessionConfig::execGetCandidateObjectList(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[2].field_0x20) {
    iVar1 = *(int *)(param_1 + 3);
    _Src = *(void **)&param_1[2].field_0x20;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetDesiredVideoFormat @ 14cf6dde0

void __cdecl
UARSessionConfig::execGetDesiredVideoFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined4 *)&param_1[3].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetEnabledSessionTrackingFeature @ 14cf6dfc0

void __cdecl
UARSessionConfig::execGetEnabledSessionTrackingFeature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[4].field_0x8;
  return;
}

// execGetEnvironmentCaptureProbeType @ 14cf6dff0

void __cdecl
UARSessionConfig::execGetEnvironmentCaptureProbeType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0xc;
  return;
}

// execGetFaceTrackingDirection @ 14cf6e100

void __cdecl
UARSessionConfig::execGetFaceTrackingDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[3].field_0x15;
  return;
}

// execGetFaceTrackingUpdate @ 14cf6e130

void __cdecl
UARSessionConfig::execGetFaceTrackingUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[3].field_0x16;
  return;
}

// execGetFrameSyncMode @ 14cf6e160

void __cdecl UARSessionConfig::execGetFrameSyncMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x19;
  return;
}

// execGetLightEstimationMode @ 14cf6e500

void __cdecl
UARSessionConfig::execGetLightEstimationMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x18;
  return;
}

// execGetMaxNumSimultaneousImagesTracked @ 14cf6ed60

void __cdecl
UARSessionConfig::execGetMaxNumSimultaneousImagesTracked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x8;
  return;
}

// execGetPlaneDetectionMode @ 14cf6f420

void __cdecl
UARSessionConfig::execGetPlaneDetectionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = -(param_1[1].field_0x16 != '\0') & 2U | param_1[1].field_0x15 != '\0';
  return;
}

// execGetSceneReconstructionMethod @ 14cf6f4e0

void __cdecl
UARSessionConfig::execGetSceneReconstructionMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[4].field_0x9;
  return;
}

// execGetSessionType @ 14cf6f670

void __cdecl UARSessionConfig::execGetSessionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x13;
  return;
}

// execGetWorldAlignment @ 14cf6fdd0

void __cdecl UARSessionConfig::execGetWorldAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x12;
  return;
}

// execGetWorldMapData @ 14cf6fe00

void __cdecl UARSessionConfig::execGetWorldMapData(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[2].field_0x10);
  return;
}

// execRemoveCandidateImage @ 14cf71cd0

void __cdecl
UARSessionConfig::execRemoveCandidateImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObject *local_res8;
  UObject *local_38 [2];
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (((*(UObject ***)&param_1[1].field_0x20 <= local_38) &&
      (local_38 < *(UObject ***)&param_1[1].field_0x20 + *(int *)&param_1[2].field_0x4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 != 0) {
    iVar10 = 0;
    plVar3 = *(longlong **)&param_1[1].field_0x20;
    bVar5 = (UObject *)*plVar3 != local_38[0];
    lVar7 = 0;
    pUVar6 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar5 == ((UObject *)plVar3[lVar7] != pUVar6));
      if (bVar5 != false) {
        if (iVar10 != iVar8) {
          memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
          pUVar6 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    *(int *)(param_1 + 2) = iVar10;
  }
  return;
}

// execRemoveCandidateImageAtIndex @ 14cf71ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UARSessionConfig::execRemoveCandidateImageAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  void *_Dst;
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar7 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((int)local_res10[0] < 0) || (*(int *)(param_1 + 2) <= (int)local_res10[0])) {
    if (2 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    }
    return;
  }
  uVar5 = ~local_res10[0];
  uVar6 = 0;
  if ((int)local_res10[0] < *(int *)(param_1 + 2)) {
    uVar6 = uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst = (void *)(*(longlong *)&param_1[1].field_0x20 + lVar7 * 8);
  iVar4 = *(int *)(param_1 + 2) + uVar5;
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
  }
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)&param_1[1].field_0x20,*(int *)(param_1 + 2),
             (int *)&param_1[2].field_0x4);
  return;
}

// execSetCandidateObjectList @ 14cf739d0

void __cdecl
UARSessionConfig::execSetCandidateObjectList(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  UARCandidateObject **ppUVar5;
  void **ppvVar6;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar6 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  puVar1 = &param_1[3].field_0x4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(ppvVar6 + 1);
  ppUVar5 = *ppvVar6;
  iVar3 = *(int *)puVar1;
  *(int *)(param_1 + 3) = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,iVar3,(ForAnyElementType *)&param_1[2].field_0x20,iVar2,(int *)puVar1);
    ConstructItems<TObjectPtr<UARCandidateObject>,UARCandidateObject_*,int>
              (*(void **)&param_1[2].field_0x20,ppUVar5,iVar2);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetDesiredVideoFormat @ 14cf73ad0

void __cdecl
UARSessionConfig::execSetDesiredVideoFormat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[3].field_0x8 = local_18;
  *(undefined4 *)&param_1[3].field_0x10 = local_10;
  return;
}

// execSetEnableAutoFocus @ 14cf73b70

void __cdecl
UARSessionConfig::execSetEnableAutoFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x17 = local_res8[0] != 0;
  return;
}

// execSetFaceTrackingDirection @ 14cf73ee0

void __cdecl
UARSessionConfig::execSetFaceTrackingDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x15 = local_res8[0];
  return;
}

// execSetFaceTrackingUpdate @ 14cf73f60

void __cdecl
UARSessionConfig::execSetFaceTrackingUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x16 = local_res8[0];
  return;
}

// execSetResetCameraTracking @ 14cf74710

void __cdecl
UARSessionConfig::execSetResetCameraTracking(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x1c = local_res8[0] != 0;
  return;
}

// execSetResetTrackedObjects @ 14cf747a0

void __cdecl
UARSessionConfig::execSetResetTrackedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x1d = local_res8[0] != 0;
  return;
}

// execSetSceneReconstructionMethod @ 14cf74830

void __cdecl
UARSessionConfig::execSetSceneReconstructionMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[4].field_0x9 = local_res8[0];
  return;
}

// execSetSessionTrackingFeatureToEnable @ 14cf748b0

void __cdecl
UARSessionConfig::execSetSessionTrackingFeatureToEnable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[4].field_0x8 = local_res8[0];
  return;
}

// execSetWorldMapData @ 14cf74930

void __cdecl UARSessionConfig::execSetWorldMapData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  void *_Src;
  size_t _Size;
  ForAnyElementType local_28;
  undefined8 local_20;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_10;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,(int)local_10);
  if ((int)local_10 == 0) {
    local_20 = local_10 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_10,0,&local_28,(int)local_10,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,_Size);
  }
  puVar1 = &param_1[2].field_0x10;
  if ((ForAnyElementType *)puVar1 != &local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.Data;
    *(undefined4 *)&param_1[2].field_0x18 = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&param_1[2].field_0x1c = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execShouldEnableAutoFocus @ 14cf74a80

void __cdecl
UARSessionConfig::execShouldEnableAutoFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x17;
  return;
}

// execShouldEnableCameraTracking @ 14cf74ab0

void __cdecl
UARSessionConfig::execShouldEnableCameraTracking(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x1b;
  return;
}

// execShouldRenderCameraOverlay @ 14cf74ae0

void __cdecl
UARSessionConfig::execShouldRenderCameraOverlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x1a;
  return;
}

// execShouldResetCameraTracking @ 14cf74b10

void __cdecl
UARSessionConfig::execShouldResetCameraTracking(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x1c;
  return;
}

// execShouldResetTrackedObjects @ 14cf74b40

void __cdecl
UARSessionConfig::execShouldResetTrackedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x1d;
  return;
}

