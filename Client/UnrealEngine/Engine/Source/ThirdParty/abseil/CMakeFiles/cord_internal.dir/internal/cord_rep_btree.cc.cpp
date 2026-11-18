// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 99

// Hex<absl::lts_20240722::cord_internal::CordRep_const_> @ 1501c9c50

/* public: __cdecl absl::lts_20240722::Hex::Hex<struct absl::lts_20240722::cord_internal::CordRep
   const >(struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,enum
   absl::lts_20240722::PadSpec) __ptr64 */

Hex * __thiscall
absl::lts_20240722::Hex::Hex<absl::lts_20240722::cord_internal::CordRep_const_>
          (Hex *this,CordRep *param_1,PadSpec param_2)

{
  Hex HVar1;
  
  *(CordRep **)this = param_1;
  if (param_2 == kNoPad) {
    HVar1 = (Hex)0x1;
  }
  else {
    HVar1 = (Hex)(param_2 - 0x40);
    if (param_2 < kSpacePad2) {
      HVar1 = (Hex)param_2;
    }
  }
  this[8] = HVar1;
  HVar1 = (Hex)0x30;
  if (0x41 < param_2) {
    HVar1 = (Hex)0x20;
  }
  this[9] = HVar1;
  return this;
}

// Add<1> @ 1501c9cf0

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Add<1>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Add<1>(CordRepBtree *this,CordRep *param_1)

