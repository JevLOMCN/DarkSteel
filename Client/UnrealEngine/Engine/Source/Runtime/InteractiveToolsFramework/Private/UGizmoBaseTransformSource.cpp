// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14966ff80

UClass * __cdecl UGizmoBaseTransformSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseTransformSource",
               &Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseTransformSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoBaseTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseTransformSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton;
}

// UGizmoBaseTransformSource @ 1496840f0

UGizmoBaseTransformSource * __thiscall
UGizmoBaseTransformSource::UGizmoBaseTransformSource
          (UGizmoBaseTransformSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnTransformChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  *(undefined8 *)&this->OnTransformChanged = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x10 = 0;
  return this;
}

// UGizmoBaseTransformSource @ 149684140

UGizmoBaseTransformSource * __thiscall
UGizmoBaseTransformSource::UGizmoBaseTransformSource
          (UGizmoBaseTransformSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnTransformChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  *(undefined8 *)&this->OnTransformChanged = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x10 = 0;
  return this;
}

// ~UGizmoBaseTransformSource @ 149689830

void __thiscall
UGizmoBaseTransformSource::~UGizmoBaseTransformSource(UGizmoBaseTransformSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformChanged).field_0x8,*(int *)&(this->OnTransformChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnTransformChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformChanged);
  this->_padding_ = (longlong)&___7IGizmoTransformSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496a49e0

UClass * __cdecl UGizmoBaseTransformSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseTransformSource",
               &Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseTransformSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoBaseTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseTransformSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseTransformSource.InnerSingleton;
}

// GetTransform @ 1496a90a0

TTransform<double> * __thiscall
UGizmoBaseTransformSource::GetTransform
          (UGizmoBaseTransformSource *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// SetTransform @ 1496c02a0

void __thiscall
UGizmoBaseTransformSource::SetTransform(UGizmoBaseTransformSource *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\TransformSources.h"
                     ,0x2d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUGizmoBaseTransformSource @ 1496c2850

void __cdecl UGizmoBaseTransformSource::StaticRegisterNativesUGizmoBaseTransformSource(void)

{
  return;
}

// _getUObject @ 1496ca7a0

UObject * __thiscall UGizmoBaseTransformSource::_getUObject(UGizmoBaseTransformSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

