// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 31

// FCompositeBuffer<FSharedBuffer_const_&,0> @ 141472890

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ForElementType<FSharedBuffer> FVar3;
  FBufferOwner *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FCompositeBuffer *pFVar8;
  ForElementType<FSharedBuffer> FVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 1;
  if (((this <= param_1) && (param_1 < &(this->Segments).AllocatorInstance.SecondaryData)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FCompositeBuffer *)(*pcVar5)();
    return pFVar8;
  }
  iVar7 = (this->Segments).ArrayNum;
  if (iVar7 == (this->Segments).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,&(this->Segments).ArrayMax);
  }
  (this->Segments).ArrayNum = iVar7 + 1;
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FSharedBuffer>)this;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    FVar9 = FVar3;
  }
  pFVar4 = (param_1->Owner).Owner;
  if (pFVar4 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar4->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar4->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar4->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  *(FBufferOwner **)((longlong)FVar9 + (longlong)iVar7 * 8) = pFVar4;
  iVar7 = (this->Segments).ArrayNum;
  if (iVar7 != 0) {
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar3;
    }
    iVar14 = 0;
    bVar6 = *(longlong *)FVar9 != 0;
    lVar10 = 0;
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar10 = lVar10 + 1;
        iVar13 = iVar13 + 1;
        if (iVar7 <= lVar10) break;
      } while (bVar6 == (*(longlong *)((longlong)FVar9 + lVar10 * 8) != 0));
      iVar11 = iVar13 - iVar12;
      if (bVar6 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar9 + (longlong)iVar12 * 8),iVar11);
      }
      else {
        if (iVar14 != iVar12) {
          memmove((longlong *)((longlong)FVar9 + (longlong)iVar14 * 8),
                  (longlong *)((longlong)FVar9 + (longlong)iVar12 * 8),(longlong)iVar11 << 3);
        }
        iVar14 = iVar14 + iVar11;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar12 = iVar13;
    } while (lVar10 < iVar7);
    (this->Segments).ArrayNum = iVar14;
  }
  return this;
}

// FCompositeBuffer<FCompositeBuffer,0> @ 141472a70

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
          (FCompositeBuffer *this,FCompositeBuffer *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSharedBuffer> FVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForElementType<FSharedBuffer> FVar10;
  bool bVar11;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  *piVar1 = 1;
  (this->Segments).ArrayNum = 0;
  uVar2 = (param_1->Segments).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (1 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,uVar2,(ForElementType<FSharedBuffer> *)this,0,piVar1);
  }
  AppendBuffers(this,param_1);
  iVar3 = (this->Segments).ArrayNum;
  if (iVar3 != 0) {
    FVar4 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FSharedBuffer>)this;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      FVar10 = FVar4;
    }
    iVar9 = 0;
    bVar11 = *(longlong *)FVar10 != 0;
    lVar5 = 0;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar8 + 1;
        if (iVar3 <= lVar5) break;
      } while (bVar11 == (*(longlong *)((longlong)FVar10 + lVar5 * 8) != 0));
      iVar6 = iVar8 - iVar7;
      if (bVar11 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar10 + (longlong)iVar7 * 8),iVar6);
      }
      else {
        if (iVar9 != iVar7) {
          memmove((longlong *)((longlong)FVar10 + (longlong)iVar9 * 8),
                  (longlong *)((longlong)FVar10 + (longlong)iVar7 * 8),(longlong)iVar6 << 3);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar7 = iVar8;
    } while (lVar5 < iVar3);
    (this->Segments).ArrayNum = iVar9;
  }
  return this;
}

// FCompositeBuffer<FSharedBuffer,0> @ 141472bd0

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>(FCompositeBuffer *this,FSharedBuffer *param_1)

{
  ForElementType<FSharedBuffer> FVar1;
  FBufferOwner *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCompositeBuffer *pFVar6;
  ForElementType<FSharedBuffer> FVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 1;
  if (((this <= param_1) && (param_1 < &(this->Segments).AllocatorInstance.SecondaryData)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FCompositeBuffer *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->Segments).ArrayNum;
  if (iVar5 == (this->Segments).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,&(this->Segments).ArrayMax);
  }
  (this->Segments).ArrayNum = iVar5 + 1;
  FVar1 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar1 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar1;
  }
  pFVar2 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar7 + (longlong)iVar5 * 8) = pFVar2;
  iVar5 = (this->Segments).ArrayNum;
  if (iVar5 != 0) {
    FVar1 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar1 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar1;
    }
    iVar12 = 0;
    bVar4 = *(longlong *)FVar7 != 0;
    lVar8 = 0;
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar11 + 1;
        if (iVar5 <= lVar8) break;
      } while (bVar4 == (*(longlong *)((longlong)FVar7 + lVar8 * 8) != 0));
      iVar9 = iVar11 - iVar10;
      if (bVar4 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar10 * 8),iVar9);
      }
      else {
        if (iVar12 != iVar10) {
          memmove((longlong *)((longlong)FVar7 + (longlong)iVar12 * 8),
                  (longlong *)((longlong)FVar7 + (longlong)iVar10 * 8),(longlong)iVar9 << 3);
        }
        iVar12 = iVar12 + iVar9;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < iVar5);
    (this->Segments).ArrayNum = iVar12;
  }
  return this;
}

