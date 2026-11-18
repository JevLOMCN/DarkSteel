// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 37

// NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep><0> @ 1501d0fb0

/* public: __cdecl absl::lts_20240722::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep><0>(void) __ptr64 */

NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep> * __thiscall
absl::lts_20240722::NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::
NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep><0>
          (NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  crc_internal::CrcCordState::RefcountedRep::RefcountedRep((RefcountedRep *)this);
  return this;
}

// PlacementImpl<> @ 1501d0fe0

/* public: __cdecl absl::lts_20240722::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::PlacementImpl::PlacementImpl<>(void)
   __ptr64 */

PlacementImpl * __thiscall
absl::lts_20240722::NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::
PlacementImpl::PlacementImpl<>(PlacementImpl *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  crc_internal::CrcCordState::RefcountedRep::RefcountedRep((RefcountedRep *)this);
  return this;
}

// Launder<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep> @ 1501d1010

/* private: static struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64
   __cdecl absl::lts_20240722::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::PlacementImpl::Launder<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>(struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64) */

RefcountedRep * __cdecl
absl::lts_20240722::NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::
PlacementImpl::Launder<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>
          (RefcountedRep *param_1)

{
  return param_1;
}

// _Emplace_back_internal<int,absl::lts_20240722::crc32c_t> @ 1501d1020

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Emplace_back_internal<int,class
   absl::lts_20240722::crc32c_t>(int && __ptr64,class absl::lts_20240722::crc32c_t && __ptr64)
   __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Emplace_back_internal<int,absl::lts_20240722::crc32c_t>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,int *param_1,crc32c_t *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  PrefixCrc *pPVar3;
  ulonglong uVar4;
  
  if ((this->_Mypair)._Myval2._Mapsize <= (this->_Mypair)._Myval2._Mysize + 1) {
    _Growmap(this,1);
  }
  uVar4 = (this->_Mypair)._Myval2._Mapsize - 1;
  puVar1 = &(this->_Mypair)._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar4;
  uVar4 = (this->_Mypair)._Myval2._Mysize + (this->_Mypair)._Myval2._Myoff & uVar4;
  if ((this->_Mypair)._Myval2._Map[uVar4] == (PrefixCrc *)0x0) {
    pPVar3 = ::operator_new(0x10);
    (this->_Mypair)._Myval2._Map[uVar4] = pPVar3;
  }
  pPVar3 = (this->_Mypair)._Myval2._Map[uVar4];
  uVar2 = param_2->crc_;
  pPVar3->length = (longlong)*param_1;
  (pPVar3->crc).crc_ = uVar2;
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return;
}

// _Prev_iter<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_> @ 1501d10d0

/* class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::_Prev_iter<class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   >(class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >)
    */

_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __cdecl std::
          _Prev_iter<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
                    (_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                     *__return_storage_ptr__,undefined8 *param_2)

{
  ulong64 uVar1;
  
  param_2[1] = param_2[1] + -1;
  uVar1 = param_2[1];
  __return_storage_ptr__->_Mycont =
       (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *)*param_2;
  __return_storage_ptr__->_Myoff = uVar1;
  return __return_storage_ptr__;
}

// _Prev_iter<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_> @ 1501d10f0

/* class std::_Deque_unchecked_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > __cdecl std::_Prev_iter<class
   std::_Deque_unchecked_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > >(class
   std::_Deque_unchecked_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >) */

_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __cdecl std::
          _Prev_iter<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
                    (_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                     *__return_storage_ptr__,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = param_2[1] + -1;
  uVar1 = param_2[1];
  *(undefined8 *)__return_storage_ptr__ = *param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,absl::lts_20240722::crc32c_t> @ 1501d1110

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::construct<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,class
   absl::lts_20240722::crc32c_t>(class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> & __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,int && __ptr64,class
   absl::lts_20240722::crc32c_t && __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,absl::lts_20240722::crc32c_t>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1,
          PrefixCrc *param_2,int *param_3,crc32c_t *param_4)

{
  uint uVar1;
  
  uVar1 = param_4->crc_;
  param_2->length = (longlong)*param_3;
  (param_2->crc).crc_ = uVar1;
  return;
}

// construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,absl::lts_20240722::crc32c_t,0> @ 1501d1130

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,class
   absl::lts_20240722::crc32c_t,0>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc
   * __ptr64 const,int && __ptr64,class absl::lts_20240722::crc32c_t && __ptr64) */

