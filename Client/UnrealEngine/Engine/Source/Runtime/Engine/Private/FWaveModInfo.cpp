// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetChunkId @ 1475d32a0

uint __cdecl FWaveModInfo::GetChunkId(char *param_1)

{
  return *(uint *)param_1;
}

// GetNumSamples @ 1475d62f0

uint __thiscall FWaveModInfo::GetNumSamples(FWaveModInfo *this)

{
  if (((*this->pFormatTag == 1) || (*this->pFormatTag == 3)) && (7 < *this->pBitsPerSample)) {
    return this->SampleDataSize / (uint)(*this->pBitsPerSample >> 3);
  }
  return 0;
}

// GetOptionalWaveChunkIds @ 1475d6420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
FWaveModInfo::GetOptionalWaveChunkIds(void)

{
  ForAnyElementType FVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0xc,0,&OptionalChunkIds.AllocatorInstance,0xc,&OptionalChunkIds.ArrayMax);
    FVar1 = OptionalChunkIds.AllocatorInstance;
    *(undefined8 *)OptionalChunkIds.AllocatorInstance.Data = 0x2065756374636166;
    *(undefined8 *)(FVar1.Data + 8) = 0x5453494c74736c70;
    *(undefined8 *)(FVar1.Data + 0x10) = 0x7478746c6c62616c;
    *(undefined8 *)(FVar1.Data + 0x18) = 0x6c706d7365746f6e;
    *(undefined8 *)(FVar1.Data + 0x20) = 0x6469636174736e69;
    *(undefined8 *)(FVar1.Data + 0x28) = 0x4c4d586974786562;
    atexit(`FWaveModInfo::GetOptionalWaveChunkIds'::__l2::
           _dynamic_atexit_destructor_for__OptionalChunkIds__);
    _Init_thread_footer(&::_TSS0);
  }
  return &OptionalChunkIds;
}

// GetRequiredWaveChunkIds @ 1475dd040

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
FWaveModInfo::GetRequiredWaveChunkIds(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,0,&RequiredChunkIds.AllocatorInstance,2,&RequiredChunkIds.ArrayMax);
      *(undefined8 *)RequiredChunkIds.AllocatorInstance.Data = 0x6174616420746d66;
      atexit(`FWaveModInfo::GetRequiredWaveChunkIds'::__l2::
             _dynamic_atexit_destructor_for__RequiredChunkIds__);
      _Init_thread_footer(&::_TSS0);
      return &RequiredChunkIds;
    }
  }
  return &RequiredChunkIds;
}

// IsFormatSupported @ 1475e2180

bool __thiscall FWaveModInfo::IsFormatSupported(FWaveModInfo *this)

{
  ushort uVar1;
  
  uVar1 = *this->pFormatTag;
  if ((((uVar1 != 1) && (1 < (ushort)(uVar1 - 2))) && (uVar1 != 0x11)) && (uVar1 != 0xffff)) {
    return false;
  }
  return true;
}

// IsFormatUncompressed @ 1475e21c0

bool __thiscall FWaveModInfo::IsFormatUncompressed(FWaveModInfo *this)

{
  if ((*this->pFormatTag != 1) && (*this->pFormatTag != 3)) {
    return false;
  }
  return true;
}

// ReadWaveHeader @ 1475eb0c0

bool __thiscall
FWaveModInfo::ReadWaveHeader(FWaveModInfo *this,uchar *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 != 0) {
    bVar1 = ReadWaveInfo(this,param_1 + param_3,param_2,(FString *)0x0,false,(void **)0x0);
    if ((bVar1) && ((*this->pChannels == 1 || (*this->pChannels == 2)))) {
      return *this->pBitsPerSample == 0x10;
    }
  }
  return false;
}

// ReadWaveInfo @ 1475eb130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWaveModInfo::ReadWaveInfo
          (FWaveModInfo *this,uchar *param_1,int param_2,FString *param_3,bool param_4,
          void **param_5)