// FCompositeBuffer<FSharedBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0> @ 141472d80

FCompositeBuffer * __thiscall
FCompositeBuffer::
FCompositeBuffer<FSharedBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1,
          TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  ForElementType<FSharedBuffer> FVar3;
  FBufferOwner *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForElementType<FSharedBuffer> FVar9;
  FCompositeBuffer *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  piVar1 = &(this->Segments).ArrayNum;
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar2 = &(this->Segments).ArrayMax;
  *piVar1 = 0;
  iVar7 = 1;
  *piVar2 = 1;
  uVar13 = param_2->ArrayNum + 1;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (1 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,uVar13,(ForElementType<FSharedBuffer> *)this,0,piVar2);
    iVar7 = *piVar2;
  }
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FSharedBuffer>)this;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    FVar9 = FVar3;
  }
  if ((ulonglong)FVar9 <= param_1) {
    FVar9 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar3;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar9 + (longlong)iVar7 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FCompositeBuffer *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar7 = *piVar1;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar2);
  }
  *piVar1 = iVar7 + 1;
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FSharedBuffer>)this;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    FVar9 = FVar3;
  }
  pFVar4 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar9 + (longlong)iVar7 * 8) = pFVar4;
  if (((TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *)this == param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FCompositeBuffer *)(*pcVar5)();
    return pFVar10;
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 != 0) {
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (8,8,iVar7,(ForElementType<FSharedBuffer> *)this,piVar1,piVar2);
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar3;
    }
    memmove((void *)((longlong)FVar9 + (longlong)iVar8 * 8),(param_2->AllocatorInstance).Data,
            (longlong)iVar7 << 3);
    param_2->ArrayNum = 0;
  }
  iVar7 = *piVar1;
  if (iVar7 != 0) {
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar3;
    }
    iVar15 = 0;
    bVar6 = *(longlong *)FVar9 != 0;
    lVar11 = 0;
    iVar8 = 0;
    do {
      iVar12 = iVar8;
      do {
        lVar11 = lVar11 + 1;
        iVar12 = iVar12 + 1;
        if (iVar7 <= lVar11) break;
      } while (bVar6 == (*(longlong *)((longlong)FVar9 + lVar11 * 8) != 0));
      iVar14 = iVar12 - iVar8;
      if (bVar6 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar9 + (longlong)iVar8 * 8),iVar14);
      }
      else {
        if (iVar15 != iVar8) {
          memmove((longlong *)((longlong)FVar9 + (longlong)iVar15 * 8),
                  (longlong *)((longlong)FVar9 + (longlong)iVar8 * 8),(longlong)iVar14 << 3);
        }
        iVar15 = iVar15 + iVar14;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar12;
    } while (lVar11 < iVar7);
    (this->Segments).ArrayNum = iVar15;
  }
  return this;
}

// FCompositeBuffer<FSharedBuffer,FCompositeBuffer,0> @ 141472ff0

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FCompositeBuffer,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1,FCompositeBuffer *param_2)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSharedBuffer> FVar7;
  FCompositeBuffer *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  iVar6 = 1;
  *piVar1 = 1;
  uVar13 = (param_2->Segments).ArrayNum + 1;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (1 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,uVar13,(ForElementType<FSharedBuffer> *)this,0,piVar1);
    iVar6 = *piVar1;
  }
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar7 + (longlong)iVar6 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCompositeBuffer *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar6 + 1;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  pFVar3 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar7 + (longlong)iVar6 * 8) = pFVar3;
  AppendBuffers(this,param_2);
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 != 0) {
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    iVar14 = 0;
    bVar5 = *(longlong *)FVar7 != 0;
    lVar9 = 0;
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar12 + 1;
        if (iVar6 <= lVar9) break;
      } while (bVar5 == (*(longlong *)((longlong)FVar7 + lVar9 * 8) != 0));
      iVar10 = iVar12 - iVar11;
      if (bVar5 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar11 * 8),iVar10);
      }
      else {
        if (iVar14 != iVar11) {
          memmove((longlong *)((longlong)FVar7 + (longlong)iVar14 * 8),
                  (longlong *)((longlong)FVar7 + (longlong)iVar11 * 8),(longlong)iVar10 << 3);
        }
        iVar14 = iVar14 + iVar10;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar11 = iVar12;
    } while (lVar9 < iVar6);
    (this->Segments).ArrayNum = iVar14;
  }
  return this;
}

// FCompositeBuffer @ 14147d0c0

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer(FCompositeBuffer *this,FCompositeBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  ForElementType<FSharedBuffer> FVar4;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  FVar3 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Segments).ArrayNum;
  (this->Segments).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar3;
  }
  piVar1 = &(this->Segments).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)this,iVar2,piVar1);
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FSharedBuffer>)this;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar4,(FSharedBuffer *)param_1,iVar2);
  return this;
}

