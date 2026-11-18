// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 4

// StaticStruct @ 14e2ebec0

UScriptStruct * __cdecl FDatasmithMeshSectionInfoMapTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate,
                         (UObject *)pUVar1,L"DatasmithMeshSectionInfoMapTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.OuterSingleton;
}

// Apply @ 14e2f7fc0

void __thiscall
FDatasmithMeshSectionInfoMapTemplate::Apply
          (FDatasmithMeshSectionInfoMapTemplate *this,FMeshSectionInfoMap *param_1,
          FDatasmithMeshSectionInfoMapTemplate *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  TKeyInitializer<unsigned_int_const_&> local_res8;
  uint *local_res20;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
              *)this);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  if (*(int *)(local_98._16_8_ + 0x18) <= (int)local_98._28_4_) {
    return;
  }
  puVar13 = (uint *)0x0;
  uVar10 = local_98._28_4_;
  local_38 = (TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
              *)this;
LAB_14e2f8040:
  plVar4 = local_68;
  puVar12 = (uint *)((longlong)(int)uVar7 * 0x10 + *local_68);
  uVar2 = *puVar12;
  if (*(int *)&(param_1->Map).field_0x8 != *(int *)&(param_1->Map).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->Map).field_0x40;
    puVar9 = &(param_1->Map).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar9 = puVar3;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(param_1->Map).field_0x48 - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&param_1->Map + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&param_1->Map + (longlong)iVar5 * 0x18) == uVar2) {
          puVar11 = (uint *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar11 = puVar13;
          }
          if (puVar11 != (uint *)0x0) {
            if (param_2 == (FDatasmithMeshSectionInfoMapTemplate *)0x0) goto LAB_14e2f81d4;
            puVar12 = puVar13;
            if (*(int *)&(param_2->Map).field_0x8 == *(int *)&(param_2->Map).field_0x34)
            goto LAB_14e2f81b9;
            puVar3 = *(undefined1 **)&(param_2->Map).field_0x40;
            puVar9 = &(param_2->Map).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar9 = puVar3;
            }
            uVar6 = *(uint *)(puVar9 + (ulonglong)(*(int *)&(param_2->Map).field_0x48 - 1U & uVar2)
                                       * 4);
            if (uVar6 == 0xffffffff) goto LAB_14e2f81b9;
            goto LAB_14e2f81a0;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res20 = puVar12;
  TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)&local_res20);
  *(undefined4 *)(*(longlong *)&param_1->Map + 4 + (longlong)(int)local_res8.Key * 0x18) =
       *(undefined4 *)(*plVar4 + 4 + (longlong)(int)uVar10 * 0x10);
  goto LAB_14e2f80cf;
  while (uVar6 = puVar12[2], puVar12 = puVar13, uVar6 != 0xffffffff) {
LAB_14e2f81a0:
    puVar12 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)&param_2->Map);
    if (*puVar12 == uVar2) break;
  }
LAB_14e2f81b9:
  puVar8 = puVar12 + 1;
  if (puVar12 == (uint *)0x0) {
    puVar8 = puVar13;
  }
  if ((puVar8 == (uint *)0x0) || (*puVar11 == *puVar8)) {
LAB_14e2f81d4:
    *puVar11 = *(uint *)((longlong)(int)uVar10 * 0x10 + 4 + *local_68);
  }
LAB_14e2f80cf:
  uStack_50 = uStack_50 & ~auStack_60._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
  uVar7 = (ulonglong)uStack_4c;
  uVar10 = uStack_4c;
  if (*(int *)(auStack_60._8_8_ + 0x18) <= (int)uStack_4c) {
    if ((char)local_30 == '\0') {
      return;
    }
    if (local_30._1_1_ == '\0') {
      return;
    }
    uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
    if (uVar10 < 4) {
      iVar5 = 1;
    }
    else {
      uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((((int)uVar10 < 1) || (iVar5 <= local_38->HashSize)) && (local_38->HashSize <= iVar5)) {
      return;
    }
    local_38->HashSize = iVar5;
    TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
    ::Rehash(local_38);
    return;
  }
  goto LAB_14e2f8040;
}

// Equals @ 14e2f8e00

bool __thiscall
FDatasmithMeshSectionInfoMapTemplate::Equals
          (FDatasmithMeshSectionInfoMapTemplate *this,FDatasmithMeshSectionInfoMapTemplate *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  ForElementType<unsigned_int> FVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 local_res10 [8];
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar20 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  bVar22 = iVar20 == *(int *)&(param_1->Map).field_0x8 - *(int *)&(param_1->Map).field_0x34;
  if (!bVar22) {
    return bVar22;
  }
  local_res20 = (ForElementType<unsigned_int>)&(this->Map).field_0x10;
  iVar8 = 0;
  uVar9 = 1;
  iVar2 = *(int *)&(this->Map).field_0x28;
  iVar10 = iVar8;
  iVar17 = iVar8;
  if (iVar2 != 0) {
    puVar18 = *(uint **)&(this->Map).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_res20;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar8;
      iVar17 = iVar17 + 0x20;
      iVar8 = iVar8 + 1;
      iVar10 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar8) goto LAB_14e2f8ee1;
      uVar16 = (puVar18 + 1)[lVar11];
    }
    uVar9 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar10 = iVar17 + -1 + local_res18;
    if (iVar2 < iVar10) {
      iVar10 = iVar2;
    }
  }
