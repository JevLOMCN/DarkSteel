// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 17

// StaticClass @ 14cf2c420

UClass * __cdecl UARTrackableNotifyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackableNotifyComponent",
               &Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton,
               StaticRegisterNativesUARTrackableNotifyComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UARTrackableNotifyComponent>,
               InternalVTableHelperCtorCaller<UARTrackableNotifyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton;
}

// ConditionalDispatchEvent<UAREnvironmentCaptureProbe,FTrackableEnvProbeDelegate> @ 14cf39060

bool __thiscall
UARTrackableNotifyComponent::
ConditionalDispatchEvent<UAREnvironmentCaptureProbe,FTrackableEnvProbeDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackableEnvProbeDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UAREnvironmentCaptureProbe::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf3909a;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf3909a:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// ConditionalDispatchEvent<UARFaceGeometry,FTrackableFaceDelegate> @ 14cf39100

bool __thiscall
UARTrackableNotifyComponent::ConditionalDispatchEvent<UARFaceGeometry,FTrackableFaceDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackableFaceDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UARFaceGeometry::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf3913a;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf3913a:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// ConditionalDispatchEvent<UARPlaneGeometry,FTrackablePlaneDelegate> @ 14cf391a0

bool __thiscall
UARTrackableNotifyComponent::ConditionalDispatchEvent<UARPlaneGeometry,FTrackablePlaneDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackablePlaneDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UARPlaneGeometry::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf391da;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf391da:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// ConditionalDispatchEvent<UARTrackedImage,FTrackableImageDelegate> @ 14cf39240

bool __thiscall
UARTrackableNotifyComponent::ConditionalDispatchEvent<UARTrackedImage,FTrackableImageDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackableImageDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UARTrackedImage::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf3927a;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf3927a:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// ConditionalDispatchEvent<UARTrackedObject,FTrackableObjectDelegate> @ 14cf392e0

bool __thiscall
UARTrackableNotifyComponent::ConditionalDispatchEvent<UARTrackedObject,FTrackableObjectDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackableObjectDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UARTrackedObject::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf3931a;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf3931a:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// ConditionalDispatchEvent<UARTrackedPoint,FTrackablePointDelegate> @ 14cf39380

bool __thiscall
UARTrackableNotifyComponent::ConditionalDispatchEvent<UARTrackedPoint,FTrackablePointDelegate>
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1,
          FTrackablePointDelegate *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UARTrackedGeometry *local_res10;
  FReadAccessScope local_28;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar2 = UARTrackedPoint::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cf393ba;
  }
  param_1 = (UARTrackedGeometry *)0x0;
LAB_14cf393ba:
  if (param_1 != (UARTrackedGeometry *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    iVar1 = *(int *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_res10);
    }
    return true;
  }
  return false;
}