{
  ushort *puVar1;
  uint *puVar2;
  TArray<FWaveCue,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FRiffChunkOld *_Str;
  TPimplPtr<FSoundWaveTimecodeInfo,1> *pTVar5;
  char cVar6;
  ushort uVar7;
  FWaveCue *pFVar8;
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  int extraout_EAX;
  int extraout_EAX_00;
  FRiffChunkOld *pFVar15;
  int *piVar16;
  FRiffChunkOld *pFVar17;
  undefined8 *puVar18;
  size_t sVar19;
  FXmlNode *pFVar20;
  FXmlNode *this_00;
  FString *pFVar21;
  FRiffChunkOld *pFVar23;
  undefined8 *puVar24;
  wchar_t *_Str_00;
  wchar_t *pwVar25;
  FScriptContainerElement *pFVar26;
  char *pcVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  undefined8 *puVar31;
  uint *puVar32;
  FWaveModInfo *pFVar33;
  uchar *puVar34;
  undefined1 auStackY_888 [32];
  undefined1 local_838;
  undefined1 local_837 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_830;
  uint local_820;
  uint uStack_81c;
  uint local_818;
  FWaveModInfo *local_810;
  FRiffChunkOld *local_808;
  uint local_800;
  uint local_7fc;
  FString local_7f8;
  uint local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  int local_7d8;
  int iStack_7d4;
  FRiffChunkOld *local_7c8;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  longlong local_740;
  FXmlFile local_738;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  longlong lVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_888;
  this->WaveDataEnd = param_1 + param_2;
  if (param_2 == 0) {
    return false;
  }
  local_810 = this;
  if (*(int *)(param_1 + 8) == 0x45564157) {
    pFVar23 = (FRiffChunkOld *)(param_1 + 0xc);
    this->pMasterSize = (uint *)(param_1 + 4);
    local_808 = pFVar23;
    pFVar15 = FindRiffChunk(pFVar23,param_1 + param_2,0x20746d66);
    if (pFVar15 != (FRiffChunkOld *)0x0) {
      local_7c8 = pFVar15 + 1;
      this->pSamplesPerSec = &pFVar15[1].ChunkLen;
      this->pAvgBytesPerSec = &pFVar15[2].ChunkID;
      this->pBlockAlign = (ushort *)&pFVar15[2].ChunkLen;
      this->pChannels = (ushort *)((longlong)&pFVar15[1].ChunkID + 2);
      puVar1 = (ushort *)((longlong)&pFVar15[2].ChunkLen + 2);
      this->pBitsPerSample = puVar1;
      this->pFormatTag = (ushort *)local_7c8;
      if (param_5 != (void **)0x0) {
        *param_5 = local_7c8;
      }
      if ((0x27 < pFVar15->ChunkLen) && ((short)local_7c8->ChunkID == -2)) {
        if ((pFVar15[4].ChunkID == 1) &&
           ((uVar7 = *(ushort *)((longlong)&pFVar15[3].ChunkID + 2), uVar7 != 0 &&
            (uVar7 != *puVar1)))) {
          if (param_3 == (FString *)0x0) {
            return false;
          }
          pwVar25 = 
          L"Unsupported WAVE file format: actual bit rate does not match the container size.";
          goto LAB_1475eb230;
        }
        if ((*(longlong *)&pFVar15[4].ChunkLen != ::GUID._4_8_) ||
           (pFVar15[5].ChunkLen != ::GUID.Data4._4_4_)) {
          if (param_3 == (FString *)0x0) {
            return false;
          }
          pwVar25 = L"Unsupported WAVE file format: subformat identifier not recognized.";
          goto LAB_1475eb230;
        }
        this->pFormatTag = (ushort *)(pFVar15 + 4);
      }
      pFVar15 = FindRiffChunk(pFVar23,this->WaveDataEnd,0x61746164);
      if (pFVar15 != (FRiffChunkOld *)0x0) {
        puVar2 = &pFVar15->ChunkLen;
        this->SampleDataStart = (uchar *)(pFVar15 + 1);
        this->pWaveDataSize = puVar2;
        uVar13 = *puVar2;
        this->SampleDataSize = uVar13;
        puVar34 = (uchar *)((longlong)&pFVar15[1].ChunkID + (ulonglong)uVar13);
        this->SampleDataEnd = puVar34;
        bVar11 = IsFormatSupported(this);
        if (!bVar11) {
          ReportImportFailure(this);
          if (param_3 == (FString *)0x0) {
            return false;
          }
          pwVar25 = 
          L"Unsupported wave file format.  Only PCM, ADPCM, and DVI ADPCM can be imported.";
          goto LAB_1475eb230;
        }
        if ((!param_4) && (bVar11 = IsFormatSupported(this), bVar11)) {
          if (this->WaveDataEnd < puVar34) {
            if (2 < (byte)LogAudio._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            }
            this->SampleDataEnd = this->WaveDataEnd;
            uVar13 = (int)this->WaveDataEnd - *(int *)&this->SampleDataStart;
            this->SampleDataSize = uVar13;
            *puVar2 = uVar13;
          }
          this->NewDataSize = this->SampleDataSize;
        }
        pFVar15 = FindRiffChunk(pFVar23,this->WaveDataEnd,0x20657563);
        uVar28 = 0;
        pFVar33 = this;
        pFVar23 = local_808;
        if (pFVar15 != (FRiffChunkOld *)0x0) {
          uVar13 = pFVar15[1].ChunkID;
          pTVar3 = &this->WaveCues;
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          piVar16 = &(this->WaveCues).ArrayMax;
          pFVar8 = (FWaveCue *)(pTVar3->AllocatorInstance).Data;
          iVar14 = (this->WaveCues).ArrayNum;
          if (*piVar16 < (int)uVar13) {
            DestructItems<FWaveCue,int>(pFVar8,iVar14);
            (this->WaveCues).ArrayNum = 0;
            if (*piVar16 != uVar13) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar13,&pTVar3->AllocatorInstance,0,piVar16);
            }
          }
          else {
            DestructItems<FWaveCue,int>(pFVar8,iVar14);
            (this->WaveCues).ArrayNum = 0;
          }
          if (pFVar15[1].ChunkID != 0) {
            do {
              local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_7f8.Data.ArrayNum = 0;
              local_7f8.Data.ArrayMax = 0;
              local_7e8 = 0;
              local_800 = pFVar15[uVar28 * 3 + 1].ChunkLen;
              local_7fc = pFVar15[uVar28 * 3 + 2].ChunkID;
              pFVar26 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar26 <= (FScriptContainerElement *)&local_800) &&
                  ((FScriptContainerElement *)&local_800 < pFVar26 + (longlong)*piVar16 * 0x20)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar10 = (code *)swi(3);
                uVar12 = (*pcVar10)();
                return (bool)uVar12;
              }
              iVar14 = (this->WaveCues).ArrayNum;
              if (iVar14 == *piVar16) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar3->AllocatorInstance,piVar16);
              }
              (this->WaveCues).ArrayNum = iVar14 + 1;
              pFVar26 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
              *(uint *)pFVar26 = local_800;
              *(uint *)(pFVar26 + 4) = local_7fc;
              ::FString::FString((FString *)(pFVar26 + 8),&local_7f8);
              *(uint *)(pFVar26 + 0x18) = local_7e8;
              if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
              }
              uVar13 = (int)uVar28 + 1;
              uVar28 = (ulonglong)uVar13;
            } while (uVar13 < pFVar15[1].ChunkID);
          }
          pFVar23 = local_808;
          pFVar15 = FindRiffChunk(local_808,this->WaveDataEnd,0x5453494c);
          pFVar33 = local_810;
          if (pFVar15 != (FRiffChunkOld *)0x0) {
            puVar32 = &pFVar15[1].ChunkLen;
            piVar16 = (int *)((ulonglong)pFVar15->ChunkLen + 4 + (longlong)puVar32);
            puVar2 = &pFVar15[2].ChunkLen;
            if (local_810->WaveDataEnd < piVar16) {
              piVar16 = (int *)local_810->WaveDataEnd;
            }
            while (local_810 = pFVar33, puVar2 <= piVar16) {
              if (*puVar32 == 0x7478746c) {
                iVar14 = (this->WaveCues).ArrayNum;
                pFVar26 = (pTVar3->AllocatorInstance).Data;
                pFVar29 = pFVar26 + (longlong)iVar14 * 0x20;
                while( true ) {
                  if ((this->WaveCues).ArrayNum != iVar14) {
                    local_838 = 0;
                    `TCheckedPointerIterator<FWaveCue,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_838);
                  }
                  if (pFVar26 == pFVar29) goto LAB_1475eb5fc;
                  if (*(uint *)pFVar26 == *puVar2) break;
                  pFVar26 = pFVar26 + 0x20;
                }
                *(uint *)(pFVar26 + 0x18) = puVar32[3];
              }
              else if (*puVar32 == 0x6c62616c) {
                iVar14 = (this->WaveCues).ArrayNum;
                pFVar26 = (pTVar3->AllocatorInstance).Data;
                pFVar29 = pFVar26 + (longlong)iVar14 * 0x20;
                while( true ) {
                  if ((this->WaveCues).ArrayNum != iVar14) {
                    local_837[0] = 0;
                    `TCheckedPointerIterator<FWaveCue,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_837);
                  }
                  if (pFVar26 == pFVar29) goto LAB_1475eb5fc;
                  if (*(uint *)pFVar26 == *puVar2) break;
                  pFVar26 = pFVar26 + 0x20;
                }
                piVar4 = (int *)(puVar32 + 3);
                cVar6 = (char)puVar32[3];
                while (cVar6 != '\0') {
                  ::FString::AppendChar((FString *)(pFVar26 + 8),(short)cVar6);
                  pcVar27 = (char *)((longlong)piVar4 + 1);
                  piVar4 = (int *)((longlong)piVar4 + 1);
                  cVar6 = *pcVar27;
                }
                ::FString::AppendChar((FString *)(pFVar26 + 8),L'\0');
              }
LAB_1475eb5fc:
              puVar32 = (uint *)((longlong)puVar32 + ((ulonglong)(puVar32[1] + 1) & 0xfffffffe) + 8)
              ;
              pFVar33 = local_810;
              pFVar23 = local_808;
              puVar2 = puVar32 + 2;
            }
          }
        }
        puVar31 = (undefined8 *)0x0;
        pFVar17 = FindRiffChunk(pFVar23,pFVar33->WaveDataEnd,0x74786562);
        pFVar15 = local_7c8;
        if (((pFVar17 != (FRiffChunkOld *)0x0) &&
            (lVar22 = *(longlong *)((longlong)&pFVar17[0x2b].ChunkID + 2), lVar22 != 0)) &&
           ((local_7c8 != (FRiffChunkOld *)0x0 && (local_7c8->ChunkLen != 0)))) {
          puVar18 = ::operator_new(0x80);
          puVar24 = puVar31;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = UE::Core::Private::PimplPtr::DeleterFunc<FSoundWaveTimecodeInfo>;
            puVar18[1] = UE::Core::Private::PimplPtr::CopyFunc<FSoundWaveTimecodeInfo>;
            puVar18[3] = 0;
            *(undefined4 *)((longlong)puVar18 + 0x79) = 0;
            *(undefined2 *)((longlong)puVar18 + 0x7d) = 0;
            *(undefined1 *)((longlong)puVar18 + 0x7f) = 0;
            puVar18[2] = 0xffffffff;
            puVar18[4] = 0;
            puVar18[5] = 0;
            puVar18[6] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar18[9] = 0;
            puVar18[10] = 0;
            puVar18[0xb] = 0;
            puVar18[0xc] = 0;
            puVar18[0xd] = 0;
            *(undefined4 *)(puVar18 + 0xe) = 60000;
            *(undefined4 *)((longlong)puVar18 + 0x74) = 1;
            *(undefined1 *)(puVar18 + 0xf) = 0;
            puVar24 = puVar18;
          }
          pTVar5 = &pFVar33->TimecodeInfo;
          if ((TPimplPtr<FSoundWaveTimecodeInfo,1> *)&local_740 == pTVar5) {
            if ((TPimplPtr<FSoundWaveTimecodeInfo,1>)(puVar24 + 2) !=
                (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) goto LAB_1475eb747;
          }
          else {
            TVar9 = *pTVar5;
            *pTVar5 = (TPimplPtr<FSoundWaveTimecodeInfo,1>)(puVar24 + 2);
            if (TVar9 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
              puVar24 = (undefined8 *)((longlong)TVar9 + -0x10);
LAB_1475eb747:
              (*(code *)*puVar24)();
            }
          }
          local_708._padding_ = 0;
          *(longlong *)*pTVar5 = lVar22;
          _Str = pFVar17 + 1;
          *(uint *)((longlong)*pTVar5 + 8) = pFVar15->ChunkLen;
          if (_Str == (FRiffChunkOld *)0x0) {
            local_708.StringLength = 0;
            local_708.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar19 = strlen((char *)_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_708,(char *)_Str,(int)sVar19,Yes);
          }
          ::FString::operator=((FString *)((longlong)*pTVar5 + 0x10),local_708.Ptr);
          if ((void *)local_708._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_708._padding_);
          }
          pFVar15 = pFVar17 + 0x21;
          local_5e8._padding_ = 0;
          if (pFVar15 == (FRiffChunkOld *)0x0) {
            local_5e8.StringLength = 0;
            local_5e8.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar19 = strlen((char *)pFVar15);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_5e8,(char *)pFVar15,(int)sVar19,Yes);
          }
          ::FString::operator=((FString *)((longlong)pFVar33->TimecodeInfo + 0x40),local_5e8.Ptr);
          if ((void *)local_5e8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_5e8._padding_);
          }
          pFVar15 = pFVar17 + 0x29;
          local_4c8._padding_ = 0;
          if (pFVar15 == (FRiffChunkOld *)0x0) {
            local_4c8.StringLength = 0;
            local_4c8.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar19 = strlen((char *)pFVar15);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4c8,(char *)pFVar15,(int)sVar19,Yes);
          }
          ::FString::operator=((FString *)((longlong)pFVar33->TimecodeInfo + 0x30),local_4c8.Ptr);
          if ((void *)local_4c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4c8._padding_);
          }
          pFVar15 = pFVar17 + 0x25;
          local_3a8._padding_ = 0;
          if (pFVar15 == (FRiffChunkOld *)0x0) {
            local_3a8.StringLength = 0;
            local_3a8.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar19 = strlen((char *)pFVar15);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_3a8,(char *)pFVar15,(int)sVar19,Yes);
          }
          ::FString::operator=((FString *)((longlong)pFVar33->TimecodeInfo + 0x50),local_3a8.Ptr);
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
          }
          local_288._padding_ = 0;
          pcVar27 = (char *)((longlong)&pFVar17[0x2a].ChunkID + 2);
          if (pcVar27 == (char *)0x0) {
            local_288.StringLength = 0;
            local_288.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar19 = strlen(pcVar27);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,pcVar27,(int)sVar19,Yes);
          }
          ::FString::operator=((FString *)((longlong)pFVar33->TimecodeInfo + 0x20),local_288.Ptr);
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
          uStack_7dc = 1;
          local_7e0 = *(undefined4 *)((longlong)pFVar33->TimecodeInfo + 8);
          *(ulonglong *)((longlong)pFVar33->TimecodeInfo + 0x60) = CONCAT44(1,local_7e0);
        }
        pFVar15 = FindRiffChunk(pFVar23,pFVar33->WaveDataEnd,0x4c4d5869);
        if ((pFVar33->TimecodeInfo == (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) ||
           (pFVar15 == (FRiffChunkOld *)0x0)) goto LAB_1475ebcbb;
        pFVar15 = pFVar15 + 1;
        local_168._padding_ = 0;
        if (pFVar15 == (FRiffChunkOld *)0x0) {
          local_168.StringLength = 0;
          local_168.Ptr = (wchar_t *)0x0;
        }
        else {
          sVar19 = strlen((char *)pFVar15);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,(char *)pFVar15,(int)sVar19,Yes);
        }
        ::FString::FString(&local_750,local_168.Ptr);
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        FXmlFile::FXmlFile(&local_738,&local_750,ConstructFromBuffer);
        bVar11 = FXmlFile::IsValid(&local_738);
        if (bVar11) {
          ::FString::FString(&local_760,L"SPEED");
          ::FString::FString(&local_770,L"TIMECODE_RATE");
          ::FString::FString(&local_7a0,L"/");
          ::FString::FString(&local_780,L"TIMECODE_FLAG");
          ::FString::FString(&local_7b0,L"DF");
          pFVar20 = FXmlFile::GetRootNode(&local_738);
          pFVar20 = FXmlNode::FindChildNode(pFVar20,&local_760);
          if (pFVar20 != (FXmlNode *)0x0) {
            this_00 = FXmlNode::FindChildNode(pFVar20,&local_770);
            if (this_00 != (FXmlNode *)0x0) {
              pFVar21 = FXmlNode::GetContent(this_00);
              ::FString::FString(&local_790,pFVar21);
              pwVar25 = L"";
              local_830.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar30.Data = (FScriptContainerElement *)L"";
              if (local_7a0.Data.ArrayNum != 0) {
                FVar30.Data = local_7a0.Data.AllocatorInstance.Data;
              }
              local_830.ArrayNum = 0;
              local_830.ArrayMax = 0;
              ::FString::ParseIntoArray(&local_790,&local_830,(wchar_t *)FVar30.Data,true);
              if (local_830.ArrayNum == 2) {
                if (*(int *)(local_830.AllocatorInstance.Data + 8) == 0) {
                  _Str_00 = L"";
                }
                else {
                  _Str_00 = *(wchar_t **)local_830.AllocatorInstance.Data;
                }
                lVar22 = _wtoi64(_Str_00);
                extraout_EAX = (int)lVar22;
                if ((local_830.ArrayNum < 2) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
                if (*(int *)(local_830.AllocatorInstance.Data + 0x18) != 0) {
                  pwVar25 = *(wchar_t **)(local_830.AllocatorInstance.Data + 0x10);
                }
                lVar22 = _wtoi64(pwVar25);
                extraout_EAX_00 = (int)lVar22;
                if ((extraout_EAX != 0) && (extraout_EAX_00 != 0)) {
                  *(ulonglong *)((longlong)pFVar33->TimecodeInfo + 0x60) =
                       CONCAT44(extraout_EAX_00,extraout_EAX);
                  local_7d8 = extraout_EAX;
                  iStack_7d4 = extraout_EAX_00;
                }
              }
              DestructItems<FString,int>
                        ((FString *)local_830.AllocatorInstance.Data,local_830.ArrayNum);
              if (local_830.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_830.AllocatorInstance.Data);
              }
              if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_790.Data.AllocatorInstance.Data);
              }
            }
            pFVar20 = FXmlNode::FindChildNode(pFVar20,&local_780);
            if (pFVar20 != (FXmlNode *)0x0) {
              pFVar21 = FXmlNode::GetContent(pFVar20);
              ::FString::FString(&local_7c0,pFVar21);
              if (local_7c0.Data.ArrayNum == local_7b0.Data.ArrayNum) {
                if (1 < local_7c0.Data.ArrayNum) {
                  iVar14 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_7c0.Data.AllocatorInstance.Data,
                                      (wchar_t *)local_7b0.Data.AllocatorInstance.Data);
                  bVar11 = iVar14 == 0;
                  goto LAB_1475ebc22;
                }
LAB_1475ebc29:
                *(undefined1 *)((longlong)pFVar33->TimecodeInfo + 0x68) = 1;
              }
              else {
                bVar11 = local_7c0.Data.ArrayNum + local_7b0.Data.ArrayNum == 1;
LAB_1475ebc22:
                if (bVar11) goto LAB_1475ebc29;
              }
              if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
              }
            }
          }
          if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
          }
          if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_780.Data.AllocatorInstance.Data);
          }
          if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
          }
          if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_770.Data.AllocatorInstance.Data);
          }
          if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_760.Data.AllocatorInstance.Data);
          }
        }
        FXmlFile::Clear(&local_738);
        if (local_738.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_738.ErrorMessage.Data.AllocatorInstance.Data);
        }
        if (local_738.LoadedFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_738.LoadedFile.Data.AllocatorInstance.Data);
        }
        if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.Data.AllocatorInstance.Data);
        }