// operator= @ 1414820e0

FCompositeBuffer * __thiscall
FCompositeBuffer::operator=(FCompositeBuffer *this,FCompositeBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  ForElementType<FSharedBuffer> FVar4;
  
  if (this != param_1) {
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar4 = FVar3;
    }
    DestructItems<FSharedBuffer,int>((FSharedBuffer *)FVar4,(this->Segments).ArrayNum);
    FVar3 = (param_1->Segments).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Segments).ArrayMax;
    iVar2 = (param_1->Segments).ArrayNum;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      param_1 = (FCompositeBuffer *)FVar3;
    }
    (this->Segments).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar2,*piVar1,(ForElementType<FSharedBuffer> *)this,iVar2,piVar1);
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<FSharedBuffer>)this;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar4 = FVar3;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar4,(FSharedBuffer *)param_1,iVar2);
  }
  return this;
}

// AppendBuffers @ 141486cc0

void __thiscall FCompositeBuffer::AppendBuffers(FCompositeBuffer *this,FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSharedBuffer> _Src;
  
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (param_1->Segments).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (8,8,iVar1,(ForElementType<FSharedBuffer> *)this,&(this->Segments).ArrayNum,
                       &(this->Segments).ArrayMax);
    FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
    _Src = (ForElementType<FSharedBuffer>)param_1;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      _Src = FVar2;
    }
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      this = (FCompositeBuffer *)FVar2;
    }
    memmove((void *)((longlong)this + (longlong)iVar5 * 8),(void *)_Src,(longlong)iVar1 << 3);
    (param_1->Segments).ArrayNum = 0;
  }
  return;
}

// ~FCompositeBuffer @ 141816aa0

void __thiscall FCompositeBuffer::~FCompositeBuffer(FCompositeBuffer *this)

{
  ForElementType<FSharedBuffer> FVar1;
  ForElementType<FSharedBuffer> FVar2;
  
  FVar1 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar2 = (ForElementType<FSharedBuffer>)this;
  if (FVar1 != (ForElementType<FSharedBuffer>)0x0) {
    FVar2 = FVar1;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)FVar2,(this->Segments).ArrayNum);
  FVar1 = (this->Segments).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FSharedBuffer>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// operator() @ 141817340

/* WARNING: Removing unreachable block (ram,0x00014181741b) */
/* WARNING: Removing unreachable block (ram,0x000141817432) */
/* WARNING: Removing unreachable block (ram,0x000141817466) */

void __thiscall
`FCompositeBuffer::Mid'::__l2::<lambda_1>::operator()
          (void *this,TMemoryView<void_const_> *param_1,FSharedBuffer *param_2)

{
  ForElementType<FSharedBuffer> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSharedBuffer> FVar5;
  TMemoryView<void_const_> local_28;
  FSharedBuffer local_18;
  ulong64 uStack_10;
  
  local_18.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1->Data;
  uStack_10 = param_1->Size;
  FVar1 = *(ForElementType<FSharedBuffer> *)this;
  MakeSharedBufferViewWithOuter<FSharedBuffer_const_&,0>(&local_28,&local_18);
  FVar5 = *(ForElementType<FSharedBuffer> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FSharedBuffer> *)((longlong)FVar1 + 8) == (ForElementType<FSharedBuffer>)0x0)
  {
    FVar5 = FVar1;
  }
  if ((((ulonglong)FVar5 <= &local_28) &&
      (&local_28 <
       (TMemoryView<void_const_> *)
       ((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x14) * 8))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x10);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)FVar1,(int *)((longlong)FVar1 + 0x14))
    ;
  }
  *(int *)((longlong)FVar1 + 0x10) = iVar4 + 1;
  FVar5 = *(ForElementType<FSharedBuffer> *)((longlong)FVar1 + 8);
  if (*(ForElementType<FSharedBuffer> *)((longlong)FVar1 + 8) == (ForElementType<FSharedBuffer>)0x0)
  {
    FVar5 = FVar1;
  }
  *(void **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_28.Data;
  return;
}

// operator() @ 141817480

void __thiscall
`FCompositeBuffer::ViewOrCopyRange'::__l2::<lambda_1>::operator()
          (void *this,TMemoryView<void_const_> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  ulong64 uVar5;
  void *_Src;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  ulonglong local_res10;
  
  if (*(ulong64 *)this == param_1->Size) {
    puVar1 = *(undefined8 **)((longlong)this + 8);
    uVar5 = param_1->Size;
    *puVar1 = param_1->Data;
    puVar1[1] = uVar5;
    return;
  }
  if (*(longlong *)((longlong)this + 0x28) == 0) {
    uVar8 = 0;
    plVar2 = (longlong *)**(longlong **)((longlong)this + 0x10);
    uVar7 = uVar8;
    if (plVar2 != (longlong *)0x0) {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      uVar7 = plVar2[2];
    }
    if (uVar7 < *(ulonglong *)this) {
      local_res10 = *(ulonglong *)this;
      (*(code *)**(undefined8 **)((longlong)this + 0x18))
                (&local_res8,(*(undefined8 **)((longlong)this + 0x18))[1],&local_res10);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (*(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> **)((longlong)this + 0x10)
                 ,&local_res8);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    }
    plVar3 = *(longlong **)((longlong)this + 0x10);
    plVar2 = (longlong *)*plVar3;
    uVar7 = uVar8;
    if (plVar2 != (longlong *)0x0) {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      uVar7 = plVar2[2];
    }
    plVar3 = (longlong *)*plVar3;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar8 = plVar3[1];
    }
    *(ulonglong *)((longlong)this + 0x20) = uVar8;
    uVar8 = *(ulonglong *)this;
    if (uVar7 < *(ulonglong *)this) {
      uVar8 = uVar7;
    }
    *(ulonglong *)((longlong)this + 0x28) = uVar8;
    puVar1 = *(undefined8 **)((longlong)this + 8);
    *puVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar1[1] = uVar8;
  }
  _Src = param_1->Data;
  uVar8 = param_1->Size;
  if ((*(ulonglong *)((longlong)this + 0x28) < uVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar8 != 0) {
    memcpy(*(void **)((longlong)this + 0x20),_Src,uVar8);
  }
  uVar7 = *(ulonglong *)((longlong)this + 0x28);
  if (uVar7 < uVar8) {
    uVar8 = uVar7;
  }
  *(longlong *)((longlong)this + 0x20) = *(longlong *)((longlong)this + 0x20) + uVar8;
  *(ulonglong *)((longlong)this + 0x28) = uVar7 - uVar8;
  return;
}

