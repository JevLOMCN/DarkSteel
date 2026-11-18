// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a73080

UClass * __cdecl UWorldPartitionHLODProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODProvider",
               &Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODProvider>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton;
}

// UWorldPartitionHLODProvider @ 148a80230

UWorldPartitionHLODProvider * __thiscall
UWorldPartitionHLODProvider::UWorldPartitionHLODProvider
          (UWorldPartitionHLODProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODProvider__6B_;
  return this;
}

// UWorldPartitionHLODProvider @ 148a80260

UWorldPartitionHLODProvider * __thiscall
UWorldPartitionHLODProvider::UWorldPartitionHLODProvider
          (UWorldPartitionHLODProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODProvider__6B_;
  return this;
}

// ~UWorldPartitionHLODProvider @ 148a81b90

void __thiscall
UWorldPartitionHLODProvider::~UWorldPartitionHLODProvider(UWorldPartitionHLODProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148a968e0

UClass * __cdecl UWorldPartitionHLODProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODProvider",
               &Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODProvider>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionHLODProvider @ 148aa2a90

void __cdecl UWorldPartitionHLODProvider::StaticRegisterNativesUWorldPartitionHLODProvider(void)

{
  return;
}

