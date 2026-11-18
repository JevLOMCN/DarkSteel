// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e783f0

UClass * __cdecl UCrowdAgentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdAgentInterface",
               &Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton,
               StaticRegisterNativesUCrowdAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdAgentInterface>,
               InternalVTableHelperCtorCaller<UCrowdAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton;
}

// UCrowdAgentInterface @ 146e81620

UCrowdAgentInterface * __thiscall
UCrowdAgentInterface::UCrowdAgentInterface(UCrowdAgentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCrowdAgentInterface__6B_;
  return this;
}

// ~UCrowdAgentInterface @ 146e820b0

void __thiscall UCrowdAgentInterface::~UCrowdAgentInterface(UCrowdAgentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f5f0

UClass * __cdecl UCrowdAgentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdAgentInterface",
               &Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton,
               StaticRegisterNativesUCrowdAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdAgentInterface>,
               InternalVTableHelperCtorCaller<UCrowdAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton;
}

// StaticRegisterNativesUCrowdAgentInterface @ 146ea0240

void __cdecl UCrowdAgentInterface::StaticRegisterNativesUCrowdAgentInterface(void)

{
  return;
}

// UCrowdAgentInterface @ 146f95190

UCrowdAgentInterface * __thiscall
UCrowdAgentInterface::UCrowdAgentInterface(UCrowdAgentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCrowdAgentInterface__6B_;
  return this;
}

