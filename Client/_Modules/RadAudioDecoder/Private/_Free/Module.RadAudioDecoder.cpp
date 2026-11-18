// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 10

// `dynamic_initializer_for_'LogRadAudioDecoder'' @ 1410a9050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRadAudioDecoder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRadAudioDecoder,L"LogRadAudioDecoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRadAudioDecoder__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRadAudioDecoder'' @ 1410a9090

void __cdecl _dynamic_initializer_for__ModuleRegistrantRadAudioDecoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RadAudioDecoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RadAudioDecoder",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FRadAudioDecoderModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1410a90e0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `scalar_deleting_destructor' @ 146bc4e80

void * __thiscall
IAudioInfoFactory::_scalar_deleting_destructor_(IAudioInfoFactory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc4f20

void * __thiscall
FSimpleAudioInfoFactory::_scalar_deleting_destructor_(FSimpleAudioInfoFactory *this,uint param_1)

{
  longlong *plVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FSimpleAudioInfoFactory__6B_;
  pIVar2 = IAudioInfoFactoryRegistry::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,this,this->FormatName);
  if (*(longlong *)&this->CreateLambda != 0) {
    plVar1 = *(longlong **)&(this->CreateLambda).field_0x28;
    plVar3 = (longlong *)&(this->CreateLambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc50e0

void * __thiscall
FRadAudioDecoderModule::_scalar_deleting_destructor_(FRadAudioDecoderModule *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146bc5180

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVFRadAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc5370

void * __thiscall FRadAudioInfo::_scalar_deleting_destructor_(FRadAudioInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRadAudioInfo__6B_;
  pFVar1 = (this->RawMemory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputReservoir).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// IMPLEMENT_MODULE_RadAudioDecoder @ 146bc6030

void __cdecl IMPLEMENT_MODULE_RadAudioDecoder(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogRadAudioDecoder'' @ 1503df310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRadAudioDecoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRadAudioDecoder);
  return;
}

