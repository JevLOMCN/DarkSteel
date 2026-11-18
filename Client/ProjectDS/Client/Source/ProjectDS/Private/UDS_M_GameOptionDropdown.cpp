// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b50a0d0

UClass * __cdecl UDS_M_GameOptionDropdown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDropdown",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDropdown,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDropdown>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDropdown>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton;
}

// UDS_M_GameOptionDropdown @ 14b5111e0

UDS_M_GameOptionDropdown * __thiscall
UDS_M_GameOptionDropdown::UDS_M_GameOptionDropdown
          (UDS_M_GameOptionDropdown *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDropdown__6B_;
  return this;
}

// UDS_M_GameOptionDropdown @ 14b511230

UDS_M_GameOptionDropdown * __thiscall
UDS_M_GameOptionDropdown::UDS_M_GameOptionDropdown
          (UDS_M_GameOptionDropdown *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_GameOptionDropdown__6B_;
  return this;
}

// ~UDS_M_GameOptionDropdown @ 14b512f40

void __thiscall UDS_M_GameOptionDropdown::~UDS_M_GameOptionDropdown(UDS_M_GameOptionDropdown *this)

{
  *(undefined ***)this = &___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515e40

UClass * __cdecl UDS_M_GameOptionDropdown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDropdown",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDropdown,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDropdown>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDropdown>,local_res8,
               UDS_M_GameOptionDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDropdown.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDropdown @ 14b516cc0

void __cdecl UDS_M_GameOptionDropdown::StaticRegisterNativesUDS_M_GameOptionDropdown(void)

{
  return;
}

