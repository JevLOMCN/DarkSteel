// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 7

// FWebMContainer @ 14f119c60

FWebMContainer * __thiscall FWebMContainer::FWebMContainer(FWebMContainer *this)

{
  Segment *this_00;
  FMkvFileState *pFVar1;
  FMkvFileState *pFVar2;
  
  this->_padding_ = (longlong)&___7FWebMContainer__6B_;
  pFVar2 = (FMkvFileState *)0x0;
  (this->MkvReader).Ptr = (FMkvFileReader *)0x0;
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FMkvFileState *)0x0) {
    pFVar1->CurrentCluster = (Cluster *)0x0;
    pFVar1->CurrentBlockEntry = (BlockEntry *)0x0;
    (pFVar1->VideoTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->VideoTracks).ArrayNum = 0;
    (pFVar1->VideoTracks).ArrayMax = 0;
    (pFVar1->AudioTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->AudioTracks).ArrayNum = 0;
    (pFVar1->AudioTracks).ArrayMax = 0;
    (pFVar1->CurrentSegment).Ptr = (Segment *)0x0;
    pFVar2 = pFVar1;
  }
  (this->MkvFile).Ptr = pFVar2;
  (this->CurrentTime).Ticks = 0;
  this->SelectedAudioTrack = -1;
  this->SelectedVideoTrack = -1;
  this->bNoMoreToRead = false;
  this_00 = (pFVar2->CurrentSegment).Ptr;
  (pFVar2->CurrentSegment).Ptr = (Segment *)0x0;
  if (this_00 != (Segment *)0x0) {
    mkvparser::Segment::~Segment(this_00);
    ::operator_delete(this_00,0xb8);
  }
  ((this->MkvFile).Ptr)->CurrentBlockEntry = (BlockEntry *)0x0;
  return this;
}

// ~FWebMContainer @ 14f11a230

void __thiscall FWebMContainer::~FWebMContainer(FWebMContainer *this)

