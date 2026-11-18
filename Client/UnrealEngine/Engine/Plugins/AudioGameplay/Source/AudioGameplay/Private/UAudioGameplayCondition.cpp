// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// StaticClass @ 14d981b40

UClass * __cdecl UAudioGameplayCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayCondition",
               &Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton,
               StaticRegisterNativesUAudioGameplayCondition,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayCondition>,
               InternalVTableHelperCtorCaller<UAudioGameplayCondition>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton;
}

// UAudioGameplayCondition @ 14d987c60

UAudioGameplayCondition * __thiscall
UAudioGameplayCondition::UAudioGameplayCondition
          (UAudioGameplayCondition *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioGameplayCondition__6B_;
  return this;
}

// UAudioGameplayCondition @ 14d987c90

UAudioGameplayCondition * __thiscall
UAudioGameplayCondition::UAudioGameplayCondition
          (UAudioGameplayCondition *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioGameplayCondition__6B_;
  return this;
}

// ~UAudioGameplayCondition @ 14d988770

void __thiscall UAudioGameplayCondition::~UAudioGameplayCondition(UAudioGameplayCondition *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d98dde0

UClass * __cdecl UAudioGameplayCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayCondition",
               &Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton,
               StaticRegisterNativesUAudioGameplayCondition,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayCondition>,
               InternalVTableHelperCtorCaller<UAudioGameplayCondition>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton;
}

// StaticRegisterNativesUAudioGameplayCondition @ 14d993690

void __cdecl UAudioGameplayCondition::StaticRegisterNativesUAudioGameplayCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioGameplayCondition_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

