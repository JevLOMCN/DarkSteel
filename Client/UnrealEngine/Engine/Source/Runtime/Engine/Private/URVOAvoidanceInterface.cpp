// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147322150

UClass * __cdecl URVOAvoidanceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RVOAvoidanceInterface",
               &Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton,
               StaticRegisterNativesURVOAvoidanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URVOAvoidanceInterface>,
               InternalVTableHelperCtorCaller<URVOAvoidanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton;
}

// URVOAvoidanceInterface @ 147324cd0

URVOAvoidanceInterface * __thiscall
URVOAvoidanceInterface::URVOAvoidanceInterface(URVOAvoidanceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URVOAvoidanceInterface__6B_;
  return this;
}

// ~URVOAvoidanceInterface @ 147325410

void __thiscall URVOAvoidanceInterface::~URVOAvoidanceInterface(URVOAvoidanceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147327520

UClass * __cdecl URVOAvoidanceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RVOAvoidanceInterface",
               &Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton,
               StaticRegisterNativesURVOAvoidanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URVOAvoidanceInterface>,
               InternalVTableHelperCtorCaller<URVOAvoidanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URVOAvoidanceInterface.InnerSingleton;
}

// StaticRegisterNativesURVOAvoidanceInterface @ 1473282d0

void __cdecl URVOAvoidanceInterface::StaticRegisterNativesURVOAvoidanceInterface(void)

{
  return;
}

// URVOAvoidanceInterface @ 14737cf20

URVOAvoidanceInterface * __thiscall
URVOAvoidanceInterface::URVOAvoidanceInterface
          (URVOAvoidanceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URVOAvoidanceInterface__6B_;
  return this;
}

