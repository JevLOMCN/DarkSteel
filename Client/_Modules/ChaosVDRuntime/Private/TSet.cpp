// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// Reset @ 1436da360

void __thiscall
TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::Reset
          (TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
           *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 1436e1e00

bool __thiscall
TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<TTuple<FString,bool>_> *param_2,int *param_3
                  ,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  ForElementType<FSetElementId> FVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 *_Dst;
  bool bVar14;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar8 != 1) && (iVar2 != iVar8)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar11 = (longlong)iVar2 * 0x20;
      iVar8 = *(int *)(*(longlong *)&this->Elements + 8 + lVar11);
      if (iVar8 == *(int *)&param_2->field_0x8) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar11),
                             *(wchar_t **)param_2);
          bVar14 = iVar8 == 0;
          goto LAB_1436e1e91;
        }
LAB_1436e1ed2:
        bVar14 = true;
        _Dst = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Elements);
        pvVar3 = (void *)*_Dst;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        memmove(_Dst,param_2,0x18);
        iVar8 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar11 = *(longlong *)&this->Elements;
        bVar5 = (byte)iVar8 & 0x1f;
        uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        if (((iVar8 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        if (((*(uint *)(puVar12 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar13) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar11) = iVar8;
        }
        uVar9 = 0xffffffff;
        *(undefined4 *)((longlong)iVar8 * 0x20 + lVar11) = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        *(undefined4 *)((longlong)iVar8 * 0x20 + 4 + lVar11) = uVar9;
        puVar12 = &(this->Elements).field_0x34;
        *(int *)puVar12 = *(int *)puVar12 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar8;
        if (((iVar8 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        *(uint *)(puVar12 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar12 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar13;
        *param_3 = iVar2;
        goto LAB_1436e1eac;
      }
      bVar14 = iVar8 + *(int *)&param_2->field_0x8 == 1;
LAB_1436e1e91:
      if (bVar14) goto LAB_1436e1ed2;
      iVar2 = *(int *)(lVar11 + 0x18 + *(longlong *)&this->Elements);
    }
    bVar14 = false;
  }
LAB_1436e1eac:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 1436e2040

void __thiscall
TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
UnhashElements(TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
               *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1436e213b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1436e213b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1436e2230;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_1436e2230:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