{
  FMkvFileState *pFVar1;
  Segment *this_00;
  FScriptContainerElement *pFVar2;
  FMkvFileReader *pFVar3;
  
  this->_padding_ = (longlong)&___7FWebMContainer__6B_;
  pFVar1 = (this->MkvFile).Ptr;
  if (pFVar1 != (FMkvFileState *)0x0) {
    this_00 = (pFVar1->CurrentSegment).Ptr;
    if (this_00 != (Segment *)0x0) {
      mkvparser::Segment::~Segment(this_00);
      ::operator_delete(this_00,0xb8);
    }
    pFVar2 = (pFVar1->AudioTracks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->VideoTracks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
  }
  pFVar3 = (this->MkvReader).Ptr;
  if (pFVar3 != (FMkvFileReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f11a2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,1);
    return;
  }
  return;
}

// GetCurrentAudioTrackInfo @ 14f11eb80

FWebMAudioTrackInfo * __thiscall
FWebMContainer::GetCurrentAudioTrackInfo
          (FWebMContainer *this,FWebMAudioTrackInfo *__return_storage_ptr__)

{
  uint uVar1;
  FMkvFileState *pFVar2;
  AudioTrack *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FWebMAudioTrackInfo *pFVar6;
  char *pcVar7;
  uchar *puVar8;
  __int64 _Var9;
  double dVar10;
  
  uVar1 = this->SelectedAudioTrack;
  if (uVar1 == 0xffffffff) {
    __return_storage_ptr__->bIsValid = false;
    return __return_storage_ptr__;
  }
  pFVar2 = (this->MkvFile).Ptr;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->AudioTracks).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FWebMAudioTrackInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  this_00 = *(AudioTrack **)
             ((pFVar2->AudioTracks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  __return_storage_ptr__->bIsValid = true;
  pcVar7 = mkvparser::Track::GetCodecId((Track *)this_00);
  __return_storage_ptr__->CodecName = pcVar7;
  puVar8 = mkvparser::Track::GetCodecPrivate
                     ((Track *)this_00,&__return_storage_ptr__->CodecPrivateDataSize);
  __return_storage_ptr__->CodecPrivateData = puVar8;
  dVar10 = mkvparser::AudioTrack::GetSamplingRate(this_00);
  __return_storage_ptr__->SampleRate = (int)dVar10;
  _Var9 = mkvparser::AudioTrack::GetChannels(this_00);
  __return_storage_ptr__->NumOfChannels = (int)_Var9;
  return __return_storage_ptr__;
}

// GetCurrentVideoTrackInfo @ 14f11ec60

FWebMVideoTrackInfo * __thiscall
FWebMContainer::GetCurrentVideoTrackInfo
          (FWebMContainer *this,FWebMVideoTrackInfo *__return_storage_ptr__)

{
  uint uVar1;
  FMkvFileState *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FWebMVideoTrackInfo *pFVar7;
  char *pcVar8;
  
  uVar1 = this->SelectedVideoTrack;
  if (uVar1 == 0xffffffff) {
    __return_storage_ptr__->bIsValid = false;
    return __return_storage_ptr__;
  }
  pFVar2 = (this->MkvFile).Ptr;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->VideoTracks).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FWebMVideoTrackInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (pFVar2->VideoTracks).AllocatorInstance.Data;
  __return_storage_ptr__->bIsValid = true;
  pcVar8 = mkvparser::Track::GetCodecId(*(Track **)(pFVar3 + (longlong)(int)uVar1 * 8));
  __return_storage_ptr__->CodecName = pcVar8;
  return __return_storage_ptr__;
}

// Open @ 14f1209e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWebMContainer::Open(FWebMContainer *this,FString *param_1)

{
  int *piVar1;
  IFileHandle *pIVar2;
  FMkvFileState *pFVar3;
  Segment *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  FMkvFileReader *pFVar11;
  FMkvFileReader *pFVar12;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar13;
  IFileHandle *pIVar14;
  EBMLHeader *this_02;
  __int64 _Var15;
  Tracks *this_03;
  Track *this_04;
  char *pcVar16;
  uchar *puVar17;
  size_t sVar18;
  FStaticBasicLogRecord *pFVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_468 [32];
  Track **local_448;
  FScriptContainerElement *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  ulong local_418;
  Track *local_410;
  Track *local_408;
  __int64 local_400;
  TUniquePtr<mkvparser::Segment,TDefaultDelete<mkvparser::Segment>_> local_3f8;
  Tracks *local_3f0;
  EBMLHeader local_3e8;
  FScriptContainerElement local_3a8 [256];
  ForAnyElementType local_2a8;
  FScriptContainerElement *local_2a0;
  int local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  FMkvFileReader *pFVar25;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  pFVar11 = ::operator_new(0x10);
  pFVar25 = (FMkvFileReader *)0x0;
  pFVar12 = pFVar25;
  if (pFVar11 != (FMkvFileReader *)0x0) {
    (pFVar11->m_file).Ptr = (IFileHandle *)0x0;
    pFVar11->_padding_ = (longlong)&___7FMkvFileReader__6B_;
    pFVar12 = pFVar11;
  }
  pFVar11 = (this->MkvReader).Ptr;
  if ((pFVar11 != pFVar12) && ((this->MkvReader).Ptr = pFVar12, pFVar11 != (FMkvFileReader *)0x0)) {
    (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11,1);
  }
  pFVar12 = (this->MkvReader).Ptr;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_01 = FPlatformFileManager::Get();
  pIVar13 = FPlatformFileManager::GetPlatformFile(this_01);
  pIVar14 = (IFileHandle *)(**(code **)((longlong)*pIVar13 + 0xe8))(pIVar13,pwVar22,0);
  pIVar2 = (pFVar12->m_file).Ptr;
  if ((pIVar2 != pIVar14) && ((pFVar12->m_file).Ptr = pIVar14, pIVar2 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  if ((pFVar12->m_file).Ptr == (IFileHandle *)0x0) {
    if (1 < (byte)LogWebMMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
    }
  }
  else {
    local_400 = 0;
    this_02 = (EBMLHeader *)mkvparser::EBMLHeader::EBMLHeader(&local_3e8);
    _Var15 = mkvparser::EBMLHeader::Parse(this_02,(IMkvReader *)(this->MkvReader).Ptr,&local_400);
    mkvparser::EBMLHeader::~EBMLHeader(&local_3e8);
    if (_Var15 == 0) {
      _Var15 = mkvparser::Segment::CreateInstance
                         ((IMkvReader *)(this->MkvReader).Ptr,local_400,&local_3f8.Ptr);
      if (_Var15 == 0) {
        pFVar3 = (this->MkvFile).Ptr;
        this_00 = (pFVar3->CurrentSegment).Ptr;
        if ((this_00 != local_3f8.Ptr) &&
           ((pFVar3->CurrentSegment).Ptr = local_3f8.Ptr, this_00 != (Segment *)0x0)) {
          mkvparser::Segment::~Segment(this_00);
          ::operator_delete(this_00,0xb8);
        }
        lVar8 = mkvparser::Segment::Load((((this->MkvFile).Ptr)->CurrentSegment).Ptr);
        if (lVar8 < 0) {
          if (1 < (byte)LogWebMMedia._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
          }
        }
        else {
          this_03 = mkvparser::Segment::GetTracks((((this->MkvFile).Ptr)->CurrentSegment).Ptr);
          local_3f0 = this_03;
          uVar9 = mkvparser::Tracks::GetTracksCount(this_03);
          local_418 = uVar9;
          if (uVar9 == 0) {
            if ((byte)LogWebMMedia._0_1_ < 3) {
              return false;
            }
            pFVar19 = &::LOG_Static;
          }
          else {
            if (0 < (int)uVar9) {
              do {
                this_04 = mkvparser::Tracks::GetTrackByIndex(this_03,(ulong)pFVar25);
                if ((this_04 == (Track *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Track",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\WebMContainer.cpp"
                                       ,0x4f,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                lVar8 = mkvparser::Track::GetType(this_04);
                if (lVar8 == 1) {
                  pcVar16 = mkvparser::Track::GetCodecId(this_04);
                  iVar10 = strcmp(pcVar16,"V_VP9");
                  if (iVar10 != 0) {
                    pcVar16 = mkvparser::Track::GetCodecId(this_04);
                    iVar10 = strcmp(pcVar16,"V_VP8");
                    if (iVar10 != 0) {
                      if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f12112c;
                      puVar17 = (uchar *)mkvparser::Track::GetCodecId(this_04);
                      local_2a8.Data = (FScriptContainerElement *)0x0;
                      if (puVar17 == (uchar *)0x0) {
                        local_2a0 = (FScriptContainerElement *)0x0;
                        local_298 = 0;
                      }
                      else {
                        sVar18 = strlen((char *)puVar17);
                        local_298 = UE::Core::Private::GetConvertedLength
                                              ((wchar_t *)0x0,puVar17,(int)sVar18);
                        uVar24 = local_298 + 1;
                        uVar23 = uVar24;
                        if (uVar24 < 0x81) {
                          if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                            uVar23 = 0;
                            goto LAB_14f120d19;
                          }
                        }
                        else {
LAB_14f120d19:
                          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                    (&local_2a8,0,uVar23,2);
                        }
                        local_2a0 = local_3a8;
                        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                          local_2a0 = local_2a8.Data;
                        }
                        UE::Core::Private::Convert
                                  ((wchar_t *)local_2a0,uVar24,puVar17,(int)sVar18 + 1);
                        uVar9 = local_418;
                      }
                      UE::Logging::Private::BasicLog<3>
                                ((FStaticBasicLogRecord *)&PTR_u_File_contains_u_15314f720,
                                 (FLogCategoryBase *)&LogWebMMedia);
                      FVar20.Data = local_2a8.Data;
LAB_14f121122:
                      if (FVar20.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FVar20.Data);
                      }
                      goto LAB_14f12112c;
                    }
                  }
                  pFVar3 = (this->MkvFile).Ptr;
                  pFVar4 = (pFVar3->VideoTracks).AllocatorInstance.Data;
                  local_410 = this_04;
                  if ((pFVar4 <= (FScriptContainerElement *)&local_410) &&
                     (lVar21 = (longlong)(pFVar3->VideoTracks).ArrayMax,
                     (FScriptContainerElement *)&local_410 < pFVar4 + lVar21 * 8)) {
                    local_430 = (longlong)(pFVar3->VideoTracks).ArrayNum;
                    local_428 = 8;
                    local_448 = &local_410;
                    local_440 = pFVar4;
                    local_438 = lVar21;
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      uVar7 = (*pcVar5)();
                      return (bool)uVar7;
                    }
                  }
                  iVar10 = (pFVar3->VideoTracks).ArrayNum;
                  piVar1 = &(pFVar3->VideoTracks).ArrayMax;
                  if (iVar10 == *piVar1) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)pFVar3,piVar1);
                  }
                  (pFVar3->VideoTracks).ArrayNum = iVar10 + 1;
                  *(Track **)((pFVar3->VideoTracks).AllocatorInstance.Data + (longlong)iVar10 * 8) =
                       local_410;
                  if (this->SelectedVideoTrack == -1) {
                    this->SelectedVideoTrack = (((this->MkvFile).Ptr)->VideoTracks).ArrayNum + -1;
                  }
                }
                else {
                  lVar8 = mkvparser::Track::GetType(this_04);
                  if (lVar8 == 2) {
                    pcVar16 = mkvparser::Track::GetCodecId(this_04);
                    iVar10 = strcmp(pcVar16,"A_OPUS");
                    if (iVar10 != 0) {
                      pcVar16 = mkvparser::Track::GetCodecId(this_04);
                      iVar10 = strcmp(pcVar16,"A_VORBIS");
                      if (iVar10 != 0) {
                        if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f12112c;
                        puVar17 = (uchar *)mkvparser::Track::GetCodecId(this_04);
                        local_188.Data = (FScriptContainerElement *)0x0;
                        if (puVar17 == (uchar *)0x0) {
                          local_180 = (FScriptContainerElement *)0x0;
                          local_178 = 0;
                        }
                        else {
                          sVar18 = strlen((char *)puVar17);
                          local_178 = UE::Core::Private::GetConvertedLength
                                                ((wchar_t *)0x0,puVar17,(int)sVar18);
                          uVar24 = local_178 + 1;
                          uVar23 = uVar24;
                          if (uVar24 < 0x81) {
                            if (local_188.Data != (FScriptContainerElement *)0x0) {
                              uVar23 = 0;
                              goto LAB_14f120f04;
                            }
                          }
                          else {
LAB_14f120f04:
                            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                      (&local_188,0,uVar23,2);
                          }
                          local_180 = local_288;
                          if (local_188.Data != (FScriptContainerElement *)0x0) {
                            local_180 = local_188.Data;
                          }
                          UE::Core::Private::Convert
                                    ((wchar_t *)local_180,uVar24,puVar17,(int)sVar18 + 1);
                          uVar9 = local_418;
                        }
                        UE::Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
                        FVar20.Data = local_188.Data;
                        goto LAB_14f121122;
                      }
                    }
                    pFVar3 = (this->MkvFile).Ptr;
                    pFVar4 = (pFVar3->AudioTracks).AllocatorInstance.Data;
                    local_408 = this_04;
                    if ((pFVar4 <= (FScriptContainerElement *)&local_408) &&
                       (lVar21 = (longlong)(pFVar3->AudioTracks).ArrayMax,
                       (FScriptContainerElement *)&local_408 < pFVar4 + lVar21 * 8)) {
                      local_430 = (longlong)(pFVar3->AudioTracks).ArrayNum;
                      local_428 = 8;
                      local_448 = &local_408;
                      local_440 = pFVar4;
                      local_438 = lVar21;
                      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar6) {
                        pcVar5 = (code *)swi(3);
                        uVar7 = (*pcVar5)();
                        return (bool)uVar7;
                      }
                    }
                    iVar10 = (pFVar3->AudioTracks).ArrayNum;
                    piVar1 = &(pFVar3->AudioTracks).ArrayMax;
                    if (iVar10 == *piVar1) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&(pFVar3->AudioTracks).AllocatorInstance,piVar1);
                    }
                    (pFVar3->AudioTracks).ArrayNum = iVar10 + 1;
                    *(Track **)((pFVar3->AudioTracks).AllocatorInstance.Data + (longlong)iVar10 * 8)
                         = local_408;
                    if (this->SelectedAudioTrack == -1) {
                      this->SelectedAudioTrack = (((this->MkvFile).Ptr)->AudioTracks).ArrayNum + -1;
                    }
                  }
                  else if (2 < (byte)LogWebMMedia._0_1_) {
                    puVar17 = (uchar *)mkvparser::Track::GetCodecId(this_04);
                    local_68.Data = (FScriptContainerElement *)0x0;
                    if (puVar17 == (uchar *)0x0) {
                      local_60 = (FScriptContainerElement *)0x0;
                      local_58 = 0;
                    }
                    else {
                      sVar18 = strlen((char *)puVar17);
                      local_58 = UE::Core::Private::GetConvertedLength
                                           ((wchar_t *)0x0,puVar17,(int)sVar18);
                      uVar24 = local_58 + 1;
                      uVar23 = uVar24;
                      if (uVar24 < 0x81) {
                        if (local_68.Data != (FScriptContainerElement *)0x0) {
                          uVar23 = 0;
                          goto LAB_14f1210a9;
                        }
                      }
                      else {
LAB_14f1210a9:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_68,0,uVar23,2);
                      }
                      local_60 = local_168;
                      if (local_68.Data != (FScriptContainerElement *)0x0) {
                        local_60 = local_68.Data;
                      }
                      UE::Core::Private::Convert((wchar_t *)local_60,uVar24,puVar17,(int)sVar18 + 1)
                      ;
                      uVar9 = local_418;
                    }
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
                    FVar20.Data = local_68.Data;
                    goto LAB_14f121122;
                  }
                }
LAB_14f12112c:
                uVar24 = (ulong)pFVar25 + 1;
                pFVar25 = (FMkvFileReader *)(ulonglong)uVar24;
                this_03 = local_3f0;
              } while ((int)uVar24 < (int)uVar9);
            }
            pFVar3 = (this->MkvFile).Ptr;
            if (((pFVar3->VideoTracks).ArrayNum != 0) && ((pFVar3->AudioTracks).ArrayNum != 0)) {
              (this->CurrentTime).Ticks = 0;
              return true;
            }
            if ((byte)LogWebMMedia._0_1_ < 3) {
              return false;
            }
            pFVar19 = &::LOG_Static;
          }
          UE::Logging::Private::BasicLog<3>(pFVar19,(FLogCategoryBase *)&LogWebMMedia);
        }
      }
      else if (1 < (byte)LogWebMMedia._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
      }
    }
    else if (1 < (byte)LogWebMMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
    }
  }
  return false;
}

