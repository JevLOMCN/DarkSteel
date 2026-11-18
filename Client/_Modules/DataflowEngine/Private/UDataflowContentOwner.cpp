// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 6

// StaticClass @ 1462c2e60

UClass * __cdecl UDataflowContentOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowContentOwner",
               &Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton,
               StaticRegisterNativesUDataflowContentOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowContentOwner>,
               InternalVTableHelperCtorCaller<UDataflowContentOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton;
}

// UDataflowContentOwner @ 1462cf100

UDataflowContentOwner * __thiscall
UDataflowContentOwner::UDataflowContentOwner(UDataflowContentOwner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowContentOwner__6B_;
  return this;
}

// UDataflowContentOwner @ 1462cf130

UDataflowContentOwner * __thiscall
UDataflowContentOwner::UDataflowContentOwner
          (UDataflowContentOwner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowContentOwner__6B_;
  return this;
}

// ~UDataflowContentOwner @ 1462d0260

void __thiscall UDataflowContentOwner::~UDataflowContentOwner(UDataflowContentOwner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462ddc70

UClass * __cdecl UDataflowContentOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowContentOwner",
               &Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton,
               StaticRegisterNativesUDataflowContentOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowContentOwner>,
               InternalVTableHelperCtorCaller<UDataflowContentOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowContentOwner.InnerSingleton;
}

// StaticRegisterNativesUDataflowContentOwner @ 1462e6240

void __cdecl UDataflowContentOwner::StaticRegisterNativesUDataflowContentOwner(void)

{
  return;
}