// UARTrackableNotifyComponent @ 14cf42d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARTrackableNotifyComponent * __thiscall
UARTrackableNotifyComponent::UARTrackableNotifyComponent
          (UARTrackableNotifyComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnAddTrackedGeometry = 0;
  *(undefined8 *)&(this->OnAddTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedGeometry = 0;
  *(undefined8 *)&(this->OnUpdateTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedGeometry = 0;
  *(undefined8 *)&(this->OnRemoveTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedPlane = 0;
  *(undefined8 *)&(this->OnAddTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedPlane = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedPlane = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedPoint = 0;
  *(undefined8 *)&(this->OnAddTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedPoint = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedPoint = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedImage = 0;
  *(undefined8 *)&(this->OnAddTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedImage = 0;
  *(undefined8 *)&(this->OnUpdateTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedImage = 0;
  *(undefined8 *)&(this->OnRemoveTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedFace = 0;
  *(undefined8 *)&(this->OnAddTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedFace = 0;
  *(undefined8 *)&(this->OnUpdateTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedFace = 0;
  *(undefined8 *)&(this->OnRemoveTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnAddTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnUpdateTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnRemoveTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedObject = 0;
  *(undefined8 *)&(this->OnAddTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedObject).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedObject = 0;
  *(undefined8 *)&(this->OnUpdateTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedObject).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedObject = 0;
  *(undefined8 *)&(this->OnRemoveTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedObject).field_0x10 = 0;
  return this;
}

// UARTrackableNotifyComponent @ 14cf42f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARTrackableNotifyComponent * __thiscall
UARTrackableNotifyComponent::UARTrackableNotifyComponent
          (UARTrackableNotifyComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnAddTrackedGeometry = 0;
  *(undefined8 *)&(this->OnAddTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedGeometry = 0;
  *(undefined8 *)&(this->OnUpdateTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedGeometry = 0;
  *(undefined8 *)&(this->OnRemoveTrackedGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedGeometry).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedPlane = 0;
  *(undefined8 *)&(this->OnAddTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedPlane = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedPlane = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPlane).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPlane).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedPoint = 0;
  *(undefined8 *)&(this->OnAddTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedPoint = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedPoint = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPoint).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedPoint).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedImage = 0;
  *(undefined8 *)&(this->OnAddTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedImage = 0;
  *(undefined8 *)&(this->OnUpdateTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedImage = 0;
  *(undefined8 *)&(this->OnRemoveTrackedImage).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedImage).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedFace = 0;
  *(undefined8 *)&(this->OnAddTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedFace = 0;
  *(undefined8 *)&(this->OnUpdateTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedFace = 0;
  *(undefined8 *)&(this->OnRemoveTrackedFace).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedFace).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnAddTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnUpdateTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedEnvProbe = 0;
  *(undefined8 *)&(this->OnRemoveTrackedEnvProbe).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedEnvProbe).field_0x10 = 0;
  *(undefined8 *)&this->OnAddTrackedObject = 0;
  *(undefined8 *)&(this->OnAddTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddTrackedObject).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateTrackedObject = 0;
  *(undefined8 *)&(this->OnUpdateTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTrackedObject).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveTrackedObject = 0;
  *(undefined8 *)&(this->OnRemoveTrackedObject).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveTrackedObject).field_0x10 = 0;
  return this;
}

// ~UARTrackableNotifyComponent @ 14cf44970

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
UARTrackableNotifyComponent::~UARTrackableNotifyComponent(UARTrackableNotifyComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnRemoveTrackedObject).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedObject);
  pvVar1 = *(void **)&(this->OnUpdateTrackedObject).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedObject);
  pvVar1 = *(void **)&(this->OnAddTrackedObject).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedObject);
  pvVar1 = *(void **)&(this->OnRemoveTrackedEnvProbe).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedEnvProbe);
  pvVar1 = *(void **)&(this->OnUpdateTrackedEnvProbe).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedEnvProbe);
  pvVar1 = *(void **)&(this->OnAddTrackedEnvProbe).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedEnvProbe);
  pvVar1 = *(void **)&(this->OnRemoveTrackedFace).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedFace);
  pvVar1 = *(void **)&(this->OnUpdateTrackedFace).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedFace);
  pvVar1 = *(void **)&(this->OnAddTrackedFace).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedFace);
  pvVar1 = *(void **)&(this->OnRemoveTrackedImage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedImage);
  pvVar1 = *(void **)&(this->OnUpdateTrackedImage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedImage);
  pvVar1 = *(void **)&(this->OnAddTrackedImage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedImage);
  pvVar1 = *(void **)&(this->OnRemoveTrackedPoint).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedPoint);
  pvVar1 = *(void **)&(this->OnUpdateTrackedPoint).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedPoint);
  pvVar1 = *(void **)&(this->OnAddTrackedPoint).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedPoint);
  pvVar1 = *(void **)&(this->OnRemoveTrackedPlane).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedPlane);
  pvVar1 = *(void **)&(this->OnUpdateTrackedPlane).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedPlane);
  pvVar1 = *(void **)&(this->OnAddTrackedPlane).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedPlane);
  pvVar1 = *(void **)&(this->OnRemoveTrackedGeometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveTrackedGeometry);
  pvVar1 = *(void **)&(this->OnUpdateTrackedGeometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTrackedGeometry);
  pvVar1 = *(void **)&(this->OnAddTrackedGeometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddTrackedGeometry);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14cf556d0

UClass * __cdecl UARTrackableNotifyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackableNotifyComponent",
               &Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton,
               StaticRegisterNativesUARTrackableNotifyComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UARTrackableNotifyComponent>,
               InternalVTableHelperCtorCaller<UARTrackableNotifyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton;
}

