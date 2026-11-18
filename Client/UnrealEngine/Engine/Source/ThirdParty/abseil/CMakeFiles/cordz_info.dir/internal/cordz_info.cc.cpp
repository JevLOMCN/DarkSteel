// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 65

// MakeConstSpan<void*___ptr64_const> @ 1501c7f90

/* class absl::lts_20240722::Span<void * __ptr64 const> __cdecl
   absl::lts_20240722::MakeConstSpan<void * __ptr64 const>(void * __ptr64 const * __ptr64,unsigned
   __int64) */

void ** __cdecl
absl::lts_20240722::MakeConstSpan<void*___ptr64_const>(void **param_1,__uint64 param_2)

{
  void *in_R8;
  
  *param_1 = (void *)param_2;
  param_1[1] = in_R8;
  return param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>_> @ 1501c7fb0

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64> >(struct
   std::_Atomic_padded<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>_>
          (_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>_> @ 1501c7fc0

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64> >(struct
   std::_Atomic_padded<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64> const &
   __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>_>
          (_Atomic_padded<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,absl::lts_20240722::cord_internal::CordzInfo*___ptr64> @ 1501c7fd0

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64>(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,absl::lts_20240722::cord_internal::CordzInfo*___ptr64>
          (CordzInfo **param_1)

{
  return (__int64)*param_1;
}

// __builtin_array_init_helper<absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter> @ 1501c7fe0

/* void __cdecl __builtin_array_init_helper<class
   absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter>(class
   absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter * __ptr64,unsigned __int64) */

void __cdecl
__builtin_array_init_helper<absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter>
          (Counter *param_1,__uint64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 << 3);
    return;
  }
  return;
}

// Span<void*___ptr64_const> @ 1501c8000

/* public: __cdecl absl::lts_20240722::Span<void * __ptr64 const>::Span<void * __ptr64 const>(void *
   __ptr64 const * __ptr64,unsigned __int64) __ptr64 */

Span<void*___ptr64_const> * __thiscall
absl::lts_20240722::Span<void*___ptr64_const>::Span<void*___ptr64_const>
          (Span<void*___ptr64_const> *this,void **param_1,__uint64 param_2)

{
  *(void ***)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// _Atomic_pointer<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> @ 1501c8020

/* public: __cdecl std::_Atomic_pointer<class absl::lts_20240722::cord_internal::CordzInfo *
   __ptr64>::_Atomic_pointer<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64>(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const) __ptr64 */

_Atomic_pointer<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> * __thiscall
std::_Atomic_pointer<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>::
_Atomic_pointer<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>
          (_Atomic_pointer<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> *this,
          CordzInfo *param_1)

{
  *(CordzInfo **)this = param_1;
  return this;
}

// _Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> @ 1501c8030

/* public: __cdecl std::_Atomic_storage<class absl::lts_20240722::cord_internal::CordzInfo *
   __ptr64,8>::_Atomic_storage<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64,8>(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const) __ptr64 */

_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> * __thiscall
std::_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8>::
_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8>
          (_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> *this,
          CordzInfo *param_1)

{
  *(CordzInfo **)this = param_1;
  return this;
}

// atomic<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> @ 1501c8040

/* public: __cdecl std::atomic<class absl::lts_20240722::cord_internal::CordzInfo *
   __ptr64>::atomic<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64>(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const) __ptr64 */

atomic<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> * __thiscall
std::atomic<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>::
atomic<absl::lts_20240722::cord_internal::CordzInfo*___ptr64>
          (atomic<absl::lts_20240722::cord_internal::CordzInfo*___ptr64> *this,CordzInfo *param_1)

{
  *(CordzInfo **)this = param_1;
  return this;
}

// CordzHandle @ 1501c8070

/* public: __cdecl absl::lts_20240722::cord_internal::CordzHandle::CordzHandle(void) __ptr64 */

CordzHandle * __thiscall
absl::lts_20240722::cord_internal::CordzHandle::CordzHandle(CordzHandle *this)

{
  CordzHandle(this,false);
  this->_padding_ = (longlong)vftable;
  return this;
}

// CordzInfo @ 1501c80a0

/* private: __cdecl absl::lts_20240722::cord_internal::CordzInfo::CordzInfo(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class
   absl::lts_20240722::cord_internal::CordzInfo const * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier,__int64) __ptr64 */

CordzInfo * __thiscall
absl::lts_20240722::cord_internal::CordzInfo::CordzInfo
          (CordzInfo *this,CordRep *param_1,CordzInfo *param_2,MethodIdentifier param_3,
          __int64 param_4)

{
  CordzUpdateTracker *pCVar1;
  longlong lVar2;
  int iVar3;
  MethodIdentifier MVar4;
  ulong64 uVar5;
  longlong lVar6;
  CordzUpdateTracker *pCVar7;
  
  CordzHandle::CordzHandle((CordzHandle *)this,false);
  this->_padding_ = (longlong)vftable;
  this->list_ = &global_list_;
  this->ci_prev_ = (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0;
  this->ci_next_ = (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0;
  (this->mutex_).mu_ = (atomic<__int64>)0x0;
  this->rep_ = param_1;
  iVar3 = GetStackTrace(this->stack_,0x40,1);
  this->stack_depth_ = (longlong)iVar3;
  if (param_2 == (CordzInfo *)0x0) {
    this->parent_stack_depth_ = 0;
    this->method_ = param_3;
    MVar4 = kUnknown;
  }
  else {
    if (param_2->parent_stack_depth_ == 0) {
      memcpy(this->parent_stack_,param_2->stack_,param_2->stack_depth_ << 3);
      uVar5 = param_2->stack_depth_;
    }
    else {
      memcpy(this->parent_stack_,param_2->parent_stack_,param_2->parent_stack_depth_ * 8);
      uVar5 = param_2->parent_stack_depth_;
    }
    this->parent_stack_depth_ = uVar5;
    this->method_ = param_3;
    MVar4 = param_2->parent_method_;
    if (MVar4 == kUnknown) {
      MVar4 = param_2->method_;
    }
  }
  this->parent_method_ = MVar4;
  pCVar1 = &this->update_tracker_;
  pCVar1->values_[0] = (Counter)0x0;
  (this->update_tracker_).values_[1] = (Counter)0x0;
  (this->update_tracker_).values_[2] = (Counter)0x0;
  (this->update_tracker_).values_[3] = (Counter)0x0;
  (this->update_tracker_).values_[4] = (Counter)0x0;
  (this->update_tracker_).values_[5] = (Counter)0x0;
  (this->update_tracker_).values_[6] = (Counter)0x0;
  (this->update_tracker_).values_[7] = (Counter)0x0;
  (this->update_tracker_).values_[8] = (Counter)0x0;
  (this->update_tracker_).values_[9] = (Counter)0x0;
  (this->update_tracker_).values_[10] = (Counter)0x0;
  (this->update_tracker_).values_[0xb] = (Counter)0x0;
  (this->update_tracker_).values_[0xc] = (Counter)0x0;
  (this->update_tracker_).values_[0xd] = (Counter)0x0;
  (this->update_tracker_).values_[0xe] = (Counter)0x0;
  (this->update_tracker_).values_[0xf] = (Counter)0x0;
  (this->update_tracker_).values_[0x10] = (Counter)0x0;
  (this->update_tracker_).values_[0x11] = (Counter)0x0;
  (this->update_tracker_).values_[0x12] = (Counter)0x0;
  (this->update_tracker_).values_[0x13] = (Counter)0x0;
  (this->update_tracker_).values_[0x14] = (Counter)0x0;
  (this->update_tracker_).values_[0x15] = (Counter)0x0;
  (this->update_tracker_).values_[0x16] = (Counter)0x0;
  (this->update_tracker_).values_[0x17] = (Counter)0x0;
  (this->update_tracker_).values_[0x18] = (Counter)0x0;
  Now(&this->create_time_);
  this->sampling_stride_ = param_4;
  pCVar1->values_[(int)param_3] = (Counter)((longlong)pCVar1->values_[(int)param_3] + 1);
  if (param_2 != (CordzInfo *)0x0) {
    lVar6 = 0x19;
    pCVar7 = pCVar1;
    do {
      lVar2 = *(longlong *)((longlong)param_2 + (0x460 - (longlong)pCVar1) + (longlong)pCVar7);
      if (lVar2 != 0) {
        pCVar7->values_[0] = (Counter)(lVar2 + (longlong)pCVar7->values_[0]);
      }
      pCVar7 = (CordzUpdateTracker *)(pCVar7->values_ + 1);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return this;
}

// CordzStatistics @ 1501c82a0

/* public: __cdecl absl::lts_20240722::cord_internal::CordzStatistics::CordzStatistics(struct
   absl::lts_20240722::cord_internal::CordzStatistics && __ptr64) __ptr64 */

CordzStatistics * __thiscall
absl::lts_20240722::cord_internal::CordzStatistics::CordzStatistics
          (CordzStatistics *this,CordzStatistics *param_1)

{
  ulong64 uVar1;
  CordzUpdateTracker *pCVar2;
  longlong lVar3;
  longlong lVar4;
  
  this->size = param_1->size;
  this->estimated_memory_usage = param_1->estimated_memory_usage;
  this->estimated_fair_share_memory_usage = param_1->estimated_fair_share_memory_usage;
  this->node_count = param_1->node_count;
  uVar1 = (param_1->node_counts).flat_64;
  (this->node_counts).flat = (param_1->node_counts).flat;
  (this->node_counts).flat_64 = uVar1;
  uVar1 = (param_1->node_counts).flat_256;
  (this->node_counts).flat_128 = (param_1->node_counts).flat_128;
  (this->node_counts).flat_256 = uVar1;
  uVar1 = (param_1->node_counts).flat_1k;
  (this->node_counts).flat_512 = (param_1->node_counts).flat_512;
  (this->node_counts).flat_1k = uVar1;
  uVar1 = (param_1->node_counts).substring;
  (this->node_counts).external = (param_1->node_counts).external;
  (this->node_counts).substring = uVar1;
  uVar1 = (param_1->node_counts).ring;
  (this->node_counts).concat = (param_1->node_counts).concat;
  (this->node_counts).ring = uVar1;
  uVar1 = (param_1->node_counts).crc;
  (this->node_counts).btree = (param_1->node_counts).btree;
  (this->node_counts).crc = uVar1;
  this->method = param_1->method;
  this->parent_method = param_1->parent_method;
  (this->update_tracker).values_[0] = (Counter)0x0;
  (this->update_tracker).values_[1] = (Counter)0x0;
  (this->update_tracker).values_[2] = (Counter)0x0;
  (this->update_tracker).values_[3] = (Counter)0x0;
  (this->update_tracker).values_[4] = (Counter)0x0;
  (this->update_tracker).values_[5] = (Counter)0x0;
  (this->update_tracker).values_[6] = (Counter)0x0;
  (this->update_tracker).values_[7] = (Counter)0x0;
  (this->update_tracker).values_[8] = (Counter)0x0;
  (this->update_tracker).values_[9] = (Counter)0x0;
  (this->update_tracker).values_[10] = (Counter)0x0;
  (this->update_tracker).values_[0xb] = (Counter)0x0;
  (this->update_tracker).values_[0xc] = (Counter)0x0;
  (this->update_tracker).values_[0xd] = (Counter)0x0;
  (this->update_tracker).values_[0xe] = (Counter)0x0;
  (this->update_tracker).values_[0xf] = (Counter)0x0;
  (this->update_tracker).values_[0x10] = (Counter)0x0;
  (this->update_tracker).values_[0x11] = (Counter)0x0;
  (this->update_tracker).values_[0x12] = (Counter)0x0;
  (this->update_tracker).values_[0x13] = (Counter)0x0;
  (this->update_tracker).values_[0x14] = (Counter)0x0;
  (this->update_tracker).values_[0x15] = (Counter)0x0;
  (this->update_tracker).values_[0x16] = (Counter)0x0;
  (this->update_tracker).values_[0x17] = (Counter)0x0;
  (this->update_tracker).values_[0x18] = (Counter)0x0;
  lVar4 = 0;
  pCVar2 = &param_1->update_tracker;
  lVar3 = 0x19;
  do {
    *(Counter *)(&(this->update_tracker).values_[0].field_0x0 + lVar4) = pCVar2->values_[0];
    lVar4 = lVar4 + 8;
    pCVar2 = (CordzUpdateTracker *)(pCVar2->values_ + 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return this;
}

// CordzStatistics @ 1501c8390

/* public: __cdecl absl::lts_20240722::cord_internal::CordzStatistics::CordzStatistics(void) __ptr64
    */

CordzStatistics * __thiscall
absl::lts_20240722::cord_internal::CordzStatistics::CordzStatistics(CordzStatistics *this)

{
  this->size = 0;
  this->estimated_memory_usage = 0;
  this->estimated_fair_share_memory_usage = 0;
  this->node_count = 0;
  (this->node_counts).flat = 0;
  (this->node_counts).flat_64 = 0;
  (this->node_counts).flat_128 = 0;
  (this->node_counts).flat_256 = 0;
  (this->node_counts).flat_512 = 0;
  (this->node_counts).flat_1k = 0;
  (this->node_counts).external = 0;
  (this->node_counts).substring = 0;
  (this->node_counts).concat = 0;
  (this->node_counts).ring = 0;
  (this->node_counts).btree = 0;
  (this->node_counts).crc = 0;
  this->method = kUnknown;
  this->parent_method = kUnknown;
  (this->update_tracker).values_[0] = (Counter)0x0;
  (this->update_tracker).values_[1] = (Counter)0x0;
  (this->update_tracker).values_[2] = (Counter)0x0;
  (this->update_tracker).values_[3] = (Counter)0x0;
  (this->update_tracker).values_[4] = (Counter)0x0;
  (this->update_tracker).values_[5] = (Counter)0x0;
  (this->update_tracker).values_[6] = (Counter)0x0;
  (this->update_tracker).values_[7] = (Counter)0x0;
  (this->update_tracker).values_[8] = (Counter)0x0;
  (this->update_tracker).values_[9] = (Counter)0x0;
  (this->update_tracker).values_[10] = (Counter)0x0;
  (this->update_tracker).values_[0xb] = (Counter)0x0;
  (this->update_tracker).values_[0xc] = (Counter)0x0;
  (this->update_tracker).values_[0xd] = (Counter)0x0;
  (this->update_tracker).values_[0xe] = (Counter)0x0;
  (this->update_tracker).values_[0xf] = (Counter)0x0;
  (this->update_tracker).values_[0x10] = (Counter)0x0;
  (this->update_tracker).values_[0x11] = (Counter)0x0;
  (this->update_tracker).values_[0x12] = (Counter)0x0;
  (this->update_tracker).values_[0x13] = (Counter)0x0;
  (this->update_tracker).values_[0x14] = (Counter)0x0;
  (this->update_tracker).values_[0x15] = (Counter)0x0;
  (this->update_tracker).values_[0x16] = (Counter)0x0;
  (this->update_tracker).values_[0x17] = (Counter)0x0;
  (this->update_tracker).values_[0x18] = (Counter)0x0;
  return this;
}

// CordzUpdateTracker @ 1501c84a0

/* public: __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::CordzUpdateTracker(class
   absl::lts_20240722::cord_internal::CordzUpdateTracker const & __ptr64) __ptr64 */

CordzUpdateTracker * __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::CordzUpdateTracker
          (CordzUpdateTracker *this,CordzUpdateTracker *param_1)

{
  Counter *pCVar1;
  longlong lVar2;
  
  this->values_[0] = (Counter)0x0;
  this->values_[1] = (Counter)0x0;
  this->values_[2] = (Counter)0x0;
  this->values_[3] = (Counter)0x0;
  this->values_[4] = (Counter)0x0;
  this->values_[5] = (Counter)0x0;
  this->values_[6] = (Counter)0x0;
  this->values_[7] = (Counter)0x0;
  this->values_[8] = (Counter)0x0;
  this->values_[9] = (Counter)0x0;
  this->values_[10] = (Counter)0x0;
  this->values_[0xb] = (Counter)0x0;
  this->values_[0xc] = (Counter)0x0;
  this->values_[0xd] = (Counter)0x0;
  this->values_[0xe] = (Counter)0x0;
  this->values_[0xf] = (Counter)0x0;
  this->values_[0x10] = (Counter)0x0;
  this->values_[0x11] = (Counter)0x0;
  this->values_[0x12] = (Counter)0x0;
  this->values_[0x13] = (Counter)0x0;
  this->values_[0x14] = (Counter)0x0;
  this->values_[0x15] = (Counter)0x0;
  this->values_[0x16] = (Counter)0x0;
  this->values_[0x17] = (Counter)0x0;
  this->values_[0x18] = (Counter)0x0;
  lVar2 = 0x19;
  pCVar1 = this->values_;
  do {
    *pCVar1 = param_1->values_[0];
    pCVar1 = pCVar1 + 1;
    param_1 = (CordzUpdateTracker *)((longlong)param_1 + 8);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// CordzUpdateTracker @ 1501c8510

/* public: __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::CordzUpdateTracker(void)
   __ptr64 */

CordzUpdateTracker * __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::CordzUpdateTracker(CordzUpdateTracker *this)

{
  this->values_[0] = (Counter)0x0;
  this->values_[1] = (Counter)0x0;
  this->values_[2] = (Counter)0x0;
  this->values_[3] = (Counter)0x0;
  this->values_[4] = (Counter)0x0;
  this->values_[5] = (Counter)0x0;
  this->values_[6] = (Counter)0x0;
  this->values_[7] = (Counter)0x0;
  this->values_[8] = (Counter)0x0;
  this->values_[9] = (Counter)0x0;
  this->values_[10] = (Counter)0x0;
  this->values_[0xb] = (Counter)0x0;
  this->values_[0xc] = (Counter)0x0;
  this->values_[0xd] = (Counter)0x0;
  this->values_[0xe] = (Counter)0x0;
  this->values_[0xf] = (Counter)0x0;
  this->values_[0x10] = (Counter)0x0;
  this->values_[0x11] = (Counter)0x0;
  this->values_[0x12] = (Counter)0x0;
  this->values_[0x13] = (Counter)0x0;
  this->values_[0x14] = (Counter)0x0;
  this->values_[0x15] = (Counter)0x0;
  this->values_[0x16] = (Counter)0x0;
  this->values_[0x17] = (Counter)0x0;
  this->values_[0x18] = (Counter)0x0;
  return this;
}

// Counter @ 1501c85a0

/* public: __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter::Counter(void)
   __ptr64 */

Counter * __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::Counter::Counter(Counter *this)

{
  *this = (Counter)0x0;
  return this;
}

// NodeCounts @ 1501c85e0

/* public: __cdecl absl::lts_20240722::cord_internal::CordzStatistics::NodeCounts::NodeCounts(void)
   __ptr64 */

NodeCounts * __thiscall
absl::lts_20240722::cord_internal::CordzStatistics::NodeCounts::NodeCounts(NodeCounts *this)

{
  this->flat = 0;
  this->flat_64 = 0;
  this->flat_128 = 0;
  this->flat_256 = 0;
  this->flat_512 = 0;
  this->flat_1k = 0;
  this->external = 0;
  this->substring = 0;
  this->concat = 0;
  this->ring = 0;
  this->btree = 0;
  this->crc = 0;
  return this;
}

// SpinLockHolder @ 1501c8620

/* public: __cdecl absl::lts_20240722::base_internal::SpinLockHolder::SpinLockHolder(class
   absl::lts_20240722::base_internal::SpinLock * __ptr64) __ptr64 */

SpinLockHolder * __thiscall
absl::lts_20240722::base_internal::SpinLockHolder::SpinLockHolder
          (SpinLockHolder *this,SpinLock *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  this->lock_ = param_1;
  aVar2 = param_1->lockword_;
  if (((uint)aVar2 & 1) == 0) {
    LOCK();
    aVar1 = param_1->lockword_;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      param_1->lockword_ = (atomic<unsigned_int>)((uint)aVar2 | 1);
      aVar1 = aVar2;
    }
    UNLOCK();
    if (!bVar3) {
      aVar2 = aVar1;
    }
  }
  if ((~aVar2._0_1_ & 1) == 0) {
    SpinLock::SlowLock(param_1);
  }
  return this;
}

// ~CordzInfo @ 1501c8670

/* private: virtual __cdecl absl::lts_20240722::cord_internal::CordzInfo::~CordzInfo(void) __ptr64
    */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::~CordzInfo(CordzInfo *this)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  
  this->_padding_ = (longlong)vftable;
  pCVar3 = this->rep_;
  if (pCVar3 != (CordRep *)0x0) {
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar3);
    }
  }
  CordzHandle::~CordzHandle((CordzHandle *)this);
  return;
}

// ~SpinLockHolder @ 1501c86c0

/* public: __cdecl absl::lts_20240722::base_internal::SpinLockHolder::~SpinLockHolder(void) __ptr64
    */

void __thiscall
absl::lts_20240722::base_internal::SpinLockHolder::~SpinLockHolder(SpinLockHolder *this)

{
  atomic<unsigned_int> aVar1;
  SpinLock *this_00;
  
  this_00 = this->lock_;
  LOCK();
  aVar1 = this_00->lockword_;
  this_00->lockword_ = (atomic<unsigned_int>)((uint)this_00->lockword_ & 2);
  UNLOCK();
  if (((uint)aVar1 & 0xfffffff8) != 0) {
    SpinLock::SlowUnlock(this_00,(uint)aVar1);
  }
  return;
}

// operator= @ 1501c86f0

/* public: class absl::lts_20240722::cord_internal::CordzUpdateTracker & __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordzUpdateTracker::operator=(class
   absl::lts_20240722::cord_internal::CordzUpdateTracker const & __ptr64) __ptr64 */

CordzUpdateTracker * __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::operator=
          (CordzUpdateTracker *this,CordzUpdateTracker *param_1)

{
  Counter CVar1;
  Counter *pCVar2;
  longlong lVar3;
  
  lVar3 = 0x19;
  pCVar2 = this->values_;
  do {
    CVar1 = param_1->values_[0];
    param_1 = (CordzUpdateTracker *)((longlong)param_1 + 8);
    *pCVar2 = CVar1;
    pCVar2 = pCVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return this;
}

// `vector_deleting_destructor' @ 1501c8720

/* private: virtual void * __ptr64 __cdecl absl::lts_20240722::cord_internal::CordzInfo::`vector
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::cord_internal::CordzInfo::_vector_deleting_destructor_
          (CordzInfo *this,uint param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  
  this->_padding_ = (longlong)vftable;
  pCVar3 = this->rep_;
  if (pCVar3 != (CordRep *)0x0) {
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar3);
    }
  }
  CordzHandle::~CordzHandle((CordzHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x540);
  }
  return this;
}

// FUN_1501c8800 @ 1501c8800

void FUN_1501c8800(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *local_28;
  ulonglong uStack_20;
  longlong local_18;
  longlong lStack_10;
  
  uVar3 = param_2[1];
  *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
  *(longlong *)(*param_1 + 0x70) = *(longlong *)(*param_1 + 0x70) + 1;
  param_1[1] = param_1[1] + 0x40;
  lVar4 = *param_2;
  param_1[2] = (longlong)(__real_4050000000000000 / (double)uVar3 + (double)param_1[2]);
  dVar5 = __real_4040000000000000;
  plVar8 = (longlong *)(lVar4 + 0x10 + (ulonglong)*(byte *)(lVar4 + 0xe) * 8);
  plVar1 = plVar8 + ((ulonglong)*(byte *)(lVar4 + 0xf) - (ulonglong)*(byte *)(lVar4 + 0xe));
  if (*(char *)(lVar4 + 0xd) == '\0') {
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      local_28 = (longlong *)*plVar8;
      if (local_28 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
        uStack_20 = 0;
      }
      else {
        uStack_20 = (longlong)((int)local_28[1] >> 1) * uVar3;
      }
      while ((local_28 != (longlong *)0x0 && (*(char *)((longlong)local_28 + 0xc) == '\x01'))) {
        *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
        *(longlong *)(*param_1 + 0x58) = *(longlong *)(*param_1 + 0x58) + 1;
        param_1[1] = param_1[1] + 0x20;
        param_1[2] = (longlong)(dVar5 / (double)uStack_20 + (double)param_1[2]);
        local_28 = (longlong *)local_28[3];
        if (local_28 == (longlong *)0x0) {
          local_28 = (longlong *)0x0;
          uStack_20 = 0;
        }
        else {
          uStack_20 = (longlong)((int)local_28[1] >> 1) * uStack_20;
        }
      }
      if (local_28 != (longlong *)0x0) {
        if (*(byte *)((longlong)local_28 + 0xc) < 6) {
          if ((local_28 == (longlong *)0x0) || (*(char *)((longlong)local_28 + 0xc) != '\x05'))
          goto LAB_1501c8b1d;
          *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
          *(longlong *)(*param_1 + 0x50) = *(longlong *)(*param_1 + 0x50) + 1;
          uVar7 = *local_28 + 0x28;
        }
        else {
          bVar2 = *(byte *)((longlong)local_28 + 0xc);
          if (bVar2 < 0x43) {
            iVar6 = (uint)bVar2 * 8 + -0x10;
          }
          else if (bVar2 < 0xbb) {
            iVar6 = (bVar2 - 0x3a) * 0x40;
          }
          else {
            iVar6 = (bVar2 - 0xb8) * 0x1000;
          }
          uVar7 = (ulonglong)iVar6;
          *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
          *(longlong *)(*param_1 + 0x20) = *(longlong *)(*param_1 + 0x20) + 1;
          if (uVar7 < 0x41) {
            *(longlong *)(*param_1 + 0x28) = *(longlong *)(*param_1 + 0x28) + 1;
          }
          else if (uVar7 < 0x81) {
            *(longlong *)(*param_1 + 0x30) = *(longlong *)(*param_1 + 0x30) + 1;
          }
          else if (uVar7 < 0x101) {
            *(longlong *)(*param_1 + 0x38) = *(longlong *)(*param_1 + 0x38) + 1;
          }
          else if (uVar7 < 0x201) {
            *(longlong *)(*param_1 + 0x40) = *(longlong *)(*param_1 + 0x40) + 1;
          }
          else if (uVar7 < 0x401) {
            *(longlong *)(*param_1 + 0x48) = *(longlong *)(*param_1 + 0x48) + 1;
          }
        }
        param_1[1] = param_1[1] + uVar7;
        param_1[2] = (longlong)((double)uVar7 / (double)uStack_20 + (double)param_1[2]);
      }
LAB_1501c8b1d:
    }
  }
  else {
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      local_28 = (longlong *)*plVar8;
      if (local_28 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
        uStack_20 = 0;
      }
      else {
        uStack_20 = (longlong)(*(int *)((longlong)local_28 + 8) >> 1) * uVar3;
      }
      local_18 = (longlong)local_28;
      lStack_10 = uStack_20;
      FUN_1501c8800(param_1,&local_18);
    }
  }
  return;
}

// FUN_1501c8b50 @ 1501c8b50

void FUN_1501c8b50(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [16];
  
  uStack_20 = (ulonglong)(*(int *)(param_2 + 8) >> 1);
  if (uStack_20 < 2) {
    uStack_20 = 1;
  }
  else {
    uStack_20 = uStack_20 - 1;
  }
  local_28 = param_2;
  if ((param_2 != 0) && (*(char *)(param_2 + 0xc) == '\x02')) {
    *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
    *(longlong *)(*param_1 + 0x78) = *(longlong *)(*param_1 + 0x78) + 1;
    param_1[1] = param_1[1] + 0x20;
    param_1[2] = (longlong)(__real_4040000000000000 / (double)uStack_20 + (double)param_1[2]);
    local_28 = *(longlong *)(param_2 + 0x10);
    if (local_28 == 0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = (longlong)(*(int *)(local_28 + 8) >> 1) * uStack_20;
    }
  }
  plVar5 = param_1 + 1;
  plVar3 = (longlong *)FUN_1501c8d70(param_1,local_18,&local_28);
  if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0xc) == '\x03')) {
    local_28 = *plVar3;
    uStack_20 = plVar3[1];
    FUN_1501c8800(param_1,&local_28);
  }
  dVar2 = __real_43e0000000000000;
  *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + *plVar5;
  lVar4 = 0;
  dVar1 = (double)param_1[2];
  if ((dVar2 <= dVar1) && (dVar1 = dVar1 - dVar2, dVar1 < dVar2)) {
    lVar4 = -0x8000000000000000;
  }
  *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + (longlong)dVar1 + lVar4;
  return;
}

// FUN_1501c8d70 @ 1501c8d70

longlong * FUN_1501c8d70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar4 = FUN_1501c9a50(param_3);
  dVar6 = __real_4040000000000000;
  while (iVar4 == 1) {
    uVar5 = param_3[1];
    *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
    *(longlong *)(*param_1 + 0x58) = *(longlong *)(*param_1 + 0x58) + 1;
    *param_4 = *param_4 + 0x20;
    lVar2 = *param_3;
    param_4[1] = (longlong)(dVar6 / (double)uVar5 + (double)param_4[1]);
    local_18 = *(longlong *)(lVar2 + 0x18);
    if (local_18 == 0) {
      local_18 = 0;
      uStack_10 = 0;
    }
    else {
      uStack_10 = (longlong)(*(int *)(local_18 + 8) >> 1) * uVar5;
    }
    *(undefined4 *)param_3 = (undefined4)local_18;
    *(undefined4 *)((longlong)param_3 + 4) = local_18._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_10._4_4_;
    iVar4 = FUN_1501c9a50(param_3);
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 == (longlong *)0x0) {
LAB_1501c8f77:
    lVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = lVar2;
    return param_2;
  }
  bVar1 = *(byte *)((longlong)plVar3 + 0xc);
  if (*(byte *)((longlong)plVar3 + 0xc) < 6) {
    if (bVar1 != 5) goto LAB_1501c8f77;
    *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
    *(longlong *)(*param_1 + 0x50) = *(longlong *)(*param_1 + 0x50) + 1;
    uVar5 = *plVar3 + 0x28;
    *param_4 = *param_4 + uVar5;
    if (-1 < (longlong)uVar5) {
      dVar6 = (double)(longlong)uVar5;
      goto LAB_1501c8f00;
    }
  }
  else {
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    uVar5 = (ulonglong)iVar4;
    *(longlong *)(*param_1 + 0x18) = *(longlong *)(*param_1 + 0x18) + 1;
    *(longlong *)(*param_1 + 0x20) = *(longlong *)(*param_1 + 0x20) + 1;
    if (uVar5 < 0x41) {
      *(longlong *)(*param_1 + 0x28) = *(longlong *)(*param_1 + 0x28) + 1;
    }
    else if (uVar5 < 0x81) {
      *(longlong *)(*param_1 + 0x30) = *(longlong *)(*param_1 + 0x30) + 1;
    }
    else if (uVar5 < 0x101) {
      *(longlong *)(*param_1 + 0x38) = *(longlong *)(*param_1 + 0x38) + 1;
    }
    else if (uVar5 < 0x201) {
      *(longlong *)(*param_1 + 0x40) = *(longlong *)(*param_1 + 0x40) + 1;
    }
    else if (uVar5 < 0x401) {
      *(longlong *)(*param_1 + 0x48) = *(longlong *)(*param_1 + 0x48) + 1;
    }
    *param_4 = *param_4 + uVar5;
    if (-1 < (longlong)uVar5) {
      dVar6 = (double)(longlong)uVar5;
      goto LAB_1501c8f00;
    }
  }
  dVar6 = (double)uVar5;
LAB_1501c8f00:
  uVar5 = param_3[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_4[1] = (longlong)(dVar6 / (double)uVar5 + (double)param_4[1]);
  return param_2;
}

// FillParentStack @ 1501c8f90

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::FillParentStack(class
   absl::lts_20240722::cord_internal::CordzInfo const * __ptr64,void * __ptr64 * __ptr64) */

__uint64 __cdecl
absl::lts_20240722::cord_internal::CordzInfo::FillParentStack(CordzInfo *param_1,void **param_2)

{
  if (param_1 == (CordzInfo *)0x0) {
    return 0;
  }
  if (param_1->parent_stack_depth_ != 0) {
    memcpy(param_2,param_1->parent_stack_,param_1->parent_stack_depth_ * 8);
    return param_1->parent_stack_depth_;
  }
  memcpy(param_2,param_1->stack_,param_1->stack_depth_ << 3);
  return param_1->stack_depth_;
}

// GetCordzStatistics @ 1501c9010

/* public: struct absl::lts_20240722::cord_internal::CordzStatistics __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::GetCordzStatistics(void)const __ptr64 */

CordzStatistics * __thiscall
absl::lts_20240722::cord_internal::CordzInfo::GetCordzStatistics
          (CordzInfo *this,CordzStatistics *__return_storage_ptr__)

{
  ulong64 *puVar1;
  RefcountAndFlags *pRVar2;
  atomic<int> aVar3;
  CordRep *pCVar4;
  ulong64 uVar5;
  double dVar6;
  longlong *plVar7;
  CordzUpdateTracker *pCVar8;
  CordzUpdateTracker *pCVar9;
  CordRep *pCVar10;
  longlong lVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  CordzStatistics *local_28;
  longlong local_20;
  double local_18;
  
  pCVar10 = (CordRep *)0x0;
  __return_storage_ptr__->size = 0;
  __return_storage_ptr__->estimated_memory_usage = 0;
  __return_storage_ptr__->estimated_fair_share_memory_usage = 0;
  __return_storage_ptr__->node_count = 0;
  (__return_storage_ptr__->node_counts).flat = 0;
  (__return_storage_ptr__->node_counts).flat_64 = 0;
  (__return_storage_ptr__->node_counts).flat_128 = 0;
  (__return_storage_ptr__->node_counts).flat_256 = 0;
  (__return_storage_ptr__->node_counts).flat_512 = 0;
  (__return_storage_ptr__->node_counts).flat_1k = 0;
  (__return_storage_ptr__->node_counts).external = 0;
  (__return_storage_ptr__->node_counts).substring = 0;
  (__return_storage_ptr__->node_counts).concat = 0;
  (__return_storage_ptr__->node_counts).ring = 0;
  (__return_storage_ptr__->node_counts).btree = 0;
  (__return_storage_ptr__->node_counts).crc = 0;
  __return_storage_ptr__->method = kUnknown;
  __return_storage_ptr__->parent_method = kUnknown;
  pCVar8 = &__return_storage_ptr__->update_tracker;
  pCVar8->values_[0] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[1] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[2] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[3] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[4] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[5] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[6] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[7] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[8] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[9] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[10] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0xb] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0xc] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0xd] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0xe] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0xf] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x10] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x11] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x12] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x13] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x14] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x15] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x16] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x17] = (Counter)0x0;
  (__return_storage_ptr__->update_tracker).values_[0x18] = (Counter)0x0;
  __return_storage_ptr__->method = this->method_;
  __return_storage_ptr__->parent_method = this->parent_method_;
  pCVar9 = &this->update_tracker_;
  lVar11 = 0x19;
  do {
    pCVar8->values_[0] = pCVar9->values_[0];
    pCVar8 = (CordzUpdateTracker *)(pCVar8->values_ + 1);
    pCVar9 = (CordzUpdateTracker *)(pCVar9->values_ + 1);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  Mutex::Lock(&this->mutex_);
  pCVar4 = this->rep_;
  if (pCVar4 != (CordRep *)0x0) {
    LOCK();
    (pCVar4->refcount).count_ = (atomic<int>)((int)(pCVar4->refcount).count_ + 2);
    UNLOCK();
    pCVar10 = pCVar4;
  }
  Mutex::Unlock(&this->mutex_);
  if (pCVar10 != (CordRep *)0x0) {
    __return_storage_ptr__->size = pCVar10->length;
    local_20 = 0;
    local_18 = 0.0;
    uStack_50 = (ulonglong)((int)(pCVar10->refcount).count_ >> 1);
    if (uStack_50 < 2) {
      uStack_50 = 1;
    }
    else {
      uStack_50 = uStack_50 - 1;
    }
    if (pCVar10->tag == '\x02') {
      __return_storage_ptr__->node_count = __return_storage_ptr__->node_count + 1;
      puVar1 = &(__return_storage_ptr__->node_counts).crc;
      *puVar1 = *puVar1 + 1;
      local_20 = 0x20;
      local_18 = __real_4040000000000000 / (double)uStack_50 + 0.0;
      uVar5 = pCVar10[1].length;
      if (uVar5 == 0) {
        local_78 = 0;
        uStack_74 = 0;
        uStack_50 = 0;
        local_20 = 0x20;
      }
      else {
        uStack_50 = (longlong)(*(int *)(uVar5 + 8) >> 1) * uStack_50;
        local_78 = (undefined4)uVar5;
        uStack_74 = (undefined4)(uVar5 >> 0x20);
      }
    }
    else {
      local_68 = SUB84(pCVar10,0);
      uStack_64 = (undefined4)((ulonglong)pCVar10 >> 0x20);
      local_78 = local_68;
      uStack_74 = uStack_64;
    }
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_28 = __return_storage_ptr__;
    plVar7 = (longlong *)FUN_1501c8d70(&local_28,local_38,&local_58,&local_20);
    if ((*plVar7 != 0) && (*(char *)(*plVar7 + 0xc) == '\x03')) {
      local_48 = (undefined4)*plVar7;
      uStack_44 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_40 = (undefined4)plVar7[1];
      uStack_3c = *(undefined4 *)((longlong)plVar7 + 0xc);
      FUN_1501c8800(&local_28,&local_48);
    }
    local_28->estimated_memory_usage = local_28->estimated_memory_usage + local_20;
    lVar11 = 0;
    dVar6 = local_18;
    if ((__real_43e0000000000000 <= local_18) &&
       (dVar6 = local_18 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar11 = -0x8000000000000000;
    }
    local_28->estimated_fair_share_memory_usage =
         local_28->estimated_fair_share_memory_usage + (longlong)dVar6 + lVar11;
    LOCK();
    pRVar2 = &pCVar10->refcount;
    aVar3 = pRVar2->count_;
    pRVar2->count_ = (atomic<int>)((int)pRVar2->count_ + -2);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x2) {
      CordRep::Destroy(pCVar10);
    }
  }
  return __return_storage_ptr__;
}

