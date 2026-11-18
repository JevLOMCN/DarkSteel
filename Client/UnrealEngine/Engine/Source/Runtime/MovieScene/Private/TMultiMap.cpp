// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FindPair @ 1460c5da0

FComponentTypeID * __thiscall
TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
::FindPair(TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
           *this,FComponentTypeID *param_1,FComponentTypeID *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (*(int *)&this->field_0x48 != 0) {
    uVar1 = param_1->Value;
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)*(int *)&this->field_0x48 - 1U & (ulonglong)uVar1) * 4);
    iVar4 = iVar3;
    if (iVar3 != -1) {
      do {
        iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
        if (*(ushort *)(*(longlong *)this + (longlong)iVar4 * 0xc) == uVar1) break;
        iVar4 = iVar3;
      } while (iVar3 != -1);
    }
    if (iVar4 != -1) {
      lVar2 = *(longlong *)this;
      do {
        if (*(ushort *)(lVar2 + 2 + (longlong)iVar4 * 0xc) == param_2->Value) {
          return (FComponentTypeID *)(lVar2 + (longlong)iVar4 * 0xc + 2);
        }
        do {
          iVar4 = iVar3;
          if (iVar4 == -1) {
            return (FComponentTypeID *)0x0;
          }
          iVar3 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0xc);
        } while (*(ushort *)(lVar2 + (longlong)iVar4 * 0xc) != uVar1);
      } while( true );
    }
  }
  return (FComponentTypeID *)0x0;
}

// Remove @ 14614e010

int __thiscall
TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
::Remove(TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
         *this,FMovieSceneEntityID *param_1,FMovieSceneEntityID *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = 0;
  if (*(int *)&this->field_0x48 == 0) {
    iVar3 = 0;
  }
  else {
    puVar4 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((longlong)*(int *)&this->field_0x48 - 1U & (ulonglong)param_1->Value)
                              * 4);
    iVar1 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar1 * 0xc);
        if (*(ushort *)(*(longlong *)this + (longlong)iVar1 * 0xc) == param_1->Value) break;
        iVar1 = iVar2;
      } while (iVar2 != -1);
    }
    if (iVar1 != -1) {
      while( true ) {
        if (*(ushort *)(*(longlong *)this + 2 + (longlong)iVar1 * 0xc) == param_2->Value) {
          TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                           *)this,iVar1);
          iVar3 = iVar3 + 1;
        }
        if (iVar2 == -1) break;
        iVar1 = iVar2;
        while (iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar1 * 0xc),
              *(ushort *)(*(longlong *)this + (longlong)iVar1 * 0xc) != param_1->Value) {
          iVar1 = iVar2;
          if (iVar2 == -1) {
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}

// Remove @ 1461c8800

int __thiscall
TMultiMap<TObjectPtr<UObject>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>_>
::Remove(TMultiMap<TObjectPtr<UObject>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>_>
         *this,TObjectPtr<UObject> *param_1,int param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  ForElementType<unsigned_int> FVar9;
  TObjectPtr<UObject_const_>_u_0 TVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  *this_00;
  UObject *local_res10;
  TBaseKeyIterator<0> local_48;
  
  iVar7 = 0;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
              *)this,(TObjectPtr<UObject_const_>)&local_res10);
  TVar10 = local_48.Key.field0_0x0;
  this_00 = local_48.Set;
  uVar13 = local_48.Index;
  uVar11 = local_48.NextIndex;
  if (local_48.Index == 0xffffffff) {
    return 0;
  }
  do {
    if (*(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)uVar13 * 0x18) == param_2) {
      if (((int)uVar13 < 0) || (*(int *)&(this_00->Elements).field_0x28 <= (int)uVar13)) {
LAB_1461c8915:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      else {
        if ((*(int *)&(this_00->Elements).field_0x28 <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        FVar3 = *(ForElementType<unsigned_int> *)&(this_00->Elements).field_0x20;
        FVar9 = (ForElementType<unsigned_int>)&(this_00->Elements).field_0x10;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar3;
        }
        uVar11 = uVar13;
        if ((int)uVar13 < 0) {
          uVar11 = uVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar9 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
            == 0) goto LAB_1461c8915;
      }
      lVar1 = *(longlong *)&this_00->Elements + (longlong)(int)uVar13 * 0x18;
      FVar4 = (this_00->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&this_00->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar4;
      }
      puVar12 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar1 + 0x14) * 4);
      while( true ) {
        uVar11 = *puVar12;
        if ((uVar11 == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        if (uVar11 == uVar13) break;
        puVar12 = (uint *)(*(longlong *)&this_00->Elements + (longlong)(int)uVar11 * 0x18 + 0x10);
      }
      *puVar12 = *(uint *)(lVar1 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar13,1);
      iVar7 = iVar7 + 1;
      uVar11 = local_48.NextIndex;
      this_00 = local_48.Set;
      TVar10 = local_48.Key.field0_0x0;
    }
    do {
      uVar13 = uVar11;
      if (uVar13 == 0xffffffff) {
        return iVar7;
      }
      uVar11 = *(uint *)((longlong)(int)uVar13 * 0x18 + 0x10 + *(longlong *)&this_00->Elements);
      local_48.Index = uVar13;
      local_48.NextIndex = uVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar10.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(TVar10.DebugPtr);
      }
      pUVar2 = *(UObject **)((longlong)(int)uVar13 * 0x18 + *(longlong *)&this_00->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    } while (pUVar2 != TVar10.DebugPtr);
    if (uVar13 == 0xffffffff) {
      return iVar7;
    }
  } while( true );
}

