// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ContainsAny @ 146822470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::MovieScene::FComponentMask::ContainsAny(FComponentMask *this,FComponentMask *param_1)

{
  int iVar1;
  int iVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStackY_b8 [32];
  <lambda_1> local_88 [4];
  TBitArray<TFixedAllocator<12>_> local_84;
  TTypeCompatibleBytes<unsigned_int> local_4c [4];
  TTypeCompatibleBytes<unsigned_int> local_3c [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_34 [2];
  TTypeCompatibleBytes<unsigned_int> local_2c [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_24 [2];
  int local_1c;
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_84.MaxBits = 0x180;
  uVar5 = 0;
  local_84.NumBits = 0;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&this->Bits,&param_1->Bits,&local_84,MinSize,local_88);
  local_1c = local_84.NumBits;
  local_4c[0].Pad[0] = local_84.AllocatorInstance.InlineData[0].Pad[0];
  local_4c[0].Pad[1] = local_84.AllocatorInstance.InlineData[0].Pad[1];
  local_4c[0].Pad[2] = local_84.AllocatorInstance.InlineData[0].Pad[2];
  local_4c[0].Pad[3] = local_84.AllocatorInstance.InlineData[0].Pad[3];
  local_4c[1].Pad[0] = local_84.AllocatorInstance.InlineData[1].Pad[0];
  local_4c[1].Pad[1] = local_84.AllocatorInstance.InlineData[1].Pad[1];
  local_4c[1].Pad[2] = local_84.AllocatorInstance.InlineData[1].Pad[2];
  local_4c[1].Pad[3] = local_84.AllocatorInstance.InlineData[1].Pad[3];
  local_4c[2].Pad[0] = local_84.AllocatorInstance.InlineData[2].Pad[0];
  local_4c[2].Pad[1] = local_84.AllocatorInstance.InlineData[2].Pad[1];
  local_4c[2].Pad[2] = local_84.AllocatorInstance.InlineData[2].Pad[2];
  local_4c[2].Pad[3] = local_84.AllocatorInstance.InlineData[2].Pad[3];
  local_4c[3].Pad[0] = local_84.AllocatorInstance.InlineData[3].Pad[0];
  local_4c[3].Pad[1] = local_84.AllocatorInstance.InlineData[3].Pad[1];
  local_4c[3].Pad[2] = local_84.AllocatorInstance.InlineData[3].Pad[2];
  local_4c[3].Pad[3] = local_84.AllocatorInstance.InlineData[3].Pad[3];
  local_18 = local_84.MaxBits;
  local_3c[0].Pad[0] = local_84.AllocatorInstance.InlineData[4].Pad[0];
  local_3c[0].Pad[1] = local_84.AllocatorInstance.InlineData[4].Pad[1];
  local_3c[0].Pad[2] = local_84.AllocatorInstance.InlineData[4].Pad[2];
  local_3c[0].Pad[3] = local_84.AllocatorInstance.InlineData[4].Pad[3];
  local_3c[1].Pad[0] = local_84.AllocatorInstance.InlineData[5].Pad[0];
  local_3c[1].Pad[1] = local_84.AllocatorInstance.InlineData[5].Pad[1];
  local_3c[1].Pad[2] = local_84.AllocatorInstance.InlineData[5].Pad[2];
  local_3c[1].Pad[3] = local_84.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_34[0].Pad[0] = local_84.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_34[0].Pad[1] = local_84.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_34[0].Pad[2] = local_84.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_34[0].Pad[3] = local_84.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_34[1].Pad[0] = local_84.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_34[1].Pad[1] = local_84.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_34[1].Pad[2] = local_84.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_34[1].Pad[3] = local_84.AllocatorInstance.InlineData[7].Pad[3];
  local_2c[0].Pad[0] = local_84.AllocatorInstance.InlineData[8].Pad[0];
  local_2c[0].Pad[1] = local_84.AllocatorInstance.InlineData[8].Pad[1];
  local_2c[0].Pad[2] = local_84.AllocatorInstance.InlineData[8].Pad[2];
  local_2c[0].Pad[3] = local_84.AllocatorInstance.InlineData[8].Pad[3];
  local_2c[1].Pad[0] = local_84.AllocatorInstance.InlineData[9].Pad[0];
  local_2c[1].Pad[1] = local_84.AllocatorInstance.InlineData[9].Pad[1];
  local_2c[1].Pad[2] = local_84.AllocatorInstance.InlineData[9].Pad[2];
  local_2c[1].Pad[3] = local_84.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_24[0].Pad[0] = local_84.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_24[0].Pad[1] = local_84.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_24[0].Pad[2] = local_84.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_24[0].Pad[3] = local_84.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_24[1].Pad[0] = local_84.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_24[1].Pad[1] = local_84.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_24[1].Pad[2] = local_84.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_24[1].Pad[3] = local_84.AllocatorInstance.InlineData[0xb].Pad[3];
  if (local_84.NumBits + 0x1fU >> 5 == 0) {
LAB_146822528:
    iVar2 = -1;
LAB_14682252d:
    return iVar2 != -1;
  }
  pTVar3 = local_4c;
LAB_146822500:
  if (*(int *)pTVar3->Pad == 0) goto code_r0x000146822505;
  iVar1 = 0;
  bVar6 = *(int *)local_4c[uVar5].Pad != 0;
  if (bVar6) {
    for (; (*(uint *)local_4c[uVar5].Pad >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  iVar2 = 0x20;
  if (bVar6) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 + (int)uVar5 * 0x20;
  if (iVar2 < local_84.NumBits) goto LAB_14682252d;
  goto LAB_146822528;
code_r0x000146822505:
  uVar4 = (int)uVar5 + 1;
  uVar5 = (ulonglong)uVar4;
  pTVar3 = pTVar3 + 1;
  if ((int)(local_84.NumBits + 0x1fU >> 5) <= (int)uVar4) goto LAB_146822528;
  goto LAB_146822500;
}