// CopyTo @ 14181fd70

void __thiscall
FCompositeBuffer::CopyTo(FCompositeBuffer *this,TMemoryView<void> *param_1,ulong64 param_2)

{
  code *local_28;
  undefined8 *local_20;
  void *local_18;
  ulong64 uStack_10;
  
  local_18 = param_1->Data;
  uStack_10 = param_1->Size;
  local_20 = &local_18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::CopyTo'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
             ::Call;
  IterateRange(this,param_2,param_1->Size,
               (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
               &local_28);
  return;
}

// EqualBytes @ 1418229a0

bool __thiscall FCompositeBuffer::EqualBytes(FCompositeBuffer *this,FCompositeBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong *plVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  longlong lVar7;
  char local_res18 [8];
  longlong local_68;
  longlong local_60;
  char *local_58;
  longlong *local_50;
  code *local_48;
  char **local_40;
  code *local_38;
  code **local_30;
  
  uVar5 = GetSize(this);
  uVar6 = GetSize(param_1);
  if (uVar5 == uVar6) {
    FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Segments).ArrayNum;
    iVar2 = *piVar1;
    uVar5 = 0;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      this = (FCompositeBuffer *)FVar3;
    }
    FVar3 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar2 * 8);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((ForElementType<FSharedBuffer>)this == FVar3) {
        return true;
      }
      plVar4 = *(longlong **)this;
      local_res18[0] = '\x01';
      if (plVar4 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        lVar7 = plVar4[2];
      }
      plVar4 = *(longlong **)this;
      if (plVar4 == (longlong *)0x0) {
        local_68 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        local_68 = plVar4[1];
      }
      plVar4 = *(longlong **)this;
      local_58 = local_res18;
      local_50 = &local_68;
      local_60 = lVar7;
      if (plVar4 == (longlong *)0x0) {
        uVar6 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        uVar6 = plVar4[2];
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FCompositeBuffer::EqualBytes'::__l9::<lambda_1>,void,TMemoryView<void_const_>_>
                 ::Call;
      local_40 = &local_58;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FCompositeBuffer::IterateRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
                 ::Call;
      IterateRange(param_1,uVar5,uVar6,
                   (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
                   &local_38);
      plVar4 = *(longlong **)this;
      if (plVar4 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        lVar7 = plVar4[2];
      }
      uVar5 = uVar5 + lVar7;
      if (local_res18[0] == '\0') break;
      this = (FCompositeBuffer *)((longlong)this + 8);
    }
  }
  return false;
}

// GetSize @ 1418272e0

ulong64 __thiscall FCompositeBuffer::GetSize(FCompositeBuffer *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong *plVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  
  uVar5 = 0;
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Segments).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar3;
  }
  FVar3 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)this == FVar3) break;
    plVar4 = *(longlong **)this;
    if (plVar4 == (longlong *)0x0) {
      this = (FCompositeBuffer *)((longlong)this + 8);
    }
    else {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar5 = uVar5 + plVar4[2];
      this = (FCompositeBuffer *)((longlong)this + 8);
    }
  }
  return uVar5;
}

// IsOwned @ 14182ac00

bool __thiscall FCompositeBuffer::IsOwned(FCompositeBuffer *this)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  undefined1 local_res8 [8];
  
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (this->Segments).ArrayNum;
  pTVar3 = &this->Segments;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar2;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar1 * 8);
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)this == FVar2) break;
    if ((*(longlong *)this != 0) && ((*(ulonglong *)(*(longlong *)this + 0x18) >> 0x3c & 1) == 0)) {
      return false;
    }
    this = (FCompositeBuffer *)((longlong)this + 8);
  }
  return true;
}

