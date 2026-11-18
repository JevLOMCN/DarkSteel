// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e417b0

UClass * __cdecl ULevelStreamingLevelInstanceEditor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditor",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstanceEditor,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditor>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditor>,local_res8,
               ULevelStreamingAlwaysLoaded::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton;
}

// ULevelStreamingLevelInstanceEditor @ 147e56550

ULevelStreamingLevelInstanceEditor * __thiscall
ULevelStreamingLevelInstanceEditor::ULevelStreamingLevelInstanceEditor
          (ULevelStreamingLevelInstanceEditor *this,FVTableHelper *param_1)

{
  ULevelStreamingAlwaysLoaded::ULevelStreamingAlwaysLoaded
            ((ULevelStreamingAlwaysLoaded *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditor__6B_;
  return this;
}

// ULevelStreamingLevelInstanceEditor @ 147e56580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingLevelInstanceEditor * __thiscall
ULevelStreamingLevelInstanceEditor::ULevelStreamingLevelInstanceEditor
          (ULevelStreamingLevelInstanceEditor *this,FObjectInitializer *param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingAlwaysLoaded__6B_;
  if ((this->field_0xf8 & 8) == 0) {
    this->field_0xf8 = this->field_0xf8 | 8;
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,(ULevelStreaming *)this);
      }
    }
  }
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditor__6B_;
  return this;
}

// ~ULevelStreamingLevelInstanceEditor @ 147e57e20

void __thiscall
ULevelStreamingLevelInstanceEditor::~ULevelStreamingLevelInstanceEditor
          (ULevelStreamingLevelInstanceEditor *this)

{
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditor__6B_;
  ULevelStreamingAlwaysLoaded::~ULevelStreamingAlwaysLoaded((ULevelStreamingAlwaysLoaded *)this);
  return;
}

// GetPrivateStaticClass @ 147e6a3f0

UClass * __cdecl ULevelStreamingLevelInstanceEditor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditor",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstanceEditor,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditor>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditor>,local_res8,
               ULevelStreamingAlwaysLoaded::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton;
}

// StaticRegisterNativesULevelStreamingLevelInstanceEditor @ 147e823c0

void __cdecl
ULevelStreamingLevelInstanceEditor::StaticRegisterNativesULevelStreamingLevelInstanceEditor(void)

{
  return;
}

