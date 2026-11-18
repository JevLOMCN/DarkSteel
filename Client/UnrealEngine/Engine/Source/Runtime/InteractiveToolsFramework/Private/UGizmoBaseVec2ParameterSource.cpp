// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14962a400

UClass * __cdecl UGizmoBaseVec2ParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseVec2ParameterSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseVec2ParameterSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton;
}

// UGizmoBaseVec2ParameterSource @ 14963a6c0

UGizmoBaseVec2ParameterSource * __thiscall
UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource
          (UGizmoBaseVec2ParameterSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnParameterChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  *(undefined8 *)&this->OnParameterChanged = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x10 = 0;
  return this;
}

// UGizmoBaseVec2ParameterSource @ 14963a710

UGizmoBaseVec2ParameterSource * __thiscall
UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource
          (UGizmoBaseVec2ParameterSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnParameterChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  *(undefined8 *)&this->OnParameterChanged = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x10 = 0;
  return this;
}

// ~UGizmoBaseVec2ParameterSource @ 14963e840

void __thiscall
UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource(UGizmoBaseVec2ParameterSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnParameterChanged).field_0x8,*(int *)&(this->OnParameterChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnParameterChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParameterChanged);
  this->_padding_ = (longlong)&___7IGizmoVec2ParameterSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginModify @ 14964b4e0

void __thiscall UGizmoBaseVec2ParameterSource::BeginModify(UGizmoBaseVec2ParameterSource *this)

{
  return;
}

// EndModify @ 149652100

void __thiscall UGizmoBaseVec2ParameterSource::EndModify(UGizmoBaseVec2ParameterSource *this)

{
  return;
}

// GetParameter @ 1496552e0

TVector2<double> * __thiscall
UGizmoBaseVec2ParameterSource::GetParameter
          (UGizmoBaseVec2ParameterSource *this,TVector2<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\ParameterSourcesVec2.h"
                     ,0x36,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector2<double> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149656310

UClass * __cdecl UGizmoBaseVec2ParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseVec2ParameterSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseVec2ParameterSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.InnerSingleton;
}

// SetParameter @ 1496622e0

void __thiscall
UGizmoBaseVec2ParameterSource::SetParameter
          (UGizmoBaseVec2ParameterSource *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\ParameterSourcesVec2.h"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUGizmoBaseVec2ParameterSource @ 149664ad0

void __cdecl UGizmoBaseVec2ParameterSource::StaticRegisterNativesUGizmoBaseVec2ParameterSource(void)

{
  return;
}

// _getUObject @ 14966b1f0

UObject * __thiscall UGizmoBaseVec2ParameterSource::_getUObject(UGizmoBaseVec2ParameterSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

