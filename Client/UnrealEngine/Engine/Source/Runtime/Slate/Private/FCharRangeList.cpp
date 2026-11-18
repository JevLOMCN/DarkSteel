// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// StaticStruct @ 14283c250

UScriptStruct * __cdecl FCharRangeList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharRangeList.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCharRangeList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharRangeList,(UObject *)pUVar1,L"CharRangeList"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FCharRangeList.OuterSingleton;
}

// AreAllCharsIncluded @ 142853570

bool __thiscall FCharRangeList::AreAllCharsIncluded(FCharRangeList *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  
  iVar3 = (param_1->Data).ArrayNum;
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  local_res18 = pFVar6 + (longlong)iVar3 * 2 + -2;
  if (iVar3 == 0) {
    local_res18 = pFVar6 + (longlong)iVar3 * 2;
  }
  while( true ) {
    pFVar1 = local_res18;
    if ((param_1->Data).ArrayNum != iVar3) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar1) break;
    pFVar5 = (this->Ranges).AllocatorInstance.Data;
    iVar4 = (this->Ranges).ArrayNum;
    uVar2 = *(ushort *)pFVar6;
    pFVar1 = pFVar5 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->Ranges).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FCharRange_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar5 == pFVar1) {
        return false;
      }
      if ((*(ushort *)pFVar5 <= uVar2) && (uVar2 <= *(ushort *)(pFVar5 + 2))) break;
      pFVar5 = pFVar5 + 4;
    }
    pFVar6 = pFVar6 + 2;
  }
  return true;
}

// Empty @ 14286eef0

void __thiscall FCharRangeList::Empty(FCharRangeList *this)

{
  int *piVar1;
  
  piVar1 = &(this->Ranges).ArrayMax;
  (this->Ranges).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// FindCharsNotIncluded @ 142871fc0

TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator> * __thiscall
FCharRangeList::FindCharsNotIncluded
          (FCharRangeList *this,
          TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FString *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *this_00;
  ulonglong uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  FString *local_res18;
  uint local_res20;
  FSparseArrayAllocationInfo local_90;
  int local_80;
  uint uStack_7c;
  undefined1 *puStack_78;
  undefined4 local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator> *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res20 = (param_1->Data).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  pFVar21 = (param_1->Data).AllocatorInstance.Data;
  local_res18 = param_1;
  pFVar17 = pFVar21 + uVar14 * 2 + -2;
  if (local_res20 == 0) {
    pFVar17 = pFVar21 + uVar14 * 2;
  }
LAB_142872032:
  if ((local_res18->Data).ArrayNum != (int)uVar14) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar21 == pFVar17) {
    return __return_storage_ptr__;
  }
  pFVar18 = (this->Ranges).AllocatorInstance.Data;
  iVar9 = (this->Ranges).ArrayNum;
  uVar3 = *(ushort *)pFVar21;
  pFVar2 = pFVar18 + (longlong)iVar9 * 4;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FCharRange_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar18 == pFVar2) {
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
      if (iVar9 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar5 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar5 != (undefined1 *)0x0) {
          this_00 = puVar5;
        }
        bVar11 = (byte)iVar9 & 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x1f;
          bVar11 = bVar11 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar11 & 0x1f));
      }
      else {
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar9 = iVar9 + -1;
        lVar15 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar4 = *(int *)(lVar15 + 4 + (longlong)iVar8 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar4;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(lVar15 + (longlong)iVar4 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_90,iVar8);
      if (local_90.Pointer != (ushort *)0x0) {
        *(ushort *)local_90.Pointer = uVar3;
        ((ushort *)((longlong)local_90.Pointer + 4))[0] = 0xffff;
        ((ushort *)((longlong)local_90.Pointer + 4))[1] = 0xffff;
      }
      iVar9 = *(int *)puVar1;
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar3 = *(ushort *)local_90.Pointer;
      if ((iVar9 - iVar8 == 1) || (iVar9 == iVar8)) goto LAB_1428721df;
      FVar6 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar6;
      }
      iVar9 = *(int *)((longlong)FVar12 +
                      ((ulonglong)(__return_storage_ptr__->HashSize - 1) & (ulonglong)uVar3) * 4);
      if (iVar9 == -1) goto LAB_1428721df;
      lVar15 = *(longlong *)&__return_storage_ptr__->Elements;
      goto LAB_142872190;
    }
    if ((*(ushort *)pFVar18 <= uVar3) && (uVar3 <= *(ushort *)(pFVar18 + 2))) break;
    pFVar18 = pFVar18 + 4;
  }
  goto LAB_1428723fb;
  while (iVar9 = *(int *)(lVar15 + 4 + (longlong)iVar9 * 0xc), iVar9 != -1) {
LAB_142872190:
    if ((uint)*(ushort *)(lVar15 + (longlong)iVar9 * 0xc) == (uint)uVar3) {
      if (iVar9 != -1) {
        *(ushort *)(lVar15 + (longlong)iVar9 * 0xc) = uVar3;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)__return_storage_ptr__,local_90.Index,1);
        goto LAB_1428723fb;
      }
      break;
    }
  }