{
  byte bVar1;
  CordRep **ppCVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  if (uVar4 != 0) {
    lVar3 = *(byte *)((longlong)&this->_padding_ + 7) - uVar4;
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
    *(char *)((longlong)&this->_padding_ + 7) = (char)lVar3;
    if (lVar3 != 0) {
      ppCVar2 = this->edges_;
      do {
        *ppCVar2 = ppCVar2[uVar4];
        ppCVar2 = ppCVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 7);
  *(byte *)((longlong)&this->_padding_ + 7) = bVar1 + 1;
  this->edges_[bVar1] = param_1;
  return;
}

// Add<1> @ 1501c9d50

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Add<1>(class
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const>)
   __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Add<1>(CordRepBtree *this,longlong *param_2)

{
  undefined8 *puVar1;
  CordRep *pCVar2;
  CordRep **ppCVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  if (uVar7 != 0) {
    lVar6 = *(byte *)((longlong)&this->_padding_ + 7) - uVar7;
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
    *(char *)((longlong)&this->_padding_ + 7) = (char)lVar6;
    if (lVar6 != 0) {
      ppCVar3 = this->edges_;
      do {
        *ppCVar3 = ppCVar3[uVar7];
        ppCVar3 = ppCVar3 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  puVar4 = (undefined8 *)*param_2;
  bVar5 = *(byte *)((longlong)&this->_padding_ + 7);
  uVar7 = (ulonglong)bVar5;
  puVar1 = puVar4 + param_2[1];
  if (puVar4 != puVar1) {
    ppCVar3 = this->edges_ + uVar7;
    do {
      pCVar2 = (CordRep *)*puVar4;
      puVar4 = puVar4 + 1;
      *ppCVar3 = pCVar2;
      ppCVar3 = ppCVar3 + 1;
      uVar7 = uVar7 + 1;
      bVar5 = (byte)uVar7;
    } while (puVar4 != puVar1);
  }
  *(byte *)((longlong)&this->_padding_ + 7) = bVar5;
  return;
}

// Add<0> @ 1501c9de0

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Add<0>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Add<0>(CordRepBtree *this,CordRep *param_1)

{
  char *pcVar1;
  CordRep **ppCVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 6 - (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  if (lVar5 != 0) {
    uVar3 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6) + lVar5;
    *(undefined1 *)((longlong)&this->_padding_ + 7) = 6;
    *(char *)((longlong)&this->_padding_ + 6) = (char)uVar3;
    if (uVar3 < 6) {
      ppCVar2 = this->edges_ + 5;
      lVar4 = 6 - uVar3;
      do {
        *ppCVar2 = ppCVar2[-lVar5];
        ppCVar2 = ppCVar2 + -1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  pcVar1 = (char *)((longlong)&this->_padding_ + 6);
  *pcVar1 = *pcVar1 + -1;
  this->edges_[*(byte *)((longlong)&this->_padding_ + 6)] = param_1;
  return;
}

// Add<0> @ 1501c9e50

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Add<0>(class
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const>)
   __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Add<0>(CordRepBtree *this,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  CordRep **ppCVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = 6 - (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  if (lVar8 != 0) {
    uVar3 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6) + lVar8;
    *(undefined1 *)((longlong)&this->_padding_ + 7) = 6;
    *(char *)((longlong)&this->_padding_ + 6) = (char)uVar3;
    if (uVar3 < 6) {
      ppCVar5 = this->edges_ + 5;
      lVar7 = 6 - uVar3;
      do {
        *ppCVar5 = ppCVar5[-lVar8];
        ppCVar5 = ppCVar5 + -1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar8 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  lVar7 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6) - lVar8;
  *(char *)((longlong)&this->_padding_ + 6) = (char)lVar7;
  puVar1 = puVar4 + lVar8;
  if (puVar4 != puVar1) {
    puVar6 = (undefined8 *)((longlong)this + (lVar7 + 2) * 8);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar1);
  }
  return;
}

// AddCordRep<1> @ 1501c9ef0

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
          (CordRepBtree *param_1,CordRep *param_2)

{
  byte bVar1;
  byte bVar2;
  __uint64 _Var3;
  CordRepBtree *pCVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  OpResult local_88;
  int local_78 [2];
  undefined8 auStack_70 [13];
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar6 = 0;
  _Var3 = param_2->length;
  uVar7 = 0;
  pCVar4 = param_1;
  uVar8 = uVar6;
  if (bVar1 != 0) {
    do {
      uVar7 = (uint)uVar8;
      if ((int)pCVar4->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar4->_padding_ + 7);
      uVar7 = uVar7 + 1;
      auStack_70[uVar6] = pCVar4;
      uVar6 = uVar6 + 1;
      pCVar4 = (CordRepBtree *)pCVar4->edges_[(ulonglong)bVar2 - 1];
      uVar8 = (ulonglong)uVar7;
    } while ((longlong)uVar6 < (longlong)(ulonglong)bVar1);
  }
  local_78[0] = ((int)pCVar4->_padding_ == 2) + uVar7;
  for (lVar5 = (longlong)(int)uVar7; lVar5 < (longlong)(ulonglong)bVar1; lVar5 = lVar5 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar4->_padding_ + 7);
    auStack_70[lVar5] = pCVar4;
    pCVar4 = (CordRepBtree *)pCVar4->edges_[(ulonglong)bVar2 - 1];
  }
  AddEdge<1>(pCVar4,&local_88,(int)(uint)bVar1 < local_78[0],param_2,_Var3);
  pCVar4 = (CordRepBtree *)FUN_1501cc340(local_78,param_1,(uint)bVar1,_Var3,&local_88);
  return pCVar4;
}

// AddCordRep<0> @ 1501c9fe0

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<0>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<0>
          (CordRepBtree *param_1,CordRep *param_2)

{
  byte bVar1;
  byte bVar2;
  __uint64 _Var3;
  CordRepBtree *pCVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  OpResult local_88;
  int local_78 [2];
  undefined8 auStack_70 [13];
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar6 = 0;
  _Var3 = param_2->length;
  uVar7 = 0;
  pCVar4 = param_1;
  uVar8 = uVar6;
  if (bVar1 != 0) {
    do {
      uVar7 = (uint)uVar8;
      if ((int)pCVar4->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar4->_padding_ + 6);
      uVar7 = uVar7 + 1;
      auStack_70[uVar6] = pCVar4;
      uVar6 = uVar6 + 1;
      pCVar4 = (CordRepBtree *)pCVar4->edges_[bVar2];
      uVar8 = (ulonglong)uVar7;
    } while ((longlong)uVar6 < (longlong)(ulonglong)bVar1);
  }
  local_78[0] = ((int)pCVar4->_padding_ == 2) + uVar7;
  for (lVar5 = (longlong)(int)uVar7; lVar5 < (longlong)(ulonglong)bVar1; lVar5 = lVar5 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar4->_padding_ + 6);
    auStack_70[lVar5] = pCVar4;
    pCVar4 = (CordRepBtree *)pCVar4->edges_[bVar2];
  }
  AddEdge<0>(pCVar4,&local_88,(int)(uint)bVar1 < local_78[0],param_2,_Var3);
  pCVar4 = (CordRepBtree *)FUN_1501cc5c0(local_78,param_1,(uint)bVar1,_Var3,&local_88);
  return pCVar4;
}

// AddData<1> @ 1501ca0d0

/* private: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddData<1>(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::AddData<1>
          (CordRepBtree *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,longlong *param_3,
          longlong param_4)

{
  char *pcVar1;
  void *_Src;
  int iVar2;
  CordRep *pCVar3;
  ulong64 uVar4;
  CordRep **ppCVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  if (uVar9 != 0) {
    lVar10 = *(byte *)((longlong)&this->_padding_ + 7) - uVar9;
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
    *(char *)((longlong)&this->_padding_ + 7) = (char)lVar10;
    if (lVar10 != 0) {
      ppCVar5 = this->edges_;
      do {
        *ppCVar5 = ppCVar5[uVar9];
        ppCVar5 = ppCVar5 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  uVar9 = param_3[1];
  do {
    uVar6 = uVar9 + param_4;
    if (uVar6 < 0x14) {
      uVar6 = 0x20;
      lVar10 = 8;
    }
    else {
      if (uVar6 < 0xff4) {
        uVar6 = uVar6 + 0xd;
        if (uVar6 < 0x201) {
          lVar10 = 8;
          goto LAB_1501ca172;
        }
      }
      else {
        uVar6 = 0x1000;
      }
      lVar10 = 0x1000;
      if (uVar6 < 0x2001) {
        lVar10 = 0x40;
      }
    }
LAB_1501ca172:
    uVar6 = (uVar6 - 1) + lVar10 & -lVar10;
    pCVar3 = ::operator_new(uVar6);
    pCVar3->length = 0;
    pCVar3->refcount = (atomic<int>)0x0;
    pCVar3->tag = '\0';
    pCVar3->storage[0] = '\0';
    pCVar3->storage[1] = '\0';
    pCVar3->storage[2] = '\0';
    (pCVar3->refcount).count_ = (atomic<int>)0x2;
    if (uVar6 < 0x201) {
      bVar8 = (char)(uVar6 >> 3) + 2;
    }
    else if (uVar6 < 0x2001) {
      bVar8 = (char)(uVar6 >> 6) + 0x3a;
    }
    else {
      bVar8 = (char)(uVar6 >> 0xc) + 0xb8;
    }
    pCVar3->tag = bVar8;
    if (bVar8 < 0x43) {
      iVar2 = (uint)bVar8 * 8 + -0x10;
    }
    else if (bVar8 < 0xbb) {
      iVar2 = (bVar8 - 0x3a) * 0x40;
    }
    else {
      iVar2 = (bVar8 - 0xb8) * 0x1000;
    }
    _Src = (void *)*param_3;
    if ((longlong)iVar2 - 0xdU < uVar9) {
      uVar9 = (longlong)iVar2 - 0xdU;
    }
    pCVar3->length = uVar9;
    bVar8 = *(byte *)((longlong)&this->_padding_ + 7);
    *(byte *)((longlong)&this->_padding_ + 7) = bVar8 + 1;
    this->edges_[bVar8] = pCVar3;
    memcpy(pCVar3->storage,_Src,uVar9);
    if ((ulonglong)param_3[1] < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    uVar7 = param_3[1] - uVar9;
    pcVar1 = (char *)((longlong)_Src + uVar9);
    uVar4 = 0xffffffffffffffff;
    if (uVar7 != 0xffffffffffffffff) {
      uVar4 = uVar7;
    }
    *param_3 = (longlong)pcVar1;
    param_3[1] = uVar4;
    uVar9 = param_3[1];
    if ((uVar9 == 0) || (*(char *)((longlong)&this->_padding_ + 7) == '\x06')) {
      __return_storage_ptr__->_Mydata = pcVar1;
      __return_storage_ptr__->_Mysize = uVar4;
      return __return_storage_ptr__;
    }
  } while( true );
}

// AddData<1> @ 1501ca2b0

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddData<1>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AddData<1>
          (CordRepBtree *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          __uint64 param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  CordRepBtree *pCVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulong64 uVar8;
  CordRepBtree *pCVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  OpResult local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  CordRepBtree *local_b8;
  ulong64 uStack_b0;
  int local_a8 [2];
  undefined8 auStack_a0 [13];
  undefined1 local_38 [32];
  
  uVar6 = param_2->_Mysize;
  if (uVar6 != 0) {
    iVar12 = 0;
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
    uVar11 = (ulonglong)bVar1;
    pCVar5 = param_1;
    if (bVar1 != 0) {
      lVar7 = 0;
      do {
        if ((int)pCVar5->_padding_ != 2) break;
        bVar2 = *(byte *)((longlong)&pCVar5->_padding_ + 7);
        iVar12 = iVar12 + 1;
        auStack_a0[lVar7] = pCVar5;
        lVar7 = lVar7 + 1;
        pCVar5 = (CordRepBtree *)pCVar5->edges_[(ulonglong)bVar2 - 1];
      } while (lVar7 < (longlong)uVar11);
    }
    local_a8[0] = (uint)((int)pCVar5->_padding_ == 2) + iVar12;
    for (lVar7 = (longlong)iVar12; lVar7 < (longlong)uVar11; lVar7 = lVar7 + 1) {
      bVar2 = *(byte *)((longlong)&pCVar5->_padding_ + 7);
      auStack_a0[lVar7] = pCVar5;
      pCVar5 = (CordRepBtree *)pCVar5->edges_[(ulonglong)bVar2 - 1];
    }
    if ((ulonglong)*(byte *)((longlong)&pCVar5->_padding_ + 7) -
        (ulonglong)*(byte *)((longlong)&pCVar5->_padding_ + 6) < 6) {
      ToOpResult(pCVar5,&local_d8,(int)(uint)bVar1 < local_a8[0]);
      local_c8._Mydata = param_2->_Mydata;
      local_c8._Mysize = param_2->_Mysize;
      pbVar4 = AddData<1>(local_d8.tree,local_38,&local_c8,param_3);
      uVar8 = pbVar4->_Mysize;
      param_2->_Mydata = pbVar4->_Mydata;
      param_2->_Mysize = uVar8;
      if (param_2->_Mysize == 0) {
        (local_d8.tree)->_padding_ = (local_d8.tree)->_padding_ + uVar6;
        pCVar5 = (CordRepBtree *)FUN_1501cc340();
        return pCVar5;
      }
      lVar7 = uVar6 - param_2->_Mysize;
      (local_d8.tree)->_padding_ = (local_d8.tree)->_padding_ + lVar7;
      param_1 = (CordRepBtree *)FUN_1501cbe00(local_a8,param_1,(uint)bVar1,lVar7,&local_c8);
      local_a8[0] = bVar1 + 1;
    }
    local_c8._Mydata = param_2->_Mydata;
    local_c8._Mysize = param_2->_Mysize;
    local_d8.tree = NewLeaf<1>(&local_c8,param_3);
    if ((local_d8.tree)->_padding_ != param_2->_Mysize) {
      do {
        local_d8.action = kPopped;
        uVar3 = (local_d8.tree)->_padding_;
        if (param_2->_Mysize < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<char,std::char_traits<char>_>::_Xran();
        }
        uVar8 = param_2->_Mysize - uVar3;
        local_c8._Mysize = CONCAT44(local_d8._12_4_,2);
        pCVar5 = (CordRepBtree *)(param_2->_Mydata + uVar3);
        uVar6 = 0xffffffffffffffff;
        if (uVar8 != 0xffffffffffffffff) {
          uVar6 = uVar8;
        }
        param_2->_Mydata = (char *)pCVar5;
        param_2->_Mysize = uVar6;
        local_c8._Mydata = (char *)local_d8.tree;
        local_b8 = pCVar5;
        uStack_b0 = uVar6;
        param_1 = (CordRepBtree *)FUN_1501cc340(local_a8,param_1,uVar11,uVar3,&local_c8);
        uVar10 = 0;
        bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
        uVar11 = (ulonglong)bVar1;
        lVar7 = 0;
        if (bVar1 != 0) {
          uVar10 = (uint)bVar1;
          pCVar9 = param_1;
          do {
            bVar1 = *(byte *)((longlong)&pCVar9->_padding_ + 7);
            auStack_a0[lVar7] = pCVar9;
            lVar7 = lVar7 + 1;
            pCVar9 = (CordRepBtree *)pCVar9->edges_[(ulonglong)bVar1 - 1];
          } while (lVar7 < (longlong)uVar11);
        }
        local_a8[0] = uVar10 + 1;
        local_c8._Mydata = (char *)pCVar5;
        local_c8._Mysize = uVar6;
        local_d8.tree = NewLeaf<1>(&local_c8,param_3);
      } while ((local_d8.tree)->_padding_ != param_2->_Mysize);
    }
    local_d8.action = kPopped;
    uStack_b0 = CONCAT44(local_d8._12_4_,2);
    local_b8 = local_d8.tree;
    param_1 = (CordRepBtree *)
              FUN_1501cc340(local_a8,param_1,uVar11,(local_d8.tree)->_padding_,&local_b8);
  }
  return param_1;
}

// AddData<0> @ 1501ca560

/* private: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddData<0>(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::AddData<0>
          (CordRepBtree *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,longlong *param_3,
          longlong param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  CordRep *pCVar5;
  CordRep **ppCVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = 6 - (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  if (lVar11 != 0) {
    uVar4 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6) + lVar11;
    *(undefined1 *)((longlong)&this->_padding_ + 7) = 6;
    *(char *)((longlong)&this->_padding_ + 6) = (char)uVar4;
    if (uVar4 < 6) {
      ppCVar6 = this->edges_ + 5;
      lVar10 = 6 - uVar4;
      do {
        *ppCVar6 = ppCVar6[-lVar11];
        ppCVar6 = ppCVar6 + -1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  uVar4 = param_3[1];
  do {
    uVar7 = uVar4 + param_4;
    if (uVar7 < 0x14) {
      uVar7 = 0x20;
      lVar11 = 8;
    }
    else {
      if (uVar7 < 0xff4) {
        uVar7 = uVar7 + 0xd;
        if (uVar7 < 0x201) {
          lVar11 = 8;
          goto LAB_1501ca622;
        }
      }
      else {
        uVar7 = 0x1000;
      }
      lVar11 = 0x1000;
      if (uVar7 < 0x2001) {
        lVar11 = 0x40;
      }
    }
LAB_1501ca622:
    uVar7 = (uVar7 - 1) + lVar11 & -lVar11;
    pCVar5 = ::operator_new(uVar7);
    pCVar5->length = 0;
    pCVar5->refcount = (atomic<int>)0x0;
    pCVar5->tag = '\0';
    pCVar5->storage[0] = '\0';
    pCVar5->storage[1] = '\0';
    pCVar5->storage[2] = '\0';
    (pCVar5->refcount).count_ = (atomic<int>)0x2;
    if (uVar7 < 0x201) {
      bVar8 = (char)(uVar7 >> 3) + 2;
    }
    else if (uVar7 < 0x2001) {
      bVar8 = (char)(uVar7 >> 6) + 0x3a;
    }
    else {
      bVar8 = (char)(uVar7 >> 0xc) + 0xb8;
    }
    pCVar5->tag = bVar8;
    if (bVar8 < 0x43) {
      iVar3 = (uint)bVar8 * 8 + -0x10;
    }
    else if (bVar8 < 0xbb) {
      iVar3 = (bVar8 - 0x3a) * 0x40;
    }
    else {
      iVar3 = (bVar8 - 0xb8) * 0x1000;
    }
    uVar7 = param_3[1];
    pcVar2 = (char *)*param_3;
    if ((longlong)iVar3 - 0xdU < uVar4) {
      uVar4 = (longlong)iVar3 - 0xdU;
    }
    pCVar5->length = uVar4;
    uVar9 = uVar7 - uVar4;
    pcVar1 = (char *)((longlong)&this->_padding_ + 6);
    *pcVar1 = *pcVar1 + -1;
    this->edges_[*(byte *)((longlong)&this->_padding_ + 6)] = pCVar5;
    memcpy(pCVar5->storage,pcVar2 + uVar9,uVar4);
    if (uVar7 < uVar9) {
      uVar9 = uVar7;
    }
    *param_3 = (longlong)pcVar2;
    param_3[1] = uVar9;
    uVar4 = param_3[1];
    if ((uVar4 == 0) || (*(char *)((longlong)&this->_padding_ + 6) == '\0')) {
      __return_storage_ptr__->_Mydata = pcVar2;
      __return_storage_ptr__->_Mysize = uVar9;
      return __return_storage_ptr__;
    }
  } while( true );
}

// AddData<0> @ 1501ca750

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddData<0>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AddData<0>
          (CordRepBtree *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          __uint64 param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> *pbVar6;
  CordRepBtree *pCVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulong64 uVar13;
  OpResult local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  int local_a8 [2];
  undefined8 auStack_a0 [13];
  undefined1 local_38 [32];
  
  uVar13 = param_2->_Mysize;
  if (uVar13 == 0) {
    return param_1;
  }
  iVar12 = 0;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar11 = (ulonglong)bVar1;
  pCVar7 = param_1;
  if (bVar1 != 0) {
    lVar9 = 0;
    do {
      if ((int)pCVar7->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar7->_padding_ + 6);
      iVar12 = iVar12 + 1;
      auStack_a0[lVar9] = pCVar7;
      lVar9 = lVar9 + 1;
      pCVar7 = (CordRepBtree *)pCVar7->edges_[bVar2];
    } while (lVar9 < (longlong)uVar11);
  }
  local_a8[0] = (uint)((int)pCVar7->_padding_ == 2) + iVar12;
  for (lVar9 = (longlong)iVar12; lVar9 < (longlong)uVar11; lVar9 = lVar9 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar7->_padding_ + 6);
    auStack_a0[lVar9] = pCVar7;
    pCVar7 = (CordRepBtree *)pCVar7->edges_[bVar2];
  }
  if ((ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 7) -
      (ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 6) < 6) {
    uVar10 = (uint)bVar1;
    ToOpResult(pCVar7,&local_d8,(int)uVar10 < local_a8[0]);
    pCVar7 = local_d8.tree;
    local_c8._Mydata = param_2->_Mydata;
    local_c8._Mysize = param_2->_Mysize;
    pbVar6 = AddData<0>(local_d8.tree,local_38,&local_c8,param_3);
    uVar4 = pbVar6->_Mysize;
    param_2->_Mydata = pbVar6->_Mydata;
    param_2->_Mysize = uVar4;
    if (param_2->_Mysize == 0) {
      pCVar7->_padding_ = pCVar7->_padding_ + uVar13;
      uVar11 = (ulonglong)uVar10;
      uStack_b4 = local_d8.tree._4_4_;
      pCVar7 = local_d8.tree;
      goto LAB_1501ca992;
    }
    lVar9 = uVar13 - param_2->_Mysize;
    pCVar7->_padding_ = pCVar7->_padding_ + lVar9;
    param_1 = (CordRepBtree *)FUN_1501cc090(local_a8,param_1,(ulonglong)uVar10,lVar9,&local_c8);
    local_a8[0] = bVar1 + 1;
  }
  local_c8._Mydata = param_2->_Mydata;
  local_c8._Mysize = param_2->_Mysize;
  pCVar7 = NewLeaf<0>(&local_c8,param_3);
  if (pCVar7->_padding_ != param_2->_Mysize) {
    do {
      local_d8.action = kPopped;
      uVar3 = param_2->_Mysize;
      local_b8 = *(undefined4 *)&param_2->_Mydata;
      uStack_b4 = *(undefined4 *)((longlong)&param_2->_Mydata + 4);
      pcVar5 = param_2->_Mydata;
      lVar9 = pCVar7->_padding_;
      uVar8 = uVar3 - lVar9;
      local_c8._Mysize = CONCAT44(local_d8._12_4_,2);
      if (uVar3 < uVar8) {
        uVar8 = uVar3;
      }
      param_2->_Mydata = pcVar5;
      param_2->_Mysize = uVar8;
      local_d8.tree = pCVar7;
      local_c8._Mydata = (char *)pCVar7;
      uStack_b0 = uVar8;
      param_1 = (CordRepBtree *)FUN_1501cc5c0(local_a8,param_1,uVar11,lVar9,&local_c8);
      uVar10 = 0;
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
      uVar11 = (ulonglong)bVar1;
      lVar9 = 0;
      if (bVar1 != 0) {
        uVar10 = (uint)bVar1;
        pCVar7 = param_1;
        do {
          bVar1 = *(byte *)((longlong)&pCVar7->_padding_ + 6);
          auStack_a0[lVar9] = pCVar7;
          lVar9 = lVar9 + 1;
          pCVar7 = (CordRepBtree *)pCVar7->edges_[bVar1];
        } while (lVar9 < (longlong)uVar11);
      }
      local_a8[0] = uVar10 + 1;
      local_c8._Mydata = pcVar5;
      local_c8._Mysize = uVar8;
      pCVar7 = NewLeaf<0>(&local_c8,param_3);
    } while (pCVar7->_padding_ != param_2->_Mysize);
  }
  local_d8.action = kPopped;
  local_d8.tree._0_4_ = SUB84(pCVar7,0);
  local_d8.tree._4_4_ = (undefined4)((ulonglong)pCVar7 >> 0x20);
  uVar13 = pCVar7->_padding_;
  uStack_b4 = local_d8.tree._4_4_;
LAB_1501ca992:
  local_d8.tree = pCVar7;
  uStack_b0 = CONCAT44(local_d8._12_4_,local_d8.action);
  local_b8 = local_d8.tree._0_4_;
  pCVar7 = (CordRepBtree *)FUN_1501cc5c0(local_a8,param_1,uVar11,uVar13,&local_b8);
  return pCVar7;
}

// AddEdge<1> @ 1501ca9e0

/* public: struct absl::lts_20240722::cord_internal::CordRepBtree::OpResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<1>(bool,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64) __ptr64 */

OpResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<1>
          (CordRepBtree *this,OpResult *__return_storage_ptr__,bool param_1,CordRep *param_2,
          __uint64 param_3)

{
  byte bVar1;
  CordRepBtree *pCVar2;
  CordRep **ppCVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  OpResult local_18;
  
  if (5 < (ulonglong)*(byte *)((longlong)&this->_padding_ + 7) -
          (ulonglong)*(byte *)((longlong)&this->_padding_ + 6)) {
    pCVar2 = ::operator_new(0x40);
    if (pCVar2 == (CordRepBtree *)0x0) {
      pCVar2 = (CordRepBtree *)0x0;
    }
    else {
      *(undefined4 *)&pCVar2->_padding_ = 2;
    }
    if (param_2->tag == '\x03') {
      cVar4 = param_2->storage[0] + '\x01';
    }
    else {
      cVar4 = '\0';
    }
    pCVar2->_padding_ = param_2->length;
    *(char *)((longlong)&pCVar2->_padding_ + 5) = cVar4;
    *(undefined2 *)((longlong)&pCVar2->_padding_ + 6) = 0x100;
    pCVar2->edges_[0] = param_2;
    *(undefined1 *)((longlong)&pCVar2->_padding_ + 4) = 3;
    __return_storage_ptr__->tree = pCVar2;
    __return_storage_ptr__->action = kPopped;
    return __return_storage_ptr__;
  }
  ToOpResult(this,&local_18,param_1);
  uVar6 = (ulonglong)*(byte *)((longlong)&(local_18.tree)->_padding_ + 6);
  if (uVar6 != 0) {
    lVar5 = *(byte *)((longlong)&(local_18.tree)->_padding_ + 7) - uVar6;
    *(undefined1 *)((longlong)&(local_18.tree)->_padding_ + 6) = 0;
    *(char *)((longlong)&(local_18.tree)->_padding_ + 7) = (char)lVar5;
    if (lVar5 != 0) {
      ppCVar3 = (local_18.tree)->edges_;
      do {
        *ppCVar3 = ppCVar3[uVar6];
        ppCVar3 = ppCVar3 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  bVar1 = *(byte *)((longlong)&(local_18.tree)->_padding_ + 7);
  *(byte *)((longlong)&(local_18.tree)->_padding_ + 7) = bVar1 + 1;
  (local_18.tree)->edges_[bVar1] = param_2;
  (local_18.tree)->_padding_ = (local_18.tree)->_padding_ + param_3;
  __return_storage_ptr__->tree = local_18.tree;
  __return_storage_ptr__->action = local_18.action;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_18._12_4_;
  return __return_storage_ptr__;
}

// AddEdge<0> @ 1501caaf0

/* public: struct absl::lts_20240722::cord_internal::CordRepBtree::OpResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<0>(bool,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64) __ptr64 */

OpResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<0>
          (CordRepBtree *this,OpResult *__return_storage_ptr__,bool param_1,CordRep *param_2,
          __uint64 param_3)

{
  char *pcVar1;
  CordRepBtree *pCVar2;
  ulonglong uVar3;
  CordRep **ppCVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  OpResult local_18;
  
  if (5 < (ulonglong)*(byte *)((longlong)&this->_padding_ + 7) -
          (ulonglong)*(byte *)((longlong)&this->_padding_ + 6)) {
    pCVar2 = ::operator_new(0x40);
    if (pCVar2 == (CordRepBtree *)0x0) {
      pCVar2 = (CordRepBtree *)0x0;
    }
    else {
      *(undefined4 *)&pCVar2->_padding_ = 2;
    }
    if (param_2->tag == '\x03') {
      cVar5 = param_2->storage[0] + '\x01';
    }
    else {
      cVar5 = '\0';
    }
    pCVar2->_padding_ = param_2->length;
    *(char *)((longlong)&pCVar2->_padding_ + 5) = cVar5;
    *(undefined2 *)((longlong)&pCVar2->_padding_ + 6) = 0x100;
    pCVar2->edges_[0] = param_2;
    *(undefined1 *)((longlong)&pCVar2->_padding_ + 4) = 3;
    __return_storage_ptr__->tree = pCVar2;
    __return_storage_ptr__->action = kPopped;
    return __return_storage_ptr__;
  }
  ToOpResult(this,&local_18,param_1);
  lVar7 = 6 - (ulonglong)*(byte *)((longlong)&(local_18.tree)->_padding_ + 7);
  if (lVar7 != 0) {
    uVar3 = (ulonglong)*(byte *)((longlong)&(local_18.tree)->_padding_ + 6) + lVar7;
    *(undefined1 *)((longlong)&(local_18.tree)->_padding_ + 7) = 6;
    *(char *)((longlong)&(local_18.tree)->_padding_ + 6) = (char)uVar3;
    if (uVar3 < 6) {
      ppCVar4 = (local_18.tree)->edges_ + 5;
      lVar6 = 6 - uVar3;
      do {
        *ppCVar4 = ppCVar4[-lVar7];
        ppCVar4 = ppCVar4 + -1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  pcVar1 = (char *)((longlong)&(local_18.tree)->_padding_ + 6);
  *pcVar1 = *pcVar1 + -1;
  (local_18.tree)->edges_[*(byte *)((longlong)&(local_18.tree)->_padding_ + 6)] = param_2;
  (local_18.tree)->_padding_ = (local_18.tree)->_padding_ + param_3;
  __return_storage_ptr__->tree = local_18.tree;
  __return_storage_ptr__->action = local_18.action;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_18._12_4_;
  return __return_storage_ptr__;
}

// FUN_1501cac40 @ 1501cac40

longlong * FUN_1501cac40(longlong *param_1,void *param_2,undefined8 *param_3,ulonglong param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  _Src = (void *)*param_3;
  memcpy(param_2,_Src,param_4);
  uVar1 = param_3[1];
  if (param_4 <= uVar1) {
    *param_1 = (longlong)_Src + param_4;
    lVar3 = uVar1 - param_4;
    lVar2 = -1;
    if (lVar3 != -1) {
      lVar2 = lVar3;
    }
    param_1[1] = lVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// FUN_1501cacc0 @ 1501cacc0

longlong * FUN_1501cacc0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 <= (ulonglong)param_2[1]) {
    lVar2 = param_2[1] - param_3;
    lVar1 = -1;
    if (lVar2 != -1) {
      lVar1 = lVar2;
    }
    *param_1 = *param_2 + param_3;
    param_1[1] = lVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// FUN_1501cad10 @ 1501cad10

longlong * FUN_1501cad10(longlong *param_1,void *param_2,longlong *param_3,size_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_3[1];
  lVar2 = *param_3;
  uVar3 = uVar1 - param_4;
  memcpy(param_2,(void *)(lVar2 + uVar3),param_4);
  *param_1 = lVar2;
  if (uVar1 < uVar3) {
    uVar3 = uVar1;
  }
  param_1[1] = uVar3;
  return param_1;
}

// FUN_1501cad80 @ 1501cad80

undefined8 * FUN_1501cad80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[1];
  uVar2 = uVar1 - param_3;
  if (uVar1 < uVar1 - param_3) {
    uVar2 = uVar1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  return param_1;
}

// FUN_1501cadc0 @ 1501cadc0

void FUN_1501cadc0(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0xe) * 8 + 0x10);
  puVar2 = puVar7 + ((ulonglong)*(byte *)((longlong)param_1 + 0xf) -
                    (ulonglong)*(byte *)((longlong)param_1 + 0xe));
  do {
    if (puVar7 == puVar2) {
      operator_delete(param_1,0x40);
      return;
    }
    pvVar5 = (void *)*puVar7;
    if (*(int *)((longlong)pvVar5 + 8) == 2) {
LAB_1501cae1b:
      plVar6 = (longlong *)
               ((longlong)pvVar5 + ((ulonglong)*(byte *)((longlong)pvVar5 + 0xe) + 2) * 8);
      plVar3 = plVar6 + ((ulonglong)*(byte *)((longlong)pvVar5 + 0xf) -
                        (ulonglong)*(byte *)((longlong)pvVar5 + 0xe));
      for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
        if (*(int *)(*plVar6 + 8) == 2) {
LAB_1501cae5b:
          FUN_1501cdb90();
        }
        else {
          LOCK();
          piVar1 = (int *)(*plVar6 + 8);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -2;
          UNLOCK();
          if (iVar4 == 2) goto LAB_1501cae5b;
        }
      }
      operator_delete(pvVar5,0x40);
    }
    else {
      LOCK();
      piVar1 = (int *)((longlong)pvVar5 + 8);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -2;
      UNLOCK();
      if (iVar4 == 2) goto LAB_1501cae1b;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

// FUN_1501caeb0 @ 1501caeb0

void FUN_1501caeb0(void *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  CordRepBtree *pCVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)
            ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0xe) * 8 + 0x10);
  puVar3 = puVar10 + ((ulonglong)*(byte *)((longlong)param_1 + 0xf) -
                     (ulonglong)*(byte *)((longlong)param_1 + 0xe));
  do {
    if (puVar10 == puVar3) {
      operator_delete(param_1,0x40);
      return;
    }
    pvVar6 = (void *)*puVar10;
    if (*(int *)((longlong)pvVar6 + 8) == 2) {
LAB_1501caf0b:
      puVar9 = (undefined8 *)
               ((longlong)pvVar6 + ((ulonglong)*(byte *)((longlong)pvVar6 + 0xe) + 2) * 8);
      puVar4 = puVar9 + ((ulonglong)*(byte *)((longlong)pvVar6 + 0xf) -
                        (ulonglong)*(byte *)((longlong)pvVar6 + 0xe));
      for (; puVar9 != puVar4; puVar9 = puVar9 + 1) {
        pCVar7 = (CordRepBtree *)*puVar9;
        if ((int)pCVar7->_padding_ == 2) {
LAB_1501caf4b:
          absl::lts_20240722::cord_internal::CordRepBtree::Destroy(pCVar7);
        }
        else {
          LOCK();
          plVar2 = &pCVar7->_padding_;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -2;
          UNLOCK();
          if ((int)lVar8 == 2) goto LAB_1501caf4b;
        }
      }
      operator_delete(pvVar6,0x40);
    }
    else {
      LOCK();
      piVar1 = (int *)((longlong)pvVar6 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -2;
      UNLOCK();
      if (iVar5 == 2) goto LAB_1501caf0b;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

// FUN_1501cafa0 @ 1501cafa0

void FUN_1501cafa0(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRepBtree *pCVar3;
  
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
      param_2 = (CordRep *)0x0;
    }
    else {
      param_2 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,param_2);
  *(CordRepBtree **)*param_1 = pCVar3;
  return;
}

// FUN_1501cb010 @ 1501cb010

void FUN_1501cb010(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 *puVar3;
  CordRepBtree *pCVar4;
  char cVar5;
  
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
      param_2 = (CordRep *)0x0;
    }
    else {
      param_2 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  if (*(CordRepBtree **)*param_1 == (CordRepBtree *)0x0) {
    puVar3 = operator_new(0x40);
    if (puVar3 == (ulong64 *)0x0) {
      puVar3 = (ulong64 *)0x0;
    }
    else {
      *(undefined4 *)(puVar3 + 1) = 2;
    }
    if (param_2->tag == '\x03') {
      cVar5 = param_2->storage[0] + '\x01';
    }
    else {
      cVar5 = '\0';
    }
    *puVar3 = param_2->length;
    *(char *)((longlong)puVar3 + 0xd) = cVar5;
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0x100;
    puVar3[2] = (ulong64)param_2;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 3;
    *(ulong64 **)*param_1 = puVar3;
    return;
  }
  pCVar4 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,param_2);
  *(CordRepBtree **)*param_1 = pCVar4;
  return;
}

// FUN_1501cb0e0 @ 1501cb0e0

void FUN_1501cb0e0(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  byte bVar4;
  __uint64 _Var5;
  CordRepBtree *pCVar6;
  CordRep *pCVar7;
  undefined8 uVar8;
  CordRepBtree *this;
  CordRep *pCVar9;
  longlong lVar10;
  uint uVar11;
  CordRep *pCVar12;
  OpResult local_88;
  int local_78 [2];
  longlong alStack_70 [13];
  
  pCVar9 = (CordRep *)0x0;
  pCVar7 = param_2;
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      pCVar7 = pCVar9;
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
    }
    else {
      pCVar7 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  uVar11 = 0;
  _Var5 = pCVar7->length;
  pCVar6 = *(CordRepBtree **)*param_1;
  bVar3 = *(byte *)((longlong)&pCVar6->_padding_ + 5);
  this = pCVar6;
  pCVar12 = pCVar9;
  if (bVar3 != 0) {
    do {
      uVar11 = (uint)pCVar12;
      if ((int)this->_padding_ != 2) break;
      bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
      uVar11 = uVar11 + 1;
      alStack_70[(longlong)pCVar9] = (longlong)this;
      pCVar9 = (CordRep *)((longlong)&pCVar9->length + 1);
      this = (CordRepBtree *)this->edges_[bVar4];
      pCVar12 = (CordRep *)(ulonglong)uVar11;
    } while ((longlong)pCVar9 < (longlong)(ulonglong)bVar3);
  }
  local_78[0] = ((int)this->_padding_ == 2) + uVar11;
  for (lVar10 = (longlong)(int)uVar11; lVar10 < (longlong)(ulonglong)bVar3; lVar10 = lVar10 + 1) {
    bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
    alStack_70[lVar10] = (longlong)this;
    this = (CordRepBtree *)this->edges_[bVar4];
  }
  absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<0>
            (this,&local_88,(int)(uint)bVar3 < local_78[0],pCVar7,_Var5);
  uVar8 = FUN_1501cc5c0(local_78,pCVar6,(uint)bVar3,_Var5,&local_88);
  *(undefined8 *)*param_1 = uVar8;
  return;
}

// Merge<1> @ 1501cb230

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Merge<1>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Merge<1>
          (CordRepBtree *param_1,CordRepBtree *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  CordRep *pCVar4;
  OpResult *pOVar5;
  CordRepBtree *pCVar6;
  CordRep **ppCVar7;
  uint uVar8;
  longlong lVar9;
  CordRep **ppCVar10;
  CordRep **ppCVar11;
  byte bVar12;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uStack_bc;
  CordRepBtree *local_b8;
  undefined8 uStack_b0;
  OpResult local_a8;
  int local_98 [2];
  undefined8 auStack_90 [15];
  ulonglong uVar13;
  
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 5);
  uVar13 = 0;
  lVar3 = param_2->_padding_;
  uVar8 = (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  iVar16 = uVar8 - bVar2;
  lVar15 = (ulonglong)uVar8 - (ulonglong)bVar2;
  uVar8 = 0;
  pCVar6 = param_1;
  uVar14 = uVar13;
  if (0 < lVar15) {
    do {
      uVar8 = (uint)uVar13;
      if ((int)pCVar6->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
      uVar8 = uVar8 + 1;
      uVar13 = (ulonglong)uVar8;
      auStack_90[uVar14] = pCVar6;
      uVar14 = uVar14 + 1;
      pCVar6 = (CordRepBtree *)pCVar6->edges_[(ulonglong)bVar2 - 1];
    } while ((longlong)uVar14 < lVar15);
  }
  local_98[0] = ((int)pCVar6->_padding_ == 2) + uVar8;
  for (lVar9 = (longlong)(int)uVar8; lVar9 < lVar15; lVar9 = lVar9 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
    auStack_90[lVar9] = pCVar6;
    pCVar6 = (CordRepBtree *)pCVar6->edges_[(ulonglong)bVar2 - 1];
  }
  if ((((ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 7) -
       (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6)) -
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6)) +
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 7) < 7) {
    pOVar5 = ToOpResult(pCVar6,&local_a8,iVar16 < local_98[0]);
    bVar2 = *(byte *)((longlong)&param_2->_padding_ + 7);
    pCVar6 = pOVar5->tree;
    uVar17 = *(undefined8 *)&pOVar5->action;
    uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
    ppCVar7 = param_2->edges_ + uVar14;
    uVar13 = (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6);
    if (uVar13 != 0) {
      lVar15 = *(byte *)((longlong)&pCVar6->_padding_ + 7) - uVar13;
      *(undefined1 *)((longlong)&pCVar6->_padding_ + 6) = 0;
      *(char *)((longlong)&pCVar6->_padding_ + 7) = (char)lVar15;
      if (lVar15 != 0) {
        ppCVar10 = pCVar6->edges_;
        do {
          *ppCVar10 = ppCVar10[uVar13];
          ppCVar10 = ppCVar10 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    bVar12 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
    uVar13 = (ulonglong)bVar12;
    ppCVar10 = ppCVar7 + (bVar2 - uVar14);
    if (ppCVar7 != ppCVar10) {
      ppCVar11 = pCVar6->edges_ + uVar13;
      do {
        pCVar4 = *ppCVar7;
        ppCVar7 = ppCVar7 + 1;
        *ppCVar11 = pCVar4;
        ppCVar11 = ppCVar11 + 1;
        uVar13 = uVar13 + 1;
        bVar12 = (byte)uVar13;
      } while (ppCVar7 != ppCVar10);
    }
    *(byte *)((longlong)&pCVar6->_padding_ + 7) = bVar12;
    pCVar6->_padding_ = pCVar6->_padding_ + param_2->_padding_;
    if ((int)param_2->_padding_ == 2) {
      ::operator_delete(param_2,0x40);
    }
    else {
      uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
      ppCVar7 = param_2->edges_ + uVar14;
      ppCVar10 = ppCVar7 + (*(byte *)((longlong)&param_2->_padding_ + 7) - uVar14);
      for (; ppCVar7 != ppCVar10; ppCVar7 = ppCVar7 + 1) {
        LOCK();
        ((*ppCVar7)->refcount).count_ = (atomic<int>)((int)((*ppCVar7)->refcount).count_ + 2);
        UNLOCK();
      }
      LOCK();
      plVar1 = &param_2->_padding_;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar15 == 2) {
        CordRep::Destroy((CordRep *)param_2);
      }
    }
  }
  else {
    uVar17 = CONCAT44(uStack_bc,2);
    pCVar6 = param_2;
  }
  if (iVar16 == 0) {
    if ((int)uVar17 != 0) {
      if ((int)uVar17 == 1) {
        LOCK();
        plVar1 = &param_1->_padding_;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar3 == 2) {
          CordRep::Destroy((CordRep *)param_1);
        }
      }
      else {
        pCVar6 = New(param_1,pCVar6);
        if ((0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5)) &&
           (pCVar6 = Rebuild(pCVar6), 0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                     "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
        }
      }
    }
  }
  else {
    local_b8 = pCVar6;
    uStack_b0 = uVar17;
    pCVar6 = (CordRepBtree *)FUN_1501cc340(local_98,param_1,iVar16,lVar3,&local_b8);
  }
  return pCVar6;
}

// Merge<0> @ 1501cb510

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Merge<0>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Merge<0>
          (CordRepBtree *param_1,CordRepBtree *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  CordRep *pCVar4;
  OpResult *pOVar5;
  CordRepBtree *pCVar6;
  CordRep **ppCVar7;
  uint uVar8;
  longlong lVar10;
  CordRep **ppCVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uStack_bc;
  CordRepBtree *local_b8;
  undefined8 uStack_b0;
  OpResult local_a8;
  int local_98 [2];
  undefined8 auStack_90 [15];
  ulonglong uVar9;
  
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 5);
  uVar9 = 0;
  lVar3 = param_2->_padding_;
  uVar8 = (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  iVar16 = uVar8 - bVar2;
  lVar15 = (ulonglong)uVar8 - (ulonglong)bVar2;
  uVar8 = 0;
  pCVar6 = param_1;
  uVar14 = uVar9;
  if (0 < lVar15) {
    do {
      uVar8 = (uint)uVar9;
      if ((int)pCVar6->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 6);
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      auStack_90[uVar14] = pCVar6;
      uVar14 = uVar14 + 1;
      pCVar6 = (CordRepBtree *)pCVar6->edges_[bVar2];
    } while ((longlong)uVar14 < lVar15);
  }
  local_98[0] = ((int)pCVar6->_padding_ == 2) + uVar8;
  for (lVar10 = (longlong)(int)uVar8; lVar10 < lVar15; lVar10 = lVar10 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 6);
    auStack_90[lVar10] = pCVar6;
    pCVar6 = (CordRepBtree *)pCVar6->edges_[bVar2];
  }
  if ((((ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 7) -
       (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6)) -
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6)) +
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 7) < 7) {
    pOVar5 = ToOpResult(pCVar6,&local_a8,iVar16 < local_98[0]);
    pCVar6 = pOVar5->tree;
    uVar17 = *(undefined8 *)&pOVar5->action;
    uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
    lVar15 = *(byte *)((longlong)&param_2->_padding_ + 7) - uVar14;
    ppCVar7 = param_2->edges_ + uVar14;
    lVar10 = 6 - (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 7);
    if (lVar10 != 0) {
      uVar14 = (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6) + lVar10;
      *(undefined1 *)((longlong)&pCVar6->_padding_ + 7) = 6;
      *(char *)((longlong)&pCVar6->_padding_ + 6) = (char)uVar14;
      if (uVar14 < 6) {
        ppCVar11 = pCVar6->edges_ + 5;
        lVar13 = 6 - uVar14;
        do {
          *ppCVar11 = ppCVar11[-lVar10];
          ppCVar11 = ppCVar11 + -1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
    ppCVar11 = ppCVar7 + lVar15;
    lVar15 = (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6) - lVar15;
    *(char *)((longlong)&pCVar6->_padding_ + 6) = (char)lVar15;
    if (ppCVar7 != ppCVar11) {
      puVar12 = (undefined8 *)((longlong)pCVar6 + (lVar15 + 2) * 8);
      do {
        pCVar4 = *ppCVar7;
        ppCVar7 = ppCVar7 + 1;
        *puVar12 = pCVar4;
        puVar12 = puVar12 + 1;
      } while (ppCVar7 != ppCVar11);
    }
    pCVar6->_padding_ = pCVar6->_padding_ + param_2->_padding_;
    if ((int)param_2->_padding_ == 2) {
      ::operator_delete(param_2,0x40);
    }
    else {
      uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
      ppCVar7 = param_2->edges_ + uVar14;
      ppCVar11 = ppCVar7 + (*(byte *)((longlong)&param_2->_padding_ + 7) - uVar14);
      for (; ppCVar7 != ppCVar11; ppCVar7 = ppCVar7 + 1) {
        LOCK();
        ((*ppCVar7)->refcount).count_ = (atomic<int>)((int)((*ppCVar7)->refcount).count_ + 2);
        UNLOCK();
      }
      LOCK();
      plVar1 = &param_2->_padding_;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar15 == 2) {
        CordRep::Destroy((CordRep *)param_2);
      }
    }
  }
  else {
    uVar17 = CONCAT44(uStack_bc,2);
    pCVar6 = param_2;
  }
  if (iVar16 == 0) {
    if ((int)uVar17 != 0) {
      if ((int)uVar17 == 1) {
        LOCK();
        plVar1 = &param_1->_padding_;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar3 == 2) {
          CordRep::Destroy((CordRep *)param_1);
        }
      }
      else {
        pCVar6 = New(pCVar6,param_1);
        if ((0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5)) &&
           (pCVar6 = Rebuild(pCVar6), 0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                     "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
        }
      }
    }
  }
  else {
    local_b8 = pCVar6;
    uStack_b0 = uVar17;
    pCVar6 = (CordRepBtree *)FUN_1501cc5c0(local_98,param_1,iVar16,lVar3,&local_b8);
  }
  return pCVar6;
}

// NewLeaf<1> @ 1501cb800

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::NewLeaf<1>(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::NewLeaf<1>
          (basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 param_2)

{
  char *_Src;
  size_t _Size;
  int iVar1;
  CordRepBtree *pCVar2;
  longlong lVar3;
  CordRep *pCVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  byte bVar8;
  CordRepBtree *pCVar9;
  CordRepBtree *pCVar10;
  CordRep **ppCVar11;
  
  pCVar2 = ::operator_new(0x40);
  pCVar9 = (CordRepBtree *)0x0;
  pCVar10 = pCVar9;
  if (pCVar2 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar2->_padding_ = 2;
    pCVar10 = pCVar2;
  }
  uVar5 = param_1->_Mysize;
  pCVar10->_padding_ = 0;
  *(undefined4 *)((longlong)&pCVar10->_padding_ + 4) = 3;
  pCVar2 = pCVar9;
  if (uVar5 != 0) {
    ppCVar11 = pCVar10->edges_;
    do {
      if (pCVar9 == (CordRepBtree *)&DAT_00000006) break;
      uVar6 = uVar5 + param_2;
      if (uVar6 < 0x14) {
        uVar6 = 0x20;
        lVar3 = 8;
      }
      else {
        if (uVar6 < 0xff4) {
          uVar6 = uVar6 + 0xd;
          if (uVar6 < 0x201) {
            lVar3 = 8;
            goto LAB_1501cb8ac;
          }
        }
        else {
          uVar6 = 0x1000;
        }
        lVar3 = 0x1000;
        if (uVar6 < 0x2001) {
          lVar3 = 0x40;
        }
      }
LAB_1501cb8ac:
      uVar6 = (uVar6 - 1) + lVar3 & -lVar3;
      pCVar4 = ::operator_new(uVar6);
      pCVar4->length = 0;
      pCVar4->refcount = (atomic<int>)0x0;
      pCVar4->tag = '\0';
      pCVar4->storage[0] = '\0';
      pCVar4->storage[1] = '\0';
      pCVar4->storage[2] = '\0';
      (pCVar4->refcount).count_ = (atomic<int>)0x2;
      if (uVar6 < 0x201) {
        bVar8 = (char)(uVar6 >> 3) + 2;
      }
      else if (uVar6 < 0x2001) {
        bVar8 = (char)(uVar6 >> 6) + 0x3a;
      }
      else {
        bVar8 = (char)(uVar6 >> 0xc) + 0xb8;
      }
      pCVar4->tag = bVar8;
      if (bVar8 < 0x43) {
        iVar1 = (uint)bVar8 * 8 + -0x10;
      }
      else if (bVar8 < 0xbb) {
        iVar1 = (bVar8 - 0x3a) * 0x40;
      }
      else {
        iVar1 = (bVar8 - 0xb8) * 0x1000;
      }
      if ((longlong)iVar1 - 0xdU < uVar5) {
        uVar5 = (longlong)iVar1 - 0xdU;
      }
      pCVar9 = (CordRepBtree *)((longlong)&pCVar9->_padding_ + 1);
      pCVar4->length = uVar5;
      pCVar2 = (CordRepBtree *)((longlong)pCVar2->edges_ + (uVar5 - 0x10));
      _Src = param_1->_Mydata;
      *ppCVar11 = pCVar4;
      _Size = pCVar4->length;
      ppCVar11 = ppCVar11 + 1;
      memcpy(pCVar4->storage,_Src,_Size);
      if (param_1->_Mysize < _Size) {
                    /* WARNING: Subroutine does not return */
        std::basic_string_view<char,std::char_traits<char>_>::_Xran();
      }
      uVar7 = param_1->_Mysize - _Size;
      uVar5 = 0xffffffffffffffff;
      if (uVar7 != 0xffffffffffffffff) {
        uVar5 = uVar7;
      }
      param_1->_Mydata = _Src + _Size;
      param_1->_Mysize = uVar5;
      uVar5 = param_1->_Mysize;
    } while (uVar5 != 0);
  }
  pCVar10->_padding_ = (longlong)pCVar2;
  *(char *)((longlong)&pCVar10->_padding_ + 7) = (char)pCVar9;
  return pCVar10;
}

// NewLeaf<0> @ 1501cb9f0

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::NewLeaf<0>(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::NewLeaf<0>
          (basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  size_t *psVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  CordRepBtree *pCVar10;
  longlong lVar11;
  CordRepBtree *local_res8;
  
  local_res8 = ::operator_new(0x40);
  lVar11 = 0;
  if (local_res8 == (CordRepBtree *)0x0) {
    local_res8 = (CordRepBtree *)0x0;
  }
  else {
    *(undefined4 *)&local_res8->_padding_ = 2;
  }
  uVar8 = param_1->_Mysize;
  lVar7 = 6;
  local_res8->_padding_ = 0;
  *(undefined4 *)((longlong)&local_res8->_padding_ + 4) = 0x6000003;
  if (uVar8 != 0) {
    pCVar10 = local_res8 + 1;
    do {
      if (lVar7 == 0) break;
      uVar5 = uVar8 + param_2;
      if (uVar5 < 0x14) {
        uVar5 = 0x20;
        lVar3 = 8;
      }
      else {
        if (uVar5 < 0xff4) {
          uVar5 = uVar5 + 0xd;
          if (uVar5 < 0x201) {
            lVar3 = 8;
            goto LAB_1501cba9b;
          }
        }
        else {
          uVar5 = 0x1000;
        }
        lVar3 = 0x1000;
        if (uVar5 < 0x2001) {
          lVar3 = 0x40;
        }
      }
LAB_1501cba9b:
      uVar5 = (uVar5 - 1) + lVar3 & -lVar3;
      psVar4 = ::operator_new(uVar5);
      *psVar4 = 0;
      psVar4[1] = 0;
      *(undefined4 *)(psVar4 + 1) = 2;
      if (uVar5 < 0x201) {
        bVar6 = (char)(uVar5 >> 3) + 2;
      }
      else if (uVar5 < 0x2001) {
        bVar6 = (char)(uVar5 >> 6) + 0x3a;
      }
      else {
        bVar6 = (char)(uVar5 >> 0xc) + 0xb8;
      }
      *(byte *)((longlong)psVar4 + 0xc) = bVar6;
      if (bVar6 < 0x43) {
        iVar2 = (uint)bVar6 * 8 + -0x10;
      }
      else if (bVar6 < 0xbb) {
        iVar2 = (bVar6 - 0x3a) * 0x40;
      }
      else {
        iVar2 = (bVar6 - 0xb8) * 0x1000;
      }
      uVar5 = param_1->_Mysize;
      pcVar1 = param_1->_Mydata;
      if ((longlong)iVar2 - 0xdU < uVar8) {
        uVar8 = (longlong)iVar2 - 0xdU;
      }
      pCVar10 = (CordRepBtree *)(pCVar10[-1].edges_ + 5);
      *psVar4 = uVar8;
      lVar11 = lVar11 + uVar8;
      lVar7 = lVar7 + -1;
      pCVar10->_padding_ = (longlong)psVar4;
      uVar9 = uVar5 - *psVar4;
      memcpy((void *)((longlong)psVar4 + 0xd),pcVar1 + uVar9,*psVar4);
      if (uVar5 < uVar9) {
        uVar9 = uVar5;
      }
      param_1->_Mydata = pcVar1;
      param_1->_Mysize = uVar9;
      uVar8 = param_1->_Mysize;
    } while (uVar8 != 0);
  }
  local_res8->_padding_ = lVar11;
  *(char *)((longlong)&local_res8->_padding_ + 6) = (char)lVar7;
  return local_res8;
}

// SetEdge<1> @ 1501cbbc0

/* public: struct absl::lts_20240722::cord_internal::CordRepBtree::OpResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<1>(bool,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64) __ptr64 */

OpResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<1>
          (CordRepBtree *this,OpResult *__return_storage_ptr__,bool param_1,CordRep *param_2,
          __uint64 param_3)

{
  RefcountAndFlags *pRVar1;
  CordRep **ppCVar2;
  atomic<int> aVar3;
  byte bVar4;
  CordRep *pCVar5;
  longlong lVar6;
  undefined8 uVar7;
  CordRepBtree *pCVar8;
  CordRep **ppCVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uStack_1c;
  
  uVar11 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  if (param_1) {
    pCVar5 = this->edges_[uVar11 - 1];
    __return_storage_ptr__->tree = this;
    *(ulonglong *)&__return_storage_ptr__->action = (ulonglong)uStack_1c << 0x20;
    LOCK();
    pRVar1 = &pCVar5->refcount;
    aVar3 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar5);
    }
  }
  else {
    lVar6 = this->_padding_;
    pCVar8 = ::operator_new(0x40);
    if (pCVar8 == (CordRepBtree *)0x0) {
      pCVar8 = (CordRepBtree *)0x0;
    }
    else {
      *(undefined4 *)&pCVar8->_padding_ = 2;
    }
    pCVar8->_padding_ = lVar6;
    uVar7 = *(undefined8 *)((longlong)this->edges_ + 4);
    *(undefined8 *)((longlong)&pCVar8->_padding_ + 4) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)pCVar8->edges_ + 4) = uVar7;
    uVar7 = *(undefined8 *)((longlong)this->edges_ + 0x14);
    *(undefined8 *)((longlong)pCVar8->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
    *(undefined8 *)((longlong)pCVar8->edges_ + 0x14) = uVar7;
    uVar7 = *(undefined8 *)((longlong)this->edges_ + 0x24);
    *(undefined8 *)((longlong)pCVar8->edges_ + 0x1c) =
         *(undefined8 *)((longlong)this->edges_ + 0x1c);
    *(undefined8 *)((longlong)pCVar8->edges_ + 0x24) = uVar7;
    *(undefined4 *)((longlong)pCVar8->edges_ + 0x2c) =
         *(undefined4 *)((longlong)this->edges_ + 0x2c);
    uVar10 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
    bVar4 = *(byte *)((longlong)&this->_padding_ + 7);
    ppCVar9 = this->edges_ + uVar10;
    __return_storage_ptr__->tree = pCVar8;
    *(ulonglong *)&__return_storage_ptr__->action = CONCAT44(uStack_1c,1);
    ppCVar2 = ppCVar9 + (((ulonglong)bVar4 - 1) - uVar10);
    for (; ppCVar9 != ppCVar2; ppCVar9 = ppCVar9 + 1) {
      LOCK();
      ((*ppCVar9)->refcount).count_ = (atomic<int>)((int)((*ppCVar9)->refcount).count_ + 2);
      UNLOCK();
    }
  }
  pCVar8 = __return_storage_ptr__->tree;
  pCVar8->edges_[uVar11 - 1] = param_2;
  pCVar8->_padding_ = pCVar8->_padding_ + param_3;
  return __return_storage_ptr__;
}

// SetEdge<0> @ 1501cbce0

/* public: struct absl::lts_20240722::cord_internal::CordRepBtree::OpResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<0>(bool,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64) __ptr64 */

OpResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<0>
          (CordRepBtree *this,OpResult *__return_storage_ptr__,bool param_1,CordRep *param_2,
          __uint64 param_3)

{
  RefcountAndFlags *pRVar1;
  CordRep **ppCVar2;
  atomic<int> aVar3;
  byte bVar4;
  byte bVar5;
  CordRep *pCVar6;
  longlong lVar7;
  undefined8 uVar8;
  CordRepBtree *pCVar9;
  CordRep **ppCVar10;
  ulonglong uVar11;
  uint uStack_1c;
  
  bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
  if (param_1) {
    pCVar6 = this->edges_[bVar4];
    __return_storage_ptr__->tree = this;
    *(ulonglong *)&__return_storage_ptr__->action = (ulonglong)uStack_1c << 0x20;
    LOCK();
    pRVar1 = &pCVar6->refcount;
    aVar3 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar6);
    }
  }
  else {
    lVar7 = this->_padding_;
    pCVar9 = ::operator_new(0x40);
    if (pCVar9 == (CordRepBtree *)0x0) {
      pCVar9 = (CordRepBtree *)0x0;
    }
    else {
      *(undefined4 *)&pCVar9->_padding_ = 2;
    }
    pCVar9->_padding_ = lVar7;
    uVar8 = *(undefined8 *)((longlong)this->edges_ + 4);
    *(undefined8 *)((longlong)&pCVar9->_padding_ + 4) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)pCVar9->edges_ + 4) = uVar8;
    uVar8 = *(undefined8 *)((longlong)this->edges_ + 0x14);
    *(undefined8 *)((longlong)pCVar9->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
    *(undefined8 *)((longlong)pCVar9->edges_ + 0x14) = uVar8;
    uVar8 = *(undefined8 *)((longlong)this->edges_ + 0x24);
    *(undefined8 *)((longlong)pCVar9->edges_ + 0x1c) =
         *(undefined8 *)((longlong)this->edges_ + 0x1c);
    *(undefined8 *)((longlong)pCVar9->edges_ + 0x24) = uVar8;
    *(undefined4 *)((longlong)pCVar9->edges_ + 0x2c) =
         *(undefined4 *)((longlong)this->edges_ + 0x2c);
    uVar11 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
    bVar5 = *(byte *)((longlong)&this->_padding_ + 7);
    __return_storage_ptr__->tree = pCVar9;
    *(ulonglong *)&__return_storage_ptr__->action = CONCAT44(uStack_1c,1);
    ppCVar10 = this->edges_ + uVar11 + 1;
    ppCVar2 = ppCVar10 + ((ulonglong)bVar5 - (uVar11 + 1));
    for (; ppCVar10 != ppCVar2; ppCVar10 = ppCVar10 + 1) {
      LOCK();
      ((*ppCVar10)->refcount).count_ = (atomic<int>)((int)((*ppCVar10)->refcount).count_ + 2);
      UNLOCK();
    }
  }
  pCVar9 = __return_storage_ptr__->tree;
  pCVar9->edges_[bVar4] = param_2;
  pCVar9->_padding_ = pCVar9->_padding_ + param_3;
  return __return_storage_ptr__;
}

// FUN_1501cbe00 @ 1501cbe00

CordRepBtree *
FUN_1501cbe00(int *param_1,CordRepBtree *param_2,int param_3,__uint64 param_4,longlong *param_5)

{
  byte bVar1;
  int iVar2;
  CordRep *pCVar3;
  ulong64 *puVar4;
  CordRep **ppCVar5;
  OpResult *pOVar6;
  CordRepBtree *pCVar7;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lStack_60;
  OpResult local_58;
  OpResult local_48 [2];
  ulonglong uVar12;
  
  uVar11 = (ulonglong)param_3;
  if (param_3 != 0) {
    plVar14 = (longlong *)(param_1 + uVar11 * 2 + 2);
    uVar12 = uVar11;
    do {
      iVar2 = (int)param_5[1];
      plVar14 = plVar14 + -1;
      pCVar7 = (CordRepBtree *)*plVar14;
      uVar11 = uVar11 - 1;
      uVar10 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar10;
      if (iVar2 == 0) {
        pCVar7->_padding_ = pCVar7->_padding_ + param_4;
        if ((longlong)uVar11 < 1) {
          return pCVar7;
        }
        param_1 = param_1 + uVar11 * 2 + 2;
        do {
          pCVar7 = *(CordRepBtree **)(param_1 + -2);
          param_1 = param_1 + -2;
          uVar11 = uVar11 - 1;
          pCVar7->_padding_ = pCVar7->_padding_ + param_4;
        } while (0 < (longlong)uVar11);
        return pCVar7;
      }
      if (iVar2 == 1) {
        pOVar6 = absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<1>
                           (pCVar7,local_48,(int)uVar10 < *param_1,(CordRep *)*param_5,param_4);
        lVar9 = *(longlong *)&pOVar6->action;
        *param_5 = (longlong)pOVar6->tree;
        param_5[1] = lVar9;
        *plVar14 = *param_5;
      }
      else if (iVar2 == 2) {
        pCVar3 = (CordRep *)*param_5;
        if ((ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 7) -
            (ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 6) < 6) {
          absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult
                    (pCVar7,&local_58,(int)uVar10 < *param_1);
          uVar13 = (ulonglong)*(byte *)((longlong)&(local_58.tree)->_padding_ + 6);
          if (uVar13 != 0) {
            lVar9 = *(byte *)((longlong)&(local_58.tree)->_padding_ + 7) - uVar13;
            *(undefined1 *)((longlong)&(local_58.tree)->_padding_ + 6) = 0;
            *(char *)((longlong)&(local_58.tree)->_padding_ + 7) = (char)lVar9;
            if (lVar9 != 0) {
              ppCVar5 = (local_58.tree)->edges_;
              do {
                *ppCVar5 = ppCVar5[uVar13];
                ppCVar5 = ppCVar5 + 1;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
          bVar1 = *(byte *)((longlong)&(local_58.tree)->_padding_ + 7);
          lStack_60 = local_58._8_8_;
          *param_5 = (longlong)local_58.tree;
          param_5[1] = local_58._8_8_;
          *(byte *)((longlong)&(local_58.tree)->_padding_ + 7) = bVar1 + 1;
          (local_58.tree)->edges_[bVar1] = pCVar3;
          (local_58.tree)->_padding_ = (local_58.tree)->_padding_ + param_4;
        }
        else {
          puVar4 = operator_new(0x40);
          if (puVar4 == (ulong64 *)0x0) {
            puVar4 = (ulong64 *)0x0;
          }
          else {
            *(undefined4 *)(puVar4 + 1) = 2;
          }
          if (pCVar3->tag == '\x03') {
            cVar8 = pCVar3->storage[0] + '\x01';
          }
          else {
            cVar8 = '\0';
          }
          *puVar4 = pCVar3->length;
          lStack_60 = CONCAT44(lStack_60._4_4_,2);
          *(char *)((longlong)puVar4 + 0xd) = cVar8;
          *(undefined2 *)((longlong)puVar4 + 0xe) = 0x100;
          puVar4[2] = (ulong64)pCVar3;
          *param_5 = (longlong)puVar4;
          param_5[1] = lStack_60;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 3;
        }
      }
    } while (0 < (int)uVar10);
  }
  pCVar7 = (CordRepBtree *)*param_5;
  if ((int)param_5[1] != 0) {
    if ((int)param_5[1] == 1) {
      LOCK();
      plVar14 = &param_2->_padding_;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -2;
      UNLOCK();
      if ((int)lVar9 == 2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_2);
      }
    }
    else {
      pCVar7 = absl::lts_20240722::cord_internal::CordRepBtree::New(param_2,pCVar7);
      if ((0xb < *(byte *)((longlong)&pCVar7->_padding_ + 5)) &&
         (pCVar7 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar7),
         0xb < *(byte *)((longlong)&pCVar7->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                   "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
      }
    }
  }
  return pCVar7;
}

// FUN_1501cc090 @ 1501cc090

CordRepBtree *
FUN_1501cc090(int *param_1,CordRepBtree *param_2,int param_3,__uint64 param_4,longlong *param_5)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  CordRep *pCVar4;
  ulong64 *puVar5;
  CordRep **ppCVar6;
  OpResult *pOVar7;
  CordRepBtree *pCVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar15;
  longlong *plVar16;
  longlong lStack_60;
  OpResult local_58;
  OpResult local_48 [2];
  ulonglong uVar14;
  
  uVar13 = (ulonglong)param_3;
  if (param_3 != 0) {
    plVar16 = (longlong *)(param_1 + uVar13 * 2 + 2);
    uVar14 = uVar13;
    do {
      iVar3 = (int)param_5[1];
      plVar16 = plVar16 + -1;
      pCVar8 = (CordRepBtree *)*plVar16;
      uVar13 = uVar13 - 1;
      uVar12 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar12;
      if (iVar3 == 0) {
        pCVar8->_padding_ = pCVar8->_padding_ + param_4;
        if ((longlong)uVar13 < 1) {
          return pCVar8;
        }
        param_1 = param_1 + uVar13 * 2 + 2;
        do {
          pCVar8 = *(CordRepBtree **)(param_1 + -2);
          param_1 = param_1 + -2;
          uVar13 = uVar13 - 1;
          pCVar8->_padding_ = pCVar8->_padding_ + param_4;
        } while (0 < (longlong)uVar13);
        return pCVar8;
      }
      if (iVar3 == 1) {
        pOVar7 = absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<0>
                           (pCVar8,local_48,(int)uVar12 < *param_1,(CordRep *)*param_5,param_4);
        lVar15 = *(longlong *)&pOVar7->action;
        *param_5 = (longlong)pOVar7->tree;
        param_5[1] = lVar15;
        *plVar16 = *param_5;
      }
      else if (iVar3 == 2) {
        pCVar4 = (CordRep *)*param_5;
        if ((ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 7) -
            (ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 6) < 6) {
          absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult
                    (pCVar8,&local_58,(int)uVar12 < *param_1);
          lVar15 = 6 - (ulonglong)*(byte *)((longlong)&(local_58.tree)->_padding_ + 7);
          if (lVar15 != 0) {
            uVar9 = (ulonglong)*(byte *)((longlong)&(local_58.tree)->_padding_ + 6) + lVar15;
            *(undefined1 *)((longlong)&(local_58.tree)->_padding_ + 7) = 6;
            *(char *)((longlong)&(local_58.tree)->_padding_ + 6) = (char)uVar9;
            if (uVar9 < 6) {
              ppCVar6 = (local_58.tree)->edges_ + 5;
              lVar11 = 6 - uVar9;
              do {
                *ppCVar6 = ppCVar6[-lVar15];
                ppCVar6 = ppCVar6 + -1;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          pcVar1 = (char *)((longlong)&(local_58.tree)->_padding_ + 6);
          *pcVar1 = *pcVar1 + -1;
          bVar2 = *(byte *)((longlong)&(local_58.tree)->_padding_ + 6);
          lStack_60 = local_58._8_8_;
          *param_5 = (longlong)local_58.tree;
          param_5[1] = local_58._8_8_;
          (local_58.tree)->edges_[bVar2] = pCVar4;
          (local_58.tree)->_padding_ = (local_58.tree)->_padding_ + param_4;
        }
        else {
          puVar5 = operator_new(0x40);
          if (puVar5 == (ulong64 *)0x0) {
            puVar5 = (ulong64 *)0x0;
          }
          else {
            *(undefined4 *)(puVar5 + 1) = 2;
          }
          if (pCVar4->tag == '\x03') {
            cVar10 = pCVar4->storage[0] + '\x01';
          }
          else {
            cVar10 = '\0';
          }
          *puVar5 = pCVar4->length;
          lStack_60 = CONCAT44(lStack_60._4_4_,2);
          *(char *)((longlong)puVar5 + 0xd) = cVar10;
          *(undefined2 *)((longlong)puVar5 + 0xe) = 0x100;
          puVar5[2] = (ulong64)pCVar4;
          *param_5 = (longlong)puVar5;
          param_5[1] = lStack_60;
          *(undefined1 *)((longlong)puVar5 + 0xc) = 3;
        }
      }
    } while (0 < (int)uVar12);
  }
  pCVar8 = (CordRepBtree *)*param_5;
  if ((int)param_5[1] != 0) {
    if ((int)param_5[1] == 1) {
      LOCK();
      plVar16 = &param_2->_padding_;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -2;
      UNLOCK();
      if ((int)lVar15 == 2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_2);
      }
    }
    else {
      pCVar8 = absl::lts_20240722::cord_internal::CordRepBtree::New(pCVar8,param_2);
      if ((0xb < *(byte *)((longlong)&pCVar8->_padding_ + 5)) &&
         (pCVar8 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar8),
         0xb < *(byte *)((longlong)&pCVar8->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                   "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
      }
    }
  }
  return pCVar8;
}

// FUN_1501cc340 @ 1501cc340

CordRepBtree *
FUN_1501cc340(int *param_1,CordRepBtree *param_2,int param_3,__uint64 param_4,longlong *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  OpResult *pOVar7;
  CordRepBtree *pCVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  int *piVar15;
  Action AVar16;
  undefined4 uVar17;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  OpResult local_58;
  OpResult local_48 [2];
  ulonglong uVar13;
  
  uVar12 = (ulonglong)param_3;
  if (param_3 != 0) {
    piVar15 = param_1 + uVar12 * 2 + 2;
    uVar13 = uVar12;
    do {
      iVar2 = (int)param_5[1];
      piVar15 = piVar15 + -2;
      pCVar8 = *(CordRepBtree **)piVar15;
      uVar12 = uVar12 - 1;
      uVar11 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar11;
      if (iVar2 == 0) {
        pCVar8->_padding_ = pCVar8->_padding_ + param_4;
        if ((longlong)uVar12 < 1) {
          return pCVar8;
        }
        param_1 = param_1 + uVar12 * 2 + 2;
        do {
          pCVar8 = *(CordRepBtree **)(param_1 + -2);
          param_1 = param_1 + -2;
          uVar12 = uVar12 - 1;
          pCVar8->_padding_ = pCVar8->_padding_ + param_4;
        } while (0 < (longlong)uVar12);
        return pCVar8;
      }
      if (iVar2 == 1) {
        pOVar7 = absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<1>
                           (pCVar8,local_48,(int)uVar11 < *param_1,(CordRep *)*param_5,param_4);
        local_68 = *(undefined4 *)&pOVar7->tree;
        uStack_64 = *(undefined4 *)((longlong)&pOVar7->tree + 4);
        AVar16 = pOVar7->action;
        uVar17 = *(undefined4 *)&pOVar7->field_0xc;
LAB_1501cc4b9:
        *(undefined4 *)param_5 = local_68;
        *(undefined4 *)((longlong)param_5 + 4) = uStack_64;
        *(Action *)(param_5 + 1) = AVar16;
        *(undefined4 *)((longlong)param_5 + 0xc) = uVar17;
      }
      else if (iVar2 == 2) {
        puVar3 = (undefined8 *)*param_5;
        if ((ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 7) -
            (ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 6) < 6) {
          absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult
                    (pCVar8,&local_58,(int)uVar11 < *param_1);
          plVar4 = (longlong *)CONCAT44(local_58.tree._4_4_,local_58.tree._0_4_);
          uVar14 = (ulonglong)*(byte *)((longlong)plVar4 + 0xe);
          if (uVar14 != 0) {
            lVar10 = *(byte *)((longlong)plVar4 + 0xf) - uVar14;
            *(undefined1 *)((longlong)plVar4 + 0xe) = 0;
            *(char *)((longlong)plVar4 + 0xf) = (char)lVar10;
            if (lVar10 != 0) {
              plVar6 = plVar4 + 2;
              do {
                *plVar6 = plVar6[uVar14];
                plVar6 = plVar6 + 1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
          bVar1 = *(byte *)((longlong)plVar4 + 0xf);
          uStack_5c = local_58._12_4_;
          *(byte *)((longlong)plVar4 + 0xf) = bVar1 + 1;
          plVar4[(ulonglong)bVar1 + 2] = (longlong)puVar3;
          *plVar4 = *plVar4 + param_4;
          local_68 = local_58.tree._0_4_;
          uStack_64 = local_58.tree._4_4_;
          AVar16 = local_58.action;
          uVar17 = local_58._12_4_;
        }
        else {
          puVar5 = operator_new(0x40);
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar5 + 1) = 2;
          }
          if (*(char *)((longlong)puVar3 + 0xc) == '\x03') {
            cVar9 = *(char *)((longlong)puVar3 + 0xd) + '\x01';
          }
          else {
            cVar9 = '\0';
          }
          *puVar5 = *puVar3;
          local_68 = SUB84(puVar5,0);
          uStack_64 = (undefined4)((ulonglong)puVar5 >> 0x20);
          *(char *)((longlong)puVar5 + 0xd) = cVar9;
          *(undefined2 *)((longlong)puVar5 + 0xe) = 0x100;
          puVar5[2] = puVar3;
          *(undefined1 *)((longlong)puVar5 + 0xc) = 3;
          AVar16 = kPopped;
          uVar17 = uStack_5c;
        }
        goto LAB_1501cc4b9;
      }
    } while (0 < (int)uVar11);
  }
  pCVar8 = (CordRepBtree *)*param_5;
  if ((int)param_5[1] != 0) {
    if ((int)param_5[1] == 1) {
      LOCK();
      plVar4 = &param_2->_padding_;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -2;
      UNLOCK();
      if ((int)lVar10 == 2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_2);
      }
    }
    else {
      pCVar8 = absl::lts_20240722::cord_internal::CordRepBtree::New(param_2,pCVar8);
      if ((0xb < *(byte *)((longlong)&pCVar8->_padding_ + 5)) &&
         (pCVar8 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar8),
         0xb < *(byte *)((longlong)&pCVar8->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                   "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
      }
    }
  }
  return pCVar8;
}

// FUN_1501cc5c0 @ 1501cc5c0

CordRepBtree *
FUN_1501cc5c0(int *param_1,CordRepBtree *param_2,int param_3,__uint64 param_4,longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  OpResult *pOVar6;
  CordRepBtree *pCVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar14;
  int *piVar15;
  Action AVar16;
  undefined4 uVar17;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  OpResult local_58;
  OpResult local_48 [2];
  ulonglong uVar13;
  
  uVar12 = (ulonglong)param_3;
  if (param_3 != 0) {
    piVar15 = param_1 + uVar12 * 2 + 2;
    uVar13 = uVar12;
    do {
      iVar1 = (int)param_5[1];
      piVar15 = piVar15 + -2;
      pCVar7 = *(CordRepBtree **)piVar15;
      uVar12 = uVar12 - 1;
      uVar11 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar11;
      if (iVar1 == 0) {
        pCVar7->_padding_ = pCVar7->_padding_ + param_4;
        if ((longlong)uVar12 < 1) {
          return pCVar7;
        }
        param_1 = param_1 + uVar12 * 2 + 2;
        do {
          pCVar7 = *(CordRepBtree **)(param_1 + -2);
          param_1 = param_1 + -2;
          uVar12 = uVar12 - 1;
          pCVar7->_padding_ = pCVar7->_padding_ + param_4;
        } while (0 < (longlong)uVar12);
        return pCVar7;
      }
      if (iVar1 == 1) {
        pOVar6 = absl::lts_20240722::cord_internal::CordRepBtree::SetEdge<0>
                           (pCVar7,local_48,(int)uVar11 < *param_1,(CordRep *)*param_5,param_4);
        local_68 = *(undefined4 *)&pOVar6->tree;
        uStack_64 = *(undefined4 *)((longlong)&pOVar6->tree + 4);
        AVar16 = pOVar6->action;
        uVar17 = *(undefined4 *)&pOVar6->field_0xc;
LAB_1501cc756:
        *(undefined4 *)param_5 = local_68;
        *(undefined4 *)((longlong)param_5 + 4) = uStack_64;
        *(Action *)(param_5 + 1) = AVar16;
        *(undefined4 *)((longlong)param_5 + 0xc) = uVar17;
      }
      else if (iVar1 == 2) {
        puVar2 = (undefined8 *)*param_5;
        if ((ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 7) -
            (ulonglong)*(byte *)((longlong)&pCVar7->_padding_ + 6) < 6) {
          absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult
                    (pCVar7,&local_58,(int)uVar11 < *param_1);
          plVar3 = (longlong *)CONCAT44(local_58.tree._4_4_,local_58.tree._0_4_);
          lVar14 = 6 - (ulonglong)*(byte *)((longlong)plVar3 + 0xf);
          if (lVar14 != 0) {
            uVar8 = (ulonglong)*(byte *)((longlong)plVar3 + 0xe) + lVar14;
            *(undefined1 *)((longlong)plVar3 + 0xf) = 6;
            *(char *)((longlong)plVar3 + 0xe) = (char)uVar8;
            if (uVar8 < 6) {
              plVar5 = plVar3 + 7;
              lVar10 = 6 - uVar8;
              do {
                *plVar5 = plVar5[-lVar14];
                plVar5 = plVar5 + -1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
          *(char *)((longlong)plVar3 + 0xe) = *(char *)((longlong)plVar3 + 0xe) + -1;
          uStack_5c = local_58._12_4_;
          plVar3[(ulonglong)*(byte *)((longlong)plVar3 + 0xe) + 2] = (longlong)puVar2;
          *plVar3 = *plVar3 + param_4;
          local_68 = local_58.tree._0_4_;
          uStack_64 = local_58.tree._4_4_;
          AVar16 = local_58.action;
          uVar17 = local_58._12_4_;
        }
        else {
          puVar4 = operator_new(0x40);
          if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar4 + 1) = 2;
          }
          if (*(char *)((longlong)puVar2 + 0xc) == '\x03') {
            cVar9 = *(char *)((longlong)puVar2 + 0xd) + '\x01';
          }
          else {
            cVar9 = '\0';
          }
          *puVar4 = *puVar2;
          local_68 = SUB84(puVar4,0);
          uStack_64 = (undefined4)((ulonglong)puVar4 >> 0x20);
          *(char *)((longlong)puVar4 + 0xd) = cVar9;
          *(undefined2 *)((longlong)puVar4 + 0xe) = 0x100;
          puVar4[2] = puVar2;
          *(undefined1 *)((longlong)puVar4 + 0xc) = 3;
          AVar16 = kPopped;
          uVar17 = uStack_5c;
        }
        goto LAB_1501cc756;
      }
    } while (0 < (int)uVar11);
  }
  pCVar7 = (CordRepBtree *)*param_5;
  if ((int)param_5[1] != 0) {
    if ((int)param_5[1] == 1) {
      LOCK();
      plVar3 = &param_2->_padding_;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -2;
      UNLOCK();
      if ((int)lVar14 == 2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_2);
      }
    }
    else {
      pCVar7 = absl::lts_20240722::cord_internal::CordRepBtree::New(pCVar7,param_2);
      if ((0xb < *(byte *)((longlong)&pCVar7->_padding_ + 5)) &&
         (pCVar7 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar7),
         0xb < *(byte *)((longlong)&pCVar7->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                   "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
      }
    }
  }
  return pCVar7;
}

// FUN_1501cc860 @ 1501cc860

void FUN_1501cc860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong64 *param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  CordRep *pCVar4;
  CordRepBtree *pCVar5;
  
  uVar3 = *param_4;
  pCVar4 = (CordRep *)*param_2;
  if (uVar3 != pCVar4->length) {
    if (uVar3 == 0) {
      LOCK();
      pRVar1 = &pCVar4->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(pCVar4);
      }
      pCVar4 = (CordRep *)0x0;
    }
    else {
      pCVar4 = (CordRep *)FUN_1501cdaf0(pCVar4,*param_3,uVar3);
    }
  }
  pCVar5 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,pCVar4);
  *(CordRepBtree **)*param_1 = pCVar5;
  return;
}

// FUN_1501cc8d0 @ 1501cc8d0

void FUN_1501cc8d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong64 *param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  CordRep *pCVar4;
  ulong64 *puVar5;
  CordRepBtree *pCVar6;
  char cVar7;
  
  pCVar4 = (CordRep *)*param_2;
  uVar3 = *param_4;
  if (uVar3 != pCVar4->length) {
    if (uVar3 == 0) {
      LOCK();
      pRVar1 = &pCVar4->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(pCVar4);
      }
      pCVar4 = (CordRep *)0x0;
    }
    else {
      pCVar4 = (CordRep *)FUN_1501cdaf0(pCVar4,*param_3,uVar3);
    }
  }
  if (*(CordRepBtree **)*param_1 == (CordRepBtree *)0x0) {
    puVar5 = operator_new(0x40);
    if (puVar5 == (ulong64 *)0x0) {
      puVar5 = (ulong64 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 1) = 2;
    }
    if (pCVar4->tag == '\x03') {
      cVar7 = pCVar4->storage[0] + '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *puVar5 = pCVar4->length;
    *(char *)((longlong)puVar5 + 0xd) = cVar7;
    *(undefined2 *)((longlong)puVar5 + 0xe) = 0x100;
    puVar5[2] = (ulong64)pCVar4;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 3;
    *(ulong64 **)*param_1 = puVar5;
    return;
  }
  pCVar6 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,pCVar4);
  *(CordRepBtree **)*param_1 = pCVar6;
  return;
}

// FUN_1501cc9a0 @ 1501cc9a0

void FUN_1501cc9a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong64 *param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  byte bVar4;
  ulong64 uVar5;
  __uint64 _Var6;
  CordRepBtree *pCVar7;
  CordRep *pCVar8;
  undefined8 uVar9;
  CordRepBtree *this;
  CordRep *pCVar10;
  longlong lVar11;
  uint uVar12;
  CordRep *pCVar13;
  OpResult local_88;
  int local_78 [2];
  longlong alStack_70 [13];
  
  uVar5 = *param_4;
  pCVar10 = (CordRep *)0x0;
  pCVar13 = (CordRep *)*param_2;
  pCVar8 = pCVar13;
  if (uVar5 != pCVar13->length) {
    if (uVar5 == 0) {
      LOCK();
      pRVar1 = &pCVar13->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      pCVar8 = pCVar10;
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(pCVar13);
      }
    }
    else {
      pCVar8 = (CordRep *)FUN_1501cdaf0(pCVar13,*param_3,uVar5);
    }
  }
  uVar12 = 0;
  _Var6 = pCVar8->length;
  pCVar7 = *(CordRepBtree **)*param_1;
  bVar3 = *(byte *)((longlong)&pCVar7->_padding_ + 5);
  this = pCVar7;
  pCVar13 = pCVar10;
  if (bVar3 != 0) {
    do {
      uVar12 = (uint)pCVar13;
      if ((int)this->_padding_ != 2) break;
      bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
      uVar12 = uVar12 + 1;
      alStack_70[(longlong)pCVar10] = (longlong)this;
      pCVar10 = (CordRep *)((longlong)&pCVar10->length + 1);
      this = (CordRepBtree *)this->edges_[bVar4];
      pCVar13 = (CordRep *)(ulonglong)uVar12;
    } while ((longlong)pCVar10 < (longlong)(ulonglong)bVar3);
  }
  local_78[0] = ((int)this->_padding_ == 2) + uVar12;
  for (lVar11 = (longlong)(int)uVar12; lVar11 < (longlong)(ulonglong)bVar3; lVar11 = lVar11 + 1) {
    bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
    alStack_70[lVar11] = (longlong)this;
    this = (CordRepBtree *)this->edges_[bVar4];
  }
  absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<0>
            (this,&local_88,(int)(uint)bVar3 < local_78[0],pCVar8,_Var6);
  uVar9 = FUN_1501cc5c0(local_78,pCVar7,(uint)bVar3,_Var6,&local_88);
  *(undefined8 *)*param_1 = uVar9;
  return;
}

// FUN_1501ccb40 @ 1501ccb40

void FUN_1501ccb40(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRepBtree *pCVar3;
  
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
      param_2 = (CordRep *)0x0;
    }
    else {
      param_2 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,param_2);
  *(CordRepBtree **)*param_1 = pCVar3;
  return;
}

// FUN_1501ccbb0 @ 1501ccbb0

void FUN_1501ccbb0(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  ulong64 *puVar3;
  CordRepBtree *pCVar4;
  char cVar5;
  
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
      param_2 = (CordRep *)0x0;
    }
    else {
      param_2 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  if (*(CordRepBtree **)*param_1 == (CordRepBtree *)0x0) {
    puVar3 = operator_new(0x40);
    if (puVar3 == (ulong64 *)0x0) {
      puVar3 = (ulong64 *)0x0;
    }
    else {
      *(undefined4 *)(puVar3 + 1) = 2;
    }
    if (param_2->tag == '\x03') {
      cVar5 = param_2->storage[0] + '\x01';
    }
    else {
      cVar5 = '\0';
    }
    *puVar3 = param_2->length;
    *(char *)((longlong)puVar3 + 0xd) = cVar5;
    *(undefined2 *)((longlong)puVar3 + 0xe) = 0x100;
    puVar3[2] = (ulong64)param_2;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 3;
    *(ulong64 **)*param_1 = puVar3;
    return;
  }
  pCVar4 = absl::lts_20240722::cord_internal::CordRepBtree::AddCordRep<1>
                     (*(CordRepBtree **)*param_1,param_2);
  *(CordRepBtree **)*param_1 = pCVar4;
  return;
}

// FUN_1501ccc80 @ 1501ccc80

void FUN_1501ccc80(undefined8 *param_1,ulonglong *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulong64 uVar5;
  
  if (*(char *)(param_1 + 1) != '\0') {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)*param_1,", data = \"");
    uVar3 = 0;
    puVar2 = param_2;
    if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
      uVar3 = param_2[2];
      puVar2 = (ulonglong *)param_2[3];
    }
    if (*(byte *)((longlong)puVar2 + 0xc) < 6) {
      pcVar4 = (char *)(uVar3 + puVar2[2]);
    }
    else {
      pcVar4 = (char *)(uVar3 + 0xd + (longlong)puVar2);
    }
    uVar5 = 0x3c;
    if (*param_2 < 0x3c) {
      uVar5 = *param_2;
    }
    pbVar1 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>(pbVar1,pcVar4,uVar5);
    pcVar4 = "\"";
    if (0x3c < *param_2) {
      pcVar4 = "\"...";
    }
    std::operator<<<std::char_traits<char>_>(pbVar1,pcVar4);
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)*param_1,'\n');
  return;
}

// FUN_1501ccd40 @ 1501ccd40

void FUN_1501ccd40(undefined8 *param_1,CordRep *param_2,undefined8 param_3,ulong64 param_4)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  byte bVar4;
  __uint64 _Var5;
  CordRepBtree *pCVar6;
  CordRep *pCVar7;
  undefined8 uVar8;
  CordRepBtree *this;
  CordRep *pCVar9;
  longlong lVar10;
  uint uVar11;
  CordRep *pCVar12;
  OpResult local_88;
  int local_78 [2];
  longlong alStack_70 [13];
  
  pCVar9 = (CordRep *)0x0;
  pCVar7 = param_2;
  if (param_4 != param_2->length) {
    if (param_4 == 0) {
      LOCK();
      pRVar1 = &param_2->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      pCVar7 = pCVar9;
      if (aVar2 == (atomic<int>)0x2) {
        absl::lts_20240722::cord_internal::CordRep::Destroy(param_2);
      }
    }
    else {
      pCVar7 = (CordRep *)FUN_1501cdaf0(param_2,param_3,param_4);
    }
  }
  uVar11 = 0;
  _Var5 = pCVar7->length;
  pCVar6 = *(CordRepBtree **)*param_1;
  bVar3 = *(byte *)((longlong)&pCVar6->_padding_ + 5);
  this = pCVar6;
  pCVar12 = pCVar9;
  if (bVar3 != 0) {
    do {
      uVar11 = (uint)pCVar12;
      if ((int)this->_padding_ != 2) break;
      bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
      uVar11 = uVar11 + 1;
      alStack_70[(longlong)pCVar9] = (longlong)this;
      pCVar9 = (CordRep *)((longlong)&pCVar9->length + 1);
      this = (CordRepBtree *)this->edges_[bVar4];
      pCVar12 = (CordRep *)(ulonglong)uVar11;
    } while ((longlong)pCVar9 < (longlong)(ulonglong)bVar3);
  }
  local_78[0] = ((int)this->_padding_ == 2) + uVar11;
  for (lVar10 = (longlong)(int)uVar11; lVar10 < (longlong)(ulonglong)bVar3; lVar10 = lVar10 + 1) {
    bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
    alStack_70[lVar10] = (longlong)this;
    this = (CordRepBtree *)this->edges_[bVar4];
  }
  absl::lts_20240722::cord_internal::CordRepBtree::AddEdge<0>
            (this,&local_88,(int)(uint)bVar3 < local_78[0],pCVar7,_Var5);
  uVar8 = FUN_1501cc5c0(local_78,pCVar6,(uint)bVar3,_Var5,&local_88);
  *(undefined8 *)*param_1 = uVar8;
  return;
}

// AlignBegin @ 1501cce90

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::AlignBegin(void) __ptr64
    */

void __thiscall absl::lts_20240722::cord_internal::CordRepBtree::AlignBegin(CordRepBtree *this)

{
  CordRep **ppCVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  if (uVar3 != 0) {
    lVar2 = *(byte *)((longlong)&this->_padding_ + 7) - uVar3;
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
    *(char *)((longlong)&this->_padding_ + 7) = (char)lVar2;
    if (lVar2 != 0) {
      ppCVar1 = this->edges_;
      do {
        *ppCVar1 = ppCVar1[uVar3];
        ppCVar1 = ppCVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  return;
}

// AlignEnd @ 1501cced0

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::AlignEnd(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordRepBtree::AlignEnd(CordRepBtree *this)

{
  CordRep **ppCVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = 6 - (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  if (lVar3 != 0) {
    uVar4 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6) + lVar3;
    *(undefined1 *)((longlong)&this->_padding_ + 7) = 6;
    *(char *)((longlong)&this->_padding_ + 6) = (char)uVar4;
    if (uVar4 < 6) {
      ppCVar1 = this->edges_ + 5;
      lVar2 = 6 - uVar4;
      do {
        *ppCVar1 = ppCVar1[-lVar3];
        ppCVar1 = ppCVar1 + -1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  return;
}

// Append @ 1501ccf30

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Append(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Append
          (CordRepBtree *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          __uint64 param_3)

{
  CordRepBtree *pCVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  pCVar1 = AddData<1>(param_1,&local_18,param_3);
  return pCVar1;
}

// AppendSlow @ 1501ccf60

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AppendSlow(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AppendSlow(CordRepBtree *param_1,CordRep *param_2)

{
  CordRepBtree *pCVar1;
  CordRepBtree *local_res8;
  CordRepBtree **local_res10 [3];
  undefined8 **local_18;
  code *pcStack_10;
  
  local_res8 = param_1;
  if (param_2->tag != '\x03') {
    local_res10[0] = &local_res8;
    local_18 = local_res10;
    pcStack_10 = FUN_1501cafa0;
    Consume(param_2,&local_18);
    return local_res8;
  }
  if (param_2->storage[0] <= *(byte *)((longlong)&param_1->_padding_ + 5)) {
    pCVar1 = Merge<1>(param_1,(CordRepBtree *)param_2);
    return pCVar1;
  }
  pCVar1 = Merge<0>((CordRepBtree *)param_2,param_1);
  return pCVar1;
}

// AssertValid @ 1501ccfe0

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::AssertValid(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,bool) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::AssertValid(CordRepBtree *param_1,bool param_2)

{
  return param_1;
}

// FUN_1501cd070 @ 1501cd070

longlong FUN_1501cd070(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  lVar4 = (longlong)param_3;
  uVar5 = 0;
  uVar6 = uVar3;
  plVar1 = param_1;
  if (0 < param_3) {
    do {
      uVar5 = (uint)uVar6;
      if (*(int *)(param_2 + 8) != 2) break;
      plVar1[1] = param_2;
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
      param_2 = *(longlong *)(param_2 + 8 + (ulonglong)*(byte *)(param_2 + 0xf) * 8);
      uVar6 = (ulonglong)uVar5;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar3 < lVar4);
  }
  lVar2 = (longlong)(int)uVar5;
  *(uint *)param_1 = (*(int *)(param_2 + 8) == 2) + uVar5;
  if (lVar2 < lVar4) {
    param_1 = param_1 + lVar2;
    lVar4 = lVar4 - lVar2;
    do {
      param_1 = param_1 + 1;
      *param_1 = param_2;
      param_2 = *(longlong *)(param_2 + 8 + (ulonglong)*(byte *)(param_2 + 0xf) * 8);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_2;
}

// FUN_1501cd110 @ 1501cd110

longlong FUN_1501cd110(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  lVar4 = (longlong)param_3;
  uVar5 = 0;
  uVar6 = uVar3;
  plVar1 = param_1;
  if (0 < param_3) {
    do {
      uVar5 = (uint)uVar6;
      if (*(int *)(param_2 + 8) != 2) break;
      plVar1[1] = param_2;
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
      param_2 = *(longlong *)(param_2 + 0x10 + (ulonglong)*(byte *)(param_2 + 0xe) * 8);
      uVar6 = (ulonglong)uVar5;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar3 < lVar4);
  }
  lVar2 = (longlong)(int)uVar5;
  *(uint *)param_1 = (*(int *)(param_2 + 8) == 2) + uVar5;
  if (lVar2 < lVar4) {
    param_1 = param_1 + lVar2;
    lVar4 = lVar4 - lVar2;
    do {
      param_1 = param_1 + 1;
      *param_1 = param_2;
      param_2 = *(longlong *)(param_2 + 0x10 + (ulonglong)*(byte *)(param_2 + 0xe) * 8);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_2;
}

// ConsumeBeginTo @ 1501cd1b0

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::ConsumeBeginTo(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,unsigned __int64,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::ConsumeBeginTo
          (CordRepBtree *param_1,__uint64 param_2,__uint64 param_3)

{
  RefcountAndFlags *pRVar1;
  longlong *plVar2;
  CordRep **ppCVar3;
  atomic<int> aVar4;
  CordRep *pCVar5;
  longlong lVar6;
  CordRepBtree *pCVar7;
  CordRep **ppCVar8;
  
  if ((int)param_1->_padding_ == 2) {
    ppCVar8 = param_1->edges_ + param_2;
    ppCVar3 = ppCVar8 + (*(byte *)((longlong)&param_1->_padding_ + 7) - param_2);
    for (; ppCVar8 != ppCVar3; ppCVar8 = ppCVar8 + 1) {
      pCVar5 = *ppCVar8;
      if ((pCVar5->refcount).count_ == (atomic<int>)0x2) {
LAB_1501cd218:
        CordRep::Destroy(pCVar5);
      }
      else {
        LOCK();
        pRVar1 = &pCVar5->refcount;
        aVar4 = pRVar1->count_;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x2) goto LAB_1501cd218;
      }
    }
    *(char *)((longlong)&param_1->_padding_ + 7) = (char)param_2;
    param_1->_padding_ = param_3;
    pCVar7 = param_1;
  }
  else {
    pCVar7 = CopyBeginTo(param_1,param_2,param_3);
    LOCK();
    plVar2 = &param_1->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -2;
    UNLOCK();
    if ((int)lVar6 == 2) {
      CordRep::Destroy((CordRep *)param_1);
    }
  }
  return pCVar7;
}

// Copy @ 1501cd280

/* private: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Copy(void)const __ptr64 */

CordRepBtree * __thiscall absl::lts_20240722::cord_internal::CordRepBtree::Copy(CordRepBtree *this)

{
  CordRep **ppCVar1;
  longlong lVar2;
  undefined8 uVar3;
  CordRepBtree *pCVar4;
  ulonglong uVar5;
  CordRep **ppCVar6;
  
  lVar2 = this->_padding_;
  pCVar4 = ::operator_new(0x40);
  if (pCVar4 == (CordRepBtree *)0x0) {
    pCVar4 = (CordRepBtree *)0x0;
  }
  else {
    *(undefined4 *)&pCVar4->_padding_ = 2;
  }
  pCVar4->_padding_ = lVar2;
  uVar3 = *(undefined8 *)((longlong)this->edges_ + 4);
  *(undefined8 *)((longlong)&pCVar4->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  *(undefined8 *)((longlong)pCVar4->edges_ + 4) = uVar3;
  uVar3 = *(undefined8 *)((longlong)this->edges_ + 0x14);
  *(undefined8 *)((longlong)pCVar4->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
  *(undefined8 *)((longlong)pCVar4->edges_ + 0x14) = uVar3;
  uVar3 = *(undefined8 *)((longlong)this->edges_ + 0x24);
  *(undefined8 *)((longlong)pCVar4->edges_ + 0x1c) = *(undefined8 *)((longlong)this->edges_ + 0x1c);
  *(undefined8 *)((longlong)pCVar4->edges_ + 0x24) = uVar3;
  *(undefined4 *)((longlong)pCVar4->edges_ + 0x2c) = *(undefined4 *)((longlong)this->edges_ + 0x2c);
  uVar5 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  ppCVar6 = this->edges_ + uVar5;
  ppCVar1 = ppCVar6 + (*(byte *)((longlong)&this->_padding_ + 7) - uVar5);
  for (; ppCVar6 != ppCVar1; ppCVar6 = ppCVar6 + 1) {
    LOCK();
    ((*ppCVar6)->refcount).count_ = (atomic<int>)((int)((*ppCVar6)->refcount).count_ + 2);
    UNLOCK();
  }
  return pCVar4;
}

// CopyBeginTo @ 1501cd330

/* private: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CopyBeginTo(unsigned __int64,unsigned
   __int64)const __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CopyBeginTo
          (CordRepBtree *this,__uint64 param_1,__uint64 param_2)

{
  CordRep **ppCVar1;
  undefined8 uVar2;
  CordRepBtree *pCVar3;
  ulonglong uVar4;
  CordRep **ppCVar5;
  
  pCVar3 = ::operator_new(0x40);
  if (pCVar3 == (CordRepBtree *)0x0) {
    pCVar3 = (CordRepBtree *)0x0;
  }
  else {
    *(undefined4 *)&pCVar3->_padding_ = 2;
  }
  pCVar3->_padding_ = param_2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 4);
  *(undefined8 *)((longlong)&pCVar3->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  *(undefined8 *)((longlong)pCVar3->edges_ + 4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 0x14);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x14) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 0x24);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x1c) = *(undefined8 *)((longlong)this->edges_ + 0x1c);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x24) = uVar2;
  *(undefined4 *)((longlong)pCVar3->edges_ + 0x2c) = *(undefined4 *)((longlong)this->edges_ + 0x2c);
  uVar4 = (ulonglong)*(byte *)((longlong)&pCVar3->_padding_ + 6);
  *(char *)((longlong)&pCVar3->_padding_ + 7) = (char)param_1;
  ppCVar5 = pCVar3->edges_ + uVar4;
  ppCVar1 = ppCVar5 + ((param_1 & 0xff) - uVar4);
  for (; ppCVar5 != ppCVar1; ppCVar5 = ppCVar5 + 1) {
    LOCK();
    ((*ppCVar5)->refcount).count_ = (atomic<int>)((int)((*ppCVar5)->refcount).count_ + 2);
    UNLOCK();
  }
  return pCVar3;
}

// CopyPrefix @ 1501cd3e0

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::CopyResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CopyPrefix(unsigned __int64,bool) __ptr64 */

CopyResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CopyPrefix
          (CordRepBtree *this,CopyResult *__return_storage_ptr__,__uint64 param_1,bool param_2)

{
  RefcountAndFlags *pRVar1;
  CordRep **ppCVar2;
  atomic<int> aVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  CordRepBtree *pCVar9;
  CordRepBtree *pCVar10;
  CordRepBtree *pCVar11;
  CordRep **ppCVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uchar uVar15;
  ulonglong uVar16;
  __uint64 _Var17;
  CordRepBtree *pCVar18;
  uint uVar19;
  uint uVar20;
  CordRepBtree *pCVar21;
  __uint64 _Var22;
  undefined4 uStack_4c;
  
  uVar19 = (uint)*(byte *)((longlong)&this->_padding_ + 5);
  if (param_2) {
    uVar13 = ((CordRepBtree *)this->edges_[*(byte *)((longlong)&this->_padding_ + 6)])->_padding_;
    pCVar11 = (CordRepBtree *)this->edges_[*(byte *)((longlong)&this->_padding_ + 6)];
    while (pCVar9 = pCVar11, param_1 <= uVar13) {
      uVar19 = uVar19 - 1;
      if ((int)uVar19 < 0) {
        LOCK();
        ((RefcountAndFlags *)&pCVar9->_padding_)->count_ =
             (atomic<int>)((int)((RefcountAndFlags *)&pCVar9->_padding_)->count_ + 2);
        UNLOCK();
        if (param_1 != pCVar9->_padding_) {
          if (param_1 == 0) {
            LOCK();
            pRVar1 = (RefcountAndFlags *)&pCVar9->_padding_;
            aVar3 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x2) {
              CordRep::Destroy((CordRep *)pCVar9);
            }
            __return_storage_ptr__->height = -1;
            __return_storage_ptr__->edge = (CordRep *)0x0;
            return __return_storage_ptr__;
          }
          pCVar9 = (CordRepBtree *)FUN_1501cdaf0(pCVar9,0);
        }
        __return_storage_ptr__->edge = (CordRep *)pCVar9;
        __return_storage_ptr__->height = -1;
        return __return_storage_ptr__;
      }
      pCVar11 = (CordRepBtree *)
                pCVar9->edges_
                [*(uchar *)((longlong)((RefcountAndFlags *)&pCVar9->_padding_ + 1) + 2)];
      this = pCVar9;
      uVar13 = ((CordRepBtree *)
               pCVar9->edges_
               [*(uchar *)((longlong)((RefcountAndFlags *)&pCVar9->_padding_ + 1) + 2)])->_padding_;
    }
  }
  if (this->_padding_ == param_1) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 2;
    UNLOCK();
    __return_storage_ptr__->edge = (CordRep *)this;
    __return_storage_ptr__->height = uVar19;
    return __return_storage_ptr__;
  }
  uVar16 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  ppCVar12 = this->edges_ + uVar16;
  uVar13 = this->edges_[uVar16]->length;
  _Var22 = param_1;
  if (uVar13 <= param_1) {
    do {
      ppCVar2 = ppCVar12 + 1;
      ppCVar12 = ppCVar12 + 1;
      _Var22 = _Var22 - uVar13;
      uVar16 = uVar16 + 1;
      uVar13 = (*ppCVar2)->length;
    } while (uVar13 <= _Var22);
  }
  pCVar9 = CopyBeginTo(this,uVar16,param_1);
  pCVar11 = pCVar9;
  if (_Var22 != 0) {
    pCVar18 = (CordRepBtree *)0x0;
    _Var17 = uVar16;
    pCVar21 = pCVar9;
    uVar20 = uVar19;
    do {
      uVar20 = uVar20 - 1;
      this = (CordRepBtree *)this->edges_[_Var17];
      if ((int)uVar20 < 0) {
        LOCK();
        ((RefcountAndFlags *)&this->_padding_)->count_ =
             (atomic<int>)((int)((RefcountAndFlags *)&this->_padding_)->count_ + 2);
        UNLOCK();
        pCVar11 = this;
        if (_Var22 != this->_padding_) {
          if (_Var22 == 0) {
            LOCK();
            pRVar1 = (RefcountAndFlags *)&this->_padding_;
            aVar3 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            pCVar11 = pCVar18;
            if (aVar3 == (atomic<int>)0x2) {
              CordRep::Destroy((CordRep *)this);
            }
          }
          else {
            pCVar11 = (CordRepBtree *)FUN_1501cdaf0(this,0,_Var22);
          }
        }
        pCVar21->edges_[_Var17] = (CordRep *)pCVar11;
        uVar15 = (char)_Var17 + '\x01';
        __return_storage_ptr__->edge = (CordRep *)pCVar9;
        *(ulonglong *)&__return_storage_ptr__->height = CONCAT44(uStack_4c,uVar19);
        goto LAB_1501cd637;
      }
      uVar16 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&this->_padding_ + 1) + 2);
      ppCVar12 = this->edges_ + uVar16;
      uVar13 = this->edges_[uVar16]->length;
      uVar14 = _Var22;
      if (uVar13 <= _Var22) {
        do {
          ppCVar2 = ppCVar12 + 1;
          ppCVar12 = ppCVar12 + 1;
          uVar14 = uVar14 - uVar13;
          uVar16 = uVar16 + 1;
          uVar13 = (*ppCVar2)->length;
        } while (uVar13 <= uVar14);
      }
      pCVar10 = ::operator_new(0x40);
      pCVar11 = pCVar18;
      if (pCVar10 != (CordRepBtree *)0x0) {
        ((RefcountAndFlags *)&pCVar10->_padding_)->count_ = (atomic<int>)0x2;
        pCVar11 = pCVar10;
      }
      pCVar11->_padding_ = _Var22;
      uVar8 = *(undefined8 *)((longlong)this->edges_ + 4);
      *(undefined8 *)((RefcountAndFlags *)&pCVar11->_padding_ + 1) =
           *(undefined8 *)((RefcountAndFlags *)&this->_padding_ + 1);
      *(undefined8 *)((longlong)pCVar11->edges_ + 4) = uVar8;
      uVar8 = *(undefined8 *)((longlong)this->edges_ + 0x14);
      *(undefined8 *)((longlong)pCVar11->edges_ + 0xc) =
           *(undefined8 *)((longlong)this->edges_ + 0xc);
      *(undefined8 *)((longlong)pCVar11->edges_ + 0x14) = uVar8;
      uVar5 = *(undefined4 *)(this->edges_ + 4);
      uVar6 = *(undefined4 *)((longlong)this->edges_ + 0x24);
      uVar7 = *(undefined4 *)(this->edges_ + 5);
      *(undefined4 *)((longlong)pCVar11->edges_ + 0x1c) =
           *(undefined4 *)((longlong)this->edges_ + 0x1c);
      *(undefined4 *)(pCVar11->edges_ + 4) = uVar5;
      *(undefined4 *)((longlong)pCVar11->edges_ + 0x24) = uVar6;
      *(undefined4 *)(pCVar11->edges_ + 5) = uVar7;
      *(undefined4 *)((longlong)pCVar11->edges_ + 0x2c) =
           *(undefined4 *)((longlong)this->edges_ + 0x2c);
      bVar4 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar11->_padding_ + 1) + 2);
      *(uchar *)((longlong)((RefcountAndFlags *)&pCVar11->_padding_ + 1) + 3) = (uchar)uVar16;
      ppCVar12 = pCVar11->edges_ + bVar4;
      ppCVar2 = ppCVar12 + ((uVar16 & 0xff) - (ulonglong)bVar4);
      for (; ppCVar12 != ppCVar2; ppCVar12 = ppCVar12 + 1) {
        LOCK();
        ((*ppCVar12)->refcount).count_ = (atomic<int>)((int)((*ppCVar12)->refcount).count_ + 2);
        UNLOCK();
      }
      pCVar21->edges_[_Var17] = (CordRep *)pCVar11;
      *(uchar *)((longlong)((RefcountAndFlags *)&pCVar21->_padding_ + 1) + 3) =
           (char)_Var17 + '\x01';
      _Var17 = uVar16;
      pCVar21 = pCVar11;
      _Var22 = uVar14;
    } while (uVar14 != 0);
  }
  uVar15 = (uchar)uVar16;
  __return_storage_ptr__->edge = (CordRep *)pCVar9;
  *(ulonglong *)&__return_storage_ptr__->height = CONCAT44(uStack_4c,uVar19);
  pCVar21 = pCVar11;
LAB_1501cd637:
  *(uchar *)((longlong)((RefcountAndFlags *)&pCVar21->_padding_ + 1) + 3) = uVar15;
  return __return_storage_ptr__;
}

// CopyRaw @ 1501cd6c0

/* private: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CopyRaw(unsigned __int64)const __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CopyRaw(CordRepBtree *this,__uint64 param_1)

{
  undefined8 uVar1;
  CordRepBtree *pCVar2;
  
  pCVar2 = ::operator_new(0x40);
  if (pCVar2 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar2->_padding_ = 2;
  }
  pCVar2->_padding_ = param_1;
  uVar1 = *(undefined8 *)((longlong)this->edges_ + 4);
  *(undefined8 *)((longlong)&pCVar2->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  *(undefined8 *)((longlong)pCVar2->edges_ + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this->edges_ + 0x14);
  *(undefined8 *)((longlong)pCVar2->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
  *(undefined8 *)((longlong)pCVar2->edges_ + 0x14) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this->edges_ + 0x24);
  *(undefined8 *)((longlong)pCVar2->edges_ + 0x1c) = *(undefined8 *)((longlong)this->edges_ + 0x1c);
  *(undefined8 *)((longlong)pCVar2->edges_ + 0x24) = uVar1;
  *(undefined4 *)((longlong)pCVar2->edges_ + 0x2c) = *(undefined4 *)((longlong)this->edges_ + 0x2c);
  return pCVar2;
}

// CopySuffix @ 1501cd720

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::CopyResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CopySuffix(unsigned __int64) __ptr64 */

CopyResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CopySuffix
          (CordRepBtree *this,CopyResult *__return_storage_ptr__,__uint64 param_1)

{
  RefcountAndFlags *pRVar1;
  CordRep **ppCVar2;
  atomic<int> aVar3;
  byte bVar4;
  CordRep *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong64 uVar10;
  CordRepBtree *pCVar11;
  CordRepBtree *pCVar12;
  CordRepBtree *pCVar13;
  CordRep **ppCVar14;
  __uint64 _Var15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  __uint64 _Var19;
  uint uVar20;
  uint uVar21;
  undefined4 uStack_3c;
  
  uVar20 = (uint)*(byte *)((longlong)&this->_padding_ + 5);
  _Var19 = this->_padding_ - param_1;
  uVar17 = ((CordRepBtree *)this->edges_[(ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1])
           ->_padding_;
  pCVar11 = (CordRepBtree *)this->edges_[(ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1];
  while (pCVar12 = pCVar11, _Var19 <= uVar17) {
    param_1 = uVar17 - _Var19;
    uVar20 = uVar20 - 1;
    if ((int)uVar20 < 0) {
      LOCK();
      *(int *)&pCVar12->_padding_ = (int)pCVar12->_padding_ + 2;
      UNLOCK();
      if (param_1 != 0) {
        pCVar12 = (CordRepBtree *)FUN_1501cdaf0(pCVar12,param_1,pCVar12->_padding_ - param_1);
      }
      __return_storage_ptr__->edge = (CordRep *)pCVar12;
      __return_storage_ptr__->height = uVar20;
      return __return_storage_ptr__;
    }
    pCVar11 = (CordRepBtree *)
              pCVar12->edges_[(ulonglong)*(byte *)((longlong)&pCVar12->_padding_ + 7) - 1];
    this = pCVar12;
    uVar17 = ((CordRepBtree *)
             pCVar12->edges_[(ulonglong)*(byte *)((longlong)&pCVar12->_padding_ + 7) - 1])->
             _padding_;
  }
  if (param_1 == 0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 2;
    UNLOCK();
    __return_storage_ptr__->edge = (CordRep *)this;
    __return_storage_ptr__->height = uVar20;
    return __return_storage_ptr__;
  }
  _Var15 = (__uint64)*(byte *)((longlong)&this->_padding_ + 6);
  uVar17 = 0;
  ppCVar14 = this->edges_ + _Var15;
  do {
    pCVar5 = *ppCVar14;
    ppCVar14 = ppCVar14 + 1;
    _Var15 = _Var15 + 1;
    uVar17 = uVar17 + pCVar5->length;
  } while (uVar17 < param_1);
  pCVar12 = CopyToEndFrom(this,_Var15,_Var19);
  uVar10 = uVar17 - param_1;
  pCVar11 = pCVar12;
  uVar21 = uVar20;
  do {
    if (uVar10 == 0) {
      *(char *)((longlong)&pCVar11->_padding_ + 6) = (char)_Var15;
LAB_1501cd992:
      __return_storage_ptr__->edge = (CordRep *)pCVar12;
      *(ulonglong *)&__return_storage_ptr__->height = CONCAT44(uStack_3c,uVar20);
      return __return_storage_ptr__;
    }
    *(char *)((longlong)&pCVar11->_padding_ + 6) = (char)_Var15 + -1;
    this = (CordRepBtree *)this->edges_[_Var15 - 1];
    uVar17 = this->_padding_ - uVar10;
    uVar21 = uVar21 - 1;
    if ((int)uVar21 < 0) {
      LOCK();
      ((RefcountAndFlags *)&this->_padding_)->count_ =
           (atomic<int>)((int)((RefcountAndFlags *)&this->_padding_)->count_ + 2);
      UNLOCK();
      if (uVar10 != this->_padding_) {
        if (uVar10 == 0) {
          LOCK();
          pRVar1 = (RefcountAndFlags *)&this->_padding_;
          aVar3 = pRVar1->count_;
          pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x2) {
            CordRep::Destroy((CordRep *)this);
          }
          pCVar11->edges_[_Var15 - 1] = (CordRep *)0x0;
          goto LAB_1501cd992;
        }
        this = (CordRepBtree *)FUN_1501cdaf0(this,uVar17,uVar10);
      }
      pCVar11->edges_[_Var15 - 1] = (CordRep *)this;
      goto LAB_1501cd992;
    }
    uVar18 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&this->_padding_ + 1) + 2);
    uVar16 = 0;
    if (uVar17 != 0) {
      ppCVar14 = this->edges_ + uVar18;
      do {
        pCVar5 = *ppCVar14;
        ppCVar14 = ppCVar14 + 1;
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 + pCVar5->length;
      } while (uVar16 < uVar17);
    }
    pCVar13 = ::operator_new(0x40);
    if (pCVar13 == (CordRepBtree *)0x0) {
      pCVar13 = (CordRepBtree *)0x0;
    }
    else {
      ((RefcountAndFlags *)&pCVar13->_padding_)->count_ = (atomic<int>)0x2;
    }
    pCVar13->_padding_ = uVar10;
    uVar9 = *(undefined8 *)((longlong)this->edges_ + 4);
    *(undefined8 *)((RefcountAndFlags *)&pCVar13->_padding_ + 1) =
         *(undefined8 *)((RefcountAndFlags *)&this->_padding_ + 1);
    *(undefined8 *)((longlong)pCVar13->edges_ + 4) = uVar9;
    uVar9 = *(undefined8 *)((longlong)this->edges_ + 0x14);
    *(undefined8 *)((longlong)pCVar13->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc)
    ;
    *(undefined8 *)((longlong)pCVar13->edges_ + 0x14) = uVar9;
    uVar6 = *(undefined4 *)(this->edges_ + 4);
    uVar7 = *(undefined4 *)((longlong)this->edges_ + 0x24);
    uVar8 = *(undefined4 *)(this->edges_ + 5);
    *(undefined4 *)((longlong)pCVar13->edges_ + 0x1c) =
         *(undefined4 *)((longlong)this->edges_ + 0x1c);
    *(undefined4 *)(pCVar13->edges_ + 4) = uVar6;
    *(undefined4 *)((longlong)pCVar13->edges_ + 0x24) = uVar7;
    *(undefined4 *)(pCVar13->edges_ + 5) = uVar8;
    *(undefined4 *)((longlong)pCVar13->edges_ + 0x2c) =
         *(undefined4 *)((longlong)this->edges_ + 0x2c);
    bVar4 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar13->_padding_ + 1) + 3);
    ppCVar14 = pCVar13->edges_ + (uVar18 & 0xff);
    *(uchar *)((longlong)((RefcountAndFlags *)&pCVar13->_padding_ + 1) + 2) = (uchar)uVar18;
    ppCVar2 = ppCVar14 + ((ulonglong)bVar4 - (uVar18 & 0xff));
    for (; ppCVar14 != ppCVar2; ppCVar14 = ppCVar14 + 1) {
      LOCK();
      ((*ppCVar14)->refcount).count_ = (atomic<int>)((int)((*ppCVar14)->refcount).count_ + 2);
      UNLOCK();
    }
    pCVar11->edges_[_Var15 - 1] = (CordRep *)pCVar13;
    _Var15 = uVar18;
    uVar10 = uVar16 - uVar17;
    pCVar11 = pCVar13;
  } while( true );
}

// CopyToEndFrom @ 1501cd9e0

/* private: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CopyToEndFrom(unsigned __int64,unsigned
   __int64)const __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CopyToEndFrom
          (CordRepBtree *this,__uint64 param_1,__uint64 param_2)

{
  CordRep **ppCVar1;
  undefined8 uVar2;
  CordRepBtree *pCVar3;
  CordRep **ppCVar4;
  
  pCVar3 = ::operator_new(0x40);
  if (pCVar3 == (CordRepBtree *)0x0) {
    pCVar3 = (CordRepBtree *)0x0;
  }
  else {
    *(undefined4 *)&pCVar3->_padding_ = 2;
  }
  pCVar3->_padding_ = param_2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 4);
  *(undefined8 *)((longlong)&pCVar3->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  *(undefined8 *)((longlong)pCVar3->edges_ + 4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 0x14);
  ppCVar4 = pCVar3->edges_ + (param_1 & 0xff);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0xc) = *(undefined8 *)((longlong)this->edges_ + 0xc);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x14) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this->edges_ + 0x24);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x1c) = *(undefined8 *)((longlong)this->edges_ + 0x1c);
  *(undefined8 *)((longlong)pCVar3->edges_ + 0x24) = uVar2;
  *(undefined4 *)((longlong)pCVar3->edges_ + 0x2c) = *(undefined4 *)((longlong)this->edges_ + 0x2c);
  *(char *)((longlong)&pCVar3->_padding_ + 6) = (char)param_1;
  ppCVar1 = ppCVar4 + ((ulonglong)*(byte *)((longlong)&pCVar3->_padding_ + 7) - (param_1 & 0xff));
  for (; ppCVar4 != ppCVar1; ppCVar4 = ppCVar4 + 1) {
    LOCK();
    ((*ppCVar4)->refcount).count_ = (atomic<int>)((int)((*ppCVar4)->refcount).count_ + 2);
    UNLOCK();
  }
  return pCVar3;
}

// CreateSlow @ 1501cda90

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::CreateSlow(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl absl::lts_20240722::cord_internal::CordRepBtree::CreateSlow(CordRep *param_1)

{
  CordRepBtree *local_res8;
  CordRepBtree **local_res10 [3];
  undefined8 **local_18;
  code *pcStack_10;
  
  if (param_1->tag == '\x03') {
    return (CordRepBtree *)param_1;
  }
  local_res10[0] = &local_res8;
  local_res8 = (CordRepBtree *)0x0;
  local_18 = local_res10;
  pcStack_10 = FUN_1501cb010;
  Consume(local_18._0_4_,&local_18);
  return local_res8;
}

// FUN_1501cdaf0 @ 1501cdaf0

void FUN_1501cdaf0(CordRep *param_1,longlong param_2,undefined8 param_3)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  CordRep *pCVar4;
  
  pCVar4 = param_1;
  if (param_1->tag == '\x01') {
    param_2 = param_2 + param_1[1].length;
    pCVar4 = *(CordRep **)&param_1[1].refcount;
    LOCK();
    (pCVar4->refcount).count_ = (atomic<int>)((int)(pCVar4->refcount).count_ + 2);
    UNLOCK();
    LOCK();
    pRVar1 = &param_1->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      absl::lts_20240722::cord_internal::CordRep::Destroy(param_1);
    }
  }
  puVar3 = operator_new(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 1) = 2;
  }
  *puVar3 = param_3;
  puVar3[3] = pCVar4;
  *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
  puVar3[2] = param_2;
  return;
}

// Delete @ 1501cdb80

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Delete(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Delete(CordRepBtree *param_1)

{
  ::operator_delete(param_1,0x40);
  return;
}

// FUN_1501cdb90 @ 1501cdb90

void FUN_1501cdb90(void *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  
  bVar3 = *(byte *)((longlong)param_1 + 0xc);
  if (5 < bVar3) {
    if (bVar3 < 0x43) {
      operator_delete(param_1,(longlong)(int)((uint)bVar3 * 8 + -0x10));
      return;
    }
    if (bVar3 < 0xbb) {
      operator_delete(param_1,(longlong)(int)((bVar3 - 0x3a) * 0x40));
      return;
    }
    operator_delete(param_1,(longlong)(int)((bVar3 - 0xb8) * 0x1000));
    return;
  }
  if (bVar3 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0001501cdbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)param_1 + 0x18))();
    return;
  }
  pvVar4 = *(void **)((longlong)param_1 + 0x18);
  if (*(int *)((longlong)pvVar4 + 8) != 2) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar4 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -2;
    UNLOCK();
    if (iVar2 != 2) goto LAB_1501cdc98;
  }
  bVar3 = *(byte *)((longlong)pvVar4 + 0xc);
  if (5 < bVar3) {
    if (bVar3 < 0x43) {
      operator_delete(pvVar4,(longlong)(int)((uint)bVar3 * 8 + -0x10));
      operator_delete(param_1,0x20);
      return;
    }
    if (bVar3 < 0xbb) {
      operator_delete(pvVar4,(longlong)(int)((bVar3 - 0x3a) * 0x40));
      operator_delete(param_1,0x20);
      return;
    }
    operator_delete(pvVar4,(longlong)(int)((bVar3 - 0xb8) * 0x1000));
    operator_delete(param_1,0x20);
    return;
  }
  (**(code **)((longlong)pvVar4 + 0x18))(pvVar4);
LAB_1501cdc98:
  operator_delete(param_1,0x20);
  return;
}

// FUN_1501cdcb0 @ 1501cdcb0

void FUN_1501cdcb0(void *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)((longlong)param_1 + 0x18);
  if (*(int *)((longlong)pvVar4 + 8) != 2) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar4 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -2;
    UNLOCK();
    if (iVar2 != 2) goto LAB_1501cdd5f;
  }
  bVar3 = *(byte *)((longlong)pvVar4 + 0xc);
  if (5 < bVar3) {
    if (bVar3 < 0x43) {
      operator_delete(pvVar4,(longlong)(int)((uint)bVar3 * 8 + -0x10));
      operator_delete(param_1,0x20);
      return;
    }
    if (bVar3 < 0xbb) {
      operator_delete(pvVar4,(longlong)(int)((bVar3 - 0x3a) * 0x40));
      operator_delete(param_1,0x20);
      return;
    }
    operator_delete(pvVar4,(longlong)(int)((bVar3 - 0xb8) * 0x1000));
    operator_delete(param_1,0x20);
    return;
  }
  (**(code **)((longlong)pvVar4 + 0x18))(pvVar4);
LAB_1501cdd5f:
  operator_delete(param_1,0x20);
  return;
}

// Destroy @ 1501cdd80

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Destroy(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Destroy(CordRepBtree *param_1)

{
  RefcountAndFlags *pRVar1;
  longlong *plVar2;
  int *piVar3;
  CordRep **ppCVar4;
  uchar *puVar5;
  atomic<int> aVar6;
  int iVar7;
  char cVar8;
  CordRep *pCVar9;
  CordRepBtree *pCVar10;
  longlong lVar11;
  ulonglong uVar12;
  uchar *puVar13;
  CordRep **ppCVar14;
  
  uVar12 = (ulonglong)*(byte *)((longlong)&param_1->_padding_ + 6);
  ppCVar14 = param_1->edges_ + uVar12;
  cVar8 = *(char *)((longlong)&param_1->_padding_ + 5);
  ppCVar4 = ppCVar14 + (*(byte *)((longlong)&param_1->_padding_ + 7) - uVar12);
  if (cVar8 == '\0') {
    for (; ppCVar14 != ppCVar4; ppCVar14 = ppCVar14 + 1) {
      if (((*ppCVar14)->refcount).count_ == (atomic<int>)0x2) {
LAB_1501cdf2b:
        FUN_1501cdb90();
      }
      else {
        LOCK();
        pRVar1 = &(*ppCVar14)->refcount;
        aVar6 = pRVar1->count_;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x2) goto LAB_1501cdf2b;
      }
    }
  }
  else if (cVar8 == '\x01') {
    for (; ppCVar14 != ppCVar4; ppCVar14 = ppCVar14 + 1) {
      pCVar9 = *ppCVar14;
      if ((pCVar9->refcount).count_ == (atomic<int>)0x2) {
LAB_1501cde9b:
        puVar13 = pCVar9[1].storage + (ulonglong)pCVar9->storage[1] * 8 + -0xd;
        puVar5 = puVar13 + ((ulonglong)pCVar9->storage[2] - (ulonglong)pCVar9->storage[1]) * 8;
        for (; puVar13 != puVar5; puVar13 = puVar13 + 8) {
          if (*(int *)(*(longlong *)puVar13 + 8) == 2) {
LAB_1501cdedb:
            FUN_1501cdb90();
          }
          else {
            LOCK();
            piVar3 = (int *)(*(longlong *)puVar13 + 8);
            iVar7 = *piVar3;
            *piVar3 = *piVar3 + -2;
            UNLOCK();
            if (iVar7 == 2) goto LAB_1501cdedb;
          }
        }
        ::operator_delete(pCVar9,0x40);
      }
      else {
        LOCK();
        pRVar1 = &pCVar9->refcount;
        aVar6 = pRVar1->count_;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x2) goto LAB_1501cde9b;
      }
    }
  }
  else {
    for (; ppCVar14 != ppCVar4; ppCVar14 = ppCVar14 + 1) {
      pCVar9 = *ppCVar14;
      if ((pCVar9->refcount).count_ == (atomic<int>)0x2) {
LAB_1501cddec:
        puVar13 = pCVar9[1].storage + (ulonglong)pCVar9->storage[1] * 8 + -0xd;
        puVar5 = puVar13 + ((ulonglong)pCVar9->storage[2] - (ulonglong)pCVar9->storage[1]) * 8;
        for (; puVar13 != puVar5; puVar13 = puVar13 + 8) {
          pCVar10 = *(CordRepBtree **)puVar13;
          if ((int)pCVar10->_padding_ == 2) {
LAB_1501cde2b:
            Destroy(pCVar10);
          }
          else {
            LOCK();
            plVar2 = &pCVar10->_padding_;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -2;
            UNLOCK();
            if ((int)lVar11 == 2) goto LAB_1501cde2b;
          }
        }
        ::operator_delete(pCVar9,0x40);
      }
      else {
        LOCK();
        pRVar1 = &pCVar9->refcount;
        aVar6 = pRVar1->count_;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x2) goto LAB_1501cddec;
      }
    }
  }
  ::operator_delete(param_1,0x40);
  return;
}

// Dump @ 1501cdf50

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Dump(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64) */

void __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Dump
          (CordRep *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  std::operator<<<std::char_traits<char>_>(param_2,"===================================\n");
  if (param_1 != (CordRep *)0x0) {
    FUN_1501ce100(param_1,0,param_2,0);
    return;
  }
  std::operator<<<std::char_traits<char>_>(param_2,"NULL\n");
  return;
}

// Dump @ 1501cdfb0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Dump(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64) */

void __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Dump
          (CordRep *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  std::operator<<<std::char_traits<char>_>(param_3,"===================================\n");
  if (param_2->_Mysize != 0) {
    pbVar1 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                       (param_3,param_2->_Mydata,param_2->_Mysize);
    std::operator<<<std::char_traits<char>_>(pbVar1,'\n');
    std::operator<<<std::char_traits<char>_>(param_3,"-----------------------------------\n");
  }
  if (param_1 != (CordRep *)0x0) {
    FUN_1501ce100(param_1,0,param_3,0);
    return;
  }
  std::operator<<<std::char_traits<char>_>(param_3,"NULL\n");
  return;
}

// Dump @ 1501ce050

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Dump(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,bool,class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64) */

void __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Dump
          (CordRep *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,bool param_3,
          basic_ostream<char,std::char_traits<char>_> *param_4)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  std::operator<<<std::char_traits<char>_>(param_4,"===================================\n");
  if (param_2->_Mysize != 0) {
    pbVar1 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                       (param_4,param_2->_Mydata,param_2->_Mysize);
    std::operator<<<std::char_traits<char>_>(pbVar1,'\n');
    std::operator<<<std::char_traits<char>_>(param_4,"-----------------------------------\n");
  }
  if (param_1 == (CordRep *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_4,"NULL\n");
  }
  else {
    FUN_1501ce100(param_1,param_3,param_4,0);
  }
  return;
}

// FUN_1501ce100 @ 1501ce100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1501ce100(CordRepFlat *param_1,undefined1 param_2,
                  basic_ostream<char,std::char_traits<char>_> *param_3,longlong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  void *pvVar3;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var4;
  _Bxty *p_Var5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  __uint64 _Var8;
  undefined8 uVar9;
  void *pvVar10;
  char *****pppppcVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_2c8 [32];
  basic_ostream<char,std::char_traits<char>_> *local_2a8;
  undefined1 local_2a0;
  undefined4 local_298;
  CordRepFlat *local_290;
  undefined2 local_288;
  undefined *local_280;
  undefined8 uStack_278;
  char *local_270;
  undefined8 uStack_268;
  char *local_260;
  undefined8 uStack_258;
  _Bxty local_250;
  undefined8 local_240;
  ulonglong uStack_238;
  char ****local_230;
  undefined8 uStack_228;
  ulong64 local_220;
  ulong64 uStack_218;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_210;
  char ****local_1f0;
  undefined8 uStack_1e8;
  char *local_1e0;
  ulong64 uStack_1d8;
  _Bxty local_1d0;
  ulong64 local_1c0;
  ulonglong local_1b8;
  _Bxty local_1b0;
  undefined8 local_1a0;
  ulonglong uStack_198;
  _Bxty local_190;
  undefined8 local_180;
  ulonglong uStack_178;
  AlphaNum local_170;
  AlphaNum local_140;
  AlphaNum local_110;
  AlphaNum local_e0;
  AlphaNum local_b0;
  AlphaNum local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_298 = 0;
  bVar14 = *(int *)&param_1->field_0x8 != 2;
  if (bVar14) {
    local_210._Mypair._Myval2._Bx._Ptr = ")";
    local_210._Mypair._Myval2._Bx._8_8_ = 1;
    local_110.piece_._Mydata = ")";
    local_110.piece_._Mysize = 1;
    local_170.piece_._Mysize =
         (ulong64)absl::lts_20240722::numbers_internal::FastIntToBuffer
                            ((longlong)(*(int *)&param_1->field_0x8 >> 1),local_170.digits_);
    local_170.piece_._Mysize = local_170.piece_._Mysize + (-0x10 - (longlong)&local_170);
    local_170.piece_._Mydata = local_170.digits_;
    local_230 = (char ****)0x1536f4480;
    uStack_228 = 7;
    local_e0.piece_._Mydata = "Shared(";
    local_e0.piece_._Mysize = 7;
    p_Var5 = (_Bxty *)absl::lts_20240722::StrCat
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_190,&local_e0,&local_170,&local_110);
  }
  else {
    local_250._8_8_ = 0;
    local_240 = 7;
    uStack_238 = 0xf;
    local_250._4_2_ = s_Private._4_2_;
    local_250._0_4_ = s_Private._0_4_;
    local_250._Buf[6] = s_Private[6];
    local_250._Buf[7] = 0;
    p_Var5 = &local_250;
  }
  local_1f0 = (char ****)0x0;
  uStack_1e8 = 0;
  local_1e0 = (char *)0x0;
  uStack_1d8 = 0;
  local_1f0 = (char ****)p_Var5->_Ptr;
  uStack_1e8 = *(undefined8 *)((longlong)p_Var5 + 8);
  local_1e0 = p_Var5[1]._Ptr;
  uStack_1d8 = *(ulong64 *)((longlong)p_Var5 + 0x18);
  p_Var5[1]._Ptr = (char *)0x0;
  *(ulong64 *)((longlong)p_Var5 + 0x18) = 0xf;
  p_Var5->_Buf[0] = '\0';
  if (bVar14) {
    if (0xf < uStack_178) {
      uVar12 = uStack_178 + 1;
      pvVar3 = (void *)CONCAT71(local_190._1_7_,local_190._Buf[0]);
      pvVar10 = pvVar3;
      if (0xfff < uVar12) {
        uVar12 = uStack_178 + 0x28;
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,uVar12);
    }
    local_180 = ___xmm_000000000000000f0000000000000000;
    uStack_178 = _UNK_15076add8;
    local_190._Buf[0] = '\0';
  }
  if ((!bVar14) && (0xf < uStack_238)) {
    uVar12 = uStack_238 + 1;
    uVar9 = local_250._Ptr;
    if (0xfff < uVar12) {
      uVar12 = uStack_238 + 0x28;
      uVar9 = *(undefined8 *)(local_250._Ptr + -8);
      if ((char *)0x1f < local_250._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar9,uVar12);
  }
  local_250._8_8_ = 0;
  local_240 = ___xmm_000000000000000f0000000000000000;
  uStack_238 = _UNK_15076add8;
  local_250._Ptr = (char *)0x0;
  local_288 = 0x3001;
  local_290 = param_1;
  absl::lts_20240722::strings_internal::ExtractStringification<absl::lts_20240722::Hex>
            (&local_e0.piece_,(StringifySink *)local_250._Buf,(Hex *)&local_290);
  local_280 = &s_0x;
  uStack_278 = 2;
  local_110.piece_._Mydata = "0x";
  local_110.piece_._Mysize = 2;
  absl::lts_20240722::StrCat
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1d0,
             &local_110,&local_e0);
  if (0xf < uStack_238) {
    uVar12 = uStack_238 + 1;
    uVar9 = local_250._Ptr;
    if (0xfff < uVar12) {
      uVar12 = uStack_238 + 0x28;
      uVar9 = *(undefined8 *)(local_250._Ptr + -8);
      if ((char *)0x1f < local_250._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar9,uVar12);
  }
  local_240 = ___xmm_000000000000000f0000000000000000;
  uStack_238 = _UNK_15076add8;
  local_250._Ptr = local_250._Ptr & 0xffffffffffffff00;
  local_2a8 = param_3;
  local_2a0 = param_2;
  pbVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1b0,
                      param_4 * 2,' ');
  p_Var4 = &pbVar6->_Mypair;
  if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar6->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     (param_3,(char *)pbVar6,(p_Var4->_Myval2)._Mysize);
  pppppcVar11 = &local_1f0;
  if (0xf < uStack_1d8) {
    pppppcVar11 = (char *****)local_1f0;
  }
  pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     (pbVar7,(char *)pppppcVar11,(ulong64)local_1e0);
  pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7," (");
  p_Var5 = &local_1d0;
  if (0xf < local_1b8) {
    p_Var5 = (_Bxty *)CONCAT71(local_1d0._1_7_,local_1d0._Buf[0]);
  }
  pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     (pbVar7,p_Var5->_Buf,local_1c0);
  std::operator<<<std::char_traits<char>_>(pbVar7,") ");
  if (0xf < uStack_198) {
    uVar12 = uStack_198 + 1;
    pvVar3 = (void *)CONCAT71(local_1b0._1_7_,local_1b0._Buf[0]);
    pvVar10 = pvVar3;
    if (0xfff < uVar12) {
      uVar12 = uStack_198 + 0x28;
      pvVar10 = *(void **)((longlong)pvVar3 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,uVar12);
  }
  bVar2 = param_1->field_0xc;
  if (bVar2 == 3) {
    bVar14 = param_1->field_0xd == 0;
    if (bVar14) {
      local_210._Mypair._Myval2._Bx._8_8_ = 0;
      local_210._Mypair._Myval2._Mysize = 4;
      local_210._Mypair._Myval2._Myres = 0xf;
      local_210._Mypair._Myval2._Bx._Ptr = (char *)0x6661654c;
      pbVar6 = &local_210;
    }
    else {
      local_270 = ")";
      uStack_268 = 1;
      local_b0.piece_._Mydata = ")";
      local_b0.piece_._Mysize = 1;
      local_140.piece_._Mysize =
           (ulong64)absl::lts_20240722::numbers_internal::FastIntToBuffer
                              ((uint)(byte)param_1->field_0xd,local_140.digits_);
      local_140.piece_._Mysize = local_140.piece_._Mysize + (-0x10 - (longlong)&local_140);
      local_140.piece_._Mydata = local_140.digits_;
      local_260 = "Node(";
      uStack_258 = 5;
      local_80.piece_._Mydata = "Node(";
      local_80.piece_._Mysize = 5;
      pbVar6 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1b0,&local_80,&local_140,&local_b0);
    }
    local_230 = (char ****)0x0;
    uStack_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_230 = (char ****)(pbVar6->_Mypair)._Myval2._Bx._Ptr;
    uStack_228 = *(undefined8 *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + 8);
    local_220 = (pbVar6->_Mypair)._Myval2._Mysize;
    uStack_218 = (pbVar6->_Mypair)._Myval2._Myres;
    (pbVar6->_Mypair)._Myval2._Mysize = 0;
    (pbVar6->_Mypair)._Myval2._Myres = 0xf;
    (pbVar6->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    if ((bVar14) && (0xf < local_210._Mypair._Myval2._Myres)) {
      uVar12 = local_210._Mypair._Myval2._Myres + 1;
      uVar9 = local_210._Mypair._Myval2._Bx._Ptr;
      if (0xfff < uVar12) {
        uVar12 = local_210._Mypair._Myval2._Myres + 0x28;
        uVar9 = *(undefined8 *)(local_210._Mypair._Myval2._Bx._Ptr + -8);
        if ((char *)0x1f < local_210._Mypair._Myval2._Bx._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar9,uVar12);
    }
    if (!bVar14) {
      if (0xf < uStack_198) {
        uVar12 = uStack_198 + 1;
        pvVar3 = (void *)CONCAT71(local_1b0._1_7_,local_1b0._Buf[0]);
        pvVar10 = pvVar3;
        if (0xfff < uVar12) {
          uVar12 = uStack_198 + 0x28;
          pvVar10 = *(void **)((longlong)pvVar3 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,uVar12);
      }
      local_1a0 = ___xmm_000000000000000f0000000000000000;
      uStack_198 = _UNK_15076add8;
      local_1b0._Buf[0] = '\0';
    }
    pppppcVar11 = &local_230;
    if (0xf < uStack_218) {
      pppppcVar11 = (char *****)local_230;
    }
    pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                       (param_3,(char *)pppppcVar11,local_220);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", len = ");
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,*(__uint64 *)param_1);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", begin = ");
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,(ulonglong)(byte)param_1->field_0xe);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", end = ");
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,(ulonglong)(byte)param_1->field_0xf);
    std::operator<<<std::char_traits<char>_>(pbVar7,"\n");
    puVar13 = (undefined8 *)(&param_1[1].field_0x0 + (ulonglong)(byte)param_1->field_0xe * 8);
    puVar1 = puVar13 + ((ulonglong)(byte)param_1->field_0xf - (ulonglong)(byte)param_1->field_0xe);
    for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
      FUN_1501ce100(*puVar13,param_2,param_3,param_4 + 1);
    }
    if (0xf < uStack_218) {
      uVar12 = uStack_218 + 1;
      pppppcVar11 = (char *****)local_230;
      if (0xfff < uVar12) {
        uVar12 = uStack_218 + 0x28;
        pppppcVar11 = (char *****)local_230[-1];
        if ((char *)0x1f < (char *)((longlong)local_230 + (-8 - (longlong)pppppcVar11))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppppcVar11,uVar12);
    }
  }
  else if (bVar2 == 1) {
    pbVar7 = std::operator<<<std::char_traits<char>_>(param_3,"Substring, len = ");
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,*(__uint64 *)param_1);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", start = ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,*(__uint64 *)(param_1 + 1));
    FUN_1501ccc80(&local_2a8,param_1);
    FUN_1501ce100(*(undefined8 *)&param_1[1].field_0x8,param_2,param_3,param_4 + 1);
  }
  else {
    if (bVar2 < 6) {
      if (bVar2 != 5) goto LAB_1501ce7f1;
      pbVar7 = std::operator<<<std::char_traits<char>_>(param_3,"Extn, len = ");
      _Var8 = *(__uint64 *)param_1;
    }
    else {
      pbVar7 = std::operator<<<std::char_traits<char>_>(param_3,"Flat, len = ");
      pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar7,*(__uint64 *)param_1);
      pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", cap = ");
      _Var8 = absl::lts_20240722::cord_internal::CordRepFlat::Capacity(param_1);
    }
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,_Var8);
    FUN_1501ccc80(&local_2a8,param_1);
  }
