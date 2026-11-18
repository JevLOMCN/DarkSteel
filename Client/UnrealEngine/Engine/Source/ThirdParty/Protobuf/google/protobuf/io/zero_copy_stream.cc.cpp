// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 52

// operator<<<123> @ 14f9298e0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<123>(char const (& __ptr64)[123])
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<123>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// Init<0> @ 14f929930

/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Init<0>(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Init<0>
          (CordRepBtreeNavigator *this,CordRepBtree *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  CordRepBtree **ppCVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar3 = (uint)bVar1;
  this->height_ = uVar3;
  lVar5 = (ulonglong)uVar3 - 1;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 6);
  uVar6 = (ulonglong)bVar2;
  this->node_[bVar1] = param_1;
  this->index_[bVar1] = bVar2;
  if (-1 < lVar5) {
    ppCVar4 = this->node_ + ((ulonglong)uVar3 - 1);
    do {
      param_1 = (CordRepBtree *)param_1->edges_[uVar6];
      *ppCVar4 = param_1;
      ppCVar4 = ppCVar4 + -1;
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
      uVar6 = (ulonglong)bVar1;
      this->index_[lVar5] = bVar1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return this->node_[0]->edges_[uVar6];
}

// MakeConstSpan<char_const_> @ 14f929990

/* class absl::lts_20240722::Span<char const > __cdecl absl::lts_20240722::MakeConstSpan<char const
   >(char const * __ptr64,unsigned __int64) */

Span<char_const_> * __cdecl
absl::lts_20240722::MakeConstSpan<char_const_>
          (Span<char_const_> *__return_storage_ptr__,char *param_1,__uint64 param_2)

{
  __return_storage_ptr__->ptr_ = param_1;
  __return_storage_ptr__->len_ = param_2;
  return __return_storage_ptr__;
}

// ChunkIterator @ 14f929a10

/* WARNING: Type propagation algorithm not settling */
/* private: __cdecl absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(class
   absl::lts_20240722::Cord const * __ptr64) __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(ChunkIterator *this,Cord *param_1)

{
  byte bVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  CordRep *pCVar5;
  CordRepBtree *pCVar6;
  CordRepBtree *pCVar7;
  ulonglong uVar8;
  CordRep *pCVar9;
  CordRepBtree **ppCVar10;
  ulong64 uStack_10;
  
  pCVar9 = (CordRep *)0x0;
  (this->current_chunk_)._Mydata = (char *)0x0;
  (this->current_chunk_)._Mysize = 0;
  this->current_leaf_ = (CordRep *)0x0;
  this->bytes_remaining_ = 0;
  (this->btree_reader_).remaining_ = 0;
  (this->btree_reader_).navigator_.height_ = -1;
  uVar3 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if (((uVar3 & 1) == 0) ||
     (pCVar6 = (CordRepBtree *)(param_1->contents_).data_.rep_.field0_0x0.as_tree.rep,
     pCVar6 == (CordRepBtree *)0x0)) {
    uVar3 = uVar3 >> 1;
    this->bytes_remaining_ = uVar3;
    if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) {
      pCVar9 = (CordRep *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
    }
    (this->current_chunk_)._Mydata = (char *)pCVar9;
    (this->current_chunk_)._Mysize = uVar3;
  }
  else {
    uVar2 = pCVar6->_padding_;
    this->bytes_remaining_ = uVar2;
    if (uVar2 != 0) {
      if (*(undefined1 *)((longlong)&pCVar6->_padding_ + 4) == '\x02') {
        pCVar6 = (CordRepBtree *)pCVar6->edges_[0];
      }
      if (*(undefined1 *)((longlong)&pCVar6->_padding_ + 4) == '\x03') {
        bVar1 = *(undefined1 *)((longlong)&pCVar6->_padding_ + 5);
        uVar3 = (ulonglong)bVar1;
        (this->btree_reader_).navigator_.height_ = (uint)bVar1;
        bVar1 = *(undefined1 *)((longlong)&pCVar6->_padding_ + 6);
        uVar8 = (ulonglong)bVar1;
        (this->btree_reader_).navigator_.node_[uVar3] = pCVar6;
        (this->btree_reader_).navigator_.index_[uVar3] = bVar1;
        lVar4 = uVar3 - 1;
        if (-1 < lVar4) {
          ppCVar10 = (this->btree_reader_).navigator_.node_ + (uVar3 - 1);
          pCVar7 = pCVar6;
          do {
            pCVar7 = (CordRepBtree *)pCVar7->edges_[uVar8];
            *ppCVar10 = pCVar7;
            ppCVar10 = ppCVar10 + -1;
            bVar1 = *(byte *)((longlong)((RefcountAndFlags *)&pCVar7->_padding_ + 1) + 2);
            uVar8 = (ulonglong)bVar1;
            (this->btree_reader_).navigator_.index_[lVar4] = bVar1;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
        }
        pCVar5 = (this->btree_reader_).navigator_.node_[0]->edges_[uVar8];
        (this->btree_reader_).remaining_ = pCVar6->_padding_ - pCVar5->length;
        uStack_10 = pCVar5->length;
        if (pCVar5->tag == '\x01') {
          pCVar9 = (CordRep *)pCVar5[1].length;
          pCVar5 = *(CordRep **)&pCVar5[1].refcount;
        }
        if (5 < pCVar5->tag) {
          (this->current_chunk_)._Mydata = (char *)(pCVar5->storage + (longlong)pCVar9);
          (this->current_chunk_)._Mysize = uStack_10;
          return this;
        }
        pCVar5 = (CordRep *)pCVar5[1].length;
      }
      else {
        this->current_leaf_ = (CordRep *)pCVar6;
        uStack_10 = pCVar6->_padding_;
        if (*(undefined1 *)((longlong)&pCVar6->_padding_ + 4) == '\x01') {
          pCVar9 = pCVar6->edges_[0];
          pCVar6 = (CordRepBtree *)pCVar6->edges_[1];
        }
        if (5 < (byte)*(undefined1 *)((longlong)&pCVar6->_padding_ + 4)) {
          (this->current_chunk_)._Mydata = (char *)(pCVar9->storage + (longlong)pCVar6);
          (this->current_chunk_)._Mysize = uStack_10;
          return this;
        }
        pCVar5 = pCVar6->edges_[0];
      }
      (this->current_chunk_)._Mydata =
           (char *)(pCVar5->storage + (longlong)(pCVar9->storage + -0x1a));
      (this->current_chunk_)._Mysize = uStack_10;
      return this;
    }
  }
  return this;
}

// ChunkIterator @ 14f929ba0

/* public: __cdecl absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(void) __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(ChunkIterator *this)

{
  (this->btree_reader_).navigator_.height_ = -1;
  (this->current_chunk_)._Mydata = (char *)0x0;
  (this->current_chunk_)._Mysize = 0;
  this->current_leaf_ = (CordRep *)0x0;
  this->bytes_remaining_ = 0;
  (this->btree_reader_).remaining_ = 0;
  return this;
}

// ChunkRange @ 14f929bd0

/* public: __cdecl absl::lts_20240722::Cord::ChunkRange::ChunkRange(class absl::lts_20240722::Cord
   const * __ptr64) __ptr64 */

ChunkRange * __thiscall
absl::lts_20240722::Cord::ChunkRange::ChunkRange(ChunkRange *this,Cord *param_1)

{
  this->cord_ = param_1;
  return this;
}

// CordRepBtreeNavigator @ 14f929be0

/* public: __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::CordRepBtreeNavigator(void) __ptr64 */

CordRepBtreeNavigator * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::CordRepBtreeNavigator
          (CordRepBtreeNavigator *this)

{
  this->height_ = -1;
  return this;
}

// CordRepBtreeReader @ 14f929bf0

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepBtreeReader::CordRepBtreeReader(void)
   __ptr64 */

CordRepBtreeReader * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::CordRepBtreeReader(CordRepBtreeReader *this)

{
  this->remaining_ = 0;
  (this->navigator_).height_ = -1;
  return this;
}

// operator= @ 14f929c10

/* public: class absl::lts_20240722::CordBuffer & __ptr64 __cdecl
   absl::lts_20240722::CordBuffer::operator=(class absl::lts_20240722::CordBuffer && __ptr64)
   __ptr64 */

CordBuffer * __thiscall
absl::lts_20240722::CordBuffer::operator=(CordBuffer *this,CordBuffer *param_1)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  void *pvVar3;
  int iVar4;
  
  if (((this->rep_).field0_0x0.short_rep.raw_size & 1U) == 0) {
    pCVar2 = (this->rep_).field0_0x0.long_rep.rep;
    bVar1 = pCVar2->field_0xc;
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    ::operator_delete(pCVar2,(longlong)iVar4);
  }
  pvVar3 = (param_1->rep_).field0_0x0.long_rep.padding;
  (this->rep_).field0_0x0.long_rep.rep = (param_1->rep_).field0_0x0.long_rep.rep;
  (this->rep_).field0_0x0.long_rep.padding = pvVar3;
  (param_1->rep_).field0_0x0.short_rep.raw_size = '\x01';
  return this;
}

// operator== @ 14f929c80

/* public: bool __cdecl absl::lts_20240722::Cord::ChunkIterator::operator==(class
   absl::lts_20240722::Cord::ChunkIterator const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::ChunkIterator::operator==(ChunkIterator *this,ChunkIterator *param_1)

{
  return this->bytes_remaining_ == param_1->bytes_remaining_;
}

// operator!= @ 14f929ca0

/* public: bool __cdecl absl::lts_20240722::Cord::ChunkIterator::operator!=(class
   absl::lts_20240722::Cord::ChunkIterator const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::ChunkIterator::operator!=(ChunkIterator *this,ChunkIterator *param_1)

{
  return this->bytes_remaining_ != param_1->bytes_remaining_;
}

// operator_bool @ 14f929cc0

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepBtreeReader::operator bool(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::operator_bool(CordRepBtreeReader *this)

{
  int iVar1;
  
  iVar1 = (this->navigator_).height_;
  if (-1 < iVar1) {
    return (this->navigator_).node_[iVar1] != (CordRepBtree *)0x0;
  }
  return false;
}

// operator* @ 14f929cf0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::ChunkIterator::operator*(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::Cord::ChunkIterator::operator*
          (ChunkIterator *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->current_chunk_)._Mysize;
  __return_storage_ptr__->_Mydata = (this->current_chunk_)._Mydata;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// operator++ @ 14f929d00

/* public: class absl::lts_20240722::Cord::ChunkIterator & __ptr64 __cdecl
   absl::lts_20240722::Cord::ChunkIterator::operator++(void) __ptr64 */

ChunkIterator * __thiscall absl::lts_20240722::Cord::ChunkIterator::operator++(ChunkIterator *this)

{
  ulong64 *puVar1;
  int iVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  puVar1 = &this->bytes_remaining_;
  *puVar1 = *puVar1 - (this->current_chunk_)._Mysize;
  if (*puVar1 != 0) {
    iVar2 = (this->btree_reader_).navigator_.height_;
    if ((-1 < iVar2) && ((this->btree_reader_).navigator_.node_[iVar2] != (CordRepBtree *)0x0)) {
      pbVar4 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_18);
      uVar3 = pbVar4->_Mysize;
      (this->current_chunk_)._Mydata = pbVar4->_Mydata;
      (this->current_chunk_)._Mysize = uVar3;
      return this;
    }
    (this->current_chunk_)._Mydata = (char *)0x0;
    (this->current_chunk_)._Mysize = 0;
  }
  return this;
}

