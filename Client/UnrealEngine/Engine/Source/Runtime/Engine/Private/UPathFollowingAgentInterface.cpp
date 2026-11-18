// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14731ec20

UClass * __cdecl UPathFollowingAgentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PathFollowingAgentInterface",
               &Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton,
               StaticRegisterNativesUPathFollowingAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPathFollowingAgentInterface>,
               InternalVTableHelperCtorCaller<UPathFollowingAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton;
}

// UPathFollowingAgentInterface @ 1473248f0

UPathFollowingAgentInterface * __thiscall
UPathFollowingAgentInterface::UPathFollowingAgentInterface
          (UPathFollowingAgentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPathFollowingAgentInterface__6B_;
  return this;
}

// ~UPathFollowingAgentInterface @ 147325170

void __thiscall
UPathFollowingAgentInterface::~UPathFollowingAgentInterface(UPathFollowingAgentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147326de0

UClass * __cdecl UPathFollowingAgentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PathFollowingAgentInterface",
               &Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton,
               StaticRegisterNativesUPathFollowingAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPathFollowingAgentInterface>,
               InternalVTableHelperCtorCaller<UPathFollowingAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingAgentInterface.InnerSingleton;
}

// StaticRegisterNativesUPathFollowingAgentInterface @ 1473281a0

void __cdecl UPathFollowingAgentInterface::StaticRegisterNativesUPathFollowingAgentInterface(void)

{
  return;
}

// UPathFollowingAgentInterface @ 14737cef0

UPathFollowingAgentInterface * __thiscall
UPathFollowingAgentInterface::UPathFollowingAgentInterface
          (UPathFollowingAgentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPathFollowingAgentInterface__6B_;
  return this;
}