LAB_1501ce7f1:
  if (0xf < local_1b8) {
    uVar12 = local_1b8 + 1;
    pvVar3 = (void *)CONCAT71(local_1d0._1_7_,local_1d0._Buf[0]);
    pvVar10 = pvVar3;
    if (0xfff < uVar12) {
      uVar12 = local_1b8 + 0x28;
      pvVar10 = *(void **)((longlong)pvVar3 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,uVar12);
  }
  local_1c0 = 0;
  local_1b8 = 0xf;
  local_1d0._Buf[0] = '\0';
  if (0xf < uStack_1d8) {
    uVar12 = uStack_1d8 + 1;
    pppppcVar11 = (char *****)local_1f0;
    if (0xfff < uVar12) {
      uVar12 = uStack_1d8 + 0x28;
      pppppcVar11 = (char *****)local_1f0[-1];
      if ((char *)0x1f < (char *)((longlong)local_1f0 + (-8 - (longlong)pppppcVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pppppcVar11,uVar12);
  }
  return;
}

// Edges @ 1501ce8b0

/* public: class absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64 const> __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Edges(unsigned
   __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Edges
          (CordRepBtree *this,__uint64 param_1,__uint64 param_2)

{
  longlong in_R9;
  
  *(__uint64 *)(param_1 + 8) = in_R9 - param_2;
  *(CordRep ***)param_1 = this->edges_ + param_2;
  return param_1;
}

// ExtractAppendBuffer @ 1501ce8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: static struct absl::lts_20240722::cord_internal::CordRep::ExtractResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::ExtractAppendBuffer(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,unsigned __int64) */

ExtractResult * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::ExtractAppendBuffer
          (ExtractResult *__return_storage_ptr__,CordRepBtree *param_1,__uint64 param_2)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  CordRep *this;
  ulong64 uVar4;
  CordRepBtree *pCVar5;
  __uint64 _Var6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [24];
  longlong alStack_90 [13];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar9 = 0;
  __return_storage_ptr__->tree = (CordRep *)param_1;
  __return_storage_ptr__->extracted = (CordRep *)0x0;
  if (*(char *)((longlong)&param_1->_padding_ + 5) != '\0') {
    plVar8 = alStack_90;
    do {
      plVar8 = plVar8 + 1;
      if (((RefcountAndFlags *)&param_1->_padding_)->count_ != (atomic<int>)0x2) {
        return __return_storage_ptr__;
      }
      bVar1 = *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3);
      iVar9 = iVar9 + 1;
      *plVar8 = (longlong)param_1;
      param_1 = (CordRepBtree *)param_1->edges_[(ulonglong)bVar1 - 1];
    } while (*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 1) != '\0');
  }
  if (((((RefcountAndFlags *)&param_1->_padding_)->count_ == (atomic<int>)0x2) &&
      (this = param_1->edges_
              [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3) -
               1], 5 < this->tag)) && ((this->refcount).count_ == (atomic<int>)0x2)) {
    uVar4 = this->length;
    _Var6 = CordRepFlat::Capacity((CordRepFlat *)this);
    if (param_2 <= _Var6 - uVar4) {
      bVar1 = *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 2);
      bVar2 = *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3);
      __return_storage_ptr__->extracted = this;
      if ((ulonglong)bVar2 - (ulonglong)bVar1 == 1) {
        lVar7 = (longlong)iVar9;
        do {
          ::operator_delete(param_1,0x40);
          iVar9 = iVar9 + -1;
          if (lVar7 + -1 < 0) {
            __return_storage_ptr__->tree = (CordRep *)0x0;
            return __return_storage_ptr__;
          }
          param_1 = (CordRepBtree *)alStack_90[lVar7];
          lVar7 = lVar7 + -1;
        } while ((ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3)
                 - (ulonglong)
                   *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 2) == 1);
      }
      *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3) =
           *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3) + 0xff;
      param_1->_padding_ = param_1->_padding_ - uVar4;
      lVar7 = (longlong)iVar9;
      if (0 < iVar9) {
        do {
          param_1 = (CordRepBtree *)alStack_90[lVar7];
          lVar7 = lVar7 + -1;
          param_1->_padding_ = param_1->_padding_ - uVar4;
        } while (0 < lVar7);
      }
      lVar7 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3) -
              (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 2);
      while (lVar7 == 1) {
        uVar3 = *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 1);
        pCVar5 = (CordRepBtree *)
                 param_1->edges_
                 [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3)
                  - 1];
        ::operator_delete(param_1,0x40);
        if (uVar3 == '\0') {
          __return_storage_ptr__->tree = (CordRep *)pCVar5;
          return __return_storage_ptr__;
        }
        param_1 = pCVar5;
        lVar7 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 3) -
                (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
      }
      __return_storage_ptr__->tree = (CordRep *)param_1;
    }
  }
  return __return_storage_ptr__;
}

