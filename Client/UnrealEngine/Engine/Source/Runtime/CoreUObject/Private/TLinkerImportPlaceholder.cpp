// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 21

// AddReferencingScriptExpr @ 141f6df30

void __thiscall
TLinkerImportPlaceholder<UClass>::AddReferencingScriptExpr
          (TLinkerImportPlaceholder<UClass> *this,UClass **param_1)

{
  UClass **local_res8;
  UClass **local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_*_const_&>
            (&this->ReferencingScriptExpressions,&local_res8,(bool *)local_res10);
  return;
}

// AddReferencingScriptExpr @ 141f6df60

void __thiscall
TLinkerImportPlaceholder<UFunction>::AddReferencingScriptExpr
          (TLinkerImportPlaceholder<UFunction> *this,UFunction **param_1)

{
  UFunction **local_res8;
  UFunction **local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator>::
  Emplace<UFunction_*_*_const_&>
            (&this->ReferencingScriptExpressions,&local_res8,(bool *)local_res10);
  return;
}

// AddDerivedFunction @ 1420a9220

void __thiscall
TLinkerImportPlaceholder<UFunction>::AddDerivedFunction
          (TLinkerImportPlaceholder<UFunction> *this,UStruct *param_1)

{
  UStruct *local_res8;
  UStruct *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*_const_&>
            (&this->DerivedFunctions,&local_res8,(bool *)local_res10);
  return;
}

// SpecializedResolvePropertyReferences @ 1420da830

int __thiscall
TLinkerImportPlaceholder<UClass>::SpecializedResolvePropertyReferences
          (TLinkerImportPlaceholder<UClass> *this,UClass *param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  FFieldVariant FVar4;
  ulong64 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FFieldClass *pFVar14;
  FString *pFVar15;
  undefined1 *puVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  FFieldObjectUnion *this_01;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar11 = 0;
  pUVar12 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  if (pUVar12 == (UObject *)0x0) {
    pFVar15 = GetTypeName<UClass>(&local_70);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar18);
  }
  pUVar13 = Z_Construct_UClass_UClass_NoRegister();
  iVar22 = (int)pUVar13->_padding_;
  if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar22) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar13->_padding_)) {
    pFVar15 = GetTypeName<UClass>(&local_60);
    pwVar18 = L"";
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    pFVar15 = GetFullNameForCastLogError<UObject>(&local_50,pUVar12);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar18,pwVar17);
  }
  iVar19 = 0;
  this_00 = &this->ReferencingProperties;
  iVar22 = *(int *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar22 != 0) {
    puVar21 = *(uint **)&(this->ReferencingProperties).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)&(this->ReferencingProperties).Elements.field_0x10;
    }
    uVar2 = *puVar21;
    while (uVar2 == 0) {
      iVar19 = iVar19 + 1;
      iVar20 = iVar20 + 0x20;
      iVar10 = iVar22;
      if ((int)((iVar22 + -1 >> 0x1f & 0x1fU) + iVar22 + -1) >> 5 < iVar19) goto LAB_1420da933;
      uVar2 = puVar21[iVar19];
    }
    uVar9 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = (int)lVar6 + -1 + iVar20;
    if (iVar22 < iVar10) {
      iVar10 = iVar22;
    }
  }
LAB_1420da933:
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10;
  local_res18 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  TStack_a8._padding_ = CONCAT44(uVar9,iVar19);
  uVar9 = local_res18 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iVar10;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)local_res18 >> 5;
  TStack_a8._28_4_ = iVar10;
  TStack_a8.BaseBitIndex = iVar20;
  uStack_88 = CONCAT44(uStack_bc,
                       *(int *)&(this->ReferencingProperties).Elements.field_0x8 -
                       *(int *)&(this->ReferencingProperties).Elements.field_0x34);
  if ((((int)local_res18 < 0) || (iVar22 < (int)local_res18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  uVar2 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar22 = 0;
  if (local_res18 != uVar2) {
    puVar3 = *(undefined1 **)&(this->ReferencingProperties).Elements.field_0x20;
    puVar16 = &(this->ReferencingProperties).Elements.field_0x10;
    if (puVar3 != (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar23 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
    while (iVar22 = iVar11, uVar23 == 0) {
      iVar19 = iVar19 + 1;
      uVar9 = uVar9 + 0x20;
      local_res18 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar19) goto LAB_1420daa50;
      uVar23 = *(uint *)(puVar16 + (longlong)iVar19 * 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (uVar9 - 1) + (int)lVar6;
    if ((int)uVar2 < (int)local_res18) {
      local_res18 = uVar2;
    }
  }
LAB_1420daa50:
  while( true ) {
    if (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a8.CurrentBitIndex == local_res18) &&
       (TStack_a8.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10))
    break;
    this_01 = (FFieldObjectUnion *)
              ((longlong)TStack_a8.CurrentBitIndex * 0x10 + *(longlong *)&this_00->Elements);
    pFVar14 = FObjectPropertyBase::StaticClass();
    bVar8 = FFieldVariant::IsA((FFieldVariant *)this_01,pFVar14);
    if ((bVar8) &&
       (FVar4.Container = (FFieldObjectUnion)this_01->Field, FVar4.Container != (FField *)0x0)) {
      if (*(UObject **)((longlong)FVar4.Container + 0x70) == (UObject *)0x0) {
        bVar8 = pUVar12 == (UObject *)0x0;
      }
      else {
        bVar8 = *(UObject **)((longlong)FVar4.Container + 0x70) == pUVar12;
      }
      if (bVar8) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UClass **)((longlong)FVar4.Container + 0x70) = param_1;
        iVar22 = iVar22 + 1;
      }
      uVar1 = *(ulonglong *)(*(longlong *)((longlong)FVar4.Container + 8) + 0x18);
      if (((uVar1 >> 10 & 1) != 0) || ((uVar1 >> 0x21 & 1) != 0)) {
        if (*(UObject **)((longlong)FVar4.Container + 0x78) == (UObject *)0x0) {
          bVar8 = pUVar12 == (UObject *)0x0;
        }
        else {
          bVar8 = *(UObject **)((longlong)FVar4.Container + 0x78) == pUVar12;
        }
        if (bVar8) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *(UClass **)((longlong)FVar4.Container + 0x78) = param_1;
          iVar22 = iVar22 + 1;
        }
      }
    }
    else {
      pFVar14 = FInterfaceProperty::StaticClass();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)this_01,pFVar14);
      if ((bVar8) && (uVar5 = this_01->Unknown, uVar5 != 0)) {
        if (*(UObject **)(uVar5 + 0x70) == (UObject *)0x0) {
          bVar8 = pUVar12 == (UObject *)0x0;
        }
        else {
          bVar8 = *(UObject **)(uVar5 + 0x70) == pUVar12;
        }
        if (bVar8) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *(UClass **)(uVar5 + 0x70) = param_1;
          iVar22 = iVar22 + 1;
        }
      }
      else {
        FFieldVariant::GetClassName((FFieldVariant *)this_01,&local_80);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                           ,0x2c5,L"Unhandled property type: %s");
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          iVar11 = (*pcVar7)();
          return iVar11;
        }
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  bVar8 = 1 < (this->ReferencingProperties).HashSize;
  if (!bVar8) {
    TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar3 = &(this->ReferencingProperties).Elements.field_0xc;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
  iVar11 = *(int *)&(this->ReferencingProperties).Elements.field_0x2c;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ReferencingProperties).Elements.field_0x10,0);
  }
  if (bVar8) {
    (this->ReferencingProperties).HashSize = 1;
    TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return iVar22;
}

