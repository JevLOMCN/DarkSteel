// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1462691c0

UClass * __cdecl UTestMovieSceneSubSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSubSection",
               &Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSubSection,0x890,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTestMovieSceneSubSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSubSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton;
}

// UTestMovieSceneSubSection @ 14629b400

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTestMovieSceneSubSection * __thiscall
UTestMovieSceneSubSection::UTestMovieSceneSubSection
          (UTestMovieSceneSubSection *this,FVTableHelper *param_1)

{
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// UTestMovieSceneSubSection @ 14629b440

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTestMovieSceneSubSection * __thiscall
UTestMovieSceneSubSection::UTestMovieSceneSubSection
          (UTestMovieSceneSubSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSubSection::UMovieSceneSubSection((UMovieSceneSubSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UTestMovieSceneSubSection @ 14629c0d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UTestMovieSceneSubSection::~UTestMovieSceneSubSection(UTestMovieSceneSubSection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  UMovieSceneSubSection::~UMovieSceneSubSection((UMovieSceneSubSection *)this);
  return;
}

// GetPrivateStaticClass @ 1462b01d0

UClass * __cdecl UTestMovieSceneSubSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSubSection",
               &Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSubSection,0x890,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTestMovieSceneSubSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSubSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSubSection.InnerSingleton;
}

// StaticRegisterNativesUTestMovieSceneSubSection @ 1462bdef0

void __cdecl UTestMovieSceneSubSection::StaticRegisterNativesUTestMovieSceneSubSection(void)

{
  return;
}