PrefixCrc * __cdecl
std::
construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,int,absl::lts_20240722::crc32c_t,0>
          (PrefixCrc *param_1,int *param_2,crc32c_t *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  (param_1->crc).crc_ = param_3->crc_;
  param_1->length = (longlong)iVar1;
  return param_1;
}

// emplace_back<int,absl::lts_20240722::crc32c_t> @ 1501d1150

/* public: UNKNOWN __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::emplace_back<int,class
   absl::lts_20240722::crc32c_t>(int && __ptr64,class absl::lts_20240722::crc32c_t && __ptr64)
   __ptr64 */

PrefixCrc * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::emplace_back<int,absl::lts_20240722::crc32c_t>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,int *param_1,crc32c_t *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  PrefixCrc *pPVar3;
  ulonglong uVar4;
  
  if ((this->_Mypair)._Myval2._Mapsize <= (this->_Mypair)._Myval2._Mysize + 1) {
    _Growmap(this,1);
  }
  uVar4 = (this->_Mypair)._Myval2._Mapsize - 1;
  puVar1 = &(this->_Mypair)._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar4;
  uVar4 = (this->_Mypair)._Myval2._Mysize + (this->_Mypair)._Myval2._Myoff & uVar4;
  if ((this->_Mypair)._Myval2._Map[uVar4] == (PrefixCrc *)0x0) {
    pPVar3 = ::operator_new(0x10);
    (this->_Mypair)._Myval2._Map[uVar4] = pPVar3;
  }
  pPVar3 = (this->_Mypair)._Myval2._Map[uVar4];
  uVar2 = param_2->crc_;
  pPVar3->length = (longlong)*param_1;
  (pPVar3->crc).crc_ = uVar2;
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return (this->_Mypair)._Myval2._Map
         [(this->_Mypair)._Myval2._Mysize + ((this->_Mypair)._Myval2._Myoff - 1) &
          (this->_Mypair)._Myval2._Mapsize - 1];
}

// forward<absl::lts_20240722::crc32c_t> @ 1501d1220

/* class absl::lts_20240722::crc32c_t && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::crc32c_t>(class absl::lts_20240722::crc32c_t & __ptr64) */

crc32c_t * __cdecl std::forward<absl::lts_20240722::crc32c_t>(crc32c_t *param_1)

{
  return param_1;
}

// launder<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep> @ 1501d1230

/* struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64 __cdecl
   std::launder<struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>(struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64) */

RefcountedRep * __cdecl
std::launder<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>(RefcountedRep *param_1)

{
  return param_1;
}

// CrcCordState @ 1501d1240

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::CrcCordState(class
   absl::lts_20240722::crc_internal::CrcCordState && __ptr64) __ptr64 */

CrcCordState * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::CrcCordState
          (CrcCordState *this,CrcCordState *param_1)

{
  RefcountedRep *pRVar1;
  
  this->refcounted_rep_ = param_1->refcounted_rep_;
  pRVar1 = RefSharedEmptyRep();
  param_1->refcounted_rep_ = pRVar1;
  return this;
}

// CrcCordState @ 1501d1280

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::CrcCordState(class
   absl::lts_20240722::crc_internal::CrcCordState const & __ptr64) __ptr64 */

CrcCordState * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::CrcCordState
          (CrcCordState *this,CrcCordState *param_1)

{
  RefcountedRep *pRVar1;
  
  pRVar1 = param_1->refcounted_rep_;
  this->refcounted_rep_ = pRVar1;
  LOCK();
  pRVar1->count = (atomic<int>)((int)pRVar1->count + 1);
  UNLOCK();
  return this;
}

// CrcCordState @ 1501d12a0

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::CrcCordState(void) __ptr64 */

CrcCordState * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::CrcCordState(CrcCordState *this)