// IterateRange @ 14182ae30

void __thiscall
FCompositeBuffer::IterateRange
          (FCompositeBuffer *this,ulong64 param_1,ulong64 param_2,
          TFunctionRef<void___cdecl(TMemoryView<void_const_>)> *param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = *(undefined8 *)param_3;
  local_20 = *(undefined8 *)&param_3->field_0x8;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::IterateRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
             ::Call;
  IterateRange(this,param_1,param_2,
               (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
               &local_18);
  return;
}

// IterateRange @ 14182ae70

void __thiscall
FCompositeBuffer::IterateRange
          (FCompositeBuffer *this,ulong64 param_1,ulong64 param_2,
          TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ForElementType<FSharedBuffer> local_res10;
  longlong local_48;
  ulonglong local_40;
  
  uVar7 = GetSize(this);
  if (uVar7 < param_1 + param_2) {
    GetSize(this);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + Size <= GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\CompositeBuffer.cpp"
                       ,0x8a,
                       L"Failed to access %llu bytes at offset %llu of a composite buffer containing %llu bytes."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (this->Segments).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Segments).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar3;
  }
  local_res10 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar2 * 8);
  do {
    FVar3 = local_res10;
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)this == FVar3) {
      return;
    }
    plVar4 = *(longlong **)this;
    if (plVar4 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar8 = plVar4[2];
    }
    if (uVar8 < param_1) {
      param_1 = param_1 - uVar8;
    }
    else {
      plVar4 = *(longlong **)this;
      if (plVar4 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        uVar8 = plVar4[2];
      }
      plVar4 = *(longlong **)this;
      if (plVar4 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        lVar9 = plVar4[1];
      }
      uVar11 = param_1;
      if (uVar8 < param_1) {
        uVar11 = uVar8;
      }
      uVar10 = param_2;
      if (uVar8 - uVar11 < param_2) {
        uVar10 = uVar8 - uVar11;
      }
      param_1 = 0;
      if ((param_2 == 0) || (uVar10 != 0)) {
        local_48 = uVar11 + lVar9;
        local_40 = uVar10;
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_48,this);
      }
      param_2 = param_2 - uVar10;
      if (param_2 == 0) {
        return;
      }
    }
    this = (FCompositeBuffer *)((longlong)this + 8);
  } while( true );
}

// MakeOwned @ 14182bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
FCompositeBuffer::MakeOwned(FCompositeBuffer *this,FCompositeBuffer *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  undefined1 auStackY_68 [32];
  FCompositeBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (this->Segments).ArrayNum;
  local_28.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar2;
  }
  local_28.Segments.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_28.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar1,0,(ForElementType<FSharedBuffer> *)&local_28,iVar1,
               &local_28.Segments.ArrayMax);
    FVar2 = (ForElementType<FSharedBuffer>)&local_28;
    if (local_28.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar2 = local_28.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar2,(FSharedBuffer *)this,iVar1);
  }
  MakeOwned(&local_28,__return_storage_ptr__);
  FVar2 = (ForElementType<FSharedBuffer>)&local_28;
  if (local_28.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    FVar2 = local_28.Segments.AllocatorInstance.SecondaryData;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)FVar2,local_28.Segments.ArrayNum);
  if (local_28.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    FMemory::Free((void *)local_28.Segments.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// MakeOwned @ 14182be60

FCompositeBuffer * __thiscall
FCompositeBuffer::MakeOwned(FCompositeBuffer *this,FCompositeBuffer *__return_storage_ptr__)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  ForElementType<FSharedBuffer> FVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  FSharedBuffer FVar9;
  ForElementType<FSharedBuffer> FVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  FCompositeBuffer *local_res10;
  TMemoryView<void_const_> local_res18;
  
  bVar8 = false;
  bVar7 = false;
  local_res8[0] = 0;
  FVar5 = (this->Segments).AllocatorInstance.SecondaryData;
  iVar4 = (this->Segments).ArrayNum;
  FVar10 = (ForElementType<FSharedBuffer>)this;
  if (FVar5 != (ForElementType<FSharedBuffer>)0x0) {
    FVar10 = FVar5;
  }
  FVar5 = (ForElementType<FSharedBuffer>)((longlong)FVar10 + (longlong)iVar4 * 8);
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FSharedBuffer,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10 == FVar5) break;
    if ((*(longlong *)FVar10 == 0) ||
       ((*(ulonglong *)(*(longlong *)FVar10 + 0x18) >> 0x3c & 1) != 0)) {
      lVar11 = *(longlong *)FVar10;
      FVar9.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)&local_res18.Size;
      *(longlong *)FVar10 = 0;
      bVar8 = true;
    }
    else {
      plVar6 = *(longlong **)FVar10;
      if ((plVar6 != (longlong *)0x0) && (((ulonglong)plVar6[3] >> 0x3c & 4) == 0)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      plVar6 = *(longlong **)FVar10;
      if ((plVar6 != (longlong *)0x0) && (((ulonglong)plVar6[3] >> 0x3c & 4) == 0)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      bVar7 = true;
      FVar9 = FSharedBuffer::Clone(&local_res18);
      lVar11 = *(longlong *)FVar9.Owner.Owner;
    }
    ((FBufferOwner *)FVar9.Owner.Owner)->_padding_ = 0;
    if (bVar7) {
      bVar7 = false;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res18);
    }
    if (bVar8) {
      bVar8 = false;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res18.Size);
    }
    plVar6 = *(longlong **)FVar10;
    *(longlong *)FVar10 = lVar11;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 3;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar11 & 0x3fffffff) == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar6[1] = 0;
        plVar6[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar6 + 3);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar6)(plVar6,1);
        }
      }
    }
    FVar10 = (ForElementType<FSharedBuffer>)((longlong)FVar10 + 8);
  }
  FCompositeBuffer(local_res10,this);
  return local_res10;
}