// FUN_14f929d60 @ 14f929d60

undefined8 * FUN_14f929d60(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int local_res8 [2];
  undefined8 local_res18 [2];
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_res18,local_res8);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (*(int *)param_1[1] < local_res8[0]) {
    (**(code **)(*(longlong *)*param_1 + 0x10))
              ((longlong *)*param_1,local_res8[0] - *(int *)param_1[1]);
    local_res8[0] = *(int *)param_1[1];
  }
  *param_2 = local_res18[0];
  param_2[1] = (longlong)local_res8[0];
  return param_2;
}

// FUN_14f929df0 @ 14f929df0

Span<char> * FUN_14f929df0(undefined8 *param_1,Span<char> *param_2)

{
  byte bVar1;
  Cord *this;
  undefined8 *puVar2;
  byte *pbVar3;
  void *pvVar4;
  CordBuffer *pCVar5;
  int iVar6;
  Rep_u_0 local_18;
  
  this = *(Cord **)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  local_18.long_rep.rep = (CordRepFlat *)*puVar2;
  local_18.long_rep.padding = (void *)puVar2[1];
  *(undefined1 *)puVar2 = 1;
  absl::lts_20240722::Cord::Append(this,(CordBuffer *)&local_18.long_rep);
  pCVar5 = absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
                     ((CordBuffer *)&local_18.long_rep,(longlong)*(int *)param_1[2]);
  pbVar3 = (byte *)param_1[1];
  if ((*pbVar3 & 1) == 0) {
    bVar1 = *(byte *)((longlong)*(void **)pbVar3 + 0xc);
    if (bVar1 < 0x43) {
      iVar6 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar6 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar6 = (bVar1 - 0xb8) * 0x1000;
    }
    operator_delete(*(void **)pbVar3,(longlong)iVar6);
  }
  pvVar4 = (pCVar5->rep_).field0_0x0.long_rep.padding;
  *(CordRepFlat **)pbVar3 = (pCVar5->rep_).field0_0x0.long_rep.rep;
  *(void **)(pbVar3 + 8) = pvVar4;
  (pCVar5->rep_).field0_0x0.short_rep.raw_size = '\x01';
  if (((ulonglong)local_18.long_rep.rep & 1) == 0) {
    bVar1 = (local_18.long_rep.rep)->field_0xc;
    if (bVar1 < 0x43) {
      iVar6 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar6 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar6 = (bVar1 - 0xb8) * 0x1000;
    }
    operator_delete(local_18.long_rep.rep,(longlong)iVar6);
  }
  absl::lts_20240722::CordBuffer::available_up_to
            ((CordBuffer *)param_1[1],param_2,(longlong)*(int *)param_1[2]);
  return param_2;
}

