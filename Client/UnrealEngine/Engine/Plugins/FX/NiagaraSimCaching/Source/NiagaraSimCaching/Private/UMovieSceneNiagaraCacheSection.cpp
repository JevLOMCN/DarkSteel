// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 7

// StaticClass @ 14ea20b50

UClass * __cdecl UMovieSceneNiagaraCacheSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraCacheSection,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheSection>,local_res8,
               UMovieSceneBaseCacheSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton;
}

// UMovieSceneNiagaraCacheSection @ 14ea22850

UMovieSceneNiagaraCacheSection * __thiscall
UMovieSceneNiagaraCacheSection::UMovieSceneNiagaraCacheSection
          (UMovieSceneNiagaraCacheSection *this,FVTableHelper *param_1)

{
  UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
            ((UMovieSceneBaseCacheSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
  FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams(&this->Params);
  this->bCacheOutOfDate = false;
  return this;
}

// UMovieSceneNiagaraCacheSection @ 14ea22890

UMovieSceneNiagaraCacheSection * __thiscall
UMovieSceneNiagaraCacheSection::UMovieSceneNiagaraCacheSection
          (UMovieSceneNiagaraCacheSection *this,FObjectInitializer *param_1)

{
  UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
            ((UMovieSceneBaseCacheSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
  FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams(&this->Params);
  this->_padding_ = (longlong)&this->Params;
  this->bCacheOutOfDate = false;
  return this;
}

// UMovieSceneNiagaraCacheSection @ 14ea228e0

UMovieSceneNiagaraCacheSection * __thiscall
UMovieSceneNiagaraCacheSection::UMovieSceneNiagaraCacheSection(UMovieSceneNiagaraCacheSection *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
            ((UMovieSceneBaseCacheSection *)this,pFVar1);
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
  FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams(&this->Params);
  this->bCacheOutOfDate = false;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return this;
}

// ~UMovieSceneNiagaraCacheSection @ 14ea22ad0

void __thiscall
UMovieSceneNiagaraCacheSection::~UMovieSceneNiagaraCacheSection
          (UMovieSceneNiagaraCacheSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
  FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(&this->Params);
  UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection((UMovieSceneBaseCacheSection *)this);
  return;
}

// GetPrivateStaticClass @ 14ea23b50

UClass * __cdecl UMovieSceneNiagaraCacheSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraCacheSection,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheSection>,local_res8,
               UMovieSceneBaseCacheSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneNiagaraCacheSection @ 14ea24c00

void __cdecl
UMovieSceneNiagaraCacheSection::StaticRegisterNativesUMovieSceneNiagaraCacheSection(void)

{
  return;
}

