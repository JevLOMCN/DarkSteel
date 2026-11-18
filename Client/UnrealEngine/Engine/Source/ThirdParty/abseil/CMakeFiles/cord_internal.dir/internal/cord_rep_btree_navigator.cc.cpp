// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 3

// Read @ 1501d0a90

/* public: struct absl::lts_20240722::cord_internal::CordRepBtreeNavigator::ReadResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Read(unsigned __int64,unsigned __int64)
   __ptr64 */

ReadResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Read
          (CordRepBtreeNavigator *this,ReadResult *__return_storage_ptr__,__uint64 param_1,
          __uint64 param_2)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  ulong64 *puVar4;
  longlong lVar5;
  CordRepBtree **ppCVar6;
  CordRep *pCVar7;
  CordRep *pCVar8;
  undefined8 uVar9;
  uchar uVar10;
  uchar *puVar11;
  int iVar12;
  CordRepBtree *pCVar13;
  CordRepBtree *pCVar14;
  ulonglong uVar15;
  CordRep **ppCVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  uVar15 = (ulonglong)this->index_[0];
  uVar18 = param_1 + param_2;
  pCVar13 = this->node_[0];
  iVar12 = 0;
  pCVar14 = (CordRepBtree *)pCVar13->edges_[uVar15];
  if (uVar18 < (ulonglong)pCVar14->_padding_) {
    pCVar3 = (CordRep *)FUN_1501d0ee0(pCVar14,param_1,param_2);
    __return_storage_ptr__->tree = pCVar3;
    __return_storage_ptr__->n = uVar18;
    return __return_storage_ptr__;
  }
  puVar4 = (ulong64 *)FUN_1501d0ee0(pCVar14,param_1,pCVar14->_padding_ - param_1);
  pCVar3 = ::operator_new(0x40);
  if (pCVar3 == (CordRep *)0x0) {
    pCVar3 = (CordRep *)0x0;
  }
  else {
    (pCVar3->refcount).count_ = (atomic<int>)0x2;
  }
  if (*(char *)((longlong)puVar4 + 0xc) == '\x03') {
    uVar10 = *(char *)((longlong)puVar4 + 0xd) + '\x01';
  }
  else {
    uVar10 = '\0';
  }
  pCVar3->length = *puVar4;
  pCVar3[1].length = (ulong64)puVar4;
  lVar17 = 1;
  pCVar3->tag = '\x03';
  pCVar3->storage[0] = uVar10;
  pCVar3->storage[1] = '\0';
  pCVar3->storage[2] = '\x01';
  do {
    uVar18 = uVar18 - pCVar14->_padding_;
    uVar15 = uVar15 + 1;
    pCVar7 = pCVar3;
    if (uVar15 == *(byte *)((longlong)&pCVar13->_padding_ + 7)) {
      do {
        lVar5 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        this->index_[lVar5] = (uchar)uVar15;
        if (this->height_ < iVar12) {
          pCVar7->storage[2] = (uchar)lVar17;
          if (uVar18 == 0) {
            __return_storage_ptr__->tree = pCVar7;
            __return_storage_ptr__->n = 0;
            return __return_storage_ptr__;
          }
          LOCK();
          pRVar1 = &pCVar7->refcount;
          aVar2 = pRVar1->count_;
          pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x2) {
            CordRep::Destroy(pCVar7);
          }
          __return_storage_ptr__->tree = (CordRep *)0x0;
          goto LAB_1501d0d50;
        }
        pCVar3 = pCVar7;
        if (uVar18 != 0) {
          pCVar7->storage[2] = (uchar)lVar17;
          pCVar3 = ::operator_new(0x40);
          if (pCVar3 != (CordRep *)0x0) {
            (pCVar3->refcount).count_ = (atomic<int>)0x2;
          }
          if (pCVar7->tag == '\x03') {
            uVar10 = pCVar7->storage[0] + '\x01';
          }
          else {
            uVar10 = '\0';
          }
          lVar17 = 1;
          pCVar3->length = pCVar7->length;
          pCVar3[1].length = (ulong64)pCVar7;
          pCVar3->tag = '\x03';
          pCVar3->storage[0] = uVar10;
          pCVar3->storage[1] = '\0';
          pCVar3->storage[2] = '\x01';
        }
        pCVar13 = this->node_[iVar12];
        uVar15 = (ulonglong)this->index_[iVar12] + 1;
        pCVar7 = pCVar3;
      } while (uVar15 == *(byte *)((longlong)&pCVar13->_padding_ + 7));
    }
    pCVar14 = (CordRepBtree *)pCVar13->edges_[uVar15];
    if ((ulonglong)pCVar14->_padding_ <= uVar18) {
      pCVar3->length = pCVar3->length + pCVar14->_padding_;
      LOCK();
      ((RefcountAndFlags *)&pCVar14->_padding_)->count_ =
           (atomic<int>)((int)((RefcountAndFlags *)&pCVar14->_padding_)->count_ + 2);
      UNLOCK();
      *(CordRepBtree **)(pCVar3[1].storage + lVar17 * 8 + -0xd) = pCVar14;
      lVar17 = lVar17 + 1;
    }
  } while ((ulonglong)pCVar14->_padding_ <= uVar18);
  pCVar3->length = pCVar3->length + uVar18;
  pCVar7 = pCVar3;
  if (0 < iVar12) {
    puVar11 = this->index_ + iVar12;
    ppCVar6 = this->node_ + iVar12;
    pCVar8 = pCVar3;
    pCVar13 = pCVar14;
    do {
      *puVar11 = (uchar)uVar15;
      ppCVar6 = ppCVar6 + -1;
      puVar11 = puVar11 + -1;
      iVar12 = iVar12 + -1;
      *ppCVar6 = pCVar13;
      uVar15 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar13->_padding_ + 1) + 2);
      pCVar14 = (CordRepBtree *)pCVar13->edges_[uVar15];
      ppCVar16 = pCVar13->edges_ + uVar15;
      pCVar7 = pCVar8;
      if (uVar18 != 0) {
        pCVar7 = ::operator_new(0x40);
        if (pCVar7 != (CordRep *)0x0) {
          (pCVar7->refcount).count_ = (atomic<int>)0x2;
        }
        pCVar7->tag = '\x03';
        pCVar7->storage[0] = (uchar)iVar12;
        pCVar7->storage[1] = '\0';
        pCVar7->storage[2] = '\0';
        pCVar7->length = uVar18;
        *(CordRep **)(pCVar8[1].storage + lVar17 * 8 + -0xd) = pCVar7;
        pCVar8->storage[2] = (char)lVar17 + '\x01';
        lVar17 = 0;
        if ((ulonglong)pCVar14->_padding_ <= uVar18) {
          pCVar8 = pCVar7 + 1;
          do {
            LOCK();
            ((RefcountAndFlags *)&pCVar14->_padding_)->count_ =
                 (atomic<int>)((int)((RefcountAndFlags *)&pCVar14->_padding_)->count_ + 2);
            UNLOCK();
            pCVar8->length = (ulong64)pCVar14;
            ppCVar16 = ppCVar16 + 1;
            uVar18 = uVar18 - pCVar14->_padding_;
            pCVar8 = (CordRep *)&pCVar8->refcount;
            pCVar14 = (CordRepBtree *)*ppCVar16;
            lVar17 = lVar17 + 1;
            uVar15 = uVar15 + 1;
          } while ((ulonglong)pCVar14->_padding_ <= uVar18);
        }
      }
      pCVar8 = pCVar7;
      pCVar13 = pCVar14;
    } while (0 < iVar12);
  }
  if (uVar18 != 0) {
    uVar9 = FUN_1501d0ee0(pCVar14,0,uVar18);
    *(undefined8 *)(pCVar7[1].storage + lVar17 * 8 + -0xd) = uVar9;
    lVar17 = lVar17 + 1;
  }
  pCVar7->storage[2] = (uchar)lVar17;
  this->index_[0] = (uchar)uVar15;
  __return_storage_ptr__->tree = pCVar3;
