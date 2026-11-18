// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 8

// begin @ 14438a4a0

TConstIterator * __thiscall
TMeshElementContainer<FEdgeID>::TElementIDs::begin
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar4 = this->Array;
  local_28 = 0;
  uStack_24 = 1;
  iVar2 = pTVar4->NumBits;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(pTVar4->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar6 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar6 = pTVar4;
    }
    uVar3 = *(uint *)(pTVar6->AllocatorInstance).InlineData;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar5 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_14438a54d;
      uVar3 = *(uint *)((pTVar6->AllocatorInstance).InlineData + 4 + lVar5 * 4);
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_14 = (int)lVar5 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_14438a54d:
      iStack_14 = iVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_24,local_28);
  (__return_storage_ptr__->Iterator).Array = pTVar4;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = 0xffffffff;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = iStack_14;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_c,iStack_10);
  return __return_storage_ptr__;
}

// begin @ 14438a580

TConstIterator * __thiscall
TMeshElementContainer<FPolygonGroupID>::TElementIDs::begin
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar4 = this->Array;
  local_28 = 0;
  uStack_24 = 1;
  iVar2 = pTVar4->NumBits;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(pTVar4->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar6 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar6 = pTVar4;
    }
    uVar3 = *(uint *)(pTVar6->AllocatorInstance).InlineData;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar5 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_14438a62d;
      uVar3 = *(uint *)((pTVar6->AllocatorInstance).InlineData + 4 + lVar5 * 4);
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_14 = (int)lVar5 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_14438a62d:
      iStack_14 = iVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_24,local_28);
  (__return_storage_ptr__->Iterator).Array = pTVar4;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = 0xffffffff;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = iStack_14;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_c,iStack_10);
  return __return_storage_ptr__;
}

// begin @ 14438a660

TConstIterator * __thiscall
TMeshElementContainer<FTriangleID>::TElementIDs::begin
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar4 = this->Array;
  local_28 = 0;
  uStack_24 = 1;
  iVar2 = pTVar4->NumBits;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(pTVar4->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar6 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar6 = pTVar4;
    }
    uVar3 = *(uint *)(pTVar6->AllocatorInstance).InlineData;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar5 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_14438a70d;
      uVar3 = *(uint *)((pTVar6->AllocatorInstance).InlineData + 4 + lVar5 * 4);
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_14 = (int)lVar5 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_14438a70d:
      iStack_14 = iVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_24,local_28);
  (__return_storage_ptr__->Iterator).Array = pTVar4;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = 0xffffffff;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = iStack_14;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_c,iStack_10);
  return __return_storage_ptr__;
}

// begin @ 14438a740

TConstIterator * __thiscall
TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar4 = this->Array;
  local_28 = 0;
  uStack_24 = 1;
  iVar2 = pTVar4->NumBits;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(pTVar4->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar6 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar6 = pTVar4;
    }
    uVar3 = *(uint *)(pTVar6->AllocatorInstance).InlineData;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar5 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_14438a7ed;
      uVar3 = *(uint *)((pTVar6->AllocatorInstance).InlineData + 4 + lVar5 * 4);
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_14 = (int)lVar5 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_14438a7ed:
      iStack_14 = iVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_24,local_28);
  (__return_storage_ptr__->Iterator).Array = pTVar4;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = 0xffffffff;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = iStack_14;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_c,iStack_10);
  return __return_storage_ptr__;
}

// end @ 14438a820

TConstIterator * __thiscall
TMeshElementContainer<FEdgeID>::TElementIDs::end
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TConstIterator *pTVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_38;
  uint uStack_34;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pTVar3 = this->Array;
  uStack_24 = pTVar3->NumBits;
  bVar7 = (byte)uStack_24 & 0x1f;
  uStack_34 = 1 << bVar7;
  local_38 = (int)uStack_24 >> 5;
  local_28 = -1 << bVar7;
  uStack_20 = uStack_24 & 0xffffffe0;
  if (((int)uStack_24 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TConstIterator *)(*pcVar4)();
    return pTVar6;
  }
  uVar2 = pTVar3->NumBits;
  if (uStack_24 != uVar2) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &(pTVar3->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar10 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar3;
    }
    uVar9 = local_28 & *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)local_38 * 4);
    while (uVar9 == 0) {
      uStack_20 = uStack_20 + 0x20;
      lVar8 = (longlong)local_38;
      local_38 = local_38 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_38)
      goto LAB_14438a92c;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      local_28 = 0xffffffff;
    }
    uStack_34 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uStack_24 = (int)lVar8 + -1 + uStack_20;
    if ((int)uVar2 < (int)uStack_24) {
LAB_14438a92c:
      uStack_24 = uVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_34,local_38);
  (__return_storage_ptr__->Iterator).Array = pTVar3;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = local_28;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = uStack_24;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_1c,uStack_20);
  return __return_storage_ptr__;
}