{
  RefcountedRep *this_00;
  RefcountedRep *pRVar1;
  
  this_00 = ::operator_new(0x40);
  pRVar1 = (RefcountedRep *)0x0;
  if (this_00 != (RefcountedRep *)0x0) {
    pRVar1 = (RefcountedRep *)RefcountedRep::RefcountedRep(this_00);
  }
  this->refcounted_rep_ = pRVar1;
  return this;
}

// ~CrcCordState @ 1501d12e0

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::~CrcCordState(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CrcCordState::~CrcCordState(CrcCordState *this)

{
  atomic<int> aVar1;
  RefcountedRep *pRVar2;
  
  pRVar2 = this->refcounted_rep_;
  LOCK();
  aVar1 = pRVar2->count;
  pRVar2->count = (atomic<int>)((int)pRVar2->count + -1);
  UNLOCK();
  if ((aVar1 == (atomic<int>)0x1) && (pRVar2 != (RefcountedRep *)0x0)) {
    std::
    deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    ::
    ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              (&(pRVar2->rep).prefix_crc);
    ::operator_delete(pRVar2,0x40);
    return;
  }
  return;
}

// operator= @ 1501d1330

/* public: class absl::lts_20240722::crc_internal::CrcCordState & __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::operator=(class
   absl::lts_20240722::crc_internal::CrcCordState && __ptr64) __ptr64 */

CrcCordState * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::operator=(CrcCordState *this,CrcCordState *param_1)

{
  atomic<int> aVar1;
  RefcountedRep *pRVar2;
  
  if (this != param_1) {
    pRVar2 = this->refcounted_rep_;
    LOCK();
    aVar1 = pRVar2->count;
    pRVar2->count = (atomic<int>)((int)pRVar2->count + -1);
    UNLOCK();
    if ((aVar1 == (atomic<int>)0x1) && (pRVar2 != (RefcountedRep *)0x0)) {
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                (&(pRVar2->rep).prefix_crc);
      ::operator_delete(pRVar2,0x40);
    }
    this->refcounted_rep_ = param_1->refcounted_rep_;
    pRVar2 = RefSharedEmptyRep();
    param_1->refcounted_rep_ = pRVar2;
  }
  return this;
}

// operator= @ 1501d13a0

/* public: class absl::lts_20240722::crc_internal::CrcCordState & __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::operator=(class
   absl::lts_20240722::crc_internal::CrcCordState const & __ptr64) __ptr64 */

CrcCordState * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::operator=(CrcCordState *this,CrcCordState *param_1)

{
  atomic<int> aVar1;
  RefcountedRep *pRVar2;
  
  if (this != param_1) {
    pRVar2 = this->refcounted_rep_;
    LOCK();
    aVar1 = pRVar2->count;
    pRVar2->count = (atomic<int>)((int)pRVar2->count + -1);
    UNLOCK();
    if ((aVar1 == (atomic<int>)0x1) && (pRVar2 != (RefcountedRep *)0x0)) {
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                (&(pRVar2->rep).prefix_crc);
      ::operator_delete(pRVar2,0x40);
    }
    pRVar2 = param_1->refcounted_rep_;
    this->refcounted_rep_ = pRVar2;
    LOCK();
    pRVar2->count = (atomic<int>)((int)pRVar2->count + 1);
    UNLOCK();
  }
  return this;
}

// operator[] @ 1501d1410

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64 __cdecl
   std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::operator[](unsigned __int64)const __ptr64 */

PrefixCrc * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::operator[](deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
             *this,__uint64 param_1)

{
  return (this->_Mypair)._Myval2._Map
         [(this->_Mypair)._Myval2._Myoff + param_1 & (this->_Mypair)._Myval2._Mapsize - 1];
}

// operator-- @ 1501d1430

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > &
   __ptr64 __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator--(void) __ptr64 */

_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator--(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this)

{
  this->_Myoff = this->_Myoff - 1;
  return (_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *)this;
}

// operator-- @ 1501d1440

/* public: class std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > &
   __ptr64 __cdecl std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator--(void) __ptr64 */

_Deque_unchecked_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator--(_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this)

{
  *(longlong *)&this->field_0x8 = *(longlong *)&this->field_0x8 + -1;
  return (_Deque_unchecked_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *)this;
}

// operator+ @ 1501d1450

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator+(__int64)const __ptr64 */

__int64 __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator+(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
            *this,__int64 param_1)

{
  ulong64 uVar1;
  longlong in_R8;
  
  uVar1 = this->_Myoff;
  *(_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    **)param_1 = this->_Mycont;
  *(ulong64 *)(param_1 + 8) = uVar1;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + in_R8;
  return param_1;
}

// operator+= @ 1501d1470

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > &
   __ptr64 __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator+=(__int64) __ptr64 */

_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator+=(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this,__int64 param_1)

{
  this->_Myoff = this->_Myoff + param_1;
  return (_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *)this;
}

// Checksum @ 1501d1480

/* public: class absl::lts_20240722::crc32c_t __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::Checksum(void)const __ptr64 */

crc32c_t __thiscall absl::lts_20240722::crc_internal::CrcCordState::Checksum(CrcCordState *this)

{
  RefcountedRep *pRVar1;
  ulong64 uVar2;
  crc32c_t cVar3;
  uint *in_RDX;
  
  pRVar1 = this->refcounted_rep_;
  cVar3.crc_ = (uint)in_RDX;
  if ((pRVar1->rep).prefix_crc._Mypair._Myval2._Mysize == 0) {
    *in_RDX = 0;
    return (crc32c_t)cVar3.crc_;
  }
  uVar2 = (pRVar1->rep).prefix_crc._Mypair._Myval2._Mysize;
  if ((pRVar1->rep).removed_prefix.length == 0) {
    *in_RDX = ((pRVar1->rep).prefix_crc._Mypair._Myval2._Map
               [uVar2 + ((pRVar1->rep).prefix_crc._Mypair._Myval2._Myoff - 1) &
                (pRVar1->rep).prefix_crc._Mypair._Myval2._Mapsize - 1]->crc).crc_;
    return (crc32c_t)cVar3.crc_;
  }
  RemoveCrc32cPrefix(cVar3,(crc32c_t)(pRVar1->rep).removed_prefix.crc.crc_,
                     (ulonglong)
                     ((pRVar1->rep).prefix_crc._Mypair._Myval2._Map
                      [(pRVar1->rep).prefix_crc._Mypair._Myval2._Mapsize - 1 &
                       (pRVar1->rep).prefix_crc._Mypair._Myval2._Myoff + (uVar2 - 1)]->crc).crc_);
  return (crc32c_t)cVar3.crc_;
}

// IsNormalized @ 1501d1530

/* public: bool __cdecl absl::lts_20240722::crc_internal::CrcCordState::IsNormalized(void)const
   __ptr64 */

bool __thiscall absl::lts_20240722::crc_internal::CrcCordState::IsNormalized(CrcCordState *this)

{
  return (this->refcounted_rep_->rep).removed_prefix.length == 0;
}

// Normalize @ 1501d1550

/* public: void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Normalize(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CrcCordState::Normalize(CrcCordState *this)

{
  PrefixCrc *pPVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  crc32c_t cVar4;
  Rep *pRVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  if (((this->refcounted_rep_->rep).removed_prefix.length != 0) &&
     ((this->refcounted_rep_->rep).prefix_crc._Mypair._Myval2._Mysize != 0)) {
    pRVar5 = mutable_rep(this);
    uVar6 = (pRVar5->prefix_crc)._Mypair._Myval2._Myoff;
    uVar7 = (pRVar5->prefix_crc)._Mypair._Myval2._Mysize + uVar6;
    for (; uVar6 != uVar7; uVar6 = uVar6 + 1) {
      pPVar1 = (pRVar5->prefix_crc)._Mypair._Myval2._Map
               [(pRVar5->prefix_crc)._Mypair._Myval2._Mapsize - 1 & uVar6];
      uVar2 = pPVar1->length;
      uVar3 = (pRVar5->removed_prefix).length;
      cVar4 = RemoveCrc32cPrefix((uint)local_res8,(pRVar5->removed_prefix).crc.crc_,
                                 (ulonglong)(pPVar1->crc).crc_);
      (pPVar1->crc).crc_ = *(uint *)CONCAT44(extraout_var,cVar4.crc_);
      pPVar1->length = uVar2 - uVar3;
    }
    (pRVar5->removed_prefix).length = 0;
    *(undefined8 *)&(pRVar5->removed_prefix).crc = 0;
  }
  return;
}

// NormalizedPrefixCrcAtNthChunk @ 1501d1620

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::NormalizedPrefixCrcAtNthChunk(unsigned
   __int64)const __ptr64 */

PrefixCrc * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::NormalizedPrefixCrcAtNthChunk
          (CrcCordState *this,PrefixCrc *__return_storage_ptr__,__uint64 param_1)

{
  RefcountedRep *pRVar1;
  ulong64 uVar2;
  PrefixCrc *pPVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  crc32c_t cVar6;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  pRVar1 = this->refcounted_rep_;
  uVar2 = (pRVar1->rep).removed_prefix.length;
  if (uVar2 == 0) {
    pPVar3 = (pRVar1->rep).prefix_crc._Mypair._Myval2._Map
             [(pRVar1->rep).prefix_crc._Mypair._Myval2._Myoff + param_1 &
              (pRVar1->rep).prefix_crc._Mypair._Myval2._Mapsize - 1];
    cVar6.crc_ = (pPVar3->crc).crc_;
    uVar5 = *(undefined4 *)&pPVar3->field_0xc;
    __return_storage_ptr__->length = pPVar3->length;
    __return_storage_ptr__->crc = (crc32c_t)cVar6.crc_;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
    return __return_storage_ptr__;
  }
  pPVar3 = (pRVar1->rep).prefix_crc._Mypair._Myval2._Map
           [(pRVar1->rep).prefix_crc._Mypair._Myval2._Myoff + param_1 &
            (pRVar1->rep).prefix_crc._Mypair._Myval2._Mapsize - 1];
  uVar4 = pPVar3->length;
  cVar6 = RemoveCrc32cPrefix((uint)local_res8,(pRVar1->rep).removed_prefix.crc.crc_,
                             (ulonglong)(pPVar3->crc).crc_);
  __return_storage_ptr__->length = uVar4 - uVar2;
  (__return_storage_ptr__->crc).crc_ = *(uint *)CONCAT44(extraout_var,cVar6.crc_);
  return __return_storage_ptr__;
}

// NumChunks @ 1501d16c0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::NumChunks(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::crc_internal::CrcCordState::NumChunks(CrcCordState *this)

{
  return (this->refcounted_rep_->rep).prefix_crc._Mypair._Myval2._Mysize;
}

// Poison @ 1501d16d0

/* public: void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Poison(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CrcCordState::Poison(CrcCordState *this)

{
  ulong64 *puVar1;
  uint uVar2;
  Rep *pRVar3;
  PrefixCrc *pPVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  
  pRVar3 = mutable_rep(this);
  if ((this->refcounted_rep_->rep).prefix_crc._Mypair._Myval2._Mysize == 0) {
    if ((pRVar3->prefix_crc)._Mypair._Myval2._Mapsize <=
        (pRVar3->prefix_crc)._Mypair._Myval2._Mysize + 1) {
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::_Growmap(&pRVar3->prefix_crc,1);
    }
    uVar5 = (pRVar3->prefix_crc)._Mypair._Myval2._Mapsize - 1;
    puVar1 = &(pRVar3->prefix_crc)._Mypair._Myval2._Myoff;
    *puVar1 = *puVar1 & uVar5;
    uVar5 = (pRVar3->prefix_crc)._Mypair._Myval2._Myoff +
            (pRVar3->prefix_crc)._Mypair._Myval2._Mysize & uVar5;
    if ((pRVar3->prefix_crc)._Mypair._Myval2._Map[uVar5] == (PrefixCrc *)0x0) {
      pPVar4 = ::operator_new(0x10);
      (pRVar3->prefix_crc)._Mypair._Myval2._Map[uVar5] = pPVar4;
    }
    pPVar4 = (pRVar3->prefix_crc)._Mypair._Myval2._Map[uVar5];
    pPVar4->length = 0;
    (pPVar4->crc).crc_ = 1;
    puVar1 = &(pRVar3->prefix_crc)._Mypair._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
  }
  else {
    uVar6 = (pRVar3->prefix_crc)._Mypair._Myval2._Myoff;
    uVar7 = (pRVar3->prefix_crc)._Mypair._Myval2._Mysize + uVar6;
    if (uVar6 != uVar7) {
      do {
        uVar5 = (pRVar3->prefix_crc)._Mypair._Myval2._Mapsize - 1 & uVar6;
        uVar6 = uVar6 + 1;
        pPVar4 = (pRVar3->prefix_crc)._Mypair._Myval2._Map[uVar5];
        uVar2 = (pPVar4->crc).crc_ + 0x2e76e41b;
        (pPVar4->crc).crc_ = uVar2 >> 0x11 | uVar2 * 0x8000;
      } while (uVar6 != uVar7);
      return;
    }
  }
  return;
}

// Ref @ 1501d17d0

/* private: static void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Ref(struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64) */

void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Ref(RefcountedRep *param_1)

{
  LOCK();
  param_1->count = (atomic<int>)((int)param_1->count + 1);
  UNLOCK();
  return;
}

// RefSharedEmptyRep @ 1501d17e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64
   __cdecl absl::lts_20240722::crc_internal::CrcCordState::RefSharedEmptyRep(void) */

RefcountedRep * __cdecl absl::lts_20240722::crc_internal::CrcCordState::RefSharedEmptyRep(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1554076e8) {
    _Init_thread_header(&DAT_1554076e8);
    if (DAT_1554076e8 == -1) {
      RefcountedRep::RefcountedRep((RefcountedRep *)&DAT_1554076a8);
      _Init_thread_footer(&DAT_1554076e8);
      LOCK();
      _DAT_1554076a8 = _DAT_1554076a8 + 1;
      UNLOCK();
      return (RefcountedRep *)&DAT_1554076a8;
    }
  }
  LOCK();
  _DAT_1554076a8 = _DAT_1554076a8 + 1;
  UNLOCK();
  return (RefcountedRep *)&DAT_1554076a8;
}

