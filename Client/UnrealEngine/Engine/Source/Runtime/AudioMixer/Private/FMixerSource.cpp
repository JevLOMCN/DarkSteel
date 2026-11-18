// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 53

// FMixerSource @ 1464d8790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMixerSource * __thiscall
Audio::FMixerSource::FMixerSource(FMixerSource *this,FAudioDevice *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = (longlong)&___7FSoundSource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xd0 | 0x10;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FSoundSource__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISourceListener__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
  (this->MixerSourceBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioLink).Object = (IAudioLinkSourcePushed *)0x0;
  (this->AudioLink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PreviousSubmixResolved).Object = (FMixerSubmix *)0x0;
  (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PrevousSubmix).ObjectKey = (FObjectKey)0x0;
  (this->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelMap).ArrayNum = 0;
  (this->ChannelMap).ArrayMax = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x469c4000;
  *(undefined4 *)&this->_padding_ = 0x41a00000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x469c4000;
  this->_padding_ = 0x41a00000;
  this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->MixerDevice = (FMixerDevice *)param_1;
  this->MixerBuffer = (FMixerBuffer *)0x0;
  this->MixerSourceVoice = (FMixerSourceVoice *)0x0;
  this->bBypassingSubmixModulation = false;
  this->bPreviousBusEnablement = 0;
  this->bPreviousBaseSubmixEnablement = 0;
  (this->ChannelMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PreviousAzimuth = -1.0;
  this->PreviousPlaybackPercent = 0.0;
  FSpatializationParams::FSpatializationParams(&this->SpatializationParams);
  this->InitializationState = NotInitialized;
  this->bPlayedCachedBuffer = (FThreadSafeBool)0x0;
  this->bPlaying = (FThreadSafeBool)0x0;
  this->bIsStopping = (FThreadSafeBool)0x0;
  this->bLoopCallback = (FThreadSafeBool)0x0;
  this->bIsDone = (FThreadSafeBool)0x0;
  this->bIsEffectTailsDone = (FThreadSafeBool)0x0;
  this->bIsPlayingEffectTails = (FThreadSafeBool)0x0;
  this->bFreeAsyncTask = (FThreadSafeBool)0x0;
  (this->DynamicBusSendInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicBusSendInfos).ArrayNum = 0;
  (this->DynamicBusSendInfos).ArrayMax = 0;
  *(undefined8 *)&(this->PreviousSubmixSends).Elements = 0;
  *(undefined8 *)&(this->PreviousSubmixSends).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreviousSubmixSends).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x34 = 0;
  (this->PreviousSubmixSends).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreviousSubmixSends).HashSize = 0;
  this->bEditorWarnedChangedSpatialization = 0;
  this->bIsVorbis = 0;
  this->bDebugMode = 0;
  this->bIs3D = 0;
  this->bIsReleasing = (FThreadSafeBool)0x0;
  *(uint *)&this->field_0x2bc =
       (((byte)param_1->field_0x5ba & 8) * 2 ^ *(uint *)&this->field_0x2bc & 0xffffffef) &
       0xffffff9f;
  return this;
}

// ~FMixerSource @ 1464dc570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::~FMixerSource(FMixerSource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&_vftable__for__FSoundSource__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISourceListener__;
  FreeResources(this);
  (this->PreviousSubmixSends).HashSize = 0;
  FVar3 = (this->PreviousSubmixSends).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreviousSubmixSends).Elements);
  DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int>
            ((FDynamicBusSendInfo *)(this->DynamicBusSendInfos).AllocatorInstance.Data,
             (this->DynamicBusSendInfos).ArrayNum);
  pFVar4 = (this->DynamicBusSendInfos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  }
  pFVar4 = (this->ChannelMap).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioLink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
  FSoundSource::~FSoundSource((FSoundSource *)this);
  return;
}

// operator() @ 1464e46c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Audio::FMixerSource::SetupBusData'::__l8::<lambda_1>::operator()
          (void *this,TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *param_1,
          FSoundSourceBusSendInfo *param_2,int param_3,uint param_4,bool param_5,int param_6,
          FString *param_7)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *pTVar7;
  float *pfVar8;
  ForAnyElementType *pFVar9;
  FScriptContainerElement *pFVar10;
  float *pfVar11;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  uint local_140;
  float local_13c;
  int local_138;
  FString local_130;
  undefined1 local_118 [120];
  void *local_a0;
  undefined4 local_98;
  void *local_90;
  ForAnyElementType local_78;
  bool local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140 = param_4;
  local_138 = param_6;
  local_13c = 0.0;
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  if (&local_130 != param_7) {
    uVar1 = (param_7->Data).ArrayNum;
    pFVar2 = (param_7->Data).AllocatorInstance.Data;
    local_130.Data.ArrayMax = 0;
    local_130.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_130,uVar1,&local_130.Data.ArrayMax);
      memcpy(local_130.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  if (param_5) {
    local_13c = param_2->SendLevel;
  }
  else {
    local_13c = 0.0;
  }
  if (param_1 != (TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = param_1 + param_3;
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_140) &&
       ((FScriptContainerElement *)&local_140 < pFVar2 + (longlong)pTVar7->ArrayMax * 0x20)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 == pTVar7->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    _Src.Data = local_130.Data.AllocatorInstance.Data;
    pTVar7->ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x20;
    *(uint *)(pFVar2 + lVar6) = local_140;
    pFVar10 = pFVar2 + lVar6 + 0x10;
    *(float *)(pFVar2 + lVar6 + 4) = local_13c;
    *(int *)(pFVar2 + lVar6 + 8) = local_138;
    *(undefined8 *)&pFVar10->field_0x0 = 0;
    lVar6 = (longlong)local_130.Data.ArrayNum;
    *(int *)&pFVar10[8].field_0x0 = local_130.Data.ArrayNum;
    if (local_130.Data.ArrayNum == 0) {
      *(int *)(pFVar10 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_130.Data.ArrayNum,
                 (int *)(pFVar10 + 0xc));
      memcpy(*(void **)&pFVar10->field_0x0,_Src.Data,lVar6 * 2);
    }
  }
  local_118._0_4_ = 0.0;
  local_118._4_4_ = 0;
  local_118._8_8_ = (FScriptContainerElement *)0x0;
  local_118._16_4_ = 0;
  local_118._20_4_ = 0;
  local_118[0x18] = Manual;
  local_118[0x19] = PreEffect;
  local_118._28_4_ = 0.0;
  local_118._32_4_ = 0.0;
  local_118._36_4_ = 0.0;
  local_118._40_4_ = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)(local_118 + 0x30));
  local_118._4_4_ = local_140;
  local_118._0_4_ = param_2->SendLevel;
  local_60 = true;
  iVar5 = local_130.Data.ArrayNum + -1;
  if (local_130.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            ((FString *)(local_118 + 8),(wchar_t *)local_130.Data.AllocatorInstance.Data,iVar5);
  local_118._28_4_ = param_2->MinSendLevel;
  local_118._32_4_ = param_2->MaxSendLevel;
  local_118._36_4_ = param_2->MinSendDistance;
  local_118._40_4_ = param_2->MaxSendDistance;
  local_118[0x19] = (EBusSendType)param_3;
  local_118[0x18] = param_2->SourceBusSendLevelControlMethod;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)(local_118 + 0x30),&param_2->CustomSendLevelCurve);
  lVar6 = *(longlong *)this;
  iVar5 = *(int *)(lVar6 + 0x260);
  pfVar8 = *(float **)(lVar6 + 600);
  pfVar11 = pfVar8 + (longlong)iVar5 * 0x30;
  while( true ) {
    if (*(int *)(lVar6 + 0x260) != iVar5) {
      local_148[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSource::FDynamicBusSendInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_148);
    }
    if (pfVar8 == pfVar11) break;
    if (pfVar8[1] == (float)local_118._4_4_) {
      *pfVar8 = (float)local_118._0_4_;
      pfVar8[1] = (float)local_118._4_4_;
      ::FString::operator=((FString *)(pfVar8 + 2),(FString *)(local_118 + 8));
      *(ESourceBusSendLevelControlMethod *)(pfVar8 + 6) = local_118[0x18];
      *(EBusSendType *)((longlong)pfVar8 + 0x19) = local_118[0x19];
      pfVar8[7] = (float)local_118._28_4_;
      pfVar8[8] = (float)local_118._32_4_;
      pfVar8[9] = (float)local_118._36_4_;
      pfVar8[10] = (float)local_118._40_4_;
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)(pfVar8 + 0xc),(FRuntimeFloatCurve *)(local_118 + 0x30));
      *(undefined1 *)(pfVar8 + 0x2e) = 0;
LAB_1464e4a89:
      *(uint *)(*(longlong *)this + 700) = *(uint *)(*(longlong *)this + 700) | 0x20;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      local_118._48_8_ = &___7FIndexedCurve__6B_;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      local_98 = 0;
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_118 + 0x38));
      if ((FScriptContainerElement *)local_118._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._8_8_);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      return;
    }
    pfVar8 = pfVar8 + 0x30;
  }
  lVar6 = *(longlong *)this;
  pFVar9 = (ForAnyElementType *)(lVar6 + 600);
  if ((pFVar9->Data <= (FScriptContainerElement *)local_118) &&
     ((FScriptContainerElement *)local_118 < pFVar9->Data + (longlong)*(int *)(lVar6 + 0x264) * 0xc0
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar6 + 0x260);
  if (iVar5 == *(int *)(lVar6 + 0x264)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c0,pFVar9,(int *)(lVar6 + 0x264));
  }
  *(int *)(lVar6 + 0x260) = iVar5 + 1;
  Audio::FMixerSource::FDynamicBusSendInfo::FDynamicBusSendInfo
            ((FDynamicBusSendInfo *)(pFVar9->Data + (longlong)iVar5 * 0xc0),
             (FDynamicBusSendInfo *)local_118);
  goto LAB_1464e4a89;
}

// operator() @ 1464e4d70

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::<lambda_1>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar9;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  int local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar6 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar6 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar6,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar7 = iVar4 >> 0x1f & 0x1f;
  iVar4 = iVar4 + uVar7;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar4 >> 5) * 4) &
       ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar7 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar3);
  pTVar9 = pTVar10;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 0;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar9 = local_78.Pointer;
  }
  uVar7 = *(uint *)pTVar9;
  local_res10[0] = local_78.Index;
  bVar2 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar7,pTVar9,local_res10,(bool *)0x0);
  if (bVar2) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar8 = *(int *)puVar6 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar8) {
    uVar13 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)uVar8 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar7;
    *(uint *)&pTVar9->field_0xc = uVar7;
    puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
    *(undefined4 *)&pTVar9->field_0x8 = *(undefined4 *)(puVar6 + uVar13 * 4);
    *(int *)(puVar6 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e4f35;
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar7 = 0;
      goto LAB_1464e4eec;
    }
  }
  else {
LAB_1464e4eec:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar9 = pTVar10;
    do {
      puVar6 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar5 = (ulonglong)pTVar9 & (longlong)(int)uVar11 - 1U;
      pTVar9 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)&pTVar9->field_0x1;
      *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e4f35:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar7 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar14 = local_78.Pointer;
      }
      uVar8 = *puVar14;
      pTVar9 = pTVar10;
      while (uVar8 == 0) {
        iVar3 = (int)pTVar10;
        uStack_60 = (int)pTVar9 + 0x20;
        pTVar9 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60;
        local_78.Index = iVar3 + 1;
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_78.Index;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e4fdc;
        uVar8 = puVar14[(longlong)iVar3 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar1 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar1;
      pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1464e4fdc:
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar10 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar1 = *(longlong *)local_58;
        lVar15 = (longlong)(int)pTVar10 * 0x10;
        uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar15 + lVar1);
        *(uint *)(lVar15 + 0xc + lVar1) = uVar7;
        puVar6 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar15 + 8 + lVar1) = *(undefined4 *)(puVar6 + uVar13 * 4);
        *(int *)(puVar6 + uVar13 * 4) = (int)pTVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e5160

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeMonoChannelMap'::__l37::<lambda_1>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *pTVar9;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar17;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar18;
  longlong lVar19;
  uint *puVar20;
  int local_res8 [2];
  int local_res10 [2];
  Type local_res18 [2];
  Type local_res20 [2];
  Type local_108 [2];
  uint local_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  FSparseArrayAllocationInfo local_70;
  FSparseArrayAllocationInfo local_60 [2];
  
  puVar11 = &__return_storage_ptr__->field_0x8;
  pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  cVar1 = *(char *)(*(longlong *)(*(longlong *)this + 0xb0) + 0xc64);
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)puVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      local_res18[0] = DefaultChannel;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_res18,&Audio::MonoUpmixEqualPower);
      local_res20[0] = FrontRight;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_res20,&Audio::MonoUpmixEqualPower);
      return __return_storage_ptr__;
    }
    if ((cVar1 != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MonoUpmixMethod == EMonoChannelUpmixMethod::Linear",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x75e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
                *)(*pcVar4)();
      return pTVar9;
    }
    local_108[0] = DefaultChannel;
    TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
    ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
              (__return_storage_ptr__,local_108,&Audio::MonoUpmixLinear);
    local_108[1] = 1;
    TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
    ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
              (__return_storage_ptr__,local_108 + 1,&Audio::MonoUpmixLinear);
    return __return_storage_ptr__;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar11,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar12 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar12;
  puVar15 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar15 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar15 + (longlong)(iVar7 >> 5) * 4) =
       *(uint *)(puVar15 + (longlong)(iVar7 >> 5) * 4) &
       ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar12 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_70,iVar6);
  pTVar10 = pTVar18;
  if (local_70.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_70.Pointer = 0;
    *(undefined4 *)((longlong)local_70.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_70.Pointer + 8) = 0xffffffff;
    pTVar10 = local_70.Pointer;
  }
  uVar12 = *(uint *)pTVar10;
  local_res8[0] = local_70.Index;
  bVar5 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar12,pTVar10,local_res8,(bool *)0x0);
  if (!bVar5) {
    uVar14 = 1;
    uVar13 = *(int *)puVar11 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar13) {
      uVar16 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar12;
      *(uint *)&pTVar10->field_0xc = uVar12;
      puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar11 = &__return_storage_ptr__->field_0x38;
      }
      uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
      *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)(puVar11 + uVar16 * 4);
      *(int *)(puVar11 + uVar16 * 4) = local_res8[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar14 != 0) {
        uVar12 = uVar14;
        if (uVar14 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar12 = 0;
            goto LAB_1464e52f8;
          }
        }
        else {
LAB_1464e52f8:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar12,4);
        }
        if (0 < (int)uVar14) {
          uVar16 = (ulonglong)uVar14;
          pTVar10 = pTVar18;
          do {
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar8 = (longlong)(int)uVar14 - 1U & (ulonglong)pTVar10;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      &pTVar10->field_0x1;
            *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar12 = *(uint *)&__return_storage_ptr__->field_0x28;
        puStack_f8 = &__return_storage_ptr__->field_0x10;
        uStack_fc = 1;
        local_100 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        pTVar10 = pTVar18;
        if (uVar12 != 0) {
          puVar20 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar20 = (uint *)puStack_f8;
          }
          uVar13 = *puVar20;
          pTVar17 = pTVar18;
          while (uVar13 == 0) {
            uStack_e8 = (int)pTVar17 + 0x20;
            pTVar17 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_e8;
            iVar6 = (int)pTVar10;
            local_100 = iVar6 + 1;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)local_100;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
            goto LAB_1464e53fe;
            uVar13 = puVar20[(longlong)iVar6 + 1];
          }
          uStack_fc = -uVar13 & uVar13;
          uVar16 = (ulonglong)uStack_fc * 2 + 1;
          lVar3 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_ec = (int)lVar3 + -1 + uStack_e8;
          pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                    (ulonglong)uStack_ec;
          if ((int)uVar12 < (int)uStack_ec) {
LAB_1464e53fe:
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uVar12;
            uStack_ec = uVar12;
          }
        }
        local_f0 = 0xffffffff;
        local_b8._padding_ = CONCAT44(uStack_fc,local_100);
        local_b8.CurrentBitIndex = uStack_ec;
        local_b8.UnvisitedBitMask = 0xffffffff;
        local_b8._28_4_ = uStack_e4;
        local_b8.BaseBitIndex = uStack_e8;
        local_c0 = __return_storage_ptr__;
        local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_f8;
        if ((int)pTVar10 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar3 = *(longlong *)local_c0;
            lVar19 = (longlong)(int)pTVar10 * 0x10;
            uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar19 + lVar3);
            *(uint *)(lVar19 + 0xc + lVar3) = uVar12;
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar12;
            *(undefined4 *)(lVar19 + 8 + lVar3) = *(undefined4 *)(puVar11 + uVar16 * 4);
            *(int *)(puVar11 + uVar16 * 4) = (int)pTVar10;
            local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)(uint)local_b8.CurrentBitIndex;
          } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar12 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar12;
    puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar11 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) &
         ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar12 & 0x1f));
  }
  else {
    iVar6 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar2 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar6 * 0x10);
    iVar7 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar2;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,local_60,iVar6);
  pTVar10 = pTVar18;
  if (local_60[0].Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_60[0].Pointer = 1;
    *(undefined4 *)((longlong)local_60[0].Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_60[0].Pointer + 8) = 0xffffffff;
    pTVar10 = local_60[0].Pointer;
  }
  uVar12 = *(uint *)pTVar10;
  local_res10[0] = local_60[0].Index;
  bVar5 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar12,pTVar10,local_res10,(bool *)0x0);
  if (bVar5) {
    return __return_storage_ptr__;
  }
  uVar14 = 1;
  uVar13 = *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar13) {
    uVar16 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar12;
    *(uint *)&pTVar10->field_0xc = uVar12;
    puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &__return_storage_ptr__->field_0x38;
    }
    uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
    *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)(puVar11 + uVar16 * 4);
    *(int *)(puVar11 + uVar16 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 == 0) goto LAB_1464e5685;
  uVar12 = uVar14;
  if (uVar14 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_1464e5638;
    }
  }
  else {
LAB_1464e5638:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar12,4);
  }
  if (0 < (int)uVar14) {
    uVar16 = (ulonglong)uVar14;
    pTVar10 = pTVar18;
    do {
      puVar11 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar8 = (ulonglong)pTVar10 & (longlong)(int)uVar14 - 1U;
      pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)&pTVar10->field_0x1;
      *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
LAB_1464e5685:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar12 = *(uint *)&__return_storage_ptr__->field_0x28;
    puStack_d8 = &__return_storage_ptr__->field_0x10;
    local_e0 = 0;
    uStack_dc = 1;
    uStack_cc = 0;
    uStack_c8 = 0;
    if (uVar12 != 0) {
      puVar20 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar20 = (uint *)puStack_d8;
      }
      uVar13 = *puVar20;
      pTVar10 = pTVar18;
      while (uVar13 == 0) {
        iVar6 = (int)pTVar10;
        uStack_c8 = (int)pTVar18 + 0x20;
        pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_c8
        ;
        local_e0 = iVar6 + 1;
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)local_e0;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e0)
        goto LAB_1464e5732;
        uVar13 = puVar20[(longlong)iVar6 + 1];
      }
      uStack_dc = -uVar13 & uVar13;
      uVar16 = (ulonglong)uStack_dc * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_cc = (int)lVar3 + -1 + uStack_c8;
      pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_cc;
      if ((int)uVar12 < (int)uStack_cc) {
LAB_1464e5732:
        pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar12;
        uStack_cc = uVar12;
      }
    }
    local_d0 = 0xffffffff;
    local_90._padding_._0_4_ = local_e0;
    local_90._padding_._4_4_ = uStack_dc;
    local_90.UnvisitedBitMask = 0xffffffff;
    local_90.CurrentBitIndex = uStack_cc;
    local_90._28_4_ = uStack_c4;
    local_90.BaseBitIndex = uStack_c8;
    local_98 = __return_storage_ptr__;
    local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_d8;
    if ((int)pTVar18 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar3 = *(longlong *)local_98;
        lVar19 = (longlong)(int)pTVar18 * 0x10;
        uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar19 + lVar3);
        *(uint *)(lVar19 + 0xc + lVar3) = uVar12;
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar19 + 8 + lVar3) = *(undefined4 *)(puVar11 + uVar16 * 4);
        *(int *)(puVar11 + uVar16 * 4) = (int)pTVar18;
        local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
        pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_90.CurrentBitIndex;
      } while (local_90.CurrentBitIndex < (local_90.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e5ad0

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::<lambda_2>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar9;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  int local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar6 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar6 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar6,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar7 = iVar4 >> 0x1f & 0x1f;
  iVar4 = iVar4 + uVar7;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar4 >> 5) * 4) &
       ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar7 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar3);
  pTVar9 = pTVar10;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 1;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar9 = local_78.Pointer;
  }
  uVar7 = *(uint *)pTVar9;
  local_res10[0] = local_78.Index;
  bVar2 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar7,pTVar9,local_res10,(bool *)0x0);
  if (bVar2) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar8 = *(int *)puVar6 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar8) {
    uVar13 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)uVar8 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar7;
    *(uint *)&pTVar9->field_0xc = uVar7;
    puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
    *(undefined4 *)&pTVar9->field_0x8 = *(undefined4 *)(puVar6 + uVar13 * 4);
    *(int *)(puVar6 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e5c96;
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar7 = 0;
      goto LAB_1464e5c50;
    }
  }
  else {
LAB_1464e5c50:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar9 = pTVar10;
    do {
      puVar6 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar5 = (ulonglong)pTVar9 & (longlong)(int)uVar11 - 1U;
      pTVar9 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)&pTVar9->field_0x1;
      *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e5c96:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar7 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar14 = local_78.Pointer;
      }
      uVar8 = *puVar14;
      pTVar9 = pTVar10;
      while (uVar8 == 0) {
        iVar3 = (int)pTVar10;
        uStack_60 = (int)pTVar9 + 0x20;
        pTVar9 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60;
        local_78.Index = iVar3 + 1;
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_78.Index;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e5d3c;
        uVar8 = puVar14[(longlong)iVar3 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar1 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar1;
      pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1464e5d3c:
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar10 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar1 = *(longlong *)local_58;
        lVar15 = (longlong)(int)pTVar10 * 0x10;
        uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar15 + lVar1);
        *(uint *)(lVar15 + 0xc + lVar1) = uVar7;
        puVar6 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar15 + 8 + lVar1) = *(undefined4 *)(puVar6 + uVar13 * 4);
        *(int *)(puVar6 + uVar13 * 4) = (int)pTVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e5e40

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeMonoChannelMap'::__l41::<lambda_2>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *pTVar9;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  Type *pTVar14;
  uint uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar18;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar19;
  float *pfVar20;
  longlong lVar21;
  uint *puVar22;
  void *local_res8;
  int local_res10 [2];
  int local_res18 [2];
  Type local_res20 [2];
  Type local_138 [14];
  uint local_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  FSparseArrayAllocationInfo local_70;
  FSparseArrayAllocationInfo local_60 [2];
  
  puVar11 = &__return_storage_ptr__->field_0x8;
  pTVar19 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  cVar1 = *(char *)(*(longlong *)(*(longlong *)this + 0xb0) + 0xc64);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)puVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res8 = this;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      local_138[2] = 0;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_138 + 2,&Audio::MonoUpmixEqualPower);
      local_138[3] = 1;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_138 + 3,&Audio::MonoUpmixEqualPower);
      if (**(int **)((longlong)this + 8) == 8) {
        local_138[4] = 4;
        TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
        ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                  (__return_storage_ptr__,local_138 + 4,&Audio::MonoUpmixEqualPower);
        pfVar20 = &Audio::MonoUpmixEqualPower;
        local_138[5] = 5;
        pTVar14 = local_138 + 5;
      }
      else {
        local_138[6] = 9;
        TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
        ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                  (__return_storage_ptr__,local_138 + 6,&Audio::MonoUpmixEqualPower);
        pfVar20 = &Audio::MonoUpmixEqualPower;
        local_138[7] = 10;
        pTVar14 = local_138 + 7;
      }
    }
    else {
      if ((cVar1 != '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MonoUpmixMethod == EMonoChannelUpmixMethod::Linear",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                             ,0x792,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      local_138[8] = 0;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_138 + 8,&Audio::MonoUpmixLinear);
      local_138[9] = 1;
      TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
      ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                (__return_storage_ptr__,local_138 + 9,&Audio::MonoUpmixLinear);
      if (**(int **)((longlong)this + 8) == 8) {
        local_138[10] = 4;
        TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
        ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                  (__return_storage_ptr__,local_138 + 10,&Audio::MonoUpmixLinear);
        pTVar14 = local_138 + 0xb;
        local_138[0xb] = 5;
      }
      else {
        if (**(int **)((longlong)this + 8) != 6) {
          return __return_storage_ptr__;
        }
        local_138[0xc] = 9;
        TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
        ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
                  (__return_storage_ptr__,local_138 + 0xc,&Audio::MonoUpmixLinear);
        pTVar14 = local_138 + 0xd;
        local_138[0xd] = 10;
      }
      pfVar20 = &Audio::MonoUpmixLinear;
    }
    goto LAB_1464e66db;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar11,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar12 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar12;
  puVar16 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar16 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
       *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
       ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar12 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_70,iVar6);
  pTVar10 = pTVar19;
  if (local_70.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_70.Pointer = 0;
    *(undefined4 *)((longlong)local_70.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_70.Pointer + 8) = 0xffffffff;
    pTVar10 = local_70.Pointer;
  }
  uVar12 = *(uint *)pTVar10;
  local_res10[0] = local_70.Index;
  bVar5 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar12,pTVar10,local_res10,(bool *)0x0);
  if (!bVar5) {
    uVar15 = 1;
    uVar13 = *(int *)puVar11 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar13) {
      uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar15 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar12;
      *(uint *)&pTVar10->field_0xc = uVar12;
      puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar11 = &__return_storage_ptr__->field_0x38;
      }
      uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
      *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)(puVar11 + uVar17 * 4);
      *(int *)(puVar11 + uVar17 * 4) = local_res10[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar15;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar15 != 0) {
        uVar12 = uVar15;
        if (uVar15 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar12 = 0;
            goto LAB_1464e5fdd;
          }
        }
        else {
LAB_1464e5fdd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar12,4);
        }
        if (0 < (int)uVar15) {
          uVar17 = (ulonglong)uVar15;
          pTVar10 = pTVar19;
          do {
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar8 = (longlong)(int)uVar15 - 1U & (ulonglong)pTVar10;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      &pTVar10->field_0x1;
            *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar12 = *(uint *)&__return_storage_ptr__->field_0x28;
        puStack_f8 = &__return_storage_ptr__->field_0x10;
        uStack_fc = 1;
        local_100 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        pTVar10 = pTVar19;
        if (uVar12 != 0) {
          puVar22 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar22 = (uint *)puStack_f8;
          }
          uVar13 = *puVar22;
          pTVar18 = pTVar19;
          while (uVar13 == 0) {
            uStack_e8 = (int)pTVar18 + 0x20;
            pTVar18 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_e8;
            iVar6 = (int)pTVar10;
            local_100 = iVar6 + 1;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)local_100;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
            goto LAB_1464e60dd;
            uVar13 = puVar22[(longlong)iVar6 + 1];
          }
          uStack_fc = -uVar13 & uVar13;
          uVar17 = (ulonglong)uStack_fc * 2 + 1;
          lVar3 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_ec = (int)lVar3 + -1 + uStack_e8;
          pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                    (ulonglong)uStack_ec;
          if ((int)uVar12 < (int)uStack_ec) {
LAB_1464e60dd:
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uVar12;
            uStack_ec = uVar12;
          }
        }
        local_f0 = 0xffffffff;
        local_b8._padding_ = CONCAT44(uStack_fc,local_100);
        local_b8.CurrentBitIndex = uStack_ec;
        local_b8.UnvisitedBitMask = 0xffffffff;
        local_b8._28_4_ = uStack_e4;
        local_b8.BaseBitIndex = uStack_e8;
        local_c0 = __return_storage_ptr__;
        local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_f8;
        if ((int)pTVar10 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar3 = *(longlong *)local_c0;
            lVar21 = (longlong)(int)pTVar10 * 0x10;
            uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar21 + lVar3);
            *(uint *)(lVar21 + 0xc + lVar3) = uVar12;
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar12;
            *(undefined4 *)(lVar21 + 8 + lVar3) = *(undefined4 *)(puVar11 + uVar17 * 4);
            *(int *)(puVar11 + uVar17 * 4) = (int)pTVar10;
            local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)(uint)local_b8.CurrentBitIndex;
          } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar12 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar12;
    puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar11 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar7 >> 5) * 4) &
         ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar12 & 0x1f));
  }
  else {
    iVar6 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar2 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar6 * 0x10);
    iVar7 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar2;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,local_60,iVar6);
  pTVar10 = pTVar19;
  if (local_60[0].Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_60[0].Pointer = 1;
    *(undefined4 *)((longlong)local_60[0].Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_60[0].Pointer + 8) = 0xffffffff;
    pTVar10 = local_60[0].Pointer;
  }
  uVar12 = *(uint *)pTVar10;
  local_res18[0] = local_60[0].Index;
  bVar5 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar12,pTVar10,local_res18,(bool *)0x0);
  if (!bVar5) {
    uVar15 = 1;
    uVar13 = *(int *)&__return_storage_ptr__->field_0x8 -
             *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar13) {
      uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar15 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar12;
      *(uint *)&pTVar10->field_0xc = uVar12;
      puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar11 = &__return_storage_ptr__->field_0x38;
      }
      uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
      *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)(puVar11 + uVar17 * 4);
      *(int *)(puVar11 + uVar17 * 4) = local_res18[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar15;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar15 != 0) {
        uVar12 = uVar15;
        if (uVar15 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar12 = 0;
            goto LAB_1464e631d;
          }
        }
        else {
LAB_1464e631d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar12,4);
        }
        if (0 < (int)uVar15) {
          uVar17 = (ulonglong)uVar15;
          pTVar10 = pTVar19;
          do {
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar8 = (ulonglong)pTVar10 & (longlong)(int)uVar15 - 1U;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      &pTVar10->field_0x1;
            *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar12 = *(uint *)&__return_storage_ptr__->field_0x28;
        puStack_d8 = &__return_storage_ptr__->field_0x10;
        local_e0 = 0;
        uStack_dc = 1;
        uStack_cc = 0;
        uStack_c8 = 0;
        if (uVar12 != 0) {
          puVar22 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar22 = (uint *)puStack_d8;
          }
          uVar13 = *puVar22;
          pTVar10 = pTVar19;
          while (uVar13 == 0) {
            iVar6 = (int)pTVar10;
            uStack_c8 = (int)pTVar19 + 0x20;
            pTVar19 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_c8;
            local_e0 = iVar6 + 1;
            pTVar10 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)local_e0;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e0)
            goto LAB_1464e640d;
            uVar13 = puVar22[(longlong)iVar6 + 1];
          }
          uStack_dc = -uVar13 & uVar13;
          uVar17 = (ulonglong)uStack_dc * 2 + 1;
          lVar3 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_cc = (int)lVar3 + -1 + uStack_c8;
          pTVar19 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                    (ulonglong)uStack_cc;
          if ((int)uVar12 < (int)uStack_cc) {
LAB_1464e640d:
            pTVar19 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uVar12;
            uStack_cc = uVar12;
          }
        }
        local_d0 = 0xffffffff;
        local_90._padding_ = CONCAT44(uStack_dc,local_e0);
        local_90.CurrentBitIndex = uStack_cc;
        local_90.UnvisitedBitMask = 0xffffffff;
        local_90._28_4_ = uStack_c4;
        local_90.BaseBitIndex = uStack_c8;
        local_98 = __return_storage_ptr__;
        local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_d8;
        if ((int)pTVar19 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar3 = *(longlong *)local_98;
            lVar21 = (longlong)(int)pTVar19 * 0x10;
            uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar21 + lVar3);
            *(uint *)(lVar21 + 0xc + lVar3) = uVar12;
            puVar11 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar12;
            *(undefined4 *)(lVar21 + 8 + lVar3) = *(undefined4 *)(puVar11 + uVar17 * 4);
            *(int *)(puVar11 + uVar17 * 4) = (int)pTVar19;
            local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
            pTVar19 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)(uint)local_90.CurrentBitIndex;
          } while (local_90.CurrentBitIndex < (local_90.Array)->NumBits);
        }
      }
    }
  }
  if (**(int **)((longlong)local_res8 + 8) == 8) {
    local_res8 = (void *)CONCAT44(local_res8._4_4_,4);
    TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
    ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
              (__return_storage_ptr__,(Type *)&local_res8,&Audio::MonoUpmixFullVolume);
    pfVar20 = &Audio::MonoUpmixFullVolume;
    local_res20[0] = BackRight;
    pTVar14 = local_res20;
  }
  else {
    if (**(int **)((longlong)local_res8 + 8) != 6) {
      return __return_storage_ptr__;
    }
    local_138[0] = SideLeft;
    TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
    ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>
              (__return_storage_ptr__,local_138,&Audio::MonoUpmixFullVolume);
    pfVar20 = &Audio::MonoUpmixFullVolume;
    local_138[1] = 10;
    pTVar14 = local_138 + 1;
  }
