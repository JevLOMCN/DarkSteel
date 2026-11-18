// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 7

// StaticClass @ 14c6723d0

UClass * __cdecl UMovieSceneScriptingKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingKey,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingKey>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton;
}

// UMovieSceneScriptingKey @ 14c675bc0

UMovieSceneScriptingKey * __thiscall
UMovieSceneScriptingKey::UMovieSceneScriptingKey
          (UMovieSceneScriptingKey *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle(&this->KeyHandle);
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMovieSceneScriptingKey @ 14c675c00

UMovieSceneScriptingKey * __thiscall
UMovieSceneScriptingKey::UMovieSceneScriptingKey
          (UMovieSceneScriptingKey *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle(&this->KeyHandle);
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMovieSceneScriptingKey @ 14c675f60

void __thiscall UMovieSceneScriptingKey::~UMovieSceneScriptingKey(UMovieSceneScriptingKey *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneScriptingKey__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14c679730

UClass * __cdecl UMovieSceneScriptingKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingKey,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingKey>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingKey.InnerSingleton;
}

// GetTime @ 14c679ca0

FFrameTime __thiscall
UMovieSceneScriptingKey::GetTime(UMovieSceneScriptingKey *this,EMovieSceneTimeUnit param_1)

{
  undefined7 in_register_00000011;
  FFrameTime FVar1;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.FrameNumber.Value._0_1_ = param_1;
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingChannel.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// StaticRegisterNativesUMovieSceneScriptingKey @ 14c67aaf0

void __cdecl UMovieSceneScriptingKey::StaticRegisterNativesUMovieSceneScriptingKey(void)

{
  return;
}

