// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// StaticClass @ 149670600

UClass * __cdecl UGizmoComponentWorldTransformSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentWorldTransformSource",
               &Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoComponentWorldTransformSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoComponentWorldTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoComponentWorldTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton;
}

// UGizmoComponentWorldTransformSource @ 149684350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGizmoComponentWorldTransformSource * __thiscall
UGizmoComponentWorldTransformSource::UGizmoComponentWorldTransformSource
          (UGizmoComponentWorldTransformSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->bModifyComponentOnTransform = true;
  return this;
}

// UGizmoComponentWorldTransformSource @ 1496843a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGizmoComponentWorldTransformSource * __thiscall
UGizmoComponentWorldTransformSource::UGizmoComponentWorldTransformSource
          (UGizmoComponentWorldTransformSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->bModifyComponentOnTransform = true;
  return this;
}

// ~UGizmoComponentWorldTransformSource @ 1496899a0

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
UGizmoComponentWorldTransformSource::~UGizmoComponentWorldTransformSource
          (UGizmoComponentWorldTransformSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  return;
}

// GetPrivateStaticClass @ 1496a4cc0

UClass * __cdecl UGizmoComponentWorldTransformSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentWorldTransformSource",
               &Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoComponentWorldTransformSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoComponentWorldTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoComponentWorldTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentWorldTransformSource.InnerSingleton;
}

// GetTransform @ 1496a90f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UGizmoComponentWorldTransformSource::GetTransform
          (UGizmoComponentWorldTransformSource *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = this->_padding_;
  dVar2 = *(double *)(lVar1 + 0x1f8);
  dVar3 = *(double *)(lVar1 + 0x200);
  dVar4 = *(double *)(lVar1 + 0x208);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar1 + 0x1f0);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x210);
  dVar5 = *(double *)(lVar1 + 0x218);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar3 = *(double *)(lVar1 + 0x220);
  dVar4 = *(double *)(lVar1 + 0x228);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  dVar2 = *(double *)(lVar1 + 0x230);
  dVar5 = *(double *)(lVar1 + 0x238);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar3 = *(double *)(lVar1 + 0x240);
  dVar4 = *(double *)(lVar1 + 0x248);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// SetTransform @ 1496c02e0

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
UGizmoComponentWorldTransformSource::SetTransform
          (UGizmoComponentWorldTransformSource *this,TTransform<double> *param_1)

{
  UGizmoComponentWorldTransformSource *pUVar1;
  
  USceneComponent::SetWorldTransform
            ((USceneComponent *)this->_padding_,param_1,false,(FHitResult *)0x0,None);
  pUVar1 = this;
  if (this == (UGizmoComponentWorldTransformSource *)&DAT_00000028) {
    pUVar1 = (UGizmoComponentWorldTransformSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy> *
             )&this->_padding_,(IGizmoTransformSource *)pUVar1);
  return;
}

// StaticRegisterNativesUGizmoComponentWorldTransformSource @ 1496c28f0

void __cdecl
UGizmoComponentWorldTransformSource::StaticRegisterNativesUGizmoComponentWorldTransformSource(void)

{
  return;
}