// ExtractFront @ 1501cea90

/* private: static struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::ExtractFront(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRep * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::ExtractFront(CordRepBtree *param_1)

{
  RefcountAndFlags *pRVar1;
  longlong *plVar2;
  CordRep **ppCVar3;
  atomic<int> aVar4;
  CordRep *pCVar5;
  CordRep *pCVar6;
  longlong lVar7;
  ulonglong uVar8;
  CordRep **ppCVar9;
  
  pCVar5 = param_1->edges_[*(byte *)((longlong)&param_1->_padding_ + 6)];
  if ((int)param_1->_padding_ != 2) {
    LOCK();
    (pCVar5->refcount).count_ = (atomic<int>)((int)(pCVar5->refcount).count_ + 2);
    UNLOCK();
    LOCK();
    plVar2 = &param_1->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -2;
    UNLOCK();
    if ((int)lVar7 == 2) {
      CordRep::Destroy((CordRep *)param_1);
    }
    return pCVar5;
  }
  uVar8 = (ulonglong)*(byte *)((longlong)&param_1->_padding_ + 6);
  ppCVar9 = param_1->edges_ + uVar8 + 1;
  ppCVar3 = ppCVar9 + ((ulonglong)*(byte *)((longlong)&param_1->_padding_ + 7) - (uVar8 + 1));
  do {
    if (ppCVar9 == ppCVar3) {
      ::operator_delete(param_1,0x40);
      return pCVar5;
    }
    pCVar6 = *ppCVar9;
    if ((pCVar6->refcount).count_ == (atomic<int>)0x2) {
LAB_1501ceafa:
      CordRep::Destroy(pCVar6);
    }
    else {
      LOCK();
      pRVar1 = &pCVar6->refcount;
      aVar4 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x2) goto LAB_1501ceafa;
    }
    ppCVar9 = ppCVar9 + 1;
  } while( true );
}

// FUN_1501ceb70 @ 1501ceb70

CordRepBtree * FUN_1501ceb70(CordRepBtree *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  CordRepBtree *pCVar3;
  
  if (*(int *)(param_2 + 1) != 0) {
    if (*(int *)(param_2 + 1) != 1) {
      pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::New
                         (param_1,(CordRepBtree *)*param_2);
      if (*(byte *)((longlong)&pCVar3->_padding_ + 5) < 0xc) {
        return pCVar3;
      }
      pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar3);
      if (*(byte *)((longlong)&pCVar3->_padding_ + 5) < 0xc) {
        return pCVar3;
      }
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                 "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
    }
    LOCK();
    plVar1 = &param_1->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar2 == 2) {
      absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_1);
    }
  }
  return (CordRepBtree *)*param_2;
}

// FUN_1501cec00 @ 1501cec00

CordRepBtree * FUN_1501cec00(CordRepBtree *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  CordRepBtree *pCVar3;
  
  if (*(int *)(param_2 + 1) != 0) {
    if (*(int *)(param_2 + 1) != 1) {
      pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::New
                         ((CordRepBtree *)*param_2,param_1);
      if (*(byte *)((longlong)&pCVar3->_padding_ + 5) < 0xc) {
        return pCVar3;
      }
      pCVar3 = absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(pCVar3);
      if (*(byte *)((longlong)&pCVar3->_padding_ + 5) < 0xc) {
        return pCVar3;
      }
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                 "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
    }
    LOCK();
    plVar1 = &param_1->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar2 == 2) {
      absl::lts_20240722::cord_internal::CordRep::Destroy((CordRep *)param_1);
    }
  }
  return (CordRepBtree *)*param_2;
}

// GetAppendBufferSlow @ 1501ceca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::GetAppendBufferSlow(unsigned __int64) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::GetAppendBufferSlow
          (CordRepBtree *this,Span<char> *__return_storage_ptr__,__uint64 param_1)

{
  longlong *plVar1;
  byte bVar2;
  CordRep *pCVar3;
  ulong64 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  CordRepBtree *pCVar9;
  ulonglong uVar10;
  undefined1 local_88 [16];
  longlong alStack_78 [12];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)local_88;
  uVar10 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 5);
  lVar7 = 0;
  lVar8 = lVar7;
  pCVar9 = this;
  if (uVar10 != 0) {
    do {
      pCVar9 = (CordRepBtree *)
               pCVar9->edges_[(ulonglong)*(byte *)((longlong)&pCVar9->_padding_ + 7) - 1];
      if ((int)pCVar9->_padding_ != 2) goto LAB_1501ced99;
      alStack_78[lVar8] = (longlong)pCVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (longlong)uVar10);
  }
  pCVar3 = pCVar9->edges_[(ulonglong)*(byte *)((longlong)&pCVar9->_padding_ + 7) - 1];
  if (((pCVar3->refcount).count_ == (atomic<int>)0x2) && (bVar2 = pCVar3->tag, 5 < bVar2)) {
    if (bVar2 < 0x43) {
      iVar5 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar5 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar5 = (bVar2 - 0xb8) * 0x1000;
    }
    uVar4 = pCVar3->length;
    uVar6 = ((longlong)iVar5 - uVar4) - 0xd;
    if (uVar6 != 0) {
      if (uVar6 < param_1) {
        param_1 = uVar6;
      }
      pCVar3->length = uVar4 + param_1;
      this->_padding_ = this->_padding_ + param_1;
      if (uVar10 != 0) {
        do {
          plVar1 = alStack_78 + lVar7;
          lVar7 = lVar7 + 1;
          *(longlong *)*plVar1 = *(longlong *)*plVar1 + param_1;
        } while (lVar7 < (longlong)uVar10);
      }
      __return_storage_ptr__->ptr_ = (char *)(pCVar3->storage + uVar4);
      __return_storage_ptr__->len_ = param_1;
      return __return_storage_ptr__;
    }
  }
LAB_1501ced99:
  __return_storage_ptr__->ptr_ = (char *)0x0;
  __return_storage_ptr__->len_ = 0;
  return __return_storage_ptr__;
}

// GetCharacter @ 1501cedd0

/* public: char __cdecl absl::lts_20240722::cord_internal::CordRepBtree::GetCharacter(unsigned
   __int64)const __ptr64 */

