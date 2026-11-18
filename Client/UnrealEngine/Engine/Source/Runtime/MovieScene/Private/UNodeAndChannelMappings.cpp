// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146162520

UClass * __cdecl UNodeAndChannelMappings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"NodeAndChannelMappings",
               &Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton,
               StaticRegisterNativesUNodeAndChannelMappings,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeAndChannelMappings>,
               InternalVTableHelperCtorCaller<UNodeAndChannelMappings>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton;
}

// UNodeAndChannelMappings @ 146183790

UNodeAndChannelMappings * __thiscall
UNodeAndChannelMappings::UNodeAndChannelMappings
          (UNodeAndChannelMappings *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNodeAndChannelMappings__6B_;
  return this;
}

// UNodeAndChannelMappings @ 1461837c0

UNodeAndChannelMappings * __thiscall
UNodeAndChannelMappings::UNodeAndChannelMappings
          (UNodeAndChannelMappings *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNodeAndChannelMappings__6B_;
  return this;
}

// ~UNodeAndChannelMappings @ 146185f10

void __thiscall UNodeAndChannelMappings::~UNodeAndChannelMappings(UNodeAndChannelMappings *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1461b3300

UClass * __cdecl UNodeAndChannelMappings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"NodeAndChannelMappings",
               &Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton,
               StaticRegisterNativesUNodeAndChannelMappings,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeAndChannelMappings>,
               InternalVTableHelperCtorCaller<UNodeAndChannelMappings>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton;
}

// StaticRegisterNativesUNodeAndChannelMappings @ 1461d49b0

void __cdecl UNodeAndChannelMappings::StaticRegisterNativesUNodeAndChannelMappings(void)

{
  return;
}

