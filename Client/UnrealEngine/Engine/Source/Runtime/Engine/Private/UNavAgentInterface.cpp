// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ec510

UClass * __cdecl UNavAgentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavAgentInterface",
               &Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton,
               StaticRegisterNativesUNavAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAgentInterface>,
               InternalVTableHelperCtorCaller<UNavAgentInterface>,aFStackX_8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton;
}

// UNavAgentInterface @ 1472f1e80

UNavAgentInterface * __thiscall
UNavAgentInterface::UNavAgentInterface(UNavAgentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavAgentInterface__6B_;
  return this;
}

// ~UNavAgentInterface @ 1472f23c0

void __thiscall UNavAgentInterface::~UNavAgentInterface(UNavAgentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3d00

UClass * __cdecl UNavAgentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavAgentInterface",
               &Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton,
               StaticRegisterNativesUNavAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAgentInterface>,
               InternalVTableHelperCtorCaller<UNavAgentInterface>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAgentInterface.InnerSingleton;
}

// StaticRegisterNativesUNavAgentInterface @ 1472f4480

void __cdecl UNavAgentInterface::StaticRegisterNativesUNavAgentInterface(void)

{
  return;
}

// UNavAgentInterface @ 14737ca30

UNavAgentInterface * __thiscall
UNavAgentInterface::UNavAgentInterface(UNavAgentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavAgentInterface__6B_;
  return this;
}

