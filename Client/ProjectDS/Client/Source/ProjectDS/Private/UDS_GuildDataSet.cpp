// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4a2de0

UClass * __cdecl UDS_GuildDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildDataSet",
               &Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton,
               StaticRegisterNativesUDS_GuildDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_GuildDataSet>,
               InternalVTableHelperCtorCaller<UDS_GuildDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton;
}

// UDS_GuildDataSet @ 14b4a7340

UDS_GuildDataSet * __thiscall
UDS_GuildDataSet::UDS_GuildDataSet(UDS_GuildDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_GuildDataSet__6B_;
  return this;
}

// UDS_GuildDataSet @ 14b4a7370

UDS_GuildDataSet * __thiscall
UDS_GuildDataSet::UDS_GuildDataSet(UDS_GuildDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_GuildDataSet__6B_;
  return this;
}

// ~UDS_GuildDataSet @ 14b4a79d0

void __thiscall UDS_GuildDataSet::~UDS_GuildDataSet(UDS_GuildDataSet *this)

{
  *(undefined ***)this = &___7UDS_GuildDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8fb0

UClass * __cdecl UDS_GuildDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildDataSet",
               &Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton,
               StaticRegisterNativesUDS_GuildDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_GuildDataSet>,
               InternalVTableHelperCtorCaller<UDS_GuildDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildDataSet @ 14b4a95e0

void __cdecl UDS_GuildDataSet::StaticRegisterNativesUDS_GuildDataSet(void)

{
  return;
}

