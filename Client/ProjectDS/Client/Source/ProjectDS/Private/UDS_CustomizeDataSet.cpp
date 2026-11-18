// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b479900

UClass * __cdecl UDS_CustomizeDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeDataSet",
               &Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton,
               StaticRegisterNativesUDS_CustomizeDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CustomizeDataSet>,
               InternalVTableHelperCtorCaller<UDS_CustomizeDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton;
}

// UDS_CustomizeDataSet @ 14b47d590

UDS_CustomizeDataSet * __thiscall
UDS_CustomizeDataSet::UDS_CustomizeDataSet(UDS_CustomizeDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CustomizeDataSet__6B_;
  return this;
}

// ~UDS_CustomizeDataSet @ 14b47de00

void __thiscall UDS_CustomizeDataSet::~UDS_CustomizeDataSet(UDS_CustomizeDataSet *this)

{
  *(undefined ***)this = &___7UDS_CustomizeDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b47f0b0

UClass * __cdecl UDS_CustomizeDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeDataSet",
               &Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton,
               StaticRegisterNativesUDS_CustomizeDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CustomizeDataSet>,
               InternalVTableHelperCtorCaller<UDS_CustomizeDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizeDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_CustomizeDataSet @ 14b47f5c0

void __cdecl UDS_CustomizeDataSet::StaticRegisterNativesUDS_CustomizeDataSet(void)

{
  return;
}

// UDS_CustomizeDataSet @ 14ba32a00

UDS_CustomizeDataSet * __thiscall
UDS_CustomizeDataSet::UDS_CustomizeDataSet(UDS_CustomizeDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CustomizeDataSet__6B_;
  return this;
}

