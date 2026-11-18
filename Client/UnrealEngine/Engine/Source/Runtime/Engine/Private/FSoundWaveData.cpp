// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// ~FSoundWaveData @ 14869af20

void __thiscall FSoundWaveData::~FSoundWaveData(FSoundWaveData *this)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  
  puVar1 = (this->ZerothChunkData).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  (this->ZerothChunkData).View.DataPtr = (uchar *)0x0;
  (this->ZerothChunkData).View.ArrayNum = 0;
  puVar1 = (this->ResourceData).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  (this->ResourceData).View.DataPtr = (uchar *)0x0;
  (this->ResourceData).View.ArrayNum = 0;
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)(this->LoopRegions).AllocatorInstance.Data,
             (this->LoopRegions).ArrayNum);
  pFVar2 = (this->LoopRegions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)(this->CuePoints).AllocatorInstance.Data,
             (this->CuePoints).ArrayNum);
  pFVar2 = (this->CuePoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  puVar1 = (this->ResourceData).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FFormatContainer::FlushData(&this->CompressedFormatData);
  pFVar2 = (this->CompressedFormatData).Formats.Pairs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FAudioChunkHandle::~FAudioChunkHandle(&this->FirstChunk);
  FStreamedAudioPlatformData::~FStreamedAudioPlatformData(&this->RunningPlatformData);
  puVar1 = (this->ZerothChunkData).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}

// CacheRuntimeFormatDependentState @ 1486a75d0

