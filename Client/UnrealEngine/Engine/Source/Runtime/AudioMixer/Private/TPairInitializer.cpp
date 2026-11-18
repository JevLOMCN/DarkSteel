// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// operator<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_> @ 1464d0aa0

TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_const_&>
::
operator<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  FSourceEffectChainEntry *pFVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FSourceEffectChainEntry *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
              (*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,Audio::FChildSubmixInfo>_TTuple<unsigned_int,Audio::FChildSubmixInfo> @ 146536ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TTuple<unsigned_int,Audio::FChildSubmixInfo> * __thiscall
TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&>::
operator<unsigned_int,Audio::FChildSubmixInfo>_TTuple<unsigned_int,Audio::FChildSubmixInfo>
          (TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&> *this,
          TTuple<unsigned_int,Audio::FChildSubmixInfo> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  
  pTVar3 = this->Value;
  *(uint *)__return_storage_ptr__ = *this->Key;
  pTVar4 = (pTVar3->WeakReferenceCount).ReferenceController;
  pFVar5 = pTVar3->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FMixerSubmix **)&__return_storage_ptr__->field_0x8 = pFVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    *(FMixerSubmix **)&__return_storage_ptr__->field_0x8 = pFVar5;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar4;
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// operator<int,Audio::FSourceDecodeInit>_TTuple<int,Audio::FSourceDecodeInit> @ 146584780

TTuple<int,Audio::FSourceDecodeInit> * __thiscall
TPairInitializer<int_const_&,Audio::FSourceDecodeInit_const_&>::
operator<int,Audio::FSourceDecodeInit>_TTuple<int,Audio::FSourceDecodeInit>
          (TPairInitializer<int_const_&,Audio::FSourceDecodeInit_const_&> *this,
          TTuple<int,Audio::FSourceDecodeInit> *__return_storage_ptr__)

{
  FSourceDecodeInit *pFVar1;
  USoundWave *pUVar2;
  FNameEntryId FVar3;
  
  pFVar1 = this->Value;
  *(int *)__return_storage_ptr__ = *this->Key;
  pUVar2 = (pFVar1->SoundWave).field0_0x0.DebugPtr;
  *(USoundWave **)&__return_storage_ptr__->field_0x8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(float *)&__return_storage_ptr__->field_0x10 = pFVar1->SeekTime;
  *(float *)&__return_storage_ptr__->field_0x14 = pFVar1->PitchScale;
  *(float *)&__return_storage_ptr__->field_0x18 = pFVar1->VolumeScale;
  __return_storage_ptr__->field_0x1c = pFVar1->bForceSyncDecode;
  FVar3.Value = (pFVar1->Handle).SoundWaveName.ComparisonIndex.Value;
  *(int *)&__return_storage_ptr__->field_0x20 = (pFVar1->Handle).Id;
  *(uint *)&__return_storage_ptr__->field_0x24 = FVar3.Value;
  *(uint *)&__return_storage_ptr__->field_0x28 = (pFVar1->Handle).SoundWaveName.Number;
  return __return_storage_ptr__;
}

