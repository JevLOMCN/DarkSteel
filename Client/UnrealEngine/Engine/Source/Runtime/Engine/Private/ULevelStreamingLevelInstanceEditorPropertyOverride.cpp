// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e41ca0

UClass * __cdecl ULevelStreamingLevelInstanceEditorPropertyOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditorPropertyOverride",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
                InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride,0x200,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               local_res8,ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
         InnerSingleton;
}

// ULevelStreamingLevelInstanceEditorPropertyOverride @ 147e565f0

ULevelStreamingLevelInstanceEditorPropertyOverride * __thiscall
ULevelStreamingLevelInstanceEditorPropertyOverride::
ULevelStreamingLevelInstanceEditorPropertyOverride
          (ULevelStreamingLevelInstanceEditorPropertyOverride *this,FVTableHelper *param_1)

{
  ULevelStreamingDynamic::ULevelStreamingDynamic((ULevelStreamingDynamic *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
  return this;
}

// ULevelStreamingLevelInstanceEditorPropertyOverride @ 147e56620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingLevelInstanceEditorPropertyOverride * __thiscall
ULevelStreamingLevelInstanceEditorPropertyOverride::
ULevelStreamingLevelInstanceEditorPropertyOverride
          (ULevelStreamingLevelInstanceEditorPropertyOverride *this,FObjectInitializer *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
  return this;
}

// ~ULevelStreamingLevelInstanceEditorPropertyOverride @ 147e57e40

void __thiscall
ULevelStreamingLevelInstanceEditorPropertyOverride::
~ULevelStreamingLevelInstanceEditorPropertyOverride
          (ULevelStreamingLevelInstanceEditorPropertyOverride *this)

{
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  return;
}

// GetPrivateStaticClass @ 147e6a4b0

UClass * __cdecl ULevelStreamingLevelInstanceEditorPropertyOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditorPropertyOverride",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
                InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride,0x200,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               local_res8,ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
         InnerSingleton;
}

// StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride @ 147e823d0

void __cdecl
ULevelStreamingLevelInstanceEditorPropertyOverride::
StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride(void)

{
  return;
}

