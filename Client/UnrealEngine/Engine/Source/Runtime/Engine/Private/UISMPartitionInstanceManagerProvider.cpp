// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147284dd0

UClass * __cdecl UISMPartitionInstanceManagerProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionInstanceManagerProvider",
               &Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton,
               StaticRegisterNativesUISMPartitionInstanceManagerProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPartitionInstanceManagerProvider>,
               InternalVTableHelperCtorCaller<UISMPartitionInstanceManagerProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton;
}

// UISMPartitionInstanceManagerProvider @ 14728b820

UISMPartitionInstanceManagerProvider * __thiscall
UISMPartitionInstanceManagerProvider::UISMPartitionInstanceManagerProvider
          (UISMPartitionInstanceManagerProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UISMPartitionInstanceManagerProvider__6B_;
  return this;
}

// UISMPartitionInstanceManagerProvider @ 14728b850

UISMPartitionInstanceManagerProvider * __thiscall
UISMPartitionInstanceManagerProvider::UISMPartitionInstanceManagerProvider
          (UISMPartitionInstanceManagerProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UISMPartitionInstanceManagerProvider__6B_;
  return this;
}

// ~UISMPartitionInstanceManagerProvider @ 14728d230

void __thiscall
UISMPartitionInstanceManagerProvider::~UISMPartitionInstanceManagerProvider
          (UISMPartitionInstanceManagerProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f380

UClass * __cdecl UISMPartitionInstanceManagerProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionInstanceManagerProvider",
               &Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton,
               StaticRegisterNativesUISMPartitionInstanceManagerProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPartitionInstanceManagerProvider>,
               InternalVTableHelperCtorCaller<UISMPartitionInstanceManagerProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.InnerSingleton;
}

// StaticRegisterNativesUISMPartitionInstanceManagerProvider @ 147291220

void __cdecl
UISMPartitionInstanceManagerProvider::StaticRegisterNativesUISMPartitionInstanceManagerProvider
          (void)

{
  return;
}

