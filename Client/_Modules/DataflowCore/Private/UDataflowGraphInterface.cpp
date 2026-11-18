// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// StaticClass @ 1443ed970

UClass * __cdecl UDataflowGraphInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowGraphInterface",
               &Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton,
               StaticRegisterNativesUDataflowGraphInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowGraphInterface>,
               InternalVTableHelperCtorCaller<UDataflowGraphInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton;
}

// UDataflowGraphInterface @ 1444325d0

UDataflowGraphInterface * __thiscall
UDataflowGraphInterface::UDataflowGraphInterface
          (UDataflowGraphInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowGraphInterface__6B_;
  return this;
}

// UDataflowGraphInterface @ 144432600

UDataflowGraphInterface * __thiscall
UDataflowGraphInterface::UDataflowGraphInterface
          (UDataflowGraphInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowGraphInterface__6B_;
  return this;
}

// ~UDataflowGraphInterface @ 144433e20

void __thiscall UDataflowGraphInterface::~UDataflowGraphInterface(UDataflowGraphInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14444d5d0

UClass * __cdecl UDataflowGraphInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowGraphInterface",
               &Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton,
               StaticRegisterNativesUDataflowGraphInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowGraphInterface>,
               InternalVTableHelperCtorCaller<UDataflowGraphInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowGraphInterface @ 1444654f0

void __cdecl UDataflowGraphInterface::StaticRegisterNativesUDataflowGraphInterface(void)

{
  return;
}