// SpecializedResolvePropertyReferences @ 1420dad30

int __thiscall
TLinkerImportPlaceholder<UFunction>::SpecializedResolvePropertyReferences
          (TLinkerImportPlaceholder<UFunction> *this,UFunction *param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  FFieldClass *pFVar13;
  FString *pFVar14;
  undefined1 *puVar15;
  FFieldVariant *this_01;
  wchar_t *pwVar16;
  uint uVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar10 = 0;
  pUVar11 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  if (pUVar11 == (UObject *)0x0) {
    pFVar14 = GetTypeName<UFunction>(&local_70);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
  iVar2 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar12->_padding_)) {
    pFVar14 = GetTypeName<UFunction>(&local_60);
    pwVar16 = L"";
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UObject>(&local_50,pUVar11);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar19);
  }
  iVar20 = 0;
  this_00 = &this->ReferencingProperties;
  iVar2 = *(int *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar21 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar2 != 0) {
    puVar22 = *(uint **)&(this->ReferencingProperties).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->ReferencingProperties).Elements.field_0x10;
    }
    uVar3 = *puVar22;
    while (uVar3 == 0) {
      iVar20 = iVar20 + 1;
      iVar21 = iVar21 + 0x20;
      iVar9 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar20) goto LAB_1420dae32;
      uVar3 = puVar22[iVar20];
    }
    uVar8 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar9 = (int)lVar5 + -1 + iVar21;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_1420dae32:
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10;
  local_res18 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  TStack_a8._padding_ = CONCAT44(uVar8,iVar20);
  uVar8 = local_res18 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iVar9;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)local_res18 >> 5;
  TStack_a8._28_4_ = iVar9;
  TStack_a8.BaseBitIndex = iVar21;
  uStack_88 = CONCAT44(uStack_bc,
                       *(int *)&(this->ReferencingProperties).Elements.field_0x8 -
                       *(int *)&(this->ReferencingProperties).Elements.field_0x34);
  if ((((int)local_res18 < 0) || (iVar2 < (int)local_res18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  uVar3 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  if (local_res18 != uVar3) {
    puVar4 = *(undefined1 **)&(this->ReferencingProperties).Elements.field_0x20;
    puVar15 = &(this->ReferencingProperties).Elements.field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar15 = puVar4;
    }
    uVar17 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar20 * 4);
    while (uVar17 == 0) {
      iVar20 = iVar20 + 1;
      uVar8 = uVar8 + 0x20;
      local_res18 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar20) goto LAB_1420daf50;
      uVar17 = *(uint *)(puVar15 + (longlong)iVar20 * 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res18 = (int)lVar5 + -1 + uVar8;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
    }
  }
LAB_1420daf50:
  do {
    if (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a8.CurrentBitIndex == local_res18) &&
       (TStack_a8.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10))
    {
      bVar7 = 1 < (this->ReferencingProperties).HashSize;
      if (!bVar7) {
        TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::UnhashElements
                  (this_00);
      }
      puVar4 = &(this->ReferencingProperties).Elements.field_0xc;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
      iVar2 = *(int *)&(this->ReferencingProperties).Elements.field_0x2c;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ReferencingProperties).Elements.field_0x10,0);
      }
      if (bVar7) {
        (this->ReferencingProperties).HashSize = 1;
        TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
      return iVar10;
    }
    this_01 = (FFieldVariant *)
              (*(longlong *)&this_00->Elements + (longlong)TStack_a8.CurrentBitIndex * 0x10);
    pFVar13 = FDelegateProperty::StaticClass();
    bVar7 = FFieldVariant::IsA(this_01,pFVar13);
    if ((bVar7) && (uVar18 = (this_01->Container).Unknown, uVar18 != 0)) {
LAB_1420dafcd:
      if (*(UObject **)(uVar18 + 0x70) == (UObject *)0x0) {
        bVar7 = pUVar11 == (UObject *)0x0;
      }
      else {
        bVar7 = *(UObject **)(uVar18 + 0x70) == pUVar11;
      }
      if (bVar7) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFunction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UFunction **)(uVar18 + 0x70) = param_1;
        iVar10 = iVar10 + 1;
      }
    }
    else {
      pFVar13 = FMulticastDelegateProperty::StaticClass();
      bVar7 = FFieldVariant::IsA(this_01,pFVar13);
      if ((bVar7) && (uVar18 = (this_01->Container).Unknown, uVar18 != 0)) goto LAB_1420dafcd;
      FFieldVariant::GetClassName(this_01,&local_80);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,0x30e,L"Unhandled property type: %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// TLinkerImportPlaceholder<UClass> @ 1420e8b60

TLinkerImportPlaceholder<UClass> * __thiscall
TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>
          (TLinkerImportPlaceholder<UClass> *this)

{
  FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)this);
  this->_padding_ = (longlong)&___7__TLinkerImportPlaceholder_VUClass____6B_;
  *(undefined8 *)&(this->ReferencingProperties).Elements = 0;
  *(undefined8 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
  (this->ReferencingProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencingProperties).HashSize = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x30 = 0xffffffff;
  (this->ReferencingScriptExpressions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencingScriptExpressions).HashSize = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x30 = 0xffffffff;
  (this->DerivedFunctions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DerivedFunctions).HashSize = 0;
  return this;
}

