// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpusAudioDecoder
// Functions: 8

// `dynamic_initializer_for_'LogOpusAudioDecoder'' @ 1410a9330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpusAudioDecoder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpusAudioDecoder,L"LogOpusAudioDecoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpusAudioDecoder__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpusAudioDecoder'' @ 1410a9370

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpusAudioDecoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpusAudioDecoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpusAudioDecoder",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOpusAudioDecoderModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 1410a93c0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `scalar_deleting_destructor' @ 146bc9d80

void * __thiscall
FOpusAudioDecoderModule::_scalar_deleting_destructor_(FOpusAudioDecoderModule *this,uint param_1)

{
  IAudioInfoFactory *pIVar1;
  
  pIVar1 = (this->Factory).Ptr;
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc9e20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FOpusAudioInfo_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FOpusAudioInfo_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVFOpusAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc9fe0

void * __thiscall FOpusAudioInfo::_scalar_deleting_destructor_(FOpusAudioInfo *this,uint param_1)

{
  FOpusDecoderWrapper *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->OpusDecoderWrapper;
  this->_padding_ = (longlong)&___7FOpusAudioInfo__6B_;
  if (pFVar1 != (FOpusDecoderWrapper *)0x0) {
    FMemory::Free(pFVar1->Decoder);
    ::operator_delete(pFVar1,0x10);
    this->OpusDecoderWrapper = (FOpusDecoderWrapper *)0x0;
  }
  pFVar2 = (this->PreviousDecodedUnusedSamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// IMPLEMENT_MODULE_OpusAudioDecoder @ 146bcad30

void __cdecl IMPLEMENT_MODULE_OpusAudioDecoder(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogOpusAudioDecoder'' @ 1503df370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpusAudioDecoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpusAudioDecoder);
  return;
}

