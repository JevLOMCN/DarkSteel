// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 22

// `dynamic_initializer_for_'CVarVirtualIntermediateChannels'' @ 1414511d0

void __cdecl _dynamic_initializer_for__CVarVirtualIntermediateChannels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualIntermediateChannels,L"au.Ambisonics.VirtualIntermediateChannels",
             &VirtualIntermediateChannelsCvar,
             L"Enables decoding to a virtual 7.1 speaker config before mixdown.\n0: Decode directly to output device configuration, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualIntermediateChannels__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSoundFields'' @ 141451220

void __cdecl _dynamic_initializer_for__ModuleRegistrantSoundFields__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SoundFields";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SoundFields",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h__Script_SoundFields_3141587361'' @ 141451270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h__Script_SoundFields_3141587361__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SoundFields",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h__Script_SoundFields_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SoundFields'' @ 1414512b0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SoundFields__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x77a4edaa;
  local_res8[0].DeclarationsHash = 0x867cd413;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SoundFields,L"/Script/SoundFields",
             &Z_Registration_Info_UPackage__Script_SoundFields,local_res8);
  return;
}

// Z_Construct_UPackage__Script_SoundFields @ 14f09c380

UPackage * __cdecl Z_Construct_UPackage__Script_SoundFields(void)

{
  if (Z_Registration_Info_UPackage__Script_SoundFields.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SoundFields.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SoundFields.OuterSingleton;
}

// Z_Construct_UClass_UAmbisonicsEncodingSettings @ 14f09c480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAmbisonicsEncodingSettings(void)

{
  if (Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton,
               &Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f09c4e0

void * __thiscall
FSoundFieldsModule::_scalar_deleting_destructor_(FSoundFieldsModule *this,uint param_1)

{
  this->SFFactory = (FAmbisonicsSoundfieldFormat)&___7FAmbisonicsSoundfieldFormat__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)&this->SFFactory);
  this->SFFactory = (FAmbisonicsSoundfieldFormat)&___7ISoundfieldFactory__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer_const_,ISoundfieldAudioPacket> @ 14f09c550

FAmbisonicsSoundfieldBuffer * __cdecl
DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer_const_,ISoundfieldAudioPacket>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAmbisonicsSoundfieldBuffer *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAmbisonicsSoundfieldBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAmbisonicsSoundfieldBuffer *)param_1;
}

// DowncastSoundfieldRef<FAmbisonicsSoundfieldSettings_const_,ISoundfieldEncodingSettingsProxy> @ 14f09c5a0

FAmbisonicsSoundfieldSettings * __cdecl
DowncastSoundfieldRef<FAmbisonicsSoundfieldSettings_const_,ISoundfieldEncodingSettingsProxy>
          (ISoundfieldEncodingSettingsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAmbisonicsSoundfieldSettings *pFVar3;
  
  if (param_1 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAmbisonicsSoundfieldSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAmbisonicsSoundfieldSettings *)param_1;
}

// InternalConstructor<UAmbisonicsEncodingSettings> @ 14f09c5f0

void __cdecl InternalConstructor<UAmbisonicsEncodingSettings>(FObjectInitializer *param_1)

{
  USoundfieldEncodingSettingsBase *this;
  
  this = (USoundfieldEncodingSettingsBase *)param_1->Obj;
  if (this != (USoundfieldEncodingSettingsBase *)0x0) {
    USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase(this,param_1);
    *(undefined ***)this = &___7UAmbisonicsEncodingSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings> @ 14f09c620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAmbisonicsEncodingSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
              ((USoundfieldEncodingSettingsBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAmbisonicsEncodingSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14f09c8f0

void * __thiscall
FAmbisonicsMixer::_scalar_deleting_destructor_(FAmbisonicsMixer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->RotatedAudio)._padding_ = (longlong)&___7FAmbisonicsSoundfieldBuffer__6B_;
  pFVar1 = (this->RotatedAudio).AudioBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RotatedAudio)._padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  this->_padding_ = (longlong)&___7ISoundfieldMixerStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f09c960

void * __thiscall
FAmbisonicsOrderConverter::_scalar_deleting_destructor_
          (FAmbisonicsOrderConverter *this,uint param_1)

{
  *this = (FAmbisonicsOrderConverter)&___7ISoundfieldTranscodeStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f09c9a0

void * __thiscall
FAmbisonicsSoundfieldDecoder::_scalar_deleting_destructor_
          (FAmbisonicsSoundfieldDecoder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldDecoder__6B_;
  pFVar1 = (this->DecoderOutputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RotatedAudio)._padding_ = (longlong)&___7FAmbisonicsSoundfieldBuffer__6B_;
  pFVar1 = (this->RotatedAudio).AudioBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RotatedAudio)._padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  FSoundFieldDecoder::~FSoundFieldDecoder(&this->Decoder);
  this->_padding_ = (longlong)&___7ISoundfieldDecoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f09ca40

void * __thiscall
FAmbisonicsSoundfieldEncoder::_scalar_deleting_destructor_
          (FAmbisonicsSoundfieldEncoder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldEncoder__6B_;
  pFVar1 = (this->Encoder).MixdownGainsMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Encoder).SpeakerGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Encoder).VirtualSpeakerScratchBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundfieldEncoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f09cac0

void * __thiscall
FAmbisonicsSoundfieldFormat::_scalar_deleting_destructor_
          (FAmbisonicsSoundfieldFormat *this,uint param_1)

{
  *this = (FAmbisonicsSoundfieldFormat)&___7FAmbisonicsSoundfieldFormat__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)this);
  *this = (FAmbisonicsSoundfieldFormat)&___7ISoundfieldFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f09cb10

void * __thiscall
UAmbisonicsEncodingSettings::_scalar_deleting_destructor_
          (UAmbisonicsEncodingSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAmbisonicsEncodingSettings__6B_;
  USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeSoundFields @ 14f09d1d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundFields(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundFields_init @ 14f09d1e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundFields_init(void)

{
  return;
}

// Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister @ 14f09df70

UClass * __cdecl Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SoundFields",L"AmbisonicsEncodingSettings",
               &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton,
               UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAmbisonicsEncodingSettings>,
               InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_SoundFields @ 14f09e030

void __cdecl IMPLEMENT_MODULE_SoundFields(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualIntermediateChannels'' @ 150471b80

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualIntermediateChannels__(void)

{
  CVarVirtualIntermediateChannels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualIntermediateChannels);
  return;
}