// TLinkerImportPlaceholder<UFunction> @ 1420e8c50

TLinkerImportPlaceholder<UFunction> * __thiscall
TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>
          (TLinkerImportPlaceholder<UFunction> *this)

{
  FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)this);
  this->_padding_ = (longlong)&___7__TLinkerImportPlaceholder_VUFunction____6B_;
  *(undefined8 *)&(this->ReferencingProperties).Elements = 0;
  *(undefined8 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
  (this->ReferencingProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencingProperties).HashSize = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencingScriptExpressions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x30 = 0xffffffff;
  (this->ReferencingScriptExpressions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencingScriptExpressions).HashSize = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DerivedFunctions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x30 = 0xffffffff;
  (this->DerivedFunctions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DerivedFunctions).HashSize = 0;
  return this;
}

// ~TLinkerImportPlaceholder<UClass> @ 1420eb060

void __thiscall
TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>
          (TLinkerImportPlaceholder<UClass> *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->DerivedFunctions).HashSize = 0;
  FVar1 = (this->DerivedFunctions).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DerivedFunctions).Elements);
  (this->ReferencingScriptExpressions).HashSize = 0;
  FVar1 = (this->ReferencingScriptExpressions).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UClass_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencingScriptExpressions).Elements);
  (this->ReferencingProperties).HashSize = 0;
  FVar1 = (this->ReferencingProperties).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencingProperties).Elements);
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase((FLinkerPlaceholderBase *)this);
  return;
}

// ~TLinkerImportPlaceholder<UFunction> @ 1420eb100

void __thiscall
TLinkerImportPlaceholder<UFunction>::~TLinkerImportPlaceholder<UFunction>
          (TLinkerImportPlaceholder<UFunction> *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->DerivedFunctions).HashSize = 0;
  FVar1 = (this->DerivedFunctions).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DerivedFunctions).Elements);
  (this->ReferencingScriptExpressions).HashSize = 0;
  FVar1 = (this->ReferencingScriptExpressions).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UFunction_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UFunction_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencingScriptExpressions).Elements);
  (this->ReferencingProperties).HashSize = 0;
  FVar1 = (this->ReferencingProperties).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencingProperties).Elements);
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase((FLinkerPlaceholderBase *)this);
  return;
}

// HasKnownReferences @ 1420fe510

bool __thiscall
TLinkerImportPlaceholder<UClass>::HasKnownReferences(TLinkerImportPlaceholder<UClass> *this)

