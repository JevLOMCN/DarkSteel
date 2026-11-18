// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// MultiFind<TSizedDefaultAllocator<32>_> @ 1465edda0

void __thiscall
TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
           *this,ushort param_1,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  undefined2 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    iVar7 = *(int *)(puVar10 + ((longlong)*(int *)&this->field_0x48 - 1U & (ulonglong)param_1) * 4);
    iVar6 = iVar7;
    if (iVar7 != -1) {
      do {
        iVar7 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0xc);
        if (*(ushort *)(*(longlong *)this + (longlong)iVar6 * 0xc) == param_1) break;
        iVar6 = iVar7;
      } while (iVar7 != -1);
    }
    if (iVar6 != -1) {
      piVar2 = &param_2->ArrayMax;
      while( true ) {
        pFVar1 = (FScriptContainerElement *)(*(longlong *)this + 2 + (longlong)iVar6 * 0xc);
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= pFVar1) && (pFVar1 < pFVar9 + (longlong)*piVar2 * 2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&param_2->AllocatorInstance,piVar2);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined2 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 2) =
             *(undefined2 *)pFVar1;
        if (iVar7 == -1) break;
        iVar6 = iVar7;
        while (iVar7 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0xc),
              *(ushort *)(*(longlong *)this + (longlong)iVar6 * 0xc) != param_1) {
          iVar6 = iVar7;
          if (iVar7 == -1) goto LAB_1465edf45;
        }
      }
    }
  }
LAB_1465edf45:
  if (param_3) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    if (0 < iVar7) {
      lVar8 = 0;
      pFVar9 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 2;
      do {
        uVar3 = *(undefined2 *)(pFVar1 + lVar8 * 2);
        *(undefined2 *)(pFVar1 + lVar8 * 2) = *(undefined2 *)pFVar9;
        lVar8 = lVar8 + 1;
        *(undefined2 *)pFVar9 = uVar3;
        pFVar9 = pFVar9 + -2;
      } while (lVar8 < iVar7);
    }
  }
  return;
}

// Remove @ 1466d3780

