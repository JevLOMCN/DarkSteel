// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// AddReferencedObjects @ 14ecdda70

void __thiscall
FVoiceEngineImpl::FVoiceSerializeHelper::AddReferencedObjects
          (FVoiceSerializeHelper *this,FReferenceCollector *param_1)

{
  int iVar1;
  UObject *pUVar2;
  ulonglong uVar3;
  TMap<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
  *pTVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pTVar4 = &this->VoiceEngine->RemoteTalkerBuffers;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar4);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar4;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar5 = (longlong)(int)uVar3 * 0x120 + *local_48;
      pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(lVar5 + 0x3c));
      if (pUVar2 != (UObject *)0x0) {
        FReferenceCollector::AddReferencedObject
                  (param_1,(FWeakObjectPtr *)(lVar5 + 0x3c),(UObject *)0x0,(FProperty *)0x0);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar1 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar1 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar1)) || (iVar1 < local_18->HashSize)) {
        local_18->HashSize = iVar1;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// GetReferencerName @ 14ece87d0

FString * __thiscall
FVoiceEngineImpl::FVoiceSerializeHelper::GetReferencerName
          (FVoiceSerializeHelper *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FVoiceEngineImpl::FVoiceSerializeHelper");
  return __return_storage_ptr__;
}

