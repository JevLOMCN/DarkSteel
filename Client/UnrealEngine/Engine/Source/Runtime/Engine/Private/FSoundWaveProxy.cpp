// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// <lambda_invoker_cdecl> @ 14867d1b0

void __cdecl
`FSoundWaveProxy::GetZerothChunk'::__l17::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// FSoundWaveProxy @ 148695db0

FSoundWaveProxy * __thiscall
FSoundWaveProxy::FSoundWaveProxy(FSoundWaveProxy *this,FSoundWaveProxy *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7IProxyData_Audio__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FSoundWaveProxy__6B_;
  (this->SoundWaveDataPtr).Object = (param_1->SoundWaveDataPtr).Object;
  pTVar1 = (param_1->SoundWaveDataPtr).SharedReferenceCount.ReferenceController;
  (this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypeHash = param_1->TypeHash;
  return this;
}

// FSoundWaveProxy @ 148695e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSoundWaveProxy * __thiscall
FSoundWaveProxy::FSoundWaveProxy(FSoundWaveProxy *this,USoundWave *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FSoundWaveProxy *pFVar6;
  FSoundWaveData *pFVar7;
  uint uVar8;
  undefined1 auStackY_148 [32];
  FLLMScope local_118;
  FName local_114;
  FName local_10c;
  FMemScope local_100;
  FString local_f8;
  FString local_e8;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'
                    ::__l2::MyClassName,"FSoundWaveProxy");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this->_padding_ =
       (longlong)
       `public:_static_class_FName___cdecl_FSoundWaveProxy::GetAudioProxyTypeName(void)'::__l2::
       MyClassName;
  this->_padding_ = (longlong)&___7FSoundWaveProxy__6B_;
  (this->SoundWaveDataPtr).Object = (param_1->SoundWaveDataPtr).Object;
  pTVar1 = (param_1->SoundWaveDataPtr).SharedReferenceCount.ReferenceController;
  (this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypeHash = 0xffffffff;
  FLLMScope::FLLMScope(&local_118,AudioSoundWaveProxies,false,None,Default,true);
  FMemScope::FMemScope(&local_100,AudioSoundWaveProxies,true);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x1470,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSoundWaveProxy *)(*pcVar2)();
    return pFVar6;
  }
  bVar3 = USoundWave::IsStreaming(param_1,(wchar_t *)0x0);
  pcVar2 = *(code **)(param_1->_padding_ + 0x3d8);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSoundWaveProxy *)(*pcVar2)();
    return pFVar6;
  }
  cVar5 = (*pcVar2)(param_1,((this->SoundWaveDataPtr).Object)->RuntimeFormat);
  if (((cVar5 == '\0') && (!bVar3)) && (2 < (byte)LogAudio._0_1_)) {
    pFVar7 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
    local_d8.Base = local_b8;
    local_d8.CurPos = local_b8;
    local_d8.End = (wchar_t *)local_38;
    ::FName::AppendString(&pFVar7->RuntimeFormat,&local_d8);
    if (local_d8.End < local_d8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
    }
    *local_d8.CurPos = L'\0';
    local_114 = (FName)param_1->_padding_;
    ::FName::ToString(&local_114,&local_f8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSoundWaveProxy *)(*pcVar2)();
    return pFVar6;
  }
  if ((!bVar3) && (((this->SoundWaveDataPtr).Object)->ResourceSize < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsStreaming || bHasResourceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x147f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSoundWaveProxy *)(*pcVar2)();
      return pFVar6;
    }
    if (2 < (byte)LogAudio._0_1_) {
      local_10c = (FName)param_1->_padding_;
      ::FName::ToString(&local_10c,&local_e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  this->TypeHash = uVar8 >> 0x10 ^ uVar8;
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(&local_118);
  return this;
}

// ~FSoundWaveProxy @ 14869b000

void __thiscall FSoundWaveProxy::~FSoundWaveProxy(FSoundWaveProxy *this)

{
  this->_padding_ = (longlong)&___7FSoundWaveProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController);
  return;
}

// GetChunk @ 1486bb710

