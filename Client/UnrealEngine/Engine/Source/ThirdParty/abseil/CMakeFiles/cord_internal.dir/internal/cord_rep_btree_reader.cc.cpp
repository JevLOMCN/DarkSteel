// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 2

// Current @ 1501d0550

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Current(void)const __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Current(CordRepBtreeNavigator *this)

{
  return this->node_[0]->edges_[this->index_[0]];
}

// Read @ 1501d0570

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::Read(unsigned __int64,unsigned
   __int64,struct absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::Read
          (CordRepBtreeReader *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,__uint64 param_1,
          __uint64 param_2,CordRep **param_3)

{
  uchar *puVar1;
  CordRep *pCVar2;
  ulong64 uVar3;
  byte bVar4;
  CordRep *pCVar5;
  CordRep *pCVar6;
  ulong64 uVar7;
  CordRepBtree *pCVar8;
  CordRep *pCVar9;
  ulonglong uVar10;
  CordRep *pCVar11;
  CordRepBtree **ppCVar12;
  uint uVar13;
  ReadResult local_38;
  uchar *local_28;
  ulonglong local_20;
  CordRep *pCVar14;
  
  pCVar11 = (CordRep *)0x0;
  if (param_2 == 0) {
    pCVar8 = (this->navigator_).node_[0];
    ppCVar12 = (this->navigator_).node_;
    bVar4 = (this->navigator_).index_[0];
    pCVar2 = pCVar11;
    if ((ulonglong)bVar4 == (ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 7) - 1) {
      pCVar6 = pCVar11;
      pCVar14 = pCVar11;
      do {
        pCVar5 = pCVar6;
        uVar13 = (int)pCVar14 + 1;
        pCVar14 = (CordRep *)(ulonglong)uVar13;
        ppCVar12 = ppCVar12 + 1;
        pCVar6 = (CordRep *)((longlong)&pCVar5->length + 1);
        pCVar9 = pCVar11;
        if ((longlong)(this->navigator_).height_ < (longlong)pCVar6) goto LAB_1501d065b;
        pCVar8 = *ppCVar12;
        uVar10 = (ulonglong)(this->navigator_).index_[(longlong)pCVar6] + 1;
      } while (uVar10 == *(byte *)((longlong)&pCVar8->_padding_ + 7));
      ppCVar12 = (this->navigator_).node_ + (longlong)((longlong)&pCVar5->length + 1);
      (this->navigator_).index_[(int)uVar13] = (uchar)uVar10;
      puVar1 = (this->navigator_).index_ + (longlong)pCVar6;
      do {
        pCVar8 = (CordRepBtree *)pCVar8->edges_[uVar10];
        ppCVar12 = ppCVar12 + -1;
        *ppCVar12 = pCVar8;
        puVar1 = puVar1 + -1;
        pCVar6 = (CordRep *)(pCVar6[-1].storage + 2);
        uVar10 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar8->_padding_ + 1) + 2);
        *puVar1 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar8->_padding_ + 1) + 2);
      } while (0 < (longlong)pCVar6);
      pCVar9 = pCVar8->edges_[uVar10];
    }
    else {
      bVar4 = bVar4 + 1;
      (this->navigator_).index_[0] = bVar4;
      pCVar9 = pCVar8->edges_[bVar4];
    }
  }
  else {
    pCVar9 = (this->navigator_).node_[0]->edges_[(this->navigator_).index_[0]];
    pCVar2 = (CordRep *)(pCVar9->length - param_2);
  }
LAB_1501d065b:
  CordRepBtreeNavigator::Read(&this->navigator_,&local_38,(__uint64)pCVar2,param_1);
  *param_3 = local_38.tree;
  if (param_1 < param_2) {
    local_20 = pCVar9->length;
    if (pCVar9->tag == '\x01') {
      pCVar11 = (CordRep *)pCVar9[1].length;
      pCVar9 = *(CordRep **)&pCVar9[1].refcount;
    }
    if (pCVar9->tag < 6) {
      local_28 = (uchar *)pCVar9[1].length;
    }
    else {
      local_28 = pCVar9->storage;
    }
    local_28 = local_28 + (longlong)pCVar11;
    if (local_20 < local_38.n) {
LAB_1501d0790:
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    uVar7 = local_20 - local_38.n;
  }
  else {
    uVar10 = (param_1 - local_38.n) - param_2;
    if (this->remaining_ <= uVar10) {
      this->remaining_ = 0;
      __return_storage_ptr__->_Mydata = (char *)0x0;
      __return_storage_ptr__->_Mysize = 0;
      return __return_storage_ptr__;
    }
    pCVar2 = (this->navigator_).node_[0]->edges_[(this->navigator_).index_[0]];
    this->remaining_ = (this->remaining_ - pCVar2->length) - uVar10;
    local_20 = pCVar2->length;
    if (pCVar2->tag == '\x01') {
      pCVar11 = (CordRep *)pCVar2[1].length;
      pCVar2 = *(CordRep **)&pCVar2[1].refcount;
    }
    if (pCVar2->tag < 6) {
      local_28 = (uchar *)pCVar2[1].length;
    }
    else {
      local_28 = pCVar2->storage;
    }
    local_28 = local_28 + (longlong)pCVar11;
    if (local_20 < local_38.n) goto LAB_1501d0790;
    uVar7 = local_20 - local_38.n;
  }
  __return_storage_ptr__->_Mydata = (char *)(local_28 + local_38.n);
  uVar3 = 0xffffffffffffffff;
  if (uVar7 != 0xffffffffffffffff) {
    uVar3 = uVar7;
  }
  __return_storage_ptr__->_Mysize = uVar3;
  return __return_storage_ptr__;
}