LAB_14e2f8ee1:
  uVar16 = *(uint *)&(this->Map).field_0x28;
  uVar21 = uVar16 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar8);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,iVar20);
  iVar20 = (int)uVar16 >> 5;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
  if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(int *)((longlong)local_res20 + 0x18);
  if (uVar16 != uVar9) {
    FVar13 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_res20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar20 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar20;
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + 1;
      uVar16 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar20) goto LAB_14e2f8fda;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar13 + 4) + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar21;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_14e2f8fda:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar16) &&
       ((ForElementType<unsigned_int>)TStack_70.Array == local_res20)) {
      return bVar22;
    }
    puVar18 = (uint *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)&this->Map);
    if ((bVar22 == false) ||
       (uVar9 = *puVar18, *(int *)&(param_1->Map).field_0x8 == *(int *)&(param_1->Map).field_0x34))
    {
      return false;
    }
    puVar3 = *(undefined1 **)&(param_1->Map).field_0x40;
    puVar19 = &(param_1->Map).field_0x38;
    puVar15 = puVar19;
    if (puVar3 != (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    lVar11 = (ulonglong)(*(int *)&(param_1->Map).field_0x48 - 1U & uVar9) * 4;
    iVar20 = *(int *)(puVar15 + lVar11);
    if (iVar20 == -1) break;
    lVar4 = *(longlong *)&param_1->Map;
    while (*(uint *)(lVar4 + (longlong)iVar20 * 0x10) != uVar9) {
      iVar20 = *(int *)(lVar4 + 8 + (longlong)iVar20 * 0x10);
      if (iVar20 == -1) {
        return false;
      }
    }
    if (puVar3 != (undefined1 *)0x0) {
      puVar19 = puVar3;
    }
    uVar21 = *(uint *)(puVar19 + lVar11);
    while ((puVar12 = (uint *)0x0, uVar21 != 0xffffffff &&
           (puVar12 = (uint *)((longlong)(int)uVar21 * 0x10 + lVar4), *puVar12 != uVar9))) {
      uVar21 = puVar12[2];
    }
    puVar14 = puVar12 + 1;
    if (puVar12 == (uint *)0x0) {
      puVar14 = (uint *)0x0;
    }
    if (puVar18[1] != *puVar14) {
      return false;
    }
    bVar22 = true;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return false;
}

// Load @ 14e2fdd60

void __thiscall
FDatasmithMeshSectionInfoMapTemplate::Load
          (FDatasmithMeshSectionInfoMapTemplate *this,FMeshSectionInfoMap *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_res8 [4];
  longlong local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  FMeshSectionInfoMap *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  bVar5 = 1 < *(int *)&(this->Map).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->Map).field_0xc;
  *(undefined4 *)&(this->Map).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  iVar3 = *(int *)&(this->Map).field_0x2c;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Map).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Map).field_0x10,0);
  }
  uVar6 = 1;
  if (bVar5) {
    *(undefined4 *)&(this->Map).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
              *)this);
  }
  iVar3 = *(int *)&(param_1->Map).field_0x28;
  local_78 = &(param_1->Map).field_0x10;
  iVar8 = 0;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&(param_1->Map).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar4 = *puVar9;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      local_68 = local_68 + 0x20;
      iVar8 = iVar8 + 1;
      iStack_6c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14e2fde8b;
      uVar4 = puVar9[lVar7 + 1];
    }
    uVar6 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_6c = (int)lVar7 + -1 + local_68;
    if (iVar3 < iStack_6c) {
      iStack_6c = iVar3;
    }
  }
LAB_14e2fde8b:
  uStack_80 = (undefined4 *)CONCAT44(uVar6,iVar8);
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = (longlong)uStack_80;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  if (iStack_6c < iVar3) {
    uStack_80 = local_res8;
    iStack_64 = iStack_6c;
    local_58 = param_1;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
    TStack_50.CurrentBitIndex = iStack_6c;
    do {
      local_res8[0] =
           *(undefined4 *)
            ((longlong)TStack_50.CurrentBitIndex * 0x18 + 4 + *(longlong *)&local_58->Map);
      local_88 = *(longlong *)&local_58->Map + (longlong)TStack_50.CurrentBitIndex * 0x18;
      TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FDatasmithMeshSectionInfoTemplate_&&>_>
                ((TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<unsigned_int_const_&,FDatasmithMeshSectionInfoTemplate_&&>
                          *)(local_res8 + 2),(bool *)&local_88);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