int __thiscall
TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
::Remove(TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
         *this,ushort param_1,FMovieSceneEntityID *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int local_res8;
  
  iVar6 = 0;
  local_res8 = 0;
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar12 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & (ulonglong)param_1) * 4);
  uVar10 = uVar12;
  if (uVar12 != 0xffffffff) {
    do {
      uVar12 = *(uint *)(*(longlong *)this + 4 + (longlong)(int)uVar10 * 0xc);
      if (*(ushort *)(*(longlong *)this + (longlong)(int)uVar10 * 0xc) == param_1) break;
      uVar10 = uVar12;
    } while (uVar12 != 0xffffffff);
  }
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  do {
    lVar1 = (longlong)(int)uVar10 * 0xc;
    if (*(ushort *)(*(longlong *)this + 2 + lVar1) == param_2->Value) {
      if (((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) {
LAB_1466d38a2:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      else {
        if ((*(int *)&this->field_0x28 <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        uVar11 = uVar10;
        if ((int)uVar10 < 0) {
          uVar11 = uVar10 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
        goto LAB_1466d38a2;
      }
      lVar2 = *(longlong *)this;
      puVar9 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x40;
      }
      puVar13 = (uint *)(puVar9 + (longlong)*(int *)(lVar2 + 8 + lVar1) * 4);
      while( true ) {
        uVar11 = *puVar13;
        if ((uVar11 == 0xffffffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar11 == uVar10) break;
        puVar13 = (uint *)(*(longlong *)this + ((longlong)(int)uVar11 * 3 + 1) * 4);
      }
      *puVar13 = *(uint *)(lVar2 + 4 + lVar1);
      lVar2 = *(longlong *)this;
      bVar4 = (byte)uVar10 & 0x1f;
      uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < 0) {
        uVar7 = uVar10 + 0x1f;
      }
      if (((*(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & uVar11) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(uint *)(lVar2 + (longlong)*(int *)&this->field_0x30 * 0xc) = uVar10;
      }
      *(undefined4 *)(lVar2 + lVar1) = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)&this->field_0x30;
      }
      *(undefined4 *)(lVar2 + 4 + lVar1) = uVar8;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(uint *)&this->field_0x30 = uVar10;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & ~uVar11;
      iVar6 = local_res8 + 1;
      local_res8 = iVar6;
    }
    if (uVar12 == 0xffffffff) {
      return iVar6;
    }
    uVar10 = uVar12;
    while (uVar12 = *(uint *)(*(longlong *)this + 4 + (longlong)(int)uVar10 * 0xc),
          *(ushort *)(*(longlong *)this + (longlong)(int)uVar10 * 0xc) != param_1) {
      uVar10 = uVar12;
      if (uVar12 == 0xffffffff) {
        return iVar6;
      }
    }
  } while( true );
}

// Remove @ 14685dac0

int __thiscall
TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
::Remove(TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
         *this,FContributorKey *param_1,FMovieSceneEntityID *param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int local_res8;
  
  iVar5 = 0;
  local_res8 = 0;
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  uVar10 = *(uint *)(puVar8 + ((longlong)*(int *)&this->field_0x48 - 1U &
                              (longlong)param_1->PropertyIndex) * 4);
  uVar9 = uVar10;
  if (uVar10 != 0xffffffff) {
    do {
      uVar10 = *(uint *)(*(longlong *)this + 8 + (longlong)(int)uVar9 * 0x10);
      if (*(int *)(*(longlong *)this + (longlong)(int)uVar9 * 0x10) == param_1->PropertyIndex)
      break;
      uVar9 = uVar10;
    } while (uVar10 != 0xffffffff);
  }
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  do {
    lVar11 = (longlong)(int)uVar9;
    if (*(ushort *)(*(longlong *)this + 4 + lVar11 * 0x10) == param_2->Value) {
      if (((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) {
LAB_14685dbd8:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      else {
        if ((*(int *)&this->field_0x28 <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        uVar12 = uVar9;
        if ((int)uVar9 < 0) {
          uVar12 = uVar9 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
        goto LAB_14685dbd8;
      }
      lVar1 = *(longlong *)this;
      puVar8 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x40;
      }
      puVar13 = (uint *)(puVar8 + (longlong)*(int *)(lVar1 + 0xc + lVar11 * 0x10) * 4);
      while( true ) {
        uVar12 = *puVar13;
        if ((uVar12 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (uVar12 == uVar9) break;
        puVar13 = (uint *)(*(longlong *)this + 8 + (longlong)(int)uVar12 * 0x10);
      }
      *puVar13 = *(uint *)(lVar1 + 8 + lVar11 * 0x10);
      lVar1 = *(longlong *)this;
      bVar3 = (byte)uVar9 & 0x1f;
      uVar12 = 1 << bVar3 | 1U >> 0x20 - bVar3;
      if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      uVar6 = uVar9;
      if ((int)uVar9 < 0) {
        uVar6 = uVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)((int)uVar6 >> 5) * 4) & uVar12) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(uint *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x10) = uVar9;
      }
      *(undefined4 *)(lVar1 + lVar11 * 0x10) = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)&this->field_0x30;
      }
      *(undefined4 *)(lVar1 + 4 + lVar11 * 0x10) = uVar7;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(uint *)&this->field_0x30 = uVar9;
      if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      *(uint *)(puVar8 + (longlong)((int)uVar6 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)((int)uVar6 >> 5) * 4) & ~uVar12;
      iVar5 = local_res8 + 1;
      local_res8 = iVar5;
    }
    if (uVar10 == 0xffffffff) {
      return iVar5;
    }
    uVar9 = uVar10;
    while (uVar10 = *(uint *)(*(longlong *)this + 8 + (longlong)(int)uVar9 * 0x10),
          *(int *)(*(longlong *)this + (longlong)(int)uVar9 * 0x10) != param_1->PropertyIndex) {
      uVar9 = uVar10;
      if (uVar10 == 0xffffffff) {
        return iVar5;
      }
    }
  } while( true );
}

