// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 6

// StaticClass @ 14dadcf00

UClass * __cdecl UMovieSceneChaosCacheSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneChaosCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneChaosCacheSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneChaosCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneChaosCacheSection>,local_res8,
               UMovieSceneBaseCacheSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton;
}

// UMovieSceneChaosCacheSection @ 14dae7dd0

UMovieSceneChaosCacheSection * __thiscall
UMovieSceneChaosCacheSection::UMovieSceneChaosCacheSection
          (UMovieSceneChaosCacheSection *this,FVTableHelper *param_1)

{
  UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
            ((UMovieSceneBaseCacheSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheSection__6B_;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams
            ((FMovieSceneBaseCacheParams *)&this->Params);
  (this->Params)._padding_ = (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  (this->Params).CacheCollection.field0_0x0.DebugPtr = (UChaosCacheCollection *)0x0;
  return this;
}

// UMovieSceneChaosCacheSection @ 14dae7e30

UMovieSceneChaosCacheSection * __thiscall
UMovieSceneChaosCacheSection::UMovieSceneChaosCacheSection
          (UMovieSceneChaosCacheSection *this,FObjectInitializer *param_1)

{
  FMovieSceneChaosCacheParams *this_00;
  
  UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
            ((UMovieSceneBaseCacheSection *)this,param_1);
  this_00 = &this->Params;
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheSection__6B_;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams((FMovieSceneBaseCacheParams *)this_00);
  this_00->_padding_ = (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  (this->Params).CacheCollection.field0_0x0.DebugPtr = (UChaosCacheCollection *)0x0;
  this->_padding_ = (longlong)this_00;
  return this;
}

// ~UMovieSceneChaosCacheSection @ 14dae8e50

void __thiscall
UMovieSceneChaosCacheSection::~UMovieSceneChaosCacheSection(UMovieSceneChaosCacheSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheSection__6B_;
  (this->Params)._padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection((UMovieSceneBaseCacheSection *)this);
  return;
}

// GetPrivateStaticClass @ 14daf86a0

UClass * __cdecl UMovieSceneChaosCacheSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneChaosCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneChaosCacheSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneChaosCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneChaosCacheSection>,local_res8,
               UMovieSceneBaseCacheSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneChaosCacheSection @ 14db053b0

void __cdecl UMovieSceneChaosCacheSection::StaticRegisterNativesUMovieSceneChaosCacheSection(void)

{
  return;
}

