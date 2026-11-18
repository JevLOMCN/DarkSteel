// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSBlueprint
// Functions: 1

// Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_> @ 14de2c910

FSetElementId __thiscall
TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_>
          (void *this,
          TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&> *param_1,
          bool *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined1 *in_R9;
  undefined1 local_res8 [8];
  FSparseArrayAllocationInfo local_38;
  
  iVar12 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),1);
    uVar10 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar10;
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    }
    puVar2 = (pTVar13->AllocatorInstance).InlineData + (longlong)(iVar8 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar10 & 0x1f));
  }
  else {
    iVar7 = *(int *)((longlong)this + 0x30);
    iVar4 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)this);
    iVar8 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar7);
  if (local_38.Pointer != (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 8);
    *(byte *)local_38.Pointer = **(byte **)param_2;
    pbVar1 = (byte *)((longlong)local_38.Pointer + 8);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    plVar6 = (longlong *)*plVar5;
    *(longlong **)((longlong)local_38.Pointer + 8) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,local_res8);
    }
    *(int *)((longlong)local_38.Pointer + 0x10) = (int)plVar5[1];
    pbVar1 = (byte *)((longlong)local_38.Pointer + 0x18);
    pbVar1[0] = 0xff;
    pbVar1[1] = 0xff;
    pbVar1[2] = 0xff;
    pbVar1[3] = 0xff;
  }
  bVar3 = *(byte *)local_38.Pointer;
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar10 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar12 <= *(int *)((longlong)this + 0x48))) {
    uVar10 = (uint)bVar3 & *(int *)((longlong)this + 0x48) - 1U;
    *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar10;
    lVar11 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar11 = (longlong)this + 0x38;
    }
    uVar9 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar10;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(lVar11 + uVar9 * 4);
    *(int *)(lVar11 + uVar9 * 4) = local_38.Index;
  }
  else {
    *(int *)((longlong)this + 0x48) = iVar12;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