// GetParentMethod @ 1501c9320

/* private: static enum absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier
   __cdecl absl::lts_20240722::cord_internal::CordzInfo::GetParentMethod(class
   absl::lts_20240722::cord_internal::CordzInfo const * __ptr64) */

MethodIdentifier __cdecl
absl::lts_20240722::cord_internal::CordzInfo::GetParentMethod(CordzInfo *param_1)

{
  MethodIdentifier MVar1;
  
  if (param_1 == (CordzInfo *)0x0) {
    return kUnknown;
  }
  MVar1 = param_1->parent_method_;
  if (MVar1 == kUnknown) {
    MVar1 = param_1->method_;
  }
  return MVar1;
}

// GetParentStack @ 1501c9340

/* public: class absl::lts_20240722::Span<void * __ptr64 const> __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::GetParentStack(void)const __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::GetParentStack(CordzInfo *this)

{
  longlong *in_RDX;
  
  *in_RDX = (longlong)this->parent_stack_;
  in_RDX[1] = this->parent_stack_depth_;
  return;
}

// GetStack @ 1501c9360

/* public: class absl::lts_20240722::Span<void * __ptr64 const> __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::GetStack(void)const __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::GetStack(CordzInfo *this)

{
  longlong *in_RDX;
  
  *in_RDX = (longlong)this->stack_;
  in_RDX[1] = this->stack_depth_;
  return;
}

// Head @ 1501c9380

/* public: static class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::Head(class
   absl::lts_20240722::cord_internal::CordzSnapshot const & __ptr64) */

