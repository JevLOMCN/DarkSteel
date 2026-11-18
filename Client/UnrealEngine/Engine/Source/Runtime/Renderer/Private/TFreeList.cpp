// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Pop @ 144d8e880

int __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
          (TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  int *piVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar9;
  uint uVar10;
  
  this->NumElements = this->NumElements + -1;
  iVar7 = (this->FreeList).ArrayNum;
  uVar10 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  FVar4 = (this->FreeList).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
           )this;
  if (FVar4 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )0x0) {
    FVar9 = FVar4;
  }
  iVar7 = (this->FreeList).ArrayNum;
  iVar3 = ((int *)((longlong)FVar9 + -8))[(longlong)iVar7 * 2];
  lVar2 = (longlong)FVar9 + (longlong)iVar7 * 8;
  if (iVar3 == *(int *)(lVar2 + -4)) {
    if (iVar7 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    FVar4 = (this->FreeList).AllocatorInstance.SecondaryData;
    iVar7 = (this->FreeList).ArrayNum;
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )this;
    if (FVar4 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = FVar4;
    }
    uVar8 = iVar7 - 1;
    _Dst = (void *)((longlong)FVar9 + (longlong)(int)uVar8 * 8);
    iVar7 = ~uVar8 + iVar7;
    if (iVar7 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar7 << 3);
    }
    piVar1 = &(this->FreeList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    *)this,(this->FreeList).ArrayNum,&(this->FreeList).ArrayMax);
    return iVar3;
  }
  *(int *)(lVar2 + -8) = iVar3 + 1;
  return iVar3;
}

// Push @ 144d915a0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
          (TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int local_38;
  int iStack_34;
  
  iVar7 = (this->FreeList).ArrayNum;
  this->NumElements = this->NumElements + 1;
  iVar7 = iVar7 + -1;
  uVar14 = 1;
  while (0x20 < iVar7) {
    iVar6 = iVar7 / 2;
    iVar10 = iVar7 % 2;
    uVar15 = iVar6 + uVar14;
    uVar12 = 0;
    if ((int)uVar15 < (this->FreeList).ArrayNum) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )this;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = FVar3;
    }
    iVar7 = iVar6;
    if (param_1 < *(int *)((longlong)FVar9 + (longlong)(int)uVar15 * 8)) {
      uVar14 = iVar6 + iVar10 + uVar14;
    }
  }
  iVar6 = (this->FreeList).ArrayNum;
  iVar7 = uVar14 + 1 + iVar7;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  if ((int)uVar14 < iVar6) {
    lVar13 = (longlong)(int)uVar14;
    do {
      uVar12 = 0;
      if ((int)uVar14 < (this->FreeList).ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      if (*(int *)((longlong)FVar9 + lVar13 * 8) < param_1) break;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar6);
  }
  if ((int)uVar14 < (this->FreeList).ArrayNum) {
    uVar12 = ~uVar14 >> 0x1f;
    if (((int)uVar14 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )this;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = FVar3;
    }
    if (*(int *)((uchar *)((longlong)FVar9 + 4) + (longlong)(int)uVar14 * 8) + 1 == param_1) {
      uVar15 = 0;
      if ((int)uVar14 < (this->FreeList).ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      *(int *)((longlong)(int)uVar14 * 8 + 4 + (longlong)FVar9) = param_1;
      uVar15 = uVar14 - 1;
      uVar8 = 0;
      if ((int)uVar15 < (this->FreeList).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      if (*(int *)((longlong)FVar9 + (longlong)(int)uVar15 * 8) + -1 != param_1) {
        return;
      }
      uVar8 = 0;
      if ((int)uVar14 < (this->FreeList).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      uVar2 = *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar14 * 8);
      uVar8 = 0;
      if ((int)uVar15 < (this->FreeList).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      *(undefined4 *)((longlong)FVar9 + (longlong)(int)uVar15 * 8) = uVar2;
      uVar15 = 0;
      if ((int)uVar14 < (this->FreeList).ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      pvVar11 = (void *)((longlong)FVar9 + (longlong)(int)uVar14 * 8);
      iVar7 = (this->FreeList).ArrayNum + ~uVar14;
      if (iVar7 != 0) {
        memmove(pvVar11,(void *)((longlong)pvVar11 + 8),(longlong)iVar7 << 3);
      }
      iVar7 = (this->FreeList).ArrayNum + -1;
      (this->FreeList).ArrayNum = iVar7;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
                (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                      *)this,iVar7,&(this->FreeList).ArrayMax);
      return;
    }
  }
  uVar12 = uVar14 - 1;
  uVar15 = 0;
  if ((int)uVar12 < (this->FreeList).ArrayNum) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
           )this;
  if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )0x0) {
    FVar9 = FVar3;
  }
  if (*(int *)((longlong)FVar9 + (longlong)(int)uVar12 * 8) + -1 == param_1) {
    uVar14 = 0;
    if ((int)uVar12 < (this->FreeList).ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      this = (TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    *(int *)((longlong)this + (longlong)(int)uVar12 * 8) = param_1;
  }
  else {
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )this;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = FVar3;
    }
    local_38 = param_1;
    iStack_34 = param_1;
    if ((ulonglong)FVar9 <= &local_38) {
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )this;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FVar9 = FVar3;
      }
      if ((&local_38 < (int *)((longlong)FVar9 + (longlong)(this->FreeList).ArrayMax * 8)) &&
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
    }
    iVar7 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
                        (0x408,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                                *)this,piVar1);
    }
    (this->FreeList).ArrayNum = iVar7 + 1;
    FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )this;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = FVar3;
    }
    pvVar11 = (void *)((longlong)FVar9 + (longlong)(int)uVar14 * 8);
    memmove((void *)((longlong)pvVar11 + 8),pvVar11,(longlong)(int)(iVar7 - uVar14) << 3);
    FVar3 = (this->FreeList).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      this = (TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    *(ulonglong *)((longlong)(int)uVar14 * 8 + (longlong)this) = CONCAT44(iStack_34,local_38);
  }
  return;
}