char __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::GetCharacter(CordRepBtree *this,__uint64 param_1)

{
  CordRep **ppCVar1;
  CordRep *pCVar2;
  ulong64 uVar3;
  CordRep **ppCVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = (uint)*(byte *)((longlong)&this->_padding_ + 5);
  while( true ) {
    uVar6 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
    ppCVar4 = this->edges_ + uVar6;
    uVar5 = this->edges_[uVar6]->length;
    if (uVar5 <= param_1) {
      do {
        ppCVar1 = ppCVar4 + 1;
        ppCVar4 = ppCVar4 + 1;
        param_1 = param_1 - uVar5;
        uVar6 = uVar6 + 1;
        uVar5 = (*ppCVar1)->length;
      } while (uVar5 <= param_1);
    }
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 0) break;
    this = (CordRepBtree *)this->edges_[uVar6];
  }
  pCVar2 = this->edges_[uVar6];
  uVar3 = 0;
  if (pCVar2->tag == '\x01') {
    uVar3 = pCVar2[1].length;
    pCVar2 = *(CordRep **)&pCVar2[1].refcount;
  }
  if (5 < pCVar2->tag) {
    return pCVar2->storage[param_1 + uVar3];
  }
  return *(char *)(uVar3 + pCVar2[1].length + param_1);
}

