// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a71950

UClass * __cdecl URuntimePartitionLHGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLHGrid",
               &Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton,
               StaticRegisterNativesURuntimePartitionLHGrid,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URuntimePartitionLHGrid>,
               InternalVTableHelperCtorCaller<URuntimePartitionLHGrid>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton;
}

// URuntimePartitionLHGrid @ 148a7fe30

URuntimePartitionLHGrid * __thiscall
URuntimePartitionLHGrid::URuntimePartitionLHGrid
          (URuntimePartitionLHGrid *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionLHGrid__6B_;
  return this;
}

// URuntimePartitionLHGrid @ 148a7fe60

URuntimePartitionLHGrid * __thiscall
URuntimePartitionLHGrid::URuntimePartitionLHGrid
          (URuntimePartitionLHGrid *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionLHGrid__6B_;
  return this;
}

// ~URuntimePartitionLHGrid @ 148a81a70

void __thiscall URuntimePartitionLHGrid::~URuntimePartitionLHGrid(URuntimePartitionLHGrid *this)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96300

UClass * __cdecl URuntimePartitionLHGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLHGrid",
               &Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton,
               StaticRegisterNativesURuntimePartitionLHGrid,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URuntimePartitionLHGrid>,
               InternalVTableHelperCtorCaller<URuntimePartitionLHGrid>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton;
}

// IsValidPartitionTokens @ 148a9a7f0

bool __thiscall
URuntimePartitionLHGrid::IsValidPartitionTokens
          (URuntimePartitionLHGrid *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum == 1;
}

// StaticRegisterNativesURuntimePartitionLHGrid @ 148aa2980

void __cdecl URuntimePartitionLHGrid::StaticRegisterNativesURuntimePartitionLHGrid(void)

{
  return;
}