// Mid @ 14182c950

FCompositeBuffer * __thiscall
FCompositeBuffer::Mid
          (FCompositeBuffer *this,FCompositeBuffer *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  FCompositeBuffer *local_res10;
  code *local_18;
  FCompositeBuffer **local_10;
  
  uVar1 = GetSize(this);
  uVar3 = uVar1;
  if (param_1 < uVar1) {
    uVar3 = param_1;
  }
  (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  local_10 = &local_res10;
  (__return_storage_ptr__->Segments).ArrayMax = 1;
  uVar2 = uVar1 - uVar3;
  if (param_2 < uVar1 - uVar3) {
    uVar2 = param_2;
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::Mid'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
             ::Call;
  local_res10 = __return_storage_ptr__;
  IterateRange(this,uVar3,uVar2,
               (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
               &local_18);
  return __return_storage_ptr__;
}

// Reset @ 14182ff10

void __thiscall FCompositeBuffer::Reset(FCompositeBuffer *this)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  ForElementType<FSharedBuffer> FVar3;
  
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar3 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)FVar3,(this->Segments).ArrayNum);
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,0,(ForElementType<FSharedBuffer> *)this,0,piVar1);
  }
  return;
}

// ToShared @ 141837eb0

FSharedBuffer __thiscall FCompositeBuffer::ToShared(FCompositeBuffer *this)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  ForElementType<FSharedBuffer> FVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  FSharedBuffer FVar8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  ulonglong _Size;
  ulonglong uVar9;
  void *_Src;
  void *_Dst;
  bool bVar10;
  undefined1 local_res8 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  longlong *local_res18;
  
  piVar1 = &(this->Segments).ArrayNum;
  if (*piVar1 == 0) {
    (in_RDX.Owner)->_padding_ = 0;
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  if (*piVar1 == 1) {
    FVar4 = (this->Segments).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      this = (FCompositeBuffer *)FVar4;
    }
    lVar6 = *(longlong *)this;
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (ulonglong *)(lVar6 + 0x18);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    (in_RDX.Owner)->_padding_ = lVar6;
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  local_res10.Owner = in_RDX.Owner;
  GetSize(this);
  FUniqueBuffer::Alloc((ulong64)&local_res18);
  plVar5 = local_res18;
  bVar10 = local_res18 == (longlong *)0x0;
  if (local_res18 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    if (((ulonglong)local_res18[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_res18 + 8))(local_res18);
    }
    uVar9 = plVar5[2];
  }
  if (bVar10) {
    _Dst = (void *)0x0;
  }
  else {
    if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    _Dst = (void *)plVar5[1];
  }
  FVar4 = (this->Segments).AllocatorInstance.SecondaryData;
  iVar3 = *piVar1;
  if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar4;
  }
  FVar4 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)this == FVar4) {
      (local_res10.Owner)->_padding_ = (longlong)local_res18;
      return (FSharedBuffer)
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_res10.Owner;
    }
    plVar5 = *(longlong **)this;
    _Size = 0;
    if (plVar5 != (longlong *)0x0) {
      if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      _Size = plVar5[2];
    }
    plVar5 = *(longlong **)this;
    _Src = (void *)0x0;
    if (plVar5 != (longlong *)0x0) {
      if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      _Src = (void *)plVar5[1];
    }
    if ((uVar9 < _Size) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InView.Size <= Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                            ,0xdb,
                            L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar10)) break;
    if (_Size != 0) {
      memcpy(_Dst,_Src,_Size);
    }
    if (uVar9 < _Size) {
      _Size = uVar9;
    }
    _Dst = (void *)((longlong)_Dst + _Size);
    uVar9 = uVar9 - _Size;
    this = (FCompositeBuffer *)((longlong)this + 8);
  }
  pcVar7 = (code *)swi(3);
  FVar8.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar7)();
  return (FSharedBuffer)FVar8.Owner.Owner;
}

// ToShared @ 1418380e0

FSharedBuffer __thiscall FCompositeBuffer::ToShared(FCompositeBuffer *this)

