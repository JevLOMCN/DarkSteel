// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14962ea60

UClass * __cdecl UGizmoConstantFrameAxisSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoConstantFrameAxisSource",
               &Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoConstantFrameAxisSource,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoConstantFrameAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoConstantFrameAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton;
}

// UGizmoConstantFrameAxisSource @ 14963ac40

UGizmoConstantFrameAxisSource * __thiscall
UGizmoConstantFrameAxisSource::UGizmoConstantFrameAxisSource
          (UGizmoConstantFrameAxisSource *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->TangentX).field0_0x0._s_0.X = 1.0;
  (this->TangentY).field0_0x0._s_0.Y = 1.0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->TangentX).field0_0x0._s_0.Y = 0.0;
  (this->TangentX).field0_0x0._s_0.Z = 0.0;
  (this->TangentY).field0_0x0._s_0.X = 0.0;
  (this->TangentY).field0_0x0._s_0.Z = 0.0;
  return this;
}

// UGizmoConstantFrameAxisSource @ 14963acc0

UGizmoConstantFrameAxisSource * __thiscall
UGizmoConstantFrameAxisSource::UGizmoConstantFrameAxisSource
          (UGizmoConstantFrameAxisSource *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->TangentX).field0_0x0._s_0.X = 1.0;
  (this->TangentY).field0_0x0._s_0.Y = 1.0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->TangentX).field0_0x0._s_0.Y = 0.0;
  (this->TangentX).field0_0x0._s_0.Z = 0.0;
  (this->TangentY).field0_0x0._s_0.X = 0.0;
  (this->TangentY).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UGizmoConstantFrameAxisSource @ 14963e9d0

void __thiscall
UGizmoConstantFrameAxisSource::~UGizmoConstantFrameAxisSource(UGizmoConstantFrameAxisSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IGizmoAxisSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149652c60

TVector<double> * __thiscall
UGizmoConstantFrameAxisSource::GetDirection
          (UGizmoConstantFrameAxisSource *this,TVector<double> *__return_storage_ptr__)

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

// GetOrigin @ 1496552a0

TVector<double> * __thiscall
UGizmoConstantFrameAxisSource::GetOrigin
          (UGizmoConstantFrameAxisSource *this,TVector<double> *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1496566a0

UClass * __cdecl UGizmoConstantFrameAxisSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoConstantFrameAxisSource",
               &Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoConstantFrameAxisSource,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoConstantFrameAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoConstantFrameAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoConstantFrameAxisSource.InnerSingleton;
}

// GetTangentVectors @ 149658a00

void __thiscall
UGizmoConstantFrameAxisSource::GetTangentVectors
          (UGizmoConstantFrameAxisSource *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (this->Origin).field0_0x0._s_0.Z;
  (param_1->field0_0x0)._s_0.X = (this->Origin).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->Direction).field0_0x0._s_0.X;
  dVar1 = (this->Direction).field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X = (this->Direction).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->TangentX).field0_0x0._s_0.X;
  return;
}

// HasTangentVectors @ 149658e40

bool __thiscall
UGizmoConstantFrameAxisSource::HasTangentVectors(UGizmoConstantFrameAxisSource *this)

{
  return true;
}

// StaticRegisterNativesUGizmoConstantFrameAxisSource @ 149664b20

void __cdecl UGizmoConstantFrameAxisSource::StaticRegisterNativesUGizmoConstantFrameAxisSource(void)

{
  return;
}

// _getUObject @ 14966b220

UObject * __thiscall UGizmoConstantFrameAxisSource::_getUObject(UGizmoConstantFrameAxisSource *this)

{
  return (UObject *)((longlong)&this[-1].TangentX.field0_0x0 + 8);
}