LAB_1501d0d50:
  __return_storage_ptr__->n = uVar18;
  return __return_storage_ptr__;
}

// Skip @ 1501d0db0

/* public: struct absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Skip(unsigned __int64) __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Skip
          (CordRepBtreeNavigator *this,Position *__return_storage_ptr__,__uint64 param_1)

{
  uchar uVar1;
  ulonglong uVar2;
  uchar *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  CordRepBtree **ppCVar7;
  CordRep *pCVar8;
  CordRep *pCVar9;
  int iVar10;
  CordRepBtree *pCVar11;
  
  uVar2 = (ulonglong)this->index_[0];
  iVar10 = 0;
  pCVar11 = this->node_[0];
  pCVar9 = pCVar11->edges_[uVar2];
  uVar5 = pCVar9->length;
  if (uVar5 <= param_1) {
    uVar6 = (ulonglong)*(byte *)((longlong)&pCVar11->_padding_ + 7);
    lVar4 = 0;
    do {
      param_1 = param_1 - uVar5;
      uVar2 = uVar2 + 1;
      if (uVar2 == uVar6) {
        puVar3 = this->index_ + lVar4;
        ppCVar7 = this->node_ + lVar4;
        do {
          iVar10 = iVar10 + 1;
          ppCVar7 = ppCVar7 + 1;
          lVar4 = lVar4 + 1;
          puVar3 = puVar3 + 1;
          if (this->height_ < lVar4) {
            __return_storage_ptr__->edge = (CordRep *)0x0;
            goto LAB_1501d0eb1;
          }
          pCVar11 = *ppCVar7;
          uVar2 = (ulonglong)*puVar3 + 1;
          uVar6 = (ulonglong)*(byte *)((longlong)&pCVar11->_padding_ + 7);
        } while (uVar2 == uVar6);
      }
      pCVar9 = pCVar11->edges_[uVar2];
      uVar5 = pCVar9->length;
    } while (uVar5 <= param_1);
  }
  uVar1 = (uchar)uVar2;
  lVar4 = (longlong)iVar10;
  if (0 < iVar10) {
    ppCVar7 = this->node_ + lVar4;
    pCVar8 = pCVar9;
    do {
      this->index_[lVar4] = (uchar)uVar2;
      ppCVar7[-1] = (CordRepBtree *)pCVar8;
      ppCVar7 = ppCVar7 + -1;
      uVar2 = (ulonglong)pCVar8->storage[1];
      lVar4 = lVar4 + -1;
      pCVar9 = *(CordRep **)(pCVar8[1].storage + uVar2 * 8 + -0xd);
      puVar3 = pCVar8[1].storage + uVar2 * 8 + -0xd;
      uVar5 = pCVar9->length;
      if (uVar5 <= param_1) {
        do {
          pCVar9 = *(CordRep **)(puVar3 + 8);
          puVar3 = puVar3 + 8;
          param_1 = param_1 - uVar5;
          uVar2 = uVar2 + 1;
          uVar5 = pCVar9->length;
        } while (uVar5 <= param_1);
      }
      uVar1 = (uchar)uVar2;
      pCVar8 = pCVar9;
    } while (0 < lVar4);
  }
  this->index_[0] = uVar1;
  __return_storage_ptr__->edge = pCVar9;
LAB_1501d0eb1:
  __return_storage_ptr__->offset = param_1;
  return __return_storage_ptr__;
}

// FUN_1501d0ee0 @ 1501d0ee0

longlong * FUN_1501d0ee0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_3 == 0) {
    return (longlong *)0x0;
  }
  if (param_3 == *param_1) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 2;
    UNLOCK();
    return param_1;
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    param_2 = param_2 + param_1[2];
    param_1 = (longlong *)param_1[3];
  }
  plVar1 = operator_new(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *(undefined4 *)(plVar1 + 1) = 2;
  }
  *plVar1 = param_3;
  *(undefined1 *)((longlong)plVar1 + 0xc) = 1;
  plVar1[2] = param_2;
  LOCK();
  *(int *)(param_1 + 1) = (int)param_1[1] + 2;
  UNLOCK();
  plVar1[3] = (longlong)param_1;
  return plVar1;
}

