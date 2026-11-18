// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 5

// StaticStruct @ 148b85b60

UScriptStruct * __cdecl FStructSerializerSetTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerSetTestStruct,(UObject *)pUVar1,
                         L"StructSerializerSetTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.OuterSingleton;
}

// FStructSerializerSetTestStruct @ 148b9ea60

FStructSerializerSetTestStruct * __thiscall
FStructSerializerSetTestStruct::FStructSerializerSetTestStruct
          (FStructSerializerSetTestStruct *this,FStructSerializerSetTestStruct *param_1)

{
  *(undefined8 *)&(this->StrSet).Elements = 0;
  *(undefined8 *)&(this->StrSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StrSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StrSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrSet).Elements.field_0x34 = 0;
  (this->StrSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StrSet).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->StrSet,&param_1->StrSet);
  *(undefined8 *)&(this->IntSet).Elements = 0;
  *(undefined8 *)&(this->IntSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IntSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IntSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntSet).Elements.field_0x34 = 0;
  (this->IntSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IntSet).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&this->IntSet,&param_1->IntSet);
  *(undefined8 *)&(this->NameSet).Elements = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameSet).Elements.field_0x34 = 0;
  (this->NameSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NameSet).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->NameSet,&param_1->NameSet);
  *(undefined8 *)&(this->StructSet).Elements = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructSet).Elements.field_0x34 = 0;
  (this->StructSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructSet).HashSize = 0;
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::operator=(&this->StructSet,&param_1->StructSet);
  return this;
}

// FStructSerializerSetTestStruct @ 148b9eb60

FStructSerializerSetTestStruct * __thiscall
FStructSerializerSetTestStruct::FStructSerializerSetTestStruct
          (FStructSerializerSetTestStruct *this,ENoInit param_1)