// IndexBefore @ 1501cee90

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::IndexBefore(struct
   absl::lts_20240722::cord_internal::CordRepBtree::Position,unsigned __int64)const __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IndexBefore
          (CordRepBtree *this,Position *__return_storage_ptr__,Position *param_1,__uint64 param_2)

{
  CordRep **ppCVar1;
  ulonglong uVar2;
  CordRep **ppCVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  uVar4 = param_2 + param_1->n;
  uVar5 = param_1->index;
  ppCVar3 = this->edges_ + uVar5;
  uVar2 = this->edges_[uVar5]->length;
  if (uVar2 < uVar4) {
    do {
      ppCVar1 = ppCVar3 + 1;
      ppCVar3 = ppCVar3 + 1;
      uVar4 = uVar4 - uVar2;
      uVar5 = uVar5 + 1;
      uVar2 = (*ppCVar1)->length;
    } while (uVar2 < uVar4);
  }
  __return_storage_ptr__->index = uVar5;
  __return_storage_ptr__->n = uVar4;
  return __return_storage_ptr__;
}

// IndexBeyond @ 1501ceee0

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::IndexBeyond(unsigned __int64)const __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IndexBeyond
          (CordRepBtree *this,Position *__return_storage_ptr__,__uint64 param_1)

{
  CordRep *pCVar1;
  ulonglong uVar2;
  CordRep **ppCVar3;
  ulong64 uVar4;
  
  uVar4 = (ulong64)*(byte *)((longlong)&this->_padding_ + 6);
  uVar2 = 0;
  if (param_1 != 0) {
    ppCVar3 = this->edges_ + uVar4;
    do {
      pCVar1 = *ppCVar3;
      ppCVar3 = ppCVar3 + 1;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + pCVar1->length;
    } while (uVar2 < param_1);
  }
  __return_storage_ptr__->index = uVar4;
  __return_storage_ptr__->n = uVar2 - param_1;
  return __return_storage_ptr__;
}

