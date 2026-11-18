// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 77

// FAppleARKitSystem @ 14cfcf7c0

FAppleARKitSystem * __thiscall FAppleARKitSystem::FAppleARKitSystem(FAppleARKitSystem *this)

{
  code *pcVar1;
  UObject *pUVar2;
  double dVar3;
  FDelegateHandle FVar4;
  IModularFeatures *pIVar5;
  UClass *this_00;
  UObject *pUVar6;
  
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FARSystemSupportBase__6B_;
  this->_padding_ = 2;
  this->_padding_ = 2;
  FXRTrackingSystemBase::FXRTrackingSystemBase
            ((FXRTrackingSystemBase *)&this->_padding_,(IARSystemSupport *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FARSystemSupportBase__;
  this->bIsRunning = false;
  this->DeviceOrientation = Unknown;
  this->_padding_ = (longlong)&_vftable__for__FXRTrackingSystemBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DerivedTrackingToUnrealRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DerivedTrackingToUnrealRotation).Yaw = dVar3;
  (this->DerivedTrackingToUnrealRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&this->TrackedGeometryGroups = 0;
  *(undefined8 *)&(this->TrackedGeometryGroups).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedGeometryGroups).field_0x20 = 0;
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x34 = 0;
  *(undefined8 *)&(this->TrackedGeometryGroups).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x48 = 0;
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->LightEstimate).field0_0x0.DebugPtr = (UARLightEstimate *)0x0;
  (this->CameraImage).field0_0x0.DebugPtr = (UAppleARKitCameraVideoTexture *)0x0;
  (this->CameraDepth).field0_0x0.DebugPtr = (UAppleARKitTextureCameraDepth *)0x0;
  *(undefined8 *)&this->CandidateImages = 0;
  *(undefined8 *)&(this->CandidateImages).field_0x8 = 0;
  *(undefined8 *)&(this->CandidateImages).field_0x20 = 0;
  *(undefined4 *)&(this->CandidateImages).field_0x28 = 0;
  *(undefined4 *)&(this->CandidateImages).field_0x2c = 0x80;
  *(undefined4 *)&(this->CandidateImages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CandidateImages).field_0x34 = 0;
  *(undefined8 *)&(this->CandidateImages).field_0x40 = 0;
  *(undefined4 *)&(this->CandidateImages).field_0x48 = 0;
  *(undefined8 *)&this->CandidateObjects = 0;
  *(undefined8 *)&(this->CandidateObjects).field_0x8 = 0;
  *(undefined8 *)&(this->CandidateObjects).field_0x20 = 0;
  *(undefined4 *)&(this->CandidateObjects).field_0x28 = 0;
  *(undefined4 *)&(this->CandidateObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->CandidateObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CandidateObjects).field_0x34 = 0;
  *(undefined8 *)&(this->CandidateObjects).field_0x40 = 0;
  *(undefined4 *)&(this->CandidateObjects).field_0x48 = 0;
  (this->SceneDepthMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  (this->SceneDepthConfidenceMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  this->LastTrackedGeometry_DebugId = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FrameLock,4000);
  (this->GameThreadFrame).Object = (FAppleARKitFrame *)0x0;
  (this->GameThreadFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RenderThreadFrame).Object = (FAppleARKitFrame *)0x0;
  (this->RenderThreadFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastReceivedFrame).Object = (FAppleARKitFrame *)0x0;
  (this->LastReceivedFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->FaceARSupport = (IAppleARKitFaceSupport *)0x0;
  this->PoseTrackingARLiveLink = (IAppleARKitPoseTrackingLiveLink *)0x0;
  (this->TimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->SpawnARActorDelegateHandle).ID = 0;
  FVar4 = TMulticastDelegateRegistration<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
          ::AddRaw<FAppleARKitSystem>
                    ((TMulticastDelegateRegistration<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                      *)&UARLifeCycleComponent::OnSpawnARActorDelegate,
                     (FAppleARKitSystem *)&stack0x00000008,(pmf_21046009 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->SpawnARActorDelegateHandle).ID = *FVar4.ID;
  pIVar5 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x28);
  this_00 = UARKitGeoTrackingSupport::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = pUVar2 + 1;
  if (pUVar2 == (UObject *)0x0) {
    pUVar6 = (UObject *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"ARGeoTrackingSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar5,`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pUVar6);
  return this;
}

// ~FAppleARKitSystem @ 14cfd0e10

void __thiscall FAppleARKitSystem::~FAppleARKitSystem(FAppleARKitSystem *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  UObject *pUVar4;
  FDelegateHandle FVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  IModularFeatures *pIVar9;
  UClass *this_00;
  UObject *pUVar10;
  
  this->_padding_ = (longlong)&_vftable__for__FARSystemSupportBase__;
  this->_padding_ = (longlong)&_vftable__for__FXRTrackingSystemBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pIVar9 = IModularFeatures::Get();
  pcVar3 = *(code **)((longlong)*pIVar9 + 0x30);
  this_00 = UARKitGeoTrackingSupport::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar10 = pUVar4 + 1;
  if (pUVar4 == (UObject *)0x0) {
    pUVar10 = (UObject *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"ARGeoTrackingSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar3)(pIVar9,`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pUVar10);
  FVar5.ID = (this->SpawnARActorDelegateHandle).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UARLifeCycleComponent::OnSpawnARActorDelegate,FVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastReceivedFrame).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderThreadFrame).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameThreadFrame).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FrameLock);
  *(undefined4 *)&(this->CandidateObjects).field_0x48 = 0;
  pvVar6 = *(void **)&(this->CandidateObjects).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CandidateObjects);
  *(undefined4 *)&(this->CandidateImages).field_0x48 = 0;
  pvVar6 = *(void **)&(this->CandidateImages).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateImage>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateImage>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UARCandidateImage>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CandidateImages);
  pFVar7 = (this->Pins).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->TrackedGeometryGroups).field_0x48 = 0;
  pvVar6 = *(void **)&(this->TrackedGeometryGroups).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FTrackedGeometryGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FTrackedGeometryGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FTrackedGeometryGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackedGeometryGroups);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  FXRTrackingSystemBase::~FXRTrackingSystemBase((FXRTrackingSystemBase *)&this->_padding_);
  IARSystemSupport::~IARSystemSupport((IARSystemSupport *)this);
  return;
}

// AddReferencedObjects @ 14cfd29a0

void __thiscall
FAppleARKitSystem::AddReferencedObjects(FAppleARKitSystem *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  plVar1 = &this->_padding_;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
              *)plVar1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
              *)plVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar5 = (longlong)(int)uVar4 * 0x30 + *local_48;
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar5 + 0x20);
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar5 + 0x10);
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar5 + 0x18);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  if ((int)this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  }
  if (this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1);
  }
  if (this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1);
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    FReferenceCollector::
    AddReferencedObjects<FString,UARCandidateImage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UARCandidateImage>,0>_>
              (param_1,(TMapBase<FString,TObjectPtr<UARCandidateImage>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UARCandidateImage>,0>_>
                        *)&this->_padding_,(UObject *)0x0,(FProperty *)0x0);
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    FReferenceCollector::
    AddReferencedObjects<FString,UARCandidateObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UARCandidateObject>,0>_>
              (param_1,(TMapBase<FString,TObjectPtr<UARCandidateObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UARCandidateObject>,0>_>
                        *)&this->_padding_,(UObject *)0x0,(FProperty *)0x0);
  }
  puVar2 = &(this->TrackedGeometryGroups).field_0x30;
  if (*(longlong *)puVar2 != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,puVar2,0,0);
  }
  if (this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  }
  if (this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  }
  if (this->_padding_ != 0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  }
  return;
}

// CalcTrackingToWorldRotation @ 14cfd2fd0

void __thiscall FAppleARKitSystem::CalcTrackingToWorldRotation(FAppleARKitSystem *this)