LAB_1475ebcbb:
        pFVar23 = FindRiffChunk(pFVar23,pFVar33->WaveDataEnd,0x6c706d73);
        if (pFVar23 != (FRiffChunkOld *)0x0) {
          uVar13 = pFVar23[4].ChunkLen;
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          piVar16 = &(pFVar33->WaveSampleLoops).ArrayMax;
          (pFVar33->WaveSampleLoops).ArrayNum = 0;
          if (*piVar16 < (int)uVar13) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar13,&(pFVar33->WaveSampleLoops).AllocatorInstance,0,piVar16);
          }
          if (pFVar23[4].ChunkLen != 0) {
            do {
              pFVar26 = (pFVar33->WaveSampleLoops).AllocatorInstance.Data;
              local_820 = pFVar23[(longlong)puVar31 * 3 + 5].ChunkLen;
              uStack_81c = pFVar23[(longlong)puVar31 * 3 + 6].ChunkLen;
              local_818 = pFVar23[(longlong)puVar31 * 3 + 7].ChunkID;
              if (((pFVar26 <= (FScriptContainerElement *)&local_820) &&
                  ((FScriptContainerElement *)&local_820 < pFVar26 + (longlong)*piVar16 * 0xc)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar10 = (code *)swi(3);
                uVar12 = (*pcVar10)();
                return (bool)uVar12;
              }
              iVar14 = (pFVar33->WaveSampleLoops).ArrayNum;
              if (iVar14 == *piVar16) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&(pFVar33->WaveSampleLoops).AllocatorInstance,piVar16);
              }
              (pFVar33->WaveSampleLoops).ArrayNum = iVar14 + 1;
              uVar13 = (int)puVar31 + 1;
              puVar31 = (undefined8 *)(ulonglong)uVar13;
              pFVar26 = (pFVar33->WaveSampleLoops).AllocatorInstance.Data;
              *(ulonglong *)(pFVar26 + (longlong)iVar14 * 0xc) = CONCAT44(uStack_81c,local_820);
              *(uint *)(pFVar26 + (longlong)iVar14 * 0xc + 8) = local_818;
            } while (uVar13 < pFVar23[4].ChunkLen);
          }
        }
        return true;
      }
    }
  }
  if (param_3 == (FString *)0x0) {
    return false;
  }
  pwVar25 = L"Invalid WAVE file.";