{
  bool bVar1;
  
  bVar1 = FLinkerPlaceholderBase::HasKnownReferences((FLinkerPlaceholderBase *)this);
  if ((((!bVar1) &&
       (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 < 1)) &&
      (*(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34 < 1)) &&
     (*(int *)&(this->DerivedFunctions).Elements.field_0x8 -
      *(int *)&(this->DerivedFunctions).Elements.field_0x34 < 1)) {
    return false;
  }
  return true;
}

// HasKnownReferences @ 1420fe570

bool __thiscall
TLinkerImportPlaceholder<UFunction>::HasKnownReferences(TLinkerImportPlaceholder<UFunction> *this)

{
  bool bVar1;
  
  bVar1 = FLinkerPlaceholderBase::HasKnownReferences((FLinkerPlaceholderBase *)this);
  if ((((!bVar1) &&
       (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 < 1)) &&
      (*(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34 < 1)) &&
     (*(int *)&(this->DerivedFunctions).Elements.field_0x8 -
      *(int *)&(this->DerivedFunctions).Elements.field_0x34 < 1)) {
    return false;
  }
  return true;
}

// ResolveAllPlaceholderReferences @ 14210ad20

int __thiscall
TLinkerImportPlaceholder<UClass>::ResolveAllPlaceholderReferences
          (TLinkerImportPlaceholder<UClass> *this,UObject *param_1)

{
  undefined1 *this_00;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator> *this_01;
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FLinkerLoad *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  UClass *pUVar15;
  wchar_t *pwVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  if (param_1 == (UObject *)0x0) {
LAB_14210adfd:
    pUVar15 = (UClass *)param_1;
    if ((UClass *)param_1 == (UClass *)0x0) {
      pUVar15 = (UClass *)0x0;
      goto LAB_14210ae34;
    }
  }
  else {
    pUVar11 = UObjectRedirector::StaticClass();
    iVar6 = (int)pUVar11->_padding_;
    pUVar15 = (UClass *)param_1;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar11->_padding_)) {
      pFVar12 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
      if ((pFVar12 != (FLinkerLoad *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x15 & 1) == 0)) {
        if ((GEventDrivenLoaderEnabled != false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GEventDrivenLoaderEnabled || !(1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.inl"
                               ,0x26,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        UE::FRecursiveMutex::Lock(&pFVar12->Mutex);
        UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NeedLoad);
        FLinkerLoad::Preload((FLinkerLoad *)&pFVar12->_padding_,param_1);
        UE::FRecursiveMutex::Unlock(&pFVar12->Mutex);
      }
      param_1 = *(UObject **)(param_1 + 1);
      goto LAB_14210adfd;
    }
  }
  pwVar14 = L"";
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  iVar6 = (int)pUVar11->_padding_;
  if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar6) ||
     (param_1 = (UObject *)pUVar15,
     (longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar11->_padding_)) {
    pFVar13 = GetTypeName<UClass>(&local_90);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UObject>(local_80,(UObject *)pUVar15);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar16);
  }
LAB_14210ae34:
  iVar7 = SpecializedResolvePropertyReferences(this,pUVar15);
  iVar8 = ResolveScriptReferences(this,pUVar15);
  this_01 = &this->DerivedFunctions;
  this_00 = &(this->DerivedFunctions).Elements.field_0x10;
  iVar21 = *(int *)&(this->DerivedFunctions).Elements.field_0x8 -
           *(int *)&(this->DerivedFunctions).Elements.field_0x34;
  iVar17 = 0;
  iVar6 = *(int *)&(this->DerivedFunctions).Elements.field_0x28;
  local_res18 = iVar8 + iVar7 + iVar21;
  iVar10 = 0;
  iVar8 = 0;
  uVar9 = 1;
  iVar7 = 0;
  if (iVar6 != 0) {
    puVar19 = *(uint **)&(this->DerivedFunctions).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)this_00;
    }
    uVar20 = *puVar19;
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      iVar8 = iVar8 + 0x20;
      iVar10 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14210aefe;
      uVar20 = puVar19[iVar17];
    }
    uVar9 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_res20 = (int)lVar3;
    iVar10 = local_res20 + -1 + iVar8;
    if (iVar6 < iVar10) {
      iVar10 = iVar6;
    }
LAB_14210aefe:
    iVar7 = *(int *)&(this->DerivedFunctions).Elements.field_0x28;
  }
  uVar20 = *(uint *)&(this->DerivedFunctions).Elements.field_0x28;
  uVar22 = uVar20 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar17);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar8;
  uStack_98 = CONCAT44(uStack_c4,iVar21);
  iVar6 = (int)uVar20 >> 5;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)uVar20 < 0) || (iVar7 < (int)uVar20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar9 = *(uint *)&(this->DerivedFunctions).Elements.field_0x28;
  if (uVar20 != uVar9) {
    puVar2 = *(undefined1 **)&(this->DerivedFunctions).Elements.field_0x20;
    puVar18 = this_00;
    if (puVar2 != (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar6 * 4);
    while (uVar20 == 0) {
      iVar6 = iVar6 + 1;
      uVar22 = uVar22 + 0x20;
      uVar20 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar6) goto LAB_14210b010;
      uVar20 = *(uint *)(puVar18 + (longlong)iVar6 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar20 = (uVar22 - 1) + (int)lVar3;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_14210b010:
  while( true ) {
    if (*(int *)&(this->DerivedFunctions).Elements.field_0x8 -
        *(int *)&(this->DerivedFunctions).Elements.field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_b8.CurrentBitIndex == uVar20) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)&this_01->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10) +
                800))();
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  bVar5 = 1 < (this->DerivedFunctions).HashSize;
  if (!bVar5) {
    TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::UnhashElements(this_01);
  }
  puVar2 = &(this->DerivedFunctions).Elements.field_0xc;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x34 = 0;
  iVar6 = *(int *)&(this->DerivedFunctions).Elements.field_0x2c;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar5) {
    (this->DerivedFunctions).HashSize = 1;
    TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Rehash(this_01);
  }
  iVar6 = FLinkerPlaceholderBase::ResolveAllPlaceholderReferences
                    ((FLinkerPlaceholderBase *)this,param_1);
  return iVar6 + local_res18;
}

// ResolveAllPlaceholderReferences @ 14210b160

int __thiscall
TLinkerImportPlaceholder<UFunction>::ResolveAllPlaceholderReferences
          (TLinkerImportPlaceholder<UFunction> *this,UObject *param_1)

{
  undefined1 *this_00;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator> *this_01;
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FLinkerLoad *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  UFunction *pUVar15;
  wchar_t *pwVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  if (param_1 == (UObject *)0x0) {
LAB_14210b23d:
    pUVar15 = (UFunction *)param_1;
    if ((UFunction *)param_1 == (UFunction *)0x0) {
      pUVar15 = (UFunction *)0x0;
      goto LAB_14210b274;
    }
  }
  else {
    pUVar11 = UObjectRedirector::StaticClass();
    iVar6 = (int)pUVar11->_padding_;
    pUVar15 = (UFunction *)param_1;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar11->_padding_)) {
      pFVar12 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
      if ((pFVar12 != (FLinkerLoad *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x15 & 1) == 0)) {
        if ((GEventDrivenLoaderEnabled != false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GEventDrivenLoaderEnabled || !(1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.inl"
                               ,0x26,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        UE::FRecursiveMutex::Lock(&pFVar12->Mutex);
        UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NeedLoad);
        FLinkerLoad::Preload((FLinkerLoad *)&pFVar12->_padding_,param_1);
        UE::FRecursiveMutex::Unlock(&pFVar12->Mutex);
      }
      param_1 = *(UObject **)(param_1 + 1);
      goto LAB_14210b23d;
    }
  }
  pwVar14 = L"";
  pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
  iVar6 = (int)pUVar11->_padding_;
  if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar6) ||
     (param_1 = (UObject *)pUVar15,
     (longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar11->_padding_)) {
    pFVar13 = GetTypeName<UFunction>(&local_90);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UObject>(local_80,(UObject *)pUVar15);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar16);
  }