LAB_1464e66db:
  TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
  ::Emplace<enum_EAudioMixerChannel::Type,float_const_&>(__return_storage_ptr__,pTVar14,pfVar20);
  return __return_storage_ptr__;
}

// operator() @ 1464e69e0

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::<lambda_3>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar14;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar15;
  longlong lVar16;
  uint *puVar17;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar8 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar8,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar9 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar9;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
       ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 0;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (!bVar3) {
    uVar11 = 1;
    uVar10 = *(int *)puVar8 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar10) {
      uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
      *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
      puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar8 = &__return_storage_ptr__->field_0x38;
      }
      uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
      *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar11 != 0) {
        uVar9 = uVar11;
        if (uVar11 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar9 = 0;
            goto LAB_1464e6b5f;
          }
        }
        else {
LAB_1464e6b5f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
        }
        if (0 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11;
          pTVar7 = pTVar15;
          do {
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar6 = (longlong)(int)uVar11 - 1U & (ulonglong)pTVar7;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (&pTVar7->field_0x0 + 1);
            *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
        local_78.Pointer = &__return_storage_ptr__->field_0x10;
        local_78._4_4_ = 1;
        local_78.Index = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        pTVar7 = pTVar15;
        if (uVar9 != 0) {
          puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar17 = local_78.Pointer;
          }
          uVar10 = *puVar17;
          pTVar14 = pTVar15;
          while (uVar10 == 0) {
            uStack_60 = (int)pTVar14 + 0x20;
            pTVar14 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_60;
            iVar4 = (int)pTVar7;
            local_78.Index = iVar4 + 1;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_78.Index;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
            goto LAB_1464e6c49;
            uVar10 = puVar17[(longlong)iVar4 + 1];
          }
          local_78._4_4_ = -uVar10 & uVar10;
          uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_64 = (int)lVar2 + -1 + uStack_60;
          pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                   (ulonglong)uStack_64;
          if ((int)uVar9 < (int)uStack_64) {
LAB_1464e6c49:
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
            uStack_64 = uVar9;
          }
        }
        local_68 = 0xffffffff;
        local_50._padding_ = CONCAT44(local_78._4_4_,local_78.Index);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        local_58 = __return_storage_ptr__;
        local_50.Array = local_78.Pointer;
        if ((int)pTVar7 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar2 = *(longlong *)local_58;
            lVar16 = (longlong)(int)pTVar7 * 0x10;
            uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
            *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar9;
            *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
            *(int *)(puVar8 + uVar13 * 4) = (int)pTVar7;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar9 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    iVar4 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar1 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar4 * 0x10);
    iVar5 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 9;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (bVar3) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar10 = *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
    *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
    *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
    *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e6eb6;
  uVar9 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar9 = 0;
      goto LAB_1464e6e70;
    }
  }
  else {
LAB_1464e6e70:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar7 = pTVar15;
    do {
      puVar8 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar6 = (ulonglong)pTVar7 & (longlong)(int)uVar11 - 1U;
      pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
               (&pTVar7->field_0x0 + 1);
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e6eb6:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_78.Pointer;
      }
      uVar10 = *puVar17;
      pTVar7 = pTVar15;
      while (uVar10 == 0) {
        iVar4 = (int)pTVar7;
        uStack_60 = (int)pTVar15 + 0x20;
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60
        ;
        local_78.Index = iVar4 + 1;
        pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                 (ulonglong)(uint)local_78.Index;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e6f5d;
        uVar10 = puVar17[(longlong)iVar4 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_1464e6f5d:
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar15 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar2 = *(longlong *)local_58;
        lVar16 = (longlong)(int)pTVar15 * 0x10;
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
        *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
        *(int *)(puVar8 + uVar13 * 4) = (int)pTVar15;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e7060

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::<lambda_4>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar14;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar15;
  longlong lVar16;
  uint *puVar17;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar8 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar8,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar9 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar9;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
       ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 1;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (!bVar3) {
    uVar11 = 1;
    uVar10 = *(int *)puVar8 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar10) {
      uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
      *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
      puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar8 = &__return_storage_ptr__->field_0x38;
      }
      uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
      *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar11 != 0) {
        uVar9 = uVar11;
        if (uVar11 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar9 = 0;
            goto LAB_1464e71e2;
          }
        }
        else {
LAB_1464e71e2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
        }
        if (0 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11;
          pTVar7 = pTVar15;
          do {
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar6 = (longlong)(int)uVar11 - 1U & (ulonglong)pTVar7;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (&pTVar7->field_0x0 + 1);
            *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
        local_78.Pointer = &__return_storage_ptr__->field_0x10;
        local_78._4_4_ = 1;
        local_78.Index = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        pTVar7 = pTVar15;
        if (uVar9 != 0) {
          puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar17 = local_78.Pointer;
          }
          uVar10 = *puVar17;
          pTVar14 = pTVar15;
          while (uVar10 == 0) {
            uStack_60 = (int)pTVar14 + 0x20;
            pTVar14 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_60;
            iVar4 = (int)pTVar7;
            local_78.Index = iVar4 + 1;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_78.Index;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
            goto LAB_1464e72cb;
            uVar10 = puVar17[(longlong)iVar4 + 1];
          }
          local_78._4_4_ = -uVar10 & uVar10;
          uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_64 = (int)lVar2 + -1 + uStack_60;
          pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                   (ulonglong)uStack_64;
          if ((int)uVar9 < (int)uStack_64) {
LAB_1464e72cb:
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
            uStack_64 = uVar9;
          }
        }
        local_68 = 0xffffffff;
        local_50._padding_ = CONCAT44(local_78._4_4_,local_78.Index);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        local_58 = __return_storage_ptr__;
        local_50.Array = local_78.Pointer;
        if ((int)pTVar7 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar2 = *(longlong *)local_58;
            lVar16 = (longlong)(int)pTVar7 * 0x10;
            uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
            *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar9;
            *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
            *(int *)(puVar8 + uVar13 * 4) = (int)pTVar7;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar9 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    iVar4 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar1 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar4 * 0x10);
    iVar5 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 10;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (bVar3) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar10 = *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
    *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
    *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
    *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e7545;
  uVar9 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar9 = 0;
      goto LAB_1464e74ff;
    }
  }
  else {
LAB_1464e74ff:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar7 = pTVar15;
    do {
      puVar8 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar6 = (ulonglong)pTVar7 & (longlong)(int)uVar11 - 1U;
      pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
               (&pTVar7->field_0x0 + 1);
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e7545:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_78.Pointer;
      }
      uVar10 = *puVar17;
      pTVar7 = pTVar15;
      while (uVar10 == 0) {
        iVar4 = (int)pTVar7;
        uStack_60 = (int)pTVar15 + 0x20;
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60
        ;
        local_78.Index = iVar4 + 1;
        pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                 (ulonglong)(uint)local_78.Index;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e75ed;
        uVar10 = puVar17[(longlong)iVar4 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_1464e75ed:
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar15 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar2 = *(longlong *)local_58;
        lVar16 = (longlong)(int)pTVar15 * 0x10;
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
        *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
        *(int *)(puVar8 + uVar13 * 4) = (int)pTVar15;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e76f0

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::<lambda_5>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar14;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar15;
  longlong lVar16;
  uint *puVar17;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar8 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar8,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar9 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar9;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
       ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 0;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (!bVar3) {
    uVar11 = 1;
    uVar10 = *(int *)puVar8 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar10) {
      uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
      *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
      puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar8 = &__return_storage_ptr__->field_0x38;
      }
      uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
      *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar11 != 0) {
        uVar9 = uVar11;
        if (uVar11 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar9 = 0;
            goto LAB_1464e786f;
          }
        }
        else {
LAB_1464e786f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
        }
        if (0 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11;
          pTVar7 = pTVar15;
          do {
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar6 = (longlong)(int)uVar11 - 1U & (ulonglong)pTVar7;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (&pTVar7->field_0x0 + 1);
            *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
        local_78.Pointer = &__return_storage_ptr__->field_0x10;
        local_78._4_4_ = 1;
        local_78.Index = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        pTVar7 = pTVar15;
        if (uVar9 != 0) {
          puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar17 = local_78.Pointer;
          }
          uVar10 = *puVar17;
          pTVar14 = pTVar15;
          while (uVar10 == 0) {
            uStack_60 = (int)pTVar14 + 0x20;
            pTVar14 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_60;
            iVar4 = (int)pTVar7;
            local_78.Index = iVar4 + 1;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_78.Index;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
            goto LAB_1464e7959;
            uVar10 = puVar17[(longlong)iVar4 + 1];
          }
          local_78._4_4_ = -uVar10 & uVar10;
          uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_64 = (int)lVar2 + -1 + uStack_60;
          pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                   (ulonglong)uStack_64;
          if ((int)uVar9 < (int)uStack_64) {
LAB_1464e7959:
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
            uStack_64 = uVar9;
          }
        }
        local_68 = 0xffffffff;
        local_50._padding_ = CONCAT44(local_78._4_4_,local_78.Index);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        local_58 = __return_storage_ptr__;
        local_50.Array = local_78.Pointer;
        if ((int)pTVar7 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar2 = *(longlong *)local_58;
            lVar16 = (longlong)(int)pTVar7 * 0x10;
            uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
            *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar9;
            *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
            *(int *)(puVar8 + uVar13 * 4) = (int)pTVar7;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar9 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    iVar4 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar1 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar4 * 0x10);
    iVar5 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 4;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (bVar3) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar10 = *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
    *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
    *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
    *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e7bc6;
  uVar9 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar9 = 0;
      goto LAB_1464e7b80;
    }
  }
  else {
LAB_1464e7b80:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar7 = pTVar15;
    do {
      puVar8 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar6 = (ulonglong)pTVar7 & (longlong)(int)uVar11 - 1U;
      pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
               (&pTVar7->field_0x0 + 1);
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e7bc6:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_78.Pointer;
      }
      uVar10 = *puVar17;
      pTVar7 = pTVar15;
      while (uVar10 == 0) {
        iVar4 = (int)pTVar7;
        uStack_60 = (int)pTVar15 + 0x20;
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60
        ;
        local_78.Index = iVar4 + 1;
        pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                 (ulonglong)(uint)local_78.Index;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e7c6d;
        uVar10 = puVar17[(longlong)iVar4 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_1464e7c6d:
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar15 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar2 = *(longlong *)local_58;
        lVar16 = (longlong)(int)pTVar15 * 0x10;
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
        *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
        *(int *)(puVar8 + uVar13 * 4) = (int)pTVar15;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1464e7d70

TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
* __thiscall
`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::<lambda_6>::operator()
          (void *this,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar14;
  TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *pTVar15;
  longlong lVar16;
  uint *puVar17;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0;
  puVar8 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar8,
                     (int *)&__return_storage_ptr__->field_0xc);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1);
  uVar9 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar9;
  puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
  if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &__return_storage_ptr__->field_0x10;
  }
  *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
       ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 1;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (!bVar3) {
    uVar11 = 1;
    uVar10 = *(int *)puVar8 - *(int *)&__return_storage_ptr__->field_0x34;
    if (3 < uVar10) {
      uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
      uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
      *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
      puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
        puVar8 = &__return_storage_ptr__->field_0x38;
      }
      uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
      *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    }
    else {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar11 != 0) {
        uVar9 = uVar11;
        if (uVar11 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar9 = 0;
            goto LAB_1464e7ef2;
          }
        }
        else {
LAB_1464e7ef2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
        }
        if (0 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11;
          pTVar7 = pTVar15;
          do {
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar6 = (longlong)(int)uVar11 - 1U & (ulonglong)pTVar7;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (&pTVar7->field_0x0 + 1);
            *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
        local_78.Pointer = &__return_storage_ptr__->field_0x10;
        local_78._4_4_ = 1;
        local_78.Index = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        pTVar7 = pTVar15;
        if (uVar9 != 0) {
          puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar17 = local_78.Pointer;
          }
          uVar10 = *puVar17;
          pTVar14 = pTVar15;
          while (uVar10 == 0) {
            uStack_60 = (int)pTVar14 + 0x20;
            pTVar14 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                      (ulonglong)uStack_60;
            iVar4 = (int)pTVar7;
            local_78.Index = iVar4 + 1;
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_78.Index;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
            goto LAB_1464e7fdb;
            uVar10 = puVar17[(longlong)iVar4 + 1];
          }
          local_78._4_4_ = -uVar10 & uVar10;
          uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_64 = (int)lVar2 + -1 + uStack_60;
          pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                   (ulonglong)uStack_64;
          if ((int)uVar9 < (int)uStack_64) {
LAB_1464e7fdb:
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
            uStack_64 = uVar9;
          }
        }
        local_68 = 0xffffffff;
        local_50._padding_ = CONCAT44(local_78._4_4_,local_78.Index);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        local_58 = __return_storage_ptr__;
        local_50.Array = local_78.Pointer;
        if ((int)pTVar7 < *(int *)&__return_storage_ptr__->field_0x28) {
          do {
            lVar2 = *(longlong *)local_58;
            lVar16 = (longlong)(int)pTVar7 * 0x10;
            uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
            *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
            puVar8 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar9;
            *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
            *(int *)(puVar8 + uVar13 * 4) = (int)pTVar7;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                     (ulonglong)(uint)local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                       (int *)&__return_storage_ptr__->field_0x8,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar9 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    iVar4 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar1 = *(int *)(*(longlong *)__return_storage_ptr__ + 4 + (longlong)iVar4 * 0x10);
    iVar5 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_78,iVar4);
  pTVar7 = pTVar15;
  if (local_78.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(undefined4 *)local_78.Pointer = 5;
    *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x3f800000;
    *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
    pTVar7 = local_78.Pointer;
  }
  uVar9 = *(uint *)&pTVar7->field_0x0;
  local_res10[0] = local_78.Index;
  bVar3 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(__return_storage_ptr__,uVar9,pTVar7,(int *)local_res10,(bool *)0x0);
  if (bVar3) {
    return __return_storage_ptr__;
  }
  uVar11 = 1;
  uVar10 = *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
    *(uint *)(&pTVar7->field_0x0 + 0xc) = uVar9;
    puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &__return_storage_ptr__->field_0x38;
    }
    uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
    *(undefined4 *)(&pTVar7->field_0x0 + 8) = *(undefined4 *)(puVar8 + uVar13 * 4);
    *(uint *)(puVar8 + uVar13 * 4) = local_res10[0];
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1464e8255;
  uVar9 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar9 = 0;
      goto LAB_1464e820f;
    }
  }
  else {
LAB_1464e820f:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar9,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    pTVar7 = pTVar15;
    do {
      puVar8 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar6 = (ulonglong)pTVar7 & (longlong)(int)uVar11 - 1U;
      pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
               (&pTVar7->field_0x0 + 1);
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1464e8255:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78.Pointer = &__return_storage_ptr__->field_0x10;
    local_78.Index = 0;
    local_78._4_4_ = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_78.Pointer;
      }
      uVar10 = *puVar17;
      pTVar7 = pTVar15;
      while (uVar10 == 0) {
        iVar4 = (int)pTVar7;
        uStack_60 = (int)pTVar15 + 0x20;
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_60
        ;
        local_78.Index = iVar4 + 1;
        pTVar7 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                 (ulonglong)(uint)local_78.Index;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1464e82fd;
        uVar10 = puVar17[(longlong)iVar4 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar13 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_1464e82fd:
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)(ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = local_78.Pointer;
    if ((int)pTVar15 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar2 = *(longlong *)local_58;
        lVar16 = (longlong)(int)pTVar15 * 0x10;
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar16 + lVar2);
        *(uint *)(lVar16 + 0xc + lVar2) = uVar9;
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar13 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar16 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar13 * 4);
        *(int *)(puVar8 + uVar13 * 4) = (int)pTVar15;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pTVar15 = (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)
                  (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// ComputeChannelMap @ 1464f2ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerSource::ComputeChannelMap
          (FMixerSource *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  bool bVar1;
  
  if (param_1 == 1) {
    bVar1 = ComputeMonoChannelMap(this,param_2);
    return bVar1;
  }
  if (param_1 == 2) {
    bVar1 = ComputeStereoChannelMap(this,param_2);
    return bVar1;
  }
  if (param_2->ArrayNum == 0) {
    FMixerDevice::Get2DChannelMap
              (this->bIsVorbis,param_1,(this->MixerDevice->PlatformInfo).NumChannels,
               (bool)(*(byte *)(this->_padding_ + 0xce) & 1),param_2);
    return true;
  }
  return false;
}

// ComputeMonoChannelMap @ 1464f2d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerSource::ComputeMonoChannelMap
          (FMixerSource *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  longlong *plVar1;
  ENonSpatializedRadiusSpeakerMapMode EVar2;
  bool bVar3;
  bool bVar4;
  FMixerDevice *this_00;
  FWaveInstance *pFVar5;
  float fVar6;
  int local_res8 [2];
  FMixerSource *local_res18 [2];
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *pTVar7;
  undefined1 local_28 [16];
  
  bVar3 = UseObjectBasedSpatialization(this);
  if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
    bVar4 = FMixerSourceVoice::IsUsingHRTFSpatializer(this->MixerSourceVoice,true);
    bVar3 = bVar3 && bVar4;
  }
  pFVar5 = (FWaveInstance *)this->_padding_;
  plVar1 = &this->_padding_;
  if (bVar3 == false) {
    bVar3 = FWaveInstance::GetUseSpatialization(pFVar5);
    if ((bVar3) &&
       ((__real_3c23d70a <
         (float)((uint)(*(float *)(*plVar1 + 0x154) - this->PreviousAzimuth) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (bVar3 = FMixerSourceVoice::NeedsSpeakerMap(this->MixerSourceVoice), bVar3)))) {
      this->PreviousAzimuth = *(float *)(*plVar1 + 0x154);
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
      this_00 = this->MixerDevice;
      pFVar5 = (FWaveInstance *)this->_padding_;
      local_res8[0] = (this_00->PlatformInfo).NumChannels;
      EVar2 = pFVar5->NonSpatializedRadiusMode;
      if (EVar2 == OmniDirectional) {
        fVar6 = __real_3f800000 / (float)local_res8[0];
        pTVar7 = (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
                  *)0x0;
      }
      else {
        if (EVar2 == Direct2D) {
          pTVar7 = &OmniMap;
          local_res18[0] = this;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            `Audio::FMixerSource::ComputeMonoChannelMap'::__l37::<lambda_1>::operator()
                      (local_res18,&OmniMap);
            atexit(`Audio::FMixerSource::ComputeMonoChannelMap'::__l37::
                   _dynamic_atexit_destructor_for__OmniMap__);
            _Init_thread_footer(&::_TSS0);
          }
        }
        else {
          if (EVar2 != Surround2D) {
            return true;
          }
          local_28._8_8_ = local_res8;
          pTVar7 = &OmniMap;
          local_28._0_8_ = this;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            `Audio::FMixerSource::ComputeMonoChannelMap'::__l41::<lambda_2>::operator()
                      (local_28,&OmniMap);
            atexit(`Audio::FMixerSource::ComputeMonoChannelMap'::__l41::
                   _dynamic_atexit_destructor_for__OmniMap__);
            _Init_thread_footer(&::_TSS1);
          }
        }
        this_00 = this->MixerDevice;
        pFVar5 = (FWaveInstance *)this->_padding_;
        fVar6 = 0.0;
      }
      FMixerDevice::Get3DChannelMap
                (this_00,local_res8[0],pFVar5,pFVar5->AbsoluteAzimuth,
                 (this->SpatializationParams).NonSpatializedAmount,pTVar7,fVar6,param_1);
      return true;
    }
    if ((param_1->ArrayNum != 0) &&
       (bVar3 = IsSpatializationCVarEnabled(),
       (uint)bVar3 == this->bPrevAllowedSpatializationSetting)) {
      return false;
    }
    FMixerDevice::Get2DChannelMap
              (this->bIsVorbis,1,(this->MixerDevice->PlatformInfo).NumChannels,
               (bool)(*(byte *)(*plVar1 + 0xce) & 1),param_1);
    return true;
  }
  if (((pFVar5->SpatializationMethod != SPATIALIZATION_HRTF) &&
      (ZPULL(*(undefined4 *)&this->field_0x2bc,0,1) == 0)) &&
     (*(uint *)&this->field_0x2bc = *(undefined4 *)&this->field_0x2bc | 1,
     2 < (byte)LogAudioMixer._0_1_)) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(pFVar5->WaveData).field0_0x0.DebugPtr,(FString *)local_28,
               (UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if ((FMixerSource *)local_28._0_8_ != (FMixerSource *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  bVar3 = ComputeStereoChannelMap(this,param_1);
  return bVar3;
}

// ComputeStereoChannelMap @ 1464f6790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerSource::ComputeStereoChannelMap
          (FMixerSource *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  ENonSpatializedRadiusSpeakerMapMode EVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  FMixerDevice *pFVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
  *pTVar11;
  
  bVar3 = FWaveInstance::GetUseSpatialization((FWaveInstance *)this->_padding_);
  if ((!bVar3) ||
     (((float)((uint)(*(float *)(this->_padding_ + 0x154) - this->PreviousAzimuth) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3c23d70a &&
      (bVar3 = FMixerSourceVoice::NeedsSpeakerMap(this->MixerSourceVoice), !bVar3)))) {
LAB_1464f6be4:
    if ((param_1->ArrayNum != 0) &&
       (bVar3 = IsSpatializationCVarEnabled(),
       (uint)bVar3 == this->bPrevAllowedSpatializationSetting)) {
      return false;
    }
    FMixerDevice::Get2DChannelMap
              (this->bIsVorbis,2,(this->MixerDevice->PlatformInfo).NumChannels,
               (bool)(*(byte *)(this->_padding_ + 0xce) & 1),param_1);
    return true;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 2) {
    FSoundSource::UpdateStereoEmitterPositions((FSoundSource *)this);
  }
  bVar3 = UseObjectBasedSpatialization(this);
  if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
    bVar4 = FMixerSourceVoice::IsUsingHRTFSpatializer(this->MixerSourceVoice,true);
    bVar3 = bVar3 && bVar4;
  }
  if (bVar3 != false) goto LAB_1464f6be4;
  lVar2 = this->_padding_;
  if (UseListenerOverrideForSpreadCVar == 0) {
    pfVar5 = (float *)(lVar2 + 0x150);
  }
  else {
    pfVar5 = (float *)(lVar2 + 0x14c);
  }
  fVar8 = __real_43870000;
  fVar10 = __real_42b40000;
  if (__real_38d1b717 < *pfVar5) {
    fVar8 = atanf((*(float *)(lVar2 + 0x144) * __real_3f000000) / *pfVar5);
    fVar10 = *(float *)(lVar2 + 0x154) - fVar8 * __real_42652ee0;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + __real_43b40000;
    }
    fVar8 = *(float *)(lVar2 + 0x154) + fVar8 * __real_42652ee0;
    if (__real_43b40000 < fVar8) {
      fVar8 = fVar8 + __real_c3b40000;
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pFVar6 = this->MixerDevice;
  EVar1 = ((FWaveInstance *)this->_padding_)->NonSpatializedRadiusMode;
  iVar7 = (pFVar6->PlatformInfo).NumChannels;
  if (EVar1 == OmniDirectional) {
    fVar9 = __real_3f800000 / (float)iVar7;
    FMixerDevice::Get3DChannelMap
              (pFVar6,iVar7,(FWaveInstance *)this->_padding_,fVar10,
               (this->SpatializationParams).NonSpatializedAmount,
               (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
                *)0x0,fVar9,param_1);
    FMixerDevice::Get3DChannelMap
              (this->MixerDevice,iVar7,(FWaveInstance *)this->_padding_,fVar8,
               (this->SpatializationParams).NonSpatializedAmount,
               (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
                *)0x0,fVar9,param_1);
    return true;
  }
  if (EVar1 == Direct2D) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      `Audio::FMixerSource::ComputeStereoChannelMap'::__l27::<lambda_1>::operator()
                (local_res8,&LeftOmniMap);
      atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::
             _dynamic_atexit_destructor_for__LeftOmniMap__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      `Audio::FMixerSource::ComputeStereoChannelMap'::__l27::<lambda_2>::operator()
                (local_res8,&RightOmniMap);
      atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::
             _dynamic_atexit_destructor_for__RightOmniMap__);
      _Init_thread_footer(&::_TSS1);
    }
    FMixerDevice::Get3DChannelMap
              (this->MixerDevice,iVar7,(FWaveInstance *)this->_padding_,fVar10,
               (this->SpatializationParams).NonSpatializedAmount,&LeftOmniMap,0.0,param_1);
    pTVar11 = &RightOmniMap;
  }
  else {
    if ((iVar7 != 2) && (iVar7 != 6)) {
      if (iVar7 != 8) {
        return true;
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        `Audio::FMixerSource::ComputeStereoChannelMap'::__l36::<lambda_5>::operator()
                  (local_res8,&LeftOmniMap);
        atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::
               _dynamic_atexit_destructor_for__LeftOmniMap__);
        _Init_thread_footer(&::_TSS4);
      }
      if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        `Audio::FMixerSource::ComputeStereoChannelMap'::__l36::<lambda_6>::operator()
                  (local_res8,&RightOmniMap);
        atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::
               _dynamic_atexit_destructor_for__RightOmniMap__);
        _Init_thread_footer(&::_TSS5);
      }
      FMixerDevice::Get3DChannelMap
                (this->MixerDevice,8,(FWaveInstance *)this->_padding_,fVar10,
                 (this->SpatializationParams).NonSpatializedAmount,&LeftOmniMap,0.0,param_1);
      pFVar6 = this->MixerDevice;
      iVar7 = 8;
      pTVar11 = &RightOmniMap;
      goto LAB_1464f6b95;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      `Audio::FMixerSource::ComputeStereoChannelMap'::__l32::<lambda_3>::operator()
                (local_res8,&LeftOmniMap);
      atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::
             _dynamic_atexit_destructor_for__LeftOmniMap__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      `Audio::FMixerSource::ComputeStereoChannelMap'::__l32::<lambda_4>::operator()
                (local_res8,&RightOmniMap);
      atexit(`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::
             _dynamic_atexit_destructor_for__RightOmniMap__);
      _Init_thread_footer(&::_TSS3);
    }
    FMixerDevice::Get3DChannelMap
              (this->MixerDevice,iVar7,(FWaveInstance *)this->_padding_,fVar10,
               (this->SpatializationParams).NonSpatializedAmount,&LeftOmniMap,0.0,param_1);
    pTVar11 = &RightOmniMap;
  }
  pFVar6 = this->MixerDevice;
LAB_1464f6b95:
  FMixerDevice::Get3DChannelMap
            (pFVar6,iVar7,(FWaveInstance *)this->_padding_,fVar8,
             (this->SpatializationParams).NonSpatializedAmount,pTVar11,0.0,param_1);
  return true;
}

// FreeResources @ 1464fef50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::FreeResources(FMixerSource *this)

{
  TSharedPtr<IAudioLinkSourcePushed,1> *pTVar1;
  FMixerBuffer *pFVar2;
  IAudioTask *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  pFVar2 = this->MixerBuffer;
  if ((pFVar2 != (FMixerBuffer *)0x0) && (pFVar2->RealtimeAsyncHeaderParseTask != (IAudioTask *)0x0)
     ) {
    (**(code **)((longlong)*pFVar2->RealtimeAsyncHeaderParseTask + 0x18))();
    pIVar3 = pFVar2->RealtimeAsyncHeaderParseTask;
    if (pIVar3 != (IAudioTask *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pFVar2->RealtimeAsyncHeaderParseTask = (IAudioTask *)0x0;
  }
  if (this->bIsStopping != (FThreadSafeBool)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsStopping",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x4ff,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Playing",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x500,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar1 = &this->AudioLink;
  if (pTVar1->Object != (IAudioLinkSourcePushed *)0x0) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IAudioLinkSourcePushed,1> *)&local_38) {
      pTVar1->Object = (IAudioLinkSourcePushed *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AudioLink).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
    if (*(longlong *)(this->_padding_ + 0xf0) != 0) {
      iVar8 = FMixerSourceVoice::GetSourceId(this->MixerSourceVoice);
      lVar4 = this->_padding_;
      if (*(longlong *)(lVar4 + 0xf0) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      plVar5 = *(longlong **)(lVar4 + 0xf0);
      (**(code **)(*plVar5 + 0x18))(plVar5,iVar8);
    }
    LOCK();
    this->bIsReleasing = (FThreadSafeBool)0x1;
    UNLOCK();
    FMixerSourceVoice::Release(this->MixerSourceVoice);
    this->MixerSourceVoice = (FMixerSourceVoice *)0x0;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MixerSourceBuffer != (TSharedPtr<Audio::FMixerSourceBuffer,1> *)&local_28) {
    (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MixerSourceBuffer).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  LOCK();
  this->bLoopCallback = (FThreadSafeBool)0x0;
  UNLOCK();
  pFVar2 = this->MixerBuffer;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (pFVar2 != (FMixerBuffer *)0x0) {
    if ((pFVar2->BufferType == PCMRealTime) || (pFVar2->BufferType == Streaming)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    this->MixerBuffer = (FMixerBuffer *)0x0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  (this->ChannelMap).ArrayNum = 0;
  if ((this->ChannelMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->ChannelMap).AllocatorInstance,0,&(this->ChannelMap).ArrayMax);
  }
  this->InitializationState = NotInitialized;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetEnvelopeValue @ 1465023d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall Audio::FMixerSource::GetEnvelopeValue(FMixerSource *this)

{
  FMixerSourceVoice *pFVar1;
  float fVar2;
  
  pFVar1 = this->MixerSourceVoice;
  if (pFVar1 == (FMixerSourceVoice *)0x0) {
    return 0.0;
  }
  FMixerDevice::CheckAudioThread(pFVar1->MixerDevice);
  fVar2 = FMixerSourceManager::GetEnvelopeValue(pFVar1->SourceManager,pFVar1->SourceId);
  return fVar2;
}

// GetInheritedSubmixVolumeModulation @ 1465029d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall Audio::FMixerSource::GetInheritedSubmixVolumeModulation(FMixerSource *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  FMixerSubmix *pFVar6;
  code *pcVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  IAudioReverb *pIVar11;
  USoundSubmixBase *pUVar12;
  FModulationDestination *pFVar13;
  FModulationDestination *pFVar14;
  ForAnyElementType FVar15;
  FWeakReferencer<1> FVar16;
  FWeakReferencer<1> FVar17;
  FMixerSubmix *pFVar18;
  bool bVar19;
  float fVar20;
  uint local_c8 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FMixerSubmix *local_b0;
  FSharedReferencer<1> local_a8;
  FMixerSubmix *local_a0;
  FSharedReferencer<1> local_98;
  TWeakPtr<Audio::FMixerSubmix,1> local_90;
  TWeakPtr<Audio::FMixerSubmix,1> local_80;
  undefined8 local_70;
  FSharedReferencer<1> local_68;
  undefined8 local_60;
  FSharedReferencer<1> local_58;
  FAudioSpatializationInterfaceInfo local_50;
  
  if (this->MixerDevice == (FMixerDevice *)0x0) {
    return __real_3f800000;
  }
  FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
            ((FAudioDevice *)this->MixerDevice,&local_50);
  fVar20 = __real_3f800000;
  if (local_50.bSpatializationIsExternalSend != 0) {
    pFVar18 = (FMixerSubmix *)0x0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    if (((local_50.bReturnsToSubmixGraph != '\0') && (this->MixerDevice != (FMixerDevice *)0x0)) &&
       (puVar2 = &this->MixerDevice->field_0x100, *(longlong *)puVar2 != 0)) {
      pIVar11 = TSharedPtr<IAudioReverb,1>::operator->((TSharedPtr<IAudioReverb,1> *)puVar2);
      pUVar12 = (USoundSubmixBase *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
      if (pUVar12 != (USoundSubmixBase *)0x0) {
        FMixerDevice::GetSubmixInstance(this->MixerDevice,&local_80,pUVar12);
        local_a0 = (FMixerSubmix *)0x0;
        local_98.ReferenceController = local_80.WeakReferenceCount.ReferenceController;
        FVar16.ReferenceController = local_80.WeakReferenceCount.ReferenceController;
        if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (local_80.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146502ae6;
            }
            LOCK();
            aVar8 = (local_80.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar19 = aVar3 == aVar8;
            if (bVar19) {
              (local_80.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar8 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar8;
            pFVar6 = local_80.Object;
          } while (!bVar19);
          while ((local_a0 = pFVar6, pFVar6 != (FMixerSubmix *)0x0 &&
                 (bVar19 = FMixerSubmix::IsValid(pFVar6), bVar19))) {
            if ((pFVar6 == (FMixerSubmix *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar7 = (code *)swi(3);
              fVar20 = (float)(*pcVar7)();
              return fVar20;
            }
            local_c8[0] = pFVar6->Id;
            if (((local_c0.Data <= (FScriptContainerElement *)local_c8) &&
                ((FScriptContainerElement *)local_c8 < local_c0.Data + (longlong)local_b8._4_4_ * 4)
                ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
              pcVar7 = (code *)swi(3);
              fVar20 = (float)(*pcVar7)();
              return fVar20;
            }
            iVar9 = (int)local_b8;
            if ((int)local_b8 == local_b8._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_c0,(int *)((longlong)&local_b8 + 4));
            }
            local_b8 = CONCAT44(local_b8._4_4_,iVar9 + 1);
            *(uint *)(local_c0.Data + (longlong)iVar9 * 4) = local_c8[0];
            if ((pFVar6 == (FMixerSubmix *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar7 = (code *)swi(3);
              fVar20 = (float)(*pcVar7)();
              return fVar20;
            }
            pFVar5 = (pFVar6->ParentSubmix).Object;
            pTVar4 = (pFVar6->ParentSubmix).WeakReferenceCount.ReferenceController;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
              UNLOCK();
            }
            local_80.Object = pFVar5;
            local_80.WeakReferenceCount.ReferenceController = pTVar4;
            if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(FVar16.ReferenceController)->WeakReferenceCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)((FVar16.ReferenceController)->_padding_ + 8))
                          (FVar16.ReferenceController,1);
              }
            }
            local_a0 = pFVar18;
            local_68.ReferenceController = pTVar4;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              aVar3 = pTVar4->SharedReferenceCount;
              do {
                if (aVar3 == (atomic<int>)0x0) {
                  local_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  local_a0 = pFVar18;
                  break;
                }
                LOCK();
                aVar8 = pTVar4->SharedReferenceCount;
                bVar19 = aVar3 == aVar8;
                if (bVar19) {
                  pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
                  aVar8 = aVar3;
                }
                UNLOCK();
                local_a0 = pFVar5;
                aVar3 = aVar8;
              } while (!bVar19);
            }
            local_70 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_98,&local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.ReferenceController);
            pFVar6 = local_a0;
            FVar16.ReferenceController = pTVar4;
          }
        }
LAB_146502ae6:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.ReferenceController);
        if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FVar16.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((FVar16.ReferenceController)->_padding_ + 8))(FVar16.ReferenceController,1)
            ;
          }
        }
      }
    }
    fVar20 = __real_3f800000;
    FMixerDevice::GetSubmixInstance
              (this->MixerDevice,&local_90,*(USoundSubmixBase **)(this->_padding_ + 0x10));
    local_b0 = (FMixerSubmix *)0x0;
    local_a8.ReferenceController = local_90.WeakReferenceCount.ReferenceController;
    FVar16.ReferenceController = local_90.WeakReferenceCount.ReferenceController;
    FVar17.ReferenceController = local_90.WeakReferenceCount.ReferenceController;
    if ((FMixerSubmix *)local_90.WeakReferenceCount.ReferenceController != (FMixerSubmix *)0x0) {
      aVar3 = (local_90.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        FVar16.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        if (aVar3 == (atomic<int>)0x0) goto LAB_146502b65;
        LOCK();
        aVar8 = (local_90.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar19 = aVar3 == aVar8;
        if (bVar19) {
          (local_90.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar8 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar8;
      } while (!bVar19);
      local_b0 = local_90.Object;
      FVar16.ReferenceController = local_90.WeakReferenceCount.ReferenceController;
      if (local_90.Object != (FMixerSubmix *)0x0) {
        while (pFVar6 = local_b0, bVar19 = FMixerSubmix::IsValid(local_b0),
              FVar16.ReferenceController = local_a8.ReferenceController, bVar19) {
          if (local_50.bReturnsToSubmixGraph != '\0') {
            if ((pFVar6 == (FMixerSubmix *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar7 = (code *)swi(3);
              fVar20 = (float)(*pcVar7)();
              return fVar20;
            }
            for (FVar15.Data = local_c0.Data;
                FVar15.Data != local_c0.Data + (longlong)(int)local_b8 * 4;
                FVar15.Data = FVar15.Data + 4) {
              FVar16.ReferenceController = local_a8.ReferenceController;
              if (*(uint *)FVar15.Data == pFVar6->Id) goto LAB_146502b65;
            }
          }
          if ((pFVar6 == (FMixerSubmix *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar7 = (code *)swi(3);
            fVar20 = (float)(*pcVar7)();
            return fVar20;
          }
          pFVar13 = FMixerSubmix::GetOutputVolumeDestination(pFVar6);
          if ((pFVar6 == (FMixerSubmix *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar7 = (code *)swi(3);
            fVar20 = (float)(*pcVar7)();
            return fVar20;
          }
          pFVar14 = FMixerSubmix::GetWetVolumeDestination(pFVar6);
          if (pFVar13 != (FModulationDestination *)0x0) {
            fVar20 = fVar20 * ((pFVar13->DestinationData).Object)->ValueTarget;
          }
          if (pFVar14 != (FModulationDestination *)0x0) {
            fVar20 = fVar20 * ((pFVar14->DestinationData).Object)->ValueTarget;
          }
          if ((pFVar6 == (FMixerSubmix *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar7 = (code *)swi(3);
            fVar20 = (float)(*pcVar7)();
            return fVar20;
          }
          pFVar5 = (pFVar6->ParentSubmix).Object;
          pFVar6 = (FMixerSubmix *)(pFVar6->ParentSubmix).WeakReferenceCount.ReferenceController;
          if (pFVar6 != (FMixerSubmix *)0x0) {
            LOCK();
            *(int *)&pFVar6->field_0xc = *(int *)&pFVar6->field_0xc + 1;
            UNLOCK();
          }
          local_90.Object = pFVar5;
          local_90.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
          if ((FMixerSubmix *)FVar17.ReferenceController != (FMixerSubmix *)0x0) {
            LOCK();
            puVar2 = &((FMixerSubmix *)FVar17.ReferenceController)->field_0xc;
            iVar9 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)((FVar17.ReferenceController)->_padding_ + 8))
                        (FVar17.ReferenceController,1);
            }
          }
          local_b0 = pFVar18;
          local_58.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
          if (pFVar6 != (FMixerSubmix *)0x0) {
            iVar9 = *(int *)&pFVar6->field_0x8;
            do {
              if (iVar9 == 0) {
                local_58.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                local_b0 = pFVar18;
                break;
              }
              LOCK();
              iVar10 = *(int *)&pFVar6->field_0x8;
              bVar19 = iVar9 == iVar10;
              if (bVar19) {
                *(int *)&pFVar6->field_0x8 = iVar9 + 1;
                iVar10 = iVar9;
              }
              UNLOCK();
              local_b0 = pFVar5;
              iVar9 = iVar10;
            } while (!bVar19);
          }
          local_60 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a8,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.ReferenceController);
          FVar16.ReferenceController = local_a8.ReferenceController;
          FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
          if (local_b0 == (FMixerSubmix *)0x0) break;
        }
      }
    }
LAB_146502b65:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    if ((FMixerSubmix *)FVar17.ReferenceController != (FMixerSubmix *)0x0) {
      LOCK();
      puVar2 = &((FMixerSubmix *)FVar17.ReferenceController)->field_0xc;
      iVar9 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)((FVar17.ReferenceController)->_padding_ + 8))(FVar17.ReferenceController,1);
      }
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SpatializationPlugin.SharedReferenceCount.ReferenceController);
  return fVar20;
}

// GetNumFramesPlayed @ 146504450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

long64 __thiscall Audio::FMixerSource::GetNumFramesPlayed(FMixerSource *this)

{
  FMixerSourceVoice *pFVar1;
  long64 lVar2;
  
  if ((this->InitializationState == Initialized) &&
     (pFVar1 = this->MixerSourceVoice, pFVar1 != (FMixerSourceVoice *)0x0)) {
    FMixerDevice::CheckAudioThread(pFVar1->MixerDevice);
    lVar2 = FMixerSourceManager::GetNumFramesPlayed(pFVar1->SourceManager,pFVar1->SourceId);
    return lVar2;
  }
  return 0;
}

// GetPlaybackPercent @ 146504ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall Audio::FMixerSource::GetPlaybackPercent(FMixerSource *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  long64 lVar4;
  float fVar5;
  
  if (this->InitializationState != Initialized) {
    return this->PreviousPlaybackPercent;
  }
  if ((this->MixerSourceVoice != (FMixerSourceVoice *)0x0) &&
     (0 < *(int *)((longlong)&this->_padding_ + 4))) {
    lVar2 = this->_padding_;
    lVar4 = FMixerSourceVoice::GetNumFramesPlayed(this->MixerSourceVoice);
    if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8907641517682721980>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x4bc,"NumTotalFrames > 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
    }
    fVar5 = (float)((int)lVar2 + lVar4) / (float)*(int *)((longlong)&this->_padding_ + 4);
    this->PreviousPlaybackPercent = fVar5;
    if (*(int *)(this->_padding_ + 0xc4) == 0) {
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      this->PreviousPlaybackPercent = fVar5;
    }
    return fVar5;
  }
  return __real_3f800000;
}

// GetRelativeRenderCost @ 1465051d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall Audio::FMixerSource::GetRelativeRenderCost(FMixerSource *this)

{
  FMixerSourceVoice *pFVar1;
  float fVar2;
  
  pFVar1 = this->MixerSourceVoice;
  if (pFVar1 == (FMixerSourceVoice *)0x0) {
    return __real_3f800000;
  }
  FMixerDevice::CheckAudioThread(pFVar1->MixerDevice);
  fVar2 = FMixerSourceManager::GetRelativeRenderCost(pFVar1->SourceManager,pFVar1->SourceId);
  return fVar2;
}

// Init @ 146505fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146507588) */
/* WARNING: Removing unreachable block (ram,0x000146507597) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::Init(FMixerSource *this,FWaveInstance *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  *this_00;
  atomic<int> aVar3;
  byte bVar4;
  Type TVar5;
  longlong *plVar6;
  FName FVar7;
  FMixerDevice *pFVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  FWaveInstance *pFVar11;
  FActiveSound *pFVar12;
  FName FVar13;
  ISourceBufferListener *pIVar14;
  IAudioLinkFactory *pIVar15;
  IAudioLinkSettingsProxy *pIVar16;
  UObject *pUVar17;
  IAudioLinkSourcePushed *pIVar18;
  USoundEffectSourcePresetChain *this_01;
  UObjectBaseUtility *this_02;
  FDynamicBusSendInfo *pFVar19;
  USoundSubmixBase *pUVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FMixerBuffer *pFVar23;
  FMixerSourceBuffer *pFVar24;
  ICompressedAudioInfo *pIVar25;
  code *pcVar26;
  FSharedReferencer<1> FVar27;
  int iVar28;
  bool bVar29;
  undefined1 uVar30;
  char cVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  atomic<int> aVar35;
  int iVar36;
  FName *pFVar37;
  FThreadSafeStaticStat<FStat_STAT_AudioSourceInitTime> FVar38;
  FMixerSourceVoice *pFVar39;
  FAudioSpatializationInterfaceInfo *pFVar40;
  undefined8 *puVar41;
  TSubclassOf<UAudioLinkSettingsAbstract> *this_03;
  UClass *pUVar42;
  TSharedPtr<IAudioLinkSettingsProxy,1> *pTVar43;
  FString *pFVar44;
  TSharedPtr<IAudioLinkSourcePushed,1> *pTVar45;
  UClass *pUVar46;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar47;
  longlong lVar48;
  TReferenceControllerBase<1> *pTVar49;
  FAudioDeviceManager *this_04;
  FAudioDebugger *this_05;
  size_t sVar50;
  byte bVar51;
  uint uVar52;
  ulonglong uVar53;
  wchar_t *pwVar54;
  FSourceEffectChainEntry *pFVar55;
  FWeakReferencer<1> FVar56;
  longlong lVar57;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar58;
  USoundWave *pUVar59;
  wchar_t *pwVar60;
  TReferenceControllerBase<1> *pTVar61;
  ForAnyElementType FVar62;
  FNameEntryId FVar63;
  FWeakReferencer<1> FVar64;
  bool bVar65;
  float fVar66;
  FMixerSubmix *this_06;
  TReferenceControllerBase<1> *pTVar67;
  undefined1 auStackY_9b8 [32];
  undefined1 local_957;
  undefined1 local_956 [6];
  FName local_950;
  byte local_948;
  USoundWave *local_940;
  ForAnyElementType local_938;
  undefined8 local_930;
  FWaveInstance *local_928;
  uint local_920;
  TWeakPtr<Audio::FMixerSubmix,1> local_918;
  undefined4 local_908;
  FScriptContainerElement local_904;
  uint local_900;
  TReferenceControllerBase<1> *local_8f8;
  FLLMScope local_8f0;
  FLLMScope local_8ec;
  ForAnyElementType local_8e8;
  int local_8e0;
  int local_8dc;
  TWeakPtr<Audio::FMixerSubmix,1> local_8d8;
  TWeakPtr<Audio::FMixerSubmix,1> local_8c8;
  float local_8b8;
  FScriptContainerElement local_8b4;
  undefined4 local_8b0;
  TReferenceControllerBase<1> *local_8a8;
  FColor_u_0 local_8a0 [2];
  FName local_898;
  uint local_890;
  uint uStack_88c;
  FMixerBuffer *local_888;
  FName local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  TSharedPtr<IAudioLinkSettingsProxy,1> local_868;
  uchar *local_858;
  uint uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  FName local_840;
  FMemScope local_838;
  FName local_830;
  FString local_828;
  FName local_818;
  FName FStack_810;
  ISourceBufferListener *local_808;
  TReferenceControllerBase<1> *pTStack_800;
  IAudioLinkSettingsProxy *local_7f8;
  TReferenceControllerBase<1> *pTStack_7f0;
  IAudioLinkSourcePushed *local_7e8;
  TReferenceControllerBase<1> *pTStack_7e0;
  FMixerSourceBuffer *local_7d8;
  TReferenceControllerBase<1> *pTStack_7d0;
  undefined8 local_7c8;
  FSharedReferencer<1> FStack_7c0;
  FMemScope local_7b8;
  FString local_7b0;
  TWeakPtr<Audio::FMixerSubmix,1> local_7a0;
  FString local_790;
  undefined1 local_780 [8];
  TReferenceControllerBase<1> *local_778;
  FString local_770;
  FString local_760;
  FString local_750;
  TWeakPtr<Audio::FMixerSubmix,1> local_740;
  TWeakPtr<Audio::FMixerSubmix,1> local_730;
  TWeakPtr<Audio::FMixerSubmix,1> local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FName local_6c0;
  undefined1 local_6b8 [8];
  FString local_6b0;
  FString local_6a0;
  FAudioSpatializationInterfaceInfo local_690;
  undefined8 local_670 [2];
  FAudioSpatializationInterfaceInfo local_660;
  FString local_640;
  FString local_630;
  undefined8 local_618;
  undefined8 uStack_610;
  FMixerSourceVoiceInitParams local_608;
  FSoundModulationDestinationSettings local_338;
  FSoundModulationDestinationSettings local_2d8;
  FSoundModulationDestinationSettings local_278;
  FSoundModulationDestinationSettings local_218;
  FSoundModulationDefaultSettings local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  bVar32 = false;
  bVar65 = -1 < CpuChannel->Enabled;
  local_928 = param_1;
  if (bVar65) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId225,"AudioMixerSource::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
               ,0xe1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId225);
  }
  if ((this->MixerBuffer == (FMixerBuffer *)0x0) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8907641517682720994>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                          ,0xe2,"MixerBuffer"), bVar29)) {
    pcVar26 = (code *)swi(3);
    uVar30 = (*pcVar26)();
    return (bool)uVar30;
  }
  cVar31 = (**(code **)(this->MixerBuffer->_padding_ + 0x40))();
  if ((cVar31 == '\0') &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8907641517682720995>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                          ,0xe3,"MixerBuffer->IsRealTimeSourceReady()"), bVar29)) {
    pcVar26 = (code *)swi(3);
    uVar30 = (*pcVar26)();
    return (bool)uVar30;
  }
  if ((((FWaveInstance *)this->_padding_ == (FWaveInstance *)0x0) ||
      ((FWaveInstance *)this->_padding_ != param_1)) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8907641517682720998>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                          ,0xe6,"WaveInstance && WaveInstance == InWaveInstance"), bVar29)) {
    pcVar26 = (code *)swi(3);
    uVar30 = (*pcVar26)();
    return (bool)uVar30;
  }
  if ((*(longlong *)this->_padding_ == 0) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8907641517682720999>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                          ,0xe7,"WaveInstance->WaveData"), bVar29)) {
    pcVar26 = (code *)swi(3);
    uVar30 = (*pcVar26)();
    return (bool)uVar30;
  }
  FLLMScope::FLLMScope(&local_8ec,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_7b8,AudioMixer,true);
  FSoundSource::InitCommon((FSoundSource *)this);
  plVar6 = (longlong *)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(*plVar6 + 900);
  if (param_1 == (FWaveInstance *)0x0) {
    bVar29 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8907641517682721005>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                        ,0xed,"InWaveInstance");
    if (bVar29) {
      pcVar26 = (code *)swi(3);
      uVar30 = (*pcVar26)();
      return (bool)uVar30;
    }
    goto LAB_14650832b;
  }
  pUVar59 = (USoundWave *)*plVar6;
  pwVar60 = L"";
  local_940 = pUVar59;
  if ((pUVar59 == (USoundWave *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("WaveData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                          ,0xf3,L""), bVar29)) {
    pcVar26 = (code *)swi(3);
    uVar30 = (*pcVar26)();
    return (bool)uVar30;
  }
  if (pUVar59->NumChannels == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      local_830 = (FName)pUVar59->_padding_;
      ::FName::ToString(&local_830,&local_828);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
    }
    FreeResources(this);
    goto LAB_14650832b;
  }
  iVar34 = -1;
  if ((pUVar59->DecompressionType).Value != '\x03') {
    if (((pUVar59->RawPCMData != (uchar *)0x0) && (pUVar59->RawPCMDataSize == 0)) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("!WaveData->RawPCMData || WaveData->RawPCMDataSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                            ,0x100,L""), bVar32)) {
      pcVar26 = (code *)swi(3);
      uVar30 = (*pcVar26)();
      return (bool)uVar30;
    }
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      iVar34 = (int)((ulonglong)(longlong)pUVar59->RawPCMDataSize /
                    (ulonglong)((longlong)pUVar59->NumChannels * 2));
    }
  }
  if (&this->PreviousSubmixResolved != (TWeakPtr<Audio::FMixerSubmix,1> *)local_670) {
    pTVar49 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController;
    (this->PreviousSubmixResolved).Object = (FMixerSubmix *)0x0;
    (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar49->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar49->_padding_ + 8))();
      }
    }
  }
  this->bPreviousBusEnablement = 0;
  this->bPreviousBaseSubmixEnablement = 0;
  this->PreviousPlaybackPercent = 0.0;
  this_00 = &this->PreviousSubmixSends;
  this->PreviousAzimuth = -1.0;
  if (*(int *)&(this->PreviousSubmixSends).Elements.field_0x8 !=
      *(int *)&(this->PreviousSubmixSends).Elements.field_0x34) {
    TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->PreviousSubmixSends).Elements.field_0x8);
    iVar36 = *(int *)&(this->PreviousSubmixSends).Elements.field_0xc;
    *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x8 = 0;
    if (iVar36 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->PreviousSubmixSends).Elements.field_0xc);
    }
    *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->PreviousSubmixSends).Elements.field_0x28 = 0;
  }
  uVar52 = ((uint)(byte)pUVar59->field_0x365 << 2 ^ *(uint *)&this->field_0x2bc) & 8 ^
           *(uint *)&this->field_0x2bc;
  *(uint *)&this->field_0x2bc = uVar52;
  *(uint *)&this->field_0x2bc =
       ((uint)*(byte *)(this->_padding_ + 0x5ba) * 2 ^ uVar52) & 0x10 ^ uVar52;
  LOCK();
  this->bIsStopping = (FThreadSafeBool)0x0;
  UNLOCK();
  LOCK();
  this->bIsEffectTailsDone = (FThreadSafeBool)0x1;
  UNLOCK();
  LOCK();
  this->bIsDone = (FThreadSafeBool)0x0;
  UNLOCK();
  local_888 = this->MixerBuffer;
  this->bBypassingSubmixModulation = false;
  if (*(int *)((longlong)&local_888->_padding_ + 4) < 1) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      FWaveInstance::GetName(param_1,&local_6d0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
    }
LAB_146508320:
    FreeResources(this);
    bVar32 = false;
  }
  else {
    if (__CsvProfilerStat286 == false) {
      FCsvProfilerTrace::OutputInlineStat("InitSources",_GCsvCategory_Audio.Index);
      __CsvProfilerStat286 = true;
    }
    local_920 = _GCsvCategory_Audio.Index;
    FCsvProfiler::BeginStat("InitSources",_GCsvCategory_Audio.Index,"CSV_InitSources");
    FVar38 = StatPtr_STAT_AudioSourceInitTime;
    if (StatPtr_STAT_AudioSourceInitTime ==
        (FThreadSafeStaticStat<FStat_STAT_AudioSourceInitTime>)0x0) {
      pFVar37 = ::FName::FName(&local_6c0,"STAT_AudioSourceInitTime");
      FVar38 = (FThreadSafeStaticStat<FStat_STAT_AudioSourceInitTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSourceInitTime,*pFVar37,
                          L"Source Init","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
                          ST_int64,true,false,MCR_Invalid);
    }
    local_950.ComparisonIndex.Value = 0;
    local_950.Number = 0;
    local_948 = 0;
    FVar7 = *(FName *)FVar38;
    FVar63 = FVar7.ComparisonIndex.Value;
    uVar52 = FVar7.Number;
    if ((FVar63.Value != 0) || (uVar52 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_8a0[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_8a0[0]._s_0,(char *)*(FName *)((longlong)FVar38 + 0x10));
        local_948 = local_948 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_898.ComparisonIndex.Value = FVar63.Value;
          local_898.Number = uVar52;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_898,(wchar_t *)*(FName *)((longlong)FVar38 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                     ,0x11f);
          local_948 = local_948 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_950 = FVar7;
        local_890 = FVar63.Value;
        uStack_88c = uVar52;
        FThreadStats::AddMessage(FVar7,CycleScopeStart);
        local_948 = local_948 | 4;
      }
    }
    if ((this->MixerDevice == (FMixerDevice *)0x0) &&
       (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8907641517682721057>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                            ,0x121,"MixerDevice"), bVar32)) {
      pcVar26 = (code *)swi(3);
      uVar30 = (*pcVar26)();
      return (bool)uVar30;
    }
    pFVar8 = this->MixerDevice;
    FLLMScope::FLLMScope(&local_8f0,AudioMixer,false,None,Default,true);
    FMemScope::FMemScope(&local_838,AudioMixer,true);
    pTVar9 = ((pFVar8->SourceVoices).Tail)->NextNode;
    if (pTVar9 == (TNode *)0x0) {
      pFVar39 = ::operator_new(0xa8);
      if (pFVar39 == (FMixerSourceVoice *)0x0) {
        pFVar39 = (FMixerSourceVoice *)0x0;
      }
      else {
        pFVar39 = FMixerSourceVoice::FMixerSourceVoice(pFVar39);
      }
    }
    else {
      pFVar39 = pTVar9->Item;
      pTVar10 = (pFVar8->SourceVoices).Tail;
      (pFVar8->SourceVoices).Tail = pTVar9;
      pTVar9->Item = (FMixerSourceVoice *)0x0;
      ::operator_delete(pTVar10,0x10);
    }
    FMixerSourceVoice::Reset(pFVar39,pFVar8);
    FMemScope::~FMemScope(&local_838);
    FLLMScope::~FLLMScope(&local_8f0);
    this->MixerSourceVoice = pFVar39;
    if (pFVar39 == (FMixerSourceVoice *)0x0) {
      FreeResources(this);
      if (2 < (byte)LogAudioMixer._0_1_) {
        FWaveInstance::GetName(local_928,&local_6b0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
        }
      }
      bVar32 = false;
    }
    else {
      local_608.SubmixSends.ArrayNum = 0;
      local_608.SubmixSends.ArrayMax = 0;
      local_608.MixerSourceBuffer.Object = (FMixerSourceBuffer *)0x0;
      local_608.MixerSourceBuffer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_608.SourceListener = (ISourceListener *)0x0;
      local_608.SubmixSends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.OcclusionPluginSettings = (UOcclusionPluginSourceSettingsBase *)0x0;
      local_608.ReverbPluginSettings = (UReverbPluginSourceSettingsBase *)0x0;
      local_608.AudioBusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.AudioBusSends[0].ArrayNum = 0;
      local_608.AudioBusSends[0].ArrayMax = 0;
      local_608.AudioBusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.AudioBusSends[1].ArrayNum = 0;
      local_608.AudioBusSends[1].ArrayMax = 0;
      local_608.AudioBusId = 0xffffffff;
      local_608.AudioBusChannels = 0;
      local_608.AudioBusName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.AudioBusName.Data.ArrayNum = 0;
      local_608.AudioBusName.Data.ArrayMax = 0;
      local_608.SourceBusDuration = 0.0;
      local_608.SourceEffectChainId = 0xffffffff;
      local_608.SourceEffectChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.SourceEffectChain.ArrayNum = 0;
      local_608.SourceEffectChain.ArrayMax = 0;
      local_608.SourceEffectChainMaxSupportedChannels = 0;
      local_608.SourceVoice = (FMixerSourceVoice *)0x0;
      local_608.NumInputChannels = 0;
      local_608.NumInputFrames = 0;
      local_608.EnvelopeFollowerAttackTime = 10.0;
      local_608.EnvelopeFollowerReleaseTime = 100.0;
      local_608.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.DebugName.Data.ArrayNum = 0;
      local_608.DebugName.Data.ArrayMax = 0;
      local_608.SpatializationPluginSettings = (USpatializationPluginSourceSettingsBase *)0x0;
      local_608.SourceDataOverridePluginSettings =
           (USourceDataOverridePluginSourceSettingsBase *)0x0;
      FSoundModulationDefaultSettings::FSoundModulationDefaultSettings
                (&local_608.ModulationSettings);
      pUVar59 = local_940;
      local_608.SourceListener = (ISourceListener *)&this->_padding_;
      local_608.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
      local_608.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_608.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      local_608.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_608.AudioComponentID = 0;
      local_608.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
      local_608.QuantizedRequestData.ClockName.Number = 0;
      local_608.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
      local_608.QuantizedRequestData.OtherClockName.Number = 0;
      local_608.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
      local_608.SourceVoice = this->MixerSourceVoice;
      local_608.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
      local_608.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
      local_608.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
      local_608.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
      local_608.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
      local_608.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
      local_608.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
      local_608.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
      local_608.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
      local_608.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
      local_608.QuantizedRequestData.GameThreadDelegateID = 0xffffffff;
      local_608.SourceBufferListener.Object = (ISourceBufferListener *)0x0;
      local_608.SourceBufferListener.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_608.AudioLink.Object = (IAudioLinkSourcePushed *)0x0;
      local_608.AudioLink.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_608.AudioComponentUserID.ComparisonIndex.Value = 0;
      local_608.AudioComponentUserID.Number = 0;
      local_608.bIs3D = false;
      local_608.bPlayEffectChainTails = false;
      local_608.bUseHRTFSpatialization = false;
      local_608.bIsExternalSend = false;
      local_608.bIsDebugMode = false;
      local_608.bEnableBusSends = false;
      local_608.bEnableBaseSubmix = false;
      local_608.bEnableSubmixSends = false;
      local_608.bIsVorbis = false;
      local_608.bIsSoundfield = false;
      local_608.bIsSeeking = false;
      local_608.bShouldSourceBufferListenerZeroBuffer = false;
      local_608.PlayOrder = 0xffffffff;
      local_608.ActiveSoundPlayOrder = 0xffffffff;
      local_608.NumInputFrames = iVar34;
      local_608.NumInputChannels = local_940->NumChannels;
      bVar32 = UseObjectBasedSpatialization(this);
      local_608.bUseHRTFSpatialization = bVar32;
      pFVar40 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                          ((FAudioDevice *)this->MixerDevice,&local_660);
      local_608._688_8_ =
           CONCAT44(local_608._692_4_,CONCAT13(pFVar40->field_0x1c,local_608._688_3_)) &
           0xffffffff01ffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_660.SpatializationPlugin.SharedReferenceCount.ReferenceController);
      pFVar11 = (FWaveInstance *)this->_padding_;
      if (pFVar11->bIsAmbisonics == 0) {
LAB_1465068d4:
        local_608.bIsSoundfield = false;
      }
      else {
        local_608.bIsSoundfield = true;
        if (pUVar59->NumChannels != 4) goto LAB_1465068d4;
      }
      pFVar12 = pFVar11->ActiveSound;
      FSoundModulationDefaultSettings::FSoundModulationDefaultSettings(&local_1b8);
      if (pFVar12 != (FActiveSound *)0x0) {
        FWaveInstance::GetEffectiveModulationSettings(pFVar11,&local_338,Volume);
        local_1b8.VolumeModulationDestination.Value = local_338.Value;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.VolumeModulationDestination.Modulators,&local_338.Modulators);
        local_338.Modulators.HashSize = 0;
        if (local_338.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_338.Modulators.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_338.Modulators.Elements);
        FWaveInstance::GetEffectiveModulationSettings(pFVar11,&local_2d8,Pitch);
        local_1b8.PitchModulationDestination.Value = local_2d8.Value;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.PitchModulationDestination.Modulators,&local_2d8.Modulators);
        local_2d8.Modulators.HashSize = 0;
        if (local_2d8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2d8.Modulators.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_2d8.Modulators.Elements);
        FWaveInstance::GetEffectiveModulationSettings(pFVar11,&local_278,Highpass);
        local_1b8.HighpassModulationDestination.Value = local_278.Value;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.HighpassModulationDestination.Modulators,&local_278.Modulators);
        local_278.Modulators.HashSize = 0;
        if (local_278.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_278.Modulators.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_278.Modulators.Elements);
        FWaveInstance::GetEffectiveModulationSettings(pFVar11,&local_218,Lowpass);
        local_1b8.LowpassModulationDestination.Value = local_218.Value;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.LowpassModulationDestination.Modulators,&local_218.Modulators);
        local_218.Modulators.HashSize = 0;
        if (local_218.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_218.Modulators.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_218.Modulators.Elements);
      }
      local_608.ModulationSettings.VolumeModulationDestination.Value =
           local_1b8.VolumeModulationDestination.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_608.ModulationSettings.VolumeModulationDestination.Modulators,
                 &local_1b8.VolumeModulationDestination.Modulators);
      local_608.ModulationSettings.PitchModulationDestination.Value =
           local_1b8.PitchModulationDestination.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_608.ModulationSettings.PitchModulationDestination.Modulators,
                 &local_1b8.PitchModulationDestination.Modulators);
      local_608.ModulationSettings.HighpassModulationDestination.Value =
           local_1b8.HighpassModulationDestination.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_608.ModulationSettings.HighpassModulationDestination.Modulators,
                 &local_1b8.HighpassModulationDestination.Modulators);
      local_608.ModulationSettings.LowpassModulationDestination.Value =
           local_1b8.LowpassModulationDestination.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_608.ModulationSettings.LowpassModulationDestination.Modulators,
                 &local_1b8.LowpassModulationDestination.Modulators);
      FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings(&local_1b8);
      FVar27.ReferenceController =
           local_608.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
           ReferenceController;
      pFVar37 = *(FName **)(this->_padding_ + 0x68);
      if (pFVar37 != (FName *)0x0) {
        local_608.QuantizedRequestData.ClockName = *pFVar37;
        local_608.QuantizedRequestData.OtherClockName = pFVar37[1];
        FVar7 = pFVar37[2];
        FVar13 = pFVar37[3];
        if (FVar13 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar13 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 8) + 1);
          UNLOCK();
        }
        local_818 = (FName)local_608.QuantizedRequestData.QuantizedCommandPtr.Object;
        FStack_810 = (FName)local_608.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
                            ReferenceController;
        local_608.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)FVar7
        ;
        local_608.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController
             = (TReferenceControllerBase<1> *)FVar13;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        local_608.QuantizedRequestData.QuantizationBoundary.Quantization =
             (EQuartzCommandQuantization)pFVar37[4].ComparisonIndex.Value;
        local_608.QuantizedRequestData.QuantizationBoundary.Multiplier = (float)pFVar37[4].Number;
        local_608.QuantizedRequestData.QuantizationBoundary._8_4_ = pFVar37[5].ComparisonIndex.Value
        ;
        local_608.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued =
             SUB41(pFVar37[5].Number,0);
        TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
                  (&local_608.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers,
                   (TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)
                   (pFVar37 + 6));
        TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
                  (&local_608.QuantizedRequestData.GameThreadSubscribers,
                   (TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)
                   (pFVar37 + 8));
        local_608.QuantizedRequestData.GameThreadDelegateID = pFVar37[10].ComparisonIndex.Value;
      }
      pFVar11 = local_928;
      if ((((*(uint *)(this->_padding_ + 0xcc) & 0x80000) != 0) && (pUVar59->NumChannels != 4)) &&
         (2 < (byte)LogAudioMixer._0_1_)) {
        FWaveInstance::GetName(local_928,&local_6a0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
        }
      }
      FVar27.ReferenceController =
           local_608.SourceBufferListener.SharedReferenceCount.ReferenceController;
      if (pFVar12 != (FActiveSound *)0x0) {
        local_608.AudioComponentUserID = *(FName *)(*(longlong *)(this->_padding_ + 0x60) + 0x38);
        if (local_608.AudioComponentUserID == (FName)0x0) {
          local_608.AudioComponentUserID = (FName)((pFVar12->Sound).field0_0x0.DebugPtr)->_padding_;
        }
        local_608.AudioComponentID = *(ulong64 *)(*(longlong *)(this->_padding_ + 0x60) + 0x30);
      }
      lVar57 = this->_padding_;
      local_608.EnvelopeFollowerAttackTime = (float)*(int *)(lVar57 + 0xa8);
      local_608.SourceEffectChainId = 0;
      local_608.EnvelopeFollowerReleaseTime = (float)*(int *)(lVar57 + 0xac);
      pIVar14 = *(ISourceBufferListener **)(lVar57 + 0x70);
      pTVar49 = *(TReferenceControllerBase<1> **)(lVar57 + 0x78);
      if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar49->SharedReferenceCount = (atomic<int>)((int)pTVar49->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_808 = local_608.SourceBufferListener.Object;
      pTStack_800 = local_608.SourceBufferListener.SharedReferenceCount.ReferenceController;
      local_608.SourceBufferListener.Object = pIVar14;
      local_608.SourceBufferListener.SharedReferenceCount.ReferenceController = pTVar49;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar27.ReferenceController);
      lVar57 = this->_padding_;
      local_608.bShouldSourceBufferListenerZeroBuffer = *(bool *)(lVar57 + 0x80);
      if (((*(char *)(lVar57 + 0x81) != '\0') || (bForceAudioLinkOnAllSourcesCVAr != 0)) &&
         (pIVar15 = this->MixerDevice->AudioLinkFactory, pUVar59 = local_940,
         pIVar15 != (IAudioLinkFactory *)0x0)) {
        local_878 = ___xmm_ffffffffffffffffffffffffffffffff;
        uStack_870 = _UNK_15060db28;
        local_880.ComparisonIndex.Value = 0;
        local_880.Number = 0;
        local_868.Object = (IAudioLinkSettingsProxy *)0x0;
        local_868.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (*(longlong **)(lVar57 + 0x88) == (longlong *)0x0) {
          this_03 = (TSubclassOf<UAudioLinkSettingsAbstract> *)
                    (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15,local_6b8);
          pUVar46 = TSubclassOf<UAudioLinkSettingsAbstract>::operator*(this_03);
          if ((pUVar46->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar46);
          }
          pUVar17 = (pUVar46->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar42 = Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
          lVar57 = *(longlong *)&pUVar17->field_0x10;
          iVar34 = (int)pUVar42->_padding_;
          if (((*(int *)(lVar57 + 0x38) < iVar34) ||
              ((longlong *)*(undefined1 **)(*(longlong *)(lVar57 + 0x30) + (longlong)iVar34 * 8) !=
               &pUVar42->_padding_)) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0x1469,L""), bVar32)) {
            pcVar26 = (code *)swi(3);
            uVar30 = (*pcVar26)();
            return (bool)uVar30;
          }
          if ((pUVar46->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar46);
          }
          pTVar43 = (TSharedPtr<IAudioLinkSettingsProxy,1> *)
                    (**(code **)(*(longlong *)(pUVar46->ClassDefaultObject).field0_0x0.DebugPtr +
                                0x2b8))();
          TSharedPtr<IAudioLinkSettingsProxy,1>::operator=(&local_868,pTVar43);
        }
        else {
          puVar41 = (undefined8 *)(**(code **)(**(longlong **)(lVar57 + 0x88) + 0x2b8))();
          FVar27.ReferenceController = local_868.SharedReferenceCount.ReferenceController;
          pIVar16 = (IAudioLinkSettingsProxy *)*puVar41;
          pTVar49 = (TReferenceControllerBase<1> *)puVar41[1];
          if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar49->SharedReferenceCount = (atomic<int>)((int)pTVar49->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_7f8 = local_868.Object;
          pTStack_7f0 = local_868.SharedReferenceCount.ReferenceController;
          local_868.Object = pIVar16;
          local_868.SharedReferenceCount.ReferenceController = pTVar49;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar27.ReferenceController);
        }
        pFVar44 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_790);
        if ((pFVar44->Data).ArrayNum == 0) {
          pwVar54 = L"";
        }
        else {
          pwVar54 = (wchar_t *)(pFVar44->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_840,pwVar54);
        local_880 = local_840;
        if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_790.Data.AllocatorInstance.Data);
        }
        local_878 = CONCAT44((int)(float)*(int *)&this->MixerDevice->field_0x84,
                             *(undefined4 *)((longlong)&local_888->_padding_ + 4));
        uStack_870 = CONCAT44(*(undefined4 *)((longlong)&this->_padding_ + 4),
                              *(undefined4 *)&this->MixerDevice->field_0x8c);
        pTVar45 = (TSharedPtr<IAudioLinkSourcePushed,1> *)
                  (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,local_780);
        TSharedPtr<IAudioLinkSourcePushed,1>::operator=(&this->AudioLink,pTVar45);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_778);
        FVar27.ReferenceController = local_608.AudioLink.SharedReferenceCount.ReferenceController;
        pIVar18 = (this->AudioLink).Object;
        pTVar49 = (this->AudioLink).SharedReferenceCount.ReferenceController;
        if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar49->SharedReferenceCount = (atomic<int>)((int)pTVar49->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_7e8 = local_608.AudioLink.Object;
        pTStack_7e0 = local_608.AudioLink.SharedReferenceCount.ReferenceController;
        local_608.AudioLink.Object = pIVar18;
        local_608.AudioLink.SharedReferenceCount.ReferenceController = pTVar49;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_868.SharedReferenceCount.ReferenceController);
        pUVar59 = local_940;
      }
      local_608._696_4_ =
           CONCAT31(local_608._697_3_,(char)(*(uint *)&this->field_0x2bc >> 3)) & 0xffffff01;
      this_01 = *(USoundEffectSourcePresetChain **)(this->_padding_ + 0x48);
      if (this_01 == (USoundEffectSourcePresetChain *)0x0) {
        local_608.SourceEffectChainMaxSupportedChannels = 2;
      }
      else {
        local_608.SourceEffectChainMaxSupportedChannels =
             USoundEffectSourcePresetChain::GetSupportedChannelCount(this_01);
      }
      if (local_608.NumInputChannels <= local_608.SourceEffectChainMaxSupportedChannels) {
        lVar57 = this->_padding_;
        if (*(longlong *)(lVar57 + 0x48) == 0) {
LAB_146507100:
          bVar51 = local_608.bPlayEffectChainTails;
        }
        else {
          local_608.SourceEffectChainId = *(uint *)(*(longlong *)(lVar57 + 0x48) + 0xc);
          uVar52 = 0;
          if (*(int *)(*(longlong *)(lVar57 + 0x48) + 0x30) < 1) goto LAB_146507100;
          do {
            lVar57 = *(longlong *)(lVar57 + 0x48);
            uVar33 = 0;
            if ((int)uVar52 < *(int *)(lVar57 + 0x30)) {
              uVar33 = ~uVar52 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar26 = (code *)swi(3);
              uVar30 = (*pcVar26)();
              return (bool)uVar30;
            }
            pFVar55 = (FSourceEffectChainEntry *)
                      (*(longlong *)(lVar57 + 0x28) + (longlong)(int)uVar52 * 0x10);
            if (((local_608.SourceEffectChain.AllocatorInstance.Data <= pFVar55) &&
                (pFVar55 < (FSourceEffectChainEntry *)
                           (local_608.SourceEffectChain.AllocatorInstance.Data +
                           (longlong)local_608.SourceEffectChain.ArrayMax * 0x10))) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar32)) {
              pcVar26 = (code *)swi(3);
              uVar30 = (*pcVar26)();
              return (bool)uVar30;
            }
            iVar34 = local_608.SourceEffectChain.ArrayNum;
            if (local_608.SourceEffectChain.ArrayNum == local_608.SourceEffectChain.ArrayMax) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_608.SourceEffectChain.AllocatorInstance,
                                  &local_608.SourceEffectChain.ArrayMax);
            }
            local_608.SourceEffectChain.ArrayNum = iVar34 + 1;
            FSourceEffectChainEntry::FSourceEffectChainEntry
                      ((FSourceEffectChainEntry *)
                       (local_608.SourceEffectChain.AllocatorInstance.Data + (longlong)iVar34 * 0x10
                       ),pFVar55);
            lVar57 = this->_padding_;
            uVar52 = uVar52 + 1;
            bVar4 = *(byte *)(*(longlong *)(lVar57 + 0x48) + 0x38);
            bVar51 = bVar4 & 1;
            local_608._688_8_ =
                 CONCAT62(local_608._690_6_,CONCAT11(bVar4,local_608.bIs3D)) & 0xffffffffffff01ff;
          } while ((int)uVar52 < *(int *)(*(longlong *)(lVar57 + 0x48) + 0x30));
        }
        if (bVar51 != 0) {
          LOCK();
          this->bIsEffectTailsDone = (FThreadSafeBool)0x0;
          UNLOCK();
        }
        if (pUVar59->bIsSourceBus != '\0') {
          pUVar46 = Z_Construct_UClass_USoundSourceBus_NoRegister();
          iVar34 = (int)pUVar46->_padding_;
          if (((*(int *)(pUVar59->_padding_ + 0x38) < iVar34) ||
              ((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar59->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
               &pUVar46->_padding_)) || (pUVar59 == (USoundWave *)0x0)) {
            pFVar44 = GetTypeName<USoundSourceBus>(&local_630);
            if ((pFVar44->Data).ArrayNum == 0) {
              pwVar54 = L"";
            }
            else {
              pwVar54 = (wchar_t *)(pFVar44->Data).AllocatorInstance.Data;
            }
            pFVar44 = GetFullNameForCastLogError<USoundWave>(&local_640,pUVar59);
            if ((pFVar44->Data).ArrayNum != 0) {
              pwVar60 = (wchar_t *)(pFVar44->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar60,pwVar54);
          }
          this_02 = (UObjectBaseUtility *)pUVar59[1]._padding_;
          if (this_02 == (UObjectBaseUtility *)0x0) {
            local_608.AudioBusId = *(uint *)((longlong)&pUVar59->_padding_ + 4);
            local_608.AudioBusChannels = pUVar59->NumChannels;
            pFVar44 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar59,&local_760,(UObject *)0x0);
            if (&local_608.AudioBusName != pFVar44) {
              if (local_608.AudioBusName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_608.AudioBusName.Data.AllocatorInstance.Data);
              }
              local_608.AudioBusName.Data.AllocatorInstance.Data =
                   (pFVar44->Data).AllocatorInstance.Data;
              (pFVar44->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_608.AudioBusName.Data.ArrayNum = (pFVar44->Data).ArrayNum;
              local_608.AudioBusName.Data.ArrayMax = (pFVar44->Data).ArrayMax;
              (pFVar44->Data).ArrayNum = 0;
              (pFVar44->Data).ArrayMax = 0;
            }
          }
          else {
            local_608.AudioBusId = *(uint *)&this_02->field_0xc;
            local_608.AudioBusChannels = (byte)this_02[1].field_0x8 + 1;
            pFVar44 = UObjectBaseUtility::GetPathName(this_02,&local_770,(UObject *)0x0);
            local_760.Data.AllocatorInstance.Data = local_770.Data.AllocatorInstance.Data;
            if (&local_608.AudioBusName != pFVar44) {
              if (local_608.AudioBusName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_608.AudioBusName.Data.AllocatorInstance.Data);
              }
              local_608.AudioBusName.Data.AllocatorInstance.Data =
                   (pFVar44->Data).AllocatorInstance.Data;
              (pFVar44->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_608.AudioBusName.Data.ArrayNum = (pFVar44->Data).ArrayNum;
              local_608.AudioBusName.Data.ArrayMax = (pFVar44->Data).ArrayMax;
              (pFVar44->Data).ArrayNum = 0;
              (pFVar44->Data).ArrayMax = 0;
              local_760.Data.AllocatorInstance.Data = local_770.Data.AllocatorInstance.Data;
            }
          }
          if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_760.Data.AllocatorInstance.Data);
          }
          cVar31 = (**(code **)(pUVar59->_padding_ + 0x310))(pUVar59);
          if (cVar31 == '\0') {
            local_608.SourceBusDuration = (float)(**(code **)(pUVar59->_padding_ + 0x2d8))(pUVar59);
          }
        }
      }
      lVar57 = this->_padding_;
      local_608._688_6_ = CONCAT15(*(undefined1 *)(lVar57 + 0xcc),local_608._688_5_) & 0x1ffffffffff
      ;
      local_608.bEnableBaseSubmix = false;
      local_608.bEnableSubmixSends = false;
      if ((*(byte *)(lVar57 + 0xcc) & 2) == 0) {
LAB_1465072a7:
        local_608._688_8_ = local_608._688_8_ & 0xffffffffffff;
      }
      else {
        local_608.bEnableBaseSubmix = true;
        local_608.bEnableSubmixSends = false;
        if (bForceAudioLinkOnAllSourcesCVAr != 0) goto LAB_1465072a7;
      }
      local_608._688_8_ =
           CONCAT17((char)(*(uint *)(lVar57 + 0xcc) >> 2),local_608._688_7_) & 0x1ffffffffffffff;
      if (*(longlong *)(lVar57 + 0x60) == 0) {
        local_608.ActiveSoundPlayOrder = 0xffffffff;
        local_608.PlayOrder = *(uint *)(lVar57 + 0x178);
      }
      else {
        local_608.ActiveSoundPlayOrder = *(uint *)(*(longlong *)(lVar57 + 0x60) + 0x5c);
        local_608.PlayOrder = *(uint *)(lVar57 + 0x178);
      }
      piVar2 = &(this->DynamicBusSendInfos).ArrayMax;
      this->bPreviousBusEnablement = *(uint *)(lVar57 + 0xcc) & 1;
      pFVar19 = (FDynamicBusSendInfo *)(this->DynamicBusSendInfos).AllocatorInstance.Data;
      iVar34 = (this->DynamicBusSendInfos).ArrayNum;
      if (*piVar2 < 0) {
        DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int>(pFVar19,iVar34);
        (this->DynamicBusSendInfos).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc0,8,0,&(this->DynamicBusSendInfos).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int>(pFVar19,iVar34);
        (this->DynamicBusSendInfos).ArrayNum = 0;
      }
      pTVar49 = (TReferenceControllerBase<1> *)0x0;
      SetupBusData(this,local_608.AudioBusSends,local_608.bEnableBusSends);
      if ((local_608.bUseHRTFSpatialization == false) || (local_608.bIsExternalSend == false)) {
        this_06 = (FMixerSubmix *)0x0;
        pTVar67 = (TReferenceControllerBase<1> *)0x0;
        local_8d8.Object = (FMixerSubmix *)0x0;
        local_8d8.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pUVar20 = *(USoundSubmixBase **)(this->_padding_ + 0x10);
        if (pUVar20 == (USoundSubmixBase *)0x0) {
          pTVar47 = FMixerDevice::GetBaseDefaultSubmix(this->MixerDevice,&local_730);
          if (&local_8d8 != pTVar47) {
            this_06 = pTVar47->Object;
            pTVar67 = (pTVar47->WeakReferenceCount).ReferenceController;
            pTVar47->Object = (FMixerSubmix *)0x0;
            (pTVar47->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_8d8.Object = this_06;
            local_8d8.WeakReferenceCount.ReferenceController = pTVar67;
          }
        }
        else {
          pTVar47 = FMixerDevice::GetSubmixInstance(this->MixerDevice,&local_740,pUVar20);
          local_730.WeakReferenceCount.ReferenceController =
               local_740.WeakReferenceCount.ReferenceController;
          if (&local_8d8 != pTVar47) {
            this_06 = pTVar47->Object;
            pTVar67 = (pTVar47->WeakReferenceCount).ReferenceController;
            pTVar47->Object = (FMixerSubmix *)0x0;
            (pTVar47->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_8d8.Object = this_06;
            local_8d8.WeakReferenceCount.ReferenceController = pTVar67;
          }
        }
        if (local_730.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_730.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar3 == (atomic<int>)0x1) &&
             (local_730.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             )) {
            (**(code **)((local_730.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_730.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar67->WeakReferenceCount = (atomic<int>)((int)pTVar67->WeakReferenceCount + 1);
          UNLOCK();
        }
        uStack_610 = 0;
        local_618 = 0;
        local_8a8 = (TReferenceControllerBase<1> *)0x0;
        local_8b0 = 0;
        local_8b4 = (FScriptContainerElement)0x1;
        local_8b8 = (float)local_608.bEnableBaseSubmix;
        pTVar61 = pTVar67;
        local_8c8.Object = this_06;
        local_8c8.WeakReferenceCount.ReferenceController = pTVar67;
        if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar67->SharedReferenceCount;
          do {
            pTVar61 = pTVar49;
            if (aVar3 == (atomic<int>)0x0) goto LAB_1465075e5;
            LOCK();
            aVar35 = pTVar67->SharedReferenceCount;
            bVar32 = aVar3 == aVar35;
            if (bVar32) {
              pTVar67->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar35 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar35;
          } while (!bVar32);
          pTVar61 = pTVar67;
          if (this_06 != (FMixerSubmix *)0x0) {
            pTVar49 = (TReferenceControllerBase<1> *)FMixerSubmix::GetSoundfieldFactory(this_06);
          }
        }
LAB_1465075e5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61)
        ;
        local_8a8 = pTVar49;
        if (((local_608.SubmixSends.AllocatorInstance.Data <= &local_8c8) &&
            (&local_8c8 <
             (TWeakPtr<Audio::FMixerSubmix,1> *)
             (local_608.SubmixSends.AllocatorInstance.Data +
             (longlong)local_608.SubmixSends.ArrayMax * 0x28))) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar32)) {
          pcVar26 = (code *)swi(3);
          uVar30 = (*pcVar26)();
          return (bool)uVar30;
        }
        iVar34 = local_608.SubmixSends.ArrayNum;
        if (local_608.SubmixSends.ArrayNum == local_608.SubmixSends.ArrayMax) {
          iVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_608.SubmixSends.AllocatorInstance,
                              &local_608.SubmixSends.ArrayMax);
        }
        lVar57 = (longlong)iVar34;
        local_608.SubmixSends.ArrayNum = iVar34 + 1;
        *(FMixerSubmix **)(local_608.SubmixSends.AllocatorInstance.Data + lVar57 * 0x28) =
             local_8c8.Object;
        *(TReferenceControllerBase<1> **)
         (local_608.SubmixSends.AllocatorInstance.Data + lVar57 * 0x28 + 8) =
             local_8c8.WeakReferenceCount.ReferenceController;
        if (local_8c8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_8c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_8c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(float *)(local_608.SubmixSends.AllocatorInstance.Data + lVar57 * 0x28 + 0x10) = local_8b8;
        local_608.SubmixSends.AllocatorInstance.Data[lVar57 * 0x28 + 0x14] = local_8b4;
        *(undefined4 *)(local_608.SubmixSends.AllocatorInstance.Data + lVar57 * 0x28 + 0x18) =
             local_8b0;
        *(TReferenceControllerBase<1> **)
         (local_608.SubmixSends.AllocatorInstance.Data + lVar57 * 0x28 + 0x20) = local_8a8;
        this->bPreviousBaseSubmixEnablement = (uint)local_608.bEnableBaseSubmix;
        if (local_8c8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_8c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar3 == (atomic<int>)0x1) &&
             (local_8c8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             )) {
            (**(code **)((local_8c8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_8c8.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar67->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          local_7a0.WeakReferenceCount.ReferenceController = pTVar67;
          goto joined_r0x00014650772c;
        }
      }
      else {
        FMixerDevice::GetSubmixInstance
                  (this->MixerDevice,&local_7a0,*(USoundSubmixBase **)(this->_padding_ + 0x10));
        FVar64.ReferenceController = local_7a0.WeakReferenceCount.ReferenceController;
        if (local_7a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar3 = (local_7a0.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              FVar64.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1465073c1;
            }
            LOCK();
            aVar35 = (local_7a0.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar32 = aVar3 == aVar35;
            if (bVar32) {
              (local_7a0.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar35 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar35;
          } while (!bVar32);
          if (local_7a0.Object != (FMixerSubmix *)0x0) {
            bVar32 = FMixerSubmix::IsSoundfieldSubmix(local_7a0.Object);
            if (((bVar32) ||
                (bVar32 = FMixerSubmix::IsSoundfieldEndpointSubmix(local_7a0.Object), bVar32)) &&
               (2 < (byte)LogAudioMixer._0_1_)) {
              FWaveInstance::GetName(pFVar11,&local_750);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
              if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_750.Data.AllocatorInstance.Data);
              }
            }
            this->bBypassingSubmixModulation = true;
          }
        }
LAB_1465073c1:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar64.ReferenceController);
        if (local_7a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_7a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
joined_r0x00014650772c:
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((local_7a0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_7a0.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
      lVar57 = this->_padding_;
      lVar21 = *(longlong *)(lVar57 + 0x18);
      iVar34 = *(int *)(lVar57 + 0x20);
      puVar41 = (undefined8 *)(lVar21 + 8);
      while( true ) {
        if (*(int *)(lVar57 + 0x20) != iVar34) {
          local_957 = 0;
          `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_957);
        }
        if (puVar41 + -1 == (undefined8 *)((longlong)iVar34 * 0xb8 + lVar21)) break;
        if ((USoundSubmixBase *)*puVar41 != (USoundSubmixBase *)0x0) {
          local_908 = 0;
          pTVar49 = (TReferenceControllerBase<1> *)0x0;
          local_904 = (FScriptContainerElement)0x0;
          local_918.Object = (FMixerSubmix *)0x0;
          local_918.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_900 = 0;
          local_8f8 = (TReferenceControllerBase<1> *)0x0;
          pTVar47 = FMixerDevice::GetSubmixInstance
                              (this->MixerDevice,&local_720,(USoundSubmixBase *)*puVar41);
          FVar56.ReferenceController = local_918.WeakReferenceCount.ReferenceController;
          FVar64.ReferenceController = local_918.WeakReferenceCount.ReferenceController;
          if (&local_918 != pTVar47) {
            local_918.Object = pTVar47->Object;
            FVar64.ReferenceController = (pTVar47->WeakReferenceCount).ReferenceController;
            pTVar47->Object = (FMixerSubmix *)0x0;
            (pTVar47->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (local_918.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_918.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                plVar6 = &(local_918.WeakReferenceCount.ReferenceController)->_padding_;
                local_918.WeakReferenceCount.ReferenceController = FVar64.ReferenceController;
                (**(code **)(*plVar6 + 8))(FVar56.ReferenceController,1);
                FVar64.ReferenceController = local_918.WeakReferenceCount.ReferenceController;
              }
            }
          }
          local_918.WeakReferenceCount.ReferenceController = FVar64.ReferenceController;
          if (local_720.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar1 = &(local_720.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if ((aVar3 == (atomic<int>)0x1) &&
               (local_720.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0)) {
              (**(code **)((local_720.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_720.WeakReferenceCount.ReferenceController,1);
            }
          }
          FVar64.ReferenceController = local_918.WeakReferenceCount.ReferenceController;
          local_900 = (uint)(*(char *)(puVar41 + 0x15) == '\x01');
          if ((*(byte *)(this->_padding_ + 0xcc) & 4) == 0) {
            local_908 = 0;
          }
          else {
            local_908 = *(undefined4 *)(puVar41 + 1);
          }
          local_904 = (FScriptContainerElement)0x0;
          FVar56.ReferenceController = FVar64.ReferenceController;
          if (local_918.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            aVar3 = (local_918.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              FVar56.ReferenceController = pTVar49;
              if (aVar3 == (atomic<int>)0x0) goto LAB_1465078a5;
              LOCK();
              aVar35 = (local_918.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar32 = aVar3 == aVar35;
              if (bVar32) {
                (local_918.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar3 + 1);
                aVar35 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar35;
            } while (!bVar32);
            FVar56.ReferenceController = FVar64.ReferenceController;
            if (local_918.Object != (FMixerSubmix *)0x0) {
              pTVar49 = (TReferenceControllerBase<1> *)
                        FMixerSubmix::GetSoundfieldFactory(local_918.Object);
            }
          }
LAB_1465078a5:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar56.ReferenceController);
          local_8f8 = pTVar49;
          if (((local_608.SubmixSends.AllocatorInstance.Data <= &local_918) &&
              (&local_918 <
               (TWeakPtr<Audio::FMixerSubmix,1> *)
               (local_608.SubmixSends.AllocatorInstance.Data +
               (longlong)local_608.SubmixSends.ArrayMax * 0x28))) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar32)) {
            pcVar26 = (code *)swi(3);
            uVar30 = (*pcVar26)();
            return (bool)uVar30;
          }
          iVar36 = local_608.SubmixSends.ArrayNum;
          if (local_608.SubmixSends.ArrayNum == local_608.SubmixSends.ArrayMax) {
            iVar36 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_608.SubmixSends.AllocatorInstance,
                                &local_608.SubmixSends.ArrayMax);
          }
          lVar48 = (longlong)iVar36;
          local_608.SubmixSends.ArrayNum = iVar36 + 1;
          *(FMixerSubmix **)(local_608.SubmixSends.AllocatorInstance.Data + lVar48 * 0x28) =
               local_918.Object;
          *(TReferenceControllerBase<1> **)
           (local_608.SubmixSends.AllocatorInstance.Data + lVar48 * 0x28 + 8) =
               local_918.WeakReferenceCount.ReferenceController;
          if (local_918.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            (local_918.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_918.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          *(undefined4 *)(local_608.SubmixSends.AllocatorInstance.Data + lVar48 * 0x28 + 0x10) =
               local_908;
          local_608.SubmixSends.AllocatorInstance.Data[lVar48 * 0x28 + 0x14] = local_904;
          *(uint *)(local_608.SubmixSends.AllocatorInstance.Data + lVar48 * 0x28 + 0x18) = local_900
          ;
          *(TReferenceControllerBase<1> **)
           (local_608.SubmixSends.AllocatorInstance.Data + lVar48 * 0x28 + 0x20) = local_8f8;
          if (local_918.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar1 = &(local_918.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if ((aVar3 == (atomic<int>)0x1) &&
               (local_918.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0)) {
              (**(code **)((local_918.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_918.WeakReferenceCount.ReferenceController,1);
            }
          }
        }
        puVar41 = puVar41 + 0x17;
      }
      iVar34 = local_608.SubmixSends.ArrayNum;
      uVar53 = (ulonglong)local_608.SubmixSends.ArrayNum;
      pTVar47 = (TWeakPtr<Audio::FMixerSubmix,1> *)
                (local_608.SubmixSends.AllocatorInstance.Data + uVar53 * 0x28);
      FVar62.Data = local_608.SubmixSends.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar53 != iVar34) {
          local_956[0] = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_956);
        }
        if ((TWeakPtr<Audio::FMixerSubmix,1> *)FVar62.Data == pTVar47) break;
        pTVar49 = (((TWeakPtr<Audio::FMixerSubmix,1> *)FVar62.Data)->WeakReferenceCount).
                  ReferenceController;
        if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar49->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar49 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146507a54;
            }
            LOCK();
            aVar35 = pTVar49->SharedReferenceCount;
            bVar32 = aVar3 == aVar35;
            if (bVar32) {
              pTVar49->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar35 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar35;
          } while (!bVar32);
          if (((TWeakPtr<Audio::FMixerSubmix,1> *)FVar62.Data)->Object != (FMixerSubmix *)0x0) {
            AcquireSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
            (this->ChannelMap).ArrayNum = 0;
            if ((this->ChannelMap).ArrayMax < 0) {
              UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,0,&(this->ChannelMap).AllocatorInstance,0,&(this->ChannelMap).ArrayMax)
              ;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
          }
        }
LAB_146507a54:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar49)
        ;
        uVar53 = local_608.SubmixSends._8_8_ & 0xffffffff;
        FVar62.Data = (FScriptContainerElement *)
                      &((TWeakPtr<Audio::FMixerSubmix,1> *)((longlong)FVar62.Data + 0x20))->
                       WeakReferenceCount;
      }
      pFVar44 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_710);
      if (&local_608.DebugName != pFVar44) {
        if (local_608.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_608.DebugName.Data.AllocatorInstance.Data);
        }
        local_608.DebugName.Data.AllocatorInstance.Data = (pFVar44->Data).AllocatorInstance.Data;
        (pFVar44->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_608.DebugName.Data.ArrayNum = (pFVar44->Data).ArrayNum;
        local_608.DebugName.Data.ArrayMax = (pFVar44->Data).ArrayMax;
        (pFVar44->Data).ArrayNum = 0;
        (pFVar44->Data).ArrayMax = 0;
      }
      if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.Data.AllocatorInstance.Data);
      }
      FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_7b0);
      this_04 = UEngine::GetAudioDeviceManager(GEngine);
      this_05 = FAudioDeviceManager::GetDebugger(this_04);
      pFVar44 = FAudioDebugger::GetAudioMixerDebugSoundName(this_05);
      local_8e8.Data = (FScriptContainerElement *)0x0;
      local_8e0 = (pFVar44->Data).ArrayNum;
      lVar57 = (longlong)local_8e0;
      pFVar22 = (pFVar44->Data).AllocatorInstance.Data;
      if (local_8e0 == 0) {
        local_8dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_8e0,0,&local_8e8,local_8e0,&local_8dc);
        memcpy(local_8e8.Data,pFVar22,lVar57 * 2);
      }
      if (1 < local_8e0) {
        if (local_8e0 == 0) {
          FVar62.Data = (FScriptContainerElement *)L"";
        }
        else {
          FVar62.Data = local_8e8.Data;
          if (local_8e8.Data == (FScriptContainerElement *)0x0) goto LAB_146507c0e;
        }
        sVar50 = wcslen((wchar_t *)FVar62.Data);
        iVar34 = ::FString::Find(&local_7b0,(wchar_t *)FVar62.Data,(int)sVar50,IgnoreCase,FromStart,
                                 -1);
        if (iVar34 != -1) {
          this->bDebugMode = 1;
          local_608.bIsDebugMode = true;
        }
      }
LAB_146507c0e:
      pUVar59 = local_940;
      if (5 < (byte)LogAudioTiming._0_1_) {
        pFVar44 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_700);
        if ((pFVar44->Data).ArrayNum == 0) {
          pwVar60 = L"";
        }
        else {
          pwVar60 = (wchar_t *)(pFVar44->Data).AllocatorInstance.Data;
        }
        bVar32 = MatchesLogFilter(pwVar60);
        if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_700.Data.AllocatorInstance.Data);
        }
        pUVar59 = local_940;
        if (bVar32) {
          FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_6f0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
          if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
          }
        }
      }
      bVar32 = FWaveInstance::GetUseSpatialization((FWaveInstance *)this->_padding_);
      if (bVar32) {
        bVar32 = UseObjectBasedSpatialization(this);
        if (bVar32) {
          uVar52 = 0;
        }
        else if ((this->AudioLink).Object == (IAudioLinkSourcePushed *)0x0) {
          uVar52 = 2;
          if (2 < *(int *)((longlong)&local_888->_padding_ + 4)) {
            uVar52 = 0;
          }
        }
        else {
          uVar52 = 2;
        }
      }
      else {
        uVar52 = 0;
      }
      uVar33 = *(uint *)&this->field_0x2bc;
      this->bIs3D = uVar52 >> 1;
      local_608._688_8_ =
           CONCAT71(local_608._689_7_,(char)((uVar33 & 0xfffffffd | uVar52) >> 1)) &
           0xffffffffffffff01;
      pFVar40 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                          ((FAudioDevice *)this->MixerDevice,&local_690);
      if (((pFVar40->MaxChannelsSupportedBySpatializationPlugin <
            *(int *)((longlong)&this->_padding_ + 4)) ||
          ((*(byte *)(this->_padding_ + 0x5c0) & 2) == 0)) ||
         (*(longlong *)(this->_padding_ + 0xd8) == 0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.SpatializationPlugin.SharedReferenceCount.ReferenceController);
        local_608.SpatializationPluginSettings = (USpatializationPluginSourceSettingsBase *)0x0;
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.SpatializationPlugin.SharedReferenceCount.ReferenceController);
        local_608.SpatializationPluginSettings =
             *(USpatializationPluginSourceSettingsBase **)(this->_padding_ + 0xd8);
      }
      iVar34 = *(int *)((longlong)&this->_padding_ + 4);
      if (((iVar34 != 1) && (iVar34 != 2)) ||
         (((*(byte *)(this->_padding_ + 0x5c0) & 4) == 0 ||
          (local_608.OcclusionPluginSettings =
                *(UOcclusionPluginSourceSettingsBase **)(this->_padding_ + 0xe0), iVar36 = iVar34,
          local_608.OcclusionPluginSettings == (UOcclusionPluginSourceSettingsBase *)0x0)))) {
        local_608.OcclusionPluginSettings = (UOcclusionPluginSourceSettingsBase *)0x0;
        iVar36 = *(int *)((longlong)&this->_padding_ + 4);
      }
      iVar28 = iVar34;
      if (((iVar34 != 1) && (iVar28 = iVar36, iVar34 != 2)) ||
         ((iVar36 = iVar28, (*(byte *)(this->_padding_ + 0x5c0) & 8) == 0 ||
          (local_608.ReverbPluginSettings =
                *(UReverbPluginSourceSettingsBase **)(this->_padding_ + 0xe8),
          local_608.ReverbPluginSettings == (UReverbPluginSourceSettingsBase *)0x0)))) {
        local_608.ReverbPluginSettings = (UReverbPluginSourceSettingsBase *)0x0;
      }
      if ((((iVar36 != 1) && (iVar36 != 2)) || ((*(byte *)(this->_padding_ + 0x5c0) & 0x10) == 0))
         || (local_608.SourceDataOverridePluginSettings =
                  *(USourceDataOverridePluginSourceSettingsBase **)(this->_padding_ + 0xf0),
            local_608.SourceDataOverridePluginSettings ==
            (USourceDataOverridePluginSourceSettingsBase *)0x0)) {
        local_608.SourceDataOverridePluginSettings =
             (USourceDataOverridePluginSourceSettingsBase *)0x0;
      }
      pFVar23 = this->MixerBuffer;
      fVar66 = USoundWave::GetSampleRateForCurrentPlatform(pUVar59);
      pFVar23->SampleRate = (int)fVar66;
      pFVar23 = this->MixerBuffer;
      uVar52 = USoundWave::GetNumFrames(pUVar59);
      pFVar23->NumFrames = uVar52;
      pFVar23 = this->MixerBuffer;
      TVar5 = pFVar23->BufferType;
      if ((TVar5 == PCM) || (TVar5 == PCMPreview)) {
        local_858 = pFVar23->Data;
        uStack_850 = pFVar23->DataSize;
        uStack_84c = 0;
        uStack_848 = 0;
        uStack_844 = 0;
        if (((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar32)) {
          pcVar26 = (code *)swi(3);
          uVar30 = (*pcVar26)();
          return (bool)uVar30;
        }
        pFVar24 = (this->MixerSourceBuffer).Object;
        if (((pFVar24->BufferType != PCM) && (pFVar24->BufferType != PCMPreview)) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("BufferType == EBufferType::PCM || BufferType == EBufferType::PCMPreview"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                ,0xa8,L""), bVar32)) {
          pcVar26 = (code *)swi(3);
          uVar30 = (*pcVar26)();
          return (bool)uVar30;
        }
        (pFVar24->RawPCMDataBuffer).Data = local_858;
        (pFVar24->RawPCMDataBuffer).DataSize = uStack_850;
        (pFVar24->RawPCMDataBuffer).LoopCount = uStack_84c;
        (pFVar24->RawPCMDataBuffer).CurrentSample = uStack_848;
        (pFVar24->RawPCMDataBuffer).NumSamples = uStack_844;
      }
      else if ((TVar5 - PCMRealTime < 2) && (pUVar59->CachedRealtimeFirstBuffer != (uchar *)0x0)) {
        local_938.Data = (FScriptContainerElement *)0x0;
        local_930 = 0;
        uVar52 = pUVar59->NumPrecacheFrames * pUVar59->NumChannels * 4;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar52,&local_938,(int *)&local_930,(int *)((longlong)&local_930 + 4));
        memcpy(local_938.Data,pUVar59->CachedRealtimeFirstBuffer,(ulonglong)uVar52);
        if (((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar32)) {
          pcVar26 = (code *)swi(3);
          uVar30 = (*pcVar26)();
          return (bool)uVar30;
        }
        pFVar24 = (this->MixerSourceBuffer).Object;
        pTVar58 = &pFVar24->CachedRealtimeFirstBuffer;
        if (pTVar58 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_938) {
          pFVar22 = (pTVar58->AllocatorInstance).Data;
          if (pFVar22 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar22);
          }
          (pTVar58->AllocatorInstance).Data = local_938.Data;
          local_938.Data = (FScriptContainerElement *)0x0;
          (pFVar24->CachedRealtimeFirstBuffer).ArrayNum = (int)local_930;
          (pFVar24->CachedRealtimeFirstBuffer).ArrayMax = local_930._4_4_;
          local_930 = 0;
        }
        if (local_938.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_938.Data);
        }
      }
      pIVar25 = this->MixerBuffer->DecompressionState;
      this->MixerBuffer->DecompressionState = (ICompressedAudioInfo *)0x0;
      if (((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar26 = (code *)swi(3);
        uVar30 = (*pcVar26)();
        return (bool)uVar30;
      }
      FVar27.ReferenceController =
           local_608.MixerSourceBuffer.SharedReferenceCount.ReferenceController;
      pFVar24 = (this->MixerSourceBuffer).Object;
      if (pFVar24->DecompressionState == (ICompressedAudioInfo *)0x0) {
        pFVar24->DecompressionState = pIVar25;
      }
      pFVar24 = (this->MixerSourceBuffer).Object;
      pTVar49 = (this->MixerSourceBuffer).SharedReferenceCount.ReferenceController;
      if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar49->SharedReferenceCount = (atomic<int>)((int)pTVar49->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_7d8 = local_608.MixerSourceBuffer.Object;
      pTStack_7d0 = local_608.MixerSourceBuffer.SharedReferenceCount.ReferenceController;
      local_608.MixerSourceBuffer.Object = pFVar24;
      local_608.MixerSourceBuffer.SharedReferenceCount.ReferenceController = pTVar49;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar27.ReferenceController);
      local_7c8 = 0;
      FStack_7c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MixerSourceBuffer != (TSharedPtr<Audio::FMixerSourceBuffer,1> *)&local_7c8) {
        (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MixerSourceBuffer).SharedReferenceCount,&FStack_7c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_7c0.ReferenceController);
      bVar32 = FMixerSourceVoice::Init(this->MixerSourceVoice,&local_608);
      if (!bVar32) {
        this->InitializationState = NotInitialized;
        if (2 < (byte)LogAudioMixer._0_1_) {
          FWaveInstance::GetName(local_928,&local_6e0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
          }
        }
        if (local_8e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8e8.Data);
        }
        if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
        }
        FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(&local_608);
        if ((local_948 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_948 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_948 & 4) != 0) {
          FThreadStats::AddMessage(local_950,CycleScopeEnd);
        }
        local_948 = 0;
        FCsvProfiler::EndStat("InitSources",local_920);
        goto LAB_146508320;
      }
      if (*(longlong *)(this->_padding_ + 0xf0) != 0) {
        iVar34 = FMixerSourceVoice::GetSourceId(this->MixerSourceVoice);
        lVar57 = this->_padding_;
        if ((*(longlong *)(lVar57 + 0xf0) == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar32)) {
          pcVar26 = (code *)swi(3);
          uVar30 = (*pcVar26)();
          return (bool)uVar30;
        }
        plVar6 = *(longlong **)(lVar57 + 0xf0);
        (**(code **)(*plVar6 + 0x10))
                  (plVar6,iVar34,&local_608.AudioComponentUserID,
                   local_608.SourceDataOverridePluginSettings);
      }
      this->InitializationState = Initialized;
      (**(code **)(this->_padding_ + 0x28))(this);
      bVar32 = true;
      if (local_8e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data);
      }
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
      FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(&local_608);
    }
    if ((local_948 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_948 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_948 & 4) != 0) {
      FThreadStats::AddMessage(local_950,CycleScopeEnd);
    }
    local_948 = 0;
    FCsvProfiler::EndStat("InitSources",local_920);
  }
LAB_14650832b:
  FMemScope::~FMemScope(&local_7b8);
  FLLMScope::~FLLMScope(&local_8ec);
  if (bVar65) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar32;
}

// Is3D @ 14650e280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::Is3D(FMixerSource *this,FSoundBuffer *param_1)

{
  bool bVar1;
  
  bVar1 = FWaveInstance::GetUseSpatialization((FWaveInstance *)this->_padding_);
  if (bVar1) {
    bVar1 = UseObjectBasedSpatialization(this);
    if (!bVar1) {
      if ((this->AudioLink).Object == (IAudioLinkSourcePushed *)0x0) {
        return param_1->NumChannels < 3;
      }
      return true;
    }
  }
  return false;
}

// IsFinished @ 14650e9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::IsFinished(FMixerSource *this)

{
  if ((this->_padding_ & 8) != 0) {
    return false;
  }
  if (this->InitializationState != NotInitialized) {
    if (this->InitializationState == Initializing) {
      return false;
    }
    if ((this->_padding_ != 0) && (this->MixerSourceVoice != (FMixerSourceVoice *)0x0)) {
      if ((this->bIsDone == (FThreadSafeBool)0x0) ||
         (this->bIsEffectTailsDone == (FThreadSafeBool)0x0)) {
        if (this->bLoopCallback == (FThreadSafeBool)0x0) {
          return false;
        }
        if (((FWaveInstance *)this->_padding_)->LoopingMode != LOOP_WithNotification) {
          return false;
        }
        FWaveInstance::NotifyFinished((FWaveInstance *)this->_padding_,false);
        LOCK();
        this->bLoopCallback = (FThreadSafeBool)0x0;
        UNLOCK();
        return false;
      }
      FWaveInstance::NotifyFinished((FWaveInstance *)this->_padding_,false);
      LOCK();
      this->bIsStopping = (FThreadSafeBool)0x0;
      UNLOCK();
    }
  }
  return true;
}

// IsInitialized @ 14650ea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::IsInitialized(FMixerSource *this)

{
  return this->InitializationState == Initialized;
}

// IsPreparedToInit @ 14650eaf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::IsPreparedToInit(FMixerSource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  Type TVar1;
  IAudioTask *pIVar2;
  FWaveInstance *this_00;
  USoundWave *pUVar3;
  ICompressedAudioInfo *pIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  FMixerSourceBuffer *pFVar10;
  FString *pFVar11;
  byte bVar12;
  wchar_t *pwVar13;
  bool bVar14;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId944,"AudioMixerSource::IsPreparedToInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
               ,0x3b0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId944);
  }
  if ((this->MixerBuffer == (FMixerBuffer *)0x0) ||
     (cVar6 = (**(code **)(this->MixerBuffer->_padding_ + 0x40))(), cVar6 == '\0')) {
    if (5 < (byte)LogAudioTiming._0_1_) {
      pFVar11 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_68);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      bVar7 = MatchesLogFilter(pwVar13);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        cVar6 = (**(code **)(this->MixerBuffer->_padding_ + 0x40))();
        pwVar13 = L"true";
        if (cVar6 == '\0') {
          pwVar13 = L"false";
        }
        ::FString::FString(&local_b8,pwVar13);
        FWaveInstance::GetName((FWaveInstance *)this->_padding_,local_58);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_14650f02f:
    bVar7 = false;
  }
  else {
    if ((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerSourceBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x3b4,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    pFVar10 = (this->MixerSourceBuffer).Object;
    lpCriticalSection = &pFVar10->DecodeTaskCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar2 = pFVar10->AsyncRealtimeAudioTask;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pIVar2 != (IAudioTask *)0x0) {
      pFVar10 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
      bVar7 = FMixerSourceBuffer::IsAsyncTaskDone(pFVar10);
      if (5 < (byte)LogAudioTiming._0_1_) {
        pFVar11 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_a8);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        bVar9 = MatchesLogFilter(pwVar13);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pwVar13 = L"true";
          if (!bVar7) {
            pwVar13 = L"false";
          }
          ::FString::FString(&local_c8,pwVar13);
          FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_98);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      goto LAB_14650f032;
    }
    this_00 = (FWaveInstance *)this->_padding_;
    if (this_00 != (FWaveInstance *)0x0) {
      pUVar3 = (this_00->WaveData).field0_0x0.DebugPtr;
      if (((pUVar3->bIsSourceBus == '\0') &&
          ((((TVar1 = this->MixerBuffer->BufferType, TVar1 == PCMRealTime || (TVar1 == Streaming))
            && (pUVar3 != (USoundWave *)0x0)) &&
           ((bVar12 = pUVar3->bProcedural, bVar12 == 0 || (DirectProceduralRenderingCVar == 0))))))
         && ((0.0 < this_00->StartTime ||
             ((bVar12 != 0 || (pUVar3->CachedRealtimeFirstBuffer == (uchar *)0x0)))))) {
        bVar7 = FWaveInstance::IsSeekable(this_00);
        if (bVar7) {
          (**(code **)(this->MixerBuffer->_padding_ + 0x28))
                    (this->MixerBuffer,*(undefined4 *)(this->_padding_ + 200));
        }
        if (((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("MixerSourceBuffer.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                               ,0x3d7,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (5 < (byte)LogAudioTiming._0_1_) {
          pFVar11 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_88);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          bVar7 = MatchesLogFilter(pwVar13);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_78);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
        pIVar4 = this->MixerBuffer->DecompressionState;
        pFVar10 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
        FMixerSourceBuffer::ReadMoreRealtimeData(pFVar10,pIVar4,0,Asynchronous);
        goto LAB_14650f02f;
      }
    }
    bVar7 = true;
  }
LAB_14650f032:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return bVar7;
}

// IsStopping @ 14650f310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::IsStopping(FMixerSource *this)

{
  return this->bIsStopping != (FThreadSafeBool)0x0;
}

// IsUsingObjectBasedSpatialization @ 14650f3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::IsUsingObjectBasedSpatialization(FMixerSource *this)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = UseObjectBasedSpatialization(this);
  if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
    bVar2 = FMixerSourceVoice::IsUsingHRTFSpatializer(this->MixerSourceVoice,true);
    bVar1 = bVar2 && bVar1;
  }
  return bVar1;
}

// OnBeginGenerate @ 1465123a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::OnBeginGenerate(FMixerSource *this)

{
  return;
}

// OnDone @ 146512bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::OnDone(FMixerSource *this)

{
  LOCK();
  *(undefined4 *)((longlong)&(this->SpatializationParams).EmitterWorldPosition.field0_0x0 + 0x14) =
       1;
  UNLOCK();
  return;
}

// OnEffectTailsDone @ 146512bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::OnEffectTailsDone(FMixerSource *this)

{
  LOCK();
  *(undefined4 *)&(this->SpatializationParams).EmitterWorldRotation.X = 1;
  UNLOCK();
  return;
}

// OnLoopEnd @ 1465131b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::OnLoopEnd(FMixerSource *this)

{
  LOCK();
  *(undefined4 *)((longlong)&(this->SpatializationParams).EmitterWorldPosition.field0_0x0 + 0x10) =
       1;
  UNLOCK();
  return;
}

// Pause @ 1465144a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::Pause(FMixerSource *this)

{
  if ((this->_padding_ != 0) && (this->bIsStopping == (FThreadSafeBool)0x0)) {
    if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
      FMixerSourceVoice::Pause(this->MixerSourceVoice);
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  }
  return;
}

// Play @ 146514b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::Play(FMixerSource *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_78;
  FString local_68 [2];
  
  if (this->_padding_ == 0) {
    return;
  }
  if (((this->_padding_ & 8) != 0) &&
     ((this->bIsStopping != (FThreadSafeBool)0x0 || (this->bIsDone != (FThreadSafeBool)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x000146514b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x40))();
    return;
  }
  if (this->bIsStopping != (FThreadSafeBool)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1034,"AudioMixerSource::Play",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
               ,0x40a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1034);
  }
  if (5 < (byte)LogAudioTiming._0_1_) {
    bVar1 = false;
    if ((FWaveInstance *)this->_padding_ == (FWaveInstance *)0x0) {
LAB_146514c70:
      bVar3 = bVar1;
      bVar1 = false;
    }
    else {
      pFVar4 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_78);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      bVar2 = MatchesLogFilter(pwVar6);
      bVar3 = true;
      bVar1 = true;
      if (!bVar2) goto LAB_146514c70;
      bVar1 = true;
    }
    if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      ::LexToString(this->InitializationState);
      pwVar6 = L"true";
      if ((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) {
        pwVar6 = L"false";
      }
      ::FString::FString(&local_78,pwVar6);
      FWaveInstance::GetName((FWaveInstance *)this->_padding_,local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar1 = false;
  pwVar6 = L"true";
  if ((this->MixerSourceVoice == (FMixerSourceVoice *)0x0) ||
     (this->InitializationState != Initialized)) goto LAB_146514f39;
  if (5 < (byte)LogAudioTiming._0_1_) {
    if ((FWaveInstance *)this->_padding_ == (FWaveInstance *)0x0) {
LAB_146514e0a:
      bVar3 = false;
    }
    else {
      bVar1 = true;
      pFVar4 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,local_68);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      bVar3 = MatchesLogFilter(pwVar5);
      if (!bVar3) goto LAB_146514e0a;
      bVar3 = true;
    }
    if ((bVar1) && (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      ::LexToString(this->InitializationState);
      if ((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) {
        pwVar6 = L"false";
      }
      ::FString::FString(&local_78,pwVar6);
      FWaveInstance::GetName((FWaveInstance *)this->_padding_,local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  FMixerSourceVoice::Play(this->MixerSourceVoice);
LAB_146514f39:
  LOCK();
  this->bIsStopping = (FThreadSafeBool)0x0;
  UNLOCK();
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf7;
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  LOCK();
  this->bLoopCallback = (FThreadSafeBool)0x0;
  UNLOCK();
  LOCK();
  this->bIsDone = (FThreadSafeBool)0x0;
  UNLOCK();
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrepareForInitialization @ 146515150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerSource::PrepareForInitialization(FMixerSource *this,FWaveInstance *param_1)

{
  TSharedPtr<Audio::FMixerSourceBuffer,1> *pTVar1;
  float fVar2;
  USoundWave *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FMixerBuffer *pFVar13;
  FMixerSourceBuffer *pFVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  uint uVar17;
  FSharedReferencer<1> FVar18;
  float fVar19;
  bool local_res10;
  FLLMScope local_res20 [2];
  FLLMScope local_144;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_140;
  FMixerSourceBuffer *local_130;
  FSharedReferencer<1> FStack_128;
  undefined8 local_120;
  TSharedPtr<Audio::FMixerSourceBuffer,1> local_118;
  ulong64 local_108;
  FName local_100;
  TRawPtrProxy<Audio::FMixerSourceBuffer> local_f8;
  FMemScope local_f0;
  FMemScope local_e8;
  FString local_e0;
  FString local_d0;
  FMixerSourceBufferInitArgs local_b8;
  FString local_78;
  FString local_68 [3];
  
  FLLMScope::FLLMScope(&local_144,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,AudioMixer,true);
  if (param_1 == (FWaveInstance *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8907641517682721588>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x334,"InWaveInstance");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else if (param_1->OutputTarget != Controller) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId831,"AudioMixerSource::PrepareForInitialization",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                 ,0x33f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId831);
    }
    this->bEditorWarnedChangedSpatialization = 0;
    this->InitializationState = Initializing;
    bVar10 = 0.0 < param_1->StartTime;
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x34a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((this->MixerBuffer != (FMixerBuffer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!MixerBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x34c,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar13 = FMixerBuffer::Init((FAudioDevice *)this->_padding_,
                                 (param_1->WaveData).field0_0x0.DebugPtr,bVar10);
    this->MixerBuffer = pFVar13;
    if (pFVar13 == (FMixerBuffer *)0x0) {
      FreeResources(this);
      bVar10 = false;
    }
    else {
      if (((param_1->WaveData).field0_0x0.DebugPtr == (USoundWave *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWaveInstance->WaveData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                             ,0x357,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      this_00 = (param_1->WaveData).field0_0x0.DebugPtr;
      uVar17 = 0;
      this->_padding_ = (longlong)param_1;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x469c4000;
      LOCK();
      this->bIsDone = (FThreadSafeBool)0x0;
      UNLOCK();
      fVar2 = *(float *)((longlong)&this_00->_padding_ + 4);
      if (0.0 < fVar2) {
        if (this_00->bIsSourceBus == '\0') {
          fVar19 = USoundWave::GetSampleRateForCurrentPlatform(this_00);
          iVar11 = (int)(fVar19 * fVar2);
          *(int *)((longlong)&this->_padding_ + 4) = iVar11;
          if ((iVar11 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumTotalFrames > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                                 ,0x368,L""), bVar8)) {
code_r0x0001465153ec:
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        else {
          cVar9 = (**(code **)(this_00->_padding_ + 0x310))();
          if (((cVar9 == '\0') &&
              (iVar11 = (int)((float)*(int *)(this->_padding_ + 0x84) *
                             *(float *)((longlong)&this_00->_padding_ + 4)),
              *(int *)((longlong)&this->_padding_ + 4) = iVar11, iVar11 < 1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumTotalFrames > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                                 ,0x36d,L""), bVar8)) goto code_r0x0001465153ec;
        }
        iVar11 = *(int *)((longlong)&this->_padding_ + 4);
        iVar12 = (int)((param_1->StartTime / *(float *)((longlong)&this_00->_padding_ + 4)) *
                      (float)iVar11);
        if (iVar12 < iVar11) {
          iVar11 = iVar12;
        }
        iVar12 = 0;
        if (0 < iVar11) {
          iVar12 = iVar11;
        }
        *(int *)&this->_padding_ = iVar12;
      }
      pTVar1 = &this->MixerSourceBuffer;
      if ((pTVar1->Object != (FMixerSourceBuffer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!MixerSourceBuffer.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                             ,0x373,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      local_140.ArrayMax = 0;
      local_res10 = false;
      lVar3 = *(longlong *)(this->_padding_ + 0x60);
      local_b8.AudioComponentID = 0;
      if (lVar3 != 0) {
        uVar17 = *(uint *)(lVar3 + 0x5c);
        plVar4 = *(longlong **)(lVar3 + 400);
        local_108 = *(ulong64 *)(lVar3 + 0x30);
        local_res10 = (bool)(*(byte *)(lVar3 + 0x1a3) >> 4 & 1);
        local_b8.AudioComponentID = local_108;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_140);
          local_120 = 0;
          (**(code **)(this_00->_padding_ + 0x358))(this_00,&local_140,0);
          local_b8.AudioComponentID = local_108;
        }
      }
      local_b8.bForceSyncDecode = false;
      local_b8.AudioDeviceID = *(uint *)(this->_padding_ + 0xa0);
      local_b8.InstanceID =
           GetTransmitterID(local_b8.AudioComponentID,*(ulong64 *)(this->_padding_ + 0x180),uVar17);
      local_b8.SampleRate = (int)(float)*(int *)(this->_padding_ + 0x84);
      local_b8.StartTime = param_1->StartTime;
      local_b8.AudioMixerNumOutputFrames = *(int *)&this->MixerDevice->field_0x8c;
      local_b8.Buffer = this->MixerBuffer;
      local_b8.LoopingMode = param_1->LoopingMode;
      local_b8.bIsPreviewSound = local_res10;
      local_b8.SoundWave = this_00;
      local_b8.bIsSeeking = bVar10;
      FLLMScope::FLLMScope(local_res20,AudioMixer,false,None,Default,true);
      FMemScope::FMemScope(&local_f0,AudioMixer,true);
      bVar10 = USoundWave::HasError(this_00);
      if (bVar10) {
        if (6 < (byte)LogAudioMixer._0_1_) {
          local_100 = (FName)this_00->_padding_;
          ::FName::ToString(&local_100,&local_e0);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        pFVar14 = (FMixerSourceBuffer *)0x0;
        local_130 = (FMixerSourceBuffer *)0x0;
        FStack_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FVar18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pFVar14 = ::operator_new(0x130);
        local_f8.Object = (FMixerSourceBuffer *)0x0;
        if (pFVar14 != (FMixerSourceBuffer *)0x0) {
          local_f8.Object = FMixerSourceBuffer::FMixerSourceBuffer(pFVar14,&local_b8,&local_140);
        }
        TSharedPtr<Audio::FMixerSourceBuffer,1>::
        TSharedPtr<Audio::FMixerSourceBuffer,1><Audio::FMixerSourceBuffer>(&local_118,&local_f8);
        FVar18.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
        pFVar14 = local_118.Object;
        local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_118.Object = (FMixerSourceBuffer *)0x0;
        local_130 = pFVar14;
        FStack_128.ReferenceController = FVar18.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      FMemScope::~FMemScope(&local_f0);
      FLLMScope::~FLLMScope(local_res20);
      if (pTVar1 != (TSharedPtr<Audio::FMixerSourceBuffer,1> *)&local_130) {
        pTVar1->Object = pFVar14;
        local_130 = (FMixerSourceBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MixerSourceBuffer).SharedReferenceCount,&FStack_128);
        FVar18.ReferenceController = FStack_128.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar18.ReferenceController);
      if (pTVar1->Object == (FMixerSourceBuffer *)0x0) {
        FreeResources(this);
        *(undefined4 *)(this->_padding_ + 0xc4) = 0;
        if (lVar3 == 0) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8907641517682721695>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                              ,0x39f,"ActiveSound");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        else {
          *(byte *)(lVar3 + 0x1a1) = *(byte *)(lVar3 + 0x1a1) & 0xef;
        }
      }
      if (5 < (byte)LogAudioTiming._0_1_) {
        pFVar15 = FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_78);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        bVar10 = MatchesLogFilter(pwVar16);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pwVar16 = L"true";
          if (pTVar1->Object == (FMixerSourceBuffer *)0x0) {
            pwVar16 = L"false";
          }
          ::FString::FString(&local_d0,pwVar16);
          FWaveInstance::GetName((FWaveInstance *)this->_padding_,local_68);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
      }
      bVar10 = pTVar1->Object != (FMixerSourceBuffer *)0x0;
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FAudioParameter *)local_140.AllocatorInstance.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_146515861;
  }
  bVar10 = false;
LAB_146515861:
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(&local_144);
  return bVar10;
}

// SetupBusData @ 146522c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSource::SetupBusData
          (FMixerSource *this,TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  EAudioBusChannels EVar1;
  int iVar2;
  longlong lVar3;
  USoundSourceBus *pUVar4;
  UAudioBus *pUVar5;
  FString *pFVar6;
  FSoundSourceBusSendInfo *pFVar7;
  uint uVar8;
  int iVar9;
  FSoundSourceBusSendInfo *pFVar10;
  FMixerSource *local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x30);
  pFVar7 = *(FSoundSourceBusSendInfo **)(lVar3 + 0x28);
  pFVar10 = pFVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x30) != iVar2) {
      `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res20);
    }
    if (pFVar7 == pFVar10) break;
    pUVar4 = (pFVar7->SoundSourceBus).field0_0x0.DebugPtr;
    local_res20 = this;
    if (pUVar4 != (USoundSourceBus *)0x0) {
      pUVar5 = (pUVar4->AudioBus).field0_0x0.DebugPtr;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (pUVar5 == (UAudioBus *)0x0) {
        uVar8 = *(uint *)((longlong)&pUVar4->_padding_ + 4);
        iVar9 = *(int *)((longlong)&pUVar4->_padding_ + 4);
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar4,&local_58,(UObject *)0x0);
        if (&local_88 != pFVar6) {
          local_88.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_88.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar8 = *(uint *)((longlong)&pUVar5->_padding_ + 4);
        iVar9 = pUVar5->AudioBusChannels + 1;
        FObjectPtr::GetPathName((FObjectPtr *)&pUVar4->AudioBus,&local_68);
        local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_88.Data.ArrayNum = local_68.Data.ArrayNum;
        local_88.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      `Audio::FMixerSource::SetupBusData'::__l8::<lambda_1>::operator()
                (&local_res20,param_1,pFVar7,0,uVar8,param_2,iVar9,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pUVar5 = (pFVar7->AudioBus).field0_0x0.DebugPtr;
    if (pUVar5 != (UAudioBus *)0x0) {
      EVar1 = pUVar5->AudioBusChannels;
      uVar8 = *(uint *)((longlong)&pUVar5->_padding_ + 4);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      pFVar6 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar5,&local_48,(UObject *)0x0);
      if (&local_78 != pFVar6) {
        local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      `Audio::FMixerSource::SetupBusData'::__l8::<lambda_1>::operator()
                (&local_res20,param_1,pFVar7,0,uVar8,param_2,EVar1 + 1,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = pFVar7 + 1;
  }
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x40);
  pFVar7 = *(FSoundSourceBusSendInfo **)(lVar3 + 0x38);
  pFVar10 = pFVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x40) != iVar2) {
      `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res20);
    }
    if (pFVar7 == pFVar10) break;
    pUVar4 = (pFVar7->SoundSourceBus).field0_0x0.DebugPtr;
    local_res20 = this;
    if (pUVar4 != (USoundSourceBus *)0x0) {
      pUVar5 = (pUVar4->AudioBus).field0_0x0.DebugPtr;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (pUVar5 == (UAudioBus *)0x0) {
        uVar8 = *(uint *)((longlong)&pUVar4->_padding_ + 4);
        iVar9 = *(int *)((longlong)&pUVar4->_padding_ + 4);
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar4,&local_58,(UObject *)0x0);
        if (&local_88 != pFVar6) {
          local_88.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_88.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar8 = *(uint *)((longlong)&pUVar5->_padding_ + 4);
        iVar9 = pUVar5->AudioBusChannels + 1;
        FObjectPtr::GetPathName((FObjectPtr *)&pUVar4->AudioBus,&local_68);
        local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_88.Data.ArrayNum = local_68.Data.ArrayNum;
        local_88.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      `Audio::FMixerSource::SetupBusData'::__l8::<lambda_1>::operator()
                (&local_res20,param_1,pFVar7,1,uVar8,param_2,iVar9,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pUVar5 = (pFVar7->AudioBus).field0_0x0.DebugPtr;
    if (pUVar5 != (UAudioBus *)0x0) {
      EVar1 = pUVar5->AudioBusChannels;
      uVar8 = *(uint *)((longlong)&pUVar5->_padding_ + 4);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      pFVar6 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar5,&local_48,(UObject *)0x0);
      if (&local_78 != pFVar6) {
        local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      `Audio::FMixerSource::SetupBusData'::__l8::<lambda_1>::operator()
                (&local_res20,param_1,pFVar7,1,uVar8,param_2,EVar1 + 1,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Stop @ 146524dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::Stop(FMixerSource *this)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AudioMixer,true);
  uVar3 = AudioMixerSourceFadeMinCVar;
  if (this->InitializationState != NotInitialized) {
    if ((((this->MixerSourceVoice == (FMixerSourceVoice *)0x0) ||
         ((longlong *)this->_padding_ == (longlong *)0x0)) ||
        (lVar2 = *(longlong *)this->_padding_, lVar2 == 0)) ||
       ((((*(byte *)(lVar2 + 0x364) & 3) == 1 || (this->bIsDone != (FThreadSafeBool)0x0)) ||
        ((*(int *)((longlong)&this->_padding_ + 4) != 0 && (this->bIsStoppingVoicesEnabled == 0)))))
       ) {
      (**(code **)(this->_padding_ + 0x40))(this);
    }
    else if (this->bIsStopping == (FThreadSafeBool)0x0) {
      puVar1 = (uint *)(this->_padding_ + 0xcc);
      *puVar1 = *puVar1 | 0x100000;
      FMixerSourceVoice::StopFade(this->MixerSourceVoice,uVar3);
      LOCK();
      this->bIsStopping = (FThreadSafeBool)0x1;
      UNLOCK();
      *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf7;
    }
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StopNow @ 146525fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::StopNow(FMixerSource *this)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  this->InitializationState = NotInitialized;
  LOCK();
  this->bIsStopping = (FThreadSafeBool)0x0;
  UNLOCK();
  if (this->_padding_ != 0) {
    if ((this->MixerSourceVoice != (FMixerSourceVoice *)0x0) &&
       (*(int *)((longlong)&this->_padding_ + 4) != 0)) {
      FMixerSourceVoice::Stop(this->MixerSourceVoice);
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf7;
    LOCK();
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    UNLOCK();
    FreeResources(this);
  }
  FSoundSource::Stop((FSoundSource *)this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Update @ 146529d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::Update(FMixerSource *this)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FWaveInstance *pFVar3;
  longlong lVar4;
  FMixerSourceVoice *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_AudioUpdateSources> FVar20;
  FString *pFVar21;
  IAudioSourceDataOverride *pIVar22;
  IAudioLinkSourcePushed *pIVar23;
  FSpatializationParams *pFVar24;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FSpatializationParams *pFVar25;
  wchar_t *pwVar26;
  FName FVar27;
  LPCRITICAL_SECTION p_Var28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_338 [32];
  FLLMScope local_2cc;
  FColor_u_0 local_2c8 [2];
  LARGE_INTEGER local_2c0;
  LARGE_INTEGER local_2b8;
  FName local_2b0;
  FName local_2a8;
  FMemScope local_298;
  LARGE_INTEGER local_290;
  int local_288;
  FStatMessage local_280;
  FName local_270;
  FString local_268;
  FString local_258;
  FSpatializationParams local_248;
  undefined4 *local_148;
  longlong local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if (!__CsvProfilerStat747) {
    FCsvProfilerTrace::OutputInlineStat("UpdateSources",_GCsvCategory_Audio.Index);
    __CsvProfilerStat747 = true;
  }
  uVar15 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("UpdateSources",_GCsvCategory_Audio.Index,"CSV_UpdateSources");
  lVar29 = 2;
  FVar20 = StatPtr_STAT_AudioUpdateSources;
  if (StatPtr_STAT_AudioUpdateSources == (FThreadSafeStaticStat<FStat_STAT_AudioUpdateSources>)0x0)
  {
    pFVar19 = ::FName::FName(&local_270,"STAT_AudioUpdateSources");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_AudioUpdateSources>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateSources,*pFVar19,
                        L"Updating Sources","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_146529f2b:
    bVar13 = false;
    FVar27 = local_2a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_2b0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                   ,0x2ec);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146529f2b;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar13 = true;
  }
  FLLMScope::FLLMScope(&local_2cc,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_298,AudioMixer,true);
  if ((((this->_padding_ == 0) || (this->MixerSourceVoice == (FMixerSourceVoice *)0x0)) ||
      ((this->_padding_ & 8) != 0)) || (this->InitializationState == NotInitialized))
  goto LAB_14652a864;
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId757,"FMixerSource::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
               ,0x2f5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId757);
  }
  pFVar3 = (FWaveInstance *)this->_padding_;
  if ((pFVar3->WaveData).field0_0x0.DebugPtr == (USoundWave *)0x0) {
    (**(code **)(this->_padding_ + 0x40))(this);
  }
  else {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    if (5 < (byte)LogAudioTiming._0_1_) {
      pFVar21 = FWaveInstance::GetName(pFVar3,&local_268);
      if ((pFVar21->Data).ArrayNum == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
      }
      bVar16 = MatchesLogFilter(pwVar26);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (bVar16) {
        pwVar26 = L"true";
        if ((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) {
          pwVar26 = L"false";
        }
        ::FString::FString((FString *)&local_290.s,pwVar26);
        local_2c0 = (LARGE_INTEGER)L"";
        if (local_288 != 0) {
          local_2c0 = local_290;
        }
        local_2b8 = (LARGE_INTEGER)
                    ((((FWaveInstance *)this->_padding_)->WaveData).field0_0x0.DebugPtr)->
                    CachedRealtimeFirstBuffer;
        FWaveInstance::GetName((FWaveInstance *)this->_padding_,&local_258);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if ((wchar_t *)local_290.QuadPart != (wchar_t *)0x0) {
          FMemory::Free((void *)local_290);
        }
      }
    }
    if ((*(longlong *)(this->_padding_ + 0xf0) != 0) &&
       ((*(byte *)(this->_padding_ + 0xcc) & 8) != 0)) {
      iVar17 = FMixerSourceVoice::GetSourceId(this->MixerSourceVoice);
      iVar18 = FActiveSound::GetClosestListenerIndex(*(FActiveSound **)(this->_padding_ + 0x60));
      local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      FAudioDevice::GetListenerTransform((FAudioDevice *)this->_padding_,iVar18,&local_d8);
      pIVar22 = TSharedPtr<IAudioSourceDataOverride,1>::operator->
                          ((TSharedPtr<IAudioSourceDataOverride,1> *)(this->_padding_ + 0xf0));
      (**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,iVar17,&local_d8,this->_padding_);
    }
    if ((this->bIs3D != 0) && ((this->AudioLink).Object != (IAudioLinkSourcePushed *)0x0)) {
      lVar4 = *(longlong *)(this->_padding_ + 0x60);
      local_138 = *(undefined1 (*) [16])(lVar4 + 0x260);
      local_128 = *(undefined1 (*) [16])(lVar4 + 0x270);
      local_118 = *(undefined1 (*) [16])(lVar4 + 0x280);
      local_108 = *(undefined1 (*) [16])(lVar4 + 0x290);
      local_f8 = *(undefined1 (*) [16])(lVar4 + 0x2a0);
      local_e8 = *(undefined1 (*) [16])(lVar4 + 0x2b0);
      pIVar23 = TSharedPtr<IAudioLinkSourcePushed,1>::operator->(&this->AudioLink);
      (**(code **)((longlong)*pIVar23 + 8))(pIVar23);
    }
    UpdateModulation(this);
    UpdatePitch(this);
    this_00 = this->MixerSourceVoice;
    fVar31 = FWaveInstance::GetDistanceAndOcclusionAttenuation((FWaveInstance *)this->_padding_);
    FMixerSourceVoice::SetDistanceAttenuation(this_00,fVar31);
    fVar31 = 0.0;
    bVar16 = FAudioDevice::IsAudioDeviceMuted((FAudioDevice *)this->_padding_);
    if (!bVar16) {
      fVar31 = __real_3f800000;
      if ((*(byte *)(*(longlong *)(this->_padding_ + 0x60) + 0x1a3) & 0x10) == 0) {
        fVar31 = *(float *)(this->_padding_ + 0x180);
      }
      lVar4 = this->_padding_;
      bVar16 = IsInAudioThread();
      if ((!bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInAudioThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                              ,0x776,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar34 = *(float *)(lVar4 + 0x4b0);
      fVar32 = FWaveInstance::GetVolume((FWaveInstance *)this->_padding_);
      fVar33 = FWaveInstance::GetDynamicVolume((FWaveInstance *)this->_padding_);
      fVar33 = fVar33 * fVar32 * fVar34 * fVar31;
      if (this->bBypassingSubmixModulation != false) {
        fVar31 = GetInheritedSubmixVolumeModulation(this);
        fVar33 = fVar33 * fVar31;
      }
      fVar31 = FSoundSource::GetDebugVolume((FSoundSource *)this,fVar33);
      if (__real_40800000 <= fVar31) {
        fVar31 = __real_40800000;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if ((*(longlong *)(this->_padding_ + 0x60) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveSound",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                              ,0x5b6,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)this->_padding_ == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("WaveData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                              ,0x5b9,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar34 = FWaveInstance::GetEffectiveModulationValue((FWaveInstance *)this->_padding_,Volume);
      FMixerSourceVoice::SetModVolume(this->MixerSourceVoice,fVar34);
    }
    FMixerSourceVoice::SetVolume(this->MixerSourceVoice,fVar31);
    dVar6 = (this->SpatializationParams).EmitterWorldRotation.X;
    dVar7 = (this->SpatializationParams).EmitterWorldRotation.Y;
    dVar8 = (this->SpatializationParams).EmitterWorldRotation.Z;
    dVar9 = (this->SpatializationParams).EmitterWorldRotation.W;
    pFVar24 = FSoundSource::GetSpatializationParams((FSoundSource *)this,&local_248);
    pFVar25 = &this->SpatializationParams;
    do {
      dVar10 = (pFVar24->ListenerPosition).field0_0x0._s_0.Y;
      (pFVar25->ListenerPosition).field0_0x0._s_0.X = (pFVar24->ListenerPosition).field0_0x0._s_0.X;
      (pFVar25->ListenerPosition).field0_0x0._s_0.Y = dVar10;
      uVar11 = *(undefined8 *)&pFVar24->field_0x18;
      (pFVar25->ListenerPosition).field0_0x0._s_0.Z = (pFVar24->ListenerPosition).field0_0x0._s_0.Z;
      *(undefined8 *)&pFVar25->field_0x18 = uVar11;
      dVar10 = (pFVar24->ListenerOrientation).Y;
      (pFVar25->ListenerOrientation).X = (pFVar24->ListenerOrientation).X;
      (pFVar25->ListenerOrientation).Y = dVar10;
      dVar10 = (pFVar24->ListenerOrientation).W;
      (pFVar25->ListenerOrientation).Z = (pFVar24->ListenerOrientation).Z;
      (pFVar25->ListenerOrientation).W = dVar10;
      dVar10 = (pFVar24->EmitterPosition).field0_0x0._s_0.Y;
      (pFVar25->EmitterPosition).field0_0x0._s_0.X = (pFVar24->EmitterPosition).field0_0x0._s_0.X;
      (pFVar25->EmitterPosition).field0_0x0._s_0.Y = dVar10;
      dVar10 = (pFVar24->EmitterWorldPosition).field0_0x0._s_0.X;
      (pFVar25->EmitterPosition).field0_0x0._s_0.Z = (pFVar24->EmitterPosition).field0_0x0._s_0.Z;
      (pFVar25->EmitterWorldPosition).field0_0x0._s_0.X = dVar10;
      dVar10 = (pFVar24->EmitterWorldPosition).field0_0x0._s_0.Z;
      (pFVar25->EmitterWorldPosition).field0_0x0._s_0.Y =
           (pFVar24->EmitterWorldPosition).field0_0x0._s_0.Y;
      (pFVar25->EmitterWorldPosition).field0_0x0._s_0.Z = dVar10;
      dVar10 = (pFVar24->EmitterWorldRotation).Y;
      (pFVar25->EmitterWorldRotation).X = (pFVar24->EmitterWorldRotation).X;
      (pFVar25->EmitterWorldRotation).Y = dVar10;
      lVar29 = lVar29 + -1;
      pFVar24 = (FSpatializationParams *)&(pFVar24->EmitterWorldRotation).Z;
      pFVar25 = (FSpatializationParams *)&(pFVar25->EmitterWorldRotation).Z;
    } while (lVar29 != 0);
    pFVar3 = (FWaveInstance *)this->_padding_;
    (this->SpatializationParams).LastEmitterWorldRotation.X = dVar6;
    (this->SpatializationParams).LastEmitterWorldRotation.Y = dVar7;
    (this->SpatializationParams).LastEmitterWorldRotation.Z = dVar8;
    (this->SpatializationParams).LastEmitterWorldRotation.W = dVar9;
    bVar16 = FWaveInstance::GetUseSpatialization(pFVar3);
    if ((bVar16) || ((*(uint *)(this->_padding_ + 0xcc) & 0x80000) != 0)) {
      FMixerSourceVoice::SetSpatializationParams(this->MixerSourceVoice,&this->SpatializationParams)
      ;
    }
    UpdateEffects(this);
    UpdateSourceBusSends(this);
    FSoundSource::SetLFEBleed((FSoundSource *)this);
    SRWLock = &this->ChannelMapLock;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    iVar17 = *(int *)((longlong)&this->_padding_ + 4);
    pTVar2 = &this->ChannelMap;
    if (iVar17 == 1) {
      bVar16 = ComputeMonoChannelMap(this,pTVar2);
LAB_14652a5a9:
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      if (bVar16 != false) {
LAB_14652a60a:
        AcquireSRWLockShared((PSRWLOCK)SRWLock);
        FMixerSourceVoice::SetChannelMap
                  (this->MixerSourceVoice,*(uint *)((longlong)&this->_padding_ + 4),pTVar2,
                   this->bIs3D,(bool)(*(byte *)(this->_padding_ + 0xce) & 1));
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
    }
    else {
      if (iVar17 == 2) {
        bVar16 = ComputeStereoChannelMap(this,pTVar2);
        goto LAB_14652a5a9;
      }
      if ((this->ChannelMap).ArrayNum == 0) {
        FMixerDevice::Get2DChannelMap
                  (this->bIsVorbis,iVar17,(this->MixerDevice->PlatformInfo).NumChannels,
                   (bool)(*(byte *)(this->_padding_ + 0xce) & 1),pTVar2);
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        goto LAB_14652a60a;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    bVar16 = IsSpatializationCVarEnabled();
    this->bPrevAllowedSpatializationSetting = bVar16;
    if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
      fVar31 = FMixerSourceVoice::GetRelativeRenderCost(this->MixerSourceVoice);
      if ((this->_padding_ == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("WaveInstance",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                              ,0x709,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(this->_padding_ + 0xa4) = fVar31;
      if (this->_padding_ != 0) {
        p_Var28 = (LPCRITICAL_SECTION)(this->_padding_ + 0x28);
        if (p_Var28 == (LPCRITICAL_SECTION)0x0) goto LAB_14652a988;
        EnterCriticalSection(p_Var28);
        if ((this->_padding_ == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)(this->_padding_ + 0x20) = fVar31;
        LeaveCriticalSection(p_Var28);
      }
      if (((-1 < AudioMixerChannel->Enabled) && (*(longlong *)(this->_padding_ + 0x60) != 0)) &&
         (-1 < AudioMixerChannel->Enabled)) {
        UE::Trace::Private::FLogScope::Enter<FAudioSoundRelativeRenderCostFields>
                  ((TLogScope<0> *)&local_148);
        *local_148 = *(undefined4 *)&this->MixerDevice->field_0xa0;
        QueryPerformanceCounter(&local_2b8);
        *(LARGE_INTEGER *)(local_148 + 1) = local_2b8;
        local_148[3] = *(undefined4 *)(this->_padding_ + 0x178);
        local_148[4] = *(undefined4 *)(*(longlong *)(this->_padding_ + 0x60) + 0x5c);
        local_148[5] = fVar31;
        *(undefined8 *)(local_140 + 0x28) = *(undefined8 *)(local_140 + 0x20);
      }
    }
    if ((this->MixerSourceVoice != (FMixerSourceVoice *)0x0) && (this->_padding_ != 0)) {
      p_Var28 = (LPCRITICAL_SECTION)(this->_padding_ + 0x28);
      if (p_Var28 == (LPCRITICAL_SECTION)0x0) {
LAB_14652a988:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(p_Var28);
      dVar6 = FMixerSourceVoice::GetCPUCoreUtilization(this->MixerSourceVoice);
      if ((this->_padding_ == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)(this->_padding_ + 0x18) = dVar6;
      LeaveCriticalSection(p_Var28);
    }
    FAudioDebugger::DrawDebugInfo((FSoundSource *)this);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14652a864:
  FMemScope::~FMemScope(&local_298);
  FLLMScope::~FLLMScope(&local_2cc);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_280.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_280.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2c0);
      local_280.StatData.Pad = (uchar  [8])(local_2c0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_280);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("UpdateSources",uVar15);
  return;
}

// UpdateCPUCoreUtilization @ 14652b4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateCPUCoreUtilization(FMixerSource *this)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar3;
  
  if ((this->MixerSourceVoice != (FMixerSourceVoice *)0x0) && (this->_padding_ != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this->_padding_ + 0x28);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    dVar3 = FMixerSourceVoice::GetCPUCoreUtilization(this->MixerSourceVoice);
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(double *)(this->_padding_ + 0x18) = dVar3;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// UpdateChannelMaps @ 14652b640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateChannelMaps(FMixerSource *this)

{
  FPlatformRWLock *SRWLock;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int iVar2;
  bool bVar3;
  
  FSoundSource::SetLFEBleed((FSoundSource *)this);
  SRWLock = &this->ChannelMapLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  pTVar1 = &this->ChannelMap;
  if (iVar2 == 1) {
    bVar3 = ComputeMonoChannelMap(this,pTVar1);
LAB_14652b69b:
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (bVar3 == false) goto LAB_14652b74b;
  }
  else {
    if (iVar2 == 2) {
      bVar3 = ComputeStereoChannelMap(this,pTVar1);
      goto LAB_14652b69b;
    }
    if ((this->ChannelMap).ArrayNum != 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      goto LAB_14652b74b;
    }
    FMixerDevice::Get2DChannelMap
              (this->bIsVorbis,iVar2,(this->MixerDevice->PlatformInfo).NumChannels,
               (bool)(*(byte *)(this->_padding_ + 0xce) & 1),pTVar1);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  FMixerSourceVoice::SetChannelMap
            (this->MixerSourceVoice,*(uint *)((longlong)&this->_padding_ + 4),pTVar1,this->bIs3D,
             (bool)(*(byte *)(this->_padding_ + 0xce) & 1));
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
LAB_14652b74b:
  bVar3 = IsSpatializationCVarEnabled();
  this->bPrevAllowedSpatializationSetting = 0;
  *(uint *)&this->field_0x2bc = *(uint *)&this->field_0x2bc | (uint)bVar3 << 6;
  return;
}

// UpdateEffects @ 14652b850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateEffects(FMixerSource *this)

{
  atomic<int> aVar1;
  FMixerDevice *this_00;
  FMixerSourceVoice *pFVar2;
  UObject *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  int iVar8;
  IAudioReverb *pIVar9;
  USoundSubmixBase *pUVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ForAnyElementType FVar15;
  FMixerSubmix *pFVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  FMixerSubmix *pFVar21;
  FObjectKey FVar22;
  FSoundSubmixSendInfoBase *pFVar23;
  EMixerSourceSubmixSendStage EVar24;
  uint uVar25;
  EMixerSourceSubmixSendStage EVar26;
  FMixerSubmix *pFVar27;
  uint *puVar29;
  ulonglong uVar30;
  ForElementType<unsigned_int> FVar31;
  EMixerSourceSubmixSendStage EVar32;
  FSoundSubmixSendInfoBase *pFVar33;
  atomic<int> *paVar34;
  float fVar35;
  TReferenceControllerBase<1> *pTVar36;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276 [6];
  FWeakObjectPtr local_270;
  TWeakPtr<Audio::FMixerSubmix,1> local_268;
  uint local_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined4 local_248;
  uint uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  TWeakPtr<Audio::FMixerSubmix,1> local_230;
  undefined4 local_220;
  int local_21c;
  TWeakPtr<Audio::FMixerSubmix,1> local_218;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_200;
  longlong *local_1e0;
  EMixerSourceSubmixSendStage EStack_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  undefined4 uStack_1c8;
  EMixerSourceSubmixSendStage EStack_1c4;
  EMixerSourceSubmixSendStage local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TWeakPtr<Audio::FMixerSubmix,1> local_180;
  TWeakPtr<Audio::FMixerSubmix,1> local_170;
  TWeakPtr<Audio::FMixerSubmix,1> local_160;
  TWeakPtr<Audio::FMixerSubmix,1> local_150;
  TWeakPtr<Audio::FMixerSubmix,1> local_138;
  FMixerSubmix *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  TWeakPtr<Audio::FMixerSubmix,1> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  EMixerSourceSubmixSendStage local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  FMixerSubmix *pFVar28;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  FSoundSource::SetFilterFrequency((FSoundSource *)this);
  FMixerSourceVoice::SetLPFFrequency
            (this->MixerSourceVoice,*(float *)((longlong)&this->_padding_ + 4));
  FMixerSourceVoice::SetHPFFrequency(this->MixerSourceVoice,*(float *)&this->_padding_);
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaveInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x605,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(longlong *)(this->_padding_ + 0x60) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x607,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(longlong *)this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaveData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x60a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar35 = FWaveInstance::GetEffectiveModulationValue((FWaveInstance *)this->_padding_,Highpass);
  FMixerSourceVoice::SetModHPFFrequency(this->MixerSourceVoice,fVar35);
  fVar35 = FWaveInstance::GetEffectiveModulationValue((FWaveInstance *)this->_padding_,Lowpass);
  FMixerSourceVoice::SetModLPFFrequency(this->MixerSourceVoice,fVar35);
  pFVar28 = (FMixerSubmix *)0x0;
  if ((*(uint *)(this->_padding_ + 0xcc) & 0x8000) != 0) {
    iVar20 = *(int *)((longlong)&this->_padding_ + 4);
    if ((((iVar20 == 1) || (iVar20 == 2)) && ((*(byte *)(this->_padding_ + 0x5c0) & 8) != 0)) &&
       ((*(longlong *)(this->_padding_ + 0xe8) != 0 && (*(longlong *)(this->_padding_ + 0x100) != 0)
        ))) {
      if ((this->MixerDevice == (FMixerDevice *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MixerDevice",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                             ,0x618,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = this->MixerDevice;
      pIVar9 = TSharedPtr<IAudioReverb,1>::operator->
                         ((TSharedPtr<IAudioReverb,1> *)(this->_padding_ + 0x100));
      pUVar10 = (USoundSubmixBase *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
      pTVar11 = FMixerDevice::GetSubmixInstance(this_00,&local_170,pUVar10);
      pFVar16 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
      pFVar21 = pFVar16;
      pFVar27 = pFVar28;
      if (pFVar16 != (FMixerSubmix *)0x0) {
        aVar1 = *(atomic<int> *)&pFVar16->field_0x8;
        do {
          pFVar21 = pFVar28;
          if (aVar1 == (atomic<int>)0x0) break;
          LOCK();
          aVar7 = *(atomic<int> *)&pFVar16->field_0x8;
          bVar6 = aVar1 == aVar7;
          if (bVar6) {
            *(atomic<int> *)&pFVar16->field_0x8 = (atomic<int>)((int)aVar1 + 1);
            aVar7 = aVar1;
          }
          UNLOCK();
          pFVar21 = pFVar16;
          aVar1 = aVar7;
        } while (!bVar6);
        pTVar36 = (pTVar11->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar34 = &pTVar36->WeakReferenceCount;
        aVar1 = *paVar34;
        *paVar34 = (atomic<int>)((int)*paVar34 + -1);
        UNLOCK();
        if ((aVar1 == (atomic<int>)0x1) && (pTVar36 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar36->_padding_ + 8))(pTVar36,1);
        }
        (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar21 != (FMixerSubmix *)0x0) {
          pFVar27 = pTVar11->Object;
          pTVar11->Object = (FMixerSubmix *)0x0;
        }
      }
      if (local_170.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar34 = &(local_170.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar1 = *paVar34;
        *paVar34 = (atomic<int>)((int)*paVar34 + -1);
        UNLOCK();
        if (aVar1 == (atomic<int>)0x1) {
          (**(code **)((local_170.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_170.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (pFVar27 != (FMixerSubmix *)0x0) {
        pFVar2 = this->MixerSourceVoice;
        fVar35 = *(float *)(this->_padding_ + 0x160);
        if (pFVar21 != (FMixerSubmix *)0x0) {
          LOCK();
          *(int *)&pFVar21->field_0xc = *(int *)&pFVar21->field_0xc + 1;
          UNLOCK();
        }
        local_180.Object = pFVar27;
        local_180.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
        FMixerSourceVoice::SetSubmixSendInfo(pFVar2,&local_180,fVar35,PostDistanceAttenuation);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
    }
    pFVar2 = this->MixerSourceVoice;
    fVar35 = *(float *)(this->_padding_ + 0x160);
    pTVar11 = FMixerDevice::GetMasterReverbSubmix(this->MixerDevice,local_118);
    FMixerSourceVoice::SetSubmixSendInfo(pFVar2,pTVar11,fVar35,PostDistanceAttenuation);
  }
  iVar20 = 0;
  local_238 = 0;
  pUVar3 = *(UObject **)(this->_padding_ + 0x10);
  if (pUVar3 == (UObject *)0x0) {
    FVar22.ObjectIndex = 0;
    FVar22.ObjectSerialNumber = 0;
    iVar8 = iVar20;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_270.ObjectIndex = 0;
    local_270.ObjectSerialNumber = 0;
    local_218.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_270,(FObjectPtr)&local_218.WeakReferenceCount);
    iVar20 = local_270.ObjectIndex;
    FVar22 = (FObjectKey)local_270;
    iVar8 = local_270.ObjectSerialNumber;
  }
  if ((iVar20 == (this->PrevousSubmix).ObjectKey.ObjectIndex) &&
     (iVar8 == (this->PrevousSubmix).ObjectKey.ObjectSerialNumber)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar17 = this->_padding_;
  if (*(longlong *)(lVar17 + 0x10) == 0) {
    if ((((this->PreviousSubmixResolved).Object != (FMixerSubmix *)0x0) &&
        (pTVar36 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController,
        pTVar36 != (TReferenceControllerBase<1> *)0x0)) &&
       (lVar17 = this->_padding_, 0 < (int)pTVar36->SharedReferenceCount)) goto LAB_14652bbf7;
    if (*(longlong *)(lVar17 + 0x10) != 0) goto LAB_14652bbd7;
  }
  else {
LAB_14652bbd7:
    if ((((this->PreviousSubmixResolved).Object == (FMixerSubmix *)0x0) ||
        (pTVar36 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController,
        pTVar36 == (TReferenceControllerBase<1> *)0x0)) ||
       (lVar17 = this->_padding_, (int)pTVar36->SharedReferenceCount < 1)) {
LAB_14652bbf7:
      bVar6 = true;
    }
  }
  if (((*(uint *)(lVar17 + 0xcc) >> 1 & 1) != this->bPreviousBaseSubmixEnablement) || (bVar6)) {
    pFVar16 = (FMixerSubmix *)0x0;
    pTVar36 = (TReferenceControllerBase<1> *)0x0;
    local_268.Object = (FMixerSubmix *)0x0;
    local_268.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (*(USoundSubmixBase **)(lVar17 + 0x10) == (USoundSubmixBase *)0x0) {
      if ((*(uint *)(lVar17 + 0xcc) >> 0x15 & 1) == 0) {
        pTVar11 = FMixerDevice::GetBaseDefaultSubmix(this->MixerDevice,&local_150);
        if (&local_268 != pTVar11) {
          pFVar16 = pTVar11->Object;
          pTVar36 = (pTVar11->WeakReferenceCount).ReferenceController;
          pTVar11->Object = (FMixerSubmix *)0x0;
          (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_268.Object = pFVar16;
          local_268.WeakReferenceCount.ReferenceController = pTVar36;
        }
        goto LAB_14652bc82;
      }
    }
    else {
      pTVar11 = FMixerDevice::GetSubmixInstance
                          (this->MixerDevice,&local_160,*(USoundSubmixBase **)(lVar17 + 0x10));
      local_150.WeakReferenceCount.ReferenceController =
           local_160.WeakReferenceCount.ReferenceController;
      if (&local_268 != pTVar11) {
        pFVar16 = pTVar11->Object;
        pTVar36 = (pTVar11->WeakReferenceCount).ReferenceController;
        pTVar11->Object = (FMixerSubmix *)0x0;
        (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_268.Object = pFVar16;
        local_268.WeakReferenceCount.ReferenceController = pTVar36;
      }
LAB_14652bc82:
      if (local_150.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar34 = &(local_150.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar1 = *paVar34;
        *paVar34 = (atomic<int>)((int)*paVar34 + -1);
        UNLOCK();
        if (aVar1 == (atomic<int>)0x1) {
          (**(code **)((local_150.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_150.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    pFVar2 = this->MixerSourceVoice;
    uVar19 = *(uint *)(this->_padding_ + 0xcc);
    if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
      paVar34 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar34 = &pTVar36->WeakReferenceCount;
      LOCK();
      *paVar34 = (atomic<int>)((int)*paVar34 + 1);
      UNLOCK();
    }
    local_138.Object = pFVar16;
    local_138.WeakReferenceCount.ReferenceController = pTVar36;
    FMixerSourceVoice::SetSubmixSendInfo
              (pFVar2,&local_138,(float)(uVar19 >> 1 & 1),PostDistanceAttenuation);
    this->bPreviousBaseSubmixEnablement = *(uint *)(this->_padding_ + 0xcc) >> 1 & 1;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar34 = (atomic<int>)((int)*paVar34 + 1);
      UNLOCK();
    }
    local_128 = (this->PreviousSubmixResolved).Object;
    pTStack_120 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController;
    (this->PreviousSubmixResolved).Object = pFVar16;
    (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController = pTVar36;
    if (pTStack_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar34 = &pTStack_120->WeakReferenceCount;
      aVar1 = *paVar34;
      *paVar34 = (atomic<int>)((int)*paVar34 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTStack_120->_padding_ + 8))(pTStack_120,1);
      }
    }
    (this->PrevousSubmix).ObjectKey = FVar22;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar34 = &pTVar36->WeakReferenceCount;
      aVar1 = *paVar34;
      *paVar34 = (atomic<int>)((int)*paVar34 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar36->_padding_ + 8))(pTVar36,1);
      }
    }
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar19 = *(int *)(this->_padding_ + 0x20) + 1 + *(int *)(this->_padding_ + 0x170);
  if (uVar19 == 0) goto LAB_14652c103;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar30 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_220 = (undefined4)lVar17;
    uVar19 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar19 <= (int)local_a0)) goto LAB_14652c103;
  local_a0 = uVar19;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar19 != 0) {
    uVar25 = uVar19;
    if (uVar19 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar25 = 0;
        goto LAB_14652bee1;
      }
    }
    else {
LAB_14652bee1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar25,4);
    }
    if (0 < (int)uVar19) {
      uVar30 = (ulonglong)uVar19;
      pFVar16 = pFVar28;
      do {
        FVar15.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_a8.Data;
        }
        uVar12 = (ulonglong)pFVar16 & (longlong)(int)uVar19 - 1U;
        pFVar16 = (FMixerSubmix *)&pFVar16->field_0x1;
        *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_258 = 0;
    uStack_254 = 1;
    uStack_244 = 0;
    uStack_240 = 0;
    pFVar16 = pFVar28;
    if (local_c0 != 0) {
      FVar31 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = local_c8;
      }
      uVar19 = *(uint *)FVar31;
      pFVar27 = pFVar28;
      while (uVar19 == 0) {
        uStack_240 = (int)pFVar27 + 0x20;
        pFVar27 = (FMixerSubmix *)(ulonglong)uStack_240;
        iVar20 = (int)pFVar16;
        local_258 = iVar20 + 1;
        pFVar16 = (FMixerSubmix *)(ulonglong)local_258;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_258)
        goto LAB_14652bffe;
        uVar19 = ((uint *)((longlong)FVar31 + 4))[iVar20];
      }
      uStack_254 = -uVar19 & uVar19;
      uVar30 = (ulonglong)uStack_254 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_21c = (int)lVar17;
      uStack_244 = (uStack_240 - 1) + local_21c;
      pFVar16 = (FMixerSubmix *)(ulonglong)uStack_244;
      if ((int)local_c0 < (int)uStack_244) {
LAB_14652bffe:
        pFVar16 = (FMixerSubmix *)(ulonglong)local_c0;
        uStack_244 = local_c0;
      }
    }
    local_248 = 0xffffffff;
    local_208 = (longlong *)local_e8;
    local_200._padding_ = CONCAT44(uStack_254,local_258);
    local_200.CurrentBitIndex = uStack_244;
    local_200.UnvisitedBitMask = 0xffffffff;
    local_200._28_4_ = uStack_23c;
    local_200.BaseBitIndex = uStack_240;
    local_200.Array = pTStack_250;
    if ((int)pFVar16 < (int)local_c0) {
      do {
        lVar17 = *local_208;
        lVar13 = (longlong)(int)pFVar16;
        plVar4 = *(longlong **)(lVar17 + 8 + lVar13 * 0x18);
        uVar30 = *(ulonglong *)(lVar17 + lVar13 * 0x18);
        if (plVar4 == (longlong *)0x0) {
          piVar18 = (int *)&DAT_0000000c;
        }
        else {
          piVar18 = (int *)((longlong)plVar4 + 0xc);
          LOCK();
          *piVar18 = *piVar18 + 1;
          UNLOCK();
        }
        uVar19 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          iVar20 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        uVar19 = local_a0 - 1 & (uVar19 >> 0x10 ^ uVar19);
        *(uint *)(lVar17 + 0x14 + lVar13 * 0x18) = uVar19;
        FVar15.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_a8.Data;
        }
        uVar30 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(lVar17 + 0x10 + lVar13 * 0x18) = *(undefined4 *)(FVar15.Data + uVar30 * 4);
        *(int *)(FVar15.Data + uVar30 * 4) = (int)pFVar16;
        local_200.UnvisitedBitMask = local_200.UnvisitedBitMask & ~local_200._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_200);
        pFVar16 = (FMixerSubmix *)(ulonglong)(uint)local_200.CurrentBitIndex;
      } while (local_200.CurrentBitIndex < (local_200.Array)->NumBits);
    }
  }
LAB_14652c103:
  TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::Emplace<TWeakPtr<Audio::FMixerSubmix,1>_const_&>
            ((TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
              *)local_e8,&local_218,(bool *)&this->PreviousSubmixResolved);
  lVar17 = this->_padding_;
  iVar20 = *(int *)(lVar17 + 0x170);
  pFVar23 = *(FSoundSubmixSendInfoBase **)(lVar17 + 0x168);
  pFVar33 = pFVar23 + iVar20;
  while( true ) {
    if (*(int *)(lVar17 + 0x170) != iVar20) {
      local_278 = 0;
      `TCheckedPointerIterator<FAttenuationSubmixSendSettings,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_278);
    }
    if (pFVar23 == pFVar33) break;
    UpdateSubmixSendLevels
              (this,pFVar23,PostDistanceAttenuation,
               (TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)local_e8);
    pFVar23 = pFVar23 + 1;
  }
  lVar17 = this->_padding_;
  iVar20 = *(int *)(lVar17 + 0x20);
  pFVar23 = *(FSoundSubmixSendInfoBase **)(lVar17 + 0x18);
  pFVar33 = (FSoundSubmixSendInfoBase *)((longlong)iVar20 * 0xb8 + (longlong)pFVar23);
  while( true ) {
    if (*(int *)(lVar17 + 0x20) != iVar20) {
      local_277 = 0;
      `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_277);
    }
    EVar26 = PostDistanceAttenuation;
    if (pFVar23 == pFVar33) break;
    if ((pFVar23[1].SendLevelControlMethod == Linear) ||
       (EVar32 = PreDistanceAttenuation, pFVar23[1].SendLevelControlMethod != CustomCurve)) {
      EVar32 = EVar26;
    }
    UpdateSubmixSendLevels
              (this,pFVar23,EVar32,
               (TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)local_e8);
    pFVar23 = (FSoundSubmixSendInfoBase *)&pFVar23[1].SoundSubmix;
  }
  TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::Difference(&this->PreviousSubmixSends,
               (TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)local_98,
               (TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                *)local_e8);
  TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::operator=(&this->PreviousSubmixSends,
              (TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
               *)local_e8);
  EVar32 = local_70;
  uStack_1d4 = 1;
  EStack_1c4 = EVar26;
  local_1c0 = EVar26;
  if (local_70 != PostDistanceAttenuation) {
    puVar29 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar29 = local_78;
    }
    uVar19 = *puVar29;
    pFVar16 = pFVar28;
    local_1c0 = PostDistanceAttenuation;
    EVar26 = PostDistanceAttenuation;
    while (uVar19 == 0) {
      iVar20 = (int)pFVar28;
      local_1c0 = (int)pFVar16 + 0x20;
      pFVar16 = (FMixerSubmix *)(ulonglong)local_1c0;
      EVar26 = iVar20 + PreDistanceAttenuation;
      pFVar28 = (FMixerSubmix *)(ulonglong)EVar26;
      EStack_1c4 = local_70;
      if ((int)((local_70 - PreDistanceAttenuation) +
               ((int)(local_70 - PreDistanceAttenuation) >> 0x1f & 0x1fU)) >> 5 < (int)EVar26)
      goto LAB_14652c290;
      uVar19 = puVar29[(longlong)iVar20 + 1];
    }
    uStack_1d4 = -uVar19 & uVar19;
    uVar30 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_218.Object._4_4_ = (int)lVar17;
    EStack_1c4 = (local_1c0 - PreDistanceAttenuation) + local_218.Object._4_4_;
    if ((int)local_70 < (int)EStack_1c4) {
      EStack_1c4 = local_70;
    }
  }
LAB_14652c290:
  local_1e0 = (longlong *)local_98;
  EVar24 = local_70 & 0xffffffe0;
  uStack_1bc = local_ec;
  local_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_1b8 = local_98._8_4_ - local_64;
  uStack_1c8 = 0xffffffff;
  TStack_1a8.CurrentBitIndex = EStack_1c4;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8._padding_ = CONCAT44(uStack_1d4,EVar26);
  iVar20 = (int)local_70 >> 5;
  TStack_1a8._28_4_ = local_ec;
  TStack_1a8.BaseBitIndex = local_1c0;
  uStack_188 = CONCAT44(uStack_1b4,iStack_1b8);
  bVar14 = (byte)local_70;
  EStack_1d8 = EVar26;
  local_1b0 = local_1e0;
  TStack_1a8.Array = local_1d0;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (EVar32 != local_70) {
    puVar29 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar29 = local_78;
    }
    uVar19 = -1 << (bVar14 & 0x1f) & puVar29[iVar20];
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      EVar24 = EVar24 + 0x20;
      iVar20 = iVar20 + 1;
      EVar32 = local_70;
      if ((int)((local_70 - PreDistanceAttenuation) +
               ((int)(local_70 - PreDistanceAttenuation) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14652c39f;
      uVar19 = puVar29[lVar17 + 1];
    }
    uVar30 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    EVar32 = (int)lVar17 + -1 + EVar24;
    if ((int)local_70 < (int)EVar32) {
      EVar32 = local_70;
    }
  }
LAB_14652c39f:
  while( true ) {
    plVar4 = local_1b0;
    if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
      `TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_276);
    }
    if (((TStack_1a8.CurrentBitIndex == EVar32) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar4 == (longlong *)local_98)) break;
    lVar17 = *plVar4;
    pTVar36 = *(TReferenceControllerBase<1> **)
               (lVar17 + 8 + (longlong)TStack_1a8.CurrentBitIndex * 0x18);
    local_230.Object = *(FMixerSubmix **)(lVar17 + (longlong)TStack_1a8.CurrentBitIndex * 0x18);
    local_230.WeakReferenceCount.ReferenceController = pTVar36;
    if (pTVar36 == (TReferenceControllerBase<1> *)0x0) {
      FMixerSourceVoice::ClearSubmixSendInfo(this->MixerSourceVoice,&local_230);
    }
    else {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
      pFVar2 = this->MixerSourceVoice;
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
      FMixerSourceVoice::ClearSubmixSendInfo(pFVar2,&local_230);
      LOCK();
      paVar34 = &pTVar36->WeakReferenceCount;
      aVar1 = *paVar34;
      *paVar34 = (atomic<int>)((int)*paVar34 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar36->_padding_ + 8))(pTVar36,1);
      }
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  uVar19 = *(uint *)(this->_padding_ + 0xcc);
  FMixerSourceVoice::SetEnablement
            (this->MixerSourceVoice,(bool)((byte)uVar19 & 1),(bool)((byte)(uVar19 >> 1) & 1),
             (bool)((byte)(uVar19 >> 2) & 1));
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return;
}

// UpdateModulation @ 14652cbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateModulation(FMixerSource *this)

{
  longlong lVar1;
  FWaveInstance *this_00;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_338 [32];
  FSoundModulationDestinationSettings local_318;
  FSoundModulationDestinationSettings local_2b8;
  FSoundModulationDestinationSettings local_258;
  FSoundModulationDestinationSettings local_1f8;
  undefined1 local_198 [88];
  float local_140;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_138;
  float local_e8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_e0;
  float local_90;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_338;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaveInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x66f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(this->_padding_ + 0x60);
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x672,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(byte *)(lVar1 + 0x1a6) & 1) != 0) {
    this_00 = (FWaveInstance *)this->_padding_;
    if ((this_00->WaveData).field0_0x0.DebugPtr == (USoundWave *)0x0) {
      FMixerSourceVoice::SetModulationRouting
                (this->MixerSourceVoice,(FSoundModulationDefaultRoutingSettings *)(lVar1 + 0x818));
    }
    else {
      FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
                ((FSoundModulationDefaultRoutingSettings *)local_198);
      FWaveInstance::GetEffectiveModulationSettings(this_00,&local_318,Volume);
      local_198._0_4_ = local_318.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)(local_198 + 8),&local_318.Modulators);
      local_318.Modulators.HashSize = 0;
      if (local_318.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_318.Modulators.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_318.Modulators.Elements);
      FWaveInstance::GetEffectiveModulationSettings(this_00,&local_2b8,Pitch);
      local_140 = local_2b8.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_138,&local_2b8.Modulators);
      local_2b8.Modulators.HashSize = 0;
      if (local_2b8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2b8.Modulators.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2b8.Modulators.Elements);
      FWaveInstance::GetEffectiveModulationSettings(this_00,&local_258,Highpass);
      local_e8 = local_258.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_e0,&local_258.Modulators);
      local_258.Modulators.HashSize = 0;
      if (local_258.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_258.Modulators.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_258.Modulators.Elements);
      FWaveInstance::GetEffectiveModulationSettings(this_00,&local_1f8,Lowpass);
      local_90 = local_1f8.Value;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (&local_88,&local_1f8.Modulators);
      local_1f8.Modulators.HashSize = 0;
      if (local_1f8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.Modulators.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f8.Modulators.Elements);
      FMixerSourceVoice::SetModulationRouting
                (this->MixerSourceVoice,(FSoundModulationDefaultRoutingSettings *)local_198);
      FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
                ((FSoundModulationDefaultSettings *)local_198);
    }
  }
  *(byte *)(lVar1 + 0x1a6) = *(byte *)(lVar1 + 0x1a6) & 0xfe;
  fVar4 = FMixerSourceVoice::GetVolumeModulationValue(this->MixerSourceVoice);
  fVar5 = *(float *)(lVar1 + 0x248);
  if (*(float *)(lVar1 + 0x248) <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)(lVar1 + 0x248) = fVar5;
  return;
}

// UpdatePitch @ 14652cff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdatePitch(FMixerSource *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (this->MixerBuffer == (FMixerBuffer *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8907641517682722097>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x531,"MixerBuffer");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaveInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x533,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(this->_padding_ + 0x60) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar4 = FWaveInstance::GetPitch((FWaveInstance *)this->_padding_);
  *(float *)&this->_padding_ = fVar4;
  if ((*(uint *)(this->_padding_ + 0xcc) & 0x2000) == 0) {
    lVar1 = this->_padding_;
    bVar3 = IsInAudioThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                         ,0x76f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = *(float *)(lVar1 + 0x184) * *(float *)&this->_padding_;
    *(float *)&this->_padding_ = fVar4;
  }
  fVar4 = FAudioDevice::ClampPitch((FAudioDevice *)this->_padding_,fVar4);
  *(float *)&this->_padding_ = fVar4;
  if (this->MixerBuffer != (FMixerBuffer *)0x0) {
    fVar4 = ((float)this->MixerBuffer->SampleRate / (float)*(int *)(this->_padding_ + 0x84)) * fVar4
    ;
    *(float *)&this->_padding_ = fVar4;
    FMixerSourceVoice::SetPitch(this->MixerSourceVoice,fVar4);
  }
  if (*(longlong *)this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                       ,0x54d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar4 = FWaveInstance::GetEffectiveModulationValue((FWaveInstance *)this->_padding_,Pitch);
  FMixerSourceVoice::SetModPitch(this->MixerSourceVoice,fVar4);
  uVar5 = (**(code **)(this->_padding_ + 0x70))(this);
  *(undefined4 *)(this->_padding_ + 0x15c) = uVar5;
  return;
}

// UpdateRelativeRenderCost @ 14652d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateRelativeRenderCost(FMixerSource *this)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined4 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (this->MixerSourceVoice != (FMixerSourceVoice *)0x0) {
    fVar3 = FMixerSourceVoice::GetRelativeRenderCost(this->MixerSourceVoice);
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("WaveInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x709,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(float *)(this->_padding_ + 0xa4) = fVar3;
    if (this->_padding_ != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(this->_padding_ + 0x28);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if ((this->_padding_ == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)(this->_padding_ + 0x20) = fVar3;
      LeaveCriticalSection(lpCriticalSection);
    }
    if (((-1 < AudioMixerChannel->Enabled) && (*(longlong *)(this->_padding_ + 0x60) != 0)) &&
       (-1 < AudioMixerChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FAudioSoundRelativeRenderCostFields>
                ((TLogScope<0> *)&local_30);
      *local_30 = *(undefined4 *)&this->MixerDevice->field_0xa0;
      QueryPerformanceCounter(&local_38);
      *(ulonglong *)(local_30 + 1) = CONCAT44(local_38.s.HighPart,local_38.s.LowPart);
      local_30[3] = *(undefined4 *)(this->_padding_ + 0x178);
      local_30[4] = *(undefined4 *)(*(longlong *)(this->_padding_ + 0x60) + 0x5c);
      local_30[5] = fVar3;
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
    }
  }
  return;
}

// UpdateSourceBusSends @ 14652d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateSourceBusSends(FMixerSource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FActiveSound *this_00;
  TTuple<EBusSendType,FSoundSourceBusSendInfo> *pTVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  TArray<TTuple<EBusSendType,FSoundSourceBusSendInfo>,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  FRichCurve *this_01;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8 [8];
  
  SetupBusData(this,(TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *)0x0,true);
  this_00 = *(FActiveSound **)(this->_padding_ + 0x60);
  if ((this_00 == (FActiveSound *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                         ,0x691,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar9 = FActiveSound::HasNewBusSends(this_00);
  if (this->bSendingAudioToBuses == 0) {
    if (!bVar9) {
      if ((this->DynamicBusSendInfos).ArrayNum == 0) {
        return;
      }
      goto LAB_14652d7fd;
    }
  }
  else if (!bVar9) goto LAB_14652d7fd;
  pTVar10 = FActiveSound::GetNewBusSends(this_00);
  local_108.Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar10->ArrayNum;
  pTVar3 = (TTuple<EBusSendType,FSoundSourceBusSendInfo> *)(pTVar10->AllocatorInstance).Data;
  local_100 = iVar2;
  if (iVar2 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,iVar2,0,&local_108,iVar2,&local_fc);
    ConstructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
              (local_108.Data,pTVar3,iVar2);
  }
  iVar2 = local_100;
  pFVar12 = local_108.Data + 0x20;
  pFVar14 = local_108.Data + (longlong)local_100 * 0xc0;
  while( true ) {
    if (local_100 != iVar2) {
      `TCheckedPointerIterator<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar1 = pFVar12 + -0x20;
    if (pFVar1 == pFVar14) break;
    if (*(UObjectBaseUtility **)(pFVar12 + -0x10) != (UObjectBaseUtility *)0x0) {
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      pFVar11 = UObjectBaseUtility::GetPathName
                          (*(UObjectBaseUtility **)(pFVar12 + -0x10),&local_c8,(UObject *)0x0);
      if (&local_f8 != pFVar11) {
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_f8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_f8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      FMixerSourceVoice::SetAudioBusSendInfo
                (this->MixerSourceVoice,(EBusSendType)*pFVar1,
                 *(uint *)(*(longlong *)(pFVar12 + -0x10) + 0xc),*(float *)pFVar12,&local_f8);
      this->bSendingAudioToBuses = 1;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    if (*(UObjectBaseUtility **)(pFVar12 + -8) != (UObjectBaseUtility *)0x0) {
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      pFVar11 = UObjectBaseUtility::GetPathName
                          (*(UObjectBaseUtility **)(pFVar12 + -8),local_b8,(UObject *)0x0);
      if (&local_e8 != pFVar11) {
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        local_e8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_e8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
      }
      FMixerSourceVoice::SetAudioBusSendInfo
                (this->MixerSourceVoice,(EBusSendType)*pFVar1,
                 *(uint *)(*(longlong *)(pFVar12 + -8) + 0xc),*(float *)pFVar12,&local_e8);
      this->bSendingAudioToBuses = 1;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    pFVar12 = pFVar12 + 0xc0;
  }
  FActiveSound::ResetNewBusSends(this_00);
  DestructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
            ((TTuple<EBusSendType,FSoundSourceBusSendInfo> *)local_108.Data,local_100);
  if ((TTuple<EBusSendType,FSoundSourceBusSendInfo> *)local_108.Data !=
      (TTuple<EBusSendType,FSoundSourceBusSendInfo> *)0x0) {
    FMemory::Free(local_108.Data);
  }
LAB_14652d7fd:
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  dVar5 = __real_3ff0000000000000;
  iVar2 = (this->DynamicBusSendInfos).ArrayNum;
  pFVar12 = (this->DynamicBusSendInfos).AllocatorInstance.Data;
  pFVar14 = pFVar12 + (longlong)iVar2 * 0xc0;
  do {
    if ((this->DynamicBusSendInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FMixerSource::FDynamicBusSendInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar14) {
      return;
    }
    if (pFVar12[0x18] == (FScriptContainerElement)0x2) {
      fVar16 = *(float *)pFVar12;
LAB_14652d93f:
      if (fVar7 <= fVar16) {
        fVar16 = fVar7;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
    }
    else {
      dVar15 = (double)*(float *)(pFVar12 + 0x28) - (double)*(float *)(pFVar12 + 0x24);
      if (dVar15 <= dVar5) {
        dVar15 = dVar5;
      }
      dVar15 = ((double)*(float *)(this->_padding_ + 0x14c) - (double)*(float *)(pFVar12 + 0x24)) /
               (double)(float)dVar15;
      if (dVar5 <= dVar15) {
        dVar15 = dVar5;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      if (pFVar12[0x18] != (FScriptContainerElement)0x0) {
        this_01 = FRuntimeFloatCurve::GetRichCurveConst((FRuntimeFloatCurve *)(pFVar12 + 0x30));
        fVar16 = FRichCurve::Eval(this_01,(float)dVar15,0.0);
        goto LAB_14652d93f;
      }
      dVar15 = ((double)*(float *)(pFVar12 + 0x20) - (double)*(float *)(pFVar12 + 0x1c)) *
               (double)(float)dVar15 + (double)*(float *)(pFVar12 + 0x1c);
      if (dVar5 <= dVar15) {
        dVar15 = dVar5;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      fVar16 = (float)dVar15;
    }
    if ((fVar6 < (float)((uint)(fVar16 - *(float *)pFVar12) & uVar8)) ||
       (this->bPreviousBusEnablement != (*(uint *)(this->_padding_ + 0xcc) & 1))) {
      *(float *)pFVar12 = fVar16;
      pFVar12[0xb8] = (FScriptContainerElement)0x0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      iVar13 = (int)*(float *)(pFVar12 + 0x10) + -1;
      if (*(float *)(pFVar12 + 0x10) == 0.0) {
        iVar13 = 0;
      }
      ::FString::AssignRange(&local_d8,*(wchar_t **)(pFVar12 + 8),iVar13);
      FMixerSourceVoice::SetAudioBusSendInfo
                (this->MixerSourceVoice,(EBusSendType)pFVar12[0x19],(uint)*(float *)(pFVar12 + 4),
                 fVar16,&local_d8);
      this->bPreviousBusEnablement = *(uint *)(this->_padding_ + 0xcc) & 1;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    pFVar12 = pFVar12 + 0xc0;
  } while( true );
}

// UpdateSpatialization @ 14652df30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateSpatialization(FMixerSource *this)

{
  FWaveInstance *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  FSpatializationParams *pFVar8;
  longlong lVar9;
  FSpatializationParams *pFVar10;
  FSpatializationParams local_108;
  
  dVar1 = (this->SpatializationParams).EmitterWorldRotation.X;
  dVar2 = (this->SpatializationParams).EmitterWorldRotation.Y;
  dVar3 = (this->SpatializationParams).EmitterWorldRotation.Z;
  dVar4 = (this->SpatializationParams).EmitterWorldRotation.W;
  pFVar8 = FSoundSource::GetSpatializationParams((FSoundSource *)this,&local_108);
  lVar9 = 2;
  pFVar10 = &this->SpatializationParams;
  do {
    dVar5 = (pFVar8->ListenerPosition).field0_0x0._s_0.Y;
    (pFVar10->ListenerPosition).field0_0x0._s_0.X = (pFVar8->ListenerPosition).field0_0x0._s_0.X;
    (pFVar10->ListenerPosition).field0_0x0._s_0.Y = dVar5;
    uVar6 = *(undefined8 *)&pFVar8->field_0x18;
    (pFVar10->ListenerPosition).field0_0x0._s_0.Z = (pFVar8->ListenerPosition).field0_0x0._s_0.Z;
    *(undefined8 *)&pFVar10->field_0x18 = uVar6;
    dVar5 = (pFVar8->ListenerOrientation).Y;
    (pFVar10->ListenerOrientation).X = (pFVar8->ListenerOrientation).X;
    (pFVar10->ListenerOrientation).Y = dVar5;
    dVar5 = (pFVar8->ListenerOrientation).W;
    (pFVar10->ListenerOrientation).Z = (pFVar8->ListenerOrientation).Z;
    (pFVar10->ListenerOrientation).W = dVar5;
    dVar5 = (pFVar8->EmitterPosition).field0_0x0._s_0.Y;
    (pFVar10->EmitterPosition).field0_0x0._s_0.X = (pFVar8->EmitterPosition).field0_0x0._s_0.X;
    (pFVar10->EmitterPosition).field0_0x0._s_0.Y = dVar5;
    dVar5 = (pFVar8->EmitterWorldPosition).field0_0x0._s_0.X;
    (pFVar10->EmitterPosition).field0_0x0._s_0.Z = (pFVar8->EmitterPosition).field0_0x0._s_0.Z;
    (pFVar10->EmitterWorldPosition).field0_0x0._s_0.X = dVar5;
    dVar5 = (pFVar8->EmitterWorldPosition).field0_0x0._s_0.Z;
    (pFVar10->EmitterWorldPosition).field0_0x0._s_0.Y =
         (pFVar8->EmitterWorldPosition).field0_0x0._s_0.Y;
    (pFVar10->EmitterWorldPosition).field0_0x0._s_0.Z = dVar5;
    dVar5 = (pFVar8->EmitterWorldRotation).Y;
    (pFVar10->EmitterWorldRotation).X = (pFVar8->EmitterWorldRotation).X;
    (pFVar10->EmitterWorldRotation).Y = dVar5;
    lVar9 = lVar9 + -1;
    pFVar8 = (FSpatializationParams *)&(pFVar8->EmitterWorldRotation).Z;
    pFVar10 = (FSpatializationParams *)&(pFVar10->EmitterWorldRotation).Z;
  } while (lVar9 != 0);
  this_00 = (FWaveInstance *)this->_padding_;
  (this->SpatializationParams).LastEmitterWorldRotation.X = dVar1;
  (this->SpatializationParams).LastEmitterWorldRotation.Y = dVar2;
  (this->SpatializationParams).LastEmitterWorldRotation.Z = dVar3;
  (this->SpatializationParams).LastEmitterWorldRotation.W = dVar4;
  bVar7 = FWaveInstance::GetUseSpatialization(this_00);
  if ((bVar7) || ((*(uint *)(this->_padding_ + 0xcc) & 0x80000) != 0)) {
    FMixerSourceVoice::SetSpatializationParams(this->MixerSourceVoice,&this->SpatializationParams);
  }
  return;
}

// UpdateSubmixSendLevels @ 14652e530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSource::UpdateSubmixSendLevels
          (FMixerSource *this,FSoundSubmixSendInfoBase *param_1,EMixerSourceSubmixSendStage param_2,
          TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
          *param_3)

{
  atomic<int> aVar1;
  USoundSubmixBase *pUVar2;
  FMixerSourceVoice *this_00;
  FRichCurve *this_01;
  atomic<int> *paVar3;
  float fVar4;
  double dVar5;
  TWeakPtr<Audio::FMixerSubmix,1> local_38 [3];
  
  pUVar2 = (param_1->SoundSubmix).field0_0x0.DebugPtr;
  if (pUVar2 != (USoundSubmixBase *)0x0) {
    FMixerDevice::GetSubmixInstance(this->MixerDevice,local_38,pUVar2);
    TSet<TWeakPtr<Audio::FMixerSubmix,1>,DefaultKeyFuncs<TWeakPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Emplace<TWeakPtr<Audio::FMixerSubmix,1>_const_&>
              (param_3,(TWeakPtr<Audio::FMixerSubmix,1> *)&stack0x00000010,(bool *)local_38);
    if ((*(byte *)(this->_padding_ + 0xcc) & 4) == 0) {
      fVar4 = 0.0;
    }
    else if (param_1->SendLevelControlMethod == Manual) {
      fVar4 = param_1->SendLevel;
      if (param_1->DisableManualSendClamp == false) {
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
      }
    }
    else {
      dVar5 = (double)param_1->MaxSendDistance - (double)param_1->MinSendDistance;
      if (dVar5 <= __real_3ff0000000000000) {
        dVar5 = __real_3ff0000000000000;
      }
      dVar5 = ((double)*(float *)(this->_padding_ + 0x14c) - (double)param_1->MinSendDistance) /
              (double)(float)dVar5;
      if (__real_3ff0000000000000 <= dVar5) {
        dVar5 = __real_3ff0000000000000;
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      if (param_1->SendLevelControlMethod == Linear) {
        dVar5 = ((double)param_1->MaxSendLevel - (double)param_1->MinSendLevel) *
                (double)(float)dVar5 + (double)param_1->MinSendLevel;
        if (__real_3ff0000000000000 <= dVar5) {
          dVar5 = __real_3ff0000000000000;
        }
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        fVar4 = (float)dVar5;
      }
      else {
        this_01 = FRuntimeFloatCurve::GetRichCurveConst(&param_1->CustomSendLevelCurve);
        fVar4 = FRichCurve::Eval(this_01,(float)dVar5,0.0);
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
      }
    }
    this_00 = this->MixerSourceVoice;
    if (local_38[0].WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar3 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar3 = &(local_38[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    FMixerSourceVoice::SetSubmixSendInfo(this_00,local_38,fVar4,param_2);
    if (local_38[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      aVar1 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_38[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38[0].WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// UpdateVolume @ 14652e750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSource::UpdateVolume(FMixerSource *this)

{
  FMixerSourceVoice *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  this_00 = this->MixerSourceVoice;
  fVar4 = FWaveInstance::GetDistanceAndOcclusionAttenuation((FWaveInstance *)this->_padding_);
  FMixerSourceVoice::SetDistanceAttenuation(this_00,fVar4);
  fVar4 = 0.0;
  bVar3 = FAudioDevice::IsAudioDeviceMuted((FAudioDevice *)this->_padding_);
  if (!bVar3) {
    fVar4 = __real_3f800000;
    if ((*(byte *)(*(longlong *)(this->_padding_ + 0x60) + 0x1a3) & 0x10) == 0) {
      fVar4 = *(float *)(this->_padding_ + 0x180);
    }
    lVar1 = this->_padding_;
    bVar3 = IsInAudioThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInAudioThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                           ,0x776,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar7 = *(float *)(lVar1 + 0x4b0);
    fVar5 = FWaveInstance::GetVolume((FWaveInstance *)this->_padding_);
    fVar6 = FWaveInstance::GetDynamicVolume((FWaveInstance *)this->_padding_);
    fVar6 = fVar6 * fVar5 * fVar7 * fVar4;
    if (this->bBypassingSubmixModulation != false) {
      fVar4 = GetInheritedSubmixVolumeModulation(this);
      fVar6 = fVar6 * fVar4;
    }
    fVar4 = FSoundSource::GetDebugVolume((FSoundSource *)this,fVar6);
    if (__real_40800000 <= fVar4) {
      fVar4 = __real_40800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if ((*(longlong *)(this->_padding_ + 0x60) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveSound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x5b6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(longlong *)this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("WaveData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSource.cpp"
                           ,0x5b9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar7 = FWaveInstance::GetEffectiveModulationValue((FWaveInstance *)this->_padding_,Volume);
    FMixerSourceVoice::SetModVolume(this->MixerSourceVoice,fVar7);
  }
  FMixerSourceVoice::SetVolume(this->MixerSourceVoice,fVar4);
  return;
}

// UseObjectBasedSpatialization @ 14652e910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::UseObjectBasedSpatialization(FMixerSource *this)

{
  FAudioSpatializationInterfaceInfo *pFVar1;
  FAudioSpatializationInterfaceInfo local_28;
  
  pFVar1 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                     ((FAudioDevice *)this->MixerDevice,&local_28);
  if (((*(int *)((longlong)&this->_padding_ + 4) <=
        pFVar1->MaxChannelsSupportedBySpatializationPlugin) &&
      ((*(byte *)(this->_padding_ + 0x5c0) & 2) != 0)) && (*(int *)(this->_padding_ + 0xd0) == 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SpatializationPlugin.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SpatializationPlugin.SharedReferenceCount.ReferenceController);
  return false;
}

// UseOcclusionPlugin @ 14652e980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::UseOcclusionPlugin(FMixerSource *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if ((((iVar1 == 1) || (iVar1 == 2)) && ((*(byte *)(this->_padding_ + 0x5c0) & 4) != 0)) &&
     (*(longlong *)(this->_padding_ + 0xe0) != 0)) {
    return true;
  }
  return false;
}

// UseReverbPlugin @ 14652e9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::UseReverbPlugin(FMixerSource *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if ((((iVar1 == 1) || (iVar1 == 2)) && ((*(byte *)(this->_padding_ + 0x5c0) & 8) != 0)) &&
     (*(longlong *)(this->_padding_ + 0xe8) != 0)) {
    return true;
  }
  return false;
}

// UseSourceDataOverridePlugin @ 14652ea00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::UseSourceDataOverridePlugin(FMixerSource *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if ((((iVar1 == 1) || (iVar1 == 2)) && ((*(byte *)(this->_padding_ + 0x5c0) & 0x10) != 0)) &&
     (*(longlong *)(this->_padding_ + 0xf0) != 0)) {
    return true;
  }
  return false;
}

// UseSpatializationPlugin @ 14652ea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSource::UseSpatializationPlugin(FMixerSource *this)

{
  FAudioSpatializationInterfaceInfo *pFVar1;
  FAudioSpatializationInterfaceInfo local_28;
  
  pFVar1 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                     ((FAudioDevice *)this->MixerDevice,&local_28);
  if (((*(int *)((longlong)&this->_padding_ + 4) <=
        pFVar1->MaxChannelsSupportedBySpatializationPlugin) &&
      ((*(byte *)(this->_padding_ + 0x5c0) & 2) != 0)) &&
     (*(longlong *)(this->_padding_ + 0xd8) != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SpatializationPlugin.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SpatializationPlugin.SharedReferenceCount.ReferenceController);
  return false;
}

