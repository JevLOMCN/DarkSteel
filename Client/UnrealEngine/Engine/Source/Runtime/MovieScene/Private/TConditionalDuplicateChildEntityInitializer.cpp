// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// IsRelevant @ 1460d90b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::MovieScene::TConditionalDuplicateChildEntityInitializer<FGuid>::IsRelevant
          (TConditionalDuplicateChildEntityInitializer<FGuid> *this,FComponentMask *param_1,
          FComponentMask *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStackY_b8 [32];
  <lambda_1> local_88 [4];
  TBitArray<TFixedAllocator<12>_> local_84;
  TBitArray<TFixedAllocator<12>_> local_4c;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar1 = (ushort)this->_padding_;
  if ((uVar1 == 0xffff) ||
     (((int)(uint)uVar1 < (param_1->Bits).NumBits &&
      ((*(uint *)(param_1->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
       != 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar1 = *(ushort *)((longlong)&this->_padding_ + 2);
  if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar3) && (bVar2)) {
    local_84.NumBits = 0;
    local_84.MaxBits = 0x180;
    Core::Private::
    BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&param_1->Bits,&(this->ParentComponentMask).Bits,&local_84,MinSize,local_88);
    local_4c.NumBits = local_84.NumBits;
    local_4c.AllocatorInstance.InlineData[0].Pad[0] =
         local_84.AllocatorInstance.InlineData[0].Pad[0];
    local_4c.AllocatorInstance.InlineData[0].Pad[1] =
         local_84.AllocatorInstance.InlineData[0].Pad[1];
    local_4c.AllocatorInstance.InlineData[0].Pad[2] =
         local_84.AllocatorInstance.InlineData[0].Pad[2];
    local_4c.AllocatorInstance.InlineData[0].Pad[3] =
         local_84.AllocatorInstance.InlineData[0].Pad[3];
    local_4c.AllocatorInstance.InlineData[1].Pad[0] =
         local_84.AllocatorInstance.InlineData[1].Pad[0];
    local_4c.AllocatorInstance.InlineData[1].Pad[1] =
         local_84.AllocatorInstance.InlineData[1].Pad[1];
    local_4c.AllocatorInstance.InlineData[1].Pad[2] =
         local_84.AllocatorInstance.InlineData[1].Pad[2];
    local_4c.AllocatorInstance.InlineData[1].Pad[3] =
         local_84.AllocatorInstance.InlineData[1].Pad[3];
    local_4c.AllocatorInstance.InlineData[2].Pad[0] =
         local_84.AllocatorInstance.InlineData[2].Pad[0];
    local_4c.AllocatorInstance.InlineData[2].Pad[1] =
         local_84.AllocatorInstance.InlineData[2].Pad[1];
    local_4c.AllocatorInstance.InlineData[2].Pad[2] =
         local_84.AllocatorInstance.InlineData[2].Pad[2];
    local_4c.AllocatorInstance.InlineData[2].Pad[3] =
         local_84.AllocatorInstance.InlineData[2].Pad[3];
    local_4c.AllocatorInstance.InlineData[3].Pad[0] =
         local_84.AllocatorInstance.InlineData[3].Pad[0];
    local_4c.AllocatorInstance.InlineData[3].Pad[1] =
         local_84.AllocatorInstance.InlineData[3].Pad[1];
    local_4c.AllocatorInstance.InlineData[3].Pad[2] =
         local_84.AllocatorInstance.InlineData[3].Pad[2];
    local_4c.AllocatorInstance.InlineData[3].Pad[3] =
         local_84.AllocatorInstance.InlineData[3].Pad[3];
    local_4c.MaxBits = local_84.MaxBits;
    local_4c.AllocatorInstance.InlineData[4].Pad[0] =
         local_84.AllocatorInstance.InlineData[4].Pad[0];
    local_4c.AllocatorInstance.InlineData[4].Pad[1] =
         local_84.AllocatorInstance.InlineData[4].Pad[1];
    local_4c.AllocatorInstance.InlineData[4].Pad[2] =
         local_84.AllocatorInstance.InlineData[4].Pad[2];
    local_4c.AllocatorInstance.InlineData[4].Pad[3] =
         local_84.AllocatorInstance.InlineData[4].Pad[3];
    local_4c.AllocatorInstance.InlineData[5].Pad[0] =
         local_84.AllocatorInstance.InlineData[5].Pad[0];
    local_4c.AllocatorInstance.InlineData[5].Pad[1] =
         local_84.AllocatorInstance.InlineData[5].Pad[1];
    local_4c.AllocatorInstance.InlineData[5].Pad[2] =
         local_84.AllocatorInstance.InlineData[5].Pad[2];
    local_4c.AllocatorInstance.InlineData[5].Pad[3] =
         local_84.AllocatorInstance.InlineData[5].Pad[3];
    local_4c.AllocatorInstance.InlineData[6].Pad[0] =
         local_84.AllocatorInstance.InlineData[6].Pad[0];
    local_4c.AllocatorInstance.InlineData[6].Pad[1] =
         local_84.AllocatorInstance.InlineData[6].Pad[1];
    local_4c.AllocatorInstance.InlineData[6].Pad[2] =
         local_84.AllocatorInstance.InlineData[6].Pad[2];
    local_4c.AllocatorInstance.InlineData[6].Pad[3] =
         local_84.AllocatorInstance.InlineData[6].Pad[3];
    local_4c.AllocatorInstance.InlineData[7].Pad[0] =
         local_84.AllocatorInstance.InlineData[7].Pad[0];
    local_4c.AllocatorInstance.InlineData[7].Pad[1] =
         local_84.AllocatorInstance.InlineData[7].Pad[1];
    local_4c.AllocatorInstance.InlineData[7].Pad[2] =
         local_84.AllocatorInstance.InlineData[7].Pad[2];
    local_4c.AllocatorInstance.InlineData[7].Pad[3] =
         local_84.AllocatorInstance.InlineData[7].Pad[3];
    local_4c.AllocatorInstance.InlineData[8].Pad[0] =
         local_84.AllocatorInstance.InlineData[8].Pad[0];
    local_4c.AllocatorInstance.InlineData[8].Pad[1] =
         local_84.AllocatorInstance.InlineData[8].Pad[1];
    local_4c.AllocatorInstance.InlineData[8].Pad[2] =
         local_84.AllocatorInstance.InlineData[8].Pad[2];
    local_4c.AllocatorInstance.InlineData[8].Pad[3] =
         local_84.AllocatorInstance.InlineData[8].Pad[3];
    local_4c.AllocatorInstance.InlineData[9].Pad[0] =
         local_84.AllocatorInstance.InlineData[9].Pad[0];
    local_4c.AllocatorInstance.InlineData[9].Pad[1] =
         local_84.AllocatorInstance.InlineData[9].Pad[1];
    local_4c.AllocatorInstance.InlineData[9].Pad[2] =
         local_84.AllocatorInstance.InlineData[9].Pad[2];
    local_4c.AllocatorInstance.InlineData[9].Pad[3] =
         local_84.AllocatorInstance.InlineData[9].Pad[3];
    local_4c.AllocatorInstance.InlineData[10].Pad[0] =
         local_84.AllocatorInstance.InlineData[10].Pad[0];
    local_4c.AllocatorInstance.InlineData[10].Pad[1] =
         local_84.AllocatorInstance.InlineData[10].Pad[1];
    local_4c.AllocatorInstance.InlineData[10].Pad[2] =
         local_84.AllocatorInstance.InlineData[10].Pad[2];
    local_4c.AllocatorInstance.InlineData[10].Pad[3] =
         local_84.AllocatorInstance.InlineData[10].Pad[3];
    local_4c.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_84.AllocatorInstance.InlineData[0xb].Pad[0];
    local_4c.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_84.AllocatorInstance.InlineData[0xb].Pad[1];
    local_4c.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_84.AllocatorInstance.InlineData[0xb].Pad[2];
    local_4c.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_84.AllocatorInstance.InlineData[0xb].Pad[3];
    bVar3 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                      (&local_4c,&(this->ParentComponentMask).Bits,false);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

