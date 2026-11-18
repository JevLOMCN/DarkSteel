// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962ebd0

UClass * __cdecl UGizmoWorldAxisSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoWorldAxisSource",
               &Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoWorldAxisSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoWorldAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoWorldAxisSource>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton;
}

// UGizmoWorldAxisSource @ 14963b490

UGizmoWorldAxisSource * __thiscall
UGizmoWorldAxisSource::UGizmoWorldAxisSource(UGizmoWorldAxisSource *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AxisIndex = 2;
  return this;
}

// UGizmoWorldAxisSource @ 14963b4f0

UGizmoWorldAxisSource * __thiscall
UGizmoWorldAxisSource::UGizmoWorldAxisSource
          (UGizmoWorldAxisSource *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AxisIndex = 2;
  return this;
}

// ~UGizmoWorldAxisSource @ 14963ea70

void __thiscall UGizmoWorldAxisSource::~UGizmoWorldAxisSource(UGizmoWorldAxisSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IGizmoAxisSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149652ce0

TVector<double> * __thiscall
UGizmoWorldAxisSource::GetDirection
          (UGizmoWorldAxisSource *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  uVar5 = (uint)this->_padding_;
  uVar4 = 2;
  if ((int)uVar5 < 2) {
    uVar4 = uVar5;
  }
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar5 = uVar4;
  }
  if (2 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0).XYZ[(int)uVar5] = 1.0;
  return __return_storage_ptr__;
}

// GetOrigin @ 1496552c0

TVector<double> * __thiscall
UGizmoWorldAxisSource::GetOrigin
          (UGizmoWorldAxisSource *this,TVector<double> *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 149656a50

UClass * __cdecl UGizmoWorldAxisSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoWorldAxisSource",
               &Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoWorldAxisSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoWorldAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoWorldAxisSource>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoWorldAxisSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoWorldAxisSource @ 149664b70

void __cdecl UGizmoWorldAxisSource::StaticRegisterNativesUGizmoWorldAxisSource(void)

{
  return;
}

// _getUObject @ 14966b230

UObject * __thiscall UGizmoWorldAxisSource::_getUObject(UGizmoWorldAxisSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