// FUN_14f929f00 @ 14f929f00

void FUN_14f929f00(undefined8 *param_1,longlong *param_2,longlong *param_3,size_t param_4)

{
  byte *pbVar1;
  
  memcpy((void *)*param_2,(void *)*param_3,param_4);
  *param_2 = *param_2 + param_4;
  param_2[1] = param_2[1] - param_4;
  *param_3 = *param_3 + param_4;
  param_3[1] = param_3[1] - param_4;
  *(int *)*param_1 = *(int *)*param_1 - (int)param_4;
  pbVar1 = (byte *)param_1[1];
  if ((*pbVar1 & 1) == 0) {
    **(longlong **)pbVar1 = **(longlong **)pbVar1 + param_4;
  }
  else {
    *pbVar1 = (char)param_4 * '\x02' + *pbVar1;
  }
  return;
}

// AdvanceBtree @ 14f929f80

/* private: class absl::lts_20240722::Cord::ChunkIterator & __ptr64 __cdecl
   absl::lts_20240722::Cord::ChunkIterator::AdvanceBtree(void) __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkIterator::AdvanceBtree(ChunkIterator *this)

{
  ulong64 uVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  pbVar2 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_18);
  uVar1 = pbVar2->_Mysize;
  (this->current_chunk_)._Mydata = pbVar2->_Mydata;
  (this->current_chunk_)._Mysize = uVar1;
  return this;
}

// Chunks @ 14f929fb0

/* public: class absl::lts_20240722::Cord::ChunkRange __cdecl
   absl::lts_20240722::Cord::Chunks(void)const __ptr64 */

ChunkRange __thiscall absl::lts_20240722::Cord::Chunks(Cord *this)

