// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 6

// StaticClass @ 146bd31a0

UClass * __cdecl UNullAudioCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"NullAudioCaptureProtocol",
               &Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUNullAudioCaptureProtocol,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UNullAudioCaptureProtocol>,
               InternalVTableHelperCtorCaller<UNullAudioCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton;
}

// UNullAudioCaptureProtocol @ 146bd8da0

UNullAudioCaptureProtocol * __thiscall
UNullAudioCaptureProtocol::UNullAudioCaptureProtocol
          (UNullAudioCaptureProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x40 = 0;
  *(undefined ***)this = &___7UNullAudioCaptureProtocol__6B_;
  return this;
}

// UNullAudioCaptureProtocol @ 146bd8dd0

UNullAudioCaptureProtocol * __thiscall
UNullAudioCaptureProtocol::UNullAudioCaptureProtocol
          (UNullAudioCaptureProtocol *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x40 = 0;
  *(undefined ***)this = &___7UNullAudioCaptureProtocol__6B_;
  *(undefined2 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  this->field_0x52 = 0;
  return this;
}

// ~UNullAudioCaptureProtocol @ 146bd98b0

void __thiscall
UNullAudioCaptureProtocol::~UNullAudioCaptureProtocol(UNullAudioCaptureProtocol *this)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146be0f30

UClass * __cdecl UNullAudioCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"NullAudioCaptureProtocol",
               &Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUNullAudioCaptureProtocol,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UNullAudioCaptureProtocol>,
               InternalVTableHelperCtorCaller<UNullAudioCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton;
}

// StaticRegisterNativesUNullAudioCaptureProtocol @ 146be8e40

void __cdecl UNullAudioCaptureProtocol::StaticRegisterNativesUNullAudioCaptureProtocol(void)

{
  return;
}

