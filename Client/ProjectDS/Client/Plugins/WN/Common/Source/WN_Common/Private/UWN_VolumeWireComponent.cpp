// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// StaticClass @ 149482610

UClass * __cdecl UWN_VolumeWireComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeWireComponent",
               &Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton,
               StaticRegisterNativesUWN_VolumeWireComponent,0x550,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_VolumeWireComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeWireComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton;
}

// UWN_VolumeWireComponent @ 14948f7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWN_VolumeWireComponent * __thiscall
UWN_VolumeWireComponent::UWN_VolumeWireComponent
          (UWN_VolumeWireComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->OwnerVolumeComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UWN_VolumeWireComponent @ 14948f860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWN_VolumeWireComponent * __thiscall
UWN_VolumeWireComponent::UWN_VolumeWireComponent
          (UWN_VolumeWireComponent *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->OwnerVolumeComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UWN_VolumeWireComponent @ 149490e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UWN_VolumeWireComponent::~UWN_VolumeWireComponent(UWN_VolumeWireComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 149496c20

TBoxSphereBounds<double,double> * __thiscall
UWN_VolumeWireComponent::CalcBounds
          (UWN_VolumeWireComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerVolumeComponent).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerVolumeComponent).WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x598))(pUVar5,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = 1.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar3;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14949b600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UWN_VolumeWireComponent::CreateSceneProxy(UWN_VolumeWireComponent *this)

{
  bool bVar1;
  FWN_VolumeWireSceneProxy *pFVar2;
  UWN_VolumeComponent *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerVolumeComponent).WeakPtr);
  if (!bVar1) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar2 = ::operator_new(0x6a0);
  if (pFVar2 != (FWN_VolumeWireSceneProxy *)0x0) {
    pUVar3 = (UWN_VolumeComponent *)FWeakObjectPtr::Get(&(this->OwnerVolumeComponent).WeakPtr);
    pFVar2 = FWN_VolumeWireSceneProxy::FWN_VolumeWireSceneProxy(pFVar2,pUVar3,this);
    return (FPrimitiveSceneProxy *)pFVar2;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetPrivateStaticClass @ 1494a25a0

UClass * __cdecl UWN_VolumeWireComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeWireComponent",
               &Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton,
               StaticRegisterNativesUWN_VolumeWireComponent,0x550,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_VolumeWireComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeWireComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_VolumeWireComponent @ 1494ae3f0

void __cdecl UWN_VolumeWireComponent::StaticRegisterNativesUWN_VolumeWireComponent(void)

{
  return;
}

