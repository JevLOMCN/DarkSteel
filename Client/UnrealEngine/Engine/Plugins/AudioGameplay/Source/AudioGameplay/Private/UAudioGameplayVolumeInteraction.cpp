// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// StaticClass @ 14d981d60

UClass * __cdecl UAudioGameplayVolumeInteraction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayVolumeInteraction",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeInteraction,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayVolumeInteraction>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeInteraction>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton;
}

// UAudioGameplayVolumeInteraction @ 14d987d20

UAudioGameplayVolumeInteraction * __thiscall
UAudioGameplayVolumeInteraction::UAudioGameplayVolumeInteraction
          (UAudioGameplayVolumeInteraction *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioGameplayVolumeInteraction__6B_;
  return this;
}

// UAudioGameplayVolumeInteraction @ 14d987d50

UAudioGameplayVolumeInteraction * __thiscall
UAudioGameplayVolumeInteraction::UAudioGameplayVolumeInteraction
          (UAudioGameplayVolumeInteraction *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioGameplayVolumeInteraction__6B_;
  return this;
}

// ~UAudioGameplayVolumeInteraction @ 14d9887d0

void __thiscall
UAudioGameplayVolumeInteraction::~UAudioGameplayVolumeInteraction
          (UAudioGameplayVolumeInteraction *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d98df60

UClass * __cdecl UAudioGameplayVolumeInteraction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayVolumeInteraction",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeInteraction,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayVolumeInteraction>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeInteraction>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton;
}

// StaticRegisterNativesUAudioGameplayVolumeInteraction @ 14d9936e0

void __cdecl
UAudioGameplayVolumeInteraction::StaticRegisterNativesUAudioGameplayVolumeInteraction(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

