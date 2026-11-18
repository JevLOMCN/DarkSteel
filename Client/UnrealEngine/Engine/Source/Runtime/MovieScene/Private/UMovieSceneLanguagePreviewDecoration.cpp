// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 1460676a0

UClass * __cdecl UMovieSceneLanguagePreviewDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneLanguagePreviewDecoration",
               &Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneLanguagePreviewDecoration,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLanguagePreviewDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneLanguagePreviewDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton;
}

// UMovieSceneLanguagePreviewDecoration @ 1460957b0

UMovieSceneLanguagePreviewDecoration * __thiscall
UMovieSceneLanguagePreviewDecoration::UMovieSceneLanguagePreviewDecoration
          (UMovieSceneLanguagePreviewDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLanguagePreviewDecoration__6B_;
  (this->PreviewLanguage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewLanguage).Data.ArrayNum = 0;
  (this->PreviewLanguage).Data.ArrayMax = 0;
  return this;
}

// UMovieSceneLanguagePreviewDecoration @ 1460957f0

UMovieSceneLanguagePreviewDecoration * __thiscall
UMovieSceneLanguagePreviewDecoration::UMovieSceneLanguagePreviewDecoration
          (UMovieSceneLanguagePreviewDecoration *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLanguagePreviewDecoration__6B_;
  (this->PreviewLanguage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewLanguage).Data.ArrayNum = 0;
  (this->PreviewLanguage).Data.ArrayMax = 0;
  return this;
}

// ~UMovieSceneLanguagePreviewDecoration @ 146098580

void __thiscall
UMovieSceneLanguagePreviewDecoration::~UMovieSceneLanguagePreviewDecoration
          (UMovieSceneLanguagePreviewDecoration *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLanguagePreviewDecoration__6B_;
  pFVar1 = (this->PreviewLanguage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindLocalizedAsset @ 1460c5610

UObject * __thiscall
UMovieSceneLanguagePreviewDecoration::FindLocalizedAsset
          (UMovieSceneLanguagePreviewDecoration *this,UObject *param_1)

{
  return param_1;
}

// FindLocalizedAsset @ 1460c5620

UObject * __cdecl
UMovieSceneLanguagePreviewDecoration::FindLocalizedAsset
          (UObject *param_1,UMovieSceneSection *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (param_2 == (UMovieSceneSection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Section",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Decorations\\MovieSceneLanguagePreviewDecoration.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  return param_1;
}

// GetPrivateStaticClass @ 1460cf9b0

UClass * __cdecl UMovieSceneLanguagePreviewDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneLanguagePreviewDecoration",
               &Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneLanguagePreviewDecoration,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLanguagePreviewDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneLanguagePreviewDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneLanguagePreviewDecoration @ 1460fa290

void __cdecl
UMovieSceneLanguagePreviewDecoration::StaticRegisterNativesUMovieSceneLanguagePreviewDecoration
          (void)

{
  return;
}

