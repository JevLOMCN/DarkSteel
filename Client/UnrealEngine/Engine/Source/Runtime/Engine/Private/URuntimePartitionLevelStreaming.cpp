// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a71690

UClass * __cdecl URuntimePartitionLevelStreaming::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLevelStreaming",
               &Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton,
               StaticRegisterNativesURuntimePartitionLevelStreaming,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartitionLevelStreaming>,
               InternalVTableHelperCtorCaller<URuntimePartitionLevelStreaming>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton;
}

// URuntimePartitionLevelStreaming @ 148a7fe90

URuntimePartitionLevelStreaming * __thiscall
URuntimePartitionLevelStreaming::URuntimePartitionLevelStreaming
          (URuntimePartitionLevelStreaming *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionLevelStreaming__6B_;
  return this;
}

// URuntimePartitionLevelStreaming @ 148a7fec0

URuntimePartitionLevelStreaming * __thiscall
URuntimePartitionLevelStreaming::URuntimePartitionLevelStreaming
          (URuntimePartitionLevelStreaming *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionLevelStreaming__6B_;
  return this;
}

// ~URuntimePartitionLevelStreaming @ 148a81a90

void __thiscall
URuntimePartitionLevelStreaming::~URuntimePartitionLevelStreaming
          (URuntimePartitionLevelStreaming *this)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a963c0

UClass * __cdecl URuntimePartitionLevelStreaming::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLevelStreaming",
               &Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton,
               StaticRegisterNativesURuntimePartitionLevelStreaming,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartitionLevelStreaming>,
               InternalVTableHelperCtorCaller<URuntimePartitionLevelStreaming>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton;
}

// IsValidPartitionTokens @ 148a9a800

bool __thiscall
URuntimePartitionLevelStreaming::IsValidPartitionTokens
          (URuntimePartitionLevelStreaming *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum < 3)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesURuntimePartitionLevelStreaming @ 148aa2990

void __cdecl
URuntimePartitionLevelStreaming::StaticRegisterNativesURuntimePartitionLevelStreaming(void)

{
  return;
}

