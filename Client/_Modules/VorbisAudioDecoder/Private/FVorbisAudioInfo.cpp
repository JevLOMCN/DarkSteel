// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VorbisAudioDecoder
// Functions: 26

// FVorbisAudioInfo @ 146bc7a80

FVorbisAudioInfo * __thiscall FVorbisAudioInfo::FVorbisAudioInfo(FVorbisAudioInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FVorbisFileWrapper *_Dst;
  FVorbisAudioInfo *pFVar3;
  FVorbisFileWrapper *pFVar4;
  
  ICompressedAudioInfo::ICompressedAudioInfo((ICompressedAudioInfo *)this);
  this->_padding_ = (longlong)&___7FVorbisAudioInfo__6B_;
  _Dst = ::operator_new(0x348);
  pFVar4 = (FVorbisFileWrapper *)0x0;
  if (_Dst != (FVorbisFileWrapper *)0x0) {
    memset(_Dst,0,0x348);
    pFVar4 = _Dst;
  }
  this->VFWrapper = pFVar4;
  this->SrcBufferData = (uchar *)0x0;
  this->SrcBufferDataSize = 0;
  this->BufferOffset = 0;
  this->CurrentBufferChunkOffset = 0;
  this->TimesLoopedWithoutDecompressedAudio = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VorbisCriticalSection,4000);
  this->CurrentStreamingChunkData = (uchar *)0x0;
  this->CurrentStreamingChunkIndex = -1;
  this->NextStreamingChunkIndex = 0;
  this->CurrentStreamingChunksSize = 0;
  this->bHeaderParsed = false;
  this->bHasError = false;
  this->LastErrorCode = 0;
  FAudioChunkHandle::FAudioChunkHandle(&this->CurCompressedChunkHandle);
  if ((this->VFWrapper == (FVorbisFileWrapper *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("VFWrapper != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                         ,0x6a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVorbisAudioInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this;
}

// ~FVorbisAudioInfo @ 146bc7b80

void __thiscall FVorbisAudioInfo::~FVorbisAudioInfo(FVorbisAudioInfo *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FVorbisFileWrapper *pFVar1;
  code *pcVar2;
  bool bVar3;
  
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
      (*pcVar2)();
      return;
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
  return;
}

// CloseMemory @ 146bc7d70

int __thiscall FVorbisAudioInfo::CloseMemory(FVorbisAudioInfo *this)

{
  return 0;
}

// CloseStreaming @ 146bc7d80

int __thiscall FVorbisAudioInfo::CloseStreaming(FVorbisAudioInfo *this)

{
  return 0;
}

// EnableHalfRate @ 146bc7d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVorbisAudioInfo::EnableHalfRate(FVorbisAudioInfo *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  else {
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bHeaderParsed == false) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      ov_halfrate(this->VFWrapper,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ExpandFile @ 146bc7e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVorbisAudioInfo::ExpandFile(FVorbisAudioInfo *this,uchar *param_1,FSoundQualityInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  else {
    if ((this->VFWrapper == (FVorbisFileWrapper *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VFWrapper != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x1a1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1 == (uchar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DstBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x1a2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == (FSoundQualityInfo *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("QualityInfo",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x1a3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bHeaderParsed == false) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      uVar1 = param_2->SampleDataSize;
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = ov_read(this->VFWrapper,param_1,uVar1 - uVar5,0,2,1,0);
          if (iVar4 < 0) {
            memset(param_1,0,(ulonglong)(uVar1 - uVar5));
            break;
          }
          uVar5 = uVar5 + iVar4;
          param_1 = param_1 + iVar4;
        } while (uVar5 < uVar1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetAudioDataStartOffset @ 146bc7ff0

int __thiscall FVorbisAudioInfo::GetAudioDataStartOffset(FVorbisAudioInfo *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  long64 *plVar1;
  int iVar2;
  
  lpCriticalSection = &this->VorbisCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->VFWrapper == (FVorbisFileWrapper *)0x0) ||
       (plVar1 = (this->VFWrapper->vf).dataoffsets, plVar1 == (long64 *)0x0)) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)*plVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCompressedInfoCommon @ 146bc8050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVorbisAudioInfo::GetCompressedInfoCommon
          (FVorbisAudioInfo *this,void *param_1,FSoundQualityInfo *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->bHasError = true;
    return false;
  }
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_20 = *(undefined4 *)((longlong)param_1 + 8);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x10);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_10 = *(undefined4 *)((longlong)param_1 + 0x18);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x1c);
  iVar2 = ov_open_callbacks(local_28,this->VFWrapper,0,0,&local_28);
  if (iVar2 < 0) {
    if (2 < (byte)LogAudio._0_1_) {
      GetVorbisError(iVar2);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->LastErrorCode = iVar2;
    this->bHasError = true;
    return false;
  }
  if (param_2 != (FSoundQualityInfo *)0x0) {
    lVar3 = ov_info(this->VFWrapper,0xffffffff);
    param_2->SampleRate = *(uint *)(lVar3 + 8);
    param_2->NumChannels = *(uint *)(lVar3 + 4);
    lVar3 = ov_pcm_total(this->VFWrapper,0xffffffff);
    if (-1 < lVar3) {
      param_2->SampleDataSize = (int)lVar3 * param_2->NumChannels * 2;
      dVar1 = (double)ov_time_total(this->VFWrapper,0xffffffff);
      param_2->Duration = (float)dVar1;
      return true;
    }
    if (lVar3 == -0x83) {
      param_2->SampleDataSize = 0;
      param_2->Duration = 0.0;
    }
  }
  return true;
}

// GetCurrentChunkIndex @ 146bc81a0

int __thiscall FVorbisAudioInfo::GetCurrentChunkIndex(FVorbisAudioInfo *this)

{
  return this->CurrentStreamingChunkIndex;
}

// GetCurrentChunkOffset @ 146bc81b0

int __thiscall FVorbisAudioInfo::GetCurrentChunkOffset(FVorbisAudioInfo *this)

{
  return this->BufferOffset % this->CurrentStreamingChunksSize;
}

// GetLoadedChunk @ 146bc81d0

uchar * __thiscall
FVorbisAudioInfo::GetLoadedChunk
          (FVorbisAudioInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar5;
  FAudioChunkHandle *pFVar6;
  FAudioChunkHandle *this_01;
  TArrayView<unsigned_char_const_,int> local_48;
  FAudioChunkHandle local_38;
  
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3322657305152979606>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x296,"InSoundWave.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    puVar4 = (uchar *)0x0;
  }
  else {
    uVar3 = FSoundWaveProxy::GetNumChunks(param_1->Object);
    if (param_2 < uVar3) {
      if (param_2 == 0) {
        FSoundWaveProxy::GetZerothChunk(&local_48,param_1,true);
        *param_3 = local_48.ArrayNum;
        puVar4 = local_48.DataPtr;
      }
      else {
        this_00 = IStreamingManager::Get();
        pIVar5 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
        this_01 = &this->CurCompressedChunkHandle;
        pFVar6 = (FAudioChunkHandle *)
                 (**(code **)(*(longlong *)pIVar5 + 0xb0))(pIVar5,&local_38,param_1,param_2,1,1);
        FAudioChunkHandle::operator=(this_01,pFVar6);
        FAudioChunkHandle::~FAudioChunkHandle(&local_38);
        uVar3 = FAudioChunkHandle::Num(this_01);
        *param_3 = uVar3;
        puVar4 = FAudioChunkHandle::GetData(this_01);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
    }
    else {
      *param_3 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      puVar4 = (uchar *)0x0;
    }
  }
  return puVar4;
}

// GetSourceBufferSize @ 146bc8300

uint __thiscall FVorbisAudioInfo::GetSourceBufferSize(FVorbisAudioInfo *this)

{
  return this->SrcBufferDataSize;
}

// GetStreamBufferSize @ 146bc8310

int __thiscall FVorbisAudioInfo::GetStreamBufferSize(FVorbisAudioInfo *this)

{
  return 0x2580;
}

// HasError @ 146bc84a0

bool __thiscall FVorbisAudioInfo::HasError(FVorbisAudioInfo *this)

{
  bool bVar1;
  
  bVar1 = ICompressedAudioInfo::HasError((ICompressedAudioInfo *)this);
  return (bool)(bVar1 | this->bHasError);
}

// ReadCompressedData @ 146bc8cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVorbisAudioInfo::ReadCompressedData
          (FVorbisAudioInfo *this,uchar *param_1,bool param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    return true;
  }
  lpCriticalSection = &this->VorbisCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bHeaderParsed == false) {
    if ((byte)LogAudio._0_1_ < 2) {
LAB_146bc8e3f:
      bVar7 = true;
    }
    else {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      bVar7 = true;
    }
  }
  else {
    bVar8 = false;
    bVar7 = false;
    uVar9 = 0;
    if ((this->VFWrapper == (FVorbisFileWrapper *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VFWrapper != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x1e9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (param_3 != 0) {
      do {
        uVar6 = param_3 - uVar9;
        uVar4 = ov_read(this->VFWrapper,param_1,uVar6,0,2,1,0);
        if (uVar4 == 0) {
          bVar7 = true;
          if (param_2) {
            iVar5 = ov_pcm_seek_page(this->VFWrapper);
            if (iVar5 < 0) {
              memset(param_1,0,(ulonglong)uVar6);
              goto LAB_146bc8e3f;
            }
          }
          else {
            memset(param_1,0,(longlong)(int)uVar6);
            uVar4 = uVar6;
          }
        }
        else {
          bVar7 = bVar8;
          if ((int)uVar4 < 0) {
            memset(param_1,0,(ulonglong)uVar6);
            bVar7 = false;
            break;
          }
        }
        uVar9 = uVar9 + uVar4;
        param_1 = param_1 + (int)uVar4;
        bVar8 = bVar7;
      } while (uVar9 < param_3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar7;
}

// ReadCompressedInfo @ 146bc8ec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVorbisAudioInfo::ReadCompressedInfo
          (FVorbisAudioInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  code *local_28;
  code *local_20;
  code *local_18;
  code *local_10;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return false;
    }
  }
  else if (this->bHeaderParsed == false) {
    if (this->VFWrapper != (FVorbisFileWrapper *)0x0) {
      lpCriticalSection = &this->VorbisCriticalSection;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this->SrcBufferData = param_1;
        local_28 = OggReadMemory;
        this->SrcBufferDataSize = param_2;
        local_20 = OggSeekMemory;
        this->BufferOffset = 0;
        local_18 = OggCloseMemory;
        local_10 = OggTellMemory;
        bVar1 = GetCompressedInfoCommon(this,&local_28,param_3);
        this->bHeaderParsed = bVar1;
        if ((!bVar1) && (1 < (byte)LogAudio._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        bVar1 = this->bHeaderParsed;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  else if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return false;
  }
  return false;
}

// ReadMemory @ 146bc9030

ulong64 __thiscall FVorbisAudioInfo::ReadMemory(FVorbisAudioInfo *this,void *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar3 = this->SrcBufferDataSize - this->BufferOffset;
  if (param_2 < uVar3) {
    uVar3 = param_2;
  }
  memcpy(param_1,this->SrcBufferData + this->BufferOffset,(ulonglong)uVar3);
  this->BufferOffset = this->BufferOffset + uVar3;
  return (ulonglong)uVar3;
}

// ReadStreaming @ 146bc90b0

ulong64 __thiscall
FVorbisAudioInfo::ReadStreaming(FVorbisAudioInfo *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar7;
  FAudioChunkHandle *pFVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  TSharedPtr<FSoundWaveProxy,1> local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  FAudioChunkHandle local_68;
  
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      if ((this->CurrentStreamingChunkData == (uchar *)0x0) ||
         (this->CurrentStreamingChunkIndex != this->NextStreamingChunkIndex)) {
        this->CurrentStreamingChunkIndex = this->NextStreamingChunkIndex;
        if ((this->NextStreamingChunkIndex < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStreamingChunkIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                               ,199,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
        if ((this->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
        uVar11 = this->CurrentStreamingChunkIndex;
        uVar5 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
        if (uVar11 < uVar5) {
          local_88.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)this->_padding_;
          local_88.Object = (FSoundWaveProxy *)this->_padding_;
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (local_88.Object == (FSoundWaveProxy *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3322657305152979606>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                               ,0x296,"InSoundWave.IsValid()");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_88.SharedReferenceCount.ReferenceController);
            this->CurrentStreamingChunkData = (uchar *)0x0;
          }
          else {
            uVar5 = FSoundWaveProxy::GetNumChunks(local_88.Object);
            if (uVar11 < uVar5) {
              if (uVar11 == 0) {
                FSoundWaveProxy::GetZerothChunk(&local_78,&local_88,true);
                this->CurrentStreamingChunksSize = local_78.ArrayNum;
                puVar9 = local_78.DataPtr;
              }
              else {
                this_00 = IStreamingManager::Get();
                pIVar7 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
                pFVar8 = (FAudioChunkHandle *)
                         (**(code **)(*(longlong *)pIVar7 + 0xb0))
                                   (pIVar7,&local_68,&local_88,uVar11,1,1);
                FAudioChunkHandle::operator=(&this->CurCompressedChunkHandle,pFVar8);
                FAudioChunkHandle::~FAudioChunkHandle(&local_68);
                uVar11 = FAudioChunkHandle::Num(&this->CurCompressedChunkHandle);
                this->CurrentStreamingChunksSize = uVar11;
                puVar9 = FAudioChunkHandle::GetData(&this->CurCompressedChunkHandle);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_88.SharedReferenceCount.ReferenceController);
              this->CurrentStreamingChunkData = puVar9;
              if (puVar9 != (uchar *)0x0) {
                if ((this->_padding_ == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return uVar6;
                }
                iVar2 = this->CurrentStreamingChunkIndex;
                uVar11 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
                if (((int)uVar11 <= iVar2) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CurrentStreamingChunkIndex < (int32)StreamingSoundWave->GetNumChunks()"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                                       ,0xd5,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return uVar6;
                }
                this->CurrentBufferChunkOffset = 0;
              }
            }
            else {
              this->CurrentStreamingChunksSize = 0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_88.SharedReferenceCount.ReferenceController);
              this->CurrentStreamingChunkData = (uchar *)0x0;
            }
          }
        }
        else {
          this->CurrentStreamingChunksSize = 0;
          this->CurrentStreamingChunkData = (uchar *)0x0;
        }
      }
      if (this->CurrentStreamingChunkData == (uchar *)0x0) {
        return uVar6;
      }
      puVar1 = &this->CurrentBufferChunkOffset;
      if ((this->CurrentStreamingChunksSize < this->CurrentBufferChunkOffset) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentStreamingChunksSize >= CurrentBufferChunkOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                             ,0xe0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar11 = this->CurrentStreamingChunksSize - *puVar1;
      if ((param_2 < uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size >= NumBytesRead",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                             ,0xe4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar10 = param_2 - (int)uVar6;
      uVar5 = uVar10;
      if (uVar11 < uVar10) {
        uVar5 = uVar11;
      }
      if (uVar5 != 0) {
        memcpy((void *)((longlong)param_1 + uVar6),this->CurrentStreamingChunkData + *puVar1,
               (ulonglong)uVar5);
        this->BufferOffset = this->BufferOffset + uVar5;
        *puVar1 = *puVar1 + uVar5;
        uVar6 = uVar6 + uVar5;
      }
      if (uVar11 <= uVar10) {
        this->NextStreamingChunkIndex = this->NextStreamingChunkIndex + 1;
      }
    } while (uVar6 < param_2);
  }
  return uVar6;
}

// SeekMemory @ 146bc9400

int __thiscall FVorbisAudioInfo::SeekMemory(FVorbisAudioInfo *this,uint param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    this->BufferOffset = param_1;
  }
  else if (param_2 == 1) {
    this->BufferOffset = this->BufferOffset + param_1;
  }
  else if (param_2 == 2) {
    this->BufferOffset = this->SrcBufferDataSize - param_1;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x98,L"Uknown seek type");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  uVar2 = this->SrcBufferDataSize;
  if (this->BufferOffset < this->SrcBufferDataSize) {
    uVar2 = this->BufferOffset;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar2;
  }
  this->BufferOffset = uVar5;
  return uVar5;
}

// SeekToFrame @ 146bc9480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVorbisAudioInfo::SeekToFrame(FVorbisAudioInfo *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  else {
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bHeaderParsed == false) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else if ((this->VFWrapper->vf).seekable == 0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      lVar1 = ov_info(this->VFWrapper,0xffffffff);
      uVar3 = (ulonglong)(param_1 * *(int *)(lVar1 + 4));
      uVar2 = ov_pcm_total(this->VFWrapper,0xffffffff);
      if ((longlong)uVar3 < (longlong)uVar2) {
        uVar2 = uVar3;
      }
      ov_pcm_seek(this->VFWrapper,uVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SeekToTime @ 146bc9580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVorbisAudioInfo::SeekToTime(FVorbisAudioInfo *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  float fVar2;
  
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  else {
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bHeaderParsed == false) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else if ((this->VFWrapper->vf).seekable == 0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      dVar1 = (double)ov_time_total(this->VFWrapper,0xffffffff);
      fVar2 = (float)dVar1;
      if (param_1 <= (float)dVar1) {
        fVar2 = param_1;
      }
      ov_time_seek(this->VFWrapper,(double)fVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// StreamCompressedData @ 146bc9680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVorbisAudioInfo::StreamCompressedData
          (FVorbisAudioInfo *this,uchar *param_1,bool param_2,uint param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong _Size;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  _Size = (ulonglong)param_3;
  *param_4 = 0;
  if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    bVar3 = true;
  }
  else {
    if ((this->VFWrapper == (FVorbisFileWrapper *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VFWrapper != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                           ,0x2b9,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bHeaderParsed == false) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
      iVar7 = 0;
      if (param_3 != 0) {
        do {
          iVar7 = (int)_Size;
          iVar5 = ov_read(this->VFWrapper,param_1,_Size,0,2,1,0);
          if (iVar5 < 1) {
            if ((this->_padding_ == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            uVar6 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
            if ((0x7ffffffe < uVar6) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StreamingSoundWave->GetNumChunks() < ((uint32)TNumericLimits<int32>::Max())"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                                   ,0x2cf,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            if ((this->_padding_ == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            uVar6 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
            if (this->NextStreamingChunkIndex < (int)uVar6) {
              memset(param_1,0,_Size);
              bVar3 = false;
              goto LAB_146bc993d;
            }
            bVar3 = true;
            this->TimesLoopedWithoutDecompressedAudio =
                 this->TimesLoopedWithoutDecompressedAudio + 1;
            this->BufferOffset = 0;
            ov_clear(this->VFWrapper);
            memset(this->VFWrapper,0,0x348);
            if ((VorbisReadFailiureTimeoutCVar < 1) ||
               (this->TimesLoopedWithoutDecompressedAudio < 0x40)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((1 < (byte)LogAudio._0_1_) && (bVar2)) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            }
            if ((!param_2) || (bVar2)) {
              memset(param_1,0,_Size);
              goto LAB_146bc992f;
            }
            local_48 = OggReadStreaming;
            this->NextStreamingChunkIndex = 0;
            local_38 = OggCloseStreaming;
            local_40 = 0;
            local_30 = 0;
            iVar5 = ov_open_callbacks(this,this->VFWrapper,0,0,&local_48);
            if (iVar5 < 0) {
              this->LastErrorCode = iVar5;
              this->bHasError = true;
              if (1 < (byte)LogAudio._0_1_) {
                GetVorbisError(iVar5);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              }
              goto LAB_146bc992f;
            }
          }
          else {
            param_1 = param_1 + iVar5;
            this->TimesLoopedWithoutDecompressedAudio = 0;
            _Size = (ulonglong)(uint)(iVar7 - iVar5);
          }
        } while ((int)_Size != 0);
        iVar7 = 0;
      }
LAB_146bc992f:
      *param_4 = param_3 - iVar7;
    }
LAB_146bc993d:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// StreamCompressedInfoInternal @ 146bc99b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVorbisAudioInfo::StreamCompressedInfoInternal
          (FVorbisAudioInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,FSoundQualityInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSoundWaveProxy *pFVar4;
  FName *pFVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  code *local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 local_10;
  
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3322657305152979549>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                       ,0x25d,"InWaveProxy.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = 0;
  }
  else if (bDllLoaded == (FThreadSafeBool)0x0) {
    if (1 < (byte)LogAudio._0_1_) {
      pFVar4 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
      pFVar5 = FSoundWaveProxy::GetFName(pFVar4);
      ::FName::ToString(pFVar5,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = 0;
  }
  else {
    lpCriticalSection = &this->VorbisCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->VFWrapper == (FVorbisFileWrapper *)0x0) {
      if (1 < (byte)LogAudio._0_1_) {
        pFVar4 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
        pFVar5 = FSoundWaveProxy::GetFName(pFVar4);
        ::FName::ToString(pFVar5,&local_48);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = 0;
    }
    else {
      local_28 = OggReadStreaming;
      this->SrcBufferData = (uchar *)0x0;
      this->SrcBufferDataSize = 0;
      this->BufferOffset = 0;
      local_20 = 0;
      local_10 = 0;
      local_18 = OggCloseStreaming;
      bVar2 = GetCompressedInfoCommon(this,&local_28,param_2);
      this->bHeaderParsed = bVar2;
      if ((!bVar2) && (1 < (byte)LogAudio._0_1_)) {
        GetVorbisError(this->LastErrorCode);
        pFVar4 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
        pFVar5 = FSoundWaveProxy::GetFName(pFVar4);
        ::FName::ToString(pFVar5,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = this->bHeaderParsed;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (bool)uVar3;
}

// SupportsStreaming @ 146bc9be0

bool __thiscall FVorbisAudioInfo::SupportsStreaming(FVorbisAudioInfo *this)

{
  return true;
}

// TellMemory @ 146bc9bf0

long __thiscall FVorbisAudioInfo::TellMemory(FVorbisAudioInfo *this)

{
  return this->BufferOffset;
}

// UsesVorbisChannelOrdering @ 146bc9c00

bool __thiscall FVorbisAudioInfo::UsesVorbisChannelOrdering(FVorbisAudioInfo *this)

{
  return true;
}

