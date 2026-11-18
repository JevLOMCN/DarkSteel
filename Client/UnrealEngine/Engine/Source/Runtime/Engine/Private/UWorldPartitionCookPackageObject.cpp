// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a2abe0

UClass * __cdecl UWorldPartitionCookPackageObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCookPackageObject",
               &Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton,
               StaticRegisterNativesUWorldPartitionCookPackageObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCookPackageObject>,
               InternalVTableHelperCtorCaller<UWorldPartitionCookPackageObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton;
}

// UWorldPartitionCookPackageObject @ 148a430c0

UWorldPartitionCookPackageObject * __thiscall
UWorldPartitionCookPackageObject::UWorldPartitionCookPackageObject
          (UWorldPartitionCookPackageObject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionCookPackageObject__6B_;
  return this;
}

// UWorldPartitionCookPackageObject @ 148a430f0

UWorldPartitionCookPackageObject * __thiscall
UWorldPartitionCookPackageObject::UWorldPartitionCookPackageObject
          (UWorldPartitionCookPackageObject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionCookPackageObject__6B_;
  return this;
}

// ~UWorldPartitionCookPackageObject @ 148a44ab0

void __thiscall
UWorldPartitionCookPackageObject::~UWorldPartitionCookPackageObject
          (UWorldPartitionCookPackageObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148a5acc0

UClass * __cdecl UWorldPartitionCookPackageObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCookPackageObject",
               &Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton,
               StaticRegisterNativesUWorldPartitionCookPackageObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCookPackageObject>,
               InternalVTableHelperCtorCaller<UWorldPartitionCookPackageObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionCookPackageObject @ 148a6a560

void __cdecl
UWorldPartitionCookPackageObject::StaticRegisterNativesUWorldPartitionCookPackageObject(void)

{
  return;
}

