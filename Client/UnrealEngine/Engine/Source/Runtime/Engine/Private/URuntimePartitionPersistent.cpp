// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a71d90

UClass * __cdecl URuntimePartitionPersistent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionPersistent",
               &Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton,
               StaticRegisterNativesURuntimePartitionPersistent,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartitionPersistent>,
               InternalVTableHelperCtorCaller<URuntimePartitionPersistent>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton;
}

// URuntimePartitionPersistent @ 148a7fef0

URuntimePartitionPersistent * __thiscall
URuntimePartitionPersistent::URuntimePartitionPersistent
          (URuntimePartitionPersistent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionPersistent__6B_;
  return this;
}

// URuntimePartitionPersistent @ 148a7ff20

URuntimePartitionPersistent * __thiscall
URuntimePartitionPersistent::URuntimePartitionPersistent
          (URuntimePartitionPersistent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7URuntimePartitionPersistent__6B_;
  return this;
}

// ~URuntimePartitionPersistent @ 148a81ab0

void __thiscall
URuntimePartitionPersistent::~URuntimePartitionPersistent(URuntimePartitionPersistent *this)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96480

UClass * __cdecl URuntimePartitionPersistent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionPersistent",
               &Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton,
               StaticRegisterNativesURuntimePartitionPersistent,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartitionPersistent>,
               InternalVTableHelperCtorCaller<URuntimePartitionPersistent>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton;
}

// IsValidPartitionTokens @ 148a9a820

bool __thiscall
URuntimePartitionPersistent::IsValidPartitionTokens
          (URuntimePartitionPersistent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return true;
}

// StaticRegisterNativesURuntimePartitionPersistent @ 148aa29a0

void __cdecl URuntimePartitionPersistent::StaticRegisterNativesURuntimePartitionPersistent(void)

{
  return;
}