{
  EDeviceScreenOrientation EVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  EARWorldAlignment EVar6;
  longlong *plVar7;
  UARSessionConfig *this_00;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  lVar2 = this->_padding_;
  (this->DerivedTrackingToUnrealRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DerivedTrackingToUnrealRotation).Yaw = dVar4;
  (this->DerivedTrackingToUnrealRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  plVar7 = (longlong *)(**(code **)(lVar2 + 0x138))(&this->_padding_,local_18);
  if ((*plVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar7);
  EVar6 = UARSessionConfig::GetWorldAlignment(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  EVar1 = this->DeviceOrientation;
  if (EVar6 < Camera) {
    if (EVar1 != Portrait) {
      if (EVar1 != PortraitUpsideDown) {
        if (EVar1 != LandscapeLeft) {
          return;
        }
        (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
        (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
        (this->DerivedTrackingToUnrealRotation).Roll = 180.0;
        return;
      }
      goto LAB_14cfd30ae;
    }
  }
  else {
    if (EVar1 == Portrait) {
LAB_14cfd30ae:
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = 90.0;
      return;
    }
    if (EVar1 != PortraitUpsideDown) {
      if ((EVar1 != LandscapeLeft) && (EVar1 == LandscapeRight)) {
        return;
      }
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = -180.0;
      return;
    }
  }
  (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
  (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
  (this->DerivedTrackingToUnrealRotation).Roll = -90.0;
  return;
}

// CheckForFaceARSupport @ 14cfd3150

void __thiscall
FAppleARKitSystem::CheckForFaceARSupport(FAppleARKitSystem *this,UARSessionConfig *param_1)

{
  EARSessionType EVar1;
  IAppleARKitFaceSupport *pIVar2;
  undefined1 local_res18 [16];
  
  EVar1 = UARSessionConfig::GetSessionType(param_1);
  if (EVar1 != Face) {
    this->FaceARSupport = (IAppleARKitFaceSupport *)0x0;
    return;
  }
  pIVar2 = GetModularInterface<IAppleARKitFaceSupport>();
  this->FaceARSupport = pIVar2;
  if (pIVar2 == (IAppleARKitFaceSupport *)0x0) {
    `FAppleARKitSystem::CheckForFaceARSupport'::__l2::<lambda_1>::operator()(local_res18);
    return;
  }
  return;
}

// CheckForPoseTrackingARLiveLink @ 14cfd31b0

void __thiscall
FAppleARKitSystem::CheckForPoseTrackingARLiveLink(FAppleARKitSystem *this,UARSessionConfig *param_1)

{
  return;
}

// ClearTrackedGeometries @ 14cfd3330

void __thiscall FAppleARKitSystem::ClearTrackedGeometries(FAppleARKitSystem *this)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock);
  TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
           *)&FARKitMeshData::CachedMeshData,0);
                    /* WARNING: Could not recover jumptable at 0x00014cfd335a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock);
  return;
}

// EnumerateTrackedDevices @ 14cfd4d50

bool __thiscall
FAppleARKitSystem::EnumerateTrackedDevices
          (FAppleARKitSystem *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EXRTrackedDeviceType param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if ((byte)(param_2 - Controller) < 0xfe) {
    return false;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x152a896bd) &&
     (&DeviceId < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4) = 0;
  return true;
}

// FindARPinByComponent @ 14cfd5940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __thiscall
FAppleARKitSystem::FindARPinByComponent(FAppleARKitSystem *this,USceneComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UARPin *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Pins).AllocatorInstance.Data;
  iVar2 = (this->Pins).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UARPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar4 = pFVar4 + 8;
  }
  pUVar3 = ARKitUtil::PinFromComponent
                     (param_1,(TArray<UARPin_*,TSizedDefaultAllocator<32>_> *)&this->Pins);
  return pUVar3;
}

// GetARKitXRCamera @ 14cfd5a00

FAppleARKitXRCamera * __thiscall FAppleARKitSystem::GetARKitXRCamera(FAppleARKitSystem *this)

{
  FAppleARKitXRCamera *pFVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x110))(&this->_padding_,local_18,0);
  pFVar1 = (FAppleARKitXRCamera *)*puVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pFVar1;
}

// GetARSessionRawPointer @ 14cfd5a40

void * __thiscall FAppleARKitSystem::GetARSessionRawPointer(FAppleARKitSystem *this)

{
  undefined1 local_res10 [24];
  
  `FAppleARKitSystem::GetARSessionRawPointer'::__l2::<lambda_1>::operator()(local_res10);
  return (void *)0x0;
}

// GetCurrentPose @ 14cfd6410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FAppleARKitSystem::GetCurrentPose
          (FAppleARKitSystem *this,int param_1,TQuat<double> *param_2,TVector<double> *param_3)

{
  char cVar1;
  FAppleARKitFrame *pFVar2;
  FAppleARKitFrame *pFVar3;
  TQuat<double> *pTVar4;
  TSharedPtr<FARSupportInterface,1> *this_00;
  FARSupportInterface *this_01;
  TTransform<double> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_198 [32];
  TQuat<double> local_178;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (((param_1 == 0) && (*(longlong *)&(this->CandidateObjects).field_0x20 != 0)) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x148))(), cVar1 != '\0')) {
    pFVar2 = TSharedPtr<FAppleARKitFrame,1>::operator->
                       ((TSharedPtr<FAppleARKitFrame,1> *)&(this->CandidateObjects).field_0x20);
    pFVar3 = TSharedPtr<FAppleARKitFrame,1>::operator->
                       ((TSharedPtr<FAppleARKitFrame,1> *)&(this->CandidateObjects).field_0x20);
    local_158.Rotation.ZW.m128d_f64[0] = (pFVar3->Camera).Orientation.Z;
    local_158.Rotation.ZW.m128d_f64[1] = (pFVar3->Camera).Orientation.W;
    local_158.Rotation.XY.m128d_f64[0] = (pFVar3->Camera).Orientation.X;
    local_158.Rotation.XY.m128d_f64[1] = (pFVar3->Camera).Orientation.Y;
    local_158.Translation.XY.m128d_f64[0] = (pFVar2->Camera).Translation.field0_0x0._s_0.X;
    local_158.Translation.XY.m128d_f64[1] = (pFVar2->Camera).Translation.field0_0x0._s_0.Y;
    local_158.Translation.ZW.m128d_f64[0] = (pFVar2->Camera).Translation.field0_0x0._s_0.Z;
    local_158.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_158.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_158.Translation.ZW.m128d_f64[1] = 0.0;
    local_158.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_158.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    pTVar4 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&this->_padding_,&local_178)
    ;
    local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_98.Rotation.ZW.m128d_f64[0] = pTVar4->Z;
    local_98.Rotation.ZW.m128d_f64[1] = pTVar4->W;
    local_98.Rotation.XY.m128d_f64[0] = pTVar4->X;
    local_98.Rotation.XY.m128d_f64[1] = pTVar4->Y;
    local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    uVar6 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar6;
    local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar7;
    local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar6;
    local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar7;
    local_98.Translation.XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
    local_98.Translation.XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
    local_98.Translation.ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
    local_98.Translation.ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
    local_98.Scale3D.XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
    local_98.Scale3D.XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
    UE::Math::TTransform<double>::Multiply(&local_f8,&local_98,&local_158);
    local_158.Rotation.XY.m128d_f64[0] = local_f8.Rotation.XY.m128d_f64[0];
    local_158.Rotation.XY.m128d_f64[1] = local_f8.Rotation.XY.m128d_f64[1];
    local_158.Rotation.ZW.m128d_f64[0] = local_f8.Rotation.ZW.m128d_f64[0];
    local_158.Rotation.ZW.m128d_f64[1] = local_f8.Rotation.ZW.m128d_f64[1];
    local_158.Translation.XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
    local_158.Translation.ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
    local_158.Translation.ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
    local_158.Scale3D.XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
    local_158.Scale3D.XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
    local_158.Scale3D.ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
    local_158.Scale3D.ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
    this_00 = (TSharedPtr<FARSupportInterface,1> *)
              (**(code **)(this->_padding_ + 0x138))(this,&local_178);
    this_01 = TSharedPtr<FARSupportInterface,1>::operator->(this_00);
    pTVar5 = FARSupportInterface::GetAlignmentTransform(this_01);
    UE::Math::TTransform<double>::Multiply(&local_158,&local_158,pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_178.Y);
    param_2->X = local_158.Rotation.XY.m128d_f64[0];
    param_2->Y = local_158.Rotation.XY.m128d_f64[1];
    param_2->Z = local_158.Rotation.ZW.m128d_f64[0];
    param_2->W = local_158.Rotation.ZW.m128d_f64[1];
    (param_3->field0_0x0)._s_0.X = local_158.Translation.XY.m128d_f64[0];
    (param_3->field0_0x0)._s_0.Y = local_158.Translation.XY.m128d_f64[1];
    (param_3->field0_0x0)._s_0.Z = local_158.Translation.ZW.m128d_f64[0];
    return true;
  }
  return false;
}

// GetGameThreadARFrameRawPointer @ 14cfd6790

void * __thiscall FAppleARKitSystem::GetGameThreadARFrameRawPointer(FAppleARKitSystem *this)

{
  undefined1 local_res10 [24];
  
  `FAppleARKitSystem::GetGameThreadARFrameRawPointer'::__l2::<lambda_1>::operator()(local_res10);
  return (void *)0x0;
}

// GetGuidForGeometry @ 14cfd6880

bool __thiscall
FAppleARKitSystem::GetGuidForGeometry
          (FAppleARKitSystem *this,UARTrackedGeometry *param_1,FGuid *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UARTrackedGeometry *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FGuid,FTrackedGeometryGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iStack_48 = 0;
  iVar3 = *(int *)&(this->TrackedGeometryGroups).field_0x28;
  TStack_70.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackedGeometryGroups).field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&(this->TrackedGeometryGroups).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_70.Array;
    }
    uVar4 = *puVar9;
    while (uVar4 == 0) {
      lVar8 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14cfd6929;
      uVar4 = puVar9[lVar8 + 1];
    }
    uStack_44 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_44 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar8;
    if (iVar3 < iStack_34) {
      iStack_34 = iVar3;
    }
  }
LAB_14cfd6929:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->TrackedGeometryGroups;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar3) {
    do {
      lVar8 = *(longlong *)&this->TrackedGeometryGroups;
      pUVar5 = *(UARTrackedGeometry **)(lVar8 + 0x20 + (longlong)TStack_70.CurrentBitIndex * 0x30);
      if (pUVar5 == (UARTrackedGeometry *)0x0) {
        bVar10 = param_1 == (UARTrackedGeometry *)0x0;
      }
      else {
        bVar10 = pUVar5 == param_1;
      }
      if (bVar10) {
        puVar1 = (undefined8 *)(lVar8 + (longlong)TStack_70.CurrentBitIndex * 0x30);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        param_2->A = (int)uVar6;
        param_2->B = (int)((ulonglong)uVar6 >> 0x20);
        param_2->C = (int)uVar7;
        param_2->D = (int)((ulonglong)uVar7 >> 0x20);
        return true;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return false;
}

// GetReferencerName @ 14cfd7af0

FString * __thiscall
FAppleARKitSystem::GetReferencerName(FAppleARKitSystem *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AppleARKitSystem");
  return __return_storage_ptr__;
}

// GetSessionGuid @ 14cfd7ba0

FGuid * __thiscall
FAppleARKitSystem::GetSessionGuid(FAppleARKitSystem *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetSystemName @ 14cfd88e0

FName __thiscall FAppleARKitSystem::GetSystemName(FAppleARKitSystem *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AppleARKitSystemName,L"AppleARKit");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = AppleARKitSystemName;
  return in_RDX;
}

// GetVersionString @ 14cfd8be0

FString * __thiscall
FAppleARKitSystem::GetVersionString(FAppleARKitSystem *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AppleARKit - V1.0");
  return __return_storage_ptr__;
}

// GetWorldToMetersScale @ 14cfd8f40

float __thiscall FAppleARKitSystem::GetWorldToMetersScale(FAppleARKitSystem *this)

{
  return __real_42c80000;
}

// GetXRCamera @ 14cfd9050

TSharedPtr<IXRCamera,1> * __thiscall
FAppleARKitSystem::GetXRCamera
          (FAppleARKitSystem *this,TSharedPtr<IXRCamera,1> *__return_storage_ptr__,int param_1)

{
  long *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FAppleARKitXRCamera *this_00;
  TSharedPtr<IXRCamera,1> *pTVar5;
  FAppleARKitSystem *pFVar6;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FAppleARKitXRCamera> local_res10;
  FAppleARKitXRCamera *local_58;
  FSharedReferencer<1> local_50;
  TSharedRef<FAppleARKitXRCamera,1> local_48;
  TSharedRef<ISceneViewExtension,1> local_38;
  
  plVar1 = this[-1].FrameLock.CriticalSection.Opaque2;
  if (this->_padding_ == 0) {
    bVar4 = IsInGameThread();
    if (bVar4) {
      this_00 = ::operator_new(0x2e0);
      if (this_00 == (FAppleARKitXRCamera *)0x0) {
        this_00 = (FAppleARKitXRCamera *)0x0;
      }
      else {
        pFVar6 = this;
        if (plVar1 == (long *)0x0) {
          pFVar6 = (FAppleARKitSystem *)0x0;
        }
        FDefaultXRCamera::FDefaultXRCamera
                  ((FDefaultXRCamera *)this_00,local_res8,(IXRTrackingSystem *)pFVar6,param_1);
        this_00->ARKitSystem = (FAppleARKitSystem *)plVar1;
        this_00->_padding_ = (longlong)&FAppleARKitXRCamera::_vftable__for__IXRCamera__;
        this_00->_padding_ = (longlong)&FAppleARKitXRCamera::_vftable__for__FHMDSceneViewExtension__
        ;
        FAppleARKitVideoOverlay::FAppleARKitVideoOverlay(&this_00->VideoOverlay);
        (this_00->ThreadPriority).Counter = 0;
        (this_00->LastThreadPriority).Counter = 0;
        if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
           (0 < *(int *)(this_00->_padding_ + 8))) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TSharedPtr<IXRCamera,1> *)(*pcVar3)();
            return pTVar5;
          }
        }
      }
      local_res10.Object = this_00;
      TSharedRef<FAppleARKitXRCamera,1>::TSharedRef<FAppleARKitXRCamera,1><FAppleARKitXRCamera>
                (&local_48,&local_res10);
      if (local_48.Object == (FAppleARKitXRCamera *)0x0) {
        local_38.Object = (ISceneViewExtension *)0x0;
      }
      else {
        local_38.Object = (ISceneViewExtension *)&(local_48.Object)->_padding_;
      }
      local_38.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSceneViewExtensions::RegisterExtension(&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      local_58 = local_48.Object;
      local_50.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FAppleARKitXRCamera **)&this->_padding_ != &local_58) {
        this->_padding_ = (longlong)local_48.Object;
        local_58 = (FAppleARKitXRCamera *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  __return_storage_ptr__->Object = (IXRCamera *)this->_padding_;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetXRSystemFlags @ 14cfd9240

int __thiscall FAppleARKitSystem::GetXRSystemFlags(FAppleARKitSystem *this)

{
  return 3;
}

// IsARAvailable @ 14cfd9ad0

bool __thiscall FAppleARKitSystem::IsARAvailable(FAppleARKitSystem *this)

{
  return false;
}

// IsHeadTrackingAllowed @ 14cfd9be0

bool __thiscall FAppleARKitSystem::IsHeadTrackingAllowed(FAppleARKitSystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  UARSessionConfig *this_00;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  void *local_28 [4];
  
  lVar4 = (**(code **)(*(longlong *)this[-1].FrameLock.CriticalSection.Opaque2 + 0x38))
                    (this[-1].FrameLock.CriticalSection.Opaque2,local_28);
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x130))(this,local_38);
    if (*plVar5 == 0) {
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
    this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar5);
    UARSessionConfig::ShouldEnableCameraTracking(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return false;
}

// IsRunning @ 14cfd9d70

bool __thiscall FAppleARKitSystem::IsRunning(FAppleARKitSystem *this)

{
  return this->bIsRunning;
}

// OnARSystemInitialized @ 14cfda830

void __thiscall FAppleARKitSystem::OnARSystemInitialized(FAppleARKitSystem *this)

{
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddThreadSafeSP<FAppleARKitSystem>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedScreenOrientationChangedNotificationDelegate,
             (FAppleARKitSystem *)&stack0x00000010,(pmf_efa6b998 *)this);
  return;
}

// OnAddManualEnvironmentCaptureProbe @ 14cfda890

bool __thiscall
FAppleARKitSystem::OnAddManualEnvironmentCaptureProbe
          (FAppleARKitSystem *this,TVector<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// OnAddRuntimeCandidateImage @ 14cfda8a0

bool __thiscall
FAppleARKitSystem::OnAddRuntimeCandidateImage
          (FAppleARKitSystem *this,UARSessionConfig *param_1,UTexture2D *param_2,FString *param_3,
          float param_4)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// OnAddTrackedPointWithName @ 14cfda8c0

bool __thiscall
FAppleARKitSystem::OnAddTrackedPointWithName
          (FAppleARKitSystem *this,TTransform<double> *param_1,FString *param_2,bool param_3)

{
  return false;
}

// OnBeginRendering_GameThread @ 14cfda8e0

void __thiscall
FAppleARKitSystem::OnBeginRendering_GameThread(FAppleARKitSystem *this,FSceneViewFamily *param_1)

{
  UpdateFrame((FAppleARKitSystem *)this[-1].FrameLock.CriticalSection.Opaque2);
  return;
}

// OnGetARSessionStatus @ 14cfda8f0

FARSessionStatus * __thiscall
FAppleARKitSystem::OnGetARSessionStatus
          (FAppleARKitSystem *this,FARSessionStatus *__return_storage_ptr__)

{
  void **ppvVar1;
  bool bVar2;
  void *local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  void *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  bVar2 = this->bIsRunning == false;
  if (bVar2) {
    local_30 = 0;
    ppvVar1 = &local_38;
    local_28[0] = 0;
  }
  else {
    local_18 = 0;
    ppvVar1 = &local_20;
    local_10 = 1;
  }
  (__return_storage_ptr__->AdditionalInfo).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *ppvVar1 = (void *)0x0;
  (__return_storage_ptr__->AdditionalInfo).Data.ArrayNum = *(int *)(ppvVar1 + 1);
  (__return_storage_ptr__->AdditionalInfo).Data.ArrayMax = *(int *)((longlong)ppvVar1 + 0xc);
  ppvVar1[1] = (void *)0x0;
  __return_storage_ptr__->Status = *(EARSessionStatus *)(ppvVar1 + 2);
  if (bVar2) {
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if ((!bVar2) && (local_20 != (void *)0x0)) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// OnGetARTexture @ 14cfda9a0

UARTexture * __thiscall
FAppleARKitSystem::OnGetARTexture(FAppleARKitSystem *this,EARTextureType param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  switch(param_1) {
  case CameraImage:
    return (UARTexture *)(this->CameraImage).field0_0x0.DebugPtr;
  case CameraDepth:
    return (UARTexture *)(this->CameraDepth).field0_0x0.DebugPtr;
  case PersonSegmentationImage:
    if (lVar1 != 0) {
      return *(UARTexture **)(lVar1 + 0x290);
    }
    break;
  case PersonSegmentationDepth:
    if (lVar1 != 0) {
      return *(UARTexture **)(lVar1 + 0x298);
    }
    break;
  case SceneDepthMap:
    return (UARTexture *)(this->SceneDepthMap).field0_0x0.DebugPtr;
  case SceneDepthConfidenceMap:
    return (UARTexture *)(this->SceneDepthConfidenceMap).field0_0x0.DebugPtr;
  }
  return (UARTexture *)0x0;
}

// OnGetAllPins @ 14cfdaa40

TArray<UARPin_*,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnGetAllPins
          (FAppleARKitSystem *this,
          TArray<UARPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Pins).AllocatorInstance.Data;
  iVar2 = (this->Pins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UARPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->Pins).ArrayNum;
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar1,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// OnGetAllTrackedGeometries @ 14cfdab00

TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnGetAllTrackedGeometries
          (FAppleARKitSystem *this,
          TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 local_88;
  TMap<FGuid,FTrackedGeometryGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>_>
  *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  TMap<FGuid,FTrackedGeometryGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>_>
  *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  local_80 = &this->TrackedGeometryGroups;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_70 = &(this->TrackedGeometryGroups).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = *(int *)&(this->TrackedGeometryGroups).field_0x28;
  uStack_74 = 1;
  iStack_78 = 0;
  local_60 = iStack_78;
  iStack_64 = 0;
  if (iVar6 != 0) {
    puVar9 = *(uint **)&(this->TrackedGeometryGroups).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_70;
    }
    uVar2 = *puVar9;
    local_60 = 0;
    iStack_78 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)iStack_78;
      local_60 = local_60 + 0x20;
      iStack_78 = iStack_78 + 1;
      iStack_64 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_14cfdabb0;
      uVar2 = puVar9[lVar8 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_74 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_64 = local_60 + -1 + (int)lVar8;
    if (iVar6 < iStack_64) {
      iStack_64 = iVar6;
    }
  }
LAB_14cfdabb0:
  uStack_68 = 0xffffffff;
  TStack_48._padding_ = CONCAT44(uStack_74,iStack_78);
  TStack_48.UnvisitedBitMask = 0xffffffff;
  TStack_48._28_4_ = iStack_64;
  TStack_48.BaseBitIndex = local_60;
  iStack_5c = iStack_64;
  local_50 = local_80;
  TStack_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_70;
  TStack_48.CurrentBitIndex = iStack_64;
  if (iStack_64 < iVar6) {
    do {
      local_88 = *(undefined8 *)
                  (*(longlong *)local_50 + 0x20 + (longlong)TStack_48.CurrentBitIndex * 0x30);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_88;
      TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
    } while (TStack_48.CurrentBitIndex < (TStack_48.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// OnGetCameraIntrinsics @ 14cfdad00

bool __thiscall
FAppleARKitSystem::OnGetCameraIntrinsics(FAppleARKitSystem *this,FARCameraIntrinsics *param_1)

{
  FAppleARKitFrame *pFVar1;
  code *pcVar2;
  double dVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pFVar1 = (this->GameThreadFrame).Object;
  if (pFVar1 == (FAppleARKitFrame *)0x0) {
    return false;
  }
  TVar4._s_0.Y = (int)(((this->GameThreadFrame).Object)->Camera).ImageResolution.field0_0x0._s_0.Y;
  TVar4._s_0.X = (int)(pFVar1->Camera).ImageResolution.field0_0x0._s_0.X;
  (param_1->ImageResolution).field0_0x0 = TVar4;
  if ((this->GameThreadFrame).Object == (FAppleARKitFrame *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  pFVar1 = (this->GameThreadFrame).Object;
  dVar3 = (pFVar1->Camera).FocalLength.field0_0x0._s_0.Y;
  (param_1->FocalLength).field0_0x0._s_0.X = (pFVar1->Camera).FocalLength.field0_0x0._s_0.X;
  (param_1->FocalLength).field0_0x0._s_0.Y = dVar3;
  if ((this->GameThreadFrame).Object == (FAppleARKitFrame *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  pFVar1 = (this->GameThreadFrame).Object;
  dVar3 = (pFVar1->Camera).PrincipalPoint.field0_0x0._s_0.Y;
  (param_1->PrincipalPoint).field0_0x0._s_0.X = (pFVar1->Camera).PrincipalPoint.field0_0x0._s_0.X;
  (param_1->PrincipalPoint).field0_0x0._s_0.Y = dVar3;
  return true;
}

// OnGetCandidateObject @ 14cfdae00

TSharedPtr<FARGetCandidateObjectAsyncTask,1> * __thiscall
FAppleARKitSystem::OnGetCandidateObject
          (FAppleARKitSystem *this,
          TSharedPtr<FARGetCandidateObjectAsyncTask,1> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  TSharedPtr<FARGetCandidateObjectAsyncTask,1> *pTVar7;
  int iVar8;
  FString local_18;
  
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FARGetCandidateObjectAsyncTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFARErrorGetCandidateObjectAsyncTask___00_SharedPointerInternals__6B_
    ;
    pFVar6 = ::FString::FString(&local_18,
                                L"GetCandidateObject - requires a valid, running ARKit 2.0 session")
    ;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5[2]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = (longlong)&___7FARAsyncTask__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = (longlong)&___7FARErrorGetCandidateObjectAsyncTask__6B_;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              ((FString *)(pTVar5 + 2),(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
    LOCK();
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((FARGetCandidateObjectAsyncTask *)(pTVar5 + 1) == (FARGetCandidateObjectAsyncTask *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FARGetCandidateObjectAsyncTask,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (FARGetCandidateObjectAsyncTask *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// OnGetCurrentLightEstimate @ 14cfdaf30

UARLightEstimate * __thiscall FAppleARKitSystem::OnGetCurrentLightEstimate(FAppleARKitSystem *this)

{
  return (this->LightEstimate).field0_0x0.DebugPtr;
}

// OnGetNumberOfTrackedFacesSupported @ 14cfdaf40

int __thiscall FAppleARKitSystem::OnGetNumberOfTrackedFacesSupported(FAppleARKitSystem *this)

{
  int iVar1;
  IAppleARKitFaceSupport *pIVar2;
  
  pIVar2 = GetModularInterface<IAppleARKitFaceSupport>();
  if (pIVar2 != (IAppleARKitFaceSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfdaf5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)*pIVar2)(pIVar2,*(code **)*pIVar2);
    return iVar1;
  }
  return 0;
}

// OnGetPointCloud @ 14cfdaf80

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnGetPointCloud
          (FAppleARKitSystem *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnGetSupportedVideoFormats @ 14cfdafa0

TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnGetSupportedVideoFormats
          (FAppleARKitSystem *this,
          TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EARSessionType param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnGetTracked2DPose @ 14cfdafc0

TArray<FARPose2D,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnGetTracked2DPose
          (FAppleARKitSystem *this,
          TArray<FARPose2D,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FAppleARKitFrame *pFVar1;
  FARPose2D local_58;
  
  pFVar1 = (this->GameThreadFrame).Object;
  if ((pFVar1 == (FAppleARKitFrame *)0x0) ||
     ((pFVar1->Tracked2DPose).SkeletonDefinition.NumJoints < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    FARPose2D::FARPose2D(&local_58,&pFVar1->Tracked2DPose);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FARPose2D,FARPose2D,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,&local_58,1);
    if (local_58.IsJointTracked.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.IsJointTracked.AllocatorInstance.Data);
    }
    if (local_58.JointLocations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.JointLocations.AllocatorInstance.Data);
    }
    if (local_58.SkeletonDefinition.ParentIndices.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SkeletonDefinition.ParentIndices.AllocatorInstance.Data);
    }
    if (local_58.SkeletonDefinition.JointNames.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SkeletonDefinition.JointNames.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// OnGetTrackingQuality @ 14cfdb0d0

EARTrackingQuality __thiscall FAppleARKitSystem::OnGetTrackingQuality(FAppleARKitSystem *this)

{
  FAppleARKitFrame *pFVar1;
  
  pFVar1 = (this->GameThreadFrame).Object;
  if (pFVar1 != (FAppleARKitFrame *)0x0) {
    return (pFVar1->Camera).TrackingQuality;
  }
  return NotTracking;
}

// OnGetTrackingQualityReason @ 14cfdb0f0

EARTrackingQualityReason __thiscall
FAppleARKitSystem::OnGetTrackingQualityReason(FAppleARKitSystem *this)

{
  FAppleARKitFrame *pFVar1;
  
  pFVar1 = (this->GameThreadFrame).Object;
  if (pFVar1 != (FAppleARKitFrame *)0x0) {
    return (pFVar1->Camera).TrackingQualityReason;
  }
  return None;
}

// OnGetWorldMappingStatus @ 14cfdb110

EARWorldMappingState __thiscall FAppleARKitSystem::OnGetWorldMappingStatus(FAppleARKitSystem *this)

{
  FAppleARKitFrame *pFVar1;
  
  pFVar1 = (this->GameThreadFrame).Object;
  if (pFVar1 != (FAppleARKitFrame *)0x0) {
    return pFVar1->WorldMappingState;
  }
  return NotAvailable;
}

// OnIsSceneReconstructionSupported @ 14cfdb130

bool __thiscall
FAppleARKitSystem::OnIsSceneReconstructionSupported
          (FAppleARKitSystem *this,EARSessionType param_1,EARSceneReconstruction param_2)

{
  return false;
}

// OnIsSessionTrackingFeatureSupported @ 14cfdb150

bool __thiscall
FAppleARKitSystem::OnIsSessionTrackingFeatureSupported
          (FAppleARKitSystem *this,EARSessionType param_1,EARSessionTrackingFeature param_2)

{
  return false;
}

// OnIsTrackingTypeSupported @ 14cfdb170

bool __thiscall
FAppleARKitSystem::OnIsTrackingTypeSupported(FAppleARKitSystem *this,EARSessionType param_1)

{
  return false;
}

// OnLineTraceTrackedObjects @ 14cfdb180

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnLineTraceTrackedObjects
          (FAppleARKitSystem *this,
          TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1,EARLineTraceChannels param_2)

{
  (**(code **)(this->_padding_ + 0x98))(&this->_padding_);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnLineTraceTrackedObjects @ 14cfdb1b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitSystem::OnLineTraceTrackedObjects
          (FAppleARKitSystem *this,
          TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,EARLineTraceChannels param_3)

{
  if (2 < (byte)LogAppleARKit._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnPauseARSession @ 14cfdb1f0

void __thiscall FAppleARKitSystem::OnPauseARSession(FAppleARKitSystem *this)

{
  undefined1 local_res10 [24];
  
  `FAppleARKitSystem::OnPauseARSession'::__l2::<lambda_1>::operator()(local_res10);
  return;
}

// OnPinComponent @ 14cfdb200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARPin * __thiscall
FAppleARKitSystem::OnPinComponent
          (FAppleARKitSystem *this,USceneComponent *param_1,TTransform<double> *param_2,
          UARTrackedGeometry *param_3,FName param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  UARPin *pUVar8;
  longlong *plVar9;
  TTransform<double> *pTVar10;
  TTransform<double> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UARTrackedGeometry *this_00;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_378 [32];
  undefined1 local_328;
  undefined1 local_327 [7];
  UARPin *local_320;
  TSharedRef<FARSupportInterface,1> local_318;
  longlong local_308;
  TReferenceControllerBase<1> *local_300;
  TTransform<double> *local_2f8;
  LARGE_INTEGER local_2f0;
  LARGE_INTEGER local_2e8;
  void *local_2e0 [2];
  undefined1 local_2d0 [8];
  TReferenceControllerBase<1> *local_2c8;
  undefined1 local_2c0 [8];
  TReferenceControllerBase<1> *local_2b8;
  undefined1 local_2b0 [8];
  TReferenceControllerBase<1> *local_2a8;
  undefined1 local_2a0 [8];
  TReferenceControllerBase<1> *local_298;
  undefined1 local_288 [128];
  undefined1 local_208 [128];
  TTransform<double> local_188;
  undefined1 local_128 [96];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2f8 = param_2;
  if (param_1 == (USceneComponent *)0x0) {
    local_328 = 0;
    bVar6 = `FAppleARKitSystem::OnPinComponent'::__l3::<lambda_1>::operator()(&local_328);
    if (!bVar6) {
      return (UARPin *)0x0;
    }
  }
  pTVar2 = &this->Pins;
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->Pins).ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar7) {
      local_327[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UARPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_327);
    }
    if (pFVar15 == pFVar3) break;
    pFVar15 = pFVar15 + 8;
  }
  pUVar8 = ARKitUtil::PinFromComponent
                     (param_1,(TArray<UARPin_*,TSizedDefaultAllocator<32>_> *)pTVar2);
  if (pUVar8 != (UARPin *)0x0) {
    if (2 < (byte)LogAppleARKit._0_1_) {
      (**(code **)(param_1->_padding_ + 0x478))(param_1,local_2e0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
      if (local_2e0[0] != (void *)0x0) {
        FMemory::Free(local_2e0[0]);
      }
    }
    (**(code **)(this->_padding_ + 0xb0))(this,pUVar8);
  }
  plVar14 = &this->_padding_;
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x138))(plVar14,local_2d0);
  if ((*plVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UARPin *)(*pcVar4)();
    return pUVar8;
  }
  pTVar10 = FARSupportInterface::GetAlignmentTransform((FARSupportInterface *)*plVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2c8);
  pTVar11 = (TTransform<double> *)(**(code **)(*plVar14 + 0x90))(plVar14,local_128);
  pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform(local_2f8,&local_c8,pTVar11);
  UE::Math::TTransform<double>::GetRelativeTransform(pTVar11,&local_188,pTVar10);
  if (param_3 == (UARTrackedGeometry *)0x0) {
    QueryPerformanceCounter(&local_2e8);
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_UARTrackedPoint_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_288,pUVar13);
    local_288._8_8_ = pUVar12;
    this_00 = (UARTrackedGeometry *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_288);
    if (local_288._64_8_ != 0) {
      plVar9 = (longlong *)(local_288 + 0x50);
      if ((longlong *)local_288._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_288._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar9 = (longlong *)(**(code **)(*plVar14 + 0x138))(plVar14,local_2b0);
    if ((*plVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UARPin *)(*pcVar4)();
      return pUVar8;
    }
    pTVar10 = FARSupportInterface::GetAlignmentTransform((FARSupportInterface *)*plVar9);
    QueryPerformanceCounter(&local_2f0);
    dVar5 = (double)local_2f0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    plVar9 = (longlong *)(**(code **)(*plVar14 + 0x138))(plVar14,local_2c0);
    if ((*plVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UARPin *)(*pcVar4)();
      return pUVar8;
    }
    local_318.Object = (FARSupportInterface *)*plVar9;
    local_318.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar9[1];
    plVar9[1] = 0;
    *plVar9 = 0;
    if ((local_318.Object == (FARSupportInterface *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UARPin *)(*pcVar4)();
      return pUVar8;
    }
    UARTrackedGeometry::UpdateTrackedGeometry(this_00,&local_318,0,dVar5,&local_188,pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a8);
  }
  pUVar12 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar12,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UARPin_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_208,pUVar13);
  local_208._8_8_ = pUVar12;
  pUVar8 = (UARPin *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_208);
  if (local_208._64_8_ != 0) {
    plVar9 = (longlong *)(local_208 + 0x50);
    if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_208._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pcVar4 = *(code **)(*(longlong *)pUVar8 + 0x2b0);
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x138))(plVar14,local_2a0);
  if ((*plVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UARPin *)(*pcVar4)();
    return pUVar8;
  }
  local_308 = *plVar14;
  local_300 = (TReferenceControllerBase<1> *)plVar14[1];
  plVar14[1] = 0;
  *plVar14 = 0;
  if ((local_308 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UARPin *)(*pcVar4)();
    return pUVar8;
  }
  (*pcVar4)(pUVar8,&local_308,param_1,&local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_300);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_298);
  local_320 = pUVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_320) &&
      ((FScriptContainerElement *)&local_320 < pFVar3 + (longlong)(this->Pins).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UARPin *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (this->Pins).ArrayNum;
  piVar1 = &(this->Pins).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Pins).ArrayNum = iVar7 + 1;
  *(UARPin **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_320;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_320 != (UARPin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_320);
  }
  return pUVar8;
}

// OnRemovePin @ 14cfdb790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAppleARKitSystem::OnRemovePin(FAppleARKitSystem *this,UARPin *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar2 = &this->Pins;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UARPin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->Pins).ArrayNum;
  pFVar10 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)iVar7 * 8) {
    while (*(UARPin **)pFVar10 != param_1) {
      pFVar10 = pFVar10 + 8;
      if (pFVar10 == pFVar4 + (longlong)iVar7 * 8) {
        return;
      }
    }
    uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
    if (uVar9 != 0xffffffff) {
      uVar8 = 0;
      if ((int)(uVar9 + 1) <= iVar7) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = (this->Pins).ArrayNum;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      iVar7 = iVar3 + ~uVar9;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar7) * 8,
                (longlong)iVar7 << 3);
      }
      piVar1 = &(this->Pins).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar2->AllocatorInstance,(this->Pins).ArrayNum,&(this->Pins).ArrayMax);
    }
  }
  return;
}

// OnSaveWorld @ 14cfdb8e0

TSharedPtr<FARSaveWorldAsyncTask,1> * __thiscall
FAppleARKitSystem::OnSaveWorld
          (FAppleARKitSystem *this,TSharedPtr<FARSaveWorldAsyncTask,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  TSharedPtr<FARSaveWorldAsyncTask,1> *pTVar7;
  int iVar8;
  FString local_18;
  
  pTVar5 = ::operator_new(0x40);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FARSaveWorldAsyncTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFARErrorSaveWorldAsyncTask___00_SharedPointerInternals__6B_
    ;
    pFVar6 = ::FString::FString(&local_18,L"SaveWorld - requires a valid, running ARKit 2.0 session"
                               );
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5[2]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = (longlong)&___7FARAsyncTask__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = (longlong)&___7FARErrorSaveWorldAsyncTask__6B_;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              ((FString *)(pTVar5 + 2),(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
    LOCK();
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((FARSaveWorldAsyncTask *)(pTVar5 + 1) == (FARSaveWorldAsyncTask *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FARSaveWorldAsyncTask,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (FARSaveWorldAsyncTask *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// OnSetAlignmentTransform @ 14cfdba20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAppleARKitSystem::OnSetAlignmentTransform(FAppleARKitSystem *this,TTransform<double> *param_1)

{
  TMap<FGuid,FTrackedGeometryGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pTVar1 = &this->TrackedGeometryGroups;
  TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar8 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar5 = local_58;
      if (*(longlong *)(*local_58 + 0x20 + (longlong)(int)uVar8 * 0x30) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeoIt.Value().TrackedGeometry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                           ,0x29f,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      UARTrackedGeometry::UpdateAlignmentTransform
                (*(UARTrackedGeometry **)(*plVar5 + 0x20 + (longlong)(int)uStack_3c * 0x30),param_1)
      ;
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar8 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
        local_28->HashSize = iVar7;
        TSet<TTuple<FGuid,FTrackedGeometryGroup>,TDefaultMapHashableKeyFuncs<FGuid,FTrackedGeometryGroup,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  pFVar9 = (this->Pins).AllocatorInstance.Data;
  iVar7 = (this->Pins).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar7) {
      `TCheckedPointerIterator<TObjectPtr<UARPin>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    UARPin::UpdateAlignmentTransform(*(UARPin **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnSpawnARActor @ 14cfdbc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitSystem::OnSpawnARActor
          (FAppleARKitSystem *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  
  uVar4 = CityHash64((char *)param_3,0x10);
  if (*(int *)&(this->TrackedGeometryGroups).field_0x8 !=
      *(int *)&(this->TrackedGeometryGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TrackedGeometryGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TrackedGeometryGroups).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + ((ulonglong)(*(int *)&(this->TrackedGeometryGroups).field_0x48 - 1) &
                               uVar4 & 0xffffffff) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&this->TrackedGeometryGroups);
        if (((param_3->D == puVar5[3] && param_3->C == puVar5[2]) && param_3->B == puVar5[1]) &&
            param_3->A == *puVar5) {
          puVar6 = puVar5 + 4;
          if (puVar5 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            if ((*(longlong *)puVar6 != 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TrackedGeometryGroup->ARActor == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                                   ,0x62b,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((*(longlong *)(puVar6 + 2) != 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TrackedGeometryGroup->ARComponent == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                                   ,0x62c,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((param_1 == (AARActor *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewARActor",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                                   ,0x62e,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((param_2 == (UARComponent *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewARComponent",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                                   ,0x62f,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AARActor *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            *(AARActor **)puVar6 = param_1;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UARComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            *(UARComponent **)(puVar6 + 2) = param_2;
            (**(code **)(param_2->_padding_ + 0x648))(param_2,*(longlong *)(puVar6 + 4));
            (**(code **)(this->_padding_ + 0x158))(this,*(longlong *)(puVar6 + 4));
            return;
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  if (2 < (byte)LogAppleARKit._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
  }
  return;
}

// OnStartARSession @ 14cfdbe20

void __thiscall
FAppleARKitSystem::OnStartARSession(FAppleARKitSystem *this,UARSessionConfig *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  EDeviceScreenOrientation EVar2;
  bool bVar3;
  UTimecodeProvider *pUVar4;
  longlong *plVar5;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TTransform<double> local_78;
  char local_18;
  
  pUVar4 = UAppleARKitSettings::GetTimecodeProvider();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTimecodeProvider *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->TimecodeProvider).field0_0x0.DebugPtr = pUVar4;
  lpCriticalSection = &this->FrameLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_b8 = 0;
    FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GameThreadFrame != (TSharedPtr<FAppleARKitFrame,1> *)&local_b8) {
      (this->GameThreadFrame).Object = (FAppleARKitFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GameThreadFrame).SharedReferenceCount,&FStack_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b0.ReferenceController);
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->LastReceivedFrame != (TSharedPtr<FAppleARKitFrame,1> *)&local_a8) {
      (this->LastReceivedFrame).Object = (FAppleARKitFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LastReceivedFrame).SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = '\0';
    (**(code **)(this->_padding_ + 0x110))(&this->_padding_,local_98,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    EVar2 = FGenericPlatformMisc::GetDeviceOrientation();
    SetDeviceOrientationAndDerivedTracking(this,EVar2);
    this->bIsRunning = true;
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x138))(&this->_padding_,local_88);
    if (*plVar5 == 0) {
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
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*plVar5 + 0x20)
              );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    if (local_18 != '\0') {
      UARBlueprintLibrary::SetAlignmentTransform(&local_78);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnStartGameFrame @ 14cfdbfc0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FAppleARKitSystem::OnStartGameFrame(FAppleARKitSystem *this,FWorldContext *param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UARBasicLightEstimate *this_00;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [128];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  FXRTrackingSystemBase::RefreshTrackingToWorldTransform
            ((FXRTrackingSystemBase *)this,&local_88,param_1);
  lVar2 = *(longlong *)&(this->CandidateObjects).field_0x20;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x100) == '\0') {
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
    }
    else {
      pUVar6 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UARBasicLightEstimate_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_108,pUVar7);
      local_108._8_8_ = pUVar6;
      this_00 = (UARBasicLightEstimate *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
      if (local_108._64_8_ != 0) {
        plVar8 = (longlong *)(local_108 + 0x50);
        if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_108._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (*(longlong *)&(this->CandidateObjects).field_0x20 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      lVar2 = *(longlong *)&(this->CandidateObjects).field_0x20;
      fVar1 = *(float *)(lVar2 + 0x108);
      if (lVar2 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      UARBasicLightEstimate::SetLightEstimate
                (this_00,*(float *)(*(longlong *)&(this->CandidateObjects).field_0x20 + 0x104),fVar1
                );
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UARBasicLightEstimate *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->DerivedTrackingToUnrealRotation).Yaw = (double)this_00;
    }
  }
  return true;
}

// OnStopARSession @ 14cfdc160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAppleARKitSystem::OnStopARSession(FAppleARKitSystem *this)

{
  if (this->bIsRunning != false) {
    if (4 < (byte)LogAppleARKit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
    }
    this->bIsRunning = false;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock);
  TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FARKitMeshData,1>,0>,FDefaultSetAllocator>
           *)&FARKitMeshData::CachedMeshData,0);
                    /* WARNING: Could not recover jumptable at 0x00014cfdc1bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock);
  return;
}

// OnTryGetOrCreatePinForNativeResource @ 14cfdc1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FAppleARKitSystem::OnTryGetOrCreatePinForNativeResource
          (FAppleARKitSystem *this,void *param_1,FString *param_2,UARPin **param_3)

{
  *param_3 = (UARPin *)0x0;
  if (1 < (byte)LogAppleARKit._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
  }
  return false;
}

// OrientationChanged @ 14cfdc230

void __thiscall FAppleARKitSystem::OrientationChanged(FAppleARKitSystem *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  EARWorldAlignment EVar5;
  longlong *plVar6;
  UARSessionConfig *this_00;
  EDeviceScreenOrientation EVar7;
  EDeviceScreenOrientation EVar8;
  EDeviceScreenOrientation aEStackX_10 [24];
  undefined1 auStack_18 [8];
  TReferenceControllerBase<1> *pTStack_10;
  
  EVar7 = (EDeviceScreenOrientation)param_1;
  if (EVar7 == Unknown) {
    aEStackX_10[0] = EVar7;
    `FAppleARKitSystem::SetDeviceOrientationAndDerivedTracking'::__l2::<lambda_1>::operator()
              (aEStackX_10);
  }
  lVar1 = this->_padding_;
  EVar8 = LandscapeLeft;
  if (EVar7 != Unknown) {
    EVar8 = EVar7;
  }
  this->DeviceOrientation = EVar8;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DerivedTrackingToUnrealRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DerivedTrackingToUnrealRotation).Yaw = dVar3;
  (this->DerivedTrackingToUnrealRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  plVar6 = (longlong *)(**(code **)(lVar1 + 0x138))(&this->_padding_,auStack_18);
  if ((*plVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar6);
  EVar5 = UARSessionConfig::GetWorldAlignment(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  EVar7 = this->DeviceOrientation;
  if (EVar5 < Camera) {
    if (EVar7 != Portrait) {
      if (EVar7 != PortraitUpsideDown) {
        if (EVar7 != LandscapeLeft) {
          return;
        }
        (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
        (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
        (this->DerivedTrackingToUnrealRotation).Roll = 180.0;
        return;
      }
      goto LAB_14cfde836;
    }
  }
  else {
    if (EVar7 == Portrait) {
LAB_14cfde836:
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = 90.0;
      return;
    }
    if (EVar7 != PortraitUpsideDown) {
      if ((EVar7 != LandscapeLeft) && (EVar7 == LandscapeRight)) {
        return;
      }
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = -180.0;
      return;
    }
  }
  (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
  (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
  (this->DerivedTrackingToUnrealRotation).Roll = -90.0;
  return;
}

// Pause @ 14cfdc350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAppleARKitSystem::Pause(FAppleARKitSystem *this)

{
  if (this->bIsRunning != false) {
    if (4 < (byte)LogAppleARKit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
    }
    this->bIsRunning = false;
  }
  return true;
}

// ResetOrientationAndPosition @ 14cfde1b0

void __thiscall
FAppleARKitSystem::ResetOrientationAndPosition(FAppleARKitSystem *this,float param_1)

{
  return;
}

// Run @ 14cfde1c0

bool __thiscall FAppleARKitSystem::Run(FAppleARKitSystem *this,UARSessionConfig *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  EDeviceScreenOrientation EVar2;
  bool bVar3;
  undefined1 uVar4;
  UTimecodeProvider *pUVar5;
  longlong *plVar6;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TTransform<double> local_78;
  char local_18;
  
  pUVar5 = UAppleARKitSettings::GetTimecodeProvider();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTimecodeProvider *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TimecodeProvider).field0_0x0.DebugPtr = pUVar5;
  lpCriticalSection = &this->FrameLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_b8 = 0;
    FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GameThreadFrame != (TSharedPtr<FAppleARKitFrame,1> *)&local_b8) {
      (this->GameThreadFrame).Object = (FAppleARKitFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GameThreadFrame).SharedReferenceCount,&FStack_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b0.ReferenceController);
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->LastReceivedFrame != (TSharedPtr<FAppleARKitFrame,1> *)&local_a8) {
      (this->LastReceivedFrame).Object = (FAppleARKitFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LastReceivedFrame).SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = '\0';
    (**(code **)(this->_padding_ + 0x110))(&this->_padding_,local_98,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    EVar2 = FGenericPlatformMisc::GetDeviceOrientation();
    SetDeviceOrientationAndDerivedTracking(this,EVar2);
    this->bIsRunning = true;
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x138))(&this->_padding_,local_88);
    if (*plVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*plVar6 + 0x20)
              );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    if (local_18 != '\0') {
      UARBlueprintLibrary::SetAlignmentTransform(&local_78);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SessionDidFailWithError_DelegateThread @ 14cfde370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitSystem::SessionDidFailWithError_DelegateThread(FAppleARKitSystem *this,FString *param_1)

{
  if (2 < (byte)LogAppleARKit._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKit);
    return;
  }
  return;
}

// SessionDidUpdateFrame_DelegateThread @ 14cfde3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitSystem::SessionDidUpdateFrame_DelegateThread
          (FAppleARKitSystem *this,TSharedPtr<FAppleARKitFrame,1> *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAppleARKitFrame *pFVar4;
  FAppleARKitSystem *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  TSharedRef<FAppleARKitSystem,1> *pTVar12;
  ulong64 uVar13;
  FName *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uStackX_14;
  FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionUpdateFrame> local_res18;
  FConstructor local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  code *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  bool local_80;
  undefined8 *local_78;
  TSharedRef<FAppleARKitSystem,1> local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FName local_40;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  if (param_1->Object == (FAppleARKitFrame *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FAppleARKitFrame *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  local_48 = &local_a0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x40,&local_a0);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    uStack_84 = local_70.SharedReferenceCount.ReferenceController._4_4_;
    local_90 = SessionDidUpdateFrame_Internal;
    uStack_88 = 0;
    pTVar12 = TSharedFromThis<FAppleARKitSystem,1>::AsShared
                        ((TSharedFromThis<FAppleARKitSystem,1> *)&this->_padding_,&local_70);
    pTVar15 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar12->Object;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar11[1] = pFVar4;
    puVar11[2] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar11[4] = pFVar5;
    puVar11[5] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar11[6] = local_90;
    puVar11[7] = CONCAT44(uStack_84,uStack_88);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_70.SharedReferenceCount.ReferenceController._4_4_,
                        local_70.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_res18 = StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame;
  if (StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionUpdateFrame>)0x0) {
    pFVar14 = ::FName::FName(&local_40,"STAT_FAppleARKitSystem_SessionUpdateFrame");
    local_res18 = (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionUpdateFrame>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame,*pFVar14,
                             L"SessionDidUpdateFrame_DelegateThread","STATGROUP_ARKIT",
                             "STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_res20.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
  ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
            (&local_res20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_78,
             (TStatId *)&local_a8,(Type *)&local_res18);
  if (local_78 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_78 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_80 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_84,uStack_88),
               (FDestructionSentinel *)&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SessionDidUpdateFrame_Internal @ 14cfde6b0

void __thiscall
FAppleARKitSystem::SessionDidUpdateFrame_Internal
          (FAppleARKitSystem *this,TSharedRef<FAppleARKitFrame,1> *param_1)

{
  FAppleARKitFrame *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->LastReceivedFrame != (TSharedPtr<FAppleARKitFrame,1> *)&local_18) {
    (this->LastReceivedFrame).Object = local_18;
    local_18 = (FAppleARKitFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastReceivedFrame).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  UpdateFrame(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDeviceOrientationAndDerivedTracking @ 14cfde730

void __thiscall
FAppleARKitSystem::SetDeviceOrientationAndDerivedTracking
          (FAppleARKitSystem *this,EDeviceScreenOrientation param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  EARWorldAlignment EVar5;
  longlong *plVar6;
  UARSessionConfig *this_00;
  EDeviceScreenOrientation EVar7;
  EDeviceScreenOrientation local_res10 [24];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (param_1 == Unknown) {
    local_res10[0] = param_1;
    `FAppleARKitSystem::SetDeviceOrientationAndDerivedTracking'::__l2::<lambda_1>::operator()
              (local_res10);
  }
  lVar1 = this->_padding_;
  EVar7 = LandscapeLeft;
  if (param_1 != Unknown) {
    EVar7 = param_1;
  }
  this->DeviceOrientation = EVar7;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DerivedTrackingToUnrealRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DerivedTrackingToUnrealRotation).Yaw = dVar3;
  (this->DerivedTrackingToUnrealRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  plVar6 = (longlong *)(**(code **)(lVar1 + 0x138))(&this->_padding_,local_18);
  if ((*plVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = FARSupportInterface::GetSessionConfig((FARSupportInterface *)*plVar6);
  EVar5 = UARSessionConfig::GetWorldAlignment(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  EVar7 = this->DeviceOrientation;
  if (EVar5 < Camera) {
    if (EVar7 != Portrait) {
      if (EVar7 != PortraitUpsideDown) {
        if (EVar7 != LandscapeLeft) {
          return;
        }
        (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
        (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
        (this->DerivedTrackingToUnrealRotation).Roll = 180.0;
        return;
      }
      goto LAB_14cfde836;
    }
  }
  else {
    if (EVar7 == Portrait) {
LAB_14cfde836:
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = 90.0;
      return;
    }
    if (EVar7 != PortraitUpsideDown) {
      if ((EVar7 != LandscapeLeft) && (EVar7 == LandscapeRight)) {
        return;
      }
      (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
      (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
      (this->DerivedTrackingToUnrealRotation).Roll = -180.0;
      return;
    }
  }
  (this->DerivedTrackingToUnrealRotation).Pitch = 0.0;
  (this->DerivedTrackingToUnrealRotation).Yaw = 0.0;
  (this->DerivedTrackingToUnrealRotation).Roll = -90.0;
  return;
}

// SetupCameraTextures @ 14cfde9c0

void __thiscall FAppleARKitSystem::SetupCameraTextures(FAppleARKitSystem *this)

{
  return;
}

// Shutdown @ 14cfded30

void __thiscall FAppleARKitSystem::Shutdown(FAppleARKitSystem *this)

{
  (this->CameraDepth).field0_0x0.DebugPtr = (UAppleARKitTextureCameraDepth *)0x0;
  (this->CameraImage).field0_0x0.DebugPtr = (UAppleARKitCameraVideoTexture *)0x0;
  (this->SceneDepthMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  (this->SceneDepthConfidenceMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  return;
}

// TryCreateTrackedGeometry @ 14cfdf4f0

UARTrackedGeometry * __thiscall
FAppleARKitSystem::TryCreateTrackedGeometry
          (FAppleARKitSystem *this,TSharedRef<FAppleARKitAnchorData,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UARTrackedGeometry *)0x0;
}

// UpdateARKitPerfStats @ 14cfdf7f0

void __thiscall FAppleARKitSystem::UpdateARKitPerfStats(FAppleARKitSystem *this)

{
  return;
}

// UpdateFrame @ 14cfdf860

void __thiscall FAppleARKitSystem::UpdateFrame(FAppleARKitSystem *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  FAppleARKitFrame *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  lpCriticalSection = &this->FrameLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->GameThreadFrame).Object;
    if (((pFVar2 == (FAppleARKitFrame *)0x0) ||
        ((this->LastReceivedFrame).Object == (FAppleARKitFrame *)0x0)) ||
       (dVar1 = ((this->LastReceivedFrame).Object)->Timestamp,
       pFVar2->Timestamp <= dVar1 && dVar1 != pFVar2->Timestamp)) {
      pTVar3 = (this->LastReceivedFrame).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->LastReceivedFrame).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->GameThreadFrame).SharedReferenceCount.ReferenceController;
      (this->GameThreadFrame).Object = pFVar2;
      (this->GameThreadFrame).SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cfdf8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 150578a60

bool __thiscall `FAppleARKitSystem::CheckForFaceARSupport'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8393247101550591667>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550591667>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150578aa0

bool __thiscall
`FAppleARKitSystem::GetARSessionRawPointer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8393247101550591405>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550591405>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150578ae0

bool __thiscall
`FAppleARKitSystem::GetGameThreadARFrameRawPointer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8393247101550591389>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550591389>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150578b20

bool __thiscall `FAppleARKitSystem::OnPauseARSession'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8393247101550591352>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550591352>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150578b60

bool __thiscall
`FAppleARKitSystem::SetDeviceOrientationAndDerivedTracking'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8393247101550590612>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550590612>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150578be0

bool __thiscall `FAppleARKitSystem::OnPinComponent'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8393247101550591110>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8393247101550591110>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

