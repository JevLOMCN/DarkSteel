// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 32

// ~IARSystemSupport @ 14cfd11b0

void __thiscall IARSystemSupport::~IARSystemSupport(IARSystemSupport *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IARSystemSupport__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTrackableRemovedDelegates).field_0x8,
             *(int *)&(this->OnTrackableRemovedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnTrackableRemovedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrackableRemovedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTrackableUpdatedDelegates).field_0x8,
             *(int *)&(this->OnTrackableUpdatedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnTrackableUpdatedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrackableUpdatedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTrackableAddedDelegates).field_0x8,
             *(int *)&(this->OnTrackableAddedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnTrackableAddedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrackableAddedDelegates);
  return;
}

// AddOnTrackableAddedDelegate_Handle @ 14cfd2850

FDelegateHandle __thiscall
IARSystemSupport::AddOnTrackableAddedDelegate_Handle
          (IARSystemSupport *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
              *)&this->OnTrackableAddedDelegates,
             (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)local_res8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableRemovedDelegate_Handle @ 14cfd28c0

FDelegateHandle __thiscall
IARSystemSupport::AddOnTrackableRemovedDelegate_Handle
          (IARSystemSupport *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
              *)&this->OnTrackableRemovedDelegates,
             (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)local_res8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableUpdatedDelegate_Handle @ 14cfd2930

FDelegateHandle __thiscall
IARSystemSupport::AddOnTrackableUpdatedDelegate_Handle
          (IARSystemSupport *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
              *)&this->OnTrackableUpdatedDelegates,
             (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)local_res8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ArePinsReadyToLoad @ 14cfd2d40

bool __thiscall IARSystemSupport::ArePinsReadyToLoad(IARSystemSupport *this)

{
  return false;
}

// ClearOnTrackableAddedDelegate_Handle @ 14cfd3270

void __thiscall
IARSystemSupport::ClearOnTrackableAddedDelegate_Handle
          (IARSystemSupport *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnTrackableAddedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableAddedDelegates @ 14cfd32a0

void __thiscall
IARSystemSupport::ClearOnTrackableAddedDelegates(IARSystemSupport *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTrackableAddedDelegates,
             param_1);
  return;
}

// ClearOnTrackableRemovedDelegate_Handle @ 14cfd32b0

void __thiscall
IARSystemSupport::ClearOnTrackableRemovedDelegate_Handle
          (IARSystemSupport *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnTrackableRemovedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableRemovedDelegates @ 14cfd32e0

void __thiscall
IARSystemSupport::ClearOnTrackableRemovedDelegates(IARSystemSupport *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnTrackableRemovedDelegates,param_1);
  return;
}

// ClearOnTrackableUpdatedDelegate_Handle @ 14cfd32f0

void __thiscall
IARSystemSupport::ClearOnTrackableUpdatedDelegate_Handle
          (IARSystemSupport *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnTrackableUpdatedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableUpdatedDelegates @ 14cfd3320

void __thiscall
IARSystemSupport::ClearOnTrackableUpdatedDelegates(IARSystemSupport *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnTrackableUpdatedDelegates,param_1);
  return;
}

// IsLocalPinSaveSupported @ 14cfd9d60

bool __thiscall IARSystemSupport::IsLocalPinSaveSupported(IARSystemSupport *this)

{
  return false;
}

// LoadARPins @ 14cfd9e10

void __thiscall
IARSystemSupport::LoadARPins
          (IARSystemSupport *this,
          TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_>
          *param_1)

{
  return;
}

// OnARSystemInitialized @ 14cfda880

void __thiscall IARSystemSupport::OnARSystemInitialized(IARSystemSupport *this)

{
  return;
}

// OnAddTrackedPointWithName @ 14cfda8d0

bool __thiscall
IARSystemSupport::OnAddTrackedPointWithName
          (IARSystemSupport *this,TTransform<double> *param_1,FString *param_2,bool param_3)

{
  return false;
}

// OnGetARTexture @ 14cfdaa30

UARTexture * __thiscall
IARSystemSupport::OnGetARTexture(IARSystemSupport *this,EARTextureType param_1)