LAB_14210b274:
  iVar7 = SpecializedResolvePropertyReferences(this,pUVar15);
  iVar8 = ResolveScriptReferences(this,pUVar15);
  this_01 = &this->DerivedFunctions;
  this_00 = &(this->DerivedFunctions).Elements.field_0x10;
  iVar21 = *(int *)&(this->DerivedFunctions).Elements.field_0x8 -
           *(int *)&(this->DerivedFunctions).Elements.field_0x34;
  iVar17 = 0;
  iVar6 = *(int *)&(this->DerivedFunctions).Elements.field_0x28;
  local_res18 = iVar8 + iVar7 + iVar21;
  iVar10 = 0;
  iVar8 = 0;
  uVar9 = 1;
  iVar7 = 0;
  if (iVar6 != 0) {
    puVar19 = *(uint **)&(this->DerivedFunctions).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)this_00;
    }
    uVar20 = *puVar19;
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      iVar8 = iVar8 + 0x20;
      iVar10 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14210b33e;
      uVar20 = puVar19[iVar17];
    }
    uVar9 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_res20 = (int)lVar3;
    iVar10 = local_res20 + -1 + iVar8;
    if (iVar6 < iVar10) {
      iVar10 = iVar6;
    }
LAB_14210b33e:
    iVar7 = *(int *)&(this->DerivedFunctions).Elements.field_0x28;
  }
  uVar20 = *(uint *)&(this->DerivedFunctions).Elements.field_0x28;
  uVar22 = uVar20 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar17);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar8;
  uStack_98 = CONCAT44(uStack_c4,iVar21);
  iVar6 = (int)uVar20 >> 5;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)uVar20 < 0) || (iVar7 < (int)uVar20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar9 = *(uint *)&(this->DerivedFunctions).Elements.field_0x28;
  if (uVar20 != uVar9) {
    puVar2 = *(undefined1 **)&(this->DerivedFunctions).Elements.field_0x20;
    puVar18 = this_00;
    if (puVar2 != (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar6 * 4);
    while (uVar20 == 0) {
      iVar6 = iVar6 + 1;
      uVar22 = uVar22 + 0x20;
      uVar20 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar6) goto LAB_14210b450;
      uVar20 = *(uint *)(puVar18 + (longlong)iVar6 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar20 = (uVar22 - 1) + (int)lVar3;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_14210b450:
  while( true ) {
    if (*(int *)&(this->DerivedFunctions).Elements.field_0x8 -
        *(int *)&(this->DerivedFunctions).Elements.field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<UStruct_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_b8.CurrentBitIndex == uVar20) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)&this_01->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10) +
                800))();
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  bVar5 = 1 < (this->DerivedFunctions).HashSize;
  if (!bVar5) {
    TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::UnhashElements(this_01);
  }
  puVar2 = &(this->DerivedFunctions).Elements.field_0xc;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x34 = 0;
  iVar6 = *(int *)&(this->DerivedFunctions).Elements.field_0x2c;
  *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->DerivedFunctions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar5) {
    (this->DerivedFunctions).HashSize = 1;
    TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Rehash(this_01);
  }
  iVar6 = FLinkerPlaceholderBase::ResolveAllPlaceholderReferences
                    ((FLinkerPlaceholderBase *)this,param_1);
  return iVar6 + local_res18;
}

// ResolvePropertyReferences @ 14210b5a0

int __thiscall
TLinkerImportPlaceholder<UClass>::ResolvePropertyReferences
          (TLinkerImportPlaceholder<UClass> *this,UClass *param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  FFieldVariant FVar4;
  ulong64 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FFieldClass *pFVar14;
  FString *pFVar15;
  undefined1 *puVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  FFieldObjectUnion *this_01;
  undefined1 auStackX_8 [8];
  uint uStackX_18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString FStack_80;
  FString FStack_70;
  FString FStack_60;
  FString FStack_50;
  
  iVar11 = 0;
  pUVar12 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  if (pUVar12 == (UObject *)0x0) {
    pFVar15 = GetTypeName<UClass>(&FStack_70);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar18);
  }
  pUVar13 = Z_Construct_UClass_UClass_NoRegister();
  iVar22 = (int)pUVar13->_padding_;
  if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar22) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar13->_padding_)) {
    pFVar15 = GetTypeName<UClass>(&FStack_60);
    pwVar18 = L"";
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    pFVar15 = GetFullNameForCastLogError<UObject>(&FStack_50,pUVar12);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar18,pwVar17);
  }
  iVar19 = 0;
  this_00 = &this->ReferencingProperties;
  iVar22 = *(int *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar22 != 0) {
    puVar21 = *(uint **)&(this->ReferencingProperties).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)&(this->ReferencingProperties).Elements.field_0x10;
    }
    uVar2 = *puVar21;
    while (uVar2 == 0) {
      iVar19 = iVar19 + 1;
      iVar20 = iVar20 + 0x20;
      iVar10 = iVar22;
      if ((int)((iVar22 + -1 >> 0x1f & 0x1fU) + iVar22 + -1) >> 5 < iVar19) goto LAB_1420da933;
      uVar2 = puVar21[iVar19];
    }
    uVar9 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = (int)lVar6 + -1 + iVar20;
    if (iVar22 < iVar10) {
      iVar10 = iVar22;
    }
  }
