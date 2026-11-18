// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 6

// StaticClass @ 14eb24cd0

UClass * __cdecl UTurnBasedMatchInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystem",L"TurnBasedMatchInterface",
               &Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton,
               StaticRegisterNativesUTurnBasedMatchInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTurnBasedMatchInterface>,
               InternalVTableHelperCtorCaller<UTurnBasedMatchInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton;
}

// UTurnBasedMatchInterface @ 14eb31780

UTurnBasedMatchInterface * __thiscall
UTurnBasedMatchInterface::UTurnBasedMatchInterface
          (UTurnBasedMatchInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTurnBasedMatchInterface__6B_;
  return this;
}

// UTurnBasedMatchInterface @ 14eb317b0

UTurnBasedMatchInterface * __thiscall
UTurnBasedMatchInterface::UTurnBasedMatchInterface
          (UTurnBasedMatchInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTurnBasedMatchInterface__6B_;
  return this;
}

// ~UTurnBasedMatchInterface @ 14eb35aa0

void __thiscall UTurnBasedMatchInterface::~UTurnBasedMatchInterface(UTurnBasedMatchInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ec02930

UClass * __cdecl UTurnBasedMatchInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystem",L"TurnBasedMatchInterface",
               &Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton,
               StaticRegisterNativesUTurnBasedMatchInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTurnBasedMatchInterface>,
               InternalVTableHelperCtorCaller<UTurnBasedMatchInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTurnBasedMatchInterface.InnerSingleton;
}

// StaticRegisterNativesUTurnBasedMatchInterface @ 14ec12fa0

void __cdecl UTurnBasedMatchInterface::StaticRegisterNativesUTurnBasedMatchInterface(void)

{
  return;
}

