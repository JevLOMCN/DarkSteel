// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BinkAudioDecoder
// Functions: 10

// `dynamic_initializer_for_'LogBinkAudioDecoder'' @ 1410a9100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBinkAudioDecoder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBinkAudioDecoder,L"LogBinkAudioDecoder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBinkAudioDecoder__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantBinkAudioDecoder'' @ 1410a9140

void __cdecl _dynamic_initializer_for__ModuleRegistrantBinkAudioDecoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "BinkAudioDecoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"BinkAudioDecoder",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FBinkAudioDecoderModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 1410a9190

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `scalar_deleting_destructor' @ 146bc6180

void * __thiscall
FBinkAudioDecoderModule::_scalar_deleting_destructor_(FBinkAudioDecoderModule *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146bc6220

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FBinkAudioInfo_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FBinkAudioInfo_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVFBinkAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc63a0

void * __thiscall FBinkAudioInfo::_scalar_deleting_destructor_(FBinkAudioInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBinkAudioInfo__6B_;
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
    ::operator_delete(this,0x120);
  }
  return this;
}

// BinkAudioValidateBlock @ 146bc6410

uchar __cdecl BinkAudioValidateBlock(uint param_1,uchar *param_2,uint param_3)

{
  uchar uVar1;
  short *psVar2;
  uint *puVar3;
  uint uVar4;
  short *psVar5;
  
  psVar5 = (short *)(param_2 + param_3);
  if (param_3 < 4) {
    return '\x01';
  }
  puVar3 = (uint *)(param_2 + 4);
  if ((short)*(uint *)param_2 == -0x6667) {
    uVar4 = *(uint *)param_2 >> 0x10;
    if (uVar4 == 0xffff) {
      if (param_3 < 8) {
        return '\x01';
      }
      uVar4 = *puVar3;
      puVar3 = (uint *)(param_2 + 8);
      uVar4 = uVar4 & 0xffff;
    }
    if (uVar4 <= param_1) {
      psVar2 = (short *)((ulonglong)uVar4 + (longlong)puVar3);
      if (psVar5 < psVar2) {
        return '\x01';
      }
      if ((psVar2 != psVar5) && (psVar2 + 2 <= psVar5)) {
        uVar1 = '\0';
        if (*psVar2 != -0x6667) {
          uVar1 = '\x02';
        }
        return uVar1;
      }
      return '\0';
    }
  }
  return '\x02';
}

// LogOnce @ 146bc70c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl BinkAudioInfo::LogOnce(BinkAudioFileHeader *param_1)

{
  atomic<bool> aVar1;
  
  aVar1 = bLogHeader;
  LOCK();
  bLogHeader = (atomic<bool>)0x0;
  UNLOCK();
  if ((aVar1 != (atomic<bool>)0x0) && (4 < (byte)LogBinkAudioDecoder._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
    if (4 < (byte)LogBinkAudioDecoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
      if (4 < (byte)LogBinkAudioDecoder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
        if (4 < (byte)LogBinkAudioDecoder._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
          if (4 < (byte)LogBinkAudioDecoder._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
            if (4 < (byte)LogBinkAudioDecoder._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
              if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
                if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u_Header_max_comp_15140e8f8,
                             (FLogCategoryBase *)&LogBinkAudioDecoder);
                  if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
                    if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
                      if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
                        if (4 < (byte)LogBinkAudioDecoder._0_1_) {
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// IMPLEMENT_MODULE_BinkAudioDecoder @ 146bc7750

void __cdecl IMPLEMENT_MODULE_BinkAudioDecoder(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogBinkAudioDecoder'' @ 1503df330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBinkAudioDecoder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBinkAudioDecoder);
  return;
}