{
  ForElementType<FSharedBuffer> FVar1;
  longlong lVar2;
  FSharedBuffer FVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  
  if ((this->Segments).ArrayNum == 1) {
    FVar1 = (this->Segments).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FSharedBuffer>)0x0) {
      this = (FCompositeBuffer *)FVar1;
    }
    lVar2 = *(longlong *)this;
    *(longlong *)this = 0;
    local_res8.Owner = (FBufferOwner *)0x0;
    (in_RDX.Owner)->_padding_ = lVar2;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  FVar3 = ToShared(this);
  lVar2 = *(longlong *)FVar3.Owner.Owner;
  *(undefined8 *)FVar3.Owner.Owner = 0;
  (in_RDX.Owner)->_padding_ = lVar2;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// ViewOrCopyRange @ 14183ac30

TMemoryView<void_const_> * __thiscall
FCompositeBuffer::ViewOrCopyRange
          (FCompositeBuffer *this,TMemoryView<void_const_> *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2,FUniqueBuffer *param_3)

{
  code *local_68;
  code *local_60;
  code *local_58;
  ulong64 *local_50;
  code *local_48;
  code **local_40;
  ulong64 local_38;
  TMemoryView<void_const_> *local_30;
  FUniqueBuffer *local_28;
  code **local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = FUniqueBuffer::Alloc;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
             ::Call;
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->Size = 0;
  local_28 = param_3;
  local_20 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::ViewOrCopyRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>_>
             ::Call;
  local_50 = &local_38;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::IterateRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
             ::Call;
  local_18 = 0;
  uStack_10 = 0;
  local_38 = param_2;
  local_30 = __return_storage_ptr__;
  IterateRange(this,param_1,param_2,
               (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
               &local_48);
  return __return_storage_ptr__;
}

// ViewOrCopyRange @ 14183ace0

TMemoryView<void_const_> * __thiscall
FCompositeBuffer::ViewOrCopyRange
          (FCompositeBuffer *this,TMemoryView<void_const_> *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2,FUniqueBuffer *param_3,
          TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *param_4)

{
  code *local_58;
  ulong64 *local_50;
  code *local_48;
  code **local_40;
  ulong64 local_38;
  TMemoryView<void_const_> *local_30;
  FUniqueBuffer *local_28;
  TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->Size = 0;
  local_28 = param_3;
  local_20 = param_4;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::ViewOrCopyRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>_>
             ::Call;
  local_50 = &local_38;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCompositeBuffer::IterateRange'::__l2::<lambda_1>,void,TMemoryView<void_const_>,FSharedBuffer_const_&>
             ::Call;
  local_18 = 0;
  uStack_10 = 0;
  local_38 = param_2;
  local_30 = __return_storage_ptr__;
  IterateRange(this,param_1,param_2,
               (TFunctionRef<void___cdecl(TMemoryView<void_const_>,FSharedBuffer_const_&)> *)
               &local_48);
  return __return_storage_ptr__;
}

// FCompositeBuffer<FSharedBuffer,FSharedBuffer,0> @ 1419b4350

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1,FSharedBuffer *param_2)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSharedBuffer> FVar7;
  FCompositeBuffer *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  *piVar1 = 1;
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,2,(ForElementType<FSharedBuffer> *)this,0,piVar1);
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar7 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCompositeBuffer *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar6 + 1;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  pFVar3 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar7 + (longlong)iVar6 * 8) = pFVar3;
  AppendBuffers(this,param_2);
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 != 0) {
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    iVar13 = 0;
    bVar5 = *(longlong *)FVar7 != 0;
    lVar9 = 0;
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar11 + 1;
        if (iVar6 <= lVar9) break;
      } while (bVar5 == (*(longlong *)((longlong)FVar7 + lVar9 * 8) != 0));
      iVar12 = iVar11 - iVar10;
      if (bVar5 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar10 * 8),iVar12);
      }
      else {
        if (iVar13 != iVar10) {
          memmove((longlong *)((longlong)FVar7 + (longlong)iVar13 * 8),
                  (longlong *)((longlong)FVar7 + (longlong)iVar10 * 8),(longlong)iVar12 << 3);
        }
        iVar13 = iVar13 + iVar12;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < iVar6);
    (this->Segments).ArrayNum = iVar13;
  }
  return this;
}

// AppendBuffers @ 1419e0e90

void __thiscall FCompositeBuffer::AppendBuffers(FCompositeBuffer *this,FSharedBuffer *param_1)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSharedBuffer> FVar7;
  
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar7 + (longlong)(this->Segments).ArrayMax * 8)) &&
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
  iVar6 = (this->Segments).ArrayNum;
  piVar1 = &(this->Segments).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar6 + 1;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar2;
  }
  pFVar3 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)this + (longlong)iVar6 * 8) = pFVar3;
  return;
}

// FCompositeBuffer<FSharedBuffer,FSharedBuffer,FSharedBuffer,0> @ 141c61d60

