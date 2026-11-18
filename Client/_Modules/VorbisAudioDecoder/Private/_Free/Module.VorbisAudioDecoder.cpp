// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VorbisAudioDecoder
// Functions: 21

// `dynamic_initializer_for_'CVarVorbisReadFailiureTimeout'' @ 1410a91b0

void __cdecl _dynamic_initializer_for__CVarVorbisReadFailiureTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVorbisReadFailiureTimeout,L"au.vorbis.ReadFailiureTimeout",
             &VorbisReadFailiureTimeoutCVar,
             L"When set to 1, we bail on decoding Ogg Vorbis sounds if we were not able to successfully decode them after several attempts.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVorbisReadFailiureTimeout__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantVorbisAudioDecoder'' @ 1410a9200

void __cdecl _dynamic_initializer_for__ModuleRegistrantVorbisAudioDecoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "VorbisAudioDecoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"VorbisAudioDecoder",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FVorbisAudioDecoderModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 1410a9250

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_DEFAULT'' @ 1410a9270

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_DEFAULT__(void)

{
  OV_CALLBACKS_DEFAULT.read_func = fread_exref;
  OV_CALLBACKS_DEFAULT.close_func = fclose_exref;
  OV_CALLBACKS_DEFAULT.tell_func = ftell_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_NOCLOSE'' @ 1410a92b0

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_NOCLOSE__(void)

{
  OV_CALLBACKS_NOCLOSE.read_func = fread_exref;
  OV_CALLBACKS_NOCLOSE.tell_func = ftell_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_STREAMONLY'' @ 1410a92e0

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_STREAMONLY__(void)

{
  OV_CALLBACKS_STREAMONLY.read_func = fread_exref;
  OV_CALLBACKS_STREAMONLY.close_func = fclose_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_STREAMONLY_NOCLOSE'' @ 1410a9310

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_STREAMONLY_NOCLOSE__(void)

{
  OV_CALLBACKS_STREAMONLY_NOCLOSE.read_func = fread_exref;
  return;
}

// `scalar_deleting_destructor' @ 146bc78a0

void * __thiscall
FVorbisAudioDecoderModule::_scalar_deleting_destructor_
          (FVorbisAudioDecoderModule *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146bc7940

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FVorbisAudioInfo_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FVorbisAudioInfo_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFVorbisAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bc7c60

void * __thiscall
FVorbisAudioInfo::_scalar_deleting_destructor_(FVorbisAudioInfo *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FVorbisFileWrapper *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  lpCriticalSection = &this->VorbisCriticalSection;
  this->_padding_ = (longlong)&___7FVorbisAudioInfo__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->VFWrapper == (FVorbisFileWrapper *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VFWrapper != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x70,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pFVar1 = this->VFWrapper;
  if (pFVar1 != (FVorbisFileWrapper *)0x0) {
    if (bDllLoaded != (FThreadSafeBool)0x0) {
      ov_clear(pFVar1);
    }
    ::operator_delete(pFVar1,0x348);
  }
  this->VFWrapper = (FVorbisFileWrapper *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FAudioChunkHandle::~FAudioChunkHandle(&this->CurCompressedChunkHandle);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ICompressedAudioInfo::~ICompressedAudioInfo((ICompressedAudioInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// GetVorbisError @ 146bc8320

wchar_t * __cdecl GetVorbisError(int param_1)

{
  switch(param_1) {
  case -0x8a:
    return L"OV_ENOSEEK";
  case -0x89:
    return L"OV_EBADLINK";
  case -0x88:
    return L"OV_EBADPACKET";
  case -0x87:
    return L"OV_ENOTAUDIO";
  case -0x86:
    return L"OV_EVERSION";
  case -0x85:
    return L"OV_EBADHEADER";
  case -0x84:
    return L"OV_ENOTVORBIS";
  case -0x83:
    return L"OV_EINVAL";
  case -0x82:
    return L"OV_EIMPL";
  case -0x81:
    return L"OV_EFAULT";
  case -0x80:
    return L"OV_EREAD";
  default:
    return L"Unknown";
  case -3:
    return L"OV_HOLE";
  case -2:
    return L"OV_EOF";
  case -1:
    return L"OV_FALSE";
  }
}

// LoadVorbisLibraries @ 146bc8510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LoadVorbisLibraries(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  ForAnyElementType FVar9;
  FThreadSafeBool FVar10;
  int iVar11;
  FThreadSafeBool FVar12;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (!bIsInitialized) {
    bIsInitialized = true;
    FString::FString(&local_d8,L"VS2015/");
    FString::FString(&local_f8,L"Win32");
    FString::FString(&local_e8,L".dll");
    FString::operator=(&local_f8,L"Win64");
    FString::operator=(&local_e8,L"_64.dll");
    pTVar5 = &FPaths::EngineDir(&local_38)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_b8,pTVar5,0x1a - (uint)(pTVar5->ArrayNum != 0));
    FString::PathAppend((FString *)&local_b8,L"Binaries/ThirdParty/Ogg/",0x18);
    iVar11 = 2;
    FVar12 = (FThreadSafeBool)0x0;
    FVar10 = (FThreadSafeBool)(local_f8.Data.ArrayNum + -1);
    if (local_f8.Data.ArrayNum == 0) {
      FVar10 = FVar12;
    }
    if ((local_b8.ArrayNum != 0) || (iVar3 = 2, FVar10 == (FThreadSafeBool)0xffffffff)) {
      iVar3 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_c8,&local_b8,(int)FVar10 + iVar3);
    FString::PathAppend((FString *)&local_c8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                        (int)FVar10);
    iVar3 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    if ((local_c8.ArrayNum != 0) || (iVar4 = 2, iVar3 == -1)) {
      iVar4 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_78,&local_c8,iVar4 + iVar3);
    FString::PathAppend((FString *)&local_78,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar3);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pTVar5 = &FPaths::EngineDir(&local_28)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_98,pTVar5,0x1d - (uint)(pTVar5->ArrayNum != 0));
    FString::PathAppend((FString *)&local_98,L"Binaries/ThirdParty/Vorbis/",0x1b);
    FVar10 = (FThreadSafeBool)(local_f8.Data.ArrayNum + -1);
    if (local_f8.Data.ArrayNum == 0) {
      FVar10 = FVar12;
    }
    if ((local_98.ArrayNum != 0) || (iVar3 = 2, FVar10 == (FThreadSafeBool)0xffffffff)) {
      iVar3 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_a8,&local_98,(int)FVar10 + iVar3);
    FString::PathAppend((FString *)&local_a8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                        (int)FVar10);
    FVar10 = (FThreadSafeBool)(local_d8.Data.ArrayNum + -1);
    if (local_d8.Data.ArrayNum == 0) {
      FVar10 = FVar12;
    }
    if ((local_a8.ArrayNum != 0) || (FVar10 == (FThreadSafeBool)0xffffffff)) {
      iVar11 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_88,&local_a8,(int)FVar10 + iVar11);
    FString::PathAppend((FString *)&local_88,(wchar_t *)local_d8.Data.AllocatorInstance.Data,
                        (int)FVar10);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FString::ConcatFC(&local_68,(FString *)&local_78,L"libogg");
    FString::ConcatFF(&local_128,&local_68,&local_e8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar9.Data = local_128.Data.AllocatorInstance.Data;
    }
    pvVar6 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar9.Data);
    if ((pvVar6 == (void *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("LibOggHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x33b,L"Failed to load DLL %s"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FString::ConcatFC(&local_58,(FString *)&local_88,L"libvorbis");
    FString::ConcatFF(&local_118,&local_58,&local_e8);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = local_118.Data.ArrayNum;
    local_128.Data.ArrayMax = local_118.Data.ArrayMax;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar9.Data = local_128.Data.AllocatorInstance.Data;
    }
    pvVar7 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar9.Data);
    if ((pvVar7 == (void *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("LibVorbisHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x340,L"Failed to load DLL %s"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FString::ConcatFC(&local_48,(FString *)&local_88,L"libvorbisfile");
    FString::ConcatFF(&local_108,&local_48,&local_e8);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = local_108.Data.ArrayNum;
    local_128.Data.ArrayMax = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar9.Data = local_128.Data.AllocatorInstance.Data;
    }
    pvVar8 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar9.Data);
    if ((pvVar8 == (void *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("LibVorbisFileHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x344,L"Failed to load DLL %s"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((pvVar6 == (void *)0x0) || (pvVar7 == (void *)0x0)) ||
       (bDllLoaded = (FThreadSafeBool)0x1, pvVar8 == (void *)0x0)) {
      bDllLoaded = FVar12;
    }
    LOCK();
    UNLOCK();
    if (bDllLoaded == (FThreadSafeBool)0x0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else if (3 < (byte)LogAudioDebug._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogAudioDebug);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OggCloseMemory @ 146bc8a80

int __cdecl OggCloseMemory(void *param_1)

{
  return 0;
}

// OggCloseStreaming @ 146bc8a90

int __cdecl OggCloseStreaming(void *param_1)

{
  return 0;
}

// OggReadMemory @ 146bc8aa0

ulong64 __cdecl OggReadMemory(void *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  uint uVar5;
  
  if (param_1 == (void *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("datasource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x82,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar5 = (int)param_2 * (int)param_3;
  if (param_1 == (void *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar3 = *(int *)((longlong)param_4 + 0x30) - *(uint *)((longlong)param_4 + 0x34);
  if (uVar5 < uVar3) {
    uVar3 = uVar5;
  }
  memcpy(param_1,(void *)((ulonglong)*(uint *)((longlong)param_4 + 0x34) +
                         *(longlong *)((longlong)param_4 + 0x28)),(ulonglong)uVar3);
  *(int *)((longlong)param_4 + 0x34) = *(int *)((longlong)param_4 + 0x34) + uVar3;
  return (ulonglong)uVar3;
}

// OggReadStreaming @ 146bc8b90

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl OggReadStreaming(void *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1 == (void *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x105,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("datasource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x106,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FVorbisAudioInfo::ReadStreaming(param_4,param_1,(int)param_3 * (int)param_2);
  }
  return uVar3;
}

// OggSeekMemory @ 146bc8c60

int __cdecl OggSeekMemory(void *param_1,long64 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)param_2;
  if (param_3 == 0) {
    *(int *)((longlong)param_1 + 0x34) = iVar4;
  }
  else if (param_3 == 1) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + iVar4;
  }
  else if (param_3 == 2) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x30) - iVar4;
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x98,L"Uknown seek type");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x30);
  if (*(uint *)((longlong)param_1 + 0x34) < *(uint *)((longlong)param_1 + 0x30)) {
    uVar2 = *(uint *)((longlong)param_1 + 0x34);
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar2;
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar5;
  return uVar5;
}

// OggTellMemory @ 146bc8ce0

long __cdecl OggTellMemory(void *param_1)

{
  return *(long *)((longlong)param_1 + 0x34);
}

// IMPLEMENT_MODULE_VorbisAudioDecoder @ 146bc9c10

void __cdecl IMPLEMENT_MODULE_VorbisAudioDecoder(void)

{
  return;
}

// _ov_header_fseek_wrap @ 146bc9c20

int __cdecl _ov_header_fseek_wrap(_iobuf *param_1,long64 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (_iobuf *)0x0) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146bc9c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _fseeki64((FILE *)param_1,param_2,param_3);
  return iVar1;
}

// `dynamic_atexit_destructor_for_'CVarVorbisReadFailiureTimeout'' @ 1503df350

void __cdecl _dynamic_atexit_destructor_for__CVarVorbisReadFailiureTimeout__(void)

{
  CVarVorbisReadFailiureTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVorbisReadFailiureTimeout);
  return;
}