// OnRegister @ 14cf586d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARTrackableNotifyComponent::OnRegister(UARTrackableNotifyComponent *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UARTrackableNotifyComponent *local_res10 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  local_88 = OnTrackableAdded;
  uStack_80 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUARTrackableNotifyComponent____A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res10[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res10);
    puVar1[4] = local_88;
    puVar1[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  UARBlueprintLibrary::AddOnTrackableAddedDelegate_Handle
            ((TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)
             (local_res10 + 1));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  uStack_80 = 0;
  local_88 = OnTrackableUpdated;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUARTrackableNotifyComponent____A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res10[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res10);
    puVar1[4] = local_88;
    puVar1[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  UARBlueprintLibrary::AddOnTrackableUpdatedDelegate_Handle
            ((TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)
             (local_res10 + 1));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  uStack_80 = 0;
  local_88 = OnTrackableRemoved;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUARTrackableNotifyComponent____A6AXPEAVUARTrackedGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res10[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UARTrackableNotifyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res10);
    puVar1[4] = local_88;
    puVar1[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  UARBlueprintLibrary::AddOnTrackableRemovedDelegate_Handle
            ((TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *)
             (local_res10 + 1));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// OnTrackableAdded @ 14cf59590

void __thiscall
UARTrackableNotifyComponent::OnTrackableAdded
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UARTrackedGeometry *pUVar4;
  UARTrackedGeometry *local_res8;
  FReadAccessScope local_38;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar3 = UARTrackedObject::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_14cf595d7;
  }
  pUVar4 = (UARTrackedGeometry *)0x0;
LAB_14cf595d7:
  if (pUVar4 == (UARTrackedGeometry *)0x0) {
    bVar2 = ConditionalDispatchEvent<UAREnvironmentCaptureProbe,FTrackableEnvProbeDelegate>
                      (this,param_1,&this->OnAddTrackedEnvProbe);
    if ((((!bVar2) &&
         (bVar2 = ConditionalDispatchEvent<UARFaceGeometry,FTrackableFaceDelegate>
                            (this,param_1,&this->OnAddTrackedFace), !bVar2)) &&
        (bVar2 = ConditionalDispatchEvent<UARTrackedImage,FTrackableImageDelegate>
                           (this,param_1,&this->OnAddTrackedImage), !bVar2)) &&
       (bVar2 = ConditionalDispatchEvent<UARTrackedPoint,FTrackablePointDelegate>
                          (this,param_1,&this->OnAddTrackedPoint), !bVar2)) {
      ConditionalDispatchEvent<UARPlaneGeometry,FTrackablePlaneDelegate>
                (this,param_1,&this->OnAddTrackedPlane);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAddTrackedObject,
               &local_38);
    iVar1 = *(int *)&(this->OnAddTrackedObject).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (0 < iVar1) {
      local_res8 = pUVar4;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAddTrackedObject,
                 &local_res8);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAddTrackedGeometry,
             &local_38);
  iVar1 = *(int *)&(this->OnAddTrackedGeometry).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    local_res8 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAddTrackedGeometry,
               &local_res8);
  }
  return;
}

// OnTrackableRemoved @ 14cf596e0

void __thiscall
UARTrackableNotifyComponent::OnTrackableRemoved
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UARTrackedGeometry *pUVar4;
  UARTrackedGeometry *local_res8;
  FReadAccessScope local_38;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar3 = UARTrackedObject::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_14cf59727;
  }
  pUVar4 = (UARTrackedGeometry *)0x0;
