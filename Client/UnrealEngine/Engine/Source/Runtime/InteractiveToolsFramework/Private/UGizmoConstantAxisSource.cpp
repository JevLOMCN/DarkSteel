// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962e830

UClass * __cdecl UGizmoConstantAxisSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoConstantAxisSource",
               &Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoConstantAxisSource,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoConstantAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoConstantAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton;
}

// UGizmoConstantAxisSource @ 14963ab60

UGizmoConstantAxisSource * __thiscall
UGizmoConstantAxisSource::UGizmoConstantAxisSource
          (UGizmoConstantAxisSource *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  return this;
}

// UGizmoConstantAxisSource @ 14963abd0

UGizmoConstantAxisSource * __thiscall
UGizmoConstantAxisSource::UGizmoConstantAxisSource
          (UGizmoConstantAxisSource *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UGizmoConstantAxisSource @ 14963e9b0

void __thiscall UGizmoConstantAxisSource::~UGizmoConstantAxisSource(UGizmoConstantAxisSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IGizmoAxisSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149652c40

TVector<double> * __thiscall
UGizmoConstantAxisSource::GetDirection
          (UGizmoConstantAxisSource *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  dVar1 = (this->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetOrigin @ 149655280

TVector<double> * __thiscall
UGizmoConstantAxisSource::GetOrigin
          (UGizmoConstantAxisSource *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496565f0

UClass * __cdecl UGizmoConstantAxisSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoConstantAxisSource",
               &Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoConstantAxisSource,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoConstantAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoConstantAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoConstantAxisSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoConstantAxisSource @ 149664b10

void __cdecl UGizmoConstantAxisSource::StaticRegisterNativesUGizmoConstantAxisSource(void)

{
  return;
}

// _getUObject @ 14966b210

UObject * __thiscall UGizmoConstantAxisSource::_getUObject(UGizmoConstantAxisSource *this)

{
  return (UObject *)((longlong)&this[-1].Origin.field0_0x0 + 8);
}