// ReadFrames @ 14f121970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMContainer::ReadFrames
          (FWebMContainer *this,FTimespan param_1,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  uint uVar2;
  atomic<int> aVar3;
  longlong lVar4;
  FMkvFileState *pFVar5;
  BlockEntry *pBVar6;
  long64 lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  ulonglong uVar16;
  bool bVar17;
  long lVar18;
  int iVar19;
  Cluster *pCVar20;
  Block *pBVar21;
  __int64 _Var22;
  Frame *this_00;
  TReferenceControllerBase<1> *pTVar23;
  FStaticBasicLogRecord *pFVar24;
  void *_Dst;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  double dVar27;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int local_res8;
  TReferenceControllerBase<1> *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined8 extraout_XMM0_Qb;
  
  uVar16 = __real_4114585755555555;
  pTVar15 = _UNK_150651568;
  pTVar14 = ___xmm_00000000000000000000000000000010;
  dVar13 = __real_416312d000000000;
  dVar12 = __real_3fe0000000000000;
  dVar11 = __real_3f847ae147ae147b;
  if (this->bNoMoreToRead == false) {
    lVar4 = (this->CurrentTime).Ticks;
    lVar1 = lVar4 + param_1.Ticks;
    while (lVar4 < lVar1) {
      do {
        pFVar5 = (this->MkvFile).Ptr;
        if (pFVar5->CurrentCluster == (Cluster *)0x0) {
          pCVar20 = mkvparser::Segment::GetFirst((pFVar5->CurrentSegment).Ptr);
          ((this->MkvFile).Ptr)->CurrentCluster = pCVar20;
          ((this->MkvFile).Ptr)->CurrentBlockEntry = (BlockEntry *)0x0;
          if ((((this->MkvFile).Ptr)->CurrentCluster == (Cluster *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MkvFile->CurrentCluster",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\WebMContainer.cpp"
                                  ,0xe2,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pBVar6 = ((this->MkvFile).Ptr)->CurrentBlockEntry;
        if ((pBVar6 == (BlockEntry *)0x0) || (bVar17 = mkvparser::BlockEntry::EOS(pBVar6), bVar17))
        {
          pFVar5 = (this->MkvFile).Ptr;
          lVar18 = mkvparser::Cluster::GetFirst(pFVar5->CurrentCluster,&pFVar5->CurrentBlockEntry);
          if (lVar18 != 0) {
            if (2 < (byte)LogWebMMedia._0_1_) {
              pFVar24 = &::LOG_Static;
              goto LAB_14f121b5d;
            }
            break;
          }
        }
        else {
          pFVar5 = (this->MkvFile).Ptr;
          lVar18 = mkvparser::Cluster::GetNext
                             (pFVar5->CurrentCluster,pFVar5->CurrentBlockEntry,
                              &pFVar5->CurrentBlockEntry);
          if (lVar18 != 0) {
            if (2 < (byte)LogWebMMedia._0_1_) {
              pFVar24 = &::LOG_Static;
LAB_14f121b5d:
              UE::Logging::Private::BasicLog<3>(pFVar24,(FLogCategoryBase *)&LogWebMMedia);
            }
            break;
          }
        }
        pBVar6 = ((this->MkvFile).Ptr)->CurrentBlockEntry;
        if ((pBVar6 != (BlockEntry *)0x0) && (bVar17 = mkvparser::BlockEntry::EOS(pBVar6), !bVar17))
        goto LAB_14f121b6d;
        ((this->MkvFile).Ptr)->CurrentBlockEntry = (BlockEntry *)0x0;
        pFVar5 = (this->MkvFile).Ptr;
        pCVar20 = mkvparser::Segment::GetNext((pFVar5->CurrentSegment).Ptr,pFVar5->CurrentCluster);
        ((this->MkvFile).Ptr)->CurrentCluster = pCVar20;
        if ((((this->MkvFile).Ptr)->CurrentCluster == (Cluster *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("MkvFile->CurrentCluster",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\WebMContainer.cpp"
                                ,0xfc,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar17 = mkvparser::Cluster::EOS(((this->MkvFile).Ptr)->CurrentCluster);
      } while (!bVar17);
      this->bNoMoreToRead = true;
LAB_14f121b6d:
      if (this->bNoMoreToRead != false) {
        return;
      }
      pBVar21 = (Block *)(**(code **)(((this->MkvFile).Ptr)->CurrentBlockEntry->_padding_ + 8))();
      _Var22 = mkvparser::Block::GetTime(pBVar21,((this->MkvFile).Ptr)->CurrentCluster);
      local_res8 = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = (double)_Var22 * dVar11 + dVar12;
      auVar28 = roundpd(extraout_XMM0,auVar28,1);
      (this->CurrentTime).Ticks = (longlong)auVar28._0_8_;
      pBVar21 = (Block *)(**(code **)(((this->MkvFile).Ptr)->CurrentBlockEntry->_padding_ + 8))();
      iVar19 = mkvparser::Block::GetFrameCount(pBVar21);
      if (0 < iVar19) {
        do {
          pTVar26 = (TReferenceControllerBase<1> *)0x0;
          pBVar21 = (Block *)(**(code **)(((this->MkvFile).Ptr)->CurrentBlockEntry->_padding_ + 8))
                                       ();
          this_00 = mkvparser::Block::GetFrame(pBVar21,local_res8);
          pTVar23 = ::operator_new(0x30);
          if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
            local_a8 = pTVar14;
            pTStack_a0 = pTVar15;
          }
          else {
            pTVar23->_padding_ =
                 (longlong)
                 &___7__TIntrusiveReferenceController_UFWebMFrame___00_SharedPointerInternals__6B_;
            pTVar23->SharedReferenceCount = (atomic<int>)0x1;
            pTVar23->WeakReferenceCount = (atomic<int>)0x1;
            pTVar23[1]._padding_ = 0;
            pTVar23[2]._padding_ = 0;
            pTVar23[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar23[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar23[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar23[1].WeakReferenceCount = (atomic<int>)0x0;
            if ((pTVar23 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            LOCK();
            pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
            UNLOCK();
            pTVar26 = pTVar23;
            local_a8 = pTVar23 + 1;
            pTStack_a0 = pTVar23;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar26);
          lVar7 = (this->CurrentTime).Ticks;
          if ((local_a8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_a8[1]._padding_ = lVar7;
          uVar2 = this->SelectedVideoTrack;
          pFVar5 = (this->MkvFile).Ptr;
          uVar25 = 0;
          if ((int)uVar2 < (pFVar5->VideoTracks).ArrayNum) {
            uVar25 = ~uVar2 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          auVar29._0_8_ =
               mkvparser::VideoTrack::GetFrameRate
                         (*(VideoTrack **)
                           ((pFVar5->VideoTracks).AllocatorInstance.Data + (longlong)(int)uVar2 * 8)
                         );
          auVar29._8_8_ = extraout_XMM0_Qb;
          if (auVar29._0_8_ <= 0.0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar16;
            auVar28 = roundpd(auVar29,auVar10,1);
            dVar27 = auVar28._0_8_;
          }
          else {
            auVar30._8_8_ = 0;
            auVar30._0_8_ = dVar13 / auVar29._0_8_ + dVar12;
            auVar28 = roundpd(auVar30,auVar30,1);
            dVar27 = auVar28._0_8_;
          }
          if ((local_a8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_a8[1].SharedReferenceCount = (atomic<int>)(int)(longlong)dVar27;
          local_a8[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)(longlong)dVar27 >> 0x20);
          if ((local_a8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar26 = local_a8;
          aVar3 = local_a8->SharedReferenceCount;
          uVar2 = this_00->len;
          if ((int)aVar3 < (int)uVar2) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar2 - (int)aVar3,(ForAnyElementType *)local_a8,
                       (int *)&local_a8->SharedReferenceCount,(int *)&local_a8->WeakReferenceCount);
          }
          else {
            if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
            }
            if ((int)uVar2 < (int)aVar3) {
              uVar25 = (int)aVar3 - uVar2;
              if (((int)(uVar25 | uVar2) < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (uVar25 != 0) {
                _Dst = (void *)((longlong)(int)uVar2 + pTVar26->_padding_);
                iVar19 = ((int)pTVar26->SharedReferenceCount - uVar2) - uVar25;
                if (iVar19 != 0) {
                  memmove(_Dst,(void *)((longlong)(int)uVar25 + (longlong)_Dst),(longlong)iVar19);
                }
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount - uVar25);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,(ForAnyElementType *)pTVar26,(int)pTVar26->SharedReferenceCount,
                           (int *)&pTVar26->WeakReferenceCount);
              }
            }
          }
          if ((local_a8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          mkvparser::Block::Frame::Read
                    (this_00,(IMkvReader *)(this->MkvReader).Ptr,(uchar *)local_a8->_padding_);
          pBVar21 = (Block *)(**(code **)(((this->MkvFile).Ptr)->CurrentBlockEntry->_padding_ + 8))
                                       ();
          _Var22 = mkvparser::Block::GetTrackNumber(pBVar21);
          uVar2 = this->SelectedVideoTrack;
          if (uVar2 == 0xffffffff) {
LAB_14f122095:
            uVar2 = this->SelectedAudioTrack;
            if (uVar2 != 0xffffffff) {
              pFVar5 = (this->MkvFile).Ptr;
              uVar25 = 0;
              if ((int)uVar2 < (pFVar5->AudioTracks).ArrayNum) {
                uVar25 = ~uVar2 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar18 = mkvparser::Track::GetNumber
                                 (*(Track **)
                                   ((pFVar5->AudioTracks).AllocatorInstance.Data +
                                   (longlong)(int)uVar2 * 8));
              if (lVar18 == (int)_Var22) {
                pFVar8 = (param_2->AllocatorInstance).Data;
                if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
                    ((FScriptContainerElement *)&local_a8 <
                     pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = param_2->ArrayNum;
                if (iVar19 == param_2->ArrayMax) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                param_2->ArrayNum = iVar19 + 1;
                pFVar8 = (param_2->AllocatorInstance).Data;
                *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar19 * 0x10) = local_a8;
                *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar19 * 0x10 + 8) = pTStack_a0
                ;
                if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTStack_a0->SharedReferenceCount =
                       (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
                  UNLOCK();
                }
              }
            }
          }
          else {
            pFVar5 = (this->MkvFile).Ptr;
            uVar25 = 0;
            if ((int)uVar2 < (pFVar5->VideoTracks).ArrayNum) {
              uVar25 = ~uVar2 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar18 = mkvparser::Track::GetNumber
                               (*(Track **)
                                 ((pFVar5->VideoTracks).AllocatorInstance.Data +
                                 (longlong)(int)uVar2 * 8));
            if (lVar18 != (int)_Var22) goto LAB_14f122095;
            pFVar8 = (param_3->AllocatorInstance).Data;
            if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < pFVar8 + (longlong)param_3->ArrayMax * 0x10)
                ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar19 = param_3->ArrayNum;
            if (iVar19 == param_3->ArrayMax) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar19 + 1;
            pFVar8 = (param_3->AllocatorInstance).Data;
            *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar19 * 0x10) = local_a8;
            *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar19 * 0x10 + 8) = pTStack_a0;
            if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_a0->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar2 = this->SelectedVideoTrack;
            pFVar5 = (this->MkvFile).Ptr;
            uVar25 = 0;
            if ((int)uVar2 < (pFVar5->VideoTracks).ArrayNum) {
              uVar25 = ~uVar2 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            dVar27 = mkvparser::VideoTrack::GetFrameRate
                               (*(VideoTrack **)
                                 ((pFVar5->VideoTracks).AllocatorInstance.Data +
                                 (longlong)(int)uVar2 * 8));
            auVar31._8_8_ = 0;
            auVar31._0_8_ = dVar13 / dVar27 + dVar12;
            auVar28 = roundpd(auVar31,auVar31,1);
            (this->CurrentTime).Ticks = (this->CurrentTime).Ticks + (longlong)auVar28._0_8_;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_a0);
          local_res8 = local_res8 + 1;
          pBVar21 = (Block *)(**(code **)(((this->MkvFile).Ptr)->CurrentBlockEntry->_padding_ + 8))
                                       ();
          iVar19 = mkvparser::Block::GetFrameCount(pBVar21);
        } while (local_res8 < iVar19);
      }
      lVar4 = (this->CurrentTime).Ticks;
    }
  }
  return;
}

// SeekToNextValidBlock @ 14f122970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMContainer::SeekToNextValidBlock(FWebMContainer *this)

{
  FMkvFileState *pFVar1;
  BlockEntry *pBVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  Cluster *pCVar6;
  FStaticBasicLogRecord *pFVar7;
  
  do {
    pFVar1 = (this->MkvFile).Ptr;
    if (pFVar1->CurrentCluster == (Cluster *)0x0) {
      pCVar6 = mkvparser::Segment::GetFirst((pFVar1->CurrentSegment).Ptr);
      ((this->MkvFile).Ptr)->CurrentCluster = pCVar6;
      ((this->MkvFile).Ptr)->CurrentBlockEntry = (BlockEntry *)0x0;
      if ((((this->MkvFile).Ptr)->CurrentCluster == (Cluster *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MkvFile->CurrentCluster",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\WebMContainer.cpp"
                             ,0xe2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pBVar2 = ((this->MkvFile).Ptr)->CurrentBlockEntry;
    if ((pBVar2 == (BlockEntry *)0x0) || (bVar4 = mkvparser::BlockEntry::EOS(pBVar2), bVar4)) {
      pFVar1 = (this->MkvFile).Ptr;
      lVar5 = mkvparser::Cluster::GetFirst(pFVar1->CurrentCluster,&pFVar1->CurrentBlockEntry);
      if (lVar5 != 0) {
        if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f122adf;
        pFVar7 = &::LOG_Static;
LAB_14f122ad3:
        UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogWebMMedia);
LAB_14f122adf:
        this->bNoMoreToRead = true;
        return;
      }
    }
    else {
      pFVar1 = (this->MkvFile).Ptr;
      lVar5 = mkvparser::Cluster::GetNext
                        (pFVar1->CurrentCluster,pFVar1->CurrentBlockEntry,&pFVar1->CurrentBlockEntry
                        );
      if (lVar5 != 0) {
        if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f122adf;
        pFVar7 = &::LOG_Static;
        goto LAB_14f122ad3;
      }
    }
    pBVar2 = ((this->MkvFile).Ptr)->CurrentBlockEntry;
    if ((pBVar2 != (BlockEntry *)0x0) && (bVar4 = mkvparser::BlockEntry::EOS(pBVar2), !bVar4)) {
      return;
    }
    ((this->MkvFile).Ptr)->CurrentBlockEntry = (BlockEntry *)0x0;
    pFVar1 = (this->MkvFile).Ptr;
    pCVar6 = mkvparser::Segment::GetNext((pFVar1->CurrentSegment).Ptr,pFVar1->CurrentCluster);
    ((this->MkvFile).Ptr)->CurrentCluster = pCVar6;
    if ((((this->MkvFile).Ptr)->CurrentCluster == (Cluster *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MkvFile->CurrentCluster",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\WebMContainer.cpp"
                           ,0xfc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = mkvparser::Cluster::EOS(((this->MkvFile).Ptr)->CurrentCluster);
    if (bVar4) {
      this->bNoMoreToRead = true;
      return;
    }
  } while( true );
}

