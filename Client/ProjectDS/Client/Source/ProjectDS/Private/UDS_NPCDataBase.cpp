// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b53a900

UClass * __cdecl UDS_NPCDataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCDataBase",
               &Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton,
               StaticRegisterNativesUDS_NPCDataBase,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCDataBase>,InternalVTableHelperCtorCaller<UDS_NPCDataBase>,
               aFStackX_8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton;
}

// UDS_NPCDataBase @ 14b5401d0

UDS_NPCDataBase * __thiscall
UDS_NPCDataBase::UDS_NPCDataBase(UDS_NPCDataBase *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NPCDataBase__6B_;
  return this;
}

// UDS_NPCDataBase @ 14b540200

UDS_NPCDataBase * __thiscall
UDS_NPCDataBase::UDS_NPCDataBase(UDS_NPCDataBase *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NPCDataBase__6B_;
  return this;
}

// ~UDS_NPCDataBase @ 14b541470

void __thiscall UDS_NPCDataBase::~UDS_NPCDataBase(UDS_NPCDataBase *this)

{
  *(undefined ***)this = &___7UDS_NPCDataBase__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b542ac0

UClass * __cdecl UDS_NPCDataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCDataBase",
               &Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton,
               StaticRegisterNativesUDS_NPCDataBase,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCDataBase>,InternalVTableHelperCtorCaller<UDS_NPCDataBase>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCDataBase.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCDataBase @ 14b543a60

void __cdecl UDS_NPCDataBase::StaticRegisterNativesUDS_NPCDataBase(void)

{
  return;
}