FStreamedAudioChunk * __thiscall FSoundWaveProxy::GetChunk(FSoundWaveProxy *this,uint param_1)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FStreamedAudioChunk *pFVar6;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar7;
  FSoundWaveData *local_res8;
  FSoundWaveData *local_res18;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1498,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStreamedAudioChunk *)(*pcVar2)();
      return pFVar6;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStreamedAudioChunk *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  iVar4 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  if (iVar4 == 0) {
    local_res8 = pFVar1;
    `FSoundWaveData::GetChunk'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if (pFVar1->LoadingBehavior == ForceInline) {
    local_res18 = pFVar1;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(&local_res18);
  }
  uVar5 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  if (uVar5 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ChunkIndex < (uint32)GetNumChunks())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x2be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStreamedAudioChunk *)(*pcVar2)();
      return pFVar6;
    }
  }
  pTVar7 = FStreamedAudioPlatformData::GetChunks(&pFVar1->RunningPlatformData);
  uVar5 = 0;
  if ((int)param_1 < (pTVar7->Array).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStreamedAudioChunk *)(*pcVar2)();
      return pFVar6;
    }
  }
  return *(FStreamedAudioChunk **)
          ((pTVar7->Array).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetChunkData @ 1486bb950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSoundWaveProxy::GetChunkData(FSoundWaveProxy *this,int param_1,uchar **param_2,bool param_3)

{
  FSoundWaveData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FLLMScope local_res8 [2];
  FMemScope local_38;
  FString local_30;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x14ca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = (this->SoundWaveDataPtr).Object;
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_38,AudioSoundWaves,true);
  iVar4 = FSoundWaveData::GetChunkFromDDC(this_00,param_1,param_2,param_3);
  if (iVar4 == 0) {
    if (2 < (byte)LogAudio._0_1_) {
      ::FName::ToString(&this_00->PackageNameCached,&local_30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return bVar2;
}

// GetChunkFromDDC @ 1486bbc60

int __thiscall
FSoundWaveProxy::GetChunkFromDDC(FSoundWaveProxy *this,int param_1,uchar **param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x149e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FSoundWaveData::GetChunkFromDDC((this->SoundWaveDataPtr).Object,param_1,param_2,param_3);
  return iVar3;
}

// GetCompressedData @ 1486bc1b0

TBulkData<unsigned_char> * __thiscall
FSoundWaveProxy::GetCompressedData
          (FSoundWaveProxy *this,FName param_1,FPlatformAudioCookOverrides *param_2)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TBulkData<unsigned_char> *pTVar5;
  TBulkData<unsigned_char> **ppTVar6;
  FBulkData *this_00;
  long64 lVar7;
  FBulkData *pFVar8;
  FName local_res8;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x156c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TBulkData<unsigned_char> *)(*pcVar2)();
    return pTVar5;
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TBulkData<unsigned_char> *)(*pcVar2)();
    return pTVar5;
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1->bIsTemplate == '\0') {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId508,"FSoundWaveProxy::GetCompressedData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                 ,0x1fc);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId508);
    }
    USoundWave::GetPlatformSpecificFormat((FName)&local_res8,(FPlatformAudioCookOverrides *)param_1)
    ;
    ppTVar6 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(pFVar1->CompressedFormatData).Formats,local_res8);
    if (ppTVar6 != (TBulkData<unsigned_char> **)0x0) {
      this_00 = (FBulkData *)FFormatContainer::GetFormat(&pFVar1->CompressedFormatData,local_res8);
      if ((this_00 == (FBulkData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0x207,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBulkData<unsigned_char> *)(*pcVar2)();
        return pTVar5;
      }
      lVar7 = FBulkData::GetBulkDataSize(this_00);
      pFVar8 = (FBulkData *)0x0;
      if (0 < lVar7) {
        pFVar8 = this_00;
      }
      if (!bVar3) {
        return (TBulkData<unsigned_char> *)pFVar8;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return (TBulkData<unsigned_char> *)pFVar8;
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (TBulkData<unsigned_char> *)0x0;
}

// GetCuePoints @ 1486bcd70

TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> * __thiscall
FSoundWaveProxy::GetCuePoints(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x150c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->CuePoints;
}

// GetCuePointsAndLoopRegions @ 1486bcec0

TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> * __thiscall
FSoundWaveProxy::GetCuePointsAndLoopRegions
          (FSoundWaveProxy *this,
          TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FSoundWaveData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1518,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->SoundWaveDataPtr).Object;
  if (pFVar2 == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar6 = (((this->SoundWaveDataPtr).Object)->CuePoints).ArrayNum + (pFVar2->LoopRegions).ArrayNum;
  if (-1 < (int)uVar6) {
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
    }
    TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>::
    Append<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>
              (__return_storage_ptr__,&((this->SoundWaveDataPtr).Object)->LoopRegions);
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
    }
    TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>::
    Append<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>
              (__return_storage_ptr__,&((this->SoundWaveDataPtr).Object)->CuePoints);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// GetDuration @ 1486bdb80

float __thiscall FSoundWaveProxy::GetDuration(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14e8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->Duration;
}

// GetFName @ 1486be850

FName * __thiscall FSoundWaveProxy::GetFName(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->NameCached;
}

// GetFObjectKey @ 1486be8d0

FObjectKey * __thiscall FSoundWaveProxy::GetFObjectKey(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FObjectKey *pFVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14e2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->SoundWaveKeyCached;
}

// GetLoadingBehavior @ 1486c09f0

ESoundWaveLoadingBehavior __thiscall FSoundWaveProxy::GetLoadingBehavior(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  ESoundWaveLoadingBehavior EVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1560,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->LoadingBehavior;
}

// GetLoopRegions @ 1486c0d40

TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> * __thiscall
FSoundWaveProxy::GetLoopRegions(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1512,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->LoopRegions;
}

// GetNumChannels @ 1486c2840

uint __thiscall FSoundWaveProxy::GetNumChannels(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1500,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->NumChannels;
}

// GetNumChunks @ 1486c2900

uint __thiscall FSoundWaveProxy::GetNumChunks(FSoundWaveProxy *this)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSoundWaveData *local_res8 [4];
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14fa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1->LoadingBehavior == ForceInline) {
    local_res8[0] = pFVar1;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar4 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  return uVar4;
}

// GetNumFrames @ 1486c2b20

int __thiscall FSoundWaveProxy::GetNumFrames(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->NumFrames;
}

// GetPackageName @ 1486c35a0

FName * __thiscall FSoundWaveProxy::GetPackageName(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->PackageNameCached;
}

// GetResourceData @ 1486c6400

uchar * __thiscall FSoundWaveProxy::GetResourceData(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return (((this->SoundWaveDataPtr).Object)->ResourceData).View.DataPtr;
}

// GetResourceSize @ 1486c6530

int __thiscall FSoundWaveProxy::GetResourceSize(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->ResourceSize;
}

// GetRuntimeFormat @ 1486c7020

FName * __thiscall FSoundWaveProxy::GetRuntimeFormat(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->SoundWaveDataPtr).Object)->RuntimeFormat;
}

// GetSampleRate @ 1486c7110

float __thiscall FSoundWaveProxy::GetSampleRate(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->SampleRate;
}

// GetSizeOfChunk @ 1486c7550

uint __thiscall FSoundWaveProxy::GetSizeOfChunk(FSoundWaveProxy *this,uint param_1)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar6;
  FSoundWaveData *local_res8 [2];
  FSoundWaveData *local_res18;
  FSoundWaveData *local_res20;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1506,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1->LoadingBehavior == ForceInline) {
    local_res8[0] = pFVar1;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar4 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  if (uVar4 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < GetNumChunks()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x19a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar5 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  if (iVar5 == 0) {
    local_res18 = pFVar1;
    `FSoundWaveData::GetSizeOfChunk'::__l2::<lambda_1>::operator()(&local_res18);
  }
  if (pFVar1->LoadingBehavior == ForceInline) {
    local_res20 = pFVar1;
    `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(&local_res20);
  }
  uVar4 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
  if (uVar4 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ChunkIndex < (uint32)GetNumChunks())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pTVar6 = FStreamedAudioPlatformData::GetChunks(&pFVar1->RunningPlatformData);
  uVar4 = 0;
  if ((int)param_1 < (pTVar6->Array).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(uint *)(*(longlong *)
                    ((pTVar6->Array).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 4);
}

// GetSoundWaveData @ 1486c8050

TSharedPtr<FSoundWaveData,1> * __thiscall
FSoundWaveProxy::GetSoundWaveData
          (FSoundWaveProxy *this,TSharedPtr<FSoundWaveData,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FSoundWaveData,1> *pTVar4;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14b8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FSoundWaveData,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (this->SoundWaveDataPtr).Object;
  pTVar1 = (this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetZerothChunk @ 1486c9be0

TArrayView<unsigned_char_const_,int> * __cdecl
FSoundWaveProxy::GetZerothChunk
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          TSharedPtr<FSoundWaveProxy,1> *param_1,bool param_2)

{
  FSoundWaveData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  FSoundWaveProxy *pFVar7;
  FStreamingManagerCollection *pFVar8;
  IAudioStreamingManager *pIVar9;
  uchar *puVar10;
  int iVar11;
  FSoundWaveData *local_res10;
  ulonglong in_stack_ffffffffffffff78;
  undefined4 uVar12;
  FAudioChunkHandle local_68;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pFVar7 = param_1->Object;
  if (pFVar7 == (FSoundWaveProxy *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5972747921735554418>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1572,"SoundWaveProxy.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  else {
    if ((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x154e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (0 < (((pFVar7->SoundWaveDataPtr).Object)->ZerothChunkData).View.ArrayNum) {
      if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = param_1->Object;
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      if (((pFVar7->SoundWaveDataPtr).Object)->bShouldUseStreamCaching == '\0') {
        pFVar8 = IStreamingManager::Get();
        pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
        (**(code **)(*(longlong *)pIVar9 + 0xb0))
                  (pIVar9,&local_68,param_1,0,in_stack_ffffffffffffff78 & 0xffffffffffffff00,0);
        uVar5 = FAudioChunkHandle::Num(&local_68);
        puVar10 = FAudioChunkHandle::GetData(&local_68);
        __return_storage_ptr__->DataPtr = puVar10;
        __return_storage_ptr__->ArrayNum = uVar5;
        if (((int)uVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
          return pTVar6;
        }
        FAudioChunkHandle::~FAudioChunkHandle(&local_68);
        return __return_storage_ptr__;
      }
      pFVar7 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
      uVar12 = (undefined4)(in_stack_ffffffffffffff78 >> 0x20);
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundWaveDataPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0x14fa,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (pFVar7->SoundWaveDataPtr).Object;
      if (pFVar1->LoadingBehavior == ForceInline) {
        local_res10 = pFVar1;
        `FSoundWaveData::GetNumChunks'::__l2::<lambda_1>::operator()(&local_res10);
      }
      uVar5 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
      if (1 < uVar5) {
        pFVar8 = IStreamingManager::Get();
        pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
        local_10 = 0;
        local_28 = &
                   ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_20 = `FSoundWaveProxy::GetZerothChunk'::__l17::<lambda_1>::<lambda_invoker_cdecl>;
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                      ::Call;
        (**(code **)(*(longlong *)pIVar9 + 0xa8))
                  (pIVar9,param_1,1,local_38,CONCAT44(uVar12,0xff),param_2);
      }
      pFVar7 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundWaveDataPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0x1566,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      if (((pFVar7->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (pFVar7->SoundWaveDataPtr).Object;
      puVar10 = (pFVar1->ZerothChunkData).View.DataPtr;
      lVar2 = (pFVar1->ZerothChunkData).View.ArrayNum;
      if ((0x7fffffff < lVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Num() <= ((int32) 0x7fffffff)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0x23b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      iVar11 = (int)lVar2;
      if ((iVar11 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
      __return_storage_ptr__->DataPtr = puVar10;
      __return_storage_ptr__->ArrayNum = iVar11;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetZerothChunkDataView @ 1486ca410

TArrayView<unsigned_char,int> * __thiscall
FSoundWaveProxy::GetZerothChunkDataView
          (FSoundWaveProxy *this,TArrayView<unsigned_char,int> *__return_storage_ptr__)

{
  FSoundWaveData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  TArrayView<unsigned_char,int> *pTVar6;
  int iVar7;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1566,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  puVar4 = (pFVar1->ZerothChunkData).View.DataPtr;
  lVar2 = (pFVar1->ZerothChunkData).View.ArrayNum;
  if (0x7fffffff < lVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("View.Num() <= ((int32) 0x7fffffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x23b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = puVar4;
  iVar7 = (int)lVar2;
  __return_storage_ptr__->ArrayNum = iVar7;
  if (iVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// HasCompressedData @ 1486caa80

bool __thiscall
FSoundWaveProxy::HasCompressedData(FSoundWaveProxy *this,FName param_1,ITargetPlatform *param_2)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPlatformAudioCookOverrides *pFVar5;
  FString *pFVar6;
  TBulkData<unsigned_char> **ppTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x155a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1->bIsTemplate == '\0') {
    local_res8 = param_1;
    pFVar5 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
    if (pFVar5 != (FPlatformAudioCookOverrides *)0x0) {
      if ((local_res8.ComparisonIndex.Value != CachedFormat.ComparisonIndex.Value) ||
         (local_res8.Number != CachedFormat.Number)) {
        pFVar6 = ::FName::ToString(&local_res8,&local_18);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_28,pwVar8);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        FPlatformAudioCookOverrides::GetHashSuffix(pFVar5,&local_28);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar9.Data = local_28.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,(wchar_t *)FVar9.Data);
        PlatformSpecificFormat = local_res10;
        CachedFormat = local_res8;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ppTVar7 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
                ::Find(&(pFVar1->CompressedFormatData).Formats,PlatformSpecificFormat);
      return ppTVar7 != (TBulkData<unsigned_char> **)0x0;
    }
    ppTVar7 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(pFVar1->CompressedFormatData).Formats,local_res8);
    return ppTVar7 != (TBulkData<unsigned_char> **)0x0;
  }
  return false;
}

// IsLooping @ 1486d1310

bool __thiscall FSoundWaveProxy::IsLooping(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1529,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsLooping;
}

// IsRetainingAudio @ 1486d19c0

bool __thiscall FSoundWaveProxy::IsRetainingAudio(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x153b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FAudioChunkHandle::IsValid(&((this->SoundWaveDataPtr).Object)->FirstChunk);
  return bVar2;
}

// IsSeekable @ 1486d1be0

bool __thiscall FSoundWaveProxy::IsSeekable(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1547,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsSeekable;
}

// IsStreaming @ 1486d20e0

bool __thiscall FSoundWaveProxy::IsStreaming(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1535,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsStreaming;
}

// IsTemplate @ 1486d2440

bool __thiscall FSoundWaveProxy::IsTemplate(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x152f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsTemplate;
}

// IsZerothChunkDataLoaded @ 1486d2560

bool __thiscall FSoundWaveProxy::IsZerothChunkDataLoaded(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x154e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < (((this->SoundWaveDataPtr).Object)->ZerothChunkData).View.ArrayNum;
}

// LoadZerothChunk @ 1486d2c30

bool __thiscall FSoundWaveProxy::LoadZerothChunk(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14c4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// ReleaseCompressedAudio @ 1486e6060

void __thiscall FSoundWaveProxy::ReleaseCompressedAudio(FSoundWaveProxy *this)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAudioChunkHandle *pFVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  FAudioChunkHandle local_38;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x14be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AudioSoundWaves,true);
  pFVar4 = FAudioChunkHandle::FAudioChunkHandle(&local_38);
  FAudioChunkHandle::operator=(&pFVar1->FirstChunk,pFVar4);
  FAudioChunkHandle::~FAudioChunkHandle(&local_38);
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShouldUseStreamCaching @ 1486f0f10

bool __thiscall FSoundWaveProxy::ShouldUseStreamCaching(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1541,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bShouldUseStreamCaching;
}

// WasLoadingBehaviorOverridden @ 1486f8050

bool __thiscall FSoundWaveProxy::WasLoadingBehaviorOverridden(FSoundWaveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1554,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bLoadingBehaviorOverridden;
}

