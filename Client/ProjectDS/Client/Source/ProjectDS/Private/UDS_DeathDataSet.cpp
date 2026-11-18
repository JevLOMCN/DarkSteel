// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b481930

UClass * __cdecl UDS_DeathDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathDataSet",
               &Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DeathDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_DeathDataSet>,
               InternalVTableHelperCtorCaller<UDS_DeathDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton;
}

// UDS_DeathDataSet @ 14b4838f0

UDS_DeathDataSet * __thiscall
UDS_DeathDataSet::UDS_DeathDataSet(UDS_DeathDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_DeathDataSet__6B_;
  return this;
}

// ~UDS_DeathDataSet @ 14b4840b0

void __thiscall UDS_DeathDataSet::~UDS_DeathDataSet(UDS_DeathDataSet *this)

{
  *(undefined ***)this = &___7UDS_DeathDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b485260

UClass * __cdecl UDS_DeathDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathDataSet",
               &Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DeathDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_DeathDataSet>,
               InternalVTableHelperCtorCaller<UDS_DeathDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_DeathDataSet @ 14b485630

void __cdecl UDS_DeathDataSet::StaticRegisterNativesUDS_DeathDataSet(void)

{
  return;
}

// UDS_DeathDataSet @ 14ba32b50

UDS_DeathDataSet * __thiscall
UDS_DeathDataSet::UDS_DeathDataSet(UDS_DeathDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_DeathDataSet__6B_;
  return this;
}

// Update @ 14ba7af60

void __thiscall UDS_DeathDataSet::Update(UDS_DeathDataSet *this,float *param_1)

{
  return;
}

