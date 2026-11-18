// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b51b7f0

UClass * __cdecl UDS_M_Status::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Status",
               &Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton,
               StaticRegisterNativesUDS_M_Status,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Status>,InternalVTableHelperCtorCaller<UDS_M_Status>,
               local_res8,UDS_M_StatusBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton;
}

// UDS_M_Status @ 14b522310

UDS_M_Status * __thiscall UDS_M_Status::UDS_M_Status(UDS_M_Status *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Status__6B_;
  return this;
}

// UDS_M_Status @ 14b522340

UDS_M_Status * __thiscall UDS_M_Status::UDS_M_Status(UDS_M_Status *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Status__6B_;
  return this;
}

// ~UDS_M_Status @ 14b5235e0

void __thiscall UDS_M_Status::~UDS_M_Status(UDS_M_Status *this)

{
  *(undefined ***)this = &___7UDS_M_StatusBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526460

UClass * __cdecl UDS_M_Status::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Status",
               &Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton,
               StaticRegisterNativesUDS_M_Status,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Status>,InternalVTableHelperCtorCaller<UDS_M_Status>,
               local_res8,UDS_M_StatusBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Status.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Status @ 14b527570

void __cdecl UDS_M_Status::StaticRegisterNativesUDS_M_Status(void)

{
  return;
}

