// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Remove @ 143f73150

int __thiscall
TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
::Remove(TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
         *this,UObject *param_1,IEventHandler *param_2)

{
  longlong lVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  ForElementType<unsigned_int> FVar11;
  UObject *pUVar12;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  *this_00;
  TBaseKeyIterator<0> local_38;
  
  iVar7 = 0;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  pUVar12 = local_38.Key;
  this_00 = local_38.Set;
  if (local_38.Index == 0xffffffff) {
    return 0;
  }
  do {
    iVar5 = local_38.Index;
    if (*(IEventHandler **)(*(longlong *)&this_00->Elements + 8 + (longlong)local_38.Index * 0x18)
        == param_2) {
      if ((local_38.Index < 0) || (*(int *)&(this_00->Elements).field_0x28 <= local_38.Index)) {
LAB_143f73215:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
      }
      else {
        if ((*(int *)&(this_00->Elements).field_0x28 <= local_38.Index) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        FVar2 = *(ForElementType<unsigned_int> *)&(this_00->Elements).field_0x20;
        FVar11 = (ForElementType<unsigned_int>)&(this_00->Elements).field_0x10;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar2;
        }
        uVar8 = iVar5;
        if (iVar5 < 0) {
          uVar8 = iVar5 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar8 >> 5) * 4) >> (iVar5 & 0x1fU) & 1)
            == 0) goto LAB_143f73215;
      }
      lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar5 * 0x18;
      FVar3 = (this_00->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&this_00->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      puVar10 = (uint *)((longlong)FVar9 + (longlong)*(int *)(lVar1 + 0x14) * 4);
      while( true ) {
        uVar8 = *puVar10;
        if ((uVar8 == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (uVar8 == iVar5) break;
        puVar10 = (uint *)(*(longlong *)&this_00->Elements + (longlong)(int)uVar8 * 0x18 + 0x10);
      }
      *puVar10 = *(uint *)(lVar1 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,iVar5,1);
      iVar7 = iVar7 + 1;
      pUVar12 = local_38.Key;
      this_00 = local_38.Set;
    }
    if (local_38.NextIndex == 0xffffffff) {
      return iVar7;
    }
    local_38.Index = local_38.NextIndex;
    do {
      local_38.NextIndex =
           *(uint *)(*(longlong *)&this_00->Elements + 0x10 + (longlong)local_38.Index * 0x18);
      if (*(UObject **)(*(longlong *)&this_00->Elements + (longlong)local_38.Index * 0x18) ==
          pUVar12) break;
      local_38.Index = local_38.NextIndex;
    } while (local_38.NextIndex != 0xffffffff);
    if (local_38.Index == 0xffffffff) {
      return iVar7;
    }
  } while( true );
}

// RemoveSingle @ 14404fa20

int __thiscall
TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::RemoveSingle
          (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *this,
          int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  uVar10 = *(uint *)(puVar8 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)param_1) * 4);
  uVar9 = uVar10;
  if (uVar10 != 0xffffffff) {
    do {
      uVar10 = *(uint *)(*(longlong *)this + 8 + (longlong)(int)uVar9 * 0x10);
      if (*(int *)(*(longlong *)this + (longlong)(int)uVar9 * 0x10) == param_1) break;
      uVar9 = uVar10;
    } while (uVar10 != 0xffffffff);
  }
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)this;
  while (lVar11 = (longlong)(int)uVar9, *(int *)(lVar2 + 4 + lVar11 * 0x10) != param_2) {
    do {
      uVar9 = uVar10;
      if (uVar9 == 0xffffffff) {
        return 0;
      }
      uVar10 = *(uint *)(lVar2 + 8 + (longlong)(int)uVar9 * 0x10);
    } while (*(int *)(lVar2 + (longlong)(int)uVar9 * 0x10) != param_1);
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
    if ((*(int *)&this->field_0x28 <= (int)uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    puVar8 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14404fb85;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
LAB_14404fb85:
  lVar2 = *(longlong *)this;
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  puVar12 = (uint *)(puVar8 + (longlong)*(int *)(lVar2 + 0xc + lVar11 * 0x10) * 4);
  while( true ) {
    uVar10 = *puVar12;
    if ((uVar10 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    if (uVar10 == uVar9) break;
    puVar12 = (uint *)(*(longlong *)this + 8 + (longlong)(int)uVar10 * 0x10);
  }
  *puVar12 = *(uint *)(lVar2 + 8 + lVar11 * 0x10);
  lVar2 = *(longlong *)this;
  bVar4 = (byte)uVar9 & 0x1f;
  uVar10 = 1 << bVar4 | 1U >> 0x20 - bVar4;
  if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  lVar1 = (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  puVar8 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x10;
  }
  if (((*(uint *)(puVar8 + lVar1) & uVar10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (*(int *)&this->field_0x34 != 0) {
    *(uint *)(lVar2 + (longlong)*(int *)&this->field_0x30 * 0x10) = uVar9;
  }
  uVar7 = 0xffffffff;
  *(undefined4 *)(lVar2 + lVar11 * 0x10) = 0xffffffff;
  if (0 < *(int *)&this->field_0x34) {
    uVar7 = *(undefined4 *)&this->field_0x30;
  }
  *(undefined4 *)(lVar2 + 4 + lVar11 * 0x10) = uVar7;
  *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
  *(uint *)&this->field_0x30 = uVar9;
  if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  puVar8 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x10;
  }
  *(uint *)(puVar8 + lVar1) = *(uint *)(puVar8 + lVar1) & ~uVar10;
  return 1;
}

