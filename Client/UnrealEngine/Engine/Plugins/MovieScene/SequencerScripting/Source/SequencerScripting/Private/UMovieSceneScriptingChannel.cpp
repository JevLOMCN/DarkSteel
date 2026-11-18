// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 8

// StaticClass @ 14c672540

UClass * __cdecl UMovieSceneScriptingChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingChannel,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingChannel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton;
}

// UMovieSceneScriptingChannel @ 14c675a20

UMovieSceneScriptingChannel * __thiscall
UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
          (UMovieSceneScriptingChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingChannel__6B_;
  (this->ChannelName).ComparisonIndex = 0;
  (this->ChannelName).Number = 0;
  return this;
}

// UMovieSceneScriptingChannel @ 14c675a50

UMovieSceneScriptingChannel * __thiscall
UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
          (UMovieSceneScriptingChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingChannel__6B_;
  (this->ChannelName).ComparisonIndex = 0;
  (this->ChannelName).Number = 0;
  return this;
}

// ~UMovieSceneScriptingChannel @ 14c675e80

void __thiscall
UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel(UMovieSceneScriptingChannel *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneScriptingChannel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetKeys @ 14c677920

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingChannel::GetKeys
          (UMovieSceneScriptingChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingChannel.h"
             ,0x2e,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c677ae0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingChannel::GetKeysByIndex
          (UMovieSceneScriptingChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingChannel.h"
             ,0x36,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c679500

UClass * __cdecl UMovieSceneScriptingChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingChannel,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingChannel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingChannel.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneScriptingChannel @ 14c67aa60

void __cdecl UMovieSceneScriptingChannel::StaticRegisterNativesUMovieSceneScriptingChannel(void)

{
  return;
}

