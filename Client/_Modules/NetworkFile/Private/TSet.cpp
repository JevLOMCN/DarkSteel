// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// Emplace<TPairInitializer<FString_&&,FDateTime_const_&>_> @ 148bdf580

FSetElementId __thiscall
TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,FDateTime_const_&>_>
          (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,FDateTime_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  TSparseSetElement<TTuple<FString,FDateTime>_> *pTVar13;
  int iVar14;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar14 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar2);
    iVar14 = iVar14 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  pTVar13 = (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0;
  iVar14 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FDateTime>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    pTVar13 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar13->field_0x8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)pTVar13;
    iVar14 = *(int *)&pTVar13->field_0x8 + -1;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar10);
  bVar5 = TryReplaceExisting(this,uVar7,pTVar13,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)&pTVar13->field_0x1c = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&pTVar13->field_0x18 = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