LAB_1420da933:
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10;
  uStackX_18 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  TStack_a8._padding_ = CONCAT44(uVar9,iVar19);
  uVar9 = uStackX_18 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iVar10;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uStackX_18 >> 5;
  TStack_a8._28_4_ = iVar10;
  TStack_a8.BaseBitIndex = iVar20;
  uStack_88 = CONCAT44(uStack_bc,
                       *(int *)&(this->ReferencingProperties).Elements.field_0x8 -
                       *(int *)&(this->ReferencingProperties).Elements.field_0x34);
  if ((((int)uStackX_18 < 0) || (iVar22 < (int)uStackX_18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  uVar2 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar22 = 0;
  if (uStackX_18 != uVar2) {
    puVar3 = *(undefined1 **)&(this->ReferencingProperties).Elements.field_0x20;
    puVar16 = &(this->ReferencingProperties).Elements.field_0x10;
    if (puVar3 != (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar23 = -1 << ((byte)uStackX_18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
    while (iVar22 = iVar11, uVar23 == 0) {
      iVar19 = iVar19 + 1;
      uVar9 = uVar9 + 0x20;
      uStackX_18 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar19) goto LAB_1420daa50;
      uVar23 = *(uint *)(puVar16 + (longlong)iVar19 * 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uStackX_18 = (uVar9 - 1) + (int)lVar6;
    if ((int)uVar2 < (int)uStackX_18) {
      uStackX_18 = uVar2;
    }
  }
LAB_1420daa50:
  while( true ) {
    if (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 != (int)uStack_88) {
      auStackX_8[0] = 0;
      `TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_a8.CurrentBitIndex == uStackX_18) &&
       (TStack_a8.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10))
    break;
    this_01 = (FFieldObjectUnion *)
              ((longlong)TStack_a8.CurrentBitIndex * 0x10 + *(longlong *)&this_00->Elements);
    pFVar14 = FObjectPropertyBase::StaticClass();
    bVar8 = FFieldVariant::IsA((FFieldVariant *)this_01,pFVar14);
    if ((bVar8) &&
       (FVar4.Container = (FFieldObjectUnion)this_01->Field, FVar4.Container != (FField *)0x0)) {
      if (*(UObject **)((longlong)FVar4.Container + 0x70) == (UObject *)0x0) {
        bVar8 = pUVar12 == (UObject *)0x0;
      }
      else {
        bVar8 = *(UObject **)((longlong)FVar4.Container + 0x70) == pUVar12;
      }
      if (bVar8) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UClass **)((longlong)FVar4.Container + 0x70) = param_1;
        iVar22 = iVar22 + 1;
      }
      uVar1 = *(ulonglong *)(*(longlong *)((longlong)FVar4.Container + 8) + 0x18);
      if (((uVar1 >> 10 & 1) != 0) || ((uVar1 >> 0x21 & 1) != 0)) {
        if (*(UObject **)((longlong)FVar4.Container + 0x78) == (UObject *)0x0) {
          bVar8 = pUVar12 == (UObject *)0x0;
        }
        else {
          bVar8 = *(UObject **)((longlong)FVar4.Container + 0x78) == pUVar12;
        }
        if (bVar8) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *(UClass **)((longlong)FVar4.Container + 0x78) = param_1;
          iVar22 = iVar22 + 1;
        }
      }
    }
    else {
      pFVar14 = FInterfaceProperty::StaticClass();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)this_01,pFVar14);
      if ((bVar8) && (uVar5 = this_01->Unknown, uVar5 != 0)) {
        if (*(UObject **)(uVar5 + 0x70) == (UObject *)0x0) {
          bVar8 = pUVar12 == (UObject *)0x0;
        }
        else {
          bVar8 = *(UObject **)(uVar5 + 0x70) == pUVar12;
        }
        if (bVar8) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *(UClass **)(uVar5 + 0x70) = param_1;
          iVar22 = iVar22 + 1;
        }
      }
      else {
        FFieldVariant::GetClassName((FFieldVariant *)this_01,&FStack_80);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                           ,0x2c5,L"Unhandled property type: %s");
        if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          iVar11 = (*pcVar7)();
          return iVar11;
        }
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  bVar8 = 1 < (this->ReferencingProperties).HashSize;
  if (!bVar8) {
    TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar3 = &(this->ReferencingProperties).Elements.field_0xc;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
  iVar11 = *(int *)&(this->ReferencingProperties).Elements.field_0x2c;
  *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ReferencingProperties).Elements.field_0x10,0);
  }
  if (bVar8) {
    (this->ReferencingProperties).HashSize = 1;
    TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return iVar22;
}

// ResolvePropertyReferences @ 14210b5b0

int __thiscall
TLinkerImportPlaceholder<UFunction>::ResolvePropertyReferences
          (TLinkerImportPlaceholder<UFunction> *this,UFunction *param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  FFieldClass *pFVar13;
  FString *pFVar14;
  undefined1 *puVar15;
  FFieldVariant *this_01;
  wchar_t *pwVar16;
  uint uVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  undefined1 auStackX_8 [8];
  uint uStackX_18;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString FStack_80;
  FString FStack_70;
  FString FStack_60;
  FString FStack_50;
  
  iVar10 = 0;
  pUVar11 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  if (pUVar11 == (UObject *)0x0) {
    pFVar14 = GetTypeName<UFunction>(&FStack_70);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
  iVar2 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar12->_padding_)) {
    pFVar14 = GetTypeName<UFunction>(&FStack_60);
    pwVar16 = L"";
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UObject>(&FStack_50,pUVar11);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar19);
  }
  iVar20 = 0;
  this_00 = &this->ReferencingProperties;
  iVar2 = *(int *)&(this->ReferencingProperties).Elements.field_0x28;
  iVar21 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar2 != 0) {
    puVar22 = *(uint **)&(this->ReferencingProperties).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->ReferencingProperties).Elements.field_0x10;
    }
    uVar3 = *puVar22;
    while (uVar3 == 0) {
      iVar20 = iVar20 + 1;
      iVar21 = iVar21 + 0x20;
      iVar9 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar20) goto LAB_1420dae32;
      uVar3 = puVar22[iVar20];
    }
    uVar8 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar9 = (int)lVar5 + -1 + iVar21;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_1420dae32:
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10;
  uStackX_18 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  TStack_a8._padding_ = CONCAT44(uVar8,iVar20);
  uVar8 = uStackX_18 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iVar9;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uStackX_18 >> 5;
  TStack_a8._28_4_ = iVar9;
  TStack_a8.BaseBitIndex = iVar21;
  uStack_88 = CONCAT44(uStack_bc,
                       *(int *)&(this->ReferencingProperties).Elements.field_0x8 -
                       *(int *)&(this->ReferencingProperties).Elements.field_0x34);
  if ((((int)uStackX_18 < 0) || (iVar2 < (int)uStackX_18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  uVar3 = *(uint *)&(this->ReferencingProperties).Elements.field_0x28;
  if (uStackX_18 != uVar3) {
    puVar4 = *(undefined1 **)&(this->ReferencingProperties).Elements.field_0x20;
    puVar15 = &(this->ReferencingProperties).Elements.field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar15 = puVar4;
    }
    uVar17 = -1 << ((byte)uStackX_18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar20 * 4);
    while (uVar17 == 0) {
      iVar20 = iVar20 + 1;
      uVar8 = uVar8 + 0x20;
      uStackX_18 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar20) goto LAB_1420daf50;
      uVar17 = *(uint *)(puVar15 + (longlong)iVar20 * 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uStackX_18 = (int)lVar5 + -1 + uVar8;
    if ((int)uVar3 < (int)uStackX_18) {
      uStackX_18 = uVar3;
    }
  }
LAB_1420daf50:
  do {
    if (*(int *)&(this->ReferencingProperties).Elements.field_0x8 -
        *(int *)&(this->ReferencingProperties).Elements.field_0x34 != (int)uStack_88) {
      auStackX_8[0] = 0;
      `TSparseArray<TSparseSetElement<FFieldVariant>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_a8.CurrentBitIndex == uStackX_18) &&
       (TStack_a8.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencingProperties).Elements.field_0x10))
    {
      bVar7 = 1 < (this->ReferencingProperties).HashSize;
      if (!bVar7) {
        TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::UnhashElements
                  (this_00);
      }
      puVar4 = &(this->ReferencingProperties).Elements.field_0xc;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x34 = 0;
      iVar2 = *(int *)&(this->ReferencingProperties).Elements.field_0x2c;
      *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->ReferencingProperties).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ReferencingProperties).Elements.field_0x10,0);
      }
      if (bVar7) {
        (this->ReferencingProperties).HashSize = 1;
        TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
      return iVar10;
    }
    this_01 = (FFieldVariant *)
              (*(longlong *)&this_00->Elements + (longlong)TStack_a8.CurrentBitIndex * 0x10);
    pFVar13 = FDelegateProperty::StaticClass();
    bVar7 = FFieldVariant::IsA(this_01,pFVar13);
    if ((bVar7) && (uVar18 = (this_01->Container).Unknown, uVar18 != 0)) {
LAB_1420dafcd:
      if (*(UObject **)(uVar18 + 0x70) == (UObject *)0x0) {
        bVar7 = pUVar11 == (UObject *)0x0;
      }
      else {
        bVar7 = *(UObject **)(uVar18 + 0x70) == pUVar11;
      }
      if (bVar7) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFunction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UFunction **)(uVar18 + 0x70) = param_1;
        iVar10 = iVar10 + 1;
      }
    }
    else {
      pFVar13 = FMulticastDelegateProperty::StaticClass();
      bVar7 = FFieldVariant::IsA(this_01,pFVar13);
      if ((bVar7) && (uVar18 = (this_01->Container).Unknown, uVar18 != 0)) goto LAB_1420dafcd;
      FFieldVariant::GetClassName(this_01,&FStack_80);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,0x30e,L"Unhandled property type: %s");
      if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// ResolveScriptReferences @ 14210b5c0

int __thiscall
TLinkerImportPlaceholder<UClass>::ResolveScriptReferences
          (TLinkerImportPlaceholder<UClass> *this,UClass *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator> *this_00;
  longlong *plVar3;
  code *pcVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  UClass *local_res10;
  int local_res18;
  UClass *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar18 = 0;
  local_res10 = param_1;
  pUVar11 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  local_res20 = CastChecked<UClass,UObject>(pUVar11);
  puVar2 = &(this->ReferencingScriptExpressions).Elements.field_0x10;
  iVar10 = *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  this_00 = &this->ReferencingScriptExpressions;
  iVar15 = 0;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->ReferencingScriptExpressions).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iVar15) goto LAB_14210b67d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar9 = local_res18 + -1 + iVar16;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14210b67d:
  uVar14 = *(uint *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar15);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
                       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  pUVar6 = local_res20;
  pUVar5 = local_res10;
  uVar8 = *(uint *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  if (uVar14 != uVar8) {
    puVar13 = *(undefined1 **)&(this->ReferencingScriptExpressions).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar15) goto LAB_14210b790;
      uVar14 = *(uint *)(puVar13 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
    }
  }