FCompositeBuffer * __thiscall
FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,FSharedBuffer,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1,FSharedBuffer *param_2,
          FSharedBuffer *param_3)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSharedBuffer> FVar7;
  FCompositeBuffer *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  *piVar1 = 1;
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,3,(ForElementType<FSharedBuffer> *)this,0,piVar1);
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar7 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCompositeBuffer *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar6 + 1;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  pFVar3 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar7 + (longlong)iVar6 * 8) = pFVar3;
  AppendBuffers(this,param_2);
  AppendBuffers(this,param_3);
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 != 0) {
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    iVar13 = 0;
    bVar5 = *(longlong *)FVar7 != 0;
    lVar9 = 0;
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar11 + 1;
        if (iVar6 <= lVar9) break;
      } while (bVar5 == (*(longlong *)((longlong)FVar7 + lVar9 * 8) != 0));
      iVar12 = iVar11 - iVar10;
      if (bVar5 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar10 * 8),iVar12);
      }
      else {
        if (iVar13 != iVar10) {
          memmove((longlong *)((longlong)FVar7 + (longlong)iVar13 * 8),
                  (longlong *)((longlong)FVar7 + (longlong)iVar10 * 8),(longlong)iVar12 << 3);
        }
        iVar13 = iVar13 + iVar12;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < iVar6);
    (this->Segments).ArrayNum = iVar13;
  }
  return this;
}

// FCompositeBuffer<FSharedBuffer,FCompositeBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0> @ 141c61f60

FCompositeBuffer * __thiscall
FCompositeBuffer::
FCompositeBuffer<FSharedBuffer,FCompositeBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
          (FCompositeBuffer *this,FSharedBuffer *param_1,FCompositeBuffer *param_2,
          TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSharedBuffer> FVar7;
  FCompositeBuffer *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  (this->Segments).AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  iVar6 = 1;
  *piVar1 = 1;
  uVar12 = param_3->ArrayNum + 1 + (param_2->Segments).ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (1 < (int)uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,uVar12,(ForElementType<FSharedBuffer> *)this,0,piVar1);
    iVar6 = *piVar1;
  }
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar7 + (longlong)iVar6 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCompositeBuffer *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar6 + 1;
  FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FSharedBuffer>)this;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar7 = FVar2;
  }
  pFVar3 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  *(FBufferOwner **)((longlong)FVar7 + (longlong)iVar6 * 8) = pFVar3;
  AppendBuffers(this,param_2);
  AppendBuffers<TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>(this,param_3);
  iVar6 = (this->Segments).ArrayNum;
  if (iVar6 != 0) {
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)this;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar2;
    }
    iVar13 = 0;
    bVar5 = *(longlong *)FVar7 != 0;
    lVar9 = 0;
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar11 + 1;
        if (iVar6 <= lVar9) break;
      } while (bVar5 == (*(longlong *)((longlong)FVar7 + lVar9 * 8) != 0));
      iVar14 = iVar11 - iVar10;
      if (bVar5 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar10 * 8),iVar14);
      }
      else {
        if (iVar13 != iVar10) {
          memmove((longlong *)((longlong)FVar7 + (longlong)iVar13 * 8),
                  (longlong *)((longlong)FVar7 + (longlong)iVar10 * 8),(longlong)iVar14 << 3);
        }
        iVar13 = iVar13 + iVar14;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < iVar6);
    (this->Segments).ArrayNum = iVar13;
  }
  return this;
}

// AppendBuffers<TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0> @ 141c639b0

void __thiscall
FCompositeBuffer::AppendBuffers<TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
          (FCompositeBuffer *this,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *)this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (8,8,iVar1,(ForElementType<FSharedBuffer> *)this,&(this->Segments).ArrayNum,
                       &(this->Segments).ArrayMax);
    FVar2 = (this->Segments).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      this = (FCompositeBuffer *)FVar2;
    }
    memmove((void *)((longlong)this + (longlong)iVar5 * 8),(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// AppendBuffers @ 141c90730

void __thiscall FCompositeBuffer::AppendBuffers(FCompositeBuffer *this,FSharedBuffer *param_1)

{
  int *piVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned___int64> aVar3;
  ForElementType<FSharedBuffer> FVar4;
  FBufferOwner *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FSharedBuffer> FVar9;
  
  FVar4 = (this->Segments).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<FSharedBuffer>)this;
  if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
    FVar9 = FVar4;
  }
  if ((ulonglong)FVar9 <= param_1) {
    FVar9 = (ForElementType<FSharedBuffer>)this;
    if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar4;
    }
    if ((param_1 < (FSharedBuffer *)((longlong)FVar9 + (longlong)(this->Segments).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->Segments).ArrayNum;
  piVar1 = &(this->Segments).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                      (0x808,(ForElementType<FSharedBuffer> *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar8 + 1;
  FVar4 = (this->Segments).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompositeBuffer *)FVar4;
  }
  pFVar5 = (param_1->Owner).Owner;
  if (pFVar5 != (FBufferOwner *)0x0) {
    LOCK();
    paVar2 = &pFVar5->ReferenceCountsAndFlags;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      pFVar5->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar5->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  *(FBufferOwner **)((longlong)this + (longlong)iVar8 * 8) = pFVar5;
  return;
}