// end @ 14438a970

TConstIterator * __thiscall
TMeshElementContainer<FPolygonGroupID>::TElementIDs::end
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TConstIterator *pTVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_38;
  uint uStack_34;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pTVar3 = this->Array;
  uStack_24 = pTVar3->NumBits;
  bVar7 = (byte)uStack_24 & 0x1f;
  uStack_34 = 1 << bVar7;
  local_38 = (int)uStack_24 >> 5;
  local_28 = -1 << bVar7;
  uStack_20 = uStack_24 & 0xffffffe0;
  if (((int)uStack_24 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TConstIterator *)(*pcVar4)();
    return pTVar6;
  }
  uVar2 = pTVar3->NumBits;
  if (uStack_24 != uVar2) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &(pTVar3->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar10 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar3;
    }
    uVar9 = local_28 & *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)local_38 * 4);
    while (uVar9 == 0) {
      uStack_20 = uStack_20 + 0x20;
      lVar8 = (longlong)local_38;
      local_38 = local_38 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_38)
      goto LAB_14438aa7c;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      local_28 = 0xffffffff;
    }
    uStack_34 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uStack_24 = (int)lVar8 + -1 + uStack_20;
    if ((int)uVar2 < (int)uStack_24) {
LAB_14438aa7c:
      uStack_24 = uVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_34,local_38);
  (__return_storage_ptr__->Iterator).Array = pTVar3;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = local_28;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = uStack_24;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_1c,uStack_20);
  return __return_storage_ptr__;
}

// end @ 14438aac0

TConstIterator * __thiscall
TMeshElementContainer<FTriangleID>::TElementIDs::end
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TConstIterator *pTVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_38;
  uint uStack_34;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pTVar3 = this->Array;
  uStack_24 = pTVar3->NumBits;
  bVar7 = (byte)uStack_24 & 0x1f;
  uStack_34 = 1 << bVar7;
  local_38 = (int)uStack_24 >> 5;
  local_28 = -1 << bVar7;
  uStack_20 = uStack_24 & 0xffffffe0;
  if (((int)uStack_24 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TConstIterator *)(*pcVar4)();
    return pTVar6;
  }
  uVar2 = pTVar3->NumBits;
  if (uStack_24 != uVar2) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &(pTVar3->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar10 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar3;
    }
    uVar9 = local_28 & *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)local_38 * 4);
    while (uVar9 == 0) {
      uStack_20 = uStack_20 + 0x20;
      lVar8 = (longlong)local_38;
      local_38 = local_38 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_38)
      goto LAB_14438abcc;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      local_28 = 0xffffffff;
    }
    uStack_34 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uStack_24 = (int)lVar8 + -1 + uStack_20;
    if ((int)uVar2 < (int)uStack_24) {
LAB_14438abcc:
      uStack_24 = uVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_34,local_38);
  (__return_storage_ptr__->Iterator).Array = pTVar3;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = local_28;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = uStack_24;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_1c,uStack_20);
  return __return_storage_ptr__;
}

// end @ 14438ac10

TConstIterator * __thiscall
TMeshElementContainer<FVertexInstanceID>::TElementIDs::end
          (TElementIDs *this,TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TConstIterator *pTVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_38;
  uint uStack_34;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pTVar3 = this->Array;
  uStack_24 = pTVar3->NumBits;
  bVar7 = (byte)uStack_24 & 0x1f;
  uStack_34 = 1 << bVar7;
  local_38 = (int)uStack_24 >> 5;
  local_28 = -1 << bVar7;
  uStack_20 = uStack_24 & 0xffffffe0;
  if (((int)uStack_24 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TConstIterator *)(*pcVar4)();
    return pTVar6;
  }
  uVar2 = pTVar3->NumBits;
  if (uStack_24 != uVar2) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &(pTVar3->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar10 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar3;
    }
    uVar9 = local_28 & *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)local_38 * 4);
    while (uVar9 == 0) {
      uStack_20 = uStack_20 + 0x20;
      lVar8 = (longlong)local_38;
      local_38 = local_38 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_38)
      goto LAB_14438ad1c;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      local_28 = 0xffffffff;
    }
    uStack_34 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uStack_24 = (int)lVar8 + -1 + uStack_20;
    if ((int)uVar2 < (int)uStack_24) {
LAB_14438ad1c:
      uStack_24 = uVar2;
    }
  }
  (__return_storage_ptr__->Iterator)._padding_ = CONCAT44(uStack_34,local_38);
  (__return_storage_ptr__->Iterator).Array = pTVar3;
  (__return_storage_ptr__->Iterator).UnvisitedBitMask = local_28;
  (__return_storage_ptr__->Iterator).CurrentBitIndex = uStack_24;
  *(ulonglong *)&(__return_storage_ptr__->Iterator).BaseBitIndex = CONCAT44(uStack_1c,uStack_20);
  return __return_storage_ptr__;
}