LAB_1475eb230:
  ::FString::operator=(param_3,pwVar25);
  return false;
}

// ReportImportFailure @ 1475f5890

/* WARNING: Removing unreachable block (ram,0x0001475f5ca8) */
/* WARNING: Removing unreachable block (ram,0x0001475f5abd) */
/* WARNING: Removing unreachable block (ram,0x0001475f5ea9) */
/* WARNING: Removing unreachable block (ram,0x0001475f5cb6) */
/* WARNING: Removing unreachable block (ram,0x0001475f5acc) */
/* WARNING: Removing unreachable block (ram,0x0001475f5eb7) */

void __thiscall FWaveModInfo::ReportImportFailure(FWaveModInfo *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  IAnalyticsProviderET *pIVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FAnalyticsEventAttribute local_e8;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  pFVar5 = ::FString::FString(&local_48,L"Format");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1475f5923:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_1475f5923;
  }
  local_e8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_e8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_e8.AttrValueString,L"%u");
  local_e8.AttrValueBool = false;
  local_e8.AttrValueNumber = 0.0;
  local_e8.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_e8) &&
      (&local_e8 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_e8.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_e8.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_e8.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_e8.AttrType;
  local_e8.AttrValueString.Data.ArrayNum = 0;
  local_e8.AttrValueString.Data.ArrayMax = 0;
  local_e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = 0;
  local_e8.AttrName.Data.ArrayMax = 0;
  local_e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_38,L"Channels");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1475f5b23:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_1475f5b23;
  }
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_b8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_b8.AttrValueString,L"%u");
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrValueBool = false;
  local_b8.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(local_28,L"BitsPerSample");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_1475f5d33;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1475f5d33:
  local_88.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_88.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_88.AttrValueString,L"%u");
  local_88.AttrValueNumber = 0.0;
  local_88.AttrValueBool = false;
  local_88.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_88) &&
      (&local_88 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_88.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_88.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_88.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_88.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_88.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_88.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_88.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_88.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_88.AttrType;
  local_88.AttrValueString.Data.ArrayNum = 0;
  local_88.AttrValueString.Data.ArrayMax = 0;
  local_88.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = 0;
  local_88.AttrName.Data.ArrayMax = 0;
  local_88.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar7 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar7->_padding_ + 0x100);
  pFVar5 = ::FString::FString(&local_58,"Editor.Usage.WaveImportFailure");
  (*pcVar2)(pIVar7,pFVar5,&local_f8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_f8.Data,(int)local_f0);
  if ((FAnalyticsEventAttribute *)local_f8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