LAB_14cf59727:
  if (pUVar4 == (UARTrackedGeometry *)0x0) {
    bVar2 = ConditionalDispatchEvent<UAREnvironmentCaptureProbe,FTrackableEnvProbeDelegate>
                      (this,param_1,&this->OnRemoveTrackedEnvProbe);
    if ((((!bVar2) &&
         (bVar2 = ConditionalDispatchEvent<UARFaceGeometry,FTrackableFaceDelegate>
                            (this,param_1,&this->OnRemoveTrackedFace), !bVar2)) &&
        (bVar2 = ConditionalDispatchEvent<UARTrackedImage,FTrackableImageDelegate>
                           (this,param_1,&this->OnRemoveTrackedImage), !bVar2)) &&
       (bVar2 = ConditionalDispatchEvent<UARTrackedPoint,FTrackablePointDelegate>
                          (this,param_1,&this->OnRemoveTrackedPoint), !bVar2)) {
      ConditionalDispatchEvent<UARPlaneGeometry,FTrackablePlaneDelegate>
                (this,param_1,&this->OnRemoveTrackedPlane);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnRemoveTrackedObject,&local_38);
    iVar1 = *(int *)&(this->OnRemoveTrackedObject).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (0 < iVar1) {
      local_res8 = pUVar4;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnRemoveTrackedObject,&local_res8);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnRemoveTrackedGeometry,&local_38);
  iVar1 = *(int *)&(this->OnRemoveTrackedGeometry).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    local_res8 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnRemoveTrackedGeometry,&local_res8);
  }
  return;
}

// OnTrackableUpdated @ 14cf59830

void __thiscall
UARTrackableNotifyComponent::OnTrackableUpdated
          (UARTrackableNotifyComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UARTrackedGeometry *pUVar4;
  UARTrackedGeometry *local_res8;
  FReadAccessScope local_38;
  
  if (param_1 != (UARTrackedGeometry *)0x0) {
    pUVar3 = UARTrackedObject::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_14cf59877;
  }
  pUVar4 = (UARTrackedGeometry *)0x0;
LAB_14cf59877:
  if (pUVar4 == (UARTrackedGeometry *)0x0) {
    bVar2 = ConditionalDispatchEvent<UAREnvironmentCaptureProbe,FTrackableEnvProbeDelegate>
                      (this,param_1,&this->OnUpdateTrackedEnvProbe);
    if ((((!bVar2) &&
         (bVar2 = ConditionalDispatchEvent<UARFaceGeometry,FTrackableFaceDelegate>
                            (this,param_1,&this->OnUpdateTrackedFace), !bVar2)) &&
        (bVar2 = ConditionalDispatchEvent<UARTrackedImage,FTrackableImageDelegate>
                           (this,param_1,&this->OnUpdateTrackedImage), !bVar2)) &&
       (bVar2 = ConditionalDispatchEvent<UARTrackedPoint,FTrackablePointDelegate>
                          (this,param_1,&this->OnUpdateTrackedPoint), !bVar2)) {
      ConditionalDispatchEvent<UARPlaneGeometry,FTrackablePlaneDelegate>
                (this,param_1,&this->OnUpdateTrackedPlane);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateTrackedObject,&local_38);
    iVar1 = *(int *)&(this->OnUpdateTrackedObject).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (0 < iVar1) {
      local_res8 = pUVar4;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnUpdateTrackedObject,&local_res8);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateTrackedGeometry,&local_38);
  iVar1 = *(int *)&(this->OnUpdateTrackedGeometry).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    local_res8 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateTrackedGeometry,&local_res8);
  }
  return;
}

// OnUnregister @ 14cf59fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARTrackableNotifyComponent::OnUnregister(UARTrackableNotifyComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController =
       UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = UARBlueprintLibrary::RegisteredARSystem.Object;
  pFVar7 = (FARSupportInterface *)0x0;
  if (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
    WeakReferenceCount =
         (atomic<int>)
         ((int)(UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = pFVar7;
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar10);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x150))(pIVar3,this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  FVar5.ReferenceController =
       UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = UARBlueprintLibrary::RegisteredARSystem.Object;
  if (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
    WeakReferenceCount =
         (atomic<int>)
         ((int)(UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = pFVar7;
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar10);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x170))(pIVar3,this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  FVar5.ReferenceController =
       UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = UARBlueprintLibrary::RegisteredARSystem.Object;
  if (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
    WeakReferenceCount =
         (atomic<int>)
         ((int)(UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          pFVar9 = pFVar7;
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar10);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 400))(pIVar3,this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUARTrackableNotifyComponent @ 14cf61540

void __cdecl UARTrackableNotifyComponent::StaticRegisterNativesUARTrackableNotifyComponent(void)

{
  return;
}

