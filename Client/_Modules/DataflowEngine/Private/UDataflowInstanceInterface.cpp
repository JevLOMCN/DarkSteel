// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 6

// StaticClass @ 1462c5cb0

UClass * __cdecl UDataflowInstanceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowInstanceInterface",
               &Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton,
               StaticRegisterNativesUDataflowInstanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowInstanceInterface>,
               InternalVTableHelperCtorCaller<UDataflowInstanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton;
}

// UDataflowInstanceInterface @ 1462cf3c0

UDataflowInstanceInterface * __thiscall
UDataflowInstanceInterface::UDataflowInstanceInterface
          (UDataflowInstanceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowInstanceInterface__6B_;
  return this;
}

// UDataflowInstanceInterface @ 1462cf3f0

UDataflowInstanceInterface * __thiscall
UDataflowInstanceInterface::UDataflowInstanceInterface
          (UDataflowInstanceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowInstanceInterface__6B_;
  return this;
}

// ~UDataflowInstanceInterface @ 1462d0370

void __thiscall
UDataflowInstanceInterface::~UDataflowInstanceInterface(UDataflowInstanceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462ddf60

UClass * __cdecl UDataflowInstanceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowInstanceInterface",
               &Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton,
               StaticRegisterNativesUDataflowInstanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowInstanceInterface>,
               InternalVTableHelperCtorCaller<UDataflowInstanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowInstanceInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowInstanceInterface @ 1462e6280

void __cdecl UDataflowInstanceInterface::StaticRegisterNativesUDataflowInstanceInterface(void)

{
  return;
}

