// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// IsStateEqual @ 148a26ca0

bool __thiscall
FNetFastTArrayBaseState::IsStateEqual(FNetFastTArrayBaseState *this,INetDeltaBaseState *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTStack_20;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_18;
  undefined2 local_10;
  
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_78,
            (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            &this->IDToCLMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    uVar8 = local_78._28_4_;
    local_18 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->IDToCLMap;
    do {
      uVar1 = *(uint *)(*local_48 + (longlong)(int)uVar6 * 0x10);
      if ((int)param_1[1]._padding_ == *(int *)((longlong)&param_1[2]._padding_ + 4)) {
LAB_148a26d76:
        if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
          uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34
          ;
          if (uVar8 < 4) {
            iVar4 = 1;
          }
          else {
            uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar8) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
            local_18->HashSize = iVar4;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Rehash(local_18);
          }
        }
        return false;
      }
      puVar5 = &param_1[2].LastAckedHistory;
      if ((uint *)param_1[3]._padding_ != (uint *)0x0) {
        puVar5 = (uint *)param_1[3]._padding_;
      }
      uVar3 = puVar5[(int)param_1[3]._padding_ - 1U & uVar1];
      if (uVar3 == 0xffffffff) goto LAB_148a26d76;
      while (puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 + param_1[1]._padding_), *puVar5 != uVar1
            ) {
        uVar3 = puVar5[2];
        if (uVar3 == 0xffffffff) goto LAB_148a26d76;
      }
      puVar7 = puVar5 + 1;
      if (puVar5 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
      }
      if ((puVar7 == (uint *)0x0) ||
         (*puVar7 != *(uint *)(*local_48 + 4 + (longlong)(int)uVar8 * 0x10))) goto LAB_148a26d76;
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                  (local_18);
      }
    }
  }
  return true;
}

// CountBytes @ 148a26ea0

void __thiscall FNetFastTArrayBaseState::CountBytes(FNetFastTArrayBaseState *this,FArchive *param_1)

{
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::CountBytes
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->IDToCLMap,param_1);
  return;
}

// FNetFastTArrayBaseState @ 148a41a60

FNetFastTArrayBaseState * __thiscall
FNetFastTArrayBaseState::FNetFastTArrayBaseState(FNetFastTArrayBaseState *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNetFastTArrayBaseState__6B_;
  *(undefined8 *)&this->IDToCLMap = 0;
  *(undefined8 *)&(this->IDToCLMap).field_0x8 = 0;
  *(undefined8 *)&(this->IDToCLMap).field_0x20 = 0;
  this->_padding_ = 0;
  *(undefined4 *)&(this->IDToCLMap).field_0x28 = 0;
  *(undefined4 *)&(this->IDToCLMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IDToCLMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IDToCLMap).field_0x34 = 0;
  *(undefined8 *)&(this->IDToCLMap).field_0x40 = 0;
  *(undefined4 *)&(this->IDToCLMap).field_0x48 = 0;
  this->ArrayReplicationKey = -1;
  return this;
}

