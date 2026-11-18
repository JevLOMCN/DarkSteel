// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 14658ad20

UClass * __cdecl UMovieScene3DTransformSectionConstraints::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformSectionConstraints",
               &Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformSectionConstraints,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene3DTransformSectionConstraints>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformSectionConstraints>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton;
}

// UMovieScene3DTransformSectionConstraints @ 14661a740

UMovieScene3DTransformSectionConstraints * __thiscall
UMovieScene3DTransformSectionConstraints::UMovieScene3DTransformSectionConstraints
          (UMovieScene3DTransformSectionConstraints *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScene3DTransformSectionConstraints__6B_;
  (this->ConstraintsChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsChannels).ArrayNum = 0;
  (this->ConstraintsChannels).ArrayMax = 0;
  return this;
}

// UMovieScene3DTransformSectionConstraints @ 14661a780

UMovieScene3DTransformSectionConstraints * __thiscall
UMovieScene3DTransformSectionConstraints::UMovieScene3DTransformSectionConstraints
          (UMovieScene3DTransformSectionConstraints *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScene3DTransformSectionConstraints__6B_;
  (this->ConstraintsChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsChannels).ArrayNum = 0;
  (this->ConstraintsChannels).ArrayMax = 0;
  return this;
}

// ~UMovieScene3DTransformSectionConstraints @ 146621920

void __thiscall
UMovieScene3DTransformSectionConstraints::~UMovieScene3DTransformSectionConstraints
          (UMovieScene3DTransformSectionConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScene3DTransformSectionConstraints__6B_;
  DestructItems<FConstraintAndActiveChannel,int>
            ((FConstraintAndActiveChannel *)(this->ConstraintsChannels).AllocatorInstance.Data,
             (this->ConstraintsChannels).ArrayNum);
  pFVar1 = (this->ConstraintsChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1466961c0

UClass * __cdecl UMovieScene3DTransformSectionConstraints::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformSectionConstraints",
               &Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformSectionConstraints,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene3DTransformSectionConstraints>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformSectionConstraints>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.InnerSingleton;
}

// StaticRegisterNativesUMovieScene3DTransformSectionConstraints @ 1466fe730

void __cdecl
UMovieScene3DTransformSectionConstraints::
StaticRegisterNativesUMovieScene3DTransformSectionConstraints(void)

{
  return;
}

