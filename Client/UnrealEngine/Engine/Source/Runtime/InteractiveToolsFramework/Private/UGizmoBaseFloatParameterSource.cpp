// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14966f330

UClass * __cdecl UGizmoBaseFloatParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseFloatParameterSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseFloatParameterSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton;
}

// UGizmoBaseFloatParameterSource @ 149684050

UGizmoBaseFloatParameterSource * __thiscall
UGizmoBaseFloatParameterSource::UGizmoBaseFloatParameterSource
          (UGizmoBaseFloatParameterSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnParameterChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  *(undefined8 *)&this->OnParameterChanged = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x10 = 0;
  return this;
}

// UGizmoBaseFloatParameterSource @ 1496840a0

UGizmoBaseFloatParameterSource * __thiscall
UGizmoBaseFloatParameterSource::UGizmoBaseFloatParameterSource
          (UGizmoBaseFloatParameterSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnParameterChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  *(undefined8 *)&this->OnParameterChanged = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnParameterChanged).field_0x10 = 0;
  return this;
}

// ~UGizmoBaseFloatParameterSource @ 1496897c0

void __thiscall
UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
          (UGizmoBaseFloatParameterSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnParameterChanged).field_0x8,*(int *)&(this->OnParameterChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnParameterChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParameterChanged);
  this->_padding_ = (longlong)&___7IGizmoFloatParameterSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginModify @ 149693100

void __thiscall UGizmoBaseFloatParameterSource::BeginModify(UGizmoBaseFloatParameterSource *this)

{
  return;
}

// EndModify @ 14969dc70

void __thiscall UGizmoBaseFloatParameterSource::EndModify(UGizmoBaseFloatParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3b10

float __thiscall UGizmoBaseFloatParameterSource::GetParameter(UGizmoBaseFloatParameterSource *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\ParameterSourcesFloat.h"
                     ,0x36,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 1496a4930

UClass * __cdecl UGizmoBaseFloatParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoBaseFloatParameterSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBaseFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoBaseFloatParameterSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.InnerSingleton;
}

// SetParameter @ 1496be6f0

void __thiscall
UGizmoBaseFloatParameterSource::SetParameter(UGizmoBaseFloatParameterSource *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\ParameterSourcesFloat.h"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUGizmoBaseFloatParameterSource @ 1496c2840

void __cdecl
UGizmoBaseFloatParameterSource::StaticRegisterNativesUGizmoBaseFloatParameterSource(void)

{
  return;
}

// _getUObject @ 1496ca790

UObject * __thiscall
UGizmoBaseFloatParameterSource::_getUObject(UGizmoBaseFloatParameterSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