// IndexOfLength @ 1501cef30

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::IndexOfLength(unsigned __int64)const __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IndexOfLength
          (CordRepBtree *this,Position *__return_storage_ptr__,__uint64 param_1)

{
  longlong *plVar1;
  CordRep *pCVar2;
  ulonglong uVar3;
  CordRep **ppCVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  
  uVar5 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
  uVar6 = uVar5 - 1;
  uVar3 = this->_padding_ - param_1;
  ppCVar4 = this->edges_ + (uVar5 - 1);
  uVar5 = (*ppCVar4)->length;
  if (uVar5 <= uVar3) {
    do {
      plVar1 = (longlong *)(ppCVar4 + -1);
      ppCVar4 = ppCVar4 + -1;
      uVar3 = uVar3 - uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = *(ulonglong *)*plVar1;
    } while (uVar5 <= uVar3);
  }
  pCVar2 = this->edges_[uVar6];
  __return_storage_ptr__->index = uVar6;
  __return_storage_ptr__->n = pCVar2->length - uVar3;
  return __return_storage_ptr__;
}

// IsCordBtreeExhaustiveValidationEnabled @ 1501cefa0

/* bool __cdecl absl::lts_20240722::cord_internal::IsCordBtreeExhaustiveValidationEnabled(void) */

bool __cdecl absl::lts_20240722::cord_internal::IsCordBtreeExhaustiveValidationEnabled(void)

{
  return (bool)DAT_1554076a1;
}

// IsFlat @ 1501cefb0

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRepBtree::IsFlat(class
   std::basic_string_view<char,struct std::char_traits<char> > * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IsFlat
          (CordRepBtree *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  CordRep *pCVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  if ((*(char *)((longlong)&this->_padding_ + 5) != '\0') ||
     (uVar4 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6),
     *(byte *)((longlong)&this->_padding_ + 7) - uVar4 != 1)) {
    return false;
  }
  if (param_1 != (basic_string_view<char,std::char_traits<char>_> *)0x0) {
    pCVar2 = this->edges_[uVar4];
    uVar3 = 0;
    uVar1 = pCVar2->length;
    if (pCVar2->tag == '\x01') {
      uVar3 = pCVar2[1].length;
      pCVar2 = *(CordRep **)&pCVar2[1].refcount;
    }
    if (5 < pCVar2->tag) {
      param_1->_Mydata = (char *)(pCVar2->storage + uVar3);
      param_1->_Mysize = uVar1;
      return true;
    }
    param_1->_Mydata = (char *)(uVar3 + pCVar2[1].length);
    param_1->_Mysize = uVar1;
  }
  return true;
}

// IsFlat @ 1501cf040

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRepBtree::IsFlat(unsigned
   __int64,unsigned __int64,class std::basic_string_view<char,struct std::char_traits<char> > *
   __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IsFlat
          (CordRepBtree *this,__uint64 param_1,__uint64 param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3)

{
  CordRep **ppCVar1;
  ulonglong uVar2;
  CordRep *pCVar3;
  CordRep **ppCVar4;
  ulonglong uVar5;
  uint uVar6;
  uchar *local_18;
  
  if (param_2 != 0) {
    uVar6 = (uint)*(byte *)((longlong)&this->_padding_ + 5);
    while( true ) {
      uVar5 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
      ppCVar4 = this->edges_ + uVar5;
      uVar2 = this->edges_[uVar5]->length;
      if (uVar2 <= param_1) {
        do {
          ppCVar1 = ppCVar4 + 1;
          ppCVar4 = ppCVar4 + 1;
          param_1 = param_1 - uVar2;
          uVar5 = uVar5 + 1;
          uVar2 = (*ppCVar1)->length;
        } while (uVar2 <= param_1);
      }
      this = (CordRepBtree *)this->edges_[uVar5];
      uVar2 = this->_padding_;
      if (uVar2 < param_1 + param_2) break;
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        if (param_3 != (basic_string_view<char,std::char_traits<char>_> *)0x0) {
          pCVar3 = (CordRep *)0x0;
          if (*(uchar *)((RefcountAndFlags *)&this->_padding_ + 1) == '\x01') {
            pCVar3 = this->edges_[0];
            this = (CordRepBtree *)this->edges_[1];
          }
          if (*(byte *)((RefcountAndFlags *)&this->_padding_ + 1) < 6) {
            local_18 = this->edges_[0]->storage + (longlong)(pCVar3->storage + -0x1a);
          }
          else {
            local_18 = (uchar *)((longlong)this->edges_ + (longlong)pCVar3[-1].storage);
          }
          if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
            std::basic_string_view<char,std::char_traits<char>_>::_Xran();
          }
          if (uVar2 - param_1 < param_2) {
            param_2 = uVar2 - param_1;
          }
          param_3->_Mydata = (char *)(local_18 + param_1);
          param_3->_Mysize = param_2;
        }
        return true;
      }
    }
  }
  return false;
}

// IsValid @ 1501cf140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static bool __cdecl absl::lts_20240722::cord_internal::CordRepBtree::IsValid(class
   absl::lts_20240722::cord_internal::CordRepBtree const * __ptr64,bool) */

bool __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::IsValid(CordRepBtree *param_1,bool param_2)

{
  CordRep **ppCVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  CordRep *pCVar5;
  bool bVar6;
  ulonglong uVar7;
  CordRep *pCVar8;
  __uint64 _Var9;
  int iVar10;
  CordRep **ppCVar11;
  undefined1 auStack_108 [32];
  char *local_e8;
  char *local_e0;
  _Bxty *local_d8;
  _Bxty *local_d0;
  _Bxty local_c0;
  undefined8 local_b0;
  ulonglong uStack_a8;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  char *local_80;
  char *local_78;
  char local_70 [32];
  char *local_50;
  char *local_48;
  char local_40 [32];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  _Var9 = 0;
  if (param_1 == (CordRepBtree *)0x0) {
    local_e8 = "tree != nullptr";
    iVar10 = 0x1bb;
  }
  else if (*(char *)((longlong)&param_1->_padding_ + 4) == '\x03') {
    bVar2 = *(byte *)((longlong)&param_1->_padding_ + 5);
    if (bVar2 < 0xc) {
      bVar3 = *(byte *)((longlong)&param_1->_padding_ + 6);
      if (bVar3 < 6) {
        bVar4 = *(byte *)((longlong)&param_1->_padding_ + 7);
        if (bVar4 < 7) {
          if (bVar4 < bVar3) {
            local_e8 = "tree->begin() <= tree->end()";
            iVar10 = 0x1c0;
          }
          else {
            ppCVar11 = param_1->edges_ + bVar3;
            ppCVar1 = ppCVar11 + ((ulonglong)bVar4 - (ulonglong)bVar3);
            while( true ) {
              if (ppCVar11 == ppCVar1) {
                if (_Var9 != param_1->_padding_) {
                  local_78 = numbers_internal::FastIntToBuffer(param_1->_padding_,local_70);
                  local_78 = local_78 + (-0x10 - (longlong)&local_80);
                  local_80 = local_70;
                  local_a0._Ptr = (char *)0x0;
                  local_a0._8_8_ = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Construct<1,char_const_*>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_a0,local_70,(ulong64)local_78);
                  local_d0 = &local_a0;
                  if (0xf < uStack_88) {
                    local_d0 = (_Bxty *)local_a0._Ptr;
                  }
                  local_48 = numbers_internal::FastIntToBuffer(_Var9,local_40);
                  local_48 = local_48 + (-0x10 - (longlong)&local_50);
                  local_50 = local_40;
                  local_c0._Ptr = (char *)0x0;
                  local_c0._8_8_ = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Construct<1,char_const_*>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_c0,local_40,(ulong64)local_48);
                  local_d8 = &local_c0;
                  if (0xf < uStack_a8) {
                    local_d8 = (_Bxty *)local_c0._Ptr;
                  }
                  local_e0 = "tree->length";
                  local_e8 = "child_length";
                    /* WARNING: Subroutine does not return */
                  raw_log_internal::RawLog
                            (kError,"cord_rep_btree.cc",0x1cc,
                             "CordRepBtree::CheckValid() FAILED: %s != %s (%s vs %s)");
                }
                if (((!param_2) || (DAT_1554076a1 != '\0')) &&
                   (*(char *)((longlong)&param_1->_padding_ + 5) != '\0')) {
                  uVar7 = (ulonglong)*(byte *)((longlong)&param_1->_padding_ + 6);
                  ppCVar11 = param_1->edges_ + uVar7;
                  ppCVar1 = ppCVar11 + (*(byte *)((longlong)&param_1->_padding_ + 7) - uVar7);
                  for (; ppCVar11 != ppCVar1; ppCVar11 = ppCVar11 + 1) {
                    bVar6 = IsValid((CordRepBtree *)*ppCVar11,param_2);
                    if (!bVar6) {
                      return false;
                    }
                  }
                }
                return true;
              }
              pCVar5 = *ppCVar11;
              if (pCVar5 == (CordRep *)0x0) break;
              bVar3 = pCVar5->tag;
              if (bVar2 == 0) {
                if (bVar3 < 5) {
                  pCVar8 = pCVar5;
                  if (bVar3 == 1) {
                    pCVar8 = *(CordRep **)&pCVar5[1].refcount;
                  }
                  if (pCVar8->tag < 5) {
                    local_e8 = "IsDataEdge(edge)";
                    iVar10 = 0x1c8;
                    goto LAB_1501cf183;
                  }
                }
              }
              else {
                if (bVar3 != 3) {
                  local_e8 = "edge->IsBtree()";
                  iVar10 = 0x1c5;
                  goto LAB_1501cf183;
                }
                if ((uint)pCVar5->storage[0] != bVar2 - 1) {
                  local_e8 = "edge->btree()->height() == tree->height() - 1";
                  iVar10 = 0x1c6;
                  goto LAB_1501cf183;
                }
              }
              _Var9 = _Var9 + pCVar5->length;
              ppCVar11 = ppCVar11 + 1;
            }
            local_e8 = "edge != nullptr";
            iVar10 = 0x1c3;
          }
        }
        else {
          local_e8 = "tree->end() <= tree->capacity()";
          iVar10 = 0x1bf;
        }
      }
      else {
        local_e8 = "tree->begin() < tree->capacity()";
        iVar10 = 0x1be;
      }
    }
    else {
      local_e8 = "tree->height() <= kMaxHeight";
      iVar10 = 0x1bd;
    }
  }
  else {
    local_e8 = "tree->IsBtree()";
    iVar10 = 0x1bc;
  }
LAB_1501cf183:
                    /* WARNING: Subroutine does not return */
  raw_log_internal::RawLog
            (kError,"cord_rep_btree.cc",iVar10,"CordRepBtree::CheckValid() FAILED: %s");
}

// FUN_1501cf4d0 @ 1501cf4d0

CordRep * FUN_1501cf4d0(CordRep *param_1,undefined8 param_2,ulong64 param_3)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  
  if (param_3 == param_1->length) {
    return param_1;
  }
  if (param_3 == 0) {
    LOCK();
    pRVar1 = &param_1->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      absl::lts_20240722::cord_internal::CordRep::Destroy(param_1);
    }
    return (CordRep *)0x0;
  }
  pCVar3 = (CordRep *)FUN_1501cdaf0();
  return pCVar3;
}

// MergeTrees @ 1501cf530

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::MergeTrees(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::MergeTrees
          (CordRepBtree *param_1,CordRepBtree *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  CordRep *pCVar4;
  OpResult *pOVar5;
  CordRepBtree *pCVar6;
  CordRep **ppCVar7;
  uint uVar8;
  longlong lVar9;
  CordRep **ppCVar10;
  CordRep **ppCVar11;
  byte bVar12;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uStack_bc;
  CordRepBtree *pCStack_b8;
  undefined8 uStack_b0;
  OpResult OStack_a8;
  int aiStack_98 [2];
  undefined8 auStack_90 [15];
  ulonglong uVar13;
  
  if (*(byte *)((longlong)&param_1->_padding_ + 5) < *(byte *)((longlong)&param_2->_padding_ + 5)) {
    pCVar6 = Merge<0>(param_2,param_1);
    return pCVar6;
  }
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 5);
  uVar13 = 0;
  lVar3 = param_2->_padding_;
  uVar8 = (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  iVar16 = uVar8 - bVar2;
  lVar15 = (ulonglong)uVar8 - (ulonglong)bVar2;
  uVar8 = 0;
  pCVar6 = param_1;
  uVar14 = uVar13;
  if (0 < lVar15) {
    do {
      uVar8 = (uint)uVar13;
      if ((int)pCVar6->_padding_ != 2) break;
      bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
      uVar8 = uVar8 + 1;
      uVar13 = (ulonglong)uVar8;
      auStack_90[uVar14] = pCVar6;
      uVar14 = uVar14 + 1;
      pCVar6 = (CordRepBtree *)pCVar6->edges_[(ulonglong)bVar2 - 1];
    } while ((longlong)uVar14 < lVar15);
  }
  aiStack_98[0] = ((int)pCVar6->_padding_ == 2) + uVar8;
  for (lVar9 = (longlong)(int)uVar8; lVar9 < lVar15; lVar9 = lVar9 + 1) {
    bVar2 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
    auStack_90[lVar9] = pCVar6;
    pCVar6 = (CordRepBtree *)pCVar6->edges_[(ulonglong)bVar2 - 1];
  }
  if ((((ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 7) -
       (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6)) -
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6)) +
      (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 7) < 7) {
    pOVar5 = ToOpResult(pCVar6,&OStack_a8,iVar16 < aiStack_98[0]);
    bVar2 = *(byte *)((longlong)&param_2->_padding_ + 7);
    pCVar6 = pOVar5->tree;
    uVar17 = *(undefined8 *)&pOVar5->action;
    uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
    ppCVar7 = param_2->edges_ + uVar14;
    uVar13 = (ulonglong)*(byte *)((longlong)&pCVar6->_padding_ + 6);
    if (uVar13 != 0) {
      lVar15 = *(byte *)((longlong)&pCVar6->_padding_ + 7) - uVar13;
      *(undefined1 *)((longlong)&pCVar6->_padding_ + 6) = 0;
      *(char *)((longlong)&pCVar6->_padding_ + 7) = (char)lVar15;
      if (lVar15 != 0) {
        ppCVar10 = pCVar6->edges_;
        do {
          *ppCVar10 = ppCVar10[uVar13];
          ppCVar10 = ppCVar10 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    bVar12 = *(byte *)((longlong)&pCVar6->_padding_ + 7);
    uVar13 = (ulonglong)bVar12;
    ppCVar10 = ppCVar7 + (bVar2 - uVar14);
    if (ppCVar7 != ppCVar10) {
      ppCVar11 = pCVar6->edges_ + uVar13;
      do {
        pCVar4 = *ppCVar7;
        ppCVar7 = ppCVar7 + 1;
        *ppCVar11 = pCVar4;
        ppCVar11 = ppCVar11 + 1;
        uVar13 = uVar13 + 1;
        bVar12 = (byte)uVar13;
      } while (ppCVar7 != ppCVar10);
    }
    *(byte *)((longlong)&pCVar6->_padding_ + 7) = bVar12;
    pCVar6->_padding_ = pCVar6->_padding_ + param_2->_padding_;
    if ((int)param_2->_padding_ == 2) {
      ::operator_delete(param_2,0x40);
    }
    else {
      uVar14 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
      ppCVar7 = param_2->edges_ + uVar14;
      ppCVar10 = ppCVar7 + (*(byte *)((longlong)&param_2->_padding_ + 7) - uVar14);
      for (; ppCVar7 != ppCVar10; ppCVar7 = ppCVar7 + 1) {
        LOCK();
        ((*ppCVar7)->refcount).count_ = (atomic<int>)((int)((*ppCVar7)->refcount).count_ + 2);
        UNLOCK();
      }
      LOCK();
      plVar1 = &param_2->_padding_;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar15 == 2) {
        CordRep::Destroy((CordRep *)param_2);
      }
    }
  }
  else {
    uVar17 = CONCAT44(uStack_bc,2);
    pCVar6 = param_2;
  }
  if (iVar16 == 0) {
    if ((int)uVar17 != 0) {
      if ((int)uVar17 == 1) {
        LOCK();
        plVar1 = &param_1->_padding_;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar3 == 2) {
          CordRep::Destroy((CordRep *)param_1);
        }
      }
      else {
        pCVar6 = New(param_1,pCVar6);
        if ((0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5)) &&
           (pCVar6 = Rebuild(pCVar6), 0xb < *(byte *)((longlong)&pCVar6->_padding_ + 5))) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"cord_rep_btree.cc",0x118,"Check %s failed: %s",
                     "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
        }
      }
    }
  }
  else {
    pCStack_b8 = pCVar6;
    uStack_b0 = uVar17;
    pCVar6 = (CordRepBtree *)FUN_1501cc340(aiStack_98,param_1,iVar16,lVar3,&pCStack_b8);
  }
  return pCVar6;
}

// New @ 1501cf560

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::New(int) */

CordRepBtree * __cdecl absl::lts_20240722::cord_internal::CordRepBtree::New(int param_1)

{
  CordRepBtree *pCVar1;
  
  pCVar1 = ::operator_new(0x40);
  if (pCVar1 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar1->_padding_ = 2;
  }
  pCVar1->_padding_ = 0;
  *(undefined1 *)((longlong)&pCVar1->_padding_ + 4) = 3;
  *(char *)((longlong)&pCVar1->_padding_ + 5) = (char)param_1;
  *(undefined2 *)((longlong)&pCVar1->_padding_ + 6) = 0;
  return pCVar1;
}

// New @ 1501cf5b0

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::New(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::New(CordRepBtree *param_1,CordRepBtree *param_2)

{
  char cVar1;
  CordRepBtree *pCVar2;
  
  pCVar2 = ::operator_new(0x40);
  if (pCVar2 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar2->_padding_ = 2;
  }
  pCVar2->_padding_ = param_1->_padding_ + param_2->_padding_;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 5);
  pCVar2->edges_[0] = (CordRep *)param_1;
  *(char *)((longlong)&pCVar2->_padding_ + 5) = cVar1 + '\x01';
  *(undefined1 *)((longlong)&pCVar2->_padding_ + 4) = 3;
  *(undefined2 *)((longlong)&pCVar2->_padding_ + 6) = 0x200;
  pCVar2->edges_[1] = (CordRep *)param_2;
  return pCVar2;
}