{
  *(undefined8 *)&(this->StrSet).Elements = 0;
  *(undefined8 *)&(this->StrSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StrSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StrSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x30 = 0xffffffff;
  (this->StrSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StrSet).HashSize = 0;
  *(undefined8 *)&(this->IntSet).Elements = 0;
  *(undefined8 *)&(this->IntSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IntSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IntSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x30 = 0xffffffff;
  (this->IntSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IntSet).HashSize = 0;
  *(undefined8 *)&(this->NameSet).Elements = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x30 = 0xffffffff;
  (this->NameSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NameSet).HashSize = 0;
  *(undefined8 *)&(this->StructSet).Elements = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x30 = 0xffffffff;
  (this->StructSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructSet).HashSize = 0;
  return this;
}

// FStructSerializerSetTestStruct @ 148b9ec50

FStructSerializerSetTestStruct * __thiscall
FStructSerializerSetTestStruct::FStructSerializerSetTestStruct(FStructSerializerSetTestStruct *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  ForElementType<FSetElementId> *pFVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FStructSerializerBuiltinTestStruct *pFVar11;
  TSparseSetElement<int> *pTVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  uint uVar17;
  TSparseSetElement<int> *pTVar18;
  ulonglong uVar19;
  TSparseSetElement<int> *pTVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  FName local_res10;
  FSparseArrayAllocationInfo local_158;
  undefined4 local_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  FStructSerializerBuiltinTestStruct local_108;
  
  pTVar18 = (TSparseSetElement<int> *)0x0;
  pTVar1 = &this->IntSet;
  *(undefined8 *)&(this->StrSet).Elements = 0;
  puVar2 = &(this->IntSet).Elements.field_0x8;
  *(undefined8 *)&(this->StrSet).Elements.field_0x8 = 0;
  puVar21 = &(this->IntSet).Elements.field_0xc;
  *(undefined8 *)&(this->StrSet).Elements.field_0x20 = 0;
  piVar3 = &(this->IntSet).HashSize;
  *(undefined4 *)&(this->StrSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StrSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StrSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrSet).Elements.field_0x34 = 0;
  (this->StrSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StrSet).HashSize = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)puVar21 = 0;
  *(undefined8 *)&(this->IntSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IntSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IntSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntSet).Elements.field_0x34 = 0;
  (this->IntSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *piVar3 = 0;
  *(undefined8 *)&(this->NameSet).Elements = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NameSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NameSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameSet).Elements.field_0x34 = 0;
  (this->NameSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NameSet).HashSize = 0;
  *(undefined8 *)&(this->StructSet).Elements = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructSet).Elements.field_0x34 = 0;
  (this->StructSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructSet).HashSize = 0;
  iVar9 = *(int *)&(this->IntSet).Elements.field_0x34;
  if (iVar9 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)puVar2,(int *)puVar21);
    puVar2 = &(this->IntSet).Elements.field_0x10;
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,1);
    puVar21 = *(undefined1 **)&(this->IntSet).Elements.field_0x20;
    uVar14 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar14;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    *(uint *)(puVar21 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar21 + (longlong)(iVar9 >> 5) * 4) &
         ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar14 & 0x1f));
  }
  else {
    iVar8 = *(int *)&(this->IntSet).Elements.field_0x30;
    iVar9 = iVar9 + -1;
    lVar6 = *(longlong *)&pTVar1->Elements;
    iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar8 * 0xc);
    *(int *)&(this->IntSet).Elements.field_0x30 = iVar5;
    *(int *)&(this->IntSet).Elements.field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar5 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&local_158,iVar8);
  pTVar12 = pTVar18;
  if (local_158.Pointer != (TSparseSetElement<int> *)0x0) {
    *(undefined4 *)local_158.Pointer = 1;
    *(undefined4 *)((longlong)local_158.Pointer + 4) = 0xffffffff;
    pTVar12 = local_158.Pointer;
  }
  local_res8._0_4_ = local_158.Index;
  local_res10.ComparisonIndex.Value = *(uint *)&pTVar12->field_0x0;
  bVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,local_res10.ComparisonIndex.Value,pTVar12,(int *)local_res8,(bool *)0x0)
  ;
  if (!bVar7) {
    uVar16 = 1;
    uVar14 = *(int *)&(this->IntSet).Elements.field_0x8 -
             *(int *)&(this->IntSet).Elements.field_0x34;
    if (3 < uVar14) {
      uVar19 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar16 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar14 < 1) || ((int)uVar16 <= *piVar3)) {
      uVar14 = *piVar3 - 1U & local_res10.ComparisonIndex.Value;
      *(uint *)(&pTVar12->field_0x0 + 8) = uVar14;
      FVar15 = (this->IntSet).Hash.SecondaryData;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&(this->IntSet).Hash;
      }
      uVar19 = (longlong)(this->IntSet).HashSize - 1U & (longlong)(int)uVar14;
      *(undefined4 *)(&pTVar12->field_0x0 + 4) = *(undefined4 *)((longlong)FVar15 + uVar19 * 4);
      *(undefined4 *)((longlong)FVar15 + uVar19 * 4) = local_res8._0_4_;
    }
    else {
      pFVar4 = &(this->IntSet).Hash;
      *piVar3 = uVar16;
      if ((this->IntSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->IntSet).Hash.SecondaryData,0,0,4);
      }
      if (uVar16 != 0) {
        uVar14 = uVar16;
        if (uVar16 < 2) {
          if ((this->IntSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar14 = 0;
            goto LAB_148b9eec1;
          }
        }
        else {
LAB_148b9eec1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->IntSet).Hash.SecondaryData,0,uVar14,4);
        }
        if (0 < (int)uVar16) {
          uVar19 = (ulonglong)uVar16;
          pTVar12 = pTVar18;
          do {
            FVar15 = (this->IntSet).Hash.SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)pFVar4;
            if (FVar15 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar15;
            }
            uVar10 = (ulonglong)pTVar12 & (longlong)(int)uVar16 - 1U;
            pTVar12 = (TSparseSetElement<int> *)(&pTVar12->field_0x0 + 1);
            *(undefined4 *)((longlong)FVar13 + uVar10 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (*piVar3 != 0) {
        uVar14 = *(uint *)&(this->IntSet).Elements.field_0x28;
        local_158.Pointer = &(this->IntSet).Elements.field_0x10;
        local_158._4_4_ = 1;
        local_158.Index = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        pTVar12 = pTVar18;
        if (uVar14 != 0) {
          puVar22 = *(uint **)&(this->IntSet).Elements.field_0x20;
          if (puVar22 == (uint *)0x0) {
            puVar22 = local_158.Pointer;
          }
          uVar16 = *puVar22;
          pTVar20 = pTVar18;
          while (uVar16 == 0) {
            uStack_140 = (int)pTVar20 + 0x20;
            pTVar20 = (TSparseSetElement<int> *)(ulonglong)uStack_140;
            iVar9 = (int)pTVar12;
            local_158.Index = iVar9 + 1;
            pTVar12 = (TSparseSetElement<int> *)(ulonglong)(uint)local_158.Index;
            if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < local_158.Index)
            goto LAB_148b9efbe;
            uVar16 = puVar22[(longlong)iVar9 + 1];
          }
          local_158._4_4_ = -uVar16 & uVar16;
          uVar19 = (ulonglong)(uint)local_158._4_4_ * 2 + 1;
          lVar6 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uStack_144 = (int)lVar6 + -1 + uStack_140;
          pTVar12 = (TSparseSetElement<int> *)(ulonglong)uStack_144;
          if ((int)uVar14 < (int)uStack_144) {
LAB_148b9efbe:
            pTVar12 = (TSparseSetElement<int> *)(ulonglong)uVar14;
            uStack_144 = uVar14;
          }
        }
        local_148 = 0xffffffff;
        local_130._padding_ = CONCAT44(local_158._4_4_,local_158.Index);
        local_130.CurrentBitIndex = uStack_144;
        local_130.UnvisitedBitMask = 0xffffffff;
        local_130._28_4_ = uStack_13c;
        local_130.BaseBitIndex = uStack_140;
        local_138 = pTVar1;
        local_130.Array = local_158.Pointer;
        if ((int)pTVar12 < (int)uVar14) {
          do {
            iVar9 = (int)pTVar12;
            uVar14 = *piVar3 - 1U &
                     *(uint *)(*(longlong *)&local_138->Elements + (longlong)iVar9 * 0xc);
            lVar6 = *(longlong *)&local_138->Elements + (longlong)iVar9 * 0xc;
            *(uint *)(lVar6 + 8) = uVar14;
            FVar15 = (this->IntSet).Hash.SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)pFVar4;
            if (FVar15 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar15;
            }
            uVar19 = (longlong)*piVar3 - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(lVar6 + 4) = *(undefined4 *)((longlong)FVar13 + uVar19 * 4);
            *(int *)((longlong)FVar13 + uVar19 * 4) = iVar9;
            local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
            pTVar12 = (TSparseSetElement<int> *)(ulonglong)(uint)local_130.CurrentBitIndex;
          } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
        }
      }
    }
  }
  pTVar1 = &this->IntSet;
  iVar9 = *(int *)&(this->IntSet).Elements.field_0x34;
  if (iVar9 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)pTVar1,(int *)&(this->IntSet).Elements.field_0x8
                       ,(int *)&(this->IntSet).Elements.field_0xc);
    puVar2 = &(this->IntSet).Elements.field_0x10;
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,1);
    puVar21 = *(undefined1 **)&(this->IntSet).Elements.field_0x20;
    uVar14 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar14;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    *(uint *)(puVar21 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar21 + (longlong)(iVar9 >> 5) * 4) &
         ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar14 & 0x1f));
  }
  else {
    iVar8 = *(int *)&(this->IntSet).Elements.field_0x30;
    iVar9 = iVar9 + -1;
    lVar6 = *(longlong *)&pTVar1->Elements;
    iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar8 * 0xc);
    *(int *)&(this->IntSet).Elements.field_0x30 = iVar5;
    *(int *)&(this->IntSet).Elements.field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar5 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1,&local_158,iVar8);
  pTVar12 = pTVar18;
  if (local_158.Pointer != (TSparseSetElement<int> *)0x0) {
    *(undefined4 *)local_158.Pointer = 2;
    *(undefined4 *)((longlong)local_158.Pointer + 4) = 0xffffffff;
    pTVar12 = local_158.Pointer;
  }
  uVar14 = *(uint *)&pTVar12->field_0x0;
  local_res8._0_4_ = local_158.Index;
  bVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                    (pTVar1,uVar14,pTVar12,(int *)local_res8,(bool *)0x0);
  if (bVar7) goto LAB_148b9f3e7;
  uVar17 = 1;
  uVar16 = *(int *)&(this->IntSet).Elements.field_0x8 - *(int *)&(this->IntSet).Elements.field_0x34;
  if (3 < uVar16) {
    uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar17 <= (this->IntSet).HashSize)) {
    uVar14 = (this->IntSet).HashSize - 1U & uVar14;
    *(uint *)(&pTVar12->field_0x0 + 8) = uVar14;
    FVar15 = (this->IntSet).Hash.SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&(this->IntSet).Hash;
    }
    uVar19 = (longlong)(this->IntSet).HashSize - 1U & (longlong)(int)uVar14;
    *(undefined4 *)(&pTVar12->field_0x0 + 4) = *(undefined4 *)((longlong)FVar15 + uVar19 * 4);
    *(undefined4 *)((longlong)FVar15 + uVar19 * 4) = local_res8._0_4_;
    goto LAB_148b9f3e7;
  }
  (this->IntSet).HashSize = uVar17;
  if ((this->IntSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->IntSet).Hash.SecondaryData,0,0,4);
  }
  if (uVar17 != 0) {
    uVar14 = uVar17;
    if (uVar17 < 2) {
      if ((this->IntSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_148b9f207;
      }
    }
    else {
LAB_148b9f207:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->IntSet).Hash.SecondaryData,0,uVar14,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      pTVar12 = pTVar18;
      do {
        FVar15 = (this->IntSet).Hash.SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&(this->IntSet).Hash;
        if (FVar15 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar15;
        }
        uVar10 = (ulonglong)pTVar12 & (longlong)(int)uVar17 - 1U;
        pTVar12 = (TSparseSetElement<int> *)(&pTVar12->field_0x0 + 1);
        *(undefined4 *)((longlong)FVar13 + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if ((this->IntSet).HashSize != 0) {
    uVar14 = *(uint *)&(this->IntSet).Elements.field_0x28;
    local_158.Pointer = &(this->IntSet).Elements.field_0x10;
    local_158.Index = 0;
    local_158._4_4_ = 1;
    uStack_144 = 0;
    uStack_140 = 0;
    if (uVar14 != 0) {
      puVar22 = *(uint **)&(this->IntSet).Elements.field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = local_158.Pointer;
      }
      uVar16 = *puVar22;
      pTVar12 = pTVar18;
      while (uVar16 == 0) {
        iVar9 = (int)pTVar18;
        uStack_140 = (int)pTVar12 + 0x20;
        pTVar12 = (TSparseSetElement<int> *)(ulonglong)uStack_140;
        local_158.Index = iVar9 + 1;
        pTVar18 = (TSparseSetElement<int> *)(ulonglong)(uint)local_158.Index;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < local_158.Index)
        goto LAB_148b9f300;
        uVar16 = puVar22[(longlong)iVar9 + 1];
      }
      local_158._4_4_ = -uVar16 & uVar16;
      uVar19 = (ulonglong)(uint)local_158._4_4_ * 2 + 1;
      lVar6 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_144 = (int)lVar6 + -1 + uStack_140;
      pTVar18 = (TSparseSetElement<int> *)(ulonglong)uStack_144;
      if ((int)uVar14 < (int)uStack_144) {
LAB_148b9f300:
        pTVar18 = (TSparseSetElement<int> *)(ulonglong)uVar14;
        uStack_144 = uVar14;
      }
    }
    local_148 = 0xffffffff;
    local_130._padding_ = CONCAT44(local_158._4_4_,local_158.Index);
    local_130.CurrentBitIndex = uStack_144;
    local_130.UnvisitedBitMask = 0xffffffff;
    local_130._28_4_ = uStack_13c;
    local_130.BaseBitIndex = uStack_140;
    local_138 = pTVar1;
    local_130.Array = local_158.Pointer;
    if ((int)pTVar18 < (int)uVar14) {
      do {
        iVar9 = (int)pTVar18;
        uVar14 = (this->IntSet).HashSize - 1U &
                 *(uint *)(*(longlong *)&local_138->Elements + (longlong)iVar9 * 0xc);
        lVar6 = *(longlong *)&local_138->Elements + (longlong)iVar9 * 0xc;
        *(uint *)(lVar6 + 8) = uVar14;
        FVar15 = (this->IntSet).Hash.SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&(this->IntSet).Hash;
        if (FVar15 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar15;
        }
        uVar19 = (longlong)(this->IntSet).HashSize - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar6 + 4) = *(undefined4 *)((longlong)FVar13 + uVar19 * 4);
        *(int *)((longlong)FVar13 + uVar19 * 4) = iVar9;
        local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
        pTVar18 = (TSparseSetElement<int> *)(ulonglong)(uint)local_130.CurrentBitIndex;
      } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
    }
  }
LAB_148b9f3e7:
  local_res8._0_4_ = 3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
            (&this->IntSet,(int *)(local_res8 + 8),(bool *)local_res8);
  ::FString::FString((FString *)&local_158,L"Are");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&this->StrSet,(FString *)local_res8,(bool *)&local_158);
  if ((void *)CONCAT44(local_158._4_4_,local_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_158._4_4_,local_158.Index));
  }
  ::FString::FString((FString *)&local_158,L"Belong");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&this->StrSet,(FString *)local_res8,(bool *)&local_158);
  if ((void *)CONCAT44(local_158._4_4_,local_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_158._4_4_,local_158.Index));
  }
  ::FString::FString((FString *)&local_158,L"To");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&this->StrSet,(FString *)local_res8,(bool *)&local_158);
  if ((void *)CONCAT44(local_158._4_4_,local_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_158._4_4_,local_158.Index));
  }
  ::FString::FString((FString *)&local_158,L"Us");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&this->StrSet,(FString *)local_res8,(bool *)&local_158);
  if ((void *)CONCAT44(local_158._4_4_,local_158.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_158._4_4_,local_158.Index));
  }
  ::FName::FName((FName *)(local_res8 + 8),L"Make");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->NameSet,(FName *)local_res8,(bool *)(local_res8 + 8));
  ::FName::FName((FName *)(local_res8 + 8),L"Your");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->NameSet,(FName *)local_res8,(bool *)(local_res8 + 8));
  ::FName::FName((FName *)(local_res8 + 8),L"Time");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->NameSet,(FName *)local_res8,(bool *)(local_res8 + 8));
  pFVar11 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&local_108);
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::Emplace<FStructSerializerBuiltinTestStruct>
            (&this->StructSet,(FStructSerializerBuiltinTestStruct *)local_res8,(bool *)pFVar11);
  if (local_108.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.Text.TextData.Reference + 0x10))();
  }
  if (local_108.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.String.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FStructSerializerSetTestStruct @ 148ba0820

void __thiscall
FStructSerializerSetTestStruct::~FStructSerializerSetTestStruct
          (FStructSerializerSetTestStruct *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->StructSet).HashSize = 0;
  FVar1 = (this->StructSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StructSet).Elements);
  (this->NameSet).HashSize = 0;
  FVar1 = (this->NameSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NameSet).Elements);
  (this->IntSet).HashSize = 0;
  FVar1 = (this->IntSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IntSet).Elements);
  (this->StrSet).HashSize = 0;
  FVar1 = (this->StrSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

