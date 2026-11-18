// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// MutateType @ 146841b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FComponentMask * __thiscall
UE::MovieScene::FTypelessMutation::MutateType
          (FTypelessMutation *this,FComponentMask *__return_storage_ptr__,FComponentMask *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  <lambda_1> local_68 [4];
  TBitArray<TFixedAllocator<12>_> local_64;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar5 = 0;
  (__return_storage_ptr__->Bits).MaxBits = 0x180;
  (__return_storage_ptr__->Bits).NumBits = 0;
  if ((this->bRemoveAll == false) && (__return_storage_ptr__ != param_1)) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&__return_storage_ptr__->Bits,&param_1->Bits);
  }
  if ((this->RemoveMask).Bits.NumBits != 0) {
    local_64.NumBits = 0;
    local_64.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_64,&(this->RemoveMask).Bits);
    iVar3 = (int)(local_64.NumBits + 0x1fU + ((int)(local_64.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5
    ;
    uVar6 = local_64.NumBits & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar2 = 0xffffffff >> ((byte)(0x20 - uVar6) & 0x1f);
    if (0x1f < (int)(0x20 - uVar6)) {
      uVar2 = 0xffffffff;
    }
    uVar6 = 0xffffffff;
    if (iVar3 == 1) {
      uVar6 = uVar2;
    }
    if (0 < iVar3) {
      do {
        pTVar1 = local_64.AllocatorInstance.InlineData + uVar5;
        uVar4 = *(uint *)local_64.AllocatorInstance.InlineData[uVar5].Pad & uVar6;
        if (uVar6 == 0xffffffff) {
          uVar4 = *(uint *)pTVar1->Pad;
        }
        uVar6 = ~uVar4 & uVar2;
        if ((uint)uVar5 != iVar3 - 1U) {
          uVar6 = ~uVar4;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(uint *)pTVar1->Pad = uVar6;
        uVar6 = 0xffffffff;
        if (uVar4 == iVar3 - 1U) {
          uVar6 = uVar2;
        }
      } while ((int)uVar4 < iVar3);
    }
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&local_64,&__return_storage_ptr__->Bits,OneFillMissingBits|MaintainSize,local_68);
  }
  if ((this->AddMask).Bits.NumBits != 0) {
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)this,&__return_storage_ptr__->Bits,MaxSize,
               (<lambda_1> *)local_68);
  }
  return __return_storage_ptr__;
}