LAB_14210b790:
  while( true ) {
    if (*(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
        *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<UClass_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar14) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar3 = *(longlong **)
              (*(longlong *)&this_00->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if ((UClass *)*plVar3 == pUVar6) {
      *plVar3 = (longlong)pUVar5;
      iVar18 = iVar18 + 1;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  bVar7 = 1 < (this->ReferencingScriptExpressions).HashSize;
  if (!bVar7) {
    TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->ReferencingScriptExpressions).Elements.field_0xc;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x34 = 0;
  iVar10 = *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x2c;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ReferencingScriptExpressions).Elements.field_0x10,0);
  }
  if (bVar7) {
    (this->ReferencingScriptExpressions).HashSize = 1;
    TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return iVar18;
}

// ResolveScriptReferences @ 14210b890

int __thiscall
TLinkerImportPlaceholder<UFunction>::ResolveScriptReferences
          (TLinkerImportPlaceholder<UFunction> *this,UFunction *param_1)

{
  undefined1 *this_00;
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  UFunction *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  undefined1 *puVar15;
  wchar_t *pwVar16;
  TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator> *this_01;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  UFunction *local_res10;
  int local_res20;
  undefined4 uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  iVar11 = 0;
  local_res10 = param_1;
  pUVar12 = (UObject *)(**(code **)(this->_padding_ + 0x18))();
  if (pUVar12 == (UObject *)0x0) {
    pFVar14 = GetTypeName<UFunction>(&local_80);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar13 = Z_Construct_UClass_UFunction_NoRegister();
  iVar2 = (int)pUVar13->_padding_;
  if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar13->_padding_)) {
    pFVar14 = GetTypeName<UFunction>(&local_70);
    pwVar16 = L"";
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UObject>(local_60,pUVar12);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar17);
  }
  this_01 = &this->ReferencingScriptExpressions;
  iVar2 = *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  iVar18 = 0;
  iVar19 = 0;
  this_00 = &(this->ReferencingScriptExpressions).Elements.field_0x10;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar2 != 0) {
    puVar20 = *(uint **)&(this->ReferencingScriptExpressions).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)this_00;
    }
    uVar22 = *puVar20;
    while (uVar22 == 0) {
      iVar18 = iVar18 + 1;
      iVar19 = iVar19 + 0x20;
      iVar10 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar18) goto LAB_14210b99f;
      uVar22 = puVar20[iVar18];
    }
    uVar9 = -uVar22 & uVar22;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res20 = (int)lVar5;
    iVar10 = local_res20 + -1 + iVar19;
    if (iVar2 < iVar10) {
      iVar10 = iVar2;
    }
  }