CordzInfo * __cdecl absl::lts_20240722::cord_internal::CordzInfo::Head(CordzSnapshot *param_1)

{
  return (CordzInfo *)global_list_.head;
}

// Lock @ 1501c9390

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::Lock(enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzInfo::Lock(CordzInfo *this,MethodIdentifier param_1)

{
  Mutex::Lock(&this->mutex_);
  (this->update_tracker_).values_[(int)param_1] =
       (Counter)((longlong)(this->update_tracker_).values_[(int)param_1] + 1);
  return;
}

// Lock @ 1501c93d0

/* public: void __cdecl absl::lts_20240722::base_internal::SpinLock::Lock(void) __ptr64 */

void __thiscall absl::lts_20240722::base_internal::SpinLock::Lock(SpinLock *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  __int64 _Var3;
  __int64 _Var4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  aVar2 = this->lockword_;
  if (((uint)aVar2 & 1) == 0) {
    LOCK();
    aVar5 = this->lockword_;
    bVar11 = aVar2 == aVar5;
    if (bVar11) {
      this->lockword_ = (atomic<unsigned_int>)((uint)aVar2 | 1);
      aVar5 = aVar2;
    }
    UNLOCK();
    if (!bVar11) {
      aVar2 = aVar5;
    }
  }
  if ((~aVar2._0_1_ & 1) != 0) {
    return;
  }
  aVar2 = (atomic<unsigned_int>)SpinLoop(this);
  if (((uint)aVar2 & 1) == 0) {
    LOCK();
    aVar5 = this->lockword_;
    bVar11 = aVar2 == aVar5;
    if (bVar11) {
      this->lockword_ = (atomic<unsigned_int>)((uint)aVar2 | 1);
      aVar5 = aVar2;
    }
    UNLOCK();
    if (!bVar11) {
      aVar2 = aVar5;
    }
  }
  if (((uint)aVar2 & 1) != 0) {
    uVar10 = (uint)aVar2 >> 1;
    _Var3 = CycleClock::Now();
    uVar7 = 0;
    iVar9 = 0;
LAB_1502448d0:
    do {
      aVar5 = aVar2;
      if (((uint)aVar2 & 0xfffffff8) == 0) {
        aVar5 = (atomic<unsigned_int>)((uint)aVar2 | 8);
        LOCK();
        aVar1 = this->lockword_;
        bVar11 = aVar2 == aVar1;
        if (bVar11) {
          this->lockword_ = aVar5;
          aVar1 = aVar2;
        }
        aVar2 = aVar1;
        UNLOCK();
        if (bVar11) goto LAB_1502448fe;
        if (((uint)aVar2 & 1) == 0) {
          uVar6 = uVar7 | (uint)aVar2;
          goto LAB_150244951;
        }
        aVar5 = aVar2;
        if (((uint)aVar2 & 0xfffffff8) != 0) goto LAB_1502448fe;
      }
      else {
LAB_1502448fe:
        iVar9 = iVar9 + 1;
        AbslInternalSpinLockDelay_lts_20240722(this,aVar5,iVar9,uVar10 & 1);
        aVar2 = (atomic<unsigned_int>)SpinLoop(this);
        _Var4 = CycleClock::Now();
        lVar8 = _Var4 - _Var3 >> 7;
        if (0x1fffffff < lVar8) {
          lVar8 = 0x1fffffff;
        }
        uVar7 = (uint)(lVar8 << 3);
        if (uVar7 == 0) {
          uVar7 = 8;
        }
        else if (uVar7 == 8) {
          uVar7 = 0x10;
        }
        if (((uint)aVar2 & 1) != 0) goto LAB_1502448d0;
        uVar6 = (uint)aVar2 | uVar7;
LAB_150244951:
        LOCK();
        aVar5 = this->lockword_;
        bVar11 = aVar2 == aVar5;
        if (bVar11) {
          this->lockword_ = (atomic<unsigned_int>)(uVar6 | 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        if (!bVar11) {
          aVar2 = aVar5;
        }
      }
    } while (((uint)aVar2 & 1) != 0);
  }
  return;
}

// LossyAdd @ 1501c9400

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::LossyAdd(class
   absl::lts_20240722::cord_internal::CordzUpdateTracker const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::LossyAdd
          (CordzUpdateTracker *this,CordzUpdateTracker *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0x19;
  lVar3 = (longlong)param_1 - (longlong)this;
  do {
    lVar1 = *(longlong *)(lVar3 + (longlong)this);
    if (lVar1 != 0) {
      *(longlong *)this = (longlong)this->values_[0] + lVar1;
    }
    this = (CordzUpdateTracker *)((longlong)this + 8);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// LossyAdd @ 1501c9440

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::LossyAdd(enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier,__int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::LossyAdd
          (CordzUpdateTracker *this,MethodIdentifier param_1,__int64 param_2)

{
  this->values_[(int)param_1] = (Counter)((longlong)this->values_[(int)param_1] + param_2);
  return;
}

// MaybeTrackCordImpl @ 1501c9460

/* private: static void __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::MaybeTrackCordImpl(class
   absl::lts_20240722::cord_internal::InlineData & __ptr64,class
   absl::lts_20240722::cord_internal::InlineData const & __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) */

void __cdecl
absl::lts_20240722::cord_internal::CordzInfo::MaybeTrackCordImpl
          (InlineData *param_1,InlineData *param_2,MethodIdentifier param_3)

{
  longlong lVar1;
  CordzInfo *pCVar2;
  
  lVar1 = (param_1->rep_).field0_0x0.as_tree.cordz_info;
  if ((param_2->rep_).field0_0x0.as_tree.cordz_info != 1) {
    if ((CordzInfo *)(lVar1 + -1) != (CordzInfo *)0x0) {
      Untrack((CordzInfo *)(lVar1 + -1));
    }
    pCVar2 = ::operator_new(0x540);
    if (pCVar2 == (CordzInfo *)0x0) {
      pCVar2 = (CordzInfo *)0x0;
    }
    else {
      lVar1 = (param_2->rep_).field0_0x0.as_tree.cordz_info;
      pCVar2 = (CordzInfo *)
               CordzInfo(pCVar2,(param_1->rep_).field0_0x0.as_tree.rep,(CordzInfo *)(lVar1 + -1),
                         param_3,*(__int64 *)(lVar1 + 0x537));
    }
    (param_1->rep_).field0_0x0.as_tree.cordz_info = (ulonglong)pCVar2 | 1;
    Track(pCVar2);
    return;
  }
  if (lVar1 != 1) {
    Untrack((CordzInfo *)(lVar1 + -1));
    (param_1->rep_).field0_0x0.as_tree.cordz_info = 1;
  }
  return;
}

// Next @ 1501c9520

/* public: class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::Next(class
   absl::lts_20240722::cord_internal::CordzSnapshot const & __ptr64)const __ptr64 */

CordzInfo * __thiscall
absl::lts_20240722::cord_internal::CordzInfo::Next(CordzInfo *this,CordzSnapshot *param_1)

{
  return (CordzInfo *)this->ci_next_;
}

// ODRCheck @ 1501c9530

/* private: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::ODRCheck(void)const __ptr64
    */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::ODRCheck(CordzInfo *this)

{
  return;
}

// RefCordRep @ 1501c9540

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordzInfo::RefCordRep(void)const __ptr64 */

CordRep * __thiscall absl::lts_20240722::cord_internal::CordzInfo::RefCordRep(CordzInfo *this)

{
  CordRep *pCVar1;
  
  Mutex::Lock(&this->mutex_);
  pCVar1 = this->rep_;
  if (pCVar1 != (CordRep *)0x0) {
    LOCK();
    (pCVar1->refcount).count_ = (atomic<int>)((int)(pCVar1->refcount).count_ + 2);
    UNLOCK();
  }
  Mutex::Unlock(&this->mutex_);
  return pCVar1;
}

// Track @ 1501c9590

/* private: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::Track(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::Track(CordzInfo *this)

{
  List *this_00;
  atomic<absl::lts_20240722::cord_internal::CordzInfo_*> aVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  
  this_00 = this->list_;
  aVar3 = (this_00->mutex).lockword_;
  if (((uint)aVar3 & 1) == 0) {
    LOCK();
    aVar2 = (this_00->mutex).lockword_;
    bVar4 = aVar3 == aVar2;
    if (bVar4) {
      (this_00->mutex).lockword_ = (atomic<unsigned_int>)((uint)aVar3 | 1);
      aVar2 = aVar3;
    }
    UNLOCK();
    if (!bVar4) {
      aVar3 = aVar2;
    }
  }
  if ((~aVar3._0_1_ & 1) == 0) {
    base_internal::SpinLock::SlowLock(&this_00->mutex);
  }
  aVar1 = this->list_->head;
  if (aVar1 != (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0) {
    *(CordzInfo **)((longlong)aVar1 + 0x28) = this;
  }
  this->ci_next_ = aVar1;
  this->list_->head = (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)this;
  LOCK();
  aVar3 = (this_00->mutex).lockword_;
  (this_00->mutex).lockword_ = (atomic<unsigned_int>)((uint)(this_00->mutex).lockword_ & 2);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffff8) != 0) {
    base_internal::SpinLock::SlowUnlock(&this_00->mutex,(uint)aVar3);
  }
  return;
}

// TrackCord @ 1501c9620

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordzInfo::TrackCord(class
   absl::lts_20240722::cord_internal::InlineData & __ptr64,class
   absl::lts_20240722::cord_internal::InlineData const & __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) */

void __cdecl
absl::lts_20240722::cord_internal::CordzInfo::TrackCord
          (InlineData *param_1,InlineData *param_2,MethodIdentifier param_3)

{
  longlong lVar1;
  CordzInfo *pCVar2;
  
  pCVar2 = (CordzInfo *)((param_1->rep_).field0_0x0.as_tree.cordz_info + -1);
  if (pCVar2 != (CordzInfo *)0x0) {
    Untrack(pCVar2);
  }
  pCVar2 = ::operator_new(0x540);
  if (pCVar2 == (CordzInfo *)0x0) {
    pCVar2 = (CordzInfo *)0x0;
  }
  else {
    lVar1 = (param_2->rep_).field0_0x0.as_tree.cordz_info;
    pCVar2 = (CordzInfo *)
             CordzInfo(pCVar2,(param_1->rep_).field0_0x0.as_tree.rep,(CordzInfo *)(lVar1 + -1),
                       param_3,*(__int64 *)(lVar1 + 0x537));
  }
  (param_1->rep_).field0_0x0.as_tree.cordz_info = (ulonglong)pCVar2 | 1;
  Track(pCVar2);
  return;
}

// TrackCord @ 1501c96b0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordzInfo::TrackCord(class
   absl::lts_20240722::cord_internal::InlineData & __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier,__int64) */

void __cdecl
absl::lts_20240722::cord_internal::CordzInfo::TrackCord
          (InlineData *param_1,MethodIdentifier param_2,__int64 param_3)

{
  CordzInfo *pCVar1;
  
  pCVar1 = ::operator_new(0x540);
  if (pCVar1 == (CordzInfo *)0x0) {
    pCVar1 = (CordzInfo *)0x0;
  }
  else {
    pCVar1 = (CordzInfo *)
             CordzInfo(pCVar1,(param_1->rep_).field0_0x0.as_tree.rep,(CordzInfo *)0x0,param_2,
                       param_3);
  }
  (param_1->rep_).field0_0x0.as_tree.cordz_info = (ulonglong)pCVar1 | 1;
  Track(pCVar1);
  return;
}

// TryLockImpl @ 1501c9720

/* private: bool __cdecl absl::lts_20240722::base_internal::SpinLock::TryLockImpl(void) __ptr64 */

bool __thiscall absl::lts_20240722::base_internal::SpinLock::TryLockImpl(SpinLock *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar2 = this->lockword_;
  if (((uint)aVar2 & 1) == 0) {
    LOCK();
    aVar1 = this->lockword_;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      this->lockword_ = (atomic<unsigned_int>)((uint)aVar2 | 1);
      aVar1 = aVar2;
    }
    UNLOCK();
    if (!bVar3) {
      aVar2 = aVar1;
    }
  }
  return (bool)(~aVar2._0_1_ & 1);
}

// TryLockInternal @ 1501c9750

/* private: unsigned int __cdecl
   absl::lts_20240722::base_internal::SpinLock::TryLockInternal(unsigned int,unsigned int) __ptr64
    */

uint __thiscall
absl::lts_20240722::base_internal::SpinLock::TryLockInternal
          (SpinLock *this,uint param_1,uint param_2)

{
  atomic<unsigned_int> aVar1;
  bool bVar2;
  
  if ((param_1 & 1) == 0) {
    LOCK();
    aVar1 = this->lockword_;
    bVar2 = (atomic<unsigned_int>)param_1 == aVar1;
    if (bVar2) {
      this->lockword_ = (atomic<unsigned_int>)(param_1 | param_2 | 1);
      aVar1 = (atomic<unsigned_int>)param_1;
    }
    UNLOCK();
    if (!bVar2) {
      param_1 = (uint)aVar1;
    }
  }
  return param_1;
}

// Unlock @ 1501c9780

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::Unlock(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::Unlock(CordzInfo *this)

{
  CordRep *pCVar1;
  
  pCVar1 = this->rep_;
  Mutex::Unlock(&this->mutex_);
  if (pCVar1 == (CordRep *)0x0) {
    Untrack(this);
  }
  return;
}

// Unlock @ 1501c97c0

/* public: void __cdecl absl::lts_20240722::base_internal::SpinLock::Unlock(void) __ptr64 */

void __thiscall absl::lts_20240722::base_internal::SpinLock::Unlock(SpinLock *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  
  LOCK();
  aVar1 = this->lockword_;
  this->lockword_ = (atomic<unsigned_int>)((uint)this->lockword_ & 2);
  UNLOCK();
  if (((uint)aVar1 & 0xfffffff8) == 0) {
    return;
  }
  AbslInternalSpinLockWake_lts_20240722(this,0);
  if (((uint)aVar1 & 0xfffffff8) != 8) {
    pcVar2 = DAT_154e48910;
    if (DAT_154e48910 == (code *)0x0) {
      pcVar2 = (code *)PTR_DummyFunction_154e48918;
    }
    (*pcVar2)(this,((ulonglong)(uint)aVar1 & 0xfffffff8) << 4);
  }
  return;
}

// UnsafeSetCordRep @ 1501c97e0

/* private: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::UnsafeSetCordRep(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzInfo::UnsafeSetCordRep(CordzInfo *this,CordRep *param_1)

{
  this->rep_ = param_1;
  return;
}

// Untrack @ 1501c97f0

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::Untrack(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::Untrack(CordzInfo *this)

{
  RefcountAndFlags *pRVar1;
  List *this_00;
  atomic<absl::lts_20240722::cord_internal::CordzInfo_*> aVar2;
  atomic<absl::lts_20240722::cord_internal::CordzInfo_*> aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  bool bVar6;
  
  this_00 = this->list_;
  aVar5 = (this_00->mutex).lockword_;
  if (((uint)aVar5 & 1) == 0) {
    LOCK();
    aVar4 = (this_00->mutex).lockword_;
    bVar6 = aVar5 == aVar4;
    if (bVar6) {
      (this_00->mutex).lockword_ = (atomic<unsigned_int>)((uint)aVar5 | 1);
      aVar4 = aVar5;
    }
    UNLOCK();
    if (!bVar6) {
      aVar5 = aVar4;
    }
  }
  if ((~aVar5._0_1_ & 1) == 0) {
    base_internal::SpinLock::SlowLock(&this_00->mutex);
  }
  aVar2 = this->ci_next_;
  aVar3 = this->ci_prev_;
  if (aVar2 != (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0) {
    *(atomic<absl::lts_20240722::cord_internal::CordzInfo_*> *)((longlong)aVar2 + 0x28) = aVar3;
  }
  if (aVar3 == (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0) {
    this->list_->head = aVar2;
  }
  else {
    *(atomic<absl::lts_20240722::cord_internal::CordzInfo_*> *)((longlong)aVar3 + 0x30) = aVar2;
  }
  LOCK();
  aVar5 = (this_00->mutex).lockword_;
  (this_00->mutex).lockword_ = (atomic<unsigned_int>)((uint)(this_00->mutex).lockword_ & 2);
  UNLOCK();
  if (((uint)aVar5 & 0xfffffff8) != 0) {
    base_internal::SpinLock::SlowUnlock(&this_00->mutex,(uint)aVar5);
  }
  bVar6 = CordzHandle::SafeToDelete((CordzHandle *)this);
  if (!bVar6) {
    Mutex::Lock(&this->mutex_);
    if (this->rep_ != (CordRep *)0x0) {
      LOCK();
      pRVar1 = &this->rep_->refcount;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
      UNLOCK();
    }
    Mutex::Unlock(&this->mutex_);
    CordzHandle::Delete((CordzHandle *)this);
    return;
  }
  this->rep_ = (CordRep *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001501c9898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(this,1);
  return;
}

// Value @ 1501c98e0

/* public: __int64 __cdecl absl::lts_20240722::cord_internal::CordzUpdateTracker::Value(enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier)const __ptr64 */

__int64 __thiscall
absl::lts_20240722::cord_internal::CordzUpdateTracker::Value
          (CordzUpdateTracker *this,MethodIdentifier param_1)

{
  return (__int64)this->values_[(int)param_1];
}

// clear_cordz_info @ 1501c98f0

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::clear_cordz_info(void)
   __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::InlineData::clear_cordz_info(InlineData *this)

{
  (this->rep_).field0_0x0.as_tree.cordz_info = 1;
  return;
}

// compare_exchange_strong @ 1501c9900

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::atomic<unsigned int>::compare_exchange_strong(unsigned int &
   __ptr64,unsigned int,enum std::memory_order,enum std::memory_order) __ptr64 */

bool __thiscall
std::atomic<unsigned_int>::compare_exchange_strong
          (atomic<unsigned_int> *this,uint *param_1,uint param_2,memory_order param_3,
          memory_order param_4)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar1 = (atomic<unsigned_int>)*param_1;
  LOCK();
  aVar2 = *this;
  bVar3 = aVar1 == aVar2;
  if (bVar3) {
    *this = (atomic<unsigned_int>)param_2;
    aVar2 = aVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = (uint)aVar2;
    return false;
  }
  return true;
}

// is_profiled @ 1501c9920

/* public: bool __cdecl absl::lts_20240722::cord_internal::InlineData::is_profiled(void)const
   __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::InlineData::is_profiled(InlineData *this)

{
  return (this->rep_).field0_0x0.as_tree.cordz_info != 1;
}

// is_snapshot @ 1501c9930

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordzHandle::is_snapshot(void)const
   __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::CordzHandle::is_snapshot(CordzHandle *this)

{
  return this->is_snapshot_;
}

// load @ 1501c9940

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 __cdecl
   std::_Atomic_storage<class absl::lts_20240722::cord_internal::CordzInfo * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

CordzInfo * __thiscall
std::_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8>::load
          (_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> *this,
          memory_order param_1)

{
  return *(CordzInfo **)this;
}

// sampling_stride @ 1501c9960

/* public: __int64 __cdecl absl::lts_20240722::cord_internal::CordzInfo::sampling_stride(void)const
   __ptr64 */

__int64 __thiscall absl::lts_20240722::cord_internal::CordzInfo::sampling_stride(CordzInfo *this)

{
  return this->sampling_stride_;
}

// set_cordz_info @ 1501c9970

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::set_cordz_info(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::set_cordz_info(InlineData *this,CordzInfo *param_1)

{
  (this->rep_).field0_0x0.as_tree.cordz_info = (ulonglong)param_1 | 1;
  return;
}

// set_cordz_info @ 1501c9980

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::Rep::set_cordz_info(__int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::Rep::set_cordz_info(Rep *this,__int64 param_1)

{
  (this->field0_0x0).as_tree.cordz_info = param_1;
  return;
}

// store @ 1501c9990

/* public: void __cdecl std::_Atomic_storage<class absl::lts_20240722::cord_internal::CordzInfo *
   __ptr64,8>::store(class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8>::store
          (_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> *this,
          CordzInfo *param_1)

{
  LOCK();
  *(CordzInfo **)this = param_1;
  UNLOCK();
  return;
}

// store @ 1501c99a0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<class absl::lts_20240722::cord_internal::CordzInfo *
   __ptr64,8>::store(class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8>::store
          (_Atomic_storage<absl::lts_20240722::cord_internal::CordzInfo*___ptr64,8> *this,
          CordzInfo *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(CordzInfo **)this = param_1;
    return;
  default:
    LOCK();
    *(CordzInfo **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(CordzInfo **)this = param_1;
    return;
  }
}

// store @ 1501c99f0

/* public: void __cdecl std::_Atomic_storage<__int64,8>::store(__int64) __ptr64 */

void __thiscall
std::_Atomic_storage<__int64,8>::store(_Atomic_storage<__int64,8> *this,__int64 param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 1501c9a00

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<__int64,8>::store(__int64,enum std::memory_order)
   __ptr64 */

void __thiscall
std::_Atomic_storage<__int64,8>::store
          (_Atomic_storage<__int64,8> *this,__int64 param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    (this->_Storage)._Value = param_1;
    return;
  default:
    LOCK();
    (this->_Storage)._Value = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    (this->_Storage)._Value = param_1;
    return;
  }
}

// FUN_1501c9a50 @ 1501c9a50

undefined1 FUN_1501c9a50(longlong *param_1)

{
  if (*param_1 != 0) {
    return *(undefined1 *)(*param_1 + 0xc);
  }
  return 0;
}

// FUN_15032fe10 @ 15032fe10

void FUN_15032fe10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48),0x540);
  return;
}

// FUN_15032fe40 @ 15032fe40

void FUN_15032fe40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x540);
  return;
}

// FUN_15032fe70 @ 15032fe70

void FUN_15032fe70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x540);
  return;
}

