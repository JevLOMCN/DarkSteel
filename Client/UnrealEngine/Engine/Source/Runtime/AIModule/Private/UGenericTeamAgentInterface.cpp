// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e78da0

UClass * __cdecl UGenericTeamAgentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GenericTeamAgentInterface",
               &Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton,
               StaticRegisterNativesUGenericTeamAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGenericTeamAgentInterface>,
               InternalVTableHelperCtorCaller<UGenericTeamAgentInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton;
}

// UGenericTeamAgentInterface @ 146e81680

UGenericTeamAgentInterface * __thiscall
UGenericTeamAgentInterface::UGenericTeamAgentInterface
          (UGenericTeamAgentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGenericTeamAgentInterface__6B_;
  return this;
}

// UGenericTeamAgentInterface @ 146e816b0

UGenericTeamAgentInterface * __thiscall
UGenericTeamAgentInterface::UGenericTeamAgentInterface
          (UGenericTeamAgentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGenericTeamAgentInterface__6B_;
  return this;
}

// ~UGenericTeamAgentInterface @ 146e820d0

void __thiscall
UGenericTeamAgentInterface::~UGenericTeamAgentInterface(UGenericTeamAgentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f770

UClass * __cdecl UGenericTeamAgentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GenericTeamAgentInterface",
               &Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton,
               StaticRegisterNativesUGenericTeamAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGenericTeamAgentInterface>,
               InternalVTableHelperCtorCaller<UGenericTeamAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton;
}

// StaticRegisterNativesUGenericTeamAgentInterface @ 146ea0260

void __cdecl UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface(void)

{
  return;
}

