// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a746d0

UClass * __cdecl UWorldPartitionActorLoaderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionActorLoaderInterface",
               &Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton,
               StaticRegisterNativesUWorldPartitionActorLoaderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionActorLoaderInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionActorLoaderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton;
}

// UWorldPartitionActorLoaderInterface @ 148a800b0

UWorldPartitionActorLoaderInterface * __thiscall
UWorldPartitionActorLoaderInterface::UWorldPartitionActorLoaderInterface
          (UWorldPartitionActorLoaderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionActorLoaderInterface__6B_;
  return this;
}

// UWorldPartitionActorLoaderInterface @ 148a800e0

UWorldPartitionActorLoaderInterface * __thiscall
UWorldPartitionActorLoaderInterface::UWorldPartitionActorLoaderInterface
          (UWorldPartitionActorLoaderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionActorLoaderInterface__6B_;
  return this;
}

// ~UWorldPartitionActorLoaderInterface @ 148a81b30

void __thiscall
UWorldPartitionActorLoaderInterface::~UWorldPartitionActorLoaderInterface
          (UWorldPartitionActorLoaderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148a965f0

UClass * __cdecl UWorldPartitionActorLoaderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionActorLoaderInterface",
               &Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton,
               StaticRegisterNativesUWorldPartitionActorLoaderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionActorLoaderInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionActorLoaderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionActorLoaderInterface @ 148aa29f0

void __cdecl
UWorldPartitionActorLoaderInterface::StaticRegisterNativesUWorldPartitionActorLoaderInterface(void)

{
  return;
}

