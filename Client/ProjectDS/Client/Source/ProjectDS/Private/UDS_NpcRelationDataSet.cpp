// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b548400

UClass * __cdecl UDS_NpcRelationDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcRelationDataSet",
               &Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton,
               StaticRegisterNativesUDS_NpcRelationDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcRelationDataSet>,
               InternalVTableHelperCtorCaller<UDS_NpcRelationDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton;
}

// UDS_NpcRelationDataSet @ 14b54af70

UDS_NpcRelationDataSet * __thiscall
UDS_NpcRelationDataSet::UDS_NpcRelationDataSet(UDS_NpcRelationDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcRelationDataSet__6B_;
  return this;
}

// UDS_NpcRelationDataSet @ 14b54afa0

UDS_NpcRelationDataSet * __thiscall
UDS_NpcRelationDataSet::UDS_NpcRelationDataSet
          (UDS_NpcRelationDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcRelationDataSet__6B_;
  return this;
}

// ~UDS_NpcRelationDataSet @ 14b54b910

void __thiscall UDS_NpcRelationDataSet::~UDS_NpcRelationDataSet(UDS_NpcRelationDataSet *this)

{
  *(undefined ***)this = &___7UDS_NpcRelationDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54cf70

UClass * __cdecl UDS_NpcRelationDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcRelationDataSet",
               &Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton,
               StaticRegisterNativesUDS_NpcRelationDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcRelationDataSet>,
               InternalVTableHelperCtorCaller<UDS_NpcRelationDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcRelationDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcRelationDataSet @ 14b54d7e0

void __cdecl UDS_NpcRelationDataSet::StaticRegisterNativesUDS_NpcRelationDataSet(void)

{
  return;
}