{
  Cord *in_RDX;
  
  (in_RDX->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = (long64)this;
  return (ChunkRange)in_RDX;
}

// Data @ 14f929fc0

/* public: char const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::Data(void)const __ptr64 */

char * __thiscall absl::lts_20240722::cord_internal::CordRepFlat::Data(CordRepFlat *this)

{
  return &this->field_0xd;
}

// Edge @ 14f929fd0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Edge(unsigned __int64)const __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Edge(CordRepBtree *this,__uint64 param_1)

{
  return this->edges_[param_1];
}

// EdgeData @ 14f929fe0

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::EdgeData(struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::cord_internal::EdgeData
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,CordRep *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = param_1->length;
  uVar2 = 0;
  if (param_1->tag == '\x01') {
    uVar2 = param_1[1].length;
    param_1 = *(CordRep **)&param_1[1].refcount;
  }
  if (5 < param_1->tag) {
    __return_storage_ptr__->_Mydata = (char *)(param_1->storage + uVar2);
    __return_storage_ptr__->_Mysize = uVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = (char *)(param_1[1].length + uVar2);
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// Init @ 14f92a050

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::Init(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::Init
          (CordRepBtreeReader *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          CordRepBtree *param_1)

{
  byte bVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  CordRepBtree **ppCVar5;
  CordRep *pCVar6;
  ulong64 uVar7;
  CordRepBtree *pCVar8;
  ulonglong uVar9;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar3 = (ulonglong)bVar1;
  (this->navigator_).height_ = (uint)bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
  uVar9 = (ulonglong)bVar1;
  (this->navigator_).node_[uVar3] = param_1;
  (this->navigator_).index_[uVar3] = bVar1;
  lVar4 = uVar3 - 1;
  if (-1 < lVar4) {
    ppCVar5 = (this->navigator_).node_ + (uVar3 - 1);
    pCVar8 = param_1;
    do {
      pCVar8 = (CordRepBtree *)pCVar8->edges_[uVar9];
      *ppCVar5 = pCVar8;
      ppCVar5 = ppCVar5 + -1;
      bVar1 = *(undefined1 *)((longlong)&pCVar8->_padding_ + 6);
      uVar9 = (ulonglong)bVar1;
      (this->navigator_).index_[lVar4] = bVar1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  pCVar6 = (this->navigator_).node_[0]->edges_[uVar9];
  this->remaining_ = param_1->_padding_ - pCVar6->length;
  uVar7 = 0;
  uVar2 = pCVar6->length;
  if (pCVar6->tag == '\x01') {
    uVar7 = pCVar6[1].length;
    pCVar6 = *(CordRep **)&pCVar6[1].refcount;
  }
  if (5 < pCVar6->tag) {
    __return_storage_ptr__->_Mydata = (char *)(pCVar6->storage + uVar7);
    __return_storage_ptr__->_Mysize = uVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = (char *)(pCVar6[1].length + uVar7);
  __return_storage_ptr__->_Mysize = uVar2;
  return __return_storage_ptr__;
}

// InitFirst @ 14f92a110

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::InitFirst(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64) __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::InitFirst
          (CordRepBtreeNavigator *this,CordRepBtree *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  CordRepBtree **ppCVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  uVar3 = (uint)bVar1;
  this->height_ = uVar3;
  lVar5 = (ulonglong)uVar3 - 1;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 6);
  uVar6 = (ulonglong)bVar2;
  this->node_[bVar1] = param_1;
  this->index_[bVar1] = bVar2;
  if (-1 < lVar5) {
    ppCVar4 = this->node_ + ((ulonglong)uVar3 - 1);
    do {
      param_1 = (CordRepBtree *)param_1->edges_[uVar6];
      *ppCVar4 = param_1;
      ppCVar4 = ppCVar4 + -1;
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
      uVar6 = (ulonglong)bVar1;
      this->index_[lVar5] = bVar1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return this->node_[0]->edges_[uVar6];
}

// InitTree @ 14f92a170

/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl absl::lts_20240722::Cord::ChunkIterator::InitTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::ChunkIterator::InitTree(ChunkIterator *this,CordRep *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  CordRepBtree *pCVar4;
  CordRep *pCVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  CordRepBtree **ppCVar8;
  ulong64 uStack_10;
  
  if (param_1->tag == '\x02') {
    param_1 = (CordRep *)param_1[1].length;
  }
  if (*(undefined1 *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4) == '\x03') {
    bVar1 = *(undefined1 *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 5);
    uVar2 = (ulonglong)bVar1;
    (this->btree_reader_).navigator_.height_ = (uint)bVar1;
    bVar1 = *(undefined1 *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 6);
    uVar6 = (ulonglong)bVar1;
    (this->btree_reader_).navigator_.node_[uVar2] = (CordRepBtree *)param_1;
    (this->btree_reader_).navigator_.index_[uVar2] = bVar1;
    lVar3 = uVar2 - 1;
    if (-1 < lVar3) {
      ppCVar8 = (this->btree_reader_).navigator_.node_ + (uVar2 - 1);
      pCVar4 = (CordRepBtree *)param_1;
      do {
        pCVar4 = (CordRepBtree *)pCVar4->edges_[uVar6];
        *ppCVar8 = pCVar4;
        ppCVar8 = ppCVar8 + -1;
        bVar1 = *(byte *)((longlong)((RefcountAndFlags *)&pCVar4->_padding_ + 1) + 2);
        uVar6 = (ulonglong)bVar1;
        (this->btree_reader_).navigator_.index_[lVar3] = bVar1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    pCVar5 = (this->btree_reader_).navigator_.node_[0]->edges_[uVar6];
    pCVar7 = (CordRep *)0x0;
    (this->btree_reader_).remaining_ = ((CordRepBtree *)param_1)->_padding_ - pCVar5->length;
    uStack_10 = pCVar5->length;
    if (pCVar5->tag == '\x01') {
      pCVar7 = (CordRep *)pCVar5[1].length;
      pCVar5 = *(CordRep **)&pCVar5[1].refcount;
    }
    if (5 < pCVar5->tag) {
      (this->current_chunk_)._Mydata = (char *)(pCVar5->storage + (longlong)pCVar7);
      (this->current_chunk_)._Mysize = uStack_10;
      return;
    }
    pCVar5 = (CordRep *)pCVar5[1].length;
  }
  else {
    this->current_leaf_ = param_1;
    pCVar7 = (CordRep *)0x0;
    uStack_10 = ((CordRepBtree *)param_1)->_padding_;
    if (*(undefined1 *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4) == '\x01') {
      pCVar7 = ((CordRepBtree *)param_1)->edges_[0];
      param_1 = ((CordRepBtree *)param_1)->edges_[1];
    }
    if (5 < (byte)*(undefined1 *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4)) {
      (this->current_chunk_)._Mydata =
           (char *)((longlong)((CordRepBtree *)param_1)->edges_ + (longlong)pCVar7[-1].storage);
      (this->current_chunk_)._Mysize = uStack_10;
      return;
    }
    pCVar5 = ((CordRepBtree *)param_1)->edges_[0];
  }
  (this->current_chunk_)._Mydata = (char *)(pCVar7->storage + (longlong)(pCVar5->storage + -0x1a));
  (this->current_chunk_)._Mysize = uStack_10;
  return;
}

// IsCrc @ 14f92a290

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRep::IsCrc(void)const __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::CordRep::IsCrc(CordRep *this)

{
  return this->tag == '\x02';
}

// IsSubstring @ 14f92a2a0

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRep::IsSubstring(void)const __ptr64
    */

bool __thiscall absl::lts_20240722::cord_internal::CordRep::IsSubstring(CordRep *this)

{
  return this->tag == '\x01';
}

// Next @ 14f92a2b0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Next(void) __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Next(CordRepBtreeNavigator *this)

{
  longlong lVar1;
  longlong lVar2;
  uchar *puVar3;
  byte bVar4;
  CordRepBtree *pCVar5;
  ulonglong uVar6;
  CordRepBtree **ppCVar7;
  int iVar8;
  
  ppCVar7 = this->node_;
  if ((ulonglong)this->index_[0] != (ulonglong)*(byte *)((longlong)&(*ppCVar7)->_padding_ + 7) - 1)
  {
    bVar4 = this->index_[0] + 1;
    this->index_[0] = bVar4;
    return (*ppCVar7)->edges_[bVar4];
  }
  iVar8 = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2;
    iVar8 = iVar8 + 1;
    ppCVar7 = ppCVar7 + 1;
    lVar2 = lVar1 + 1;
    if (this->height_ < lVar2) {
      return (CordRep *)0x0;
    }
    pCVar5 = *ppCVar7;
    uVar6 = (ulonglong)this->index_[lVar1 + 1] + 1;
  } while (uVar6 == *(byte *)((longlong)&pCVar5->_padding_ + 7));
  ppCVar7 = this->node_ + lVar1 + 1;
  this->index_[iVar8] = (uchar)uVar6;
  puVar3 = this->index_ + lVar1 + 1;
  do {
    pCVar5 = (CordRepBtree *)pCVar5->edges_[uVar6];
    ppCVar7 = ppCVar7 + -1;
    *ppCVar7 = pCVar5;
    puVar3 = puVar3 + -1;
    lVar2 = lVar2 + -1;
    uVar6 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
    *puVar3 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
  } while (0 < lVar2);
  return pCVar5->edges_[uVar6];
}

// Next @ 14f92a380

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::Next(void) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
          (CordRepBtreeReader *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  ulong64 *puVar1;
  CordRep *pCVar2;
  byte bVar3;
  uchar *puVar4;
  CordRepBtree *pCVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  CordRepBtree **ppCVar8;
  uint uVar9;
  CordRep *pCVar10;
  
  if (this->remaining_ == 0) {
    __return_storage_ptr__->_Mydata = (char *)0x0;
    __return_storage_ptr__->_Mysize = 0;
    return __return_storage_ptr__;
  }
  pCVar5 = (this->navigator_).node_[0];
  ppCVar8 = (this->navigator_).node_;
  bVar3 = (this->navigator_).index_[0];
  if ((ulonglong)bVar3 == (ulonglong)*(byte *)((longlong)&pCVar5->_padding_ + 7) - 1) {
    pCVar7 = (CordRep *)0x0;
    pCVar2 = pCVar7;
    pCVar10 = pCVar7;
    do {
      uVar9 = (int)pCVar10 + 1;
      pCVar10 = (CordRep *)(ulonglong)uVar9;
      ppCVar8 = ppCVar8 + 1;
      puVar1 = &pCVar2->length;
      pCVar2 = (CordRep *)((longlong)puVar1 + 1);
      if ((longlong)(this->navigator_).height_ < (longlong)pCVar2) goto LAB_14f92a454;
      pCVar5 = *ppCVar8;
      uVar6 = (ulonglong)(this->navigator_).index_[(longlong)pCVar2] + 1;
    } while (uVar6 == *(byte *)((longlong)&pCVar5->_padding_ + 7));
    ppCVar8 = (this->navigator_).node_ + (longlong)((longlong)puVar1 + 1);
    (this->navigator_).index_[(int)uVar9] = (uchar)uVar6;
    puVar4 = (this->navigator_).index_ + (longlong)pCVar2;
    do {
      pCVar5 = (CordRepBtree *)pCVar5->edges_[uVar6];
      ppCVar8 = ppCVar8 + -1;
      *ppCVar8 = pCVar5;
      puVar4 = puVar4 + -1;
      pCVar2 = (CordRep *)(pCVar2[-1].storage + 2);
      uVar6 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
      *puVar4 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
    } while (0 < (longlong)pCVar2);
    pCVar7 = pCVar5->edges_[uVar6];
  }
  else {
    bVar3 = bVar3 + 1;
    (this->navigator_).index_[0] = bVar3;
    pCVar7 = pCVar5->edges_[bVar3];
  }
LAB_14f92a454:
  this->remaining_ = this->remaining_ - pCVar7->length;
  EdgeData(__return_storage_ptr__,pCVar7);
  return __return_storage_ptr__;
}

// NextUp @ 14f92a480

/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::NextUp(void) __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::NextUp(CordRepBtreeNavigator *this)

{
  uchar *puVar1;
  CordRepBtree *pCVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  CordRepBtree **ppCVar6;
  uint uVar7;
  ulonglong uVar8;
  
  ppCVar6 = this->node_;
  uVar8 = 0;
  uVar4 = uVar8;
  do {
    uVar3 = uVar4;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    ppCVar6 = ppCVar6 + 1;
    uVar4 = uVar3 + 1;
    if ((longlong)this->height_ < (longlong)uVar4) {
      return (CordRep *)0x0;
    }
    pCVar2 = *ppCVar6;
    uVar5 = (ulonglong)this->index_[uVar3 + 1] + 1;
  } while (uVar5 == *(byte *)((longlong)&pCVar2->_padding_ + 7));
  ppCVar6 = this->node_ + uVar3 + 1;
  this->index_[(int)uVar7] = (uchar)uVar5;
  puVar1 = this->index_ + uVar3 + 1;
  do {
    pCVar2 = (CordRepBtree *)pCVar2->edges_[uVar5];
    ppCVar6 = ppCVar6 + -1;
    *ppCVar6 = pCVar2;
    puVar1 = puVar1 + -1;
    uVar4 = uVar4 - 1;
    uVar5 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar2->_padding_ + 1) + 2);
    *puVar1 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar2->_padding_ + 1) + 2);
  } while (0 < (longlong)uVar4);
  return pCVar2->edges_[uVar5];
}

// ReadCord @ 14f92a520

/* public: virtual bool __cdecl google::protobuf::io::ZeroCopyInputStream::ReadCord(class
   absl::lts_20240722::Cord * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::ZeroCopyInputStream::ReadCord
          (ZeroCopyInputStream *this,Cord *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  CordBuffer *pCVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined8 _Size;
  undefined1 *_Size_00;
  undefined1 *puVar8;
  undefined8 _Dst;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *_Src;
  uint local_res18 [2];
  undefined1 *local_res20;
  undefined1 local_d8 [16];
  Rep_u_0 local_c8;
  Rep_u_0 local_b8;
  undefined1 *local_a8;
  longlong local_a0;
  undefined1 *local_98;
  longlong local_90;
  CordRepFlat *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong local_60;
  Rep_u_0 local_58;
  Rep_u_0 local_48;
  
  puVar10 = (undefined1 *)(longlong)param_2;
  if (param_2 < 1) {
    bVar3 = true;
  }
  else {
    uVar4 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 >> 1;
    }
    else {
      uVar4 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
    }
    if (uVar4 == 0) {
      absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
                ((CordBuffer *)local_d8,(__uint64)puVar10);
    }
    else {
      absl::lts_20240722::Cord::GetAppendBufferSlowPath
                (param_1,(CordBuffer *)local_d8,0,(__uint64)puVar10,0x10);
    }
    if ((local_d8._0_8_ & 1) == 0) {
      bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
      if (bVar1 < 0x43) {
        iVar7 = (uint)bVar1 * 8 + -0x10;
      }
      else if (bVar1 < 0xbb) {
        iVar7 = (bVar1 - 0x3a) * 0x40;
      }
      else {
        iVar7 = (bVar1 - 0xb8) * 0x1000;
      }
      local_c8.long_rep.padding = (void *)(((longlong)iVar7 - *(longlong *)local_d8._0_8_) + -0xd);
      local_c8.long_rep.rep =
           (CordRepFlat *)((undefined1 *)(local_d8._0_8_ + 0xd) + *(longlong *)local_d8._0_8_);
    }
    else {
      local_c8.long_rep.rep = (CordRepFlat *)(local_d8 + (longlong)((char)local_d8[0] >> 1) + 1);
      local_c8.long_rep.padding = (void *)(0xf - (longlong)((char)local_d8[0] >> 1));
    }
    _Size = local_c8.long_rep.padding;
    _Dst = local_c8.long_rep.rep;
    if (puVar10 < local_c8.long_rep.padding) {
      _Size = puVar10;
      local_c8.long_rep.padding = puVar10;
    }
    do {
      uVar9 = (uint)puVar10;
      cVar2 = (**(code **)((longlong)*this + 8))(this,&local_res20,local_res18);
      if (cVar2 == '\0') {
LAB_14f92a9b8:
        local_b8.long_rep.rep = (CordRepFlat *)local_d8._0_8_;
        local_b8.long_rep.padding = (void *)local_d8._8_8_;
        local_d8[0] = 1;
        absl::lts_20240722::Cord::Append(param_1,(CordBuffer *)&local_b8.long_rep);
        bVar3 = false;
        goto LAB_14f92a9d3;
      }
      if ((int)uVar9 < (int)local_res18[0]) {
        (**(code **)((longlong)*this + 0x10))(this,local_res18[0] - uVar9);
        local_res18[0] = uVar9;
      }
      _Src = local_res20;
      _Size_00 = (undefined1 *)(longlong)(int)local_res18[0];
      if (local_res18[0] == 0) goto LAB_14f92a9b8;
      if ((undefined1 *)_Size == (undefined1 *)0x0) {
        local_c8.long_rep.rep = (CordRepFlat *)local_d8._0_8_;
        local_c8.long_rep.padding = (void *)local_d8._8_8_;
        local_d8[0] = 1;
        absl::lts_20240722::Cord::Append(param_1,(CordBuffer *)&local_c8.long_rep);
        puVar8 = (undefined1 *)((ulonglong)puVar10 & 0xffffffff);
        pCVar5 = absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
                           ((CordBuffer *)&local_58.long_rep,(ulonglong)puVar10 & 0xffffffff);
        if ((local_d8._0_8_ & 1) == 0) {
          bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
          if (bVar1 < 0x43) {
            iVar7 = (uint)bVar1 * 8 + -0x10;
          }
          else if (bVar1 < 0xbb) {
            iVar7 = (bVar1 - 0x3a) * 0x40;
          }
          else {
            iVar7 = (bVar1 - 0xb8) * 0x1000;
          }
          ::operator_delete((void *)local_d8._0_8_,(longlong)iVar7);
        }
        local_d8._0_8_ = *(undefined8 *)&(pCVar5->rep_).field0_0x0;
        local_d8._8_8_ = (pCVar5->rep_).field0_0x0.long_rep.padding;
        (pCVar5->rep_).field0_0x0.short_rep.raw_size = '\x01';
        if (((ulonglong)local_58.long_rep.rep & 1) == 0) {
          bVar1 = (local_58.long_rep.rep)->field_0xc;
          if (bVar1 < 0x43) {
            iVar7 = (uint)bVar1 * 8 + -0x10;
          }
          else if (bVar1 < 0xbb) {
            iVar7 = (bVar1 - 0x3a) * 0x40;
          }
          else {
            iVar7 = (bVar1 - 0xb8) * 0x1000;
          }
          ::operator_delete(local_58.long_rep.rep,(longlong)iVar7);
        }
        if ((local_d8._0_8_ & 1) == 0) {
          bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
          if (bVar1 < 0x43) {
            iVar7 = (uint)bVar1 * 8 + -0x10;
          }
          else if (bVar1 < 0xbb) {
            iVar7 = (bVar1 - 0x3a) * 0x40;
          }
          else {
            iVar7 = (bVar1 - 0xb8) * 0x1000;
          }
          local_98 = (undefined1 *)(local_d8._0_8_ + 0xd) + *(longlong *)local_d8._0_8_;
          local_90 = ((longlong)iVar7 - *(longlong *)local_d8._0_8_) + -0xd;
          ppuVar6 = &local_98;
        }
        else {
          local_a8 = local_d8 + (longlong)((char)local_d8[0] >> 1) + 1;
          local_a0 = 0xf - (longlong)((char)local_d8[0] >> 1);
          ppuVar6 = &local_a8;
        }
        _Dst = *ppuVar6;
        _Size = ppuVar6[1];
        local_88 = (CordRepFlat *)_Dst;
        puStack_80 = (undefined1 *)_Size;
        if (puVar8 < (ulonglong)_Size) {
          _Size = puVar8;
          puStack_80 = puVar8;
        }
      }
      if ((ulonglong)_Size < _Size_00) {
        do {
          memcpy((void *)_Dst,_Src,_Size);
          _Src = _Src + _Size;
          _Size_00 = _Size_00 + -_Size;
          uVar9 = (int)puVar10 - (int)_Size;
          puVar10 = (undefined1 *)(ulonglong)uVar9;
          if ((local_d8._0_8_ & 1) == 0) {
            *(undefined1 **)local_d8._0_8_ = (undefined1 *)(_Size + *(longlong *)local_d8._0_8_);
          }
          else {
            local_d8[0] = local_d8[0] + (char)_Size * '\x02';
          }
          local_c8.long_rep.rep = (CordRepFlat *)local_d8._0_8_;
          local_c8.long_rep.padding = (void *)local_d8._8_8_;
          local_d8[0] = 1;
          absl::lts_20240722::Cord::Append(param_1,(CordBuffer *)&local_c8.long_rep);
          puVar8 = (undefined1 *)(longlong)(int)uVar9;
          pCVar5 = absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
                             ((CordBuffer *)&local_48.long_rep,(__uint64)puVar8);
          if ((local_d8._0_8_ & 1) == 0) {
            bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
            if (bVar1 < 0x43) {
              iVar7 = (uint)bVar1 * 8 + -0x10;
            }
            else if (bVar1 < 0xbb) {
              iVar7 = (bVar1 - 0x3a) * 0x40;
            }
            else {
              iVar7 = (bVar1 - 0xb8) * 0x1000;
            }
            ::operator_delete((void *)local_d8._0_8_,(longlong)iVar7);
          }
          local_d8._0_8_ = *(undefined8 *)&(pCVar5->rep_).field0_0x0;
          local_d8._8_8_ = (pCVar5->rep_).field0_0x0.long_rep.padding;
          (pCVar5->rep_).field0_0x0.short_rep.raw_size = '\x01';
          if (((ulonglong)local_48.long_rep.rep & 1) == 0) {
            bVar1 = (local_48.long_rep.rep)->field_0xc;
            if (bVar1 < 0x43) {
              iVar7 = (uint)bVar1 * 8 + -0x10;
            }
            else if (bVar1 < 0xbb) {
              iVar7 = (bVar1 - 0x3a) * 0x40;
            }
            else {
              iVar7 = (bVar1 - 0xb8) * 0x1000;
            }
            ::operator_delete(local_48.long_rep.rep,(longlong)iVar7);
          }
          if ((local_d8._0_8_ & 1) == 0) {
            bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
            if (bVar1 < 0x43) {
              iVar7 = (uint)bVar1 * 8 + -0x10;
            }
            else if (bVar1 < 0xbb) {
              iVar7 = (bVar1 - 0x3a) * 0x40;
            }
            else {
              iVar7 = (bVar1 - 0xb8) * 0x1000;
            }
            local_68 = (undefined1 *)(local_d8._0_8_ + 0xd) + *(longlong *)local_d8._0_8_;
            local_60 = ((longlong)iVar7 - *(longlong *)local_d8._0_8_) + -0xd;
            ppuVar6 = &local_68;
          }
          else {
            local_78 = local_d8 + (longlong)((char)local_d8[0] >> 1) + 1;
            local_70 = 0xf - (longlong)((char)local_d8[0] >> 1);
            ppuVar6 = &local_78;
          }
          _Dst = *ppuVar6;
          _Size = ppuVar6[1];
          if (puVar8 < ppuVar6[1]) {
            _Size = puVar8;
          }
          local_c8.long_rep.rep = (CordRepFlat *)_Dst;
          local_c8.long_rep.padding = (void *)_Size;
          local_b8.long_rep.rep = (CordRepFlat *)_Dst;
          local_b8.long_rep.padding = (void *)_Size;
        } while ((ulonglong)_Size < _Size_00);
      }
      memcpy((void *)_Dst,_Src,(size_t)_Size_00);
      uVar9 = uVar9 - (int)_Size_00;
      puVar10 = (undefined1 *)(ulonglong)uVar9;
      if ((local_d8._0_8_ & 1) == 0) {
        *(undefined1 **)local_d8._0_8_ = _Size_00 + *(longlong *)local_d8._0_8_;
      }
      else {
        local_d8[0] = local_d8[0] + (char)_Size_00 * '\x02';
      }
      _Size = (undefined1 *)(_Size + -(longlong)_Size_00);
      _Dst = (CordRepFlat *)((longlong)&((CordRepFlat *)_Dst)->field_0x0 + (longlong)_Size_00);
    } while (0 < (int)uVar9);
    local_b8.long_rep.rep = (CordRepFlat *)local_d8._0_8_;
    local_b8.long_rep.padding = (void *)local_d8._8_8_;
    local_d8[0] = 1;
    absl::lts_20240722::Cord::Append(param_1,(CordBuffer *)&local_b8.long_rep);
    bVar3 = true;
LAB_14f92a9d3:
    if ((local_d8._0_8_ & 1) == 0) {
      bVar1 = *(undefined1 *)(local_d8._0_8_ + 0xc);
      if (bVar1 < 0x43) {
        iVar7 = (uint)bVar1 * 8 + -0x10;
      }
      else if (bVar1 < 0xbb) {
        iVar7 = (bVar1 - 0x3a) * 0x40;
      }
      else {
        iVar7 = (bVar1 - 0xb8) * 0x1000;
      }
      ::operator_delete((void *)local_d8._0_8_,(longlong)iVar7);
    }
  }
  return bVar3;
}

// SkipCrcNode @ 14f92aa40

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::SkipCrcNode(struct absl::lts_20240722::cord_internal::CordRep
   * __ptr64) */

CordRep * __cdecl absl::lts_20240722::cord_internal::SkipCrcNode(CordRep *param_1)

{
  if (param_1->tag == '\x02') {
    return (CordRep *)param_1[1].length;
  }
  return param_1;
}

// WriteAliasedRaw @ 14f92aa60

/* public: virtual bool __cdecl google::protobuf::io::ZeroCopyOutputStream::WriteAliasedRaw(void
   const * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::ZeroCopyOutputStream::WriteAliasedRaw
          (ZeroCopyOutputStream *this,void *param_1,int param_2)

{
  LogMessage *this_00;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  this_00 = (LogMessage *)
            absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                      (&local_18,
                       "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream.cc"
                       ,0x71);
  local_28._Mydata =
       "This ZeroCopyOutputStream doesn\'t support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug."
  ;
  local_28._Mysize = 0x7a;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// WriteCord @ 14f92aad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: virtual bool __cdecl google::protobuf::io::ZeroCopyOutputStream::WriteCord(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::ZeroCopyOutputStream::WriteCord(ZeroCopyOutputStream *this,Cord *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  basic_string_view<char,std::char_traits<char>_> *pbVar7;
  ulonglong _Size;
  char *_Src;
  undefined1 auStack_128 [32];
  uint local_108 [2];
  void *local_100;
  char *local_f8;
  ulonglong uStack_f0;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  ChunkIterator local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar6 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar6 & 1) == 0) {
    uVar6 = uVar6 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 == 0) {
    bVar4 = true;
  }
  else {
    local_108[0] = 0;
    cVar5 = (**(code **)((longlong)*this + 8))(this,&local_100,local_108);
    if (cVar5 == '\0') {
LAB_14f92ac76:
      bVar4 = false;
    }
    else {
      absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(&local_d8,param_1);
      uVar6 = (ulonglong)local_108[0];
      _Src = local_d8.current_chunk_._Mydata;
      uVar1 = local_d8.current_chunk_._Mysize;
      _Size = local_d8.current_chunk_._Mysize;
      uVar2 = local_d8.bytes_remaining_;
      iVar3 = local_d8.btree_reader_.navigator_.height_;
      while (local_d8.current_chunk_._Mydata = _Src, local_d8.current_chunk_._Mysize = _Size,
            local_d8.bytes_remaining_ = uVar2, uVar2 != 0) {
        local_f8 = _Src;
        uStack_f0 = _Size;
        if ((ulonglong)(longlong)(int)uVar6 < uVar1) {
          do {
            memcpy(local_100,_Src,(longlong)(int)uVar6);
            _Src = _Src + (int)local_108[0];
            _Size = _Size - (longlong)(int)local_108[0];
            cVar5 = (**(code **)((longlong)*this + 8))(this,&local_100,local_108);
            if (cVar5 == '\0') goto LAB_14f92ac76;
            uVar6 = (ulonglong)(int)local_108[0];
          } while (uVar6 < _Size);
        }
        memcpy(local_100,_Src,_Size);
        local_100 = (void *)((longlong)local_100 + _Size);
        local_108[0] = local_108[0] - (int)_Size;
        uVar6 = (ulonglong)local_108[0];
        local_d8.bytes_remaining_ = uVar2 - uVar1;
        _Src = local_d8.current_chunk_._Mydata;
        _Size = local_d8.current_chunk_._Mysize;
        uVar2 = local_d8.bytes_remaining_;
        if (local_d8.bytes_remaining_ != 0) {
          if ((iVar3 < 0) || (local_d8.btree_reader_.navigator_.node_[iVar3] == (CordRepBtree *)0x0)
             ) {
            local_d8.current_chunk_._Mydata = (char *)0x0;
            local_d8.current_chunk_._Mysize = 0;
            _Src = local_d8.current_chunk_._Mydata;
            uVar1 = 0;
            _Size = local_d8.current_chunk_._Mysize;
          }
          else {
            pbVar7 = absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
                               (&local_d8.btree_reader_,&local_e8);
            uVar6 = (ulonglong)local_108[0];
            _Src = pbVar7->_Mydata;
            uVar1 = pbVar7->_Mysize;
            _Size = pbVar7->_Mysize;
            uVar2 = local_d8.bytes_remaining_;
            iVar3 = local_d8.btree_reader_.navigator_.height_;
          }
        }
      }
      (**(code **)((longlong)*this + 0x10))(this);
      bVar4 = true;
    }
  }
  return bVar4;
}

// available_up_to @ 14f92acc0

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::CordBuffer::available_up_to(unsigned __int64) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::CordBuffer::available_up_to
          (CordBuffer *this,Span<char> *__return_storage_ptr__,__uint64 param_1)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  char *local_18;
  
  bVar1 = (this->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) == 0) {
    pCVar2 = (this->rep_).field0_0x0.long_rep.rep;
    bVar1 = pCVar2->field_0xc;
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    local_18 = &pCVar2->field_0xd + *(longlong *)pCVar2;
    uVar3 = ((longlong)iVar4 - *(longlong *)pCVar2) - 0xd;
  }
  else {
    lVar5 = (longlong)((char)bVar1 >> 1);
    local_18 = (char *)((longlong)&(this->rep_).field0_0x0 + lVar5 + 1);
    uVar3 = 0xf - lVar5;
  }
  if (param_1 < uVar3) {
    uVar3 = param_1;
  }
  __return_storage_ptr__->ptr_ = local_18;
  __return_storage_ptr__->len_ = uVar3;
  return __return_storage_ptr__;
}

// back @ 14f92ad70

/* public: unsigned __int64 __cdecl absl::lts_20240722::cord_internal::CordRepBtree::back(void)const
   __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepBtree::back(CordRepBtree *this)

{
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1;
}

// begin @ 14f92ad80

/* public: class absl::lts_20240722::Cord::ChunkIterator __cdecl
   absl::lts_20240722::Cord::ChunkRange::begin(void)const __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkRange::begin(ChunkRange *this,ChunkIterator *__return_storage_ptr__)

{
  ChunkIterator::ChunkIterator(__return_storage_ptr__,this->cord_);
  return __return_storage_ptr__;
}

// begin @ 14f92adb0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::begin(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepBtree::begin(CordRepBtree *this)

{
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
}

// btree @ 14f92adc0

/* public: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::btree(void) __ptr64 */

CordRepBtree * __thiscall absl::lts_20240722::cord_internal::CordRep::btree(CordRep *this)

{
  return (CordRepBtree *)this;
}

// btree @ 14f92add0

/* public: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::btree(void)const __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::btree(CordRepBtreeNavigator *this)

{
  if (-1 < this->height_) {
    return this->node_[this->height_];
  }
  return (CordRepBtree *)0x0;
}

// chunk_begin @ 14f92adf0

/* public: class absl::lts_20240722::Cord::ChunkIterator __cdecl
   absl::lts_20240722::Cord::chunk_begin(void)const __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::chunk_begin(Cord *this,ChunkIterator *__return_storage_ptr__)

{
  ChunkIterator::ChunkIterator(__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// chunk_end @ 14f92ae20

/* public: class absl::lts_20240722::Cord::ChunkIterator __cdecl
   absl::lts_20240722::Cord::chunk_end(void)const __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::chunk_end(Cord *this,ChunkIterator *__return_storage_ptr__)

{
  CordRepBtreeReader *pCVar1;
  
  (__return_storage_ptr__->btree_reader_).navigator_.height_ = 0;
  (__return_storage_ptr__->btree_reader_).navigator_.index_[0] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[1] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[2] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[3] = '\0';
  pCVar1 = &__return_storage_ptr__->btree_reader_;
  (pCVar1->navigator_).index_[4] = '\0';
  (pCVar1->navigator_).index_[5] = '\0';
  (pCVar1->navigator_).index_[6] = '\0';
  (pCVar1->navigator_).index_[7] = '\0';
  (pCVar1->navigator_).index_[8] = '\0';
  (pCVar1->navigator_).index_[9] = '\0';
  (pCVar1->navigator_).index_[10] = '\0';
  (pCVar1->navigator_).index_[0xb] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.node_[0] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[1] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[2] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[3] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[4] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[5] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[6] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[7] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[8] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[9] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[10] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[0xb] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->current_chunk_)._Mydata = (char *)0x0;
  (__return_storage_ptr__->current_chunk_)._Mysize = 0;
  __return_storage_ptr__->current_leaf_ = (CordRep *)0x0;
  __return_storage_ptr__->bytes_remaining_ = 0;
  (__return_storage_ptr__->btree_reader_).remaining_ = 0;
  (__return_storage_ptr__->btree_reader_).navigator_.height_ = -1;
  return __return_storage_ptr__;
}

// crc @ 14f92ae70

/* public: struct absl::lts_20240722::cord_internal::CordRepCrc * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::crc(void) __ptr64 */

CordRepCrc * __thiscall absl::lts_20240722::cord_internal::CordRep::crc(CordRep *this)

{
  return (CordRepCrc *)this;
}

// empty @ 14f92ae80

/* public: bool __cdecl absl::lts_20240722::Span<char>::empty(void)const __ptr64 */

bool __thiscall absl::lts_20240722::Span<char>::empty(Span<char> *this)

{
  return this->len_ == 0;
}

// end @ 14f92ae90

/* public: class absl::lts_20240722::Cord::ChunkIterator __cdecl
   absl::lts_20240722::Cord::ChunkRange::end(void)const __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkRange::end(ChunkRange *this,ChunkIterator *__return_storage_ptr__)

{
  CordRepBtreeReader *pCVar1;
  
  (__return_storage_ptr__->btree_reader_).navigator_.height_ = 0;
  (__return_storage_ptr__->btree_reader_).navigator_.index_[0] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[1] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[2] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.index_[3] = '\0';
  pCVar1 = &__return_storage_ptr__->btree_reader_;
  (pCVar1->navigator_).index_[4] = '\0';
  (pCVar1->navigator_).index_[5] = '\0';
  (pCVar1->navigator_).index_[6] = '\0';
  (pCVar1->navigator_).index_[7] = '\0';
  (pCVar1->navigator_).index_[8] = '\0';
  (pCVar1->navigator_).index_[9] = '\0';
  (pCVar1->navigator_).index_[10] = '\0';
  (pCVar1->navigator_).index_[0xb] = '\0';
  (__return_storage_ptr__->btree_reader_).navigator_.node_[0] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[1] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[2] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[3] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[4] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[5] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[6] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[7] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[8] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[9] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[10] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->btree_reader_).navigator_.node_[0xb] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->current_chunk_)._Mydata = (char *)0x0;
  (__return_storage_ptr__->current_chunk_)._Mysize = 0;
  __return_storage_ptr__->current_leaf_ = (CordRep *)0x0;
  __return_storage_ptr__->bytes_remaining_ = 0;
  (__return_storage_ptr__->btree_reader_).remaining_ = 0;
  (__return_storage_ptr__->btree_reader_).navigator_.height_ = -1;
  return __return_storage_ptr__;
}

// end @ 14f92aee0

/* public: unsigned __int64 __cdecl absl::lts_20240722::cord_internal::CordRepBtree::end(void)const
   __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepBtree::end(CordRepBtree *this)

{
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 7);
}

// external @ 14f92aef0

/* public: struct absl::lts_20240722::cord_internal::CordRepExternal const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::external(void)const __ptr64 */

CordRepExternal * __thiscall absl::lts_20240722::cord_internal::CordRep::external(CordRep *this)

{
  return (CordRepExternal *)this;
}

// flat @ 14f92af00

/* public: struct absl::lts_20240722::cord_internal::CordRepFlat const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::flat(void)const __ptr64 */

CordRepFlat * __thiscall absl::lts_20240722::cord_internal::CordRep::flat(CordRep *this)

{
  return (CordRepFlat *)this;
}

// height @ 14f92af10

/* public: int __cdecl absl::lts_20240722::cord_internal::CordRepBtree::height(void)const __ptr64 */

int __thiscall absl::lts_20240722::cord_internal::CordRepBtree::height(CordRepBtree *this)

{
  return (int)*(byte *)((longlong)&this->_padding_ + 5);
}

// index @ 14f92af20

/* public: unsigned __int64 __cdecl absl::lts_20240722::cord_internal::CordRepBtree::index(enum
   absl::lts_20240722::cord_internal::CordRepBtree::EdgeType)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::index(CordRepBtree *this,EdgeType param_1)

{
  if (param_1 == kFront) {
    return (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  }
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1;
}

// substring @ 14f92af40

/* public: struct absl::lts_20240722::cord_internal::CordRepSubstring const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::substring(void)const __ptr64 */

CordRepSubstring * __thiscall absl::lts_20240722::cord_internal::CordRep::substring(CordRep *this)

{
  return (CordRepSubstring *)this;
}

// FUN_150295960 @ 150295960

void FUN_150295960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