void __thiscall FSoundWaveData::CacheRuntimeFormatDependentState(FSoundWaveData *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IAudioInfoFactoryRegistry *pIVar4;
  longlong *plVar5;
  FName local_res10;
  FName *local_res18 [2];
  
  local_res10 = param_1;
  if (param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InFormatName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_res10 == (FName)0x0) {
      return;
    }
  }
  this->RuntimeFormat = local_res10;
  pIVar4 = IAudioInfoFactoryRegistry::Get();
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_res10);
  if (plVar5 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,this->bIsStreaming);
    this->field_0xe4 = (cVar3 << 3 ^ this->field_0xe4) & 8U ^ this->field_0xe4;
    return;
  }
  local_res18[0] = &local_res10;
  `FSoundWaveData::CacheRuntimeFormatDependentState'::__l12::<lambda_1>::operator()(local_res18);
  return;
}

// DiscardZerothChunkData @ 1486b08c0

void __thiscall FSoundWaveData::DiscardZerothChunkData(FSoundWaveData *this)

{
  uchar *puVar1;
  
  puVar1 = (this->ZerothChunkData).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  (this->ZerothChunkData).View.DataPtr = (uchar *)0x0;
  (this->ZerothChunkData).View.ArrayNum = 0;
  return;
}

// FindChunkIndexForSeeking @ 1486b6580

int __thiscall FSoundWaveData::FindChunkIndexForSeeking(FSoundWaveData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar4 = (this->RunningPlatformData).Chunks.Array.ArrayNum;
  uVar5 = 0;
  uVar7 = 0xffffffff;
  if (0 < iVar4) {
    lVar6 = 0;
    uVar7 = 0xffffffff;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->RunningPlatformData).Chunks.Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = uVar7;
      if (*(int *)(*(longlong *)
                    ((this->RunningPlatformData).Chunks.Array.AllocatorInstance.Data + lVar6 * 8) +
                  8) != -1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->RunningPlatformData).Chunks.Array.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        uVar3 = uVar5;
        if (param_1 < *(uint *)(*(longlong *)
                                 ((this->RunningPlatformData).Chunks.Array.AllocatorInstance.Data +
                                 lVar6 * 8) + 8)) {
          return uVar7;
        }
      }
      uVar7 = uVar3;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return uVar7;
}

// FindRuntimeFormat @ 1486b7670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FName __thiscall FSoundWaveData::FindRuntimeFormat(FSoundWaveData *this,USoundWave *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  UObjectBaseUtility *in_R8;
  FName *pFVar10;
  undefined1 auStackY_8f8 [32];
  ForAnyElementType local_8a8;
  int local_8a0;
  int local_89c;
  ForAnyElementType *local_898;
  FName local_890;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  bVar3 = UObjectBaseUtility::IsTemplate(in_R8,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) goto LAB_1486b79e2;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar5,L"nosound");
    if (bVar3) {
      pwVar5 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar5,L"enablesound");
      if (bVar3) goto LAB_1486b7a5e;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486b7a5e:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*piVar9 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio != false) ||
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      != false)) {
LAB_1486b79e2:
    param_1->_padding_ = 0;
    return (FName)param_1;
  }
  if (this->LoadingBehavior != ForceInline) {
    FStreamedAudioPlatformData::GetAudioFormat(&this->RunningPlatformData);
    return (FName)param_1;
  }
  uVar1 = (this->CompressedFormatData).Formats.Pairs.ArrayNum;
  iVar8 = 0;
  local_8a8.Data = (FScriptContainerElement *)0x0;
  local_89c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  local_8a0 = 0;
  if (uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&local_8a8,0,&local_89c);
  }
  for (; (-1 < iVar8 && (iVar8 < (this->CompressedFormatData).Formats.Pairs.ArrayNum));
      iVar8 = iVar8 + 1) {
    if ((iVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
    pFVar10 = (FName *)((this->CompressedFormatData).Formats.Pairs.AllocatorInstance.Data +
                       (longlong)iVar8 * 0x10);
    if (((local_8a8.Data <= pFVar10) &&
        (pFVar10 < (FName *)(local_8a8.Data + (longlong)local_89c * 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
    if (local_8a0 == local_89c) {
      local_8a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_8a8,&local_89c);
    }
    lVar7 = (longlong)local_8a0;
    local_8a0 = local_8a0 + 1;
    *(FName *)(local_8a8.Data + lVar7 * 8) = *pFVar10;
  }
  if (local_8a0 != 1) {
    local_898 = &local_8a8;
    bVar3 = `FSoundWaveData::FindRuntimeFormat'::__l9::<lambda_1>::operator()(&local_898);
    if (!bVar3) {
      param_1->_padding_ = 0;
      goto LAB_1486b79bb;
    }
  }
  if ((local_8a0 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FName)(*pcVar2)();
    return FVar4;
  }
  FVar6.Data = local_8a8.Data;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.End = local_52;
  ::FName::AppendString((FName *)local_8a8.Data,&local_888);
  if (local_888.End < local_888.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_888,1);
  }
  *local_888.CurPos = L'\0';
  pwVar5 = wcschr(local_888.Base,L'_');
  if (pwVar5 != (wchar_t *)0x0) {
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    lVar7 = (longlong)pwVar5 - (longlong)local_888.Base;
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    FVar6.Data = (FScriptContainerElement *)
                 ::FName::FName(&local_890,(int)(lVar7 >> 1),local_888.Base,FNAME_Add);
  }
  param_1->_padding_ = (longlong)*(FName *)FVar6.Data;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
LAB_1486b79bb:
  if ((FName *)local_8a8.Data == (FName *)0x0) {
    return (FName)param_1;
  }
  FMemory::Free(local_8a8.Data);
  return (FName)param_1;
}

// GetChunk @ 1486bb620

