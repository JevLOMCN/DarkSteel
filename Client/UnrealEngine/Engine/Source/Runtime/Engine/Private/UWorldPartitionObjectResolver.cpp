// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472864a0

UClass * __cdecl UWorldPartitionObjectResolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionObjectResolver",
               &Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton,
               StaticRegisterNativesUWorldPartitionObjectResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionObjectResolver>,
               InternalVTableHelperCtorCaller<UWorldPartitionObjectResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton;
}

// UWorldPartitionObjectResolver @ 14728cd10

UWorldPartitionObjectResolver * __thiscall
UWorldPartitionObjectResolver::UWorldPartitionObjectResolver
          (UWorldPartitionObjectResolver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionObjectResolver__6B_;
  return this;
}

// UWorldPartitionObjectResolver @ 14728cd40

UWorldPartitionObjectResolver * __thiscall
UWorldPartitionObjectResolver::UWorldPartitionObjectResolver
          (UWorldPartitionObjectResolver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionObjectResolver__6B_;
  return this;
}

// ~UWorldPartitionObjectResolver @ 14728d850

void __thiscall
UWorldPartitionObjectResolver::~UWorldPartitionObjectResolver(UWorldPartitionObjectResolver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147290e50

UClass * __cdecl UWorldPartitionObjectResolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionObjectResolver",
               &Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton,
               StaticRegisterNativesUWorldPartitionObjectResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionObjectResolver>,
               InternalVTableHelperCtorCaller<UWorldPartitionObjectResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionObjectResolver.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionObjectResolver @ 1472914f0

void __cdecl UWorldPartitionObjectResolver::StaticRegisterNativesUWorldPartitionObjectResolver(void)

{
  return;
}

