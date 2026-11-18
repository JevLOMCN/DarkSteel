// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FCsvStatNameValidator @ 141915f80

FCsvStatNameValidator * __thiscall
FCsvStatNameValidator::FCsvStatNameValidator(FCsvStatNameValidator *this)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 *this_00;
  ulonglong uVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  int local_res8 [2];
  uint local_res10;
  FScriptContainerElement *local_res18;
  FSparseArrayAllocationInfo local_98;
  int local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FCsvStatNameValidator *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  puVar1 = &(this->ValidCharactersSet).Elements.field_0x8;
  *(undefined8 *)&(this->ValidCharactersSet).Elements = 0;
  *(undefined8 *)&(this->ValidCharactersSet).Elements.field_0x20 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(this->ValidCharactersSet).Elements.field_0xc = 0;
  *(undefined4 *)&(this->ValidCharactersSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ValidCharactersSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ValidCharactersSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValidCharactersSet).Elements.field_0x34 = 0;
  (this->ValidCharactersSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ValidCharactersSet).HashSize = 0;
  (this->ValidCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidCharacters).Data.ArrayNum = 0;
  (this->ValidCharacters).Data.ArrayMax = 0;
  ::FString::operator=
            (&this->ValidCharacters,
             L"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ /_-[]()#.:");
  local_res10 = (this->ValidCharacters).Data.ArrayNum;
  uVar18 = (ulonglong)(int)local_res10;
  pFVar23 = (this->ValidCharacters).Data.AllocatorInstance.Data;
  local_res18 = pFVar23 + uVar18 * 2 + -2;
  if (local_res10 == 0) {
    local_res18 = pFVar23 + uVar18 * 2;
  }
  do {
    while( true ) {
      pFVar9 = local_res18;
      if ((this->ValidCharacters).Data.ArrayNum != (int)uVar18) {
        `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar23 == pFVar9) {
        return this;
      }
      iVar13 = *(int *)&(this->ValidCharactersSet).Elements.field_0x34;
      uVar2 = *(undefined2 *)pFVar23;
      if (iVar13 == 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)this,(int *)puVar1,
                            (int *)&(this->ValidCharactersSet).Elements.field_0xc);
        this_00 = &(this->ValidCharactersSet).Elements.field_0x10;
        iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar5 = *(undefined1 **)&(this->ValidCharactersSet).Elements.field_0x20;
        if (puVar5 != (undefined1 *)0x0) {
          this_00 = puVar5;
        }
        bVar15 = (byte)iVar13 & 0x1f;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
          bVar15 = bVar15 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar13 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar13 >> 5) * 4) & ~(1 << (bVar15 & 0x1f));
      }
      else {
        iVar12 = *(int *)&(this->ValidCharactersSet).Elements.field_0x30;
        iVar13 = iVar13 + -1;
        lVar19 = *(longlong *)&(this->ValidCharactersSet).Elements;
        iVar4 = *(int *)(lVar19 + 4 + (longlong)iVar12 * 0xc);
        *(int *)&(this->ValidCharactersSet).Elements.field_0x30 = iVar4;
        *(int *)&(this->ValidCharactersSet).Elements.field_0x34 = iVar13;
        if (iVar13 != 0) {
          *(undefined4 *)(lVar19 + (longlong)iVar4 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,&local_98,iVar12);
      pvVar10 = local_98.Pointer;
      if (local_98.Pointer != (TSparseSetElement<wchar_t> *)0x0) {
        *(undefined2 *)local_98.Pointer = uVar2;
        *(undefined4 *)((longlong)local_98.Pointer + 4) = 0xffffffff;
      }
      uVar3 = *(ushort *)local_98.Pointer;
      local_res8[0] = local_98.Index;
      bVar11 = TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::TryReplaceExisting
                         (&this->ValidCharactersSet,(uint)uVar3,local_98.Pointer,local_res8,
                          (bool *)0x0);
      if (!bVar11) break;
LAB_14191635c:
      uVar18 = (ulonglong)local_res10;
      pFVar23 = pFVar23 + 2;
    }
    uVar20 = 1;
    uVar17 = *(int *)puVar1 - *(int *)&(this->ValidCharactersSet).Elements.field_0x34;
    if (3 < uVar17) {
      uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar20 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar17 < 1) || ((int)uVar20 <= (this->ValidCharactersSet).HashSize)) {
      uVar17 = (this->ValidCharactersSet).HashSize - 1U & (uint)uVar3;
      *(uint *)((longlong)pvVar10 + 8) = uVar17;
      FVar6 = (this->ValidCharactersSet).Hash.SecondaryData;
      FVar16 = (ForElementType<FSetElementId>)&(this->ValidCharactersSet).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = FVar6;
      }
      uVar18 = (longlong)(this->ValidCharactersSet).HashSize - 1U & (ulonglong)uVar17;
      *(undefined4 *)((longlong)pvVar10 + 4) = *(undefined4 *)((longlong)FVar16 + uVar18 * 4);
      *(int *)((longlong)FVar16 + uVar18 * 4) = local_res8[0];
      goto LAB_14191635c;
    }
    (this->ValidCharactersSet).HashSize = uVar20;
    if ((this->ValidCharactersSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ValidCharactersSet).Hash.SecondaryData,0,0,4);
    }
    if (uVar20 != 0) {
      uVar17 = uVar20;
      if (uVar20 < 2) {
        if ((this->ValidCharactersSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          uVar17 = 0;
          goto LAB_141916174;
        }
      }
      else {
LAB_141916174:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->ValidCharactersSet).Hash.SecondaryData,0,uVar17,4);
      }
      if (0 < (int)uVar20) {
        uVar21 = (ulonglong)uVar20;
        uVar18 = 0;
        do {
          FVar6 = (this->ValidCharactersSet).Hash.SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&(this->ValidCharactersSet).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar6;
          }
          uVar14 = uVar18 & (longlong)(int)uVar20 - 1U;
          uVar18 = uVar18 + 1;
          *(undefined4 *)((longlong)FVar16 + uVar14 * 4) = 0xffffffff;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    if ((this->ValidCharactersSet).HashSize == 0) goto LAB_14191635c;
    iVar13 = *(int *)&(this->ValidCharactersSet).Elements.field_0x28;
    puStack_80 = &(this->ValidCharactersSet).Elements.field_0x10;
    uStack_84 = 1;
    local_88 = 0;
    iStack_74 = 0;
    iStack_70 = 0;
    local_68 = this;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
    if (iVar13 == 0) {
LAB_141916296:
      local_78 = 0xffffffff;
      local_60._padding_ = CONCAT44(uStack_84,local_88);
      local_60.CurrentBitIndex = iStack_74;
      local_60.UnvisitedBitMask = 0xffffffff;
      local_60._28_4_ = uStack_6c;
      local_60.BaseBitIndex = iStack_70;
      iVar12 = iStack_74;
      if (iStack_74 < iVar13) {
        do {
          lVar8 = *(longlong *)&(local_68->ValidCharactersSet).Elements;
          lVar19 = lVar8 + (longlong)iVar12 * 0xc;
          uVar17 = (this->ValidCharactersSet).HashSize - 1U &
                   (uint)*(ushort *)(lVar8 + (longlong)iVar12 * 0xc);
          *(uint *)(lVar19 + 8) = uVar17;
          FVar6 = (this->ValidCharactersSet).Hash.SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&(this->ValidCharactersSet).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar6;
          }
          uVar18 = (longlong)(this->ValidCharactersSet).HashSize - 1U & (ulonglong)uVar17;
          *(undefined4 *)(lVar19 + 4) = *(undefined4 *)((longlong)FVar16 + uVar18 * 4);
          *(int *)((longlong)FVar16 + uVar18 * 4) = iVar12;
          local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
          iVar12 = local_60.CurrentBitIndex;
        } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
      }
      goto LAB_14191635c;
    }
    puVar7 = *(uint **)&(this->ValidCharactersSet).Elements.field_0x20;
    puVar22 = (uint *)puStack_80;
    if (puVar7 != (uint *)0x0) {
      puVar22 = puVar7;
    }
    uVar17 = *puVar22;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar17 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar19 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14191626a;
      uVar17 = puVar22[lVar19 + 1];
    }
    uStack_84 = -uVar17 & uVar17;
    uVar18 = (ulonglong)uStack_84 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iStack_74 = iStack_70 + -1 + (int)lVar19;
    if (iStack_74 <= iVar13) goto LAB_141916296;
LAB_14191626a:
    local_78 = 0xffffffff;
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    uVar18 = (ulonglong)local_res10;
    pFVar23 = pFVar23 + 2;
    local_60.CurrentBitIndex = iVar13;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    iStack_74 = iVar13;
  } while( true );
}