FStreamedAudioChunk * __thiscall FSoundWaveData::GetChunk(FSoundWaveData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FStreamedAudioChunk *pFVar5;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar6;
  FSoundWaveData *local_res8;
  FSoundWaveData *local_res18;
  
  iVar3 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (iVar3 == 0) {
    local_res8 = this;
    `FSoundWaveData::GetChunk'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if (this->LoadingBehavior == ForceInline) {
    local_res18 = this;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(&local_res18);
  }
  uVar4 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (uVar4 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ChunkIndex < (uint32)GetNumChunks())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x2be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
  }
  pTVar6 = FStreamedAudioPlatformData::GetChunks(&this->RunningPlatformData);
  uVar4 = 0;
  if ((int)param_1 < (pTVar6->Array).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
  }
  return *(FStreamedAudioChunk **)
          ((pTVar6->Array).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetChunkData @ 1486bb860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSoundWaveData::GetChunkData(FSoundWaveData *this,int param_1,uchar **param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  FLLMScope local_28 [2];
  FMemScope local_20;
  FString local_18;
  
  FLLMScope::FLLMScope(local_28,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_20,AudioSoundWaves,true);
  iVar1 = GetChunkFromDDC(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::ToString(&this->PackageNameCached,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return bVar2;
}

// GetChunkFromDDC @ 1486bbbb0

int __thiscall
FSoundWaveData::GetChunkFromDDC(FSoundWaveData *this,int param_1,uchar **param_2,bool param_3)

{
  int iVar1;
  FLLMScope local_res8 [2];
  FSoundWaveData *local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_20,AudioSoundWaves,true);
  iVar1 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (iVar1 == 0) {
    local_28 = this;
    `FSoundWaveData::GetChunkFromDDC'::__l2::<lambda_1>::operator()(&local_28);
  }
  iVar1 = FStreamedAudioPlatformData::GetChunkFromDDC
                    (&this->RunningPlatformData,param_1,param_2,param_3);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  return iVar1;
}

// GetCompressedData @ 1486bc090

TBulkData<unsigned_char> * __thiscall
FSoundWaveData::GetCompressedData
          (FSoundWaveData *this,FName param_1,FPlatformAudioCookOverrides *param_2)

