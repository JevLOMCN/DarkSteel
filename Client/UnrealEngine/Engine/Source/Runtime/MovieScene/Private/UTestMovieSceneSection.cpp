// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146268050

UClass * __cdecl UTestMovieSceneSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSection",
               &Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSection,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton;
}

// UTestMovieSceneSection @ 14629b370

UTestMovieSceneSection * __thiscall
UTestMovieSceneSection::UTestMovieSceneSection(UTestMovieSceneSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &___7UTestMovieSceneSection__6B_;
  return this;
}

// UTestMovieSceneSection @ 14629b3a0

UTestMovieSceneSection * __thiscall
UTestMovieSceneSection::UTestMovieSceneSection
          (UTestMovieSceneSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &___7UTestMovieSceneSection__6B_;
  return this;
}

// ~UTestMovieSceneSection @ 14629c090

void __thiscall UTestMovieSceneSection::~UTestMovieSceneSection(UTestMovieSceneSection *this)

{
  *(undefined ***)this = &___7UTestMovieSceneSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1462b0050

UClass * __cdecl UTestMovieSceneSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSection",
               &Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSection,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSection.InnerSingleton;
}

// StaticRegisterNativesUTestMovieSceneSection @ 1462bded0

void __cdecl UTestMovieSceneSection::StaticRegisterNativesUTestMovieSceneSection(void)

{
  return;
}

