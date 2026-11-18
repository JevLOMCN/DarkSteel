// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 21

// <lambda_1> @ 146584dd0

<lambda_1> * __thiscall
`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  USoundWave *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(FSoundSourceDecoder **)this = param_1->__this;
  pUVar1 = (param_1->InitData).SoundWave.field0_0x0.DebugPtr;
  *(USoundWave **)((longlong)this + 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(float *)((longlong)this + 0x10) = (param_1->InitData).SeekTime;
  *(float *)((longlong)this + 0x14) = (param_1->InitData).PitchScale;
  *(float *)((longlong)this + 0x18) = (param_1->InitData).VolumeScale;
  *(bool *)((longlong)this + 0x1c) = (param_1->InitData).bForceSyncDecode;
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&(param_1->InitData).Handle;
  *(uint *)((longlong)this + 0x28) = (param_1->InitData).Handle.SoundWaveName.Number;
  *(FDecodingSoundSource **)((longlong)this + 0x30) = (param_1->DecodingSoundWaveDataPtr).Object;
  pTVar2 = (param_1->DecodingSoundWaveDataPtr).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x38) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FSoundSourceDecoder @ 146585000

FSoundSourceDecoder * __thiscall
Audio::FSoundSourceDecoder::FSoundSourceDecoder(FSoundSourceDecoder *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  pTVar2 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7FSoundSourceDecoder_Audio__6B_;
  this->AudioThreadId = 0;
  this->AudioDevice = (FAudioDevice *)0x0;
  this->SampleRate = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DecodingSourcesCritSec,4000);
  *(undefined8 *)&this->InitializingDecodingSources = 0;
  *(undefined8 *)&(this->InitializingDecodingSources).field_0x8 = 0;
  *(undefined8 *)&(this->InitializingDecodingSources).field_0x20 = 0;
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x28 = 0;
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x34 = 0;
  *(undefined8 *)&(this->InitializingDecodingSources).field_0x40 = 0;
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x48 = 0;
  *(undefined8 *)&this->DecodingSources = 0;
  *(undefined8 *)&(this->DecodingSources).field_0x8 = 0;
  *(undefined8 *)&(this->DecodingSources).field_0x20 = 0;
  *(undefined4 *)&(this->DecodingSources).field_0x28 = 0;
  *(undefined4 *)&(this->DecodingSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->DecodingSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DecodingSources).field_0x34 = 0;
  *(undefined8 *)&(this->DecodingSources).field_0x40 = 0;
  *(undefined4 *)&(this->DecodingSources).field_0x48 = 0;
  *(undefined8 *)&this->PrecachingSources = 0;
  *(undefined8 *)&(this->PrecachingSources).field_0x8 = 0;
  *(undefined8 *)&(this->PrecachingSources).field_0x20 = 0;
  *(undefined4 *)&(this->PrecachingSources).field_0x28 = 0;
  *(undefined4 *)&(this->PrecachingSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrecachingSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecachingSources).field_0x34 = 0;
  *(undefined8 *)&(this->PrecachingSources).field_0x40 = 0;
  *(undefined4 *)&(this->PrecachingSources).field_0x48 = 0;
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar2 = pTVar1;
  }
  (this->CommandQueue).Tail = pTVar2;
  (this->CommandQueue).Head = pTVar2;
  return this;
}

// ~FSoundSourceDecoder @ 1465853a0

void __thiscall Audio::FSoundSourceDecoder::~FSoundSourceDecoder(FSoundSourceDecoder *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoundSourceDecoder_Audio__6B_;
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  *(undefined4 *)&(this->PrecachingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrecachingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecachingSources);
  *(undefined4 *)&(this->DecodingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DecodingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DecodingSources);
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitializingDecodingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitializingDecodingSources);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodingSourcesCritSec);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 146585470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>::operator()(void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FString local_18;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)this + 0x20);
    local_18.Data._8_8_ = (longlong)this + 0x30;
    TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&>_>
              ((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0xa0),
               (TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&> *)
               &stack0x00000008,(bool *)&local_18);
    if (5 < (byte)LogAudioMixer._0_1_) {
      ::FName::ToString((FName *)((longlong)this + 0x24),&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146585535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddReferencedObjects @ 1465857e0

void __thiscall
Audio::FSoundSourceDecoder::AddReferencedObjects
          (FSoundSourceDecoder *this,FReferenceCollector *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *pTVar8;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *pTVar9;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int iVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_198 [8];
  ulonglong local_190;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *local_188;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  
  iVar17 = 0;
  iStack_148 = 0;
  iVar16 = 0;
  puVar1 = &(this->PrecachingSources).field_0x10;
  iVar4 = *(int *)&(this->PrecachingSources).field_0x28;
  local_188 = &this->PrecachingSources;
  local_190 = 1;
  iVar20 = 0;
  uStack_144 = 1;
  iStack_134 = iVar20;
  local_130 = iVar20;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->PrecachingSources).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uStack_144 = *puVar19;
    local_130 = iVar16;
    iStack_148 = iVar17;
    while (uStack_144 == 0) {
      lVar12 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      uStack_144 = 1;
      iStack_134 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14658589d;
      uStack_144 = puVar19[lVar12 + 1];
    }
    uStack_144 = -uStack_144 & uStack_144;
    uVar3 = (ulonglong)uStack_144 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_120 = (int)lVar12;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar4 < iStack_134) {
      iStack_134 = iVar4;
    }
  }
LAB_14658589d:
  iStack_128 = *(int *)&(this->PrecachingSources).field_0x8 -
               *(int *)&(this->PrecachingSources).field_0x34;
  uVar15 = *(uint *)&(this->PrecachingSources).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_144,iStack_148);
  uStack_138 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_134;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_100._28_4_ = local_5c;
  TStack_100.BaseBitIndex = local_130;
  uStack_e0 = CONCAT44(uStack_124,iStack_128);
  local_150 = local_188;
  local_140 = puVar1;
  local_108 = local_188;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_188;
  uVar5 = *(uint *)&(this->PrecachingSources).field_0x28;
  if (uVar15 != uVar5) {
    puVar18 = *(undefined1 **)&(this->PrecachingSources).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1465859c0;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_11c = (int)lVar12;
    uVar15 = local_11c + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_1465859c0:
  while( true ) {
    pTVar9 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_100.CurrentBitIndex == uVar15) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,*(longlong *)pTVar9 + (longlong)TStack_100.CurrentBitIndex * 0x38 + 8,0,0);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  iVar4 = *(int *)&(this->InitializingDecodingSources).field_0x28;
  puVar1 = &(this->InitializingDecodingSources).field_0x10;
  local_188 = (TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
               *)&this->InitializingDecodingSources;
  uStack_174 = (uint)local_190;
  iStack_164 = iVar16;
  local_160 = iVar16;
  iStack_178 = iVar17;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->InitializingDecodingSources).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_146585abd;
      uVar15 = puVar19[lVar12 + 1];
    }
    uStack_174 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_118 = (int)lVar12;
    iStack_164 = local_160 + -1 + local_118;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_146585abd:
  iStack_15c = local_3c;
  iStack_158 = *(int *)&(this->InitializingDecodingSources).field_0x8 -
               *(int *)&(this->InitializingDecodingSources).field_0x34;
  uVar15 = *(uint *)&(this->InitializingDecodingSources).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  uStack_168 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_d0.CurrentBitIndex = iStack_164;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_d0._28_4_ = local_3c;
  TStack_d0.BaseBitIndex = local_160;
  uStack_b0 = CONCAT44(uStack_154,iStack_158);
  local_180 = (TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
               *)local_188;
  local_170 = puVar1;
  local_d8 = (TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
              *)local_188;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_188;
  uVar5 = *(uint *)&(this->InitializingDecodingSources).field_0x28;
  if (uVar15 != uVar5) {
    puVar18 = *(undefined1 **)&(this->InitializingDecodingSources).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146585be0;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_114 = (int)lVar12;
    uVar15 = (uVar14 - 1) + local_114;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_146585be0:
  while( true ) {
    pTVar2 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d0.CurrentBitIndex == uVar15) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar2 == (TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
                   *)pTVar8)) break;
    lVar12 = *(longlong *)pTVar2;
    pTVar6 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_d0.CurrentBitIndex * 0x20 + 0x10 + lVar12);
    lVar12 = *(longlong *)((longlong)TStack_d0.CurrentBitIndex * 0x20 + 8 + lVar12);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar12 + 0x10,0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->DecodingSources).field_0x10;
  iVar4 = *(int *)&(this->DecodingSources).field_0x28;
  pTVar2 = &this->DecodingSources;
  iStack_164 = iVar16;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->DecodingSources).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    iVar20 = iVar16;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar20;
      iVar17 = iVar17 + 0x20;
      iVar20 = iVar20 + 1;
      iStack_164 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_146585d42;
      uVar15 = puVar19[lVar12 + 1];
    }
    local_190 = (ulonglong)(-uVar15 & uVar15);
    uVar3 = local_190 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_110 = (int)lVar12;
    iStack_164 = iVar17 + -1 + local_110;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_146585d42:
  uVar15 = *(uint *)&(this->DecodingSources).field_0x28;
  uStack_174 = (uint)local_190;
  iStack_15c = iStack_134;
  iStack_158 = *(int *)&(this->DecodingSources).field_0x8 -
               *(int *)&(this->DecodingSources).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_174,iVar20);
  uStack_168 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_164;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = iStack_134;
  TStack_a0.BaseBitIndex = iVar17;
  uStack_80 = CONCAT44(uStack_154,iStack_158);
  local_160 = iVar17;
  iStack_178 = iVar20;
  local_180 = pTVar2;
  local_170 = puVar1;
  local_a8 = pTVar2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->DecodingSources).field_0x28;
  if (uVar15 != uVar5) {
    puVar18 = *(undefined1 **)&(this->DecodingSources).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_146585e70;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_10c = (int)lVar12;
    uVar15 = (uVar14 - 1) + local_10c;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_146585e70:
  while( true ) {
    pTVar10 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_198[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    {
                    /* WARNING: Could not recover jumptable at 0x000146585f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    lVar12 = *(longlong *)pTVar10;
    pTVar6 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_a0.CurrentBitIndex * 0x20 + 0x10 + lVar12);
    lVar12 = *(longlong *)((longlong)TStack_a0.CurrentBitIndex * 0x20 + 8 + lVar12);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar12 + 0x10,0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// CreateSourceHandle @ 146585fc0

FDecodingSoundSourceHandle * __thiscall
Audio::FSoundSourceDecoder::CreateSourceHandle
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *__return_storage_ptr__,
          USoundWave *param_1)

{
  undefined4 uVar1;
  
  (__return_storage_ptr__->SoundWaveName).ComparisonIndex = 0;
  (__return_storage_ptr__->SoundWaveName).Number = 0;
  __return_storage_ptr__->Id = SoundWaveDecodingHandles;
  SoundWaveDecodingHandles = SoundWaveDecodingHandles + 1;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->SoundWaveName).ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (__return_storage_ptr__->SoundWaveName).Number = uVar1;
  return __return_storage_ptr__;
}

// EnqueueDecoderCommand @ 146586120

void __thiscall
Audio::FSoundSourceDecoder::EnqueueDecoderCommand
          (FSoundSourceDecoder *this,TFunction<void___cdecl(void)> *param_1)

{
  longlong lVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  pTVar3 = ::operator_new(0x40);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    lVar1 = *(longlong *)param_1;
    *(longlong *)&pTVar3->Item = lVar1;
    *(undefined8 *)&(pTVar3->Item).field_0x28 = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar4)();
    }
    pTVar2 = (this->CommandQueue).Head;
    (this->CommandQueue).Head = pTVar3;
    pTVar2->NextNode = pTVar3;
  }
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// GetReferencerName @ 1465866d0

FString * __thiscall
Audio::FSoundSourceDecoder::GetReferencerName
          (FSoundSourceDecoder *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Audio::FSoundSourceDecoder");
  return __return_storage_ptr__;
}

// GetSourceBuffer @ 146586700

bool __thiscall
Audio::FSoundSourceDecoder::GetSourceBuffer
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1,int param_2,int param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FDecodingSoundSource *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  if (param_1->Id == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle.Id != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundWaveDecoder.cpp"
                       ,0x2af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->DecodingSources).field_0x8 != *(int *)&(this->DecodingSources).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DecodingSources).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DecodingSources).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->DecodingSources).field_0x48 - 1U & param_1->Id) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->DecodingSources);
        if (*puVar5 == param_1->Id) {
          if (puVar5 != (uint *)0x0) {
            pTVar7 = *(TReferenceControllerBase<1> **)(puVar5 + 4);
            this_00 = *(FDecodingSoundSource **)(puVar5 + 2);
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (this_00 == (FDecodingSoundSource *)0x0) goto LAB_1465867c9;
            FDecodingSoundSource::GetAudioBuffer(this_00,param_2,param_3,param_4);
            bVar2 = true;
            goto LAB_1465867cc;
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_1465867c9:
  bVar2 = false;
LAB_1465867cc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Init @ 1465869c0

void __thiscall
Audio::FSoundSourceDecoder::Init(FSoundSourceDecoder *this,FAudioDevice *param_1,int param_2)

{
  this->AudioDevice = param_1;
  this->SampleRate = param_2;
  return;
}

// InitDecodingSource @ 1465869d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundSourceDecoder::InitDecodingSource(FSoundSourceDecoder *this,FSourceDecodeInit *param_1)

{
  uint uVar1;
  USoundWave *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  TPairInitializer<int_const_&,Audio::FSourceDecodeInit_const_&> local_res10;
  FName local_res20;
  FString local_48;
  FString local_38;
  FDecodingSoundSourceHandle *local_28;
  FSourceDecodeInit *local_20;
  
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundWaveDecoder.cpp"
                         ,0x20e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar2 = (param_1->SoundWave).field0_0x0.DebugPtr;
  if (pUVar2 == (USoundWave *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return false;
  }
  if (pUVar2->NumChannels == 0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    local_res10.Value = (FSourceDecodeInit *)pUVar2->_padding_;
    ::FName::ToString((FName *)&local_res10.Value,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  else {
    if (pUVar2->NumChannels - 1U < 2) {
      if (pUVar2->bProcedural != '\0' || pUVar2->bIsSourceBus != '\0') {
        if ((byte)LogAudioMixer._0_1_ < 3) {
          return false;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        return false;
      }
      iVar7 = (pUVar2->PrecacheState).Counter;
      if (iVar7 == 1) {
        uVar1 = (param_1->Handle).Id;
        local_28 = &param_1->Handle;
        if (*(int *)&(this->PrecachingSources).field_0x8 !=
            *(int *)&(this->PrecachingSources).field_0x34) {
          puVar8 = *(undefined1 **)&(this->PrecachingSources).field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->PrecachingSources).field_0x38;
          }
          iVar7 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->PrecachingSources).field_0x48 - 1U & uVar1) * 4
                          );
          if (iVar7 != -1) {
            lVar3 = *(longlong *)&(this->PrecachingSources).field_0x0;
            do {
              if (*(uint *)((longlong)iVar7 * 0x38 + lVar3) == uVar1) {
                return true;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x38 + 0x30 + lVar3);
            } while (iVar7 != -1);
          }
        }
        local_20 = param_1;
        TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,Audio::FSourceDecodeInit_const_&>_>
                  ((TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
                    *)&this->PrecachingSources,&local_res10,(bool *)&local_28);
        return true;
      }
      if (iVar7 == 0) {
        (**(code **)(this->AudioDevice->_padding_ + 0x60))
                  (this->AudioDevice,(param_1->SoundWave).field0_0x0.DebugPtr,1,1,0);
      }
      if (((((param_1->SoundWave).field0_0x0.DebugPtr)->PrecacheState).Counter != 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InitData.SoundWave->GetPrecacheState() == ESoundWavePrecacheState::Done"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundWaveDecoder.cpp"
                             ,0x239,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = InitDecodingSourceInternal(this,param_1);
      return bVar5;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    local_res20 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res20,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

// InitDecodingSourceInternal @ 146586c30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundSourceDecoder::InitDecodingSourceInternal
          (FSoundSourceDecoder *this,FSourceDecodeInit *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  atomic<int> aVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  FAudioDevice *pFVar8;
  USoundWave *pUVar9;
  longlong lVar10;
  TNode *pTVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMixerBuffer *pFVar16;
  TSharedPtr<Audio::FMixerSourceBuffer,1> *pTVar17;
  longlong *plVar18;
  TNode *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  atomic<int> *paVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *local_150;
  TReferenceControllerBase<1> *local_148;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_140;
  TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&> local_130;
  FString local_120;
  FMixerSourceBufferInitArgs local_108;
  FDecodingSoundSourceHandle *local_c8;
  TReferenceControllerBase<1> **local_c0;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  TSharedPtr<Audio::FMixerSourceBuffer,1> local_88 [5];
  
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  pTVar15 = ::operator_new(0x108);
  pTVar20 = pTVar22;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = this->AudioDevice;
    pTVar15->_padding_ = *(longlong *)&param_1->Handle;
    pTVar15->SharedReferenceCount = (atomic<int>)(param_1->Handle).SoundWaveName.Number;
    pTVar15->WeakReferenceCount = (atomic<int>)0x0;
    pUVar9 = (param_1->SoundWave).field0_0x0.DebugPtr;
    pTVar15[1]._padding_ = (longlong)pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USoundWave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar15 + 2),4000);
    pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[5]._padding_ = 0;
    pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[6]._padding_ = 0;
    pTVar15[6].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar15[6].WeakReferenceCount = (atomic<int>)param_1->SeekTime;
    *(undefined4 *)&pTVar15[7]._padding_ = 0;
    bVar13 = param_1->bForceSyncDecode;
    pTVar15[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[8]._padding_ = 0;
    pTVar15[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar15[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar15[9]._padding_ + 4) = 0x3f800000;
    pTVar15[9].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar15[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[10]._padding_ = 0;
    pTVar15[10].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar15[10].WeakReferenceCount = 1;
    pTVar15[0xb]._padding_ = 0;
    pTVar15[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar15[0xc]._padding_ = 0;
    pTVar15[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[0xd]._padding_ = 0;
    pTVar15[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[0xe]._padding_ = 0;
    pTVar15[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[0xf]._padding_ = 0;
    pTVar15[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[0xf].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar15[0x10]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar15[0x10]._padding_ + 2) = 0;
    *(bool *)((longlong)&pTVar15[7]._padding_ + 4) = bVar13;
    *(undefined1 *)((longlong)&pTVar15[0xc]._padding_ + 4) = 1;
    aVar1 = (atomic<int>)param_1->VolumeScale;
    pTVar15[0xb].WeakReferenceCount = aVar1;
    pTVar15[0xb].SharedReferenceCount = aVar1;
    *(atomic<int> *)((longlong)&pTVar15[0xb]._padding_ + 4) = aVar1;
    *(undefined1 *)((longlong)&pTVar15[0xc]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar15[0xc]._padding_ = 0;
    pTVar15[9].SharedReferenceCount = (atomic<int>)param_1->PitchScale;
    if (pFVar8 != (FAudioDevice *)0x0) {
      pTVar15->WeakReferenceCount = (atomic<int>)pFVar8->DeviceID;
    }
    pFVar16 = FMixerBuffer::Init(pFVar8,(param_1->SoundWave).field0_0x0.DebugPtr,true);
    *(FMixerBuffer **)&pTVar15[1].SharedReferenceCount = pFVar16;
    pTVar20 = pTVar15;
  }
  local_150 = pTVar20;
  pTVar15 = ::operator_new(0x18);
  local_148 = pTVar22;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDecodingSoundSource_Audio__U__DefaultDeleter_VFDecodingSoundSource_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15[1]._padding_ = (longlong)pTVar20;
    local_148 = pTVar15;
  }
  if ((local_150 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  pTVar20 = local_150;
  aVar1 = (atomic<int>)this->SampleRate;
  local_150[6].SharedReferenceCount = aVar1;
  if ((local_150[1]._padding_ != 0) &&
     (lVar10._0_4_ = local_150[1].SharedReferenceCount,
     lVar10._4_4_ = local_150[1].WeakReferenceCount, lVar10 != 0)) {
    bVar6 = *(byte *)(local_150[1]._padding_ + 0x19b);
    lpCriticalSection = (LPCRITICAL_SECTION)(local_150 + 2);
    aVar2 = local_150[6].WeakReferenceCount;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    local_108.AudioDeviceID = *(uint *)&pTVar20->WeakReferenceCount;
    local_108.StartTime = *(float *)&pTVar20[6].WeakReferenceCount;
    local_108.Buffer = *(FMixerBuffer **)&pTVar20[1].SharedReferenceCount;
    local_108.SoundWave = (USoundWave *)pTVar20[1]._padding_;
    local_108.bForceSyncDecode = *(bool *)((longlong)&pTVar20[7]._padding_ + 4);
    local_108.AudioComponentID = 0;
    local_108.InstanceID = 0;
    local_108.AudioMixerNumOutputFrames = 0;
    local_108.bIsPreviewSound = false;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_108.SampleRate = (int)aVar1;
    local_108.LoopingMode = (bVar6 & 1) * 2;
    local_108.bIsSeeking = 0.0 < (float)aVar2;
    pTVar17 = FMixerSourceBuffer::Create(local_88,&local_108,&local_140);
    paVar21 = &pTVar20[4].SharedReferenceCount;
    if ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)paVar21 != pTVar17) {
      *(FMixerSourceBuffer **)&paVar21->field_0x0 = pTVar17->Object;
      pTVar17->Object = (FMixerSourceBuffer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pTVar20 + 5),&pTVar17->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88[0].SharedReferenceCount.ReferenceController);
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
    if ((FAudioParameter *)local_140.AllocatorInstance.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    lVar10 = *(longlong *)&paVar21->field_0x0;
    LeaveCriticalSection(lpCriticalSection);
    if (lVar10 != 0) {
      if ((local_150 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      *(bool *)((longlong)&local_150[7]._padding_ + 4) = param_1->bForceSyncDecode;
      local_c0 = &local_150;
      local_c8 = &param_1->Handle;
      TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&>_>
                ((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
                  *)&this->InitializingDecodingSources,&local_130,(bool *)&local_c8);
      pUVar9 = (param_1->SoundWave).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USoundWave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      pTVar20 = local_148;
      fVar3 = param_1->SeekTime;
      fVar4 = param_1->PitchScale;
      fVar5 = param_1->VolumeScale;
      bVar13 = param_1->bForceSyncDecode;
      lVar10 = *(longlong *)&param_1->Handle;
      uVar7 = (param_1->Handle).SoundWaveName.Number;
      local_130.Key = (int *)local_150;
      if (local_148 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_148->SharedReferenceCount = (atomic<int>)((int)local_148->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = (code *)0x0;
      plVar18 = FMemory::Malloc(0x48,8);
      plVar18[1] = (longlong)this;
      *plVar18 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::`5'::<lambda_1>,0,1>
                  ::_vftable_;
      plVar18[2] = (longlong)pUVar9;
      local_90 = plVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USoundWave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      plVar18[5] = lVar10;
      *(float *)(plVar18 + 3) = fVar3;
      *(float *)((longlong)plVar18 + 0x1c) = fVar4;
      *(float *)(plVar18 + 4) = fVar5;
      *(uint *)(plVar18 + 6) = uVar7;
      *(bool *)((longlong)plVar18 + 0x24) = bVar13;
      plVar18[7] = (longlong)local_130.Key;
      plVar18[8] = (longlong)pTVar20;
      if (plVar18 != (longlong *)&DAT_fffffffffffffff8) {
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,void>
                   ::Call;
      }
      pTVar19 = ::operator_new(0x40);
      if (pTVar19 != (TNode *)0x0) {
        pTVar19->NextNode = (TNode *)0x0;
        *(code **)&pTVar19->Item = local_b8;
        *(undefined8 *)&(pTVar19->Item).field_0x28 = 0;
        if (local_b8 != (code *)0x0) {
          plVar18 = local_a8;
          if (local_90 != (longlong *)0x0) {
            plVar18 = local_90;
          }
          (**(code **)*plVar18)();
        }
        pTVar11 = (this->CommandQueue).Head;
        (this->CommandQueue).Head = pTVar19;
        pTVar11->NextNode = pTVar19;
      }
      if (local_b8 != (code *)0x0) {
        plVar18 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar18 = local_90;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar13 = true;
      goto LAB_1465871aa;
    }
  }
  if (2 < (byte)LogAudioMixer._0_1_) {
    pUVar9 = (param_1->SoundWave).field0_0x0.DebugPtr;
    if (pUVar9 != (USoundWave *)0x0) {
      local_130.Value = (TSharedPtr<Audio::FDecodingSoundSource,1> *)pUVar9->_padding_;
      ::FName::ToString((FName *)&local_130.Value,&local_120);
      pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if ((pTVar22 != (TReferenceControllerBase<1> *)0x0) &&
       (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = false;
LAB_1465871aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  return bVar13;
}

// IsFinished @ 1465871f0

bool __thiscall
Audio::FSoundSourceDecoder::IsFinished
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->DecodingSources).field_0x8 != *(int *)&(this->DecodingSources).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DecodingSources).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DecodingSources).field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->DecodingSources).field_0x48 - 1U & param_1->Id) * 4)
    ;
    if (uVar2 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->DecodingSources);
        if (*puVar4 == param_1->Id) {
          puVar3 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if ((((puVar3 != (uint *)0x0) && (lVar1 = *(longlong *)puVar3, lVar1 != 0)) &&
              (*(int *)(lVar1 + 0x70) != 0)) && (*(char *)(lVar1 + 0x102) == '\0')) {
            bVar6 = false;
            goto LAB_14658727a;
          }
          break;
        }
        uVar2 = puVar4[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  bVar6 = true;
LAB_14658727a:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// IsInitialized @ 1465872e0

bool __thiscall
Audio::FSoundSourceDecoder::IsInitialized
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->DecodingSources).field_0x8 != *(int *)&(this->DecodingSources).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DecodingSources).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DecodingSources).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->DecodingSources).field_0x48 - 1U & param_1->Id) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->DecodingSources);
        if (*puVar5 == param_1->Id) {
          puVar7 = puVar5 + 2;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            if (*(longlong *)puVar7 == 0) {
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
            bVar2 = *(int *)(*(longlong *)puVar7 + 0x70) != 0;
            goto LAB_14658736a;
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  bVar2 = true;
LAB_14658736a:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// PumpDecoderCommandQueue @ 146587670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Audio::FSoundSourceDecoder::PumpDecoderCommandQueue(FSoundSourceDecoder *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar7 = local_58, uVar11 = uStack_60, lVar10 = local_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar11;
    local_78 = pcVar8;
    uStack_70 = uVar9;
    if (local_48 != 0) {
      plVar13 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar13 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar8 = local_78;
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar11);
  }
  if (local_78 != (code *)0x0) {
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// RemoveDecodingSource @ 146587f80

void __thiscall
Audio::FSoundSourceDecoder::RemoveDecodingSource
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint local_res8 [2];
  
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = param_1->Id;
    if (*(int *)&(this->DecodingSources).field_0x8 != *(int *)&(this->DecodingSources).field_0x34) {
      TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
                         *)&this->DecodingSources,local_res8[0],(int *)local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x000146587fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Reset @ 1465880e0

void __thiscall Audio::FSoundSourceDecoder::Reset(FSoundSourceDecoder *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  PumpDecoderCommandQueue(this);
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
             *)&this->DecodingSources);
    TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
             *)&this->InitializingDecodingSources);
    TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
             *)&this->PrecachingSources);
                    /* WARNING: Could not recover jumptable at 0x000146588132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSourcePitchScale @ 1465881e0

void __thiscall
Audio::FSoundSourceDecoder::SetSourcePitchScale
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1,float param_2)

{
  return;
}

// SetSourceVolumeScale @ 1465881f0

void __thiscall
Audio::FSoundSourceDecoder::SetSourceVolumeScale
          (FSoundSourceDecoder *this,FDecodingSoundSourceHandle *param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  float fVar8;
  
  lpCriticalSection = &this->DecodingSourcesCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->DecodingSources).field_0x8 != *(int *)&(this->DecodingSources).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DecodingSources).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DecodingSources).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->DecodingSources).field_0x48 - 1U & param_1->Id) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->DecodingSources);
        if (*puVar5 == param_1->Id) {
          puVar7 = puVar5 + 2;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            if ((*(longlong *)puVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar1 = *(longlong *)puVar7;
            *(float *)(lVar1 + 0xbc) = param_2;
            if (*(char *)(lVar1 + 0xc4) == '\0') {
              fVar8 = (param_2 - *(float *)(lVar1 + 0xb4)) * __real_3b000000;
              param_2 = *(float *)(lVar1 + 0xb4);
            }
            else {
              *(float *)(lVar1 + 0xb4) = param_2;
              fVar8 = 0.0;
              *(undefined1 *)(lVar1 + 0xc4) = 0;
            }
            *(float *)(lVar1 + 0xc0) = fVar8;
            *(float *)(lVar1 + 0xb8) = param_2;
            *(int *)(lVar1 + 200) = *(int *)(lVar1 + 0x84) + 0x200;
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146588344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Update @ 1465888f0

void __thiscall Audio::FSoundSourceDecoder::Update(FSoundSourceDecoder *this)

{
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *this_01;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *pTVar5;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  Type TVar10;
  FMixerSourceBuffer *pFVar11;
  ICompressedAudioInfo *pIVar12;
  longlong lVar13;
  ulonglong uVar14;
  FSourceDecodeInit *pFVar15;
  undefined1 *puVar16;
  longlong lVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  ForAnyElementType FVar25;
  float fVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  undefined8 local_160;
  uint local_158;
  undefined4 local_154;
  uint local_150;
  undefined1 local_14c [4];
  uint local_148 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<int,TSharedPtr<Audio::FDecodingSoundSource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>_>
  *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_7c;
  undefined4 local_5c;
  
  bVar7 = IsInAudioThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundWaveDecoder.cpp"
                         ,0x261,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_130 = 0;
  puVar21 = &(this->PrecachingSources).field_0x10;
  local_168.Data = (FScriptContainerElement *)0x0;
  this_01 = &this->PrecachingSources;
  local_160 = 0;
  iVar9 = *(int *)&(this->PrecachingSources).field_0x28;
  uStack_12c = 1;
  local_118 = 0;
  iStack_11c = local_118;
  if (iVar9 != 0) {
    puVar22 = *(uint **)&(this->PrecachingSources).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar21;
    }
    uVar23 = *puVar22;
    local_118 = 0;
    while (uVar23 == 0) {
      lVar13 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1465889dd;
      uVar23 = puVar22[lVar13 + 1];
    }
    uStack_12c = -uVar23 & uVar23;
    uVar14 = (ulonglong)uStack_12c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_108 = (int)lVar13;
    iStack_11c = local_108 + -1 + local_118;
    if (iVar9 < iStack_11c) {
      iStack_11c = iVar9;
    }
  }
LAB_1465889dd:
  uVar23 = *(uint *)&(this->PrecachingSources).field_0x28;
  uStack_114 = local_7c;
  uVar20 = uVar23 & 0xffffffe0;
  iStack_110 = *(int *)&(this->PrecachingSources).field_0x8 -
               *(int *)&(this->PrecachingSources).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_f0.CurrentBitIndex = iStack_11c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar23 >> 5;
  TStack_f0._28_4_ = local_7c;
  TStack_f0.BaseBitIndex = local_118;
  uStack_d0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = this_01;
  local_128 = puVar21;
  local_f8 = this_01;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar21;
  if ((((int)uVar23 < 0) || (iVar9 < (int)uVar23)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->PrecachingSources).field_0x28;
  if (uVar23 != uVar2) {
    puVar24 = *(undefined1 **)&(this->PrecachingSources).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar21;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar13 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_146588ae0;
      uVar23 = *(uint *)(puVar24 + lVar13 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_104 = (int)lVar13;
    uVar23 = local_104 + -1 + uVar20;
    if ((int)uVar2 < (int)uVar23) {
      uVar23 = uVar2;
    }
  }
LAB_146588ae0:
  while( true ) {
    pTVar5 = local_f8;
    if (*(int *)(&local_f8->field_0x0 + 8) - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_f0.CurrentBitIndex == uVar23) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) && (pTVar5 == this_01)
       ) break;
    lVar13 = *(longlong *)&pTVar5->field_0x0;
    local_158 = *(uint *)((longlong)TStack_f0.CurrentBitIndex * 0x38 + lVar13);
    pFVar15 = (FSourceDecodeInit *)((longlong)TStack_f0.CurrentBitIndex * 0x38 + 8 + lVar13);
    if ((((pFVar15->SoundWave).field0_0x0.DebugPtr)->PrecacheState).Counter == 2) {
      InitDecodingSourceInternal(this,pFVar15);
      if (((local_168.Data <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           local_168.Data + (longlong)(int)local_160._4_4_ * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (uint)local_160;
      if ((uint)local_160 == local_160._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_168,(int *)((longlong)&local_160 + 4));
      }
      local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
      *(uint *)(local_168.Data + (longlong)iVar9 * 4) = local_158;
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  uVar14 = (ulonglong)(int)(uint)local_160;
  local_150 = (uint)local_160;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168.Data + uVar14 * 4);
  FVar25.Data = local_168.Data;
  local_140 = pTVar19;
LAB_146588c26:
  while( true ) {
    if ((uint)local_160 != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar13 = local_160;
    if ((TBitArray<FDefaultBitArrayAllocator> *)FVar25.Data == pTVar19) break;
    if (*(int *)&(this->PrecachingSources).field_0x8 !=
        *(int *)&(this->PrecachingSources).field_0x34) {
      puVar24 = *(undefined1 **)&(this->PrecachingSources).field_0x40;
      puVar21 = &(this->PrecachingSources).field_0x38;
      puVar16 = puVar21;
      if (puVar24 != (undefined1 *)0x0) {
        puVar16 = puVar24;
      }
      uVar23 = *(uint *)(puVar16 +
                        ((longlong)*(int *)&(this->PrecachingSources).field_0x48 - 1U &
                        (longlong)(int)*(uint *)FVar25.Data) * 4);
      if (uVar23 != 0xffffffff) {
LAB_146588ca0:
        lVar13 = (longlong)(int)uVar23 * 0x38;
        if (*(uint *)(lVar13 + *(longlong *)&this_01->field_0x0) != *(uint *)FVar25.Data)
        goto code_r0x000146588cad;
        if (((int)uVar23 < 0) || (*(int *)&(this->PrecachingSources).field_0x28 <= (int)uVar23)) {
LAB_146588d27:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          if ((*(int *)&(this->PrecachingSources).field_0x28 <= (int)uVar23) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar24 = *(undefined1 **)&(this->PrecachingSources).field_0x20;
          puVar16 = &(this->PrecachingSources).field_0x10;
          if (puVar24 != (undefined1 *)0x0) {
            puVar16 = puVar24;
          }
          uVar20 = uVar23;
          if ((int)uVar23 < 0) {
            uVar20 = uVar23 + 0x1f;
          }
          if ((*(uint *)(puVar16 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar23 & 0x1f) & 1) == 0)
          goto LAB_146588d27;
        }
        puVar24 = *(undefined1 **)&(this->PrecachingSources).field_0x40;
        lVar17 = *(longlong *)&this_01->field_0x0;
        if (puVar24 != (undefined1 *)0x0) {
          puVar21 = puVar24;
        }
        puVar22 = (uint *)(puVar21 + (longlong)*(int *)(lVar13 + 0x34 + lVar17) * 4);
        while( true ) {
          uVar20 = *puVar22;
          if ((uVar20 == 0xffffffff) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar20 == uVar23) break;
          puVar22 = (uint *)(*(longlong *)&this_01->field_0x0 + 0x30 + (longlong)(int)uVar20 * 0x38)
          ;
        }
        *puVar22 = *(uint *)(lVar13 + 0x30 + lVar17);
        TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_01,uVar23,1);
        pTVar19 = local_140;
      }
    }
    uVar14 = (ulonglong)local_150;
    FVar25.Data = FVar25.Data + 4;
  }
  uVar23 = local_160._4_4_;
  local_160 = (ulonglong)local_160._4_4_ << 0x20;
  if ((lVar13 < 0) && (uVar23 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
  }
  iStack_130 = 0;
  local_118 = 0;
  uStack_12c = 1;
  this_00 = &this->InitializingDecodingSources;
  iVar9 = *(int *)&(this->InitializingDecodingSources).field_0x28;
  local_128 = &(this->InitializingDecodingSources).field_0x10;
  iStack_11c = 0;
  if (iVar9 != 0) {
    puVar22 = *(uint **)&(this->InitializingDecodingSources).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)local_128;
    }
    uVar23 = *puVar22;
    while (uVar23 == 0) {
      lVar13 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_146588e8e;
      uVar23 = puVar22[lVar13 + 1];
    }
    uStack_12c = -uVar23 & uVar23;
    uVar14 = (ulonglong)uStack_12c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_100 = (int)lVar13;
    iStack_11c = local_118 + -1 + local_100;
    if (iVar9 < iStack_11c) {
      iStack_11c = iVar9;
    }
  }
LAB_146588e8e:
  uVar23 = *(uint *)&(this->InitializingDecodingSources).field_0x28;
  uStack_114 = local_5c;
  iStack_110 = *(int *)&(this->InitializingDecodingSources).field_0x8 -
               *(int *)&(this->InitializingDecodingSources).field_0x34;
  uVar20 = uVar23 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->InitializingDecodingSources).field_0x10;
  uStack_b0 = 0xffffffff;
  auStack_c0._8_8_ = local_128;
  uStack_ac = iStack_11c;
  local_150 = -1 << ((byte)uVar23 & 0x1f);
  auStack_c0._0_8_ = CONCAT44(uStack_12c,iStack_130);
  iVar9 = (int)uVar23 >> 5;
  local_a8._4_4_ = local_5c;
  local_a8._0_4_ = local_118;
  uStack_a0 = CONCAT44(uStack_10c,iStack_110);
  local_140 = pTVar19;
  local_138 = (TMap<int,Audio::FSourceDecodeInit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>_>
               *)this_00;
  local_c8 = this_00;
  if (((int)uVar23 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->InitializingDecodingSources).field_0x28;
  if (uVar23 != uVar2) {
    puVar21 = *(undefined1 **)&(this->InitializingDecodingSources).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)pTVar19;
    }
    uVar23 = local_150 & *(uint *)(puVar21 + (longlong)iVar9 * 4);
    while (uVar23 == 0) {
      lVar13 = (longlong)iVar9;
      uVar20 = uVar20 + 0x20;
      iVar9 = iVar9 + 1;
      uVar23 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_146588fb0;
      uVar23 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_fc = (int)lVar13;
    uVar23 = (uVar20 - 1) + local_fc;
    if ((int)uVar2 < (int)uVar23) {
      uVar23 = uVar2;
    }
  }
LAB_146588fb0:
  do {
    pTVar6 = local_c8;
    if (*(int *)(&local_c8->field_0x0 + 8) - *(int *)(&local_c8->field_0x0 + 0x34) != (int)uStack_a0
       ) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((uStack_ac == uVar23) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_c0._8_8_ == pTVar19)) &&
       (pTVar6 == this_00)) {
      iVar9 = (uint)local_160;
      pFVar1 = local_168.Data + (longlong)(int)(uint)local_160 * 4;
      FVar25.Data = local_168.Data;
      while( true ) {
        if ((uint)local_160 != iVar9) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_14c);
        }
        if (FVar25.Data == pFVar1) break;
        local_148[0] = *(uint *)FVar25.Data;
        if (*(int *)&(this->InitializingDecodingSources).field_0x8 !=
            *(int *)&(this->InitializingDecodingSources).field_0x34) {
          TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
                             *)this_00,local_148[0],(int *)local_148);
        }
        FVar25.Data = FVar25.Data + 4;
      }
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      return;
    }
    lVar13 = *(longlong *)&pTVar6->field_0x0;
    lVar17 = (longlong)(int)uStack_ac * 0x20;
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar17 + 0x10 + lVar13);
    local_154 = *(undefined4 *)(lVar17 + lVar13);
    lVar13 = *(longlong *)(lVar17 + 8 + lVar13);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar13 + 0x20);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (((*(longlong *)(lVar13 + 0x48) == 0) || (*(longlong **)(lVar13 + 0x18) == (longlong *)0x0))
       || (cVar8 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x40))(), cVar8 == '\0')) {
LAB_146589324:
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                          ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
      bVar7 = FMixerSourceBuffer::IsAsyncTaskInProgress(pFVar11);
      if (bVar7) {
        pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                            ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
        bVar7 = FMixerSourceBuffer::IsAsyncTaskDone(pFVar11);
        LeaveCriticalSection(lpCriticalSection);
        if (!bVar7) goto LAB_14658932d;
      }
      else {
        TVar10 = FMixerBuffer::GetType(*(FMixerBuffer **)(lVar13 + 0x18));
        if ((TVar10 - PCMRealTime < 2) && (*(longlong *)(lVar13 + 0x10) != 0)) {
          if (0.0 < *(float *)(lVar13 + 0x6c)) {
            (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x28))();
          }
          else if (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x3c0) != 0) goto LAB_1465890ee;
          pIVar12 = FMixerBuffer::GetDecompressionState(*(FMixerBuffer **)(lVar13 + 0x18),false);
          pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                              ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
          FMixerSourceBuffer::ReadMoreRealtimeData(pFVar11,pIVar12,0,Asynchronous);
          goto LAB_146589324;
        }
LAB_1465890ee:
        LeaveCriticalSection(lpCriticalSection);
      }
      if ((lVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(*(longlong *)(lVar13 + 0x18) + 0xc) - 1U < 2) {
        EnterCriticalSection(lpCriticalSection);
        if (*(longlong *)(lVar13 + 0x48) != 0) {
          pIVar12 = FMixerBuffer::GetDecompressionState(*(FMixerBuffer **)(lVar13 + 0x18),false);
          pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                              ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
          FMixerSourceBuffer::SetDecoder(pFVar11,pIVar12);
          pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                              ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
          bVar7 = FMixerSourceBuffer::IsAsyncTaskInProgress(pFVar11);
          if (!bVar7) {
            pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                                ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
            FMixerSourceBuffer::ReadMoreRealtimeData(pFVar11,pIVar12,0,Asynchronous);
          }
          iVar9 = *(int *)(*(longlong *)(lVar13 + 0x18) + 0xc);
          *(int *)(lVar13 + 0x78) = iVar9;
          *(undefined4 *)(lVar13 + 0x7c) = *(undefined4 *)(*(longlong *)(lVar13 + 0x18) + 0x48);
          TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar13 + 0xd0),iVar9);
          TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar13 + 0xe0),
                     *(int *)(lVar13 + 0x78));
          fVar26 = (float)*(int *)(*(longlong *)(lVar13 + 0x18) + 0x44) /
                   (float)*(int *)(lVar13 + 0x68);
          *(float *)(lVar13 + 0x94) = fVar26;
          fVar26 = fVar26 * *(float *)(lVar13 + 0x98);
          *(undefined1 *)(lVar13 + 0xac) = 0;
          *(undefined4 *)(lVar13 + 0xa8) = 0;
          *(float *)(lVar13 + 0xa4) = fVar26;
          *(float *)(lVar13 + 0xa0) = fVar26;
          *(float *)(lVar13 + 0x9c) = fVar26;
          pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                              ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
          FMixerSourceBuffer::Init(pFVar11);
          pFVar11 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->
                              ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)(lVar13 + 0x48));
          FMixerSourceBuffer::OnBeginGenerate(pFVar11);
          LOCK();
          *(undefined4 *)(lVar13 + 0x70) = 1;
          UNLOCK();
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      if (((local_168.Data <= (FScriptContainerElement *)&local_154) &&
          ((FScriptContainerElement *)&local_154 <
           local_168.Data + (longlong)(int)local_160._4_4_ * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (uint)local_160;
      if ((uint)local_160 == local_160._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_168,(int *)((longlong)&local_160 + 4));
      }
      local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
      *(undefined4 *)(local_168.Data + (longlong)iVar9 * 4) = local_154;
    }
LAB_14658932d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
    pTVar19 = local_140;
  } while( true );
code_r0x000146588cad:
  uVar23 = *(uint *)(lVar13 + 0x30 + *(longlong *)&this_01->field_0x0);
  if (uVar23 == 0xffffffff) goto code_r0x000146588cb7;
  goto LAB_146588ca0;
code_r0x000146588cb7:
  uVar14 = (ulonglong)local_150;
  FVar25.Data = FVar25.Data + 4;
  goto LAB_146588c26;
}

// UpdateRenderThread @ 1465893e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Audio::FSoundSourceDecoder::UpdateRenderThread(FSoundSourceDecoder *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *pcStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pcStack_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar7 = uStack_58, uVar11 = uStack_60, lVar10 = lStack_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    lStack_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    uStack_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = pcStack_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    lStack_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = uStack_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)uStack_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = uStack_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    uStack_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    uStack_28 = uVar11;
    pcStack_78 = pcVar8;
    uStack_70 = uVar9;
    if (lStack_48 != 0) {
      plVar13 = (longlong *)&uStack_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar13 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(pcStack_78);
    pcVar8 = pcStack_78;
    plVar13 = &lStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar11);
  }
  if (pcStack_78 != (code *)0x0) {
    plVar13 = &lStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