{
  code *pcVar1;
  bool bVar2;
  TBulkData<unsigned_char> **ppTVar3;
  FBulkData *this_00;
  TBulkData<unsigned_char> *pTVar4;
  long64 lVar5;
  FBulkData *pFVar6;
  bool bVar7;
  FName local_res8;
  
  if (this->bIsTemplate != '\0') {
    return (TBulkData<unsigned_char> *)0x0;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId508,"FSoundWaveProxy::GetCompressedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
               ,0x1fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId508);
  }
  USoundWave::GetPlatformSpecificFormat((FName)&local_res8,(FPlatformAudioCookOverrides *)param_1);
  ppTVar3 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
            Find(&(this->CompressedFormatData).Formats,local_res8);
  if (ppTVar3 == (TBulkData<unsigned_char> **)0x0) {
    pFVar6 = (FBulkData *)0x0;
  }
  else {
    this_00 = (FBulkData *)FFormatContainer::GetFormat(&this->CompressedFormatData,local_res8);
    if ((this_00 == (FBulkData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                           ,0x207,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TBulkData<unsigned_char> *)(*pcVar1)();
      return pTVar4;
    }
    lVar5 = FBulkData::GetBulkDataSize(this_00);
    pFVar6 = (FBulkData *)0x0;
    if (0 < lVar5) {
      pFVar6 = this_00;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TBulkData<unsigned_char> *)pFVar6;
}

// GetNumChunks @ 1486c28c0

uint __thiscall FSoundWaveData::GetNumChunks(FSoundWaveData *this)

{
  uint uVar1;
  FSoundWaveData *local_res8 [4];
  
  if (this->LoadingBehavior == ForceInline) {
    local_res8[0] = this;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar1 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  return uVar1;
}

// GetSizeOfChunk @ 1486c7420

uint __thiscall FSoundWaveData::GetSizeOfChunk(FSoundWaveData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar5;
  FSoundWaveData *local_res8 [2];
  FSoundWaveData *local_res18;
  FSoundWaveData *local_res20;
  
  if (this->LoadingBehavior == ForceInline) {
    local_res8[0] = this;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar3 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (uVar3 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < GetNumChunks()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x19a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  iVar4 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (iVar4 == 0) {
    local_res18 = this;
    `FSoundWaveData::GetSizeOfChunk'::__l2::<lambda_1>::operator()(&local_res18);
  }
  if (this->LoadingBehavior == ForceInline) {
    local_res20 = this;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(&local_res20);
  }
  uVar3 = FStreamedAudioPlatformData::GetNumChunks(&this->RunningPlatformData);
  if (uVar3 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ChunkIndex < (uint32)GetNumChunks())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pTVar5 = FStreamedAudioPlatformData::GetChunks(&this->RunningPlatformData);
  uVar3 = 0;
  if ((int)param_1 < (pTVar5->Array).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)(*(longlong *)
                    ((pTVar5->Array).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 4);
}

// GetZerothChunkData @ 1486ca360

FBulkDataBuffer<unsigned_char> * __thiscall FSoundWaveData::GetZerothChunkData(FSoundWaveData *this)

{
  return &this->ZerothChunkData;
}

// GetZerothChunkDataView @ 1486ca370

TArrayView<unsigned_char,int> * __thiscall
FSoundWaveData::GetZerothChunkDataView
          (FSoundWaveData *this,TArrayView<unsigned_char,int> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  uchar *puVar3;
  bool bVar4;
  TArrayView<unsigned_char,int> *pTVar5;
  int iVar6;
  
  puVar3 = (this->ZerothChunkData).View.DataPtr;
  lVar1 = (this->ZerothChunkData).View.ArrayNum;
  if (0x7fffffff < lVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("View.Num() <= ((int32) 0x7fffffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x23b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->DataPtr = puVar3;
  iVar6 = (int)lVar1;
  __return_storage_ptr__->ArrayNum = iVar6;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HasChunkSeekTable @ 1486ca8d0

bool __thiscall FSoundWaveData::HasChunkSeekTable(FSoundWaveData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->RunningPlatformData).Chunks.Array.ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return *(int *)(*(longlong *)
                     ((this->RunningPlatformData).Chunks.Array.AllocatorInstance.Data +
                     (longlong)param_1 * 8) + 8) != -1;
  }
  return false;
}

// HasCompressedData @ 1486ca960

bool __thiscall
FSoundWaveData::HasCompressedData(FSoundWaveData *this,FName param_1,ITargetPlatform *param_2)

{
  FPlatformAudioCookOverrides *pFVar1;
  FString *pFVar2;
  TBulkData<unsigned_char> **ppTVar3;
  wchar_t *pwVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (this->bIsTemplate != '\0') {
    return false;
  }
  local_res10 = param_1;
  pFVar1 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
  FVar5 = local_res10;
  if (pFVar1 != (FPlatformAudioCookOverrides *)0x0) {
    if (local_res10.ComparisonIndex.Value == CachedFormat.ComparisonIndex.Value) {
      FVar5 = PlatformSpecificFormat;
      if (local_res10.Number == CachedFormat.Number) goto LAB_1486caa4e;
    }
    pFVar2 = ::FName::ToString(&local_res10,&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,pwVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPlatformAudioCookOverrides::GetHashSuffix(pFVar1,&local_28);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
    PlatformSpecificFormat = local_res8;
    CachedFormat = local_res10;
    FVar5 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar5 = PlatformSpecificFormat;
    }
  }
LAB_1486caa4e:
  ppTVar3 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
            Find(&(this->CompressedFormatData).Formats,FVar5);
  return ppTVar3 != (TBulkData<unsigned_char> **)0x0;
}

// HasError @ 1486cb220

bool __thiscall FSoundWaveData::HasError(FSoundWaveData *this)

{
  return this->bHasError;
}

// InitializeDataFromSoundWave @ 1486cfd50

void __thiscall
FSoundWaveData::InitializeDataFromSoundWave(FSoundWaveData *this,USoundWave *param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  ESoundAssetCompressionType EVar8;
  UPackage *pUVar9;
  float fVar10;
  FLLMScope local_res8 [2];
  FWeakObjectPtr local_res10;
  USoundWave *local_res18;
  FName local_res20;
  FMemScope local_28 [3];
  
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(local_28,AudioSoundWaves,true);
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->NameCached).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->NameCached).Number = uVar2;
  pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (pUVar9 != (UPackage *)0x0) {
    uVar2 = *(undefined4 *)((longlong)&pUVar9->_padding_ + 4);
    (this->PackageNameCached).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar9->_padding_;
    (this->PackageNameCached).Number = uVar2;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  (this->SoundWaveKeyCached).ObjectIndex = local_res10.ObjectIndex;
  (this->SoundWaveKeyCached).ObjectSerialNumber = local_res10.ObjectSerialNumber;
  fVar10 = USoundWave::GetSampleRateForCurrentPlatform(param_1);
  this->SampleRate = fVar10;
  fVar1 = *(float *)((longlong)&param_1->_padding_ + 4);
  this->Duration = fVar1;
  this->NumChannels = param_1->NumChannels;
  this->NumFrames = (int)(fVar1 * fVar10);
  uVar3 = (param_1->CompressedDataGuid).B;
  uVar4 = (param_1->CompressedDataGuid).C;
  uVar5 = (param_1->CompressedDataGuid).D;
  (this->WaveGuid).A = (param_1->CompressedDataGuid).A;
  (this->WaveGuid).B = uVar3;
  (this->WaveGuid).C = uVar4;
  (this->WaveGuid).D = uVar5;
  bVar6 = USoundWave::IsStreaming(param_1,(wchar_t *)0x0);
  this->bIsStreaming = '\0';
  this->field_0xe4 = this->field_0xe4 | bVar6 << 2;
  bVar7 = (**(code **)(param_1->_padding_ + 0x310))(param_1);
  this->field_0xe4 = (this->bIsLooping ^ bVar7) & 1 ^ this->field_0xe4;
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
  this->bIsTemplate = bVar6;
  this->bIsSeekable = '\0';
  EVar8 = USoundWave::GetSoundAssetCompressionType(param_1);
  this->SoundAssetCompressionType = EVar8;
  bVar6 = USoundWave::ShouldUseStreamCaching(param_1);
  this->bShouldUseStreamCaching = bVar6;
  FindRuntimeFormat(this,(USoundWave *)&local_res20);
  CacheRuntimeFormatDependentState(this,local_res20);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsZerothChunkDataLoaded @ 1486d2550

bool __thiscall FSoundWaveData::IsZerothChunkDataLoaded(FSoundWaveData *this)

{
  return 0 < (this->ZerothChunkData).View.ArrayNum;
}

// LoadZerothChunk @ 1486d2c20

bool __thiscall FSoundWaveData::LoadZerothChunk(FSoundWaveData *this)

{
  return true;
}

// OverrideRuntimeFormat @ 1486d8340

void __thiscall FSoundWaveData::OverrideRuntimeFormat(FSoundWaveData *this,FName *param_1)

{
  CacheRuntimeFormatDependentState(this,*param_1);
  return;
}

// ReleaseCompressedAudio @ 1486e5fe0

void __thiscall FSoundWaveData::ReleaseCompressedAudio(FSoundWaveData *this)

{
  FAudioChunkHandle *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  FAudioChunkHandle local_38;
  
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AudioSoundWaves,true);
  pFVar1 = FAudioChunkHandle::FAudioChunkHandle(&local_38);
  FAudioChunkHandle::operator=(&this->FirstChunk,pFVar1);
  FAudioChunkHandle::~FAudioChunkHandle(&local_38);
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ResetError @ 1486ea280

bool __thiscall FSoundWaveData::ResetError(FSoundWaveData *this)

{
  undefined1 uVar1;
  
  this->bHasError = '\0';
  return this->bHasError;
}

// SetAllCuePoints @ 1486ede50

void __thiscall
FSoundWaveData::SetAllCuePoints
          (FSoundWaveData *this,TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar4;
  FSoundWaveCuePoint *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  
  pTVar4 = &this->CuePoints;
  piVar1 = &(this->CuePoints).ArrayMax;
  iVar8 = (this->CuePoints).ArrayNum;
  pFVar5 = (FSoundWaveCuePoint *)(pTVar4->AllocatorInstance).Data;
  if ((this->CuePoints).ArrayMax < 0) {
    DestructItems<FSoundWaveCuePoint,int>(pFVar5,iVar8);
    (this->CuePoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSoundWaveCuePoint,int>(pFVar5,iVar8);
    (this->CuePoints).ArrayNum = 0;
  }
  pTVar13 = &this->LoopRegions;
  pFVar5 = (FSoundWaveCuePoint *)(pTVar13->AllocatorInstance).Data;
  piVar2 = &(this->LoopRegions).ArrayMax;
  iVar8 = (this->LoopRegions).ArrayNum;
  if ((this->LoopRegions).ArrayMax < 0) {
    DestructItems<FSoundWaveCuePoint,int>(pFVar5,iVar8);
    (this->LoopRegions).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar13->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FSoundWaveCuePoint,int>(pFVar5,iVar8);
    (this->LoopRegions).ArrayNum = 0;
  }
  local_res10 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar10 + uVar9 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoundWaveCuePoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar12) break;
    if (pFVar10[0x28] == (FScriptContainerElement)0x0) {
      pFVar11 = (pTVar4->AllocatorInstance).Data;
      if ((pFVar11 <= pFVar10) && (pFVar10 < pFVar11 + (longlong)*piVar1 * 0x30)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (this->CuePoints).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->CuePoints).ArrayNum = iVar8 + 1;
      pFVar11 = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
    }
    else {
      pFVar11 = (pTVar13->AllocatorInstance).Data;
      if ((pFVar11 <= pFVar10) && (pFVar10 < pFVar11 + (longlong)*piVar2 * 0x30)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (this->LoopRegions).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar13->AllocatorInstance,piVar2);
      }
      (this->LoopRegions).ArrayNum = iVar8 + 1;
      pFVar11 = (pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
    }
    *(undefined4 *)pFVar11 = *(undefined4 *)pFVar10;
    ::FString::FString((FString *)(pFVar11 + 8),(FString *)(pFVar10 + 8));
    uVar9 = (ulonglong)local_res10;
    *(undefined8 *)(pFVar11 + 0x18) = *(undefined8 *)(pFVar10 + 0x18);
    *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
    pFVar3 = pFVar10 + 0x28;
    pFVar10 = pFVar10 + 0x30;
    pFVar11[0x28] = *pFVar3;
  }
  return;
}

// SetError @ 1486ee2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSoundWaveData::SetError(FSoundWaveData *this,wchar_t *param_1)

{
  FString local_18;
  
  if ((2 < (byte)LogAudio._0_1_) && (this->bHasError == '\0')) {
    ::FName::ToString(&this->PackageNameCached,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->bHasError = '\x01';
    return;
  }
  this->bHasError = '\x01';
  return;
}

// operator() @ 15052f130

bool __thiscall `FSoundWaveData::GetChunk'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549628>);
  if (bVar2) {
    EnumToString(*(ESoundWaveLoadingBehavior *)(*(longlong *)this + 0x78));
    ::FName::ToString((FName *)(*(longlong *)this + 0x7c),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549628>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f1bb;
    }
  }
  bVar2 = false;
LAB_15052f1bb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f1f0

bool __thiscall `FSoundWaveData::GetChunkFromDDC'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549641>);
  if (bVar2) {
    EnumToString(*(ESoundWaveLoadingBehavior *)(*(longlong *)this + 0x78));
    ::FName::ToString((FName *)(*(longlong *)this + 0x7c),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549641>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f27b;
    }
  }
  bVar2 = false;
LAB_15052f27b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f4f0

bool __thiscall `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549303>);
  if (bVar2) {
    EnumToString(*(ESoundWaveLoadingBehavior *)(*(longlong *)this + 0x78));
    ::FName::ToString((FName *)(*(longlong *)this + 0x7c),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549303>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f57b;
    }
  }
  bVar2 = false;
LAB_15052f57b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f6f0

bool __thiscall `FSoundWaveData::GetSizeOfChunk'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549344>);
  if (bVar2) {
    EnumToString(*(ESoundWaveLoadingBehavior *)(*(longlong *)this + 0x78));
    ::FName::ToString((FName *)(*(longlong *)this + 0x7c),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549344>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f77b;
    }
  }
  bVar2 = false;
LAB_15052f77b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f7b0

bool __thiscall `FSoundWaveData::FindRuntimeFormat'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549284>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549284>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052f990

bool __thiscall
`FSoundWaveData::CacheRuntimeFormatDependentState'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549176>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549176>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f9f7;
    }
  }
  bVar2 = false;
LAB_15052f9f7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