// back @ 1501d1870

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc & __ptr64 __cdecl
   std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::back(void)
   __ptr64 */

PrefixCrc * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::back(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
       *this)

{
  return (this->_Mypair)._Myval2._Map
         [(this->_Mypair)._Myval2._Myoff + ((this->_Mypair)._Myval2._Mysize - 1) &
          (this->_Mypair)._Myval2._Mapsize - 1];
}

// back @ 1501d18a0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64 __cdecl
   std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::back(void)const __ptr64 */

PrefixCrc * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::back(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
       *this)

{
  return (this->_Mypair)._Myval2._Map
         [(this->_Mypair)._Myval2._Myoff + ((this->_Mypair)._Myval2._Mysize - 1) &
          (this->_Mypair)._Myval2._Mapsize - 1];
}

// get @ 1501d18d0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64 __cdecl
   absl::lts_20240722::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::get(void) __ptr64 */

RefcountedRep * __thiscall
absl::lts_20240722::NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::get
          (NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep> *this)

{
  return (RefcountedRep *)this;
}

// get @ 1501d18e0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64 __cdecl
   absl::lts_20240722::NoDestructor<struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::PlacementImpl::get(void) __ptr64
    */

RefcountedRep * __thiscall
absl::lts_20240722::NoDestructor<absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep>::
PlacementImpl::get(PlacementImpl *this)

{
  return (RefcountedRep *)this;
}

// rep @ 1501d18f0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::Rep const & __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::rep(void)const __ptr64 */

Rep * __thiscall absl::lts_20240722::crc_internal::CrcCordState::rep(CrcCordState *this)

{
  return &this->refcounted_rep_->rep;
}

// size @ 1501d1900

/* public: unsigned __int64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::size(void)const __ptr64 */

__uint64 __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::size(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
       *this)

{
  return (this->_Mypair)._Myval2._Mysize;
}

// FUN_150330050 @ 150330050

void FUN_150330050(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x40);
  return;
}