// Prepend @ 1501cf610

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Prepend(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Prepend
          (CordRepBtree *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          __uint64 param_3)

{
  CordRepBtree *pCVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  pCVar1 = AddData<0>(param_1,&local_18,param_3);
  return pCVar1;
}

// PrependSlow @ 1501cf640

/* private: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::PrependSlow(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::PrependSlow(CordRepBtree *param_1,CordRep *param_2)

{
  CordRepBtree *pCVar1;
  CordRepBtree *local_res8;
  CordRepBtree **local_res10 [3];
  undefined8 **local_18;
  code *pcStack_10;
  
  local_res8 = param_1;
  if (param_2->tag != '\x03') {
    local_res10[0] = &local_res8;
    local_18 = local_res10;
    pcStack_10 = FUN_1501cb0e0;
    ReverseConsume(param_2,&local_18);
    return local_res8;
  }
  if (*(byte *)((longlong)&param_1->_padding_ + 5) <= param_2->storage[0]) {
    pCVar1 = Merge<1>((CordRepBtree *)param_2,param_1);
    return pCVar1;
  }
  pCVar1 = Merge<0>(param_1,(CordRepBtree *)param_2);
  return pCVar1;
}

// FUN_1501cf6c0 @ 1501cf6c0

void FUN_1501cf6c0(void)

{
  FUN_1501cbe00();
  return;
}

// FUN_1501cf6f0 @ 1501cf6f0

void FUN_1501cf6f0(void)

{
  FUN_1501cc090();
  return;
}

// Rebuild @ 1501cf720

/* private: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 * __ptr64,class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,bool) */

void __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Rebuild
          (CordRepBtree **param_1,CordRepBtree *param_2,bool param_3)

{
  longlong *plVar1;
  byte bVar2;
  CordRep *pCVar3;
  ulong64 uVar4;
  bool bVar5;
  ulong64 *puVar6;
  CordRep **ppCVar7;
  CordRepBtree *pCVar8;
  uchar uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  CordRep **ppCVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  CordRepBtree *pCVar17;
  CordRep **ppCVar18;
  CordRepBtree **ppCVar19;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((param_3) && ((int)param_2->_padding_ == 2)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  uVar12 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 6);
  uVar11 = (ulonglong)*(byte *)((longlong)&param_2->_padding_ + 7);
  if (*(char *)((longlong)&param_2->_padding_ + 5) == '\0') {
    ppCVar18 = param_2->edges_ + uVar12;
    ppCVar13 = ppCVar18 + (uVar11 - uVar12);
    for (; ppCVar18 != ppCVar13; ppCVar18 = ppCVar18 + 1) {
      pCVar3 = *ppCVar18;
      if (bVar14 == false) {
        LOCK();
        (pCVar3->refcount).count_ = (atomic<int>)((int)(pCVar3->refcount).count_ + 2);
        UNLOCK();
      }
      pCVar17 = *param_1;
      lVar15 = 0;
      uVar4 = pCVar3->length;
      uVar11 = (ulonglong)*(byte *)((longlong)&pCVar17->_padding_ + 6);
      uVar12 = *(byte *)((longlong)&pCVar17->_padding_ + 7) - uVar11;
      if (uVar12 < 6) {
        if (uVar11 != 0) {
          *(undefined1 *)((longlong)&pCVar17->_padding_ + 6) = 0;
          *(char *)((longlong)&pCVar17->_padding_ + 7) = (char)uVar12;
          if (uVar12 != 0) {
            ppCVar7 = pCVar17->edges_;
            do {
              *ppCVar7 = ppCVar7[uVar11];
              ppCVar7 = ppCVar7 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        bVar2 = *(byte *)((longlong)&pCVar17->_padding_ + 7);
        *(byte *)((longlong)&pCVar17->_padding_ + 7) = bVar2 + 1;
        pCVar17->edges_[bVar2] = pCVar3;
        pCVar17->_padding_ = pCVar17->_padding_ + uVar4;
      }
      else {
        local_78 = ::operator_new(0x40);
        if (local_78 == (CordRepBtree *)0x0) {
          local_78 = (CordRepBtree *)0x0;
        }
        else {
          ((RefcountAndFlags *)&local_78->_padding_)->count_ = (atomic<int>)0x2;
        }
        if (pCVar3->tag == '\x03') {
          uVar9 = pCVar3->storage[0] + '\x01';
        }
        else {
          uVar9 = '\0';
        }
        local_78->_padding_ = pCVar3->length;
        local_78->edges_[0] = pCVar3;
        *(uchar *)((RefcountAndFlags *)&local_78->_padding_ + 1) = '\x03';
        *(uchar *)((longlong)((RefcountAndFlags *)&local_78->_padding_ + 1) + 1) = uVar9;
        *(uchar *)((longlong)&local_78->_padding_ + 6) = '\0';
        *(uchar *)((longlong)&local_78->_padding_ + 7) = '\x01';
        ppCVar19 = param_1;
        do {
          lVar15 = lVar15 + 1;
          *ppCVar19 = local_78;
          pCVar8 = param_1[lVar15];
          ppCVar19 = param_1 + lVar15;
          if (pCVar8 == (CordRepBtree *)0x0) {
            pCVar8 = ::operator_new(0x40);
            if (pCVar8 == (CordRepBtree *)0x0) {
              pCVar8 = (CordRepBtree *)0x0;
            }
            else {
              *(undefined4 *)&pCVar8->_padding_ = 2;
            }
            pCVar8->_padding_ = pCVar17->_padding_ + local_78->_padding_;
            cVar10 = *(char *)((longlong)&pCVar17->_padding_ + 5);
            *(undefined1 *)((longlong)&pCVar8->_padding_ + 4) = 3;
            *(char *)((longlong)&pCVar8->_padding_ + 5) = cVar10 + '\x01';
            *(undefined2 *)((longlong)&pCVar8->_padding_ + 6) = 0x200;
            pCVar8->edges_[0] = (CordRep *)pCVar17;
            pCVar8->edges_[1] = (CordRep *)local_78;
            *ppCVar19 = pCVar8;
            break;
          }
          uVar11 = (ulonglong)*(byte *)((longlong)&pCVar8->_padding_ + 6);
          uVar12 = *(byte *)((longlong)&pCVar8->_padding_ + 7) - uVar11;
          if (uVar12 < 6) {
            if (uVar11 != 0) {
              *(undefined1 *)((longlong)&pCVar8->_padding_ + 6) = 0;
              *(char *)((longlong)&pCVar8->_padding_ + 7) = (char)uVar12;
              if (uVar12 != 0) {
                ppCVar7 = pCVar8->edges_;
                do {
                  *ppCVar7 = ppCVar7[uVar11];
                  ppCVar7 = ppCVar7 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
            }
            bVar2 = *(byte *)((longlong)&pCVar8->_padding_ + 7);
            local_58 = SUB84(pCVar8,0);
            uStack_54 = (undefined4)((ulonglong)pCVar8 >> 0x20);
            bVar5 = false;
            *(byte *)((longlong)&pCVar8->_padding_ + 7) = bVar2 + 1;
            pCVar8->edges_[bVar2] = (CordRep *)local_78;
            pCVar8->_padding_ = pCVar8->_padding_ + uVar4;
            local_68 = local_58;
            uStack_64 = uStack_54;
          }
          else {
            puVar6 = ::operator_new(0x40);
            if (puVar6 == (ulong64 *)0x0) {
              puVar6 = (ulong64 *)0x0;
            }
            else {
              *(undefined4 *)(puVar6 + 1) = 2;
            }
            if (*(uchar *)((RefcountAndFlags *)&local_78->_padding_ + 1) == '\x03') {
              cVar10 = *(uchar *)((longlong)((RefcountAndFlags *)&local_78->_padding_ + 1) + 1) +
                       '\x01';
            }
            else {
              cVar10 = '\0';
            }
            *puVar6 = local_78->_padding_;
            local_68 = SUB84(puVar6,0);
            uStack_64 = (undefined4)((ulonglong)puVar6 >> 0x20);
            bVar5 = true;
            *(undefined1 *)((longlong)puVar6 + 0xc) = 3;
            *(char *)((longlong)puVar6 + 0xd) = cVar10;
            *(undefined2 *)((longlong)puVar6 + 0xe) = 0x100;
            puVar6[2] = (ulong64)local_78;
          }
          local_78 = (CordRepBtree *)CONCAT44(uStack_64,local_68);
          pCVar17 = pCVar8;
        } while (bVar5);
      }
      lVar16 = lVar15 + 1;
      pCVar17 = param_1[lVar15 + 1];
      while (pCVar17 != (CordRepBtree *)0x0) {
        pCVar17->_padding_ = pCVar17->_padding_ + uVar4;
        lVar16 = lVar16 + 1;
        pCVar17 = param_1[lVar16];
      }
    }
  }
  else {
    ppCVar13 = param_2->edges_ + uVar12;
    ppCVar18 = ppCVar13 + (uVar11 - uVar12);
    for (; ppCVar13 != ppCVar18; ppCVar13 = ppCVar13 + 1) {
      Rebuild(param_1,(CordRepBtree *)*ppCVar13,bVar14);
    }
  }
  if (param_3) {
    if (bVar14 != false) {
      ::operator_delete(param_2,0x40);
      return;
    }
    LOCK();
    plVar1 = &param_2->_padding_;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar15 == 2) {
      CordRep::Destroy((CordRep *)param_2);
    }
  }
  return;
}

// Rebuild @ 1501cfb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Rebuild(CordRepBtree *param_1)

{
  CordRepBtree *pCVar1;
  CordRepBtree **ppCVar2;
  CordRepBtree *pCVar3;
  undefined1 auStack_b8 [32];
  CordRepBtree *local_98;
  CordRepBtree *local_88 [14];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = ::operator_new(0x40);
  if (local_98 == (CordRepBtree *)0x0) {
    pCVar3 = (CordRepBtree *)0x0;
  }
  else {
    *(undefined4 *)&local_98->_padding_ = 2;
    pCVar3 = local_98;
  }
  pCVar3->_padding_ = 0;
  *(undefined4 *)((longlong)&pCVar3->_padding_ + 4) = 3;
  local_88[1] = (CordRepBtree *)0x0;
  local_88[2] = (CordRepBtree *)0x0;
  local_88[3] = (CordRepBtree *)0x0;
  local_88[4] = (CordRepBtree *)0x0;
  local_88[5] = (CordRepBtree *)0x0;
  local_88[6] = (CordRepBtree *)0x0;
  local_88[7] = (CordRepBtree *)0x0;
  local_88[8] = (CordRepBtree *)0x0;
  local_88[9] = (CordRepBtree *)0x0;
  local_88[10] = (CordRepBtree *)0x0;
  local_88[0xb] = (CordRepBtree *)0x0;
  local_88[0xc] = (CordRepBtree *)0x0;
  local_88[0] = pCVar3;
  Rebuild(local_88,param_1,true);
  ppCVar2 = local_88;
  do {
    pCVar1 = *ppCVar2;
    if (pCVar1 == (CordRepBtree *)0x0) {
      return pCVar3;
    }
    ppCVar2 = ppCVar2 + 1;
    pCVar3 = pCVar1;
  } while (ppCVar2 != local_88 + 0xd);
  return (CordRepBtree *)0x0;
}

// RemoveSuffix @ 1501cfbe0

/* WARNING: Type propagation algorithm not settling */
/* public: static struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::RemoveSuffix(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,unsigned __int64) */

CordRep * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::RemoveSuffix
          (CordRepBtree *param_1,__uint64 param_2)

{
  longlong *plVar1;
  RefcountAndFlags *pRVar2;
  CordRep **ppCVar3;
  atomic<int> aVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  CordRepBtree *pCVar10;
  CordRepBtree *pCVar11;
  CordRep *pCVar12;
  CopyResult *pCVar13;
  CordRepBtree *pCVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  CordRep **ppCVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  CopyResult local_38;
  
  if (param_2 == 0) {
    return (CordRep *)param_1;
  }
  if ((ulonglong)param_1->_padding_ <= param_2) {
    LOCK();
    plVar1 = &param_1->_padding_;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar9 == 2) {
      CordRep::Destroy((CordRep *)param_1);
    }
    return (CordRep *)0x0;
  }
  uVar23 = param_1->_padding_ - param_2;
  uVar22 = (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  uVar16 = (ulonglong)*(byte *)((longlong)&param_1->_padding_ + 7);
  uVar18 = uVar16 - 1;
  ppCVar17 = param_1->edges_ + (uVar16 - 1);
  uVar15 = param_1->_padding_ - uVar23;
  uVar16 = param_1->edges_[uVar16 - 1]->length;
  if (uVar16 <= uVar15) {
    do {
      plVar1 = (longlong *)(ppCVar17 + -1);
      ppCVar17 = ppCVar17 + -1;
      uVar15 = uVar15 - uVar16;
      uVar18 = uVar18 - 1;
      uVar16 = *(ulonglong *)*plVar1;
    } while (uVar16 <= uVar15);
  }
  uVar19 = param_1->edges_[uVar18]->length - uVar15;
  pCVar14 = param_1;
  uVar21 = uVar22;
  bVar8 = (int)param_1->_padding_ == 2;
  if (uVar18 == *(byte *)((longlong)&param_1->_padding_ + 6)) {
    do {
      param_1 = (CordRepBtree *)pCVar14->edges_[*(byte *)((longlong)&pCVar14->_padding_ + 6)];
      if ((int)pCVar14->_padding_ == 2) {
        uVar16 = (ulonglong)*(byte *)((longlong)&pCVar14->_padding_ + 6);
        ppCVar17 = pCVar14->edges_ + uVar16 + 1;
        ppCVar3 = ppCVar17 +
                  ((ulonglong)*(byte *)((longlong)&pCVar14->_padding_ + 7) - (uVar16 + 1));
        for (; ppCVar17 != ppCVar3; ppCVar17 = ppCVar17 + 1) {
          pCVar12 = *ppCVar17;
          if ((pCVar12->refcount).count_ == (atomic<int>)0x2) {
LAB_1501cfd09:
            CordRep::Destroy(pCVar12);
          }
          else {
            LOCK();
            pRVar2 = &pCVar12->refcount;
            aVar4 = pRVar2->count_;
            pRVar2->count_ = (atomic<int>)((int)pRVar2->count_ + -2);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x2) goto LAB_1501cfd09;
          }
        }
        ::operator_delete(pCVar14,0x40);
      }
      else {
        LOCK();
        ((RefcountAndFlags *)&param_1->_padding_)->count_ =
             (atomic<int>)((int)((RefcountAndFlags *)&param_1->_padding_)->count_ + 2);
        UNLOCK();
        LOCK();
        plVar1 = &pCVar14->_padding_;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar9 == 2) {
          CordRep::Destroy((CordRep *)pCVar14);
        }
      }
      bVar7 = false;
      if (((RefcountAndFlags *)&param_1->_padding_)->count_ == (atomic<int>)0x2) {
        bVar7 = bVar8;
      }
      uVar22 = uVar21 - 1;
      if (uVar21 == 0) {
        if ((ulonglong)param_1->_padding_ <= uVar23) {
          return (CordRep *)param_1;
        }
        if ((bVar7) &&
           ((5 < *(byte *)((RefcountAndFlags *)&param_1->_padding_ + 1) ||
            (*(byte *)((RefcountAndFlags *)&param_1->_padding_ + 1) == 1)))) {
          param_1->_padding_ = uVar23;
          return (CordRep *)param_1;
        }
        pCVar12 = (CordRep *)FUN_1501cdaf0(param_1,0,uVar23);
        return pCVar12;
      }
      uVar16 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 3);
      uVar15 = param_1->_padding_ - uVar23;
      uVar18 = uVar16 - 1;
      ppCVar17 = param_1->edges_ + (uVar16 - 1);
      uVar16 = param_1->edges_[uVar16 - 1]->length;
      if (uVar16 <= uVar15) {
        do {
          plVar1 = (longlong *)(ppCVar17 + -1);
          ppCVar17 = ppCVar17 + -1;
          uVar15 = uVar15 - uVar16;
          uVar18 = uVar18 - 1;
          uVar16 = *(ulonglong *)*plVar1;
        } while (uVar16 <= uVar15);
      }
      uVar19 = param_1->edges_[uVar18]->length - uVar15;
      pCVar14 = param_1;
      uVar21 = uVar22;
      bVar8 = bVar7;
    } while (uVar18 == *(uchar *)((longlong)((RefcountAndFlags *)&param_1->_padding_ + 1) + 2));
  }
  pCVar10 = ConsumeBeginTo(param_1,uVar18 + 1,uVar23);
  pCVar14 = (CordRepBtree *)pCVar10->edges_[uVar18];
  pCVar11 = pCVar10;
  if (uVar19 != pCVar14->_padding_) {
    while( true ) {
      iVar6 = (int)pCVar14->_padding_;
      if (uVar22 == 0) break;
      if (iVar6 != 2) {
        pCVar13 = CopyPrefix(pCVar14,&local_38,uVar19,false);
        pCVar11->edges_[uVar18] = pCVar13->edge;
        LOCK();
        plVar1 = &pCVar14->_padding_;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar9 != 2) {
          return (CordRep *)pCVar10;
        }
        CordRep::Destroy((CordRep *)pCVar14);
        return (CordRep *)pCVar10;
      }
      uVar16 = (ulonglong)*(byte *)((longlong)&pCVar14->_padding_ + 7);
      uVar18 = uVar16 - 1;
      uVar15 = pCVar14->_padding_ - uVar19;
      ppCVar17 = pCVar14->edges_ + (uVar16 - 1);
      uVar16 = pCVar14->edges_[uVar16 - 1]->length;
      if (uVar16 <= uVar15) {
        do {
          plVar1 = (longlong *)(ppCVar17 + -1);
          ppCVar17 = ppCVar17 + -1;
          uVar15 = uVar15 - uVar16;
          uVar18 = uVar18 - 1;
          uVar16 = *(ulonglong *)*plVar1;
        } while (uVar16 <= uVar15);
      }
      uVar20 = pCVar14->edges_[uVar18]->length - uVar15;
      pCVar11 = ConsumeBeginTo(pCVar14,uVar18 + 1,uVar19);
      pCVar14 = (CordRepBtree *)pCVar11->edges_[uVar18];
      uVar19 = uVar20;
      uVar22 = uVar22 - 1;
      if (uVar20 == pCVar14->_padding_) {
        return (CordRep *)pCVar10;
      }
    }
    if (uVar19 < (ulonglong)pCVar14->_padding_) {
      if ((iVar6 == 2) &&
         ((bVar5 = *(byte *)((longlong)&pCVar14->_padding_ + 4), 5 < bVar5 || (bVar5 == 1)))) {
        pCVar14->_padding_ = uVar19;
      }
      else {
        pCVar14 = (CordRepBtree *)FUN_1501cdaf0(pCVar14,0,uVar19);
      }
    }
    pCVar11->edges_[uVar18] = (CordRep *)pCVar14;
  }
  return (CordRep *)pCVar10;
}

// SetCordBtreeExhaustiveValidation @ 1501cff70

/* void __cdecl absl::lts_20240722::cord_internal::SetCordBtreeExhaustiveValidation(bool) */

void __cdecl absl::lts_20240722::cord_internal::SetCordBtreeExhaustiveValidation(bool param_1)

{
  DAT_1554076a1 = param_1;
  return;
}

// SubTree @ 1501cff80

/* WARNING: Type propagation algorithm not settling */
/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::SubTree(unsigned __int64,unsigned __int64)
   __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::SubTree
          (CordRepBtree *this,__uint64 param_1,__uint64 param_2)

{
  longlong *plVar1;
  RefcountAndFlags *pRVar2;
  CordRep **ppCVar3;
  CordRep *pCVar4;
  int iVar5;
  int iVar6;
  CopyResult *pCVar7;
  CordRep *pCVar8;
  CordRep **ppCVar9;
  uchar uVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  CordRepBtree *pCVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  CordRep *pCVar19;
  ulonglong uVar20;
  CordRepBtree *local_78;
  CordRepBtree *local_68;
  CopyResult local_58;
  CopyResult local_48 [2];
  
  if (param_2 == 0) {
    return (CordRep *)0x0;
  }
  uVar13 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  uVar15 = (uint)*(byte *)((longlong)&this->_padding_ + 5);
  ppCVar9 = this->edges_ + uVar13;
  uVar17 = this->edges_[uVar13]->length;
  if (uVar17 <= param_1) {
    do {
      ppCVar3 = ppCVar9 + 1;
      ppCVar9 = ppCVar9 + 1;
      param_1 = param_1 - uVar17;
      uVar13 = uVar13 + 1;
      uVar17 = (*ppCVar3)->length;
    } while (uVar17 <= param_1);
  }
  local_78 = (CordRepBtree *)this->edges_[uVar13];
  if (param_1 + param_2 <= (ulonglong)local_78->_padding_) {
    do {
      this = local_78;
      uVar15 = uVar15 - 1;
      if ((int)uVar15 < 0) {
        LOCK();
        ((RefcountAndFlags *)&this->_padding_)->count_ =
             (atomic<int>)((int)((RefcountAndFlags *)&this->_padding_)->count_ + 2);
        UNLOCK();
        if (param_2 == this->_padding_) {
          return (CordRep *)this;
        }
        pCVar8 = (CordRep *)FUN_1501cdaf0(this,param_1,param_2);
        return pCVar8;
      }
      uVar13 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&this->_padding_ + 1) + 2);
      ppCVar9 = this->edges_ + uVar13;
      uVar17 = this->edges_[uVar13]->length;
      if (uVar17 <= param_1) {
        do {
          ppCVar3 = ppCVar9 + 1;
          ppCVar9 = ppCVar9 + 1;
          param_1 = param_1 - uVar17;
          uVar13 = uVar13 + 1;
          uVar17 = (*ppCVar3)->length;
        } while (uVar17 <= param_1);
      }
      local_78 = (CordRepBtree *)this->edges_[uVar13];
    } while (param_1 + param_2 <= (ulonglong)local_78->_padding_);
  }
  ppCVar9 = this->edges_ + uVar13;
  uVar17 = param_1 + param_2;
  uVar12 = this->edges_[uVar13]->length;
  uVar20 = uVar13;
  if (uVar12 < uVar17) {
    do {
      ppCVar3 = ppCVar9 + 1;
      ppCVar9 = ppCVar9 + 1;
      uVar17 = uVar17 - uVar12;
      uVar20 = uVar20 + 1;
      uVar12 = (*ppCVar3)->length;
    } while (uVar12 < uVar17);
  }
  local_68 = (CordRepBtree *)this->edges_[uVar20];
  if ((int)uVar15 < 1) {
    LOCK();
    *(int *)&local_78->_padding_ = (int)local_78->_padding_ + 2;
    UNLOCK();
    if (param_1 != 0) {
      local_78 = (CordRepBtree *)FUN_1501cdaf0(local_78,param_1,local_78->_padding_ - param_1);
    }
    LOCK();
    *(int *)&local_68->_padding_ = (int)local_68->_padding_ + 2;
    UNLOCK();
    if (uVar17 != local_68->_padding_) {
      if (uVar17 == 0) {
        LOCK();
        plVar1 = &local_68->_padding_;
        lVar18 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -2;
        UNLOCK();
        if ((int)lVar18 == 2) {
          CordRep::Destroy((CordRep *)local_68);
        }
        local_68 = (CordRepBtree *)0x0;
      }
      else {
        local_68 = (CordRepBtree *)FUN_1501cdaf0(local_68,0,uVar17);
      }
    }
  }
  else {
    pCVar7 = CopySuffix(local_78,&local_58,param_1);
    local_78 = (CordRepBtree *)pCVar7->edge;
    iVar5 = pCVar7->height;
    pCVar7 = CopyPrefix(local_68,local_48,uVar17,true);
    local_68 = (CordRepBtree *)pCVar7->edge;
    iVar6 = pCVar7->height;
    if (uVar13 + 1 == uVar20) {
      iVar16 = iVar5;
      if (iVar5 < iVar6) {
        iVar16 = iVar6;
      }
      uVar15 = iVar16 + 1;
    }
    if (iVar5 + 1 < (int)uVar15) {
      uVar17 = (ulonglong)(uVar15 - (iVar5 + 1));
      pCVar14 = local_78;
      do {
        local_78 = ::operator_new(0x40);
        if (local_78 == (CordRepBtree *)0x0) {
          local_78 = (CordRepBtree *)0x0;
        }
        else {
          ((RefcountAndFlags *)&local_78->_padding_)->count_ = (atomic<int>)0x2;
        }
        if (*(uchar *)((RefcountAndFlags *)&pCVar14->_padding_ + 1) == '\x03') {
          uVar10 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar14->_padding_ + 1) + 1) + '\x01';
        }
        else {
          uVar10 = '\0';
        }
        local_78->_padding_ = pCVar14->_padding_;
        local_78->edges_[0] = (CordRep *)pCVar14;
        *(uchar *)((RefcountAndFlags *)&local_78->_padding_ + 1) = '\x03';
        *(uchar *)((longlong)((RefcountAndFlags *)&local_78->_padding_ + 1) + 1) = uVar10;
        *(uchar *)((longlong)&local_78->_padding_ + 6) = '\0';
        *(uchar *)((longlong)&local_78->_padding_ + 7) = '\x01';
        uVar17 = uVar17 - 1;
        pCVar14 = local_78;
      } while (uVar17 != 0);
    }
    if (iVar6 + 1 < (int)uVar15) {
      uVar17 = (ulonglong)(uVar15 - (iVar6 + 1));
      pCVar14 = local_68;
      do {
        local_68 = ::operator_new(0x40);
        if (local_68 == (CordRepBtree *)0x0) {
          local_68 = (CordRepBtree *)0x0;
        }
        else {
          *(undefined4 *)&local_68->_padding_ = 2;
        }
        if (*(char *)((longlong)&pCVar14->_padding_ + 4) == '\x03') {
          cVar11 = *(char *)((longlong)&pCVar14->_padding_ + 5) + '\x01';
        }
        else {
          cVar11 = '\0';
        }
        local_68->_padding_ = pCVar14->_padding_;
        local_68->edges_[0] = (CordRep *)pCVar14;
        *(undefined1 *)((longlong)&local_68->_padding_ + 4) = 3;
        *(char *)((longlong)&local_68->_padding_ + 5) = cVar11;
        *(undefined2 *)((longlong)&local_68->_padding_ + 6) = 0x100;
        uVar17 = uVar17 - 1;
        pCVar14 = local_68;
      } while (uVar17 != 0);
    }
  }
  pCVar8 = ::operator_new(0x40);
  if (pCVar8 == (CordRep *)0x0) {
    pCVar8 = (CordRep *)0x0;
  }
  else {
    (pCVar8->refcount).count_ = (atomic<int>)0x2;
  }
  pCVar8->length = 0;
  pCVar8[1].length = (ulong64)local_78;
  ppCVar9 = this->edges_ + uVar13 + 1;
  lVar18 = 1;
  ppCVar3 = ppCVar9 + (uVar20 - (uVar13 + 1));
  pCVar8->tag = '\x03';
  pCVar8->storage[0] = (uchar)uVar15;
  pCVar8->storage[1] = '\0';
  pCVar8->storage[2] = '\0';
  if (ppCVar9 != ppCVar3) {
    pCVar19 = pCVar8 + 1;
    do {
      pCVar19 = (CordRep *)&pCVar19->refcount;
      pCVar4 = *ppCVar9;
      LOCK();
      pRVar2 = &pCVar4->refcount;
      pRVar2->count_ = (atomic<int>)((int)pRVar2->count_ + 2);
      UNLOCK();
      lVar18 = lVar18 + 1;
      *(CordRep **)&((RefcountAndFlags *)pCVar19)->count_ = pCVar4;
      ppCVar9 = ppCVar9 + 1;
    } while (ppCVar9 != ppCVar3);
  }
  *(CordRepBtree **)(pCVar8[1].storage + lVar18 * 8 + -0xd) = local_68;
  pCVar8->length = param_2;
  pCVar8->storage[2] = (char)lVar18 + '\x01';
  return pCVar8;
}

// ToOpResult @ 1501d03a0

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::OpResult __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult(bool) __ptr64 */

OpResult * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::ToOpResult
          (CordRepBtree *this,OpResult *__return_storage_ptr__,bool param_1)

{
  CordRep **ppCVar1;
  longlong lVar2;
  undefined8 uVar3;
  CordRepBtree *pCVar4;
  CordRep **ppCVar5;
  CordRepBtree **ppCVar6;
  ulonglong uVar7;
  CordRepBtree *local_28;
  undefined4 uStack_20;
  CordRepBtree *local_18;
  undefined4 local_10;
  
  if (param_1) {
    local_28 = this;
    uStack_20 = 0;
    ppCVar6 = &local_28;
  }
  else {
    lVar2 = this->_padding_;
    local_18 = ::operator_new(0x40);
    if (local_18 == (CordRepBtree *)0x0) {
      local_18 = (CordRepBtree *)0x0;
    }
    else {
      *(undefined4 *)&local_18->_padding_ = 2;
    }
    local_18->_padding_ = lVar2;
    uVar3 = *(undefined8 *)((longlong)this->edges_ + 4);
    *(undefined8 *)((longlong)&local_18->_padding_ + 4) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)local_18->edges_ + 4) = uVar3;
    uVar3 = *(undefined8 *)((longlong)this->edges_ + 0x14);
    *(undefined8 *)((longlong)local_18->edges_ + 0xc) =
         *(undefined8 *)((longlong)this->edges_ + 0xc);
    *(undefined8 *)((longlong)local_18->edges_ + 0x14) = uVar3;
    uVar3 = *(undefined8 *)((longlong)this->edges_ + 0x24);
    *(undefined8 *)((longlong)local_18->edges_ + 0x1c) =
         *(undefined8 *)((longlong)this->edges_ + 0x1c);
    *(undefined8 *)((longlong)local_18->edges_ + 0x24) = uVar3;
    *(undefined4 *)((longlong)local_18->edges_ + 0x2c) =
         *(undefined4 *)((longlong)this->edges_ + 0x2c);
    uVar7 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
    ppCVar5 = this->edges_ + uVar7;
    ppCVar1 = ppCVar5 + (*(byte *)((longlong)&this->_padding_ + 7) - uVar7);
    for (; ppCVar5 != ppCVar1; ppCVar5 = ppCVar5 + 1) {
      LOCK();
      ((*ppCVar5)->refcount).count_ = (atomic<int>)((int)((*ppCVar5)->refcount).count_ + 2);
      UNLOCK();
    }
    ppCVar6 = &local_18;
    local_10 = 1;
  }
  pCVar4 = ppCVar6[1];
  __return_storage_ptr__->tree = *ppCVar6;
  *(CordRepBtree **)&__return_storage_ptr__->action = pCVar4;
  return __return_storage_ptr__;
}

// Unref @ 1501d0480

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Unref(class
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const>) */

void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Unref(longlong *param_1)

{
  RefcountAndFlags *pRVar1;
  undefined8 *puVar2;
  atomic<int> aVar3;
  CordRep *pCVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = puVar5 + param_1[1];
  do {
    if (puVar5 == puVar2) {
      return;
    }
    pCVar4 = (CordRep *)*puVar5;
    if ((pCVar4->refcount).count_ == (atomic<int>)0x2) {
LAB_1501d04bb:
      CordRep::Destroy(pCVar4);
    }
    else {
      LOCK();
      pRVar1 = &pCVar4->refcount;
      aVar3 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x2) goto LAB_1501d04bb;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// capacity @ 1501d04e0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::capacity(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepBtree::capacity(CordRepBtree *this)

{
  return 6;
}

// fetch_add_end @ 1501d04f0

/* private: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::fetch_add_end(unsigned __int64) __ptr64 */

__uint64 __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::fetch_add_end(CordRepBtree *this,__uint64 param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 7);
  *(byte *)((longlong)&this->_padding_ + 7) = (char)param_1 + bVar1;
  return (ulonglong)bVar1;
}

// set_begin @ 1501d0520

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::set_begin(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::set_begin(CordRepBtree *this,__uint64 param_1)

{
  *(char *)((longlong)&this->_padding_ + 6) = (char)param_1;
  return;
}

// set_end @ 1501d0530

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::set_end(unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::set_end(CordRepBtree *this,__uint64 param_1)

{
  *(char *)((longlong)&this->_padding_ + 7) = (char)param_1;
  return;
}

// sub_fetch_begin @ 1501d0540

/* private: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::sub_fetch_begin(unsigned __int64) __ptr64 */

__uint64 __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::sub_fetch_begin
          (CordRepBtree *this,__uint64 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((longlong)&this->_padding_ + 6);
  *pcVar1 = *pcVar1 - (char)param_1;
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
}

// FUN_15032fec0 @ 15032fec0

void FUN_15032fec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  }
  return;
}

// FUN_15032ff70 @ 15032ff70

void FUN_15032ff70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x118))
    ;
  }
  return;
}

