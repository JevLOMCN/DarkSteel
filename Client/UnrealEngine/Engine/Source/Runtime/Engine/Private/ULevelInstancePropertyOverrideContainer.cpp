// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148a74550

UClass * __cdecl ULevelInstancePropertyOverrideContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideContainer",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverrideContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideContainer>
               ,InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideContainer>,local_res8,
               UActorDescContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton;
}

// ULevelInstancePropertyOverrideContainer @ 148a7fc20

ULevelInstancePropertyOverrideContainer * __thiscall
ULevelInstancePropertyOverrideContainer::ULevelInstancePropertyOverrideContainer
          (ULevelInstancePropertyOverrideContainer *this,FVTableHelper *param_1)

{
  UActorDescContainer::UActorDescContainer((UActorDescContainer *)this,param_1);
  *(undefined ***)this = &___7ULevelInstancePropertyOverrideContainer__6B_;
  return this;
}

// ~ULevelInstancePropertyOverrideContainer @ 148a81960

void __thiscall
ULevelInstancePropertyOverrideContainer::~ULevelInstancePropertyOverrideContainer
          (ULevelInstancePropertyOverrideContainer *this)

{
  *(undefined ***)this = &___7ULevelInstancePropertyOverrideContainer__6B_;
  UActorDescContainer::~UActorDescContainer((UActorDescContainer *)this);
  return;
}

// GetPrivateStaticClass @ 148a95f50

UClass * __cdecl ULevelInstancePropertyOverrideContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideContainer",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton,
               StaticRegisterNativesULevelInstancePropertyOverrideContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideContainer>
               ,InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideContainer>,local_res8,
               UActorDescContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton;
}

// StaticRegisterNativesULevelInstancePropertyOverrideContainer @ 148aa2930

void __cdecl
ULevelInstancePropertyOverrideContainer::
StaticRegisterNativesULevelInstancePropertyOverrideContainer(void)

{
  return;
}

