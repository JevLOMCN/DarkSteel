// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966ebd0

UClass * __cdecl UGizmoElementGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroup",
               &Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton,
               StaticRegisterNativesUGizmoElementGroup,0x1e8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementGroup>,
               InternalVTableHelperCtorCaller<UGizmoElementGroup>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton;
}

// UGizmoElementGroup @ 149684c10

UGizmoElementGroup * __thiscall
UGizmoElementGroup::UGizmoElementGroup(UGizmoElementGroup *this,FVTableHelper *param_1)

{
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  *(undefined2 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1d8 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined ***)this = &___7UGizmoElementGroup__6B_;
  return this;
}

// UGizmoElementGroup @ 149684c50

UGizmoElementGroup * __thiscall
UGizmoElementGroup::UGizmoElementGroup(UGizmoElementGroup *this,FObjectInitializer *param_1)

{
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  *(undefined2 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1d8 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined ***)this = &___7UGizmoElementGroup__6B_;
  return this;
}

// ~UGizmoElementGroup @ 149689a80

void __thiscall UGizmoElementGroup::~UGizmoElementGroup(UGizmoElementGroup *this)

{
  *(undefined ***)this = &___7UGizmoElementGroupBase__6B_;
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  *(undefined ***)this = &___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496a51f0

UClass * __cdecl UGizmoElementGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroup",
               &Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton,
               StaticRegisterNativesUGizmoElementGroup,0x1e8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementGroup>,
               InternalVTableHelperCtorCaller<UGizmoElementGroup>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroup.InnerSingleton;
}

// StaticRegisterNativesUGizmoElementGroup @ 1496c2960

void __cdecl UGizmoElementGroup::StaticRegisterNativesUGizmoElementGroup(void)

{
  return;
}