{
  return (UARTexture *)0x0;
}

// OnGetCameraIntrinsics @ 14cfdadf0

bool __thiscall
IARSystemSupport::OnGetCameraIntrinsics(IARSystemSupport *this,FARCameraIntrinsics *param_1)

{
  return false;
}

// OnGetNumberOfTrackedFacesSupported @ 14cfdaf70

int __thiscall IARSystemSupport::OnGetNumberOfTrackedFacesSupported(IARSystemSupport *this)

{
  return 1;
}

// OnGetTracked2DPose @ 14cfdb0b0

TArray<FARPose2D,TSizedDefaultAllocator<32>_> * __thiscall
IARSystemSupport::OnGetTracked2DPose
          (IARSystemSupport *this,
          TArray<FARPose2D,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnIsSceneReconstructionSupported @ 14cfdb140

bool __thiscall
IARSystemSupport::OnIsSceneReconstructionSupported
          (IARSystemSupport *this,EARSessionType param_1,EARSceneReconstruction param_2)

{
  return false;
}

// OnIsSessionTrackingFeatureSupported @ 14cfdb160

bool __thiscall
IARSystemSupport::OnIsSessionTrackingFeatureSupported
          (IARSystemSupport *this,EARSessionType param_1,EARSessionTrackingFeature param_2)

{
  return false;
}

// OnResizeXRCamera @ 14cfdb8d0

TIntPoint<int> __thiscall
IARSystemSupport::OnResizeXRCamera(IARSystemSupport *this,TIntPoint<int> *param_1)

{
  param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// OnSetEnabledXRCamera @ 14cfdbbf0

void __thiscall IARSystemSupport::OnSetEnabledXRCamera(IARSystemSupport *this,bool param_1)

{
  return;
}

// OnStartARGameFrame @ 14cfdbe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IARSystemSupport::OnStartARGameFrame(IARSystemSupport *this,FWorldContext *param_1)

{
  return false;
}

// OnToggleARCapture @ 14cfdc1d0

bool __thiscall
IARSystemSupport::OnToggleARCapture(IARSystemSupport *this,bool param_1,EARCaptureType param_2)

{
  return false;
}

// OnTryGetOrCreatePinForNativeResource @ 14cfdc220

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
IARSystemSupport::OnTryGetOrCreatePinForNativeResource
          (IARSystemSupport *this,void *param_1,FString *param_2,UARPin **param_3)

{
  *param_3 = (UARPin *)0x0;
  return false;
}

// RemoveAllSavedARPins @ 14cfdcc90

void __thiscall IARSystemSupport::RemoveAllSavedARPins(IARSystemSupport *this)

{
  return;
}

// RemoveSavedARPin @ 14cfdcd00

void __thiscall IARSystemSupport::RemoveSavedARPin(IARSystemSupport *this,FName param_1)

{
  return;
}

// SaveARPin @ 14cfde360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall IARSystemSupport::SaveARPin(IARSystemSupport *this,FName param_1,UARPin *param_2)

{
  return false;
}

// TriggerOnTrackableAddedDelegates @ 14cfdf4c0

void __thiscall
IARSystemSupport::TriggerOnTrackableAddedDelegates
          (IARSystemSupport *this,UARTrackedGeometry *param_1)

{
  TMulticastDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTrackableAddedDelegates,param_1);
  return;
}

// TriggerOnTrackableRemovedDelegates @ 14cfdf4d0

void __thiscall
IARSystemSupport::TriggerOnTrackableRemovedDelegates
          (IARSystemSupport *this,UARTrackedGeometry *param_1)

{
  TMulticastDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTrackableRemovedDelegates,param_1);
  return;
}

// TriggerOnTrackableUpdatedDelegates @ 14cfdf4e0

void __thiscall
IARSystemSupport::TriggerOnTrackableUpdatedDelegates
          (IARSystemSupport *this,UARTrackedGeometry *param_1)

{
  TMulticastDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTrackableUpdatedDelegates,param_1);
  return;
}