LAB_14210b99f:
  uVar22 = *(uint *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  uVar21 = uVar22 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_a8.CurrentBitIndex = iVar10;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar22 >> 5;
  TStack_a8._28_4_ = iVar10;
  TStack_a8.BaseBitIndex = iVar19;
  uStack_88 = CONCAT44(uStack_b4,
                       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
                       *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34);
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)uVar22 < 0) || (iVar2 < (int)uVar22)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return iVar11;
  }
  pUVar7 = local_res10;
  uVar9 = *(uint *)&(this->ReferencingScriptExpressions).Elements.field_0x28;
  if (uVar22 != uVar9) {
    puVar3 = *(undefined1 **)&(this->ReferencingScriptExpressions).Elements.field_0x20;
    puVar15 = this_00;
    if (puVar3 != (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar22 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar18) goto LAB_14210bab0;
      uVar22 = *(uint *)(puVar15 + (longlong)iVar18 * 4);
    }
    uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar22 = (int)lVar5 + -1 + uVar21;
    if ((int)uVar9 < (int)uVar22) {
      uVar22 = uVar9;
    }
  }
LAB_14210bab0:
  while( true ) {
    if (*(int *)&(this->ReferencingScriptExpressions).Elements.field_0x8 -
        *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<UFunction_*_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a8.CurrentBitIndex == uVar22) &&
       (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this_01->Elements + (longlong)TStack_a8.CurrentBitIndex * 0x10);
    if ((UObject *)*plVar4 == pUVar12) {
      *plVar4 = (longlong)pUVar7;
      iVar11 = iVar11 + 1;
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  bVar8 = 1 < (this->ReferencingScriptExpressions).HashSize;
  if (!bVar8) {
    TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator>::UnhashElements
              (this_01);
  }
  puVar3 = &(this->ReferencingScriptExpressions).Elements.field_0xc;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->ReferencingScriptExpressions).Elements.field_0x2c;
  *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ReferencingScriptExpressions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar8) {
    (this->ReferencingScriptExpressions).HashSize = 1;
    TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator>::Rehash(this_01);
  }
  return iVar11;
}

// AddReferencingProperty @ 142130fc0

void __thiscall
TLinkerImportPlaceholder<UClass>::AddReferencingProperty
          (TLinkerImportPlaceholder<UClass> *this,FFieldVariant param_1)

{
  FFieldVariant local_res8 [4];
  
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
  Emplace<FFieldVariant_const_&>(&this->ReferencingProperties,local_res8,(bool *)param_1.Container);
  return;
}

// RemoveReferencingProperty @ 14214a970

void __thiscall
TLinkerImportPlaceholder<UClass>::RemoveReferencingProperty
          (TLinkerImportPlaceholder<UClass> *this,FFieldVariant param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
            (&this->ReferencingProperties,(FFieldVariant *)param_1.Container);
  return;
}

// AddReferencingProperty @ 142166d80

void __thiscall
TLinkerImportPlaceholder<UFunction>::AddReferencingProperty
          (TLinkerImportPlaceholder<UFunction> *this,FFieldVariant param_1)

{
  FFieldVariant local_res8 [4];
  
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
  Emplace<FFieldVariant_const_&>(&this->ReferencingProperties,local_res8,(bool *)param_1.Container);
  return;
}

// RemoveReferencingProperty @ 142189130

void __thiscall
TLinkerImportPlaceholder<UFunction>::RemoveReferencingProperty
          (TLinkerImportPlaceholder<UFunction> *this,FFieldVariant param_1)

{
  TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
            (&this->ReferencingProperties,(FFieldVariant *)param_1.Container);
  return;
}

