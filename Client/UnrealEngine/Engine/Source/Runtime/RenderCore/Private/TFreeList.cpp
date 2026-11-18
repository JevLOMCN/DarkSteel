// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Empty @ 145dac480

void __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
Empty(TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
      *this)

{
  int *piVar1;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar6;
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
              (8,4,1,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
                      *)this,0,piVar1);
  }
  pTVar2 = (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->FreeList).AllocatorInstance.SecondaryData.Data;
  local_18 = 0xff;
  uStack_17 = 0xff;
  uStack_16 = 0xff;
  uStack_15 = 0xff;
  uStack_14 = 0xff;
  uStack_13 = 0xff;
  uStack_12 = 0xff;
  uStack_11 = 0xff;
  pTVar6 = this;
  if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar6 = pTVar2;
  }
  if (pTVar6 <= (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)&stack0xffffffffffffffe8) {
    pTVar6 = this;
    if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar6 = pTVar2;
    }
    if ((&stack0xffffffffffffffe8 <
         (pTVar6->FreeList).AllocatorInstance.InlineData + (longlong)*piVar1 * 8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
                      (0x408,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
                              *)this,piVar1);
  }
  (this->FreeList).ArrayNum = iVar5 + 1;
  pTVar2 = (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->FreeList).AllocatorInstance.SecondaryData.Data;
  pTVar6 = this;
  if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar6 = pTVar2;
  }
  *(uchar (*) [8])((pTVar6->FreeList).AllocatorInstance.InlineData + (longlong)iVar5 * 8) =
       _local_18;
  this->NumElements = 0;
  return;
}

// Empty @ 145dac5b0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Empty
          (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *this)

{
  int *piVar1;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar6;
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
              (8,4,1,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                      *)this,0,piVar1);
  }
  pTVar2 = (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->FreeList).AllocatorInstance.SecondaryData.Data;
  local_18 = 0xff;
  uStack_17 = 0xff;
  uStack_16 = 0xff;
  uStack_15 = 0xff;
  uStack_14 = 0xff;
  uStack_13 = 0xff;
  uStack_12 = 0xff;
  uStack_11 = 0xff;
  pTVar6 = this;
  if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar6 = pTVar2;
  }
  if (pTVar6 <= (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
                &stack0xffffffffffffffe8) {
    pTVar6 = this;
    if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
      pTVar6 = pTVar2;
    }
    if ((&stack0xffffffffffffffe8 <
         (pTVar6->FreeList).AllocatorInstance.InlineData + (longlong)*piVar1 * 8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
                      (0x408,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                              *)this,piVar1);
  }
  (this->FreeList).ArrayNum = iVar5 + 1;
  pTVar2 = (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->FreeList).AllocatorInstance.SecondaryData.Data;
  pTVar6 = this;
  if (pTVar2 != (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar6 = pTVar2;
  }
  *(uchar (*) [8])((pTVar6->FreeList).AllocatorInstance.InlineData + (longlong)iVar5 * 8) =
       _local_18;
  this->NumElements = 0;
  return;
}

// Pop @ 145dc4200

int __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
Pop(TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    *this)

{
  int *piVar1;
  uchar *_Dst;
  int iVar2;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar9;
  uint uVar10;
  
  this->NumElements = this->NumElements + -1;
  iVar6 = (this->FreeList).ArrayNum;
  uVar10 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar6) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pTVar3 = (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->FreeList).AllocatorInstance.SecondaryData.Data;
  pTVar9 = this;
  if (pTVar3 != (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar9 = pTVar3;
  }
  iVar6 = (this->FreeList).ArrayNum;
  lVar7 = (longlong)iVar6;
  iVar2 = *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -8);
  if (iVar2 == *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -4)) {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    pTVar3 = (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->FreeList).AllocatorInstance.SecondaryData.Data;
    iVar6 = (this->FreeList).ArrayNum;
    pTVar9 = this;
    if (pTVar3 != (TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar9 = pTVar3;
    }
    uVar8 = iVar6 - 1;
    _Dst = (pTVar9->FreeList).AllocatorInstance.InlineData + (longlong)(int)uVar8 * 8;
    iVar6 = ~uVar8 + iVar6;
    if (iVar6 != 0) {
      memmove(_Dst,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
                    *)(_Dst + 8),(longlong)iVar6 << 3);
    }
    piVar1 = &(this->FreeList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
                    *)this,(this->FreeList).ArrayNum,&(this->FreeList).ArrayMax);
    return iVar2;
  }
  *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -8) = iVar2 + 1;
  return iVar2;
}

// Pop @ 145dc4340

int __thiscall
Experimental::RobinHoodHashTable_Private::
TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::Pop
          (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *this)

{
  int *piVar1;
  uchar *_Dst;
  int iVar2;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *pTVar9;
  uint uVar10;
  
  this->NumElements = this->NumElements + -1;
  iVar6 = (this->FreeList).ArrayNum;
  uVar10 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar6) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pTVar3 = (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
           (this->FreeList).AllocatorInstance.SecondaryData.Data;
  pTVar9 = this;
  if (pTVar3 != (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar9 = pTVar3;
  }
  iVar6 = (this->FreeList).ArrayNum;
  lVar7 = (longlong)iVar6;
  iVar2 = *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -8);
  if (iVar2 == *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -4)) {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    pTVar3 = (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)
             (this->FreeList).AllocatorInstance.SecondaryData.Data;
    iVar6 = (this->FreeList).ArrayNum;
    pTVar9 = this;
    if (pTVar3 != (TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_> *)0x0) {
      pTVar9 = pTVar3;
    }
    uVar8 = iVar6 - 1;
    _Dst = (pTVar9->FreeList).AllocatorInstance.InlineData + (longlong)(int)uVar8 * 8;
    iVar6 = ~uVar8 + iVar6;
    if (iVar6 != 0) {
      memmove(_Dst,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                    *)(_Dst + 8),(longlong)iVar6 << 3);
    }
    piVar1 = &(this->FreeList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
                    *)this,(this->FreeList).ArrayNum,&(this->FreeList).ArrayMax);
    return iVar2;
  }
  *(int *)((pTVar9->FreeList).AllocatorInstance.InlineData + lVar7 * 8 + -8) = iVar2 + 1;
  return iVar2;
}

