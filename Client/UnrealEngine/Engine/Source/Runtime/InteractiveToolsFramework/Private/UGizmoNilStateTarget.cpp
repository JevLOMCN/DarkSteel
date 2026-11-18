// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 149670270

UClass * __cdecl UGizmoNilStateTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoNilStateTarget",
               &Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoNilStateTarget,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoNilStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoNilStateTarget>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton;
}

// UGizmoNilStateTarget @ 1496859b0

UGizmoNilStateTarget * __thiscall
UGizmoNilStateTarget::UGizmoNilStateTarget(UGizmoNilStateTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGizmoStateTarget__;
  return this;
}

// UGizmoNilStateTarget @ 1496859f0

UGizmoNilStateTarget * __thiscall
UGizmoNilStateTarget::UGizmoNilStateTarget(UGizmoNilStateTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGizmoStateTarget__;
  return this;
}

// ~UGizmoNilStateTarget @ 149689f20

void __thiscall UGizmoNilStateTarget::~UGizmoNilStateTarget(UGizmoNilStateTarget *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginUpdate @ 1496935e0

void __thiscall UGizmoNilStateTarget::BeginUpdate(UGizmoNilStateTarget *this)

{
  return;
}

// EndUpdate @ 14969dd50

void __thiscall UGizmoNilStateTarget::EndUpdate(UGizmoNilStateTarget *this)

{
  return;
}

// GetPrivateStaticClass @ 1496a5cf0

UClass * __cdecl UGizmoNilStateTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoNilStateTarget",
               &Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoNilStateTarget,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoNilStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoNilStateTarget>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoNilStateTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoNilStateTarget @ 1496c2a80

void __cdecl UGizmoNilStateTarget::StaticRegisterNativesUGizmoNilStateTarget(void)

{
  return;
}

// _getUObject @ 1496ca800

UObject * __thiscall UGizmoNilStateTarget::_getUObject(UGizmoNilStateTarget *this)

{
  return (UObject *)&this[-1].field_0x8;
}