LAB_1428721df:
  uVar16 = 1;
  uVar13 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
           *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  if (3 < uVar13) {
    uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar16 <= __return_storage_ptr__->HashSize)) {
    uVar13 = __return_storage_ptr__->HashSize - 1U & (uint)uVar3;
    *(uint *)((longlong)local_90.Pointer + 8) = uVar13;
    FVar6 = (__return_storage_ptr__->Hash).SecondaryData;
    FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
    if (FVar6 != (ForElementType<FSetElementId>)0x0) {
      FVar12 = FVar6;
    }
    uVar14 = (longlong)__return_storage_ptr__->HashSize - 1U & (ulonglong)uVar13;
    *(undefined4 *)((longlong)local_90.Pointer + 4) = *(undefined4 *)((longlong)FVar12 + uVar14 * 4)
    ;
    *(int *)((longlong)FVar12 + uVar14 * 4) = local_90.Index;
    goto LAB_1428723fb;
  }
  __return_storage_ptr__->HashSize = uVar16;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar16 != 0) {
    uVar13 = uVar16;
    if (uVar16 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14287224b;
      }
    }
    else {
LAB_14287224b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar13,4);
    }
    if (0 < (int)uVar16) {
      uVar14 = 0;
      uVar19 = (ulonglong)uVar16;
      do {
        FVar6 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar6;
        }
        uVar10 = (longlong)(int)uVar16 - 1U & uVar14;
        uVar14 = uVar14 + 1;
        *(undefined4 *)((longlong)FVar12 + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    puStack_78 = &(__return_storage_ptr__->Elements).field_0x10;
    uStack_7c = 1;
    local_80 = 0;
    iStack_6c = 0;
    iStack_68 = 0;
    if (iVar9 != 0) {
      puVar7 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      puVar20 = (uint *)puStack_78;
      if (puVar7 != (uint *)0x0) {
        puVar20 = puVar7;
      }
      uVar13 = *puVar20;
      iStack_68 = 0;
      local_80 = 0;
      while (uVar13 == 0) {
        iStack_68 = iStack_68 + 0x20;
        lVar15 = (longlong)local_80;
        local_80 = local_80 + 1;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_80) goto LAB_142872339;
        uVar13 = puVar20[lVar15 + 1];
      }
      uStack_7c = -uVar13 & uVar13;
      uVar14 = (ulonglong)uStack_7c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iStack_6c = (int)lVar15 + -1 + iStack_68;
      if (iVar9 < iStack_6c) {
LAB_142872339:
        iStack_6c = iVar9;
      }
    }
    local_70 = 0xffffffff;
    local_58._padding_ = CONCAT44(uStack_7c,local_80);
    local_58.CurrentBitIndex = iStack_6c;
    local_58.UnvisitedBitMask = 0xffffffff;
    local_58._28_4_ = uStack_64;
    local_58.BaseBitIndex = iStack_68;
    local_60 = __return_storage_ptr__;
    local_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_78;
    iVar8 = iStack_6c;
    if (iStack_6c < iVar9) {
      do {
        lVar15 = *(longlong *)&local_60->Elements + (longlong)iVar8 * 0xc;
        uVar13 = __return_storage_ptr__->HashSize - 1U &
                 (uint)*(ushort *)(*(longlong *)&local_60->Elements + (longlong)iVar8 * 0xc);
        *(uint *)(lVar15 + 8) = uVar13;
        FVar6 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar6;
        }
        uVar14 = (longlong)__return_storage_ptr__->HashSize - 1U & (ulonglong)uVar13;
        *(undefined4 *)(lVar15 + 4) = *(undefined4 *)((longlong)FVar12 + uVar14 * 4);
        *(int *)((longlong)FVar12 + uVar14 * 4) = iVar8;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
        iVar8 = local_58.CurrentBitIndex;
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
LAB_1428723fb:
  pFVar21 = pFVar21 + 2;
  uVar14 = (ulonglong)local_res20;
  goto LAB_142872032;
}

// InitializeFromString @ 14287feb0

bool __thiscall FCharRangeList::InitializeFromString(FCharRangeList *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FCharRange *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  FCharRange local_28 [4];
  
  iVar7 = 0;
  piVar1 = &(this->Ranges).ArrayMax;
  (this->Ranges).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  iVar2 = (param_1->Data).ArrayNum;
  local_28[0].First = 0;
  local_28[0].Last = 0;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    do {
      bVar5 = FCharRange::InitializeFromString(local_28,param_1,iVar7,local_res8);
      if (!bVar5) {
        return false;
      }
      pFVar3 = (FCharRange *)(this->Ranges).AllocatorInstance.Data;
      if (((pFVar3 <= local_28) && (local_28 < pFVar3 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (this->Ranges).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)this,piVar1);
      }
      (this->Ranges).ArrayNum = iVar7 + 1;
      *(FCharRange *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
      iVar7 = local_res8[0];
    } while (local_res8[0] < iVar8);
  }
  return true;
}

// IsCharIncluded @ 142881ba0

bool __thiscall FCharRangeList::IsCharIncluded(FCharRangeList *this,wchar_t param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCharRange_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((ushort)*(wchar_t *)pFVar3 <= (ushort)param_1) &&
       ((ushort)param_1 <= (ushort)*(wchar_t *)(pFVar3 + 2))) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// IsEmpty @ 142881c60

bool __thiscall FCharRangeList::IsEmpty(FCharRangeList *this)

{
  return (this->Ranges).ArrayNum == 0;
}

// ToString @ 14289d970

FString * __thiscall FCharRangeList::ToString(FCharRangeList *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = (this->Ranges).AllocatorInstance.Data;
  iVar4 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar4 * 4;
  do {
    if ((this->Ranges).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FCharRange_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) {
      return __return_storage_ptr__;
    }
    wVar2 = *(wchar_t *)pFVar6;
    wVar3 = *(wchar_t *)(pFVar6 + 2);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    for (FVar5.Data = CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data;
        FVar5.Data !=
        CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data +
        (longlong)CharRangeConstants::EscapedCharacters.Data.ArrayNum * 2;
        FVar5.Data = FVar5.Data + 2) {
      if (*(wchar_t *)FVar5.Data == wVar2) {
        if ((int)((longlong)FVar5.Data -
                  (longlong)CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data >> 1)
            != -1) {
          ::FString::AppendChar(&local_38,L'\\');
        }
        break;
      }
    }
    ::FString::AppendChar(&local_38,wVar2);
    if ((ushort)*(wchar_t *)pFVar6 < (ushort)*(wchar_t *)(pFVar6 + 2)) {
      ::FString::AppendChar(&local_38,L'-');
      for (FVar5 = CharRangeConstants::EscapedCharacters.Data.AllocatorInstance;
          FVar5.Data !=
          CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data +
          (longlong)CharRangeConstants::EscapedCharacters.Data.ArrayNum * 2;
          FVar5.Data = FVar5.Data + 2) {
        if (*(wchar_t *)FVar5.Data == wVar3) {
          if ((int)((longlong)FVar5.Data -
                    (longlong)CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data >> 1
                   ) != -1) {
            ::FString::AppendChar(&local_38,L'\\');
          }
          break;
        }
      }
      ::FString::AppendChar(&local_38,wVar3);
    }
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 4;
  } while( true );
}

