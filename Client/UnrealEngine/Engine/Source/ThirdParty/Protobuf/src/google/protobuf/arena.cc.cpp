// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 364

// _Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1><> @ 14f91a5d0

/* public: __cdecl std::_Compressed_pair<class std::allocator<void * __ptr64>,class
   std::_Vector_val<struct std::_Simple_types<void * __ptr64> >,1>::_Compressed_pair<class
   std::allocator<void * __ptr64>,class std::_Vector_val<struct std::_Simple_types<void * __ptr64>
   >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1><>
          (_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1><std::allocator<void*___ptr64>,void*___ptr64*___ptr64,void*___ptr64*___ptr64,void*___ptr64*___ptr64> @ 14f91a5f0

/* public: __cdecl std::_Compressed_pair<class std::allocator<void * __ptr64>,class
   std::_Vector_val<struct std::_Simple_types<void * __ptr64> >,1>::_Compressed_pair<class
   std::allocator<void * __ptr64>,class std::_Vector_val<struct std::_Simple_types<void * __ptr64>
   >,1><class std::allocator<void * __ptr64>,void * __ptr64 * __ptr64,void * __ptr64 * __ptr64,void
   * __ptr64 * __ptr64>(struct std::_One_then_variadic_args_t,class std::allocator<void * __ptr64>
   && __ptr64,void * __ptr64 * __ptr64 && __ptr64,void * __ptr64 * __ptr64 && __ptr64,void * __ptr64
   * __ptr64 && __ptr64) __ptr64 */

_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1><std::allocator<void*___ptr64>,void*___ptr64*___ptr64,void*___ptr64*___ptr64,void*___ptr64*___ptr64>
          (_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<void*___ptr64> *param_2,void ***param_3
          ,void ***param_4,void ***param_5)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = *param_5;
  ppvVar2 = *param_4;
  *(void ***)this = *param_3;
  *(void ***)(this + 8) = ppvVar2;
  *(void ***)(this + 0x10) = ppvVar1;
  return this;
}

// operator<<<39> @ 14f91a620

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<39>(char const (& __ptr64)[39]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<39>(LogMessage *this,char *param_1)

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

// operator!=<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64,std::atomic<class_google::protobuf::internal::SerialArena*___ptr64>*___ptr64> @ 14f91a670

/* bool __cdecl std::operator!=<struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> * __ptr64,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> *
   __ptr64>(class std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64> const & __ptr64,class
   std::reverse_iterator<struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64>
   * __ptr64> const & __ptr64) */

bool __cdecl
std::
operator!=<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64,std::atomic<class_google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
          (reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
           *param_1,
          reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
          *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// operator&&<absl::lts_20240722::log_internal::LogMessage> @ 14f91a680

/* public: void __cdecl absl::lts_20240722::log_internal::Voidify::operator&&<class
   absl::lts_20240722::log_internal::LogMessage>(class absl::lts_20240722::log_internal::LogMessage
   const & __ptr64)const __ptr64&&  */

void __thiscall
absl::lts_20240722::log_internal::Voidify::operator&&<absl::lts_20240722::log_internal::LogMessage>
          (Voidify *this,LogMessage *param_1)

{
  return;
}

// AllocateAligned<1> @ 14f91a690

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateAligned<1>(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateAligned<1>(SerialArena *this,__uint64 param_1)

{
  CachedBlock *pCVar1;
  atomic<char_*> aVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  atomic<char_*> aVar7;
  atomic<char_*> aVar8;
  atomic<char_*> aVar9;
  
  if (0xf < param_1) {
    uVar6 = param_1 - 1;
    if (__isa_available < 5) {
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      if (uVar6 != 0) {
        iVar4 = 0x3f - (int)lVar3;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(uVar6);
    }
    uVar6 = (ulonglong)(0x3c - iVar4);
    if (uVar6 < this->cached_block_length_) {
      pCVar1 = this->cached_blocks_[uVar6];
      if (pCVar1 != (CachedBlock *)0x0) {
        this->cached_blocks_[uVar6] = pCVar1->next;
        return pCVar1;
      }
    }
  }
  aVar2 = this->ptr_;
  aVar9 = (atomic<char_*>)((longlong)aVar2 + param_1);
  if (this->limit_ < (ulonglong)aVar9) {
    pvVar5 = AllocateAlignedFallback(this,param_1);
    return pvVar5;
  }
  this->ptr_ = aVar9;
  aVar7 = (atomic<char_*>)this->prefetch_ptr_;
  aVar8 = (atomic<char_*>)this->limit_;
  if (((longlong)aVar7 - (longlong)aVar9 < 0x401) && ((ulonglong)aVar7 < (ulonglong)aVar8)) {
    if ((ulonglong)aVar9 < (ulonglong)aVar7) {
      aVar9 = aVar7;
    }
    aVar7 = aVar9;
    if ((longlong)aVar9 + 0x400U < (ulonglong)aVar8) {
      aVar8 = (atomic<char_*>)((longlong)aVar9 + 0x400U);
    }
    for (; (ulonglong)aVar7 < (ulonglong)aVar8; aVar7 = (atomic<char_*>)((longlong)aVar7 + 0x40)) {
    }
  }
  this->prefetch_ptr_ = (char *)aVar7;
  return (void *)aVar2;
}

// AllocateAligned<1> @ 14f91a760

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAligned<1>(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAligned<1>
          (ThreadSafeArena *this,__uint64 param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == this->tag_and_id_) {
    pvVar2 = SerialArena::AllocateAligned<1>(*(SerialArena **)(lVar1 + 0x9d10),param_1);
    return pvVar2;
  }
  pvVar2 = AllocateAlignedFallback<1>(this,param_1);
  return pvVar2;
}

// AllocateAligned<0> @ 14f91a7f0

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateAligned<0>(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateAligned<0>(SerialArena *this,__uint64 param_1)

{
  atomic<char_*> aVar1;
  atomic<char_*> aVar2;
  void *pvVar3;
  atomic<char_*> aVar4;
  atomic<char_*> aVar5;
  
  aVar1 = this->ptr_;
  aVar5 = (atomic<char_*>)((longlong)aVar1 + param_1);
  if ((ulonglong)aVar5 <= this->limit_) {
    this->ptr_ = aVar5;
    aVar2 = (atomic<char_*>)this->prefetch_ptr_;
    aVar4 = (atomic<char_*>)this->limit_;
    if (((longlong)aVar2 - (longlong)aVar5 < 0x401) && ((ulonglong)aVar2 < (ulonglong)aVar4)) {
      if ((ulonglong)aVar5 < (ulonglong)aVar2) {
        aVar5 = aVar2;
      }
      aVar2 = aVar5;
      if ((longlong)aVar5 + 0x400U < (ulonglong)aVar4) {
        aVar4 = (atomic<char_*>)((longlong)aVar5 + 0x400U);
      }
      for (; (ulonglong)aVar2 < (ulonglong)aVar4; aVar2 = (atomic<char_*>)((longlong)aVar2 + 0x40))
      {
      }
    }
    this->prefetch_ptr_ = (char *)aVar2;
    return (void *)aVar1;
  }
  pvVar3 = AllocateAlignedFallback(this,param_1);
  return pvVar3;
}

// AllocateAligned<0> @ 14f91a860

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAligned<0>(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAligned<0>
          (ThreadSafeArena *this,__uint64 param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == this->tag_and_id_) {
    pvVar2 = SerialArena::AllocateAligned<0>(*(SerialArena **)(lVar1 + 0x9d10),param_1);
    return pvVar2;
  }
  pvVar2 = AllocateAlignedFallback<0>(this,param_1);
  return pvVar2;
}

// AllocateAlignedFallback<1> @ 14f91a8f0

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAlignedFallback<1>(unsigned __int64) __ptr64
    */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAlignedFallback<1>
          (ThreadSafeArena *this,__uint64 param_1)

{
  SerialArena *this_00;
  void *pvVar1;
  
  this_00 = GetSerialArenaFallback(this,param_1);
  pvVar1 = SerialArena::AllocateAligned<1>(this_00,param_1);
  return pvVar1;
}

// AllocateAlignedFallback<0> @ 14f91a920

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAlignedFallback<0>(unsigned __int64) __ptr64
    */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAlignedFallback<0>
          (ThreadSafeArena *this,__uint64 param_1)

{
  atomic<char_*> aVar1;
  SerialArena *this_00;
  void *pvVar2;
  atomic<char_*> aVar3;
  atomic<char_*> aVar4;
  atomic<char_*> aVar5;
  
  this_00 = GetSerialArenaFallback(this,param_1);
  aVar1 = this_00->ptr_;
  aVar5 = (atomic<char_*>)((longlong)aVar1 + param_1);
  if ((ulonglong)aVar5 <= this_00->limit_) {
    this_00->ptr_ = aVar5;
    aVar3 = (atomic<char_*>)this_00->prefetch_ptr_;
    aVar4 = (atomic<char_*>)this_00->limit_;
    if (((longlong)aVar3 - (longlong)aVar5 < 0x401) && ((ulonglong)aVar3 < (ulonglong)aVar4)) {
      if ((ulonglong)aVar5 < (ulonglong)aVar3) {
        aVar5 = aVar3;
      }
      aVar3 = aVar5;
      if ((longlong)aVar5 + 0x400U < (ulonglong)aVar4) {
        aVar4 = (atomic<char_*>)((longlong)aVar5 + 0x400U);
      }
      for (; (ulonglong)aVar3 < (ulonglong)aVar4; aVar3 = (atomic<char_*>)((longlong)aVar3 + 0x40))
      {
      }
    }
    this_00->prefetch_ptr_ = (char *)aVar3;
    return (void *)aVar1;
  }
  pvVar2 = SerialArena::AllocateAlignedFallback(this_00,param_1);
  return pvVar2;
}

// Ceil<char> @ 14f91a9b0

/* public: char * __ptr64 __cdecl google::protobuf::internal::ArenaAlign::Ceil<char>(char *
   __ptr64)const __ptr64 */

char * __thiscall google::protobuf::internal::ArenaAlign::Ceil<char>(ArenaAlign *this,char *param_1)

{
  return (char *)((ulonglong)(param_1 + (this->align - 1)) & ~(this->align - 1));
}

// CeilDefaultAligned<char> @ 14f91a9d0

/* public: char * __ptr64 __cdecl
   google::protobuf::internal::ArenaAlign::CeilDefaultAligned<char>(char * __ptr64)const __ptr64 */

char * __thiscall
google::protobuf::internal::ArenaAlign::CeilDefaultAligned<char>(ArenaAlign *this,char *param_1)

{
  return (char *)((ulonglong)(param_1 + (this->align - 1)) & ~(this->align - 1));
}

// Check_LEImpl<unsigned___int64,unsigned___int64> @ 14f91a9f0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_LEImpl<unsigned __int64,unsigned
   __int64>(unsigned __int64 const & __ptr64,unsigned __int64 const & __ptr64,char const * __ptr64)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_LEImpl<unsigned___int64,unsigned___int64>
          (__uint64 *param_1,__uint64 *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 <= *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<unsigned___int64,unsigned___int64>(*param_1,*param_2,param_3);
  return pbVar1;
}

// FUN_14f91aa10 @ 14f91aa10

longlong * FUN_14f91aa10(longlong param_1,longlong *param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(StringBlock **)(param_1 + 0x38) != (StringBlock *)0x0) {
    google::protobuf::internal::SerialArena::FreeStringBlocks
              (*(StringBlock **)(param_1 + 0x38),*(__uint64 *)(param_1 + 0x40));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  *param_2 = (longlong)puVar1;
  puVar2 = (undefined8 *)*puVar1;
  param_2[1] = puVar1[1];
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (param_3 == (code *)0x0) {
      operator_delete((void *)*param_2,param_2[1]);
    }
    else {
      (*param_3)();
    }
    lVar3 = puVar2[1];
    *param_2 = (longlong)puVar2;
    param_2[1] = lVar3;
  }
  return param_2;
}

// IsAligned<char> @ 14f91aab0

/* public: static bool __cdecl google::protobuf::internal::ArenaAlignDefault::IsAligned<char>(char *
   __ptr64) */

bool __cdecl google::protobuf::internal::ArenaAlignDefault::IsAligned<char>(char *param_1)

{
  return ((ulonglong)param_1 & 7) == 0;
}

// Offset<1,0> @ 14f91aac0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Offset<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Offset<1,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
              *this)

{
  return 0x10;
}

// Offset<2,0> @ 14f91aad0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Offset<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Offset<2,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
              *this)

{
  return *(longlong *)this * 8 + 0x10;
}

// Offset<0,0> @ 14f91aaf0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Offset<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Offset<0,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
              *this)

{
  return 0;
}

// Offset<0,0> @ 14f91ab00

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned __int64,0,1>
   >::Offset<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
::Offset<0,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
              *this)

{
  return 0;
}

// Partial<> @ 14f91ab10

/* public: static class absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void *
   __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned __int64,0,1> >
   __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1>,struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >::Partial<>(void) */

void __cdecl
absl::lts_20240722::container_internal::internal_layout::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
::Partial<>(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  return;
}

// Pointer<1,char_const_> @ 14f91ab20

/* public: struct std::atomic<void * __ptr64> const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Pointer<1,char const >(char const *
   __ptr64)const __ptr64 */

atomic<void*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Pointer<1,char_const_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
           *this,char *param_1)

{
  return (atomic<void*___ptr64> *)(param_1 + 0x10);
}

// Pointer<1,char> @ 14f91ab30

/* public: struct std::atomic<void * __ptr64> * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Pointer<1,char>(char * __ptr64)const __ptr64 */

atomic<void*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Pointer<1,char>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
                  *this,char *param_1)

{
  return (atomic<void*___ptr64> *)(param_1 + 0x10);
}

// Pointer<2,char_const_> @ 14f91ab40

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> const *
   __ptr64 __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void *
   __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Pointer<2,char const >(char const *
   __ptr64)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Pointer<2,char_const_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
           *this,char *param_1)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (param_1 + *(longlong *)this * 8 + 0x10);
}

// Pointer<2,char> @ 14f91ab60

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void *
   __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Pointer<2,char>(char * __ptr64)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Pointer<2,char>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
                  *this,char *param_1)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (param_1 + *(longlong *)this * 8 + 0x10);
}

// Pointer<0,char_const_> @ 14f91ab80

/* public: struct google::protobuf::internal::SerialArenaChunkHeader const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned __int64,0,1>
   >::Pointer<0,char const >(char const * __ptr64)const __ptr64 */

SerialArenaChunkHeader * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
::Pointer<0,char_const_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
           *this,char *param_1)

{
  return (SerialArenaChunkHeader *)param_1;
}

// Pointer<0,char> @ 14f91ab90

/* public: struct google::protobuf::internal::SerialArenaChunkHeader * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Pointer<0,char>(char * __ptr64)const __ptr64 */

SerialArenaChunkHeader * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Pointer<0,char>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
                  *this,char *param_1)

{
  return (SerialArenaChunkHeader *)param_1;
}

// Pointer<0,char> @ 14f91aba0

/* public: struct google::protobuf::internal::SerialArenaChunkHeader * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned __int64,0,1>
   >::Pointer<0,char>(char * __ptr64)const __ptr64 */

SerialArenaChunkHeader * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
::Pointer<0,char>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
                  *this,char *param_1)

{
  return (SerialArenaChunkHeader *)param_1;
}

// Size<1,0> @ 14f91abb0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Size<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Size<1,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
            *this)

{
  return *(__uint64 *)this;
}

// Size<2,0> @ 14f91abc0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Size<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Size<2,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
            *this)

{
  return *(__uint64 *)(this + 8);
}

// Size<0,0> @ 14f91abd0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Size<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Size<0,0>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
            *this)

{
  return 1;
}

// Slice<1,char_const_> @ 14f91abe0

/* public: class absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const > __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Slice<1,char const >(char const * __ptr64)const
   __ptr64 */

char * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Slice<1,char_const_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
           *this,char *param_1)

{
  longlong in_R8;
  
  *(longlong *)param_1 = in_R8 + 0x10;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)this;
  return param_1;
}

// Slice<2,char_const_> @ 14f91ac00

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const > __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Slice<2,char const >(char const * __ptr64)const
   __ptr64 */

char * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Slice<2,char_const_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
           *this,char *param_1)

{
  longlong in_R8;
  
  *(longlong *)param_1 = *(longlong *)this * 8 + 0x10 + in_R8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  return param_1;
}

// Slice<2,char> @ 14f91ac30

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> > __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::Slice<2,char>(char * __ptr64)const __ptr64 */

char * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::Slice<2,char>(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
                *this,char *param_1)

{
  longlong in_R8;
  
  *(longlong *)param_1 = *(longlong *)this * 8 + 0x10 + in_R8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  return param_1;
}

// FUN_14f91ac60 @ 14f91ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f91ac60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  *param_2 = *param_2 + *(longlong *)(param_1 + 0x88);
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar3 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    plVar5 = plVar3 + (ulonglong)uVar2 + 2;
    uVar4 = *(uint *)(plVar3 + 1);
    if (*(uint *)((longlong)plVar3 + 0xc) < *(uint *)(plVar3 + 1)) {
      uVar4 = *(uint *)((longlong)plVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    plVar1 = plVar5 + uVar4;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        *param_2 = *param_2 + *(longlong *)(*plVar5 + 0x58);
      }
    }
    plVar3 = (longlong *)*plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91ad20 @ 14f91ad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f91ad20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar8 = ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x68) + 8) -
            *(longlong *)(param_1 + 0x70)) + -0x10;
  }
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 8);
  if (uVar3 != 0) {
    uVar7 = (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x78)) - 0x10;
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    lVar8 = lVar8 + uVar7 + *(longlong *)(param_1 + 0x80);
  }
  *param_2 = *param_2 + lVar8 + -0x78;
  plVar4 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar4 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    plVar9 = plVar4 + (ulonglong)uVar2 + 2;
    uVar6 = *(uint *)(plVar4 + 1);
    if (*(uint *)((longlong)plVar4 + 0xc) < *(uint *)(plVar4 + 1)) {
      uVar6 = *(uint *)((longlong)plVar4 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar6) break;
    plVar1 = plVar9 + uVar6;
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      plVar5 = (longlong *)*plVar9;
      if (plVar5 != (longlong *)0x0) {
        lVar8 = 0;
        if (plVar5[7] != 0) {
          lVar8 = ((ulonglong)*(ushort *)(plVar5[7] + 8) - plVar5[8]) + -0x10;
        }
        uVar3 = *(ulonglong *)(plVar5[9] + 8);
        if (uVar3 != 0) {
          uVar7 = (*plVar5 - plVar5[9]) - 0x10;
          if (uVar3 < uVar7) {
            uVar7 = uVar3;
          }
          lVar8 = lVar8 + uVar7 + plVar5[10];
        }
        *param_2 = *param_2 + lVar8 + -0x78;
      }
    }
    plVar4 = (longlong *)*plVar4;
    uVar2 = *(uint *)(plVar4 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91ae70 @ 14f91ae70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14f91ae70(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  plVar5 = *(longlong **)(param_1 + 0x78);
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar3 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return plVar5;
    }
    plVar5 = plVar3 + (ulonglong)uVar2 + 2;
    uVar4 = *(uint *)(plVar3 + 1);
    if (*(uint *)((longlong)plVar3 + 0xc) < *(uint *)(plVar3 + 1)) {
      uVar4 = *(uint *)((longlong)plVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    plVar1 = plVar5 + uVar4;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    }
    plVar3 = (longlong *)*plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91af20 @ 14f91af20

void FUN_14f91af20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar3 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    plVar5 = plVar3 + (ulonglong)uVar2 + 2;
    uVar4 = *(uint *)(plVar3 + 1);
    if (*(uint *)((longlong)plVar3 + 0xc) < *(uint *)(plVar3 + 1)) {
      uVar4 = *(uint *)((longlong)plVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    plVar1 = plVar5 + uVar4;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        *(longlong *)*param_2 = *(longlong *)*param_2 + *(longlong *)(*plVar5 + 0x58);
      }
    }
    plVar3 = (longlong *)*plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91afb0 @ 14f91afb0

void FUN_14f91afb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar3 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    plVar9 = plVar3 + (ulonglong)uVar2 + 2;
    uVar6 = *(uint *)(plVar3 + 1);
    if (*(uint *)((longlong)plVar3 + 0xc) < *(uint *)(plVar3 + 1)) {
      uVar6 = *(uint *)((longlong)plVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar6) break;
    plVar1 = plVar9 + uVar6;
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      plVar4 = (longlong *)*plVar9;
      if (plVar4 != (longlong *)0x0) {
        lVar7 = 0;
        if (plVar4[7] != 0) {
          lVar7 = ((ulonglong)*(ushort *)(plVar4[7] + 8) - plVar4[8]) + -0x10;
        }
        uVar5 = *(ulonglong *)(plVar4[9] + 8);
        if (uVar5 != 0) {
          uVar8 = (*plVar4 - plVar4[9]) - 0x10;
          if (uVar5 < uVar8) {
            uVar8 = uVar5;
          }
          lVar7 = lVar7 + uVar8 + plVar4[10];
        }
        *(longlong *)*param_2 = *(longlong *)*param_2 + lVar7 + -0x78;
      }
    }
    plVar3 = (longlong *)*plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91b0a0 @ 14f91b0a0

void FUN_14f91b0a0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar3 + 1);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    plVar5 = plVar3 + (ulonglong)uVar2 + 2;
    uVar4 = *(uint *)(plVar3 + 1);
    if (*(uint *)((longlong)plVar3 + 0xc) < *(uint *)(plVar3 + 1)) {
      uVar4 = *(uint *)((longlong)plVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    plVar1 = plVar5 + uVar4;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    }
    plVar3 = (longlong *)*plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// FUN_14f91b120 @ 14f91b120

void FUN_14f91b120(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar1 + 1);
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar3 = *(uint *)(plVar1 + 1);
    if (*(uint *)((longlong)plVar1 + 0xc) < *(uint *)(plVar1 + 1)) {
      uVar3 = *(uint *)((longlong)plVar1 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar3) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (plVar1[uVar4 + 2] == param_2[1]) {
          *(longlong *)*param_2 = plVar1[uVar4 + (ulonglong)*(uint *)(plVar1 + 1) + 2];
          break;
        }
        uVar2 = uVar2 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar4 < uVar3);
    }
    plVar1 = (longlong *)*plVar1;
    uVar2 = *(uint *)(plVar1 + 1);
  } while( true );
}

// FUN_14f91b1d0 @ 14f91b1d0

void FUN_14f91b1d0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  iVar7 = (int)(*(longlong **)(param_1 + 0x20))[1];
  plVar6 = *(longlong **)(param_1 + 0x20);
  do {
    if (iVar7 == 0) {
      return;
    }
    plVar2 = (longlong *)*plVar6;
    uVar1 = *(uint *)(plVar6 + 1);
    uVar5 = *(uint *)(plVar6 + 1);
    if (*(uint *)((longlong)plVar6 + 0xc) < *(uint *)(plVar6 + 1)) {
      uVar5 = *(uint *)((longlong)plVar6 + 0xc);
    }
    if ((ulonglong)uVar1 < (ulonglong)uVar5) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
    }
    for (plVar11 = plVar6 + (ulonglong)uVar1 + 2 + uVar5; plVar11 != plVar6 + (ulonglong)uVar1 + 2;
        plVar11 = plVar11 + -1) {
      lVar3 = plVar11[-1];
      if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar3 + 0x60) + 8) & 0xfffffffffffffff8;
        if (uVar8 == 0) {
          pcVar9 = (code *)0x0;
        }
        else {
          pcVar9 = *(code **)(uVar8 + 0x18);
        }
        plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x20) + -0x10);
        plVar13 = *(longlong **)(lVar3 + 0x18);
LAB_14f91b280:
        plVar4 = plVar13 + 2;
        iVar7 = 0;
        for (plVar12 = plVar10; plVar4 <= plVar12; plVar12 = plVar12 + -2) {
          if (7 < iVar7) goto LAB_14f91b2a8;
          iVar7 = iVar7 + 1;
        }
        goto joined_r0x00014f91b2ca;
      }
LAB_14f91b313:
    }
    iVar7 = *(int *)(plVar2 + 1);
    plVar6 = plVar2;
  } while( true );
LAB_14f91b2a8:
  do {
    (*(code *)plVar10[1])(*plVar10);
    plVar10 = plVar10 + -2;
    plVar12 = plVar12 + -2;
  } while (plVar4 <= plVar12);
joined_r0x00014f91b2ca:
  for (; plVar4 <= plVar10; plVar10 = plVar10 + -2) {
    (*(code *)plVar10[1])(*plVar10);
  }
  plVar4 = (longlong *)*plVar13;
  if (pcVar9 == (code *)0x0) {
    operator_delete(plVar13,plVar13[1]);
  }
  else {
    (*pcVar9)();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_14f91b313;
  plVar10 = (longlong *)((plVar4[1] - 0x10U & 0xfffffffffffffff0) + (longlong)plVar4);
  plVar13 = plVar4;
  goto LAB_14f91b280;
}

// FUN_14f91b370 @ 14f91b370

void FUN_14f91b370(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  iVar2 = (int)(*(longlong **)(param_1 + 0x20))[1];
  plVar9 = *(longlong **)(param_1 + 0x20);
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    plVar3 = (longlong *)*plVar9;
    uVar1 = *(uint *)(plVar9 + 1);
    uVar8 = *(uint *)(plVar9 + 1);
    if (*(uint *)((longlong)plVar9 + 0xc) < *(uint *)(plVar9 + 1)) {
      uVar8 = *(uint *)((longlong)plVar9 + 0xc);
    }
    if ((ulonglong)uVar1 < (ulonglong)uVar8) break;
    plVar10 = plVar9 + (ulonglong)uVar1 + 2 + uVar8;
    while (plVar10 != plVar9 + (ulonglong)uVar1 + 2) {
      lVar4 = plVar10[-1];
      plVar10 = plVar10 + -1;
      pcVar5 = (code *)*param_2;
      if (*(StringBlock **)(lVar4 + 0x38) != (StringBlock *)0x0) {
        google::protobuf::internal::SerialArena::FreeStringBlocks
                  (*(StringBlock **)(lVar4 + 0x38),*(__uint64 *)(lVar4 + 0x40));
      }
      puVar6 = *(undefined8 **)(lVar4 + 0x48);
      uVar7 = puVar6[1];
      for (puVar11 = (undefined8 *)*puVar6; puVar11 != (undefined8 *)0x0;
          puVar11 = (undefined8 *)*puVar11) {
        if (pcVar5 == (code *)0x0) {
          operator_delete(puVar6,uVar7);
        }
        else {
          (*pcVar5)();
        }
        uVar7 = puVar11[1];
        puVar6 = puVar11;
      }
      if ((code *)*param_2 == (code *)0x0) {
        operator_delete(puVar6,uVar7);
      }
      else {
        (*(code *)*param_2)();
      }
    }
    operator_delete(plVar9,(ulonglong)*(uint *)(plVar9 + 1) * 0x10 + 0x10);
    iVar2 = *(int *)(plVar3 + 1);
    plVar9 = plVar3;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// _Allocate_at_least_helper<std::allocator<void*___ptr64>_> @ 14f91b4d0

/* void * __ptr64 * __ptr64 __cdecl std::_Allocate_at_least_helper<class std::allocator<void *
   __ptr64> >(class std::allocator<void * __ptr64> & __ptr64,unsigned __int64 & __ptr64) */

void ** __cdecl
std::_Allocate_at_least_helper<std::allocator<void*___ptr64>_>
          (allocator<void*___ptr64> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void **ppvVar3;
  
  if (*param_2 < 0x2000000000000000) {
    uVar1 = *param_2 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppvVar3 = ::operator_new(uVar1);
        return ppvVar3;
      }
      return (void **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        ppvVar3 = (void **)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        ppvVar3[-1] = pvVar2;
        return ppvVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Atomic_address_as<__int64,std::_Atomic_padded<char*___ptr64>_> @ 14f91b550

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<char * __ptr64> >(struct std::_Atomic_padded<char * __ptr64> & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<char*___ptr64>_>
          (_Atomic_padded<char*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<char*___ptr64>_> @ 14f91b560

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<char * __ptr64> >(struct std::_Atomic_padded<char * __ptr64> const & __ptr64)
    */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<char*___ptr64>_>
          (_Atomic_padded<char*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64>_> @ 14f91b570

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<struct google::protobuf::internal::ArenaBlock * __ptr64> >(struct
   std::_Atomic_padded<struct google::protobuf::internal::ArenaBlock * __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64>_> @ 14f91b580

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<struct google::protobuf::internal::ArenaBlock * __ptr64> >(struct
   std::_Atomic_padded<struct google::protobuf::internal::ArenaBlock * __ptr64> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::ArenaBlock*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64>_> @ 14f91b590

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::SerialArena * __ptr64> >(struct
   std::_Atomic_padded<class google::protobuf::internal::SerialArena * __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64>_> @ 14f91b5a0

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::SerialArena * __ptr64> >(struct
   std::_Atomic_padded<class google::protobuf::internal::SerialArena * __ptr64> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::SerialArena*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>_> @ 14f91b5b0

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk *
   __ptr64> >(struct std::_Atomic_padded<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>_> @ 14f91b5c0

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk *
   __ptr64> >(struct std::_Atomic_padded<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64>_> @ 14f91b5d0

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::StringBlock * __ptr64> >(struct
   std::_Atomic_padded<class google::protobuf::internal::StringBlock * __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64>_> @ 14f91b5e0

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class google::protobuf::internal::StringBlock * __ptr64> >(struct
   std::_Atomic_padded<class google::protobuf::internal::StringBlock * __ptr64> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64>_>
          (_Atomic_padded<google::protobuf::internal::StringBlock*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,char*___ptr64> @ 14f91b5f0

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,char * __ptr64>(char * __ptr64 const &
   __ptr64) */

__int64 __cdecl std::_Atomic_reinterpret_as<__int64,char*___ptr64>(char **param_1)

{
  return (__int64)*param_1;
}

// _Atomic_reinterpret_as<__int64,google::protobuf::internal::ArenaBlock*___ptr64> @ 14f91b600

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,struct google::protobuf::internal::ArenaBlock
   * __ptr64>(struct google::protobuf::internal::ArenaBlock * __ptr64 const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,google::protobuf::internal::ArenaBlock*___ptr64>
          (ArenaBlock **param_1)

{
  return (__int64)*param_1;
}

// _Atomic_reinterpret_as<__int64,google::protobuf::internal::SerialArena*___ptr64> @ 14f91b610

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class google::protobuf::internal::SerialArena
   * __ptr64>(class google::protobuf::internal::SerialArena * __ptr64 const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,google::protobuf::internal::SerialArena*___ptr64>
          (SerialArena **param_1)

{
  return (__int64)*param_1;
}

// _Atomic_reinterpret_as<__int64,google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> @ 14f91b620

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64>(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const & __ptr64) */

__int64 __cdecl
std::
_Atomic_reinterpret_as<__int64,google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
          (SerialArenaChunk **param_1)

{
  return (__int64)*param_1;
}

// _Atomic_reinterpret_as<__int64,google::protobuf::internal::StringBlock*___ptr64> @ 14f91b630

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class google::protobuf::internal::StringBlock
   * __ptr64>(class google::protobuf::internal::StringBlock * __ptr64 const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,google::protobuf::internal::StringBlock*___ptr64>
          (StringBlock **param_1)

{
  return (__int64)*param_1;
}

// _Construct_in_place<void*___ptr64,void*___ptr64_const&___ptr64> @ 14f91b640

/* void __cdecl std::_Construct_in_place<void * __ptr64,void * __ptr64 const & __ptr64>(void *
   __ptr64 & __ptr64,void * __ptr64 const & __ptr64) */

void __cdecl
std::_Construct_in_place<void*___ptr64,void*___ptr64_const&___ptr64>(void **param_1,void **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Copy_memmove<void*___ptr64*___ptr64,void*___ptr64*___ptr64> @ 14f91b650

/* void * __ptr64 * __ptr64 __cdecl std::_Copy_memmove<void * __ptr64 * __ptr64,void * __ptr64 *
   __ptr64>(void * __ptr64 * __ptr64,void * __ptr64 * __ptr64,void * __ptr64 * __ptr64) */

void ** __cdecl
std::_Copy_memmove<void*___ptr64*___ptr64,void*___ptr64*___ptr64>
          (void **param_1,void **param_2,void **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (void **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Destroy_range<std::allocator<void*___ptr64>_> @ 14f91b690

/* void __cdecl std::_Destroy_range<class std::allocator<void * __ptr64> >(void * __ptr64 *
   __ptr64,void * __ptr64 * __ptr64 const,class std::allocator<void * __ptr64> & __ptr64) */

void __cdecl
std::_Destroy_range<std::allocator<void*___ptr64>_>
          (void **param_1,void **param_2,allocator<void*___ptr64> *param_3)

{
  return;
}

// _Emplace_back<void*___ptr64> @ 14f91b6a0

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<void * __ptr64>
   >::_Emplace_back<void * __ptr64>(void * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<void*___ptr64>_>::_Emplace_back<void*___ptr64>
          (_Uninitialized_backout_al<std::allocator<void*___ptr64>_> *this,void **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back_with_unused_capacity<void*___ptr64_const&___ptr64> @ 14f91b6c0

/* private: void * __ptr64 & __ptr64 __cdecl std::vector<void * __ptr64,class std::allocator<void *
   __ptr64> >::_Emplace_back_with_unused_capacity<void * __ptr64 const & __ptr64>(void * __ptr64
   const & __ptr64) __ptr64 */

void ** __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
_Emplace_back_with_unused_capacity<void*___ptr64_const&___ptr64>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1)

{
  void **ppvVar1;
  
  **(undefined8 **)(this + 8) = *param_1;
  ppvVar1 = *(void ***)(this + 8);
  *(void ***)(this + 8) = ppvVar1 + 1;
  return ppvVar1;
}

// _Emplace_one_at_back<void*___ptr64_const&___ptr64> @ 14f91b6e0

/* private: void * __ptr64 & __ptr64 __cdecl std::vector<void * __ptr64,class std::allocator<void *
   __ptr64> >::_Emplace_one_at_back<void * __ptr64 const & __ptr64>(void * __ptr64 const & __ptr64)
   __ptr64 */

void ** __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
_Emplace_one_at_back<void*___ptr64_const&___ptr64>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1)

{
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(this + 8);
  if (ppvVar1 != *(void ***)(this + 0x10)) {
    *ppvVar1 = *param_1;
    ppvVar1 = *(void ***)(this + 8);
    *(void ***)(this + 8) = ppvVar1 + 1;
    return ppvVar1;
  }
  ppvVar1 = _Emplace_reallocate<void*___ptr64_const&___ptr64>(this,ppvVar1,param_1);
  return ppvVar1;
}

// _Emplace_reallocate<void*___ptr64_const&___ptr64> @ 14f91b710

/* private: void * __ptr64 * __ptr64 __cdecl std::vector<void * __ptr64,class std::allocator<void *
   __ptr64> >::_Emplace_reallocate<void * __ptr64 const & __ptr64>(void * __ptr64 * __ptr64
   const,void * __ptr64 const & __ptr64) __ptr64 */

void ** __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
_Emplace_reallocate<void*___ptr64_const&___ptr64>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1,void **param_2)

{
  ulonglong uVar1;
  void **ppvVar2;
  longlong lVar3;
  void **_Src;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  void **_Dst;
  void *pvVar8;
  ulong64 uVar9;
  void **ppvVar10;
  size_t _Size;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)this;
  lVar5 = *(longlong *)(this + 8) - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    _Xlength();
    pcVar4 = (code *)swi(3);
    ppvVar10 = (void **)(*pcVar4)();
    return ppvVar10;
  }
  uVar1 = lVar5 + 1;
  uVar7 = *(longlong *)(this + 0x10) - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_14f91b8a4:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar11 = uVar1;
  if (uVar1 <= uVar7) {
    uVar11 = uVar7;
  }
  if (0x1fffffffffffffff < uVar11) goto LAB_14f91b8a4;
  uVar7 = uVar11 * 8;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      ppvVar10 = (void **)0x0;
    }
    else {
      ppvVar10 = ::operator_new(uVar7);
    }
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_14f91b8a4;
    pvVar6 = ::operator_new(uVar7 + 0x27);
    if (pvVar6 == (void *)0x0) goto LAB_14f91b89d;
    ppvVar10 = (void **)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    ppvVar10[-1] = pvVar6;
  }
  ppvVar2 = ppvVar10 + ((longlong)param_1 - lVar3 >> 3);
  *ppvVar2 = *param_2;
  _Src = *(void ***)this;
  if (param_1 == *(void ***)(this + 8)) {
    _Size = (longlong)*(void ***)(this + 8) - (longlong)_Src;
    _Dst = ppvVar10;
    param_1 = _Src;
  }
  else {
    memmove(ppvVar10,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = ppvVar2 + 1;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    uVar9 = *(longlong *)(this + 0x10) - (longlong)pvVar6 & 0xfffffffffffffff8;
    pvVar8 = pvVar6;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      pvVar8 = *(void **)((longlong)pvVar6 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8))) {
LAB_14f91b89d:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar8,uVar9);
  }
  *(void ***)this = ppvVar10;
  *(void ***)(this + 8) = ppvVar10 + uVar1;
  *(void ***)(this + 0x10) = ppvVar10 + uVar11;
  return ppvVar2;
}

// _Get_unwrapped<void*___ptr64*___ptr64_const&___ptr64> @ 14f91b8c0

/* UNKNOWN __cdecl std::_Get_unwrapped<void * __ptr64 * __ptr64 const & __ptr64>(void * __ptr64 *
   __ptr64 const & __ptr64) */

void ** __cdecl std::_Get_unwrapped<void*___ptr64*___ptr64_const&___ptr64>(void ***param_1)

{
  return *param_1;
}

// _To_address<void*___ptr64*___ptr64> @ 14f91b8d0

/* UNKNOWN __cdecl std::_To_address<void * __ptr64 * __ptr64>(void * __ptr64 * __ptr64 const &
   __ptr64) */

void ** __cdecl std::_To_address<void*___ptr64*___ptr64>(void ***param_1)

{
  return *param_1;
}

// _Unfancy<void*___ptr64> @ 14f91b8e0

/* void * __ptr64 * __ptr64 __cdecl std::_Unfancy<void * __ptr64>(void * __ptr64 * __ptr64) */

void ** __cdecl std::_Unfancy<void*___ptr64>(void **param_1)

{
  return param_1;
}

// _Uninitialized_move<void*___ptr64*___ptr64,std::allocator<void*___ptr64>_> @ 14f91b8f0

/* void * __ptr64 * __ptr64 __cdecl std::_Uninitialized_move<void * __ptr64 * __ptr64,class
   std::allocator<void * __ptr64> >(void * __ptr64 * __ptr64 const,void * __ptr64 * __ptr64
   const,void * __ptr64 * __ptr64,class std::allocator<void * __ptr64> & __ptr64) */

void ** __cdecl
std::_Uninitialized_move<void*___ptr64*___ptr64,std::allocator<void*___ptr64>_>
          (void **param_1,void **param_2,void **param_3,allocator<void*___ptr64> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1 >> 3);
}

// addressof<void*___ptr64> @ 14f91b930

/* void * __ptr64 * __ptr64 __cdecl std::addressof<void * __ptr64>(void * __ptr64 & __ptr64) */

void ** __cdecl std::addressof<void*___ptr64>(void **param_1)

{
  return param_1;
}

// construct<void*___ptr64,void*___ptr64_const&___ptr64> @ 14f91b940

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<void * __ptr64>
   >::construct<void * __ptr64,void * __ptr64 const & __ptr64>(class std::allocator<void * __ptr64>
   & __ptr64,void * __ptr64 * __ptr64 const,void * __ptr64 const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<void*___ptr64>_>::
construct<void*___ptr64,void*___ptr64_const&___ptr64>
          (allocator<void*___ptr64> *param_1,void **param_2,void **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<void*___ptr64,void*___ptr64> @ 14f91b950

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<void * __ptr64>
   >::construct<void * __ptr64,void * __ptr64>(class std::allocator<void * __ptr64> & __ptr64,void *
   __ptr64 * __ptr64 const,void * __ptr64 && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<void*___ptr64>_>::
construct<void*___ptr64,void*___ptr64>
          (allocator<void*___ptr64> *param_1,void **param_2,void **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<void*___ptr64,void*___ptr64_const&___ptr64,0> @ 14f91b960

/* void * __ptr64 * __ptr64 __cdecl std::construct_at<void * __ptr64,void * __ptr64 const &
   __ptr64,0>(void * __ptr64 * __ptr64 const,void * __ptr64 const & __ptr64) */

void ** __cdecl
std::construct_at<void*___ptr64,void*___ptr64_const&___ptr64,0>(void **param_1,void **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<void*___ptr64,void*___ptr64,0> @ 14f91b970

/* void * __ptr64 * __ptr64 __cdecl std::construct_at<void * __ptr64,void * __ptr64,0>(void *
   __ptr64 * __ptr64 const,void * __ptr64 && __ptr64) */

void ** __cdecl std::construct_at<void*___ptr64,void*___ptr64,0>(void **param_1,void **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// exchange<void*___ptr64*___ptr64,std::nullptr_t> @ 14f91b980

/* void * __ptr64 * __ptr64 __cdecl std::exchange<void * __ptr64 * __ptr64,std::nullptr_t>(void *
   __ptr64 * __ptr64 & __ptr64,std::nullptr_t && __ptr64) */

void ** __cdecl
std::exchange<void*___ptr64*___ptr64,std::nullptr_t>(void ***param_1,std__nullptr_t *param_2)

{
  void **ppvVar1;
  
  ppvVar1 = *param_1;
  *param_1 = *(void ***)param_2;
  return ppvVar1;
}

// forward<void*___ptr64_const&___ptr64> @ 14f91b990

/* void * __ptr64 const & __ptr64 __cdecl std::forward<void * __ptr64 const & __ptr64>(void *
   __ptr64 const & __ptr64) */

void ** __cdecl std::forward<void*___ptr64_const&___ptr64>(void **param_1)

{
  return param_1;
}

// forward<void*___ptr64*___ptr64> @ 14f91b9a0

/* void * __ptr64 * __ptr64 && __ptr64 __cdecl std::forward<void * __ptr64 * __ptr64>(void * __ptr64
   * __ptr64 & __ptr64) */

void *** __cdecl std::forward<void*___ptr64*___ptr64>(void ***param_1)

{
  return param_1;
}

// forward<void*___ptr64> @ 14f91b9b0

/* void * __ptr64 && __ptr64 __cdecl std::forward<void * __ptr64>(void * __ptr64 & __ptr64) */

void ** __cdecl std::forward<void*___ptr64>(void **param_1)

{
  return param_1;
}

// forward<std::allocator<void*___ptr64>_> @ 14f91b9c0

/* class std::allocator<void * __ptr64> && __ptr64 __cdecl std::forward<class std::allocator<void *
   __ptr64> >(class std::allocator<void * __ptr64> & __ptr64) */

allocator<void*___ptr64> * __cdecl
std::forward<std::allocator<void*___ptr64>_>(allocator<void*___ptr64> *param_1)

{
  return param_1;
}

// get_mask<1> @ 14f91b9d0

/* private: unsigned __int64 __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::get_mask<1>(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::get_mask<1>(TaggedAllocationPolicyPtr *this)

{
  return (ulonglong)((uint)this->policy_ & 1);
}

// max<char_const*___ptr64> @ 14f91b9e0

/* char const * __ptr64 const & __ptr64 __cdecl std::max<char const * __ptr64>(char const * __ptr64
   const & __ptr64,char const * __ptr64 const & __ptr64) */

char ** __cdecl std::max<char_const*___ptr64>(char **param_1,char **param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// min<unsigned_short> @ 14f91ba00

/* unsigned short const & __ptr64 __cdecl std::min<unsigned short>(unsigned short const &
   __ptr64,unsigned short const & __ptr64) */

ushort * __cdecl std::min<unsigned_short>(ushort *param_1,ushort *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// min<unsigned_int> @ 14f91ba20

/* unsigned int const & __ptr64 __cdecl std::min<unsigned int>(unsigned int const & __ptr64,unsigned
   int const & __ptr64) */

uint * __cdecl std::min<unsigned_int>(uint *param_1,uint *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// min<char_const*___ptr64> @ 14f91ba40

/* char const * __ptr64 const & __ptr64 __cdecl std::min<char const * __ptr64>(char const * __ptr64
   const & __ptr64,char const * __ptr64 const & __ptr64) */

char ** __cdecl std::min<char_const*___ptr64>(char **param_1,char **param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// move<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64&___ptr64> @ 14f91ba60

/* struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64 && __ptr64
   __cdecl std::move<struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> *
   __ptr64 & __ptr64>(struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> *
   __ptr64 & __ptr64) */

atomic<google::protobuf::internal::SerialArena*___ptr64> ** __cdecl
std::move<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64&___ptr64>
          (atomic<class_google::protobuf::internal::SerialArena*___ptr64> **param_1)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> **)param_1;
}

// move<void*___ptr64&___ptr64> @ 14f91ba70

/* void * __ptr64 && __ptr64 __cdecl std::move<void * __ptr64 & __ptr64>(void * __ptr64 & __ptr64)
    */

void ** __cdecl std::move<void*___ptr64&___ptr64>(void **param_1)

{
  return param_1;
}

// move<std::allocator<void*___ptr64>&___ptr64> @ 14f91ba80

/* class std::allocator<void * __ptr64> && __ptr64 __cdecl std::move<class std::allocator<void *
   __ptr64> & __ptr64>(class std::allocator<void * __ptr64> & __ptr64) */

allocator<void*___ptr64> * __cdecl
std::move<std::allocator<void*___ptr64>&___ptr64>(allocator<void*___ptr64> *param_1)

{
  return param_1;
}

// set_mask<1> @ 14f91ba90

/* private: void __cdecl google::protobuf::internal::TaggedAllocationPolicyPtr::set_mask<1>(bool)
   __ptr64 */

void __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::set_mask<1>
          (TaggedAllocationPolicyPtr *this,bool param_1)

{
  ulonglong uVar1;
  
  uVar1 = this->policy_ | 1;
  if (!param_1) {
    uVar1 = this->policy_ & 0xfffffffffffffffe;
  }
  this->policy_ = uVar1;
  return;
}

// to_address<void*___ptr64> @ 14f91bab0

/* void * __ptr64 * __ptr64 __cdecl std::to_address<void * __ptr64>(void * __ptr64 * __ptr64 const)
    */

void ** __cdecl std::to_address<void*___ptr64>(void **param_1)

{
  return param_1;
}

// LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_> @ 14f91bb40

/* public: __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void *
   __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >(unsigned __int64,unsigned __int64) __ptr64 */

LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
           *this,__uint64 param_1,__uint64 param_2)

{
  *(__uint64 *)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_> @ 14f91bb60

/* public: __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void *
   __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned __int64,0,1>
   >::LayoutImpl<class std::tuple<struct google::protobuf::internal::SerialArenaChunkHeader,struct
   std::atomic<void * __ptr64>,struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> >,struct std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64>,struct std::integer_sequence<unsigned __int64,0>,struct std::integer_sequence<unsigned
   __int64,0,1> >(void) __ptr64 */

LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
          (LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0>,std::integer_sequence<unsigned___int64,0,1>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> @ 14f91bb70

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1>,struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64>
   >::LayoutWithStaticSizes<struct std::integer_sequence<unsigned __int64,1>,struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >(unsigned __int64,unsigned
   __int64) __ptr64 */

LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
          (LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1>,google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
           *this,__uint64 param_1,__uint64 param_2)

{
  *(__uint64 *)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> @ 14f91bb90

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >(struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const * __ptr64,unsigned __int64) __ptr64 */

Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::
Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this,
          atomic<google::protobuf::internal::SerialArena*___ptr64> *param_1,__uint64 param_2)

{
  *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> @ 14f91bbb0

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >(void) __ptr64 */

Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::
Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// Span<std::atomic<void*___ptr64>_const_> @ 14f91bbd0

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const >::Span<struct
   std::atomic<void * __ptr64> const >(struct std::atomic<void * __ptr64> const * __ptr64,unsigned
   __int64) __ptr64 */

Span<std::atomic<void*___ptr64>_const_> * __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::Span<std::atomic<void*___ptr64>_const_>
          (Span<std::atomic<void*___ptr64>_const_> *this,atomic<void*___ptr64> *param_1,
          __uint64 param_2)

{
  *(atomic<void*___ptr64> **)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// Span<std::atomic<void*___ptr64>_const_> @ 14f91bbf0

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const >::Span<struct
   std::atomic<void * __ptr64> const >(void) __ptr64 */

Span<std::atomic<void*___ptr64>_const_> * __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::Span<std::atomic<void*___ptr64>_const_>
          (Span<std::atomic<void*___ptr64>_const_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> @ 14f91bc10

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> >::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> >(struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64,unsigned __int64) __ptr64 */

Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::
Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this,
          atomic<google::protobuf::internal::SerialArena*___ptr64> *param_1,__uint64 param_2)

{
  *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> @ 14f91bc30

/* public: __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> >::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> >(void) __ptr64 */

Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::
Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Atomic_integral<unsigned_int,4> @ 14f91bc50

/* public: __cdecl std::_Atomic_integral<unsigned int,4>::_Atomic_integral<unsigned int,4>(unsigned
   int) __ptr64 */

_Atomic_integral<unsigned_int,4> * __thiscall
std::_Atomic_integral<unsigned_int,4>::_Atomic_integral<unsigned_int,4>
          (_Atomic_integral<unsigned_int,4> *this,uint param_1)

{
  *this = (_Atomic_integral<unsigned_int,4>)param_1;
  return this;
}

// _Atomic_integral<__int64,8> @ 14f91bc60

/* public: __cdecl std::_Atomic_integral<__int64,8>::_Atomic_integral<__int64,8>(__int64) __ptr64 */

_Atomic_integral<__int64,8> * __thiscall
std::_Atomic_integral<__int64,8>::_Atomic_integral<__int64,8>
          (_Atomic_integral<__int64,8> *this,__int64 param_1)

{
  *this = (_Atomic_integral<__int64,8>)param_1;
  return this;
}

// _Atomic_integral<unsigned___int64,8> @ 14f91bc70

/* public: __cdecl std::_Atomic_integral<unsigned __int64,8>::_Atomic_integral<unsigned
   __int64,8>(unsigned __int64) __ptr64 */

_Atomic_integral<unsigned___int64,8> * __thiscall
std::_Atomic_integral<unsigned___int64,8>::_Atomic_integral<unsigned___int64,8>
          (_Atomic_integral<unsigned___int64,8> *this,__uint64 param_1)

{
  *this = (_Atomic_integral<unsigned___int64,8>)param_1;
  return this;
}

// _Atomic_integral_facade<unsigned_int> @ 14f91bc80

/* public: __cdecl std::_Atomic_integral_facade<unsigned int>::_Atomic_integral_facade<unsigned
   int>(unsigned int) __ptr64 */

_Atomic_integral_facade<unsigned_int> * __thiscall
std::_Atomic_integral_facade<unsigned_int>::_Atomic_integral_facade<unsigned_int>
          (_Atomic_integral_facade<unsigned_int> *this,uint param_1)

{
  *this = (_Atomic_integral_facade<unsigned_int>)param_1;
  return this;
}

// _Atomic_integral_facade<__int64> @ 14f91bc90

/* public: __cdecl std::_Atomic_integral_facade<__int64>::_Atomic_integral_facade<__int64>(__int64)
   __ptr64 */

_Atomic_integral_facade<__int64> * __thiscall
std::_Atomic_integral_facade<__int64>::_Atomic_integral_facade<__int64>
          (_Atomic_integral_facade<__int64> *this,__int64 param_1)

{
  *this = (_Atomic_integral_facade<__int64>)param_1;
  return this;
}

// _Atomic_integral_facade<unsigned___int64> @ 14f91bca0

/* public: __cdecl std::_Atomic_integral_facade<unsigned __int64>::_Atomic_integral_facade<unsigned
   __int64>(unsigned __int64) __ptr64 */

_Atomic_integral_facade<unsigned___int64> * __thiscall
std::_Atomic_integral_facade<unsigned___int64>::_Atomic_integral_facade<unsigned___int64>
          (_Atomic_integral_facade<unsigned___int64> *this,__uint64 param_1)

{
  *this = (_Atomic_integral_facade<unsigned___int64>)param_1;
  return this;
}

// _Atomic_pointer<char*___ptr64> @ 14f91bcb0

/* public: __cdecl std::_Atomic_pointer<char * __ptr64>::_Atomic_pointer<char * __ptr64>(char *
   __ptr64 const) __ptr64 */

_Atomic_pointer<char*___ptr64> * __thiscall
std::_Atomic_pointer<char*___ptr64>::_Atomic_pointer<char*___ptr64>
          (_Atomic_pointer<char*___ptr64> *this,char *param_1)

{
  *(char **)this = param_1;
  return this;
}

// _Atomic_pointer<google::protobuf::internal::ArenaBlock*___ptr64> @ 14f91bcc0

/* public: __cdecl std::_Atomic_pointer<struct google::protobuf::internal::ArenaBlock *
   __ptr64>::_Atomic_pointer<struct google::protobuf::internal::ArenaBlock * __ptr64>(struct
   google::protobuf::internal::ArenaBlock * __ptr64 const) __ptr64 */

_Atomic_pointer<google::protobuf::internal::ArenaBlock*___ptr64> * __thiscall
std::_Atomic_pointer<google::protobuf::internal::ArenaBlock*___ptr64>::
_Atomic_pointer<google::protobuf::internal::ArenaBlock*___ptr64>
          (_Atomic_pointer<google::protobuf::internal::ArenaBlock*___ptr64> *this,
          ArenaBlock *param_1)

{
  *(ArenaBlock **)this = param_1;
  return this;
}

// _Atomic_pointer<google::protobuf::internal::SerialArena*___ptr64> @ 14f91bcd0

/* public: __cdecl std::_Atomic_pointer<class google::protobuf::internal::SerialArena *
   __ptr64>::_Atomic_pointer<class google::protobuf::internal::SerialArena * __ptr64>(class
   google::protobuf::internal::SerialArena * __ptr64 const) __ptr64 */

_Atomic_pointer<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
std::_Atomic_pointer<google::protobuf::internal::SerialArena*___ptr64>::
_Atomic_pointer<google::protobuf::internal::SerialArena*___ptr64>
          (_Atomic_pointer<google::protobuf::internal::SerialArena*___ptr64> *this,
          SerialArena *param_1)

{
  *(SerialArena **)this = param_1;
  return this;
}

// _Atomic_pointer<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> @ 14f91bce0

/* public: __cdecl std::_Atomic_pointer<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64>::_Atomic_pointer<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64>(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const) __ptr64 */

_Atomic_pointer<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> * __thiscall
std::_Atomic_pointer<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>::
_Atomic_pointer<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
          (_Atomic_pointer<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
           *this,SerialArenaChunk *param_1)

{
  *(SerialArenaChunk **)this = param_1;
  return this;
}

// _Atomic_pointer<google::protobuf::internal::StringBlock*___ptr64> @ 14f91bcf0

/* public: __cdecl std::_Atomic_pointer<class google::protobuf::internal::StringBlock *
   __ptr64>::_Atomic_pointer<class google::protobuf::internal::StringBlock * __ptr64>(class
   google::protobuf::internal::StringBlock * __ptr64 const) __ptr64 */

_Atomic_pointer<google::protobuf::internal::StringBlock*___ptr64> * __thiscall
std::_Atomic_pointer<google::protobuf::internal::StringBlock*___ptr64>::
_Atomic_pointer<google::protobuf::internal::StringBlock*___ptr64>
          (_Atomic_pointer<google::protobuf::internal::StringBlock*___ptr64> *this,
          StringBlock *param_1)

{
  *(StringBlock **)this = param_1;
  return this;
}

// _Atomic_storage<unsigned_int,4> @ 14f91bd00

/* public: __cdecl std::_Atomic_storage<unsigned int,4>::_Atomic_storage<unsigned int,4>(unsigned
   int) __ptr64 */

_Atomic_storage<unsigned_int,4> * __thiscall
std::_Atomic_storage<unsigned_int,4>::_Atomic_storage<unsigned_int,4>
          (_Atomic_storage<unsigned_int,4> *this,uint param_1)

{
  (this->_Storage)._Value = param_1;
  return this;
}

// _Atomic_storage<char*___ptr64,8> @ 14f91bd10

/* public: __cdecl std::_Atomic_storage<char * __ptr64,8>::_Atomic_storage<char * __ptr64,8>(char *
   __ptr64 const) __ptr64 */

_Atomic_storage<char*___ptr64,8> * __thiscall
std::_Atomic_storage<char*___ptr64,8>::_Atomic_storage<char*___ptr64,8>
          (_Atomic_storage<char*___ptr64,8> *this,char *param_1)

{
  *(char **)this = param_1;
  return this;
}

// _Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> @ 14f91bd20

/* public: __cdecl std::_Atomic_storage<struct google::protobuf::internal::ArenaBlock *
   __ptr64,8>::_Atomic_storage<struct google::protobuf::internal::ArenaBlock * __ptr64,8>(struct
   google::protobuf::internal::ArenaBlock * __ptr64 const) __ptr64 */

_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> * __thiscall
std::_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8>::
_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8>
          (_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> *this,
          ArenaBlock *param_1)

{
  *(ArenaBlock **)this = param_1;
  return this;
}

// _Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> @ 14f91bd30

/* public: __cdecl std::_Atomic_storage<class google::protobuf::internal::SerialArena *
   __ptr64,8>::_Atomic_storage<class google::protobuf::internal::SerialArena * __ptr64,8>(class
   google::protobuf::internal::SerialArena * __ptr64 const) __ptr64 */

_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> * __thiscall
std::_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8>::
_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8>
          (_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> *this,
          SerialArena *param_1)

{
  *(SerialArena **)this = param_1;
  return this;
}

// _Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8> @ 14f91bd40

/* public: __cdecl std::_Atomic_storage<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64,8>::_Atomic_storage<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64,8>(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const) __ptr64 */

_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8> *
__thiscall
std::_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>::
_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>
          (_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>
           *this,SerialArenaChunk *param_1)

{
  *(SerialArenaChunk **)this = param_1;
  return this;
}

// _Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> @ 14f91bd50

/* public: __cdecl std::_Atomic_storage<class google::protobuf::internal::StringBlock *
   __ptr64,8>::_Atomic_storage<class google::protobuf::internal::StringBlock * __ptr64,8>(class
   google::protobuf::internal::StringBlock * __ptr64 const) __ptr64 */

_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> * __thiscall
std::_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8>::
_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8>
          (_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> *this,
          StringBlock *param_1)

{
  *(StringBlock **)this = param_1;
  return this;
}

// _Atomic_storage<void*___ptr64,8> @ 14f91bd60

/* public: __cdecl std::_Atomic_storage<void * __ptr64,8>::_Atomic_storage<void * __ptr64,8>(void *
   __ptr64 const) __ptr64 */

_Atomic_storage<void*___ptr64,8> * __thiscall
std::_Atomic_storage<void*___ptr64,8>::_Atomic_storage<void*___ptr64,8>
          (_Atomic_storage<void*___ptr64,8> *this,void *param_1)

{
  *(void **)this = param_1;
  return this;
}

// _Atomic_storage<__int64,8> @ 14f91bd70

/* public: __cdecl std::_Atomic_storage<__int64,8>::_Atomic_storage<__int64,8>(__int64) __ptr64 */

_Atomic_storage<__int64,8> * __thiscall
std::_Atomic_storage<__int64,8>::_Atomic_storage<__int64,8>
          (_Atomic_storage<__int64,8> *this,__int64 param_1)

{
  (this->_Storage)._Value = param_1;
  return this;
}

// _Atomic_storage<unsigned___int64,8> @ 14f91bd80

/* public: __cdecl std::_Atomic_storage<unsigned __int64,8>::_Atomic_storage<unsigned
   __int64,8>(unsigned __int64) __ptr64 */

_Atomic_storage<unsigned___int64,8> * __thiscall
std::_Atomic_storage<unsigned___int64,8>::_Atomic_storage<unsigned___int64,8>
          (_Atomic_storage<unsigned___int64,8> *this,__uint64 param_1)

{
  (this->_Storage)._Value = param_1;
  return this;
}

// _Uninitialized_backout_al<std::allocator<void*___ptr64>_> @ 14f91bd90

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<void * __ptr64>
   >::_Uninitialized_backout_al<class std::allocator<void * __ptr64> >(void * __ptr64 *
   __ptr64,class std::allocator<void * __ptr64> & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<void*___ptr64>_> * __thiscall
std::_Uninitialized_backout_al<std::allocator<void*___ptr64>_>::
_Uninitialized_backout_al<std::allocator<void*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<void*___ptr64>_> *this,void **param_1,
          allocator<void*___ptr64> *param_2)

{
  *(void ***)this = param_1;
  *(void ***)(this + 8) = param_1;
  *(allocator<void*___ptr64> **)(this + 0x10) = param_2;
  return this;
}

// _Vector_val<std::_Simple_types<void*___ptr64>_> @ 14f91bdb0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<void * __ptr64> >::_Vector_val<struct
   std::_Simple_types<void * __ptr64> >(void * __ptr64 * __ptr64,void * __ptr64 * __ptr64,void *
   __ptr64 * __ptr64) __ptr64 */

_Vector_val<std::_Simple_types<void*___ptr64>_> * __thiscall
std::_Vector_val<std::_Simple_types<void*___ptr64>_>::
_Vector_val<std::_Simple_types<void*___ptr64>_>
          (_Vector_val<std::_Simple_types<void*___ptr64>_> *this,void **param_1,void **param_2,
          void **param_3)

{
  *(void ***)this = param_1;
  *(void ***)(this + 8) = param_2;
  *(void ***)(this + 0x10) = param_3;
  return this;
}

// _Vector_val<std::_Simple_types<void*___ptr64>_> @ 14f91bdd0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<void * __ptr64> >::_Vector_val<struct
   std::_Simple_types<void * __ptr64> >(void) __ptr64 */

_Vector_val<std::_Simple_types<void*___ptr64>_> * __thiscall
std::_Vector_val<std::_Simple_types<void*___ptr64>_>::
_Vector_val<std::_Simple_types<void*___ptr64>_>
          (_Vector_val<std::_Simple_types<void*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<void*___ptr64> @ 14f91bdf0

/* public: __cdecl std::allocator<void * __ptr64>::allocator<void * __ptr64>(void) __ptr64 */

allocator<void*___ptr64> * __thiscall
std::allocator<void*___ptr64>::allocator<void*___ptr64>(allocator<void*___ptr64> *this)

{
  return this;
}

// atomic<unsigned_int> @ 14f91be00

/* public: __cdecl std::atomic<unsigned int>::atomic<unsigned int>(unsigned int) __ptr64 */

atomic<unsigned_int> * __thiscall
std::atomic<unsigned_int>::atomic<unsigned_int>(atomic<unsigned_int> *this,uint param_1)

{
  *this = (atomic<unsigned_int>)param_1;
  return this;
}

// atomic<char*___ptr64> @ 14f91be10

/* public: __cdecl std::atomic<char * __ptr64>::atomic<char * __ptr64>(char * __ptr64 const) __ptr64
    */

atomic<char*___ptr64> * __thiscall
std::atomic<char*___ptr64>::atomic<char*___ptr64>(atomic<char*___ptr64> *this,char *param_1)

{
  *(char **)this = param_1;
  return this;
}

// atomic<google::protobuf::internal::ArenaBlock*___ptr64> @ 14f91be20

/* public: __cdecl std::atomic<struct google::protobuf::internal::ArenaBlock *
   __ptr64>::atomic<struct google::protobuf::internal::ArenaBlock * __ptr64>(struct
   google::protobuf::internal::ArenaBlock * __ptr64 const) __ptr64 */

atomic<google::protobuf::internal::ArenaBlock*___ptr64> * __thiscall
std::atomic<google::protobuf::internal::ArenaBlock*___ptr64>::
atomic<google::protobuf::internal::ArenaBlock*___ptr64>
          (atomic<google::protobuf::internal::ArenaBlock*___ptr64> *this,ArenaBlock *param_1)

{
  *(ArenaBlock **)this = param_1;
  return this;
}

// atomic<google::protobuf::internal::SerialArena*___ptr64> @ 14f91be30

/* public: __cdecl std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64>::atomic<class google::protobuf::internal::SerialArena * __ptr64>(class
   google::protobuf::internal::SerialArena * __ptr64 const) __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
std::atomic<google::protobuf::internal::SerialArena*___ptr64>::
atomic<google::protobuf::internal::SerialArena*___ptr64>
          (atomic<google::protobuf::internal::SerialArena*___ptr64> *this,SerialArena *param_1)

{
  *(SerialArena **)this = param_1;
  return this;
}

// atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> @ 14f91be40

/* public: __cdecl std::atomic<class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk *
   __ptr64>::atomic<class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk *
   __ptr64>(class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const)
   __ptr64 */

atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> * __thiscall
std::atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>::
atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64>
          (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64> *this,
          SerialArenaChunk *param_1)

{
  *(SerialArenaChunk **)this = param_1;
  return this;
}

// atomic<google::protobuf::internal::StringBlock*___ptr64> @ 14f91be50

/* public: __cdecl std::atomic<class google::protobuf::internal::StringBlock *
   __ptr64>::atomic<class google::protobuf::internal::StringBlock * __ptr64>(class
   google::protobuf::internal::StringBlock * __ptr64 const) __ptr64 */

atomic<google::protobuf::internal::StringBlock*___ptr64> * __thiscall
std::atomic<google::protobuf::internal::StringBlock*___ptr64>::
atomic<google::protobuf::internal::StringBlock*___ptr64>
          (atomic<google::protobuf::internal::StringBlock*___ptr64> *this,StringBlock *param_1)

{
  *(StringBlock **)this = param_1;
  return this;
}

// atomic<void*___ptr64> @ 14f91be60

/* public: __cdecl std::atomic<void * __ptr64>::atomic<void * __ptr64>(void * __ptr64 const) __ptr64
    */

atomic<void*___ptr64> * __thiscall
std::atomic<void*___ptr64>::atomic<void*___ptr64>(atomic<void*___ptr64> *this,void *param_1)

{
  *(void **)this = param_1;
  return this;
}

// atomic<__int64> @ 14f91be70

/* public: __cdecl std::atomic<__int64>::atomic<__int64>(__int64) __ptr64 */

atomic<__int64> * __thiscall
std::atomic<__int64>::atomic<__int64>(atomic<__int64> *this,__int64 param_1)

{
  *this = (atomic<__int64>)param_1;
  return this;
}

// atomic<unsigned___int64> @ 14f91be80

/* public: __cdecl std::atomic<unsigned __int64>::atomic<unsigned __int64>(unsigned __int64) __ptr64
    */

atomic<unsigned___int64> * __thiscall
std::atomic<unsigned___int64>::atomic<unsigned___int64>
          (atomic<unsigned___int64> *this,__uint64 param_1)

{
  *this = (atomic<unsigned___int64>)param_1;
  return this;
}

// reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64> @ 14f91be90

/* public: __cdecl std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64>::reverse_iterator<struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64>(struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64) __ptr64 */

reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64> *
__thiscall
std::reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>::
reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
          (reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
           *this,atomic<google::protobuf::internal::SerialArena*___ptr64> *param_1)

{
  *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this = param_1;
  return this;
}

// vector<void*___ptr64,std::allocator<void*___ptr64>_> @ 14f91bea0

/* public: __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64> >::vector<void *
   __ptr64,class std::allocator<void * __ptr64> >(class std::vector<void * __ptr64,class
   std::allocator<void * __ptr64> > && __ptr64) __ptr64 */

vector<void*___ptr64,std::allocator<void*___ptr64>_> * __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
vector<void*___ptr64,std::allocator<void*___ptr64>_>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,
          vector<void*___ptr64,class_std::allocator<void*___ptr64>_> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar2;
  return this;
}

// vector<void*___ptr64,std::allocator<void*___ptr64>_> @ 14f91bed0

/* public: __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64> >::vector<void *
   __ptr64,class std::allocator<void * __ptr64> >(void) __ptr64 */

vector<void*___ptr64,std::allocator<void*___ptr64>_> * __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
vector<void*___ptr64,std::allocator<void*___ptr64>_>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// AllocationPolicy @ 14f91bef0

/* public: __cdecl google::protobuf::internal::AllocationPolicy::AllocationPolicy(void) __ptr64 */

AllocationPolicy * __thiscall
google::protobuf::internal::AllocationPolicy::AllocationPolicy(AllocationPolicy *this)

{
  this->start_block_size = 0x100;
  this->block_alloc = (_func___cdecl_void_ptr_ulong64 *)0x0;
  this->block_dealloc = (_func___cdecl_void_void_ptr_ulong64 *)0x0;
  this->max_block_size = 0x8000;
  return this;
}

// ArenaBlock @ 14f91bf20

/* public: __cdecl google::protobuf::internal::ArenaBlock::ArenaBlock(struct
   google::protobuf::internal::ArenaBlock * __ptr64,unsigned __int64) __ptr64 */

ArenaBlock * __thiscall
google::protobuf::internal::ArenaBlock::ArenaBlock
          (ArenaBlock *this,ArenaBlock *param_1,__uint64 param_2)

{
  this->next = param_1;
  this->size = param_2;
  return this;
}

// ChunkList @ 14f91bf40

/* public: __cdecl google::protobuf::internal::cleanup::ChunkList::ChunkList(void) __ptr64 */

ChunkList * __thiscall google::protobuf::internal::cleanup::ChunkList::ChunkList(ChunkList *this)

{
  this->head_ = (Chunk *)0x0;
  this->next_ = (CleanupNode *)0x0;
  this->limit_ = (CleanupNode *)0x0;
  this->prefetch_ptr_ = (char *)0x0;
  return this;
}

// Mutex @ 14f91bf90

/* public: __cdecl absl::lts_20240722::Mutex::Mutex(void) __ptr64 */

Mutex * __thiscall absl::lts_20240722::Mutex::Mutex(Mutex *this)

{
  this->mu_ = (atomic<__int64>)0x0;
  return this;
}

// MutexLock @ 14f91bfb0

/* public: __cdecl absl::lts_20240722::MutexLock::MutexLock(class absl::lts_20240722::Mutex *
   __ptr64) __ptr64 */

MutexLock * __thiscall absl::lts_20240722::MutexLock::MutexLock(MutexLock *this,Mutex *param_1)

{
  *(Mutex **)this = param_1;
  Mutex::Lock(param_1);
  return this;
}

// SerialArena @ 14f91bfe0

/* private: __cdecl google::protobuf::internal::SerialArena::SerialArena(class
   google::protobuf::internal::ThreadSafeArena & __ptr64) __ptr64 */

SerialArena * __thiscall
google::protobuf::internal::SerialArena::SerialArena(SerialArena *this,ThreadSafeArena *param_1)

{
  this->parent_ = param_1;
  this->ptr_ = (atomic<char_*>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)&DAT_1535cedd0;
  this->limit_ = (char *)0x0;
  this->prefetch_ptr_ = (char *)0x0;
  (this->cleanup_list_).head_ = (Chunk *)0x0;
  (this->cleanup_list_).next_ = (CleanupNode *)0x0;
  (this->cleanup_list_).limit_ = (CleanupNode *)0x0;
  (this->cleanup_list_).prefetch_ptr_ = (char *)0x0;
  this->string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  this->string_block_unused_ = (atomic<unsigned___int64>)0x0;
  this->space_used_ = (atomic<unsigned___int64>)0x0;
  this->space_allocated_ = (atomic<unsigned___int64>)0x0;
  this->cached_block_length_ = '\0';
  this->cached_blocks_ = (CachedBlock **)0x0;
  return this;
}

// SerialArena @ 14f91c030

/* private: __cdecl google::protobuf::internal::SerialArena::SerialArena(struct
   google::protobuf::internal::ArenaBlock * __ptr64,class
   google::protobuf::internal::ThreadSafeArena & __ptr64) __ptr64 */

SerialArena * __thiscall
google::protobuf::internal::SerialArena::SerialArena
          (SerialArena *this,ArenaBlock *param_1,ThreadSafeArena *param_2)

{
  ulonglong uVar1;
  
  this->ptr_ = (atomic<char_*>)&param_1[8].size;
  uVar1 = param_1->size;
  this->prefetch_ptr_ = (char *)&param_1[8].size;
  this->limit_ = (char *)((longlong)&param_1->next + (uVar1 & 0xfffffffffffffff8));
  (this->cleanup_list_).head_ = (Chunk *)0x0;
  (this->cleanup_list_).next_ = (CleanupNode *)0x0;
  (this->cleanup_list_).limit_ = (CleanupNode *)0x0;
  (this->cleanup_list_).prefetch_ptr_ = (char *)0x0;
  this->string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  this->string_block_unused_ = (atomic<unsigned___int64>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)param_1;
  this->space_used_ = (atomic<unsigned___int64>)0x0;
  this->space_allocated_ = (atomic<unsigned___int64>)param_1->size;
  this->parent_ = param_2;
  this->cached_block_length_ = '\0';
  this->cached_blocks_ = (CachedBlock **)0x0;
  return this;
}

// SerialArena @ 14f91c090

/* private: __cdecl google::protobuf::internal::SerialArena::SerialArena(struct
   google::protobuf::internal::FirstSerialArena,struct google::protobuf::internal::ArenaBlock *
   __ptr64,class google::protobuf::internal::ThreadSafeArena & __ptr64) __ptr64 */

SerialArena * __thiscall
google::protobuf::internal::SerialArena::SerialArena
          (SerialArena *this,FirstSerialArena param_1,ArenaBlock *param_2,ThreadSafeArena *param_3)

{
  ulonglong uVar1;
  
  this->ptr_ = (atomic<char_*>)0x0;
  this->limit_ = (char *)0x0;
  this->prefetch_ptr_ = (char *)0x0;
  (this->cleanup_list_).head_ = (Chunk *)0x0;
  (this->cleanup_list_).next_ = (CleanupNode *)0x0;
  (this->cleanup_list_).limit_ = (CleanupNode *)0x0;
  (this->cleanup_list_).prefetch_ptr_ = (char *)0x0;
  this->string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  this->string_block_unused_ = (atomic<unsigned___int64>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)param_2;
  this->space_used_ = (atomic<unsigned___int64>)0x0;
  this->space_allocated_ = (atomic<unsigned___int64>)param_2->size;
  this->parent_ = param_3;
  this->cached_block_length_ = '\0';
  this->cached_blocks_ = (CachedBlock **)0x0;
  uVar1 = param_2->size;
  if (uVar1 != 0) {
    this->ptr_ = (atomic<char_*>)(param_2 + 1);
    this->limit_ = (char *)((longlong)&param_2->next + (uVar1 & 0xfffffffffffffff8));
    this->prefetch_ptr_ = (char *)(param_2 + 1);
  }
  return this;
}

// SerialArenaChunk @ 14f91c100

/* public: __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::SerialArenaChunk(unsigned int,void
   * __ptr64,class google::protobuf::internal::SerialArena * __ptr64) __ptr64 */

SerialArenaChunk * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::SerialArenaChunk
          (SerialArenaChunk *this,uint param_1,void *param_2,SerialArena *param_3)

{
  *(undefined8 *)this = 0;
  *(uint *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 1;
  *(void **)(this + 0x10) = param_2;
  if (1 < param_1) {
    memset(this + 0x18,0,(ulonglong)(param_1 - 1) << 3);
    *(SerialArena **)(this + (ulonglong)param_1 * 8 + 0x10) = param_3;
    memset(this + (ulonglong)param_1 * 8 + 0x10 + 8,0,(ulonglong)(param_1 - 1) << 3);
    return this;
  }
  *(SerialArena **)(this + (ulonglong)param_1 * 8 + 0x10) = param_3;
  return this;
}

// SerialArenaChunkHeader @ 14f91c1b0

/* public: __cdecl
   google::protobuf::internal::SerialArenaChunkHeader::SerialArenaChunkHeader(unsigned int,unsigned
   int) __ptr64 */

SerialArenaChunkHeader * __thiscall
google::protobuf::internal::SerialArenaChunkHeader::SerialArenaChunkHeader
          (SerialArenaChunkHeader *this,uint param_1,uint param_2)

{
  *(undefined8 *)this = 0;
  *(uint *)(this + 8) = param_1;
  *(uint *)(this + 0xc) = param_2;
  return this;
}

// StringBlock @ 14f91c1d0

/* private: __cdecl google::protobuf::internal::StringBlock::StringBlock(class
   google::protobuf::internal::StringBlock * __ptr64,bool,unsigned short,unsigned short) __ptr64 */

StringBlock * __thiscall
google::protobuf::internal::StringBlock::StringBlock
          (StringBlock *this,StringBlock *param_1,bool param_2,ushort param_3,ushort param_4)

{
  this->next_size_ = param_4;
  this->next_ = param_1;
  this->allocated_size_ = param_3;
  this->heap_allocated_ = param_2;
  return this;
}

// TaggedAllocationPolicyPtr @ 14f91c1f0

/* public: __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::TaggedAllocationPolicyPtr(void) __ptr64 */

TaggedAllocationPolicyPtr * __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::TaggedAllocationPolicyPtr
          (TaggedAllocationPolicyPtr *this)

{
  this->policy_ = 0;
  return this;
}

// ThreadCache @ 14f91c210

/* public: __cdecl google::protobuf::internal::ThreadSafeArena::ThreadCache::ThreadCache(void)
   __ptr64 */

ThreadCache * __thiscall
google::protobuf::internal::ThreadSafeArena::ThreadCache::ThreadCache(ThreadCache *this)

{
  this->last_lifecycle_id_seen = 0xffffffffffffffff;
  this->next_lifecycle_id = 0;
  this->last_serial_arena = (SerialArena *)0x0;
  return this;
}

// ThreadSafeArena @ 14f91c230

/* public: __cdecl google::protobuf::internal::ThreadSafeArena::ThreadSafeArena(char *
   __ptr64,unsigned __int64) __ptr64 */

ThreadSafeArena * __thiscall
google::protobuf::internal::ThreadSafeArena::ThreadSafeArena
          (ThreadSafeArena *this,char *param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  this->tag_and_id_ = 0;
  (this->alloc_policy_).policy_ = 0;
  (this->mutex_).mu_ = (atomic<__int64>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)0x0;
  if ((param_1 == (char *)0x0) || (param_2 < 0x11)) {
    param_1 = &DAT_1535cedd0;
  }
  else {
    (this->alloc_policy_).policy_ = 1;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(__uint64 *)(param_1 + 8) = param_2;
  }
  (this->first_arena_).ptr_ = (atomic<char_*>)0x0;
  (this->first_arena_).limit_ = (char *)0x0;
  (this->first_arena_).prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).cleanup_list_.head_ = (Chunk *)0x0;
  (this->first_arena_).cleanup_list_.next_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.limit_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  (this->first_arena_).string_block_unused_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)param_1;
  (this->first_arena_).space_used_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).space_allocated_ = *(atomic<unsigned___int64> *)((longlong)param_1 + 8);
  (this->first_arena_).parent_ = this;
  (this->first_arena_).cached_block_length_ = '\0';
  (this->first_arena_).cached_blocks_ = (CachedBlock **)0x0;
  uVar1 = *(ulonglong *)((longlong)param_1 + 8);
  if (uVar1 != 0) {
    (this->first_arena_).ptr_ = (atomic<char_*>)((longlong)param_1 + 0x10);
    (this->first_arena_).limit_ = (char *)((uVar1 & 0xfffffffffffffff8) + (longlong)param_1);
    (this->first_arena_).prefetch_ptr_ = (char *)((longlong)param_1 + 0x10);
  }
  Init(this);
  return this;
}

// ThreadSafeArena @ 14f91c300

/* WARNING: Removing unreachable block (ram,0x00014f91c574) */
/* WARNING: Removing unreachable block (ram,0x00014f91c576) */
/* WARNING: Removing unreachable block (ram,0x00014f91c58a) */
/* public: __cdecl google::protobuf::internal::ThreadSafeArena::ThreadSafeArena(void *
   __ptr64,unsigned __int64,struct google::protobuf::internal::AllocationPolicy const & __ptr64)
   __ptr64 */

ThreadSafeArena * __thiscall
google::protobuf::internal::ThreadSafeArena::ThreadSafeArena
          (ThreadSafeArena *this,void *param_1,__uint64 param_2,AllocationPolicy *param_3)

{
  ulonglong uVar1;
  atomic<char_*> aVar2;
  ulong64 uVar3;
  _func___cdecl_void_void_ptr_ulong64 *p_Var4;
  LogMessage *this_00;
  atomic<char_*> aVar5;
  atomic<char_*> aVar6;
  atomic<char_*> aVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28 [2];
  
  this->tag_and_id_ = 0;
  (this->alloc_policy_).policy_ = 0;
  (this->mutex_).mu_ = (atomic<__int64>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)0x0;
  if ((((param_3->start_block_size == 0x100) && (param_3->max_block_size == 0x8000)) &&
      (param_3->block_alloc == (_func___cdecl_void_ptr_ulong64 *)0x0)) &&
     (param_3->block_dealloc == (_func___cdecl_void_void_ptr_ulong64 *)0x0)) {
    if ((param_1 == (void *)0x0) || (param_2 < 0x11)) {
      param_1 = &DAT_1535cedd0;
    }
    else {
      (this->alloc_policy_).policy_ = 1;
      *(undefined8 *)param_1 = 0;
      *(__uint64 *)((longlong)param_1 + 8) = param_2;
    }
  }
  else {
    if ((param_1 == (void *)0x0) || (param_2 < 0x30)) {
      param_2 = param_3->start_block_size;
      if (param_2 < 0x30) {
        param_2 = 0x30;
      }
      local_38._Mysize = param_2;
      if (param_3->block_alloc == (_func___cdecl_void_ptr_ulong64 *)0x0) {
        param_1 = ::operator_new(param_2);
        local_38._Mydata = param_1;
      }
      else {
        param_1 = (*param_3->block_alloc)(param_2);
        local_38._Mydata = param_1;
      }
    }
    else {
      (this->alloc_policy_).policy_ = 1;
    }
    *(undefined8 *)param_1 = 0;
    *(__uint64 *)((longlong)param_1 + 8) = param_2;
  }
  (this->first_arena_).ptr_ = (atomic<char_*>)0x0;
  (this->first_arena_).limit_ = (char *)0x0;
  (this->first_arena_).prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).cleanup_list_.head_ = (Chunk *)0x0;
  (this->first_arena_).cleanup_list_.next_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.limit_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  (this->first_arena_).string_block_unused_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)param_1;
  (this->first_arena_).space_used_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).space_allocated_ = *(atomic<unsigned___int64> *)((longlong)param_1 + 8);
  (this->first_arena_).parent_ = this;
  (this->first_arena_).cached_block_length_ = '\0';
  (this->first_arena_).cached_blocks_ = (CachedBlock **)0x0;
  uVar1 = *(ulonglong *)((longlong)param_1 + 8);
  if (uVar1 != 0) {
    (this->first_arena_).ptr_ = (atomic<char_*>)((longlong)param_1 + 0x10);
    (this->first_arena_).prefetch_ptr_ = (char *)((longlong)param_1 + 0x10);
    (this->first_arena_).limit_ = (char *)((uVar1 & 0xfffffffffffffff8) + (longlong)param_1);
  }
  Init(this);
  if ((((param_3->start_block_size != 0x100) || (param_3->max_block_size != 0x8000)) ||
      (param_3->block_alloc != (_func___cdecl_void_ptr_ulong64 *)0x0)) ||
     (param_3->block_dealloc != (_func___cdecl_void_void_ptr_ulong64 *)0x0)) {
    aVar2 = (this->first_arena_).ptr_;
    aVar7 = (atomic<char_*>)((longlong)aVar2 + 0x20);
    if ((this->first_arena_).limit_ < (ulonglong)aVar7) {
      this_00 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                          (local_28,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\arena.cc"
                           ,0x287);
      local_38._Mydata = "MaybeAllocateAligned cannot fail here.";
      local_38._Mysize = 0x26;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_38);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(local_28);
    }
    (this->first_arena_).ptr_ = aVar7;
    aVar5 = (atomic<char_*>)(this->first_arena_).prefetch_ptr_;
    aVar6 = (atomic<char_*>)(this->first_arena_).limit_;
    if (((longlong)aVar5 - (longlong)aVar7 < 0x401) && ((ulonglong)aVar5 < (ulonglong)aVar6)) {
      if ((ulonglong)aVar7 < (ulonglong)aVar5) {
        aVar7 = aVar5;
      }
      aVar5 = aVar7;
      if ((longlong)aVar7 + 0x400U < (ulonglong)aVar6) {
        aVar6 = (atomic<char_*>)((longlong)aVar7 + 0x400U);
      }
      for (; (ulonglong)aVar5 < (ulonglong)aVar6; aVar5 = (atomic<char_*>)((longlong)aVar5 + 0x40))
      {
      }
    }
    (this->first_arena_).prefetch_ptr_ = (char *)aVar5;
    uVar3 = param_3->max_block_size;
    *(ulong64 *)aVar2 = param_3->start_block_size;
    *(ulong64 *)((longlong)aVar2 + 8) = uVar3;
    p_Var4 = param_3->block_dealloc;
    *(_func___cdecl_void_ptr_ulong64 **)((longlong)aVar2 + 0x10) = param_3->block_alloc;
    *(_func___cdecl_void_void_ptr_ulong64 **)((longlong)aVar2 + 0x18) = p_Var4;
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ & 7;
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ | (ulonglong)aVar2;
  }
  return this;
}

// ThreadSafeArena @ 14f91c5a0

/* public: __cdecl google::protobuf::internal::ThreadSafeArena::ThreadSafeArena(void) __ptr64 */

ThreadSafeArena * __thiscall
google::protobuf::internal::ThreadSafeArena::ThreadSafeArena(ThreadSafeArena *this)

{
  this->tag_and_id_ = 0;
  (this->alloc_policy_).policy_ = 0;
  (this->mutex_).mu_ = (atomic<__int64>)0x0;
  this->head_ = (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)0x0;
  (this->first_arena_).ptr_ = (atomic<char_*>)0x0;
  (this->first_arena_).limit_ = (char *)0x0;
  (this->first_arena_).prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).cleanup_list_.head_ = (Chunk *)0x0;
  (this->first_arena_).cleanup_list_.next_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.limit_ = (CleanupNode *)0x0;
  (this->first_arena_).cleanup_list_.prefetch_ptr_ = (char *)0x0;
  (this->first_arena_).string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  (this->first_arena_).string_block_unused_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).space_used_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).space_allocated_ = (atomic<unsigned___int64>)0x0;
  (this->first_arena_).cached_block_length_ = '\0';
  (this->first_arena_).cached_blocks_ = (CachedBlock **)0x0;
  (this->first_arena_).head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)&DAT_1535cedd0;
  (this->first_arena_).parent_ = this;
  Init(this);
  return this;
}

// ThreadSafeArenaStatsHandle @ 14f91c630

/* public: __cdecl
   google::protobuf::internal::ThreadSafeArenaStatsHandle::ThreadSafeArenaStatsHandle(struct
   google::protobuf::internal::ThreadSafeArenaStats * __ptr64) __ptr64 */

ThreadSafeArenaStatsHandle * __thiscall
google::protobuf::internal::ThreadSafeArenaStatsHandle::ThreadSafeArenaStatsHandle
          (ThreadSafeArenaStatsHandle *this,ThreadSafeArenaStats *param_1)

{
  return this;
}

// ~_Uninitialized_backout_al<std::allocator<void*___ptr64>_> @ 14f91c640

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<void * __ptr64>
   >::~_Uninitialized_backout_al<class std::allocator<void * __ptr64> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<void*___ptr64>_>::
~_Uninitialized_backout_al<std::allocator<void*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<void*___ptr64>_> *this)

{
  return;
}

// ~vector<void*___ptr64,std::allocator<void*___ptr64>_> @ 14f91c650

/* public: __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64> >::~vector<void *
   __ptr64,class std::allocator<void * __ptr64> >(void) __ptr64 */

void __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
~vector<void*___ptr64,std::allocator<void*___ptr64>_>
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff8;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// ~Mutex @ 14f91c6c0

/* public: __cdecl absl::lts_20240722::Mutex::~Mutex(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::~Mutex(Mutex *this)

{
  return;
}

// ~MutexLock @ 14f91c6d0

/* public: __cdecl absl::lts_20240722::MutexLock::~MutexLock(void) __ptr64 */

void __thiscall absl::lts_20240722::MutexLock::~MutexLock(MutexLock *this)

{
  Mutex::Unlock(*(Mutex **)this);
  return;
}

// ~ThreadSafeArena @ 14f91c6f0

/* public: __cdecl google::protobuf::internal::ThreadSafeArena::~ThreadSafeArena(void) __ptr64 */

void __thiscall google::protobuf::internal::ThreadSafeArena::~ThreadSafeArena(ThreadSafeArena *this)

{
  atomic<google::protobuf::internal::StringBlock_*> aVar1;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar2;
  ulong64 uVar3;
  code *pcVar4;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar5;
  ulonglong uVar6;
  code *local_res8;
  
  FUN_14f91b1d0(this,local_res8._0_1_);
  SerialArena::CleanupList(&this->first_arena_);
  uVar6 = (this->alloc_policy_).policy_ & 0xfffffffffffffff8;
  if (uVar6 == 0) {
    local_res8 = (code *)0x0;
  }
  else {
    local_res8 = *(code **)(uVar6 + 0x18);
  }
  FUN_14f91b370(this,&local_res8);
  pcVar4 = local_res8;
  aVar1 = (this->first_arena_).string_block_;
  if (aVar1 != (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
    SerialArena::FreeStringBlocks
              ((StringBlock *)aVar1,(__uint64)(this->first_arena_).string_block_unused_);
  }
  aVar2 = (this->first_arena_).head_;
  uVar3 = *(ulong64 *)((longlong)aVar2 + 8);
  for (aVar5 = *(atomic<google::protobuf::internal::ArenaBlock_*> *)aVar2;
      aVar5 != (atomic<google::protobuf::internal::ArenaBlock_*>)0x0;
      aVar5 = *(atomic<google::protobuf::internal::ArenaBlock_*> *)aVar5) {
    if (pcVar4 == (code *)0x0) {
      ::operator_delete((void *)aVar2,uVar3);
    }
    else {
      (*pcVar4)();
    }
    uVar3 = *(ulong64 *)((longlong)aVar5 + 8);
    aVar2 = aVar5;
  }
  if ((((this->alloc_policy_).policy_ & 1) == 0) && (uVar3 != 0)) {
    uVar6 = (this->alloc_policy_).policy_ & 0xfffffffffffffff8;
    if ((uVar6 == 0) || (pcVar4 = *(code **)(uVar6 + 0x18), pcVar4 == (code *)0x0)) {
      ::operator_delete((void *)aVar2,uVar3);
    }
    else {
      (*pcVar4)(aVar2);
    }
  }
  return;
}

// operator<< @ 14f91c7e0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(unsigned __int64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<(LogMessage *this,__uint64 param_1)

{
  LogMessage *pLVar1;
  __uint64 local_res10 [3];
  
  local_res10[0] = param_1;
  pLVar1 = operator<<<unsigned___int64,0>(this,local_res10);
  return pLVar1;
}

// operator[] @ 14f91c800

/* public: struct std::atomic<void * __ptr64> const & __ptr64 __cdecl
   absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const >::operator[](unsigned
   __int64)const __ptr64 */

atomic<void*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::operator[]
          (Span<std::atomic<void*___ptr64>_const_> *this,__uint64 param_1)

{
  return (atomic<void*___ptr64> *)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14f91c810

/* public: unsigned __int64 const & __ptr64 __cdecl std::array<unsigned
   __int64,1>::operator[](unsigned __int64)const __ptr64 */

__uint64 * __thiscall
std::array<unsigned___int64,1>::operator[](array<unsigned___int64,1> *this,__uint64 param_1)

{
  return (__uint64 *)(this + param_1 * 8);
}

// operator-> @ 14f91c820

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   __cdecl std::reverse_iterator<struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> * __ptr64>::operator->(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
std::reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>::
operator->(reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
           *this)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)(*(longlong *)this + -8);
}

// operator++ @ 14f91c830

/* public: class std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64> & __ptr64 __cdecl
   std::reverse_iterator<struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64>
   * __ptr64>::operator++(void) __ptr64 */

reverse_iterator<struct_std::atomic<class_google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
* __thiscall
std::reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>::
operator++(reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
           *this)

{
  *(longlong *)this = *(longlong *)this + -8;
  return (reverse_iterator<struct_std::atomic<class_google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
          *)this;
}

// FUN_14f91c840 @ 14f91c840

void FUN_14f91c840(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)((ulonglong)*(uint *)(param_2 + 8) * 8 + 0x10 + param_2);
  uVar2 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_2 + 0xc);
  }
  if ((ulonglong)*(uint *)(param_2 + 8) < (ulonglong)uVar2) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
  }
  plVar1 = plVar3 + uVar2;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if (*plVar3 != 0) {
      **(longlong **)*param_1 = **(longlong **)*param_1 + *(longlong *)(*plVar3 + 0x58);
    }
  }
  return;
}

// FUN_14f91c8c0 @ 14f91c8c0

void FUN_14f91c8c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)((ulonglong)*(uint *)(param_2 + 8) * 8 + 0x10 + param_2);
  uVar4 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar4 = *(uint *)(param_2 + 0xc);
  }
  if ((ulonglong)*(uint *)(param_2 + 8) < (ulonglong)uVar4) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
  }
  plVar1 = plVar7 + uVar4;
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    plVar2 = (longlong *)*plVar7;
    if (plVar2 != (longlong *)0x0) {
      lVar5 = 0;
      if (plVar2[7] != 0) {
        lVar5 = ((ulonglong)*(ushort *)(plVar2[7] + 8) - plVar2[8]) + -0x10;
      }
      uVar3 = *(ulonglong *)(plVar2[9] + 8);
      if (uVar3 != 0) {
        uVar6 = (*plVar2 - plVar2[9]) - 0x10;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        lVar5 = lVar5 + uVar6 + plVar2[10];
      }
      **(longlong **)*param_1 = **(longlong **)*param_1 + lVar5 + -0x78;
    }
  }
  return;
}

// FUN_14f91c990 @ 14f91c990

void FUN_14f91c990(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)*(uint *)(param_2 + 8) * 8 + 0x10 + param_2;
  uVar2 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_2 + 0xc);
  }
  if ((ulonglong)*(uint *)(param_2 + 8) < (ulonglong)uVar2) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
  }
  lVar1 = lVar3 + (ulonglong)uVar2 * 8;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 8) {
  }
  return;
}

// FUN_14f91c9f0 @ 14f91c9f0

void FUN_14f91c9f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  lVar9 = (ulonglong)*(uint *)(param_2 + 8) * 8 + 0x10 + param_2;
  uVar3 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  if ((ulonglong)*(uint *)(param_2 + 8) < (ulonglong)uVar3) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
  }
  lVar8 = lVar9 + (ulonglong)uVar3 * 8;
  while( true ) {
    if (lVar8 == lVar9) {
      return;
    }
    lVar1 = *(longlong *)(lVar8 + -8);
    if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) break;
LAB_14f91cb13:
    lVar8 = lVar8 + -8;
  }
  uVar5 = *(ulonglong *)(*(longlong *)(lVar1 + 0x60) + 8) & 0xfffffffffffffff8;
  if (uVar5 == 0) {
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = *(code **)(uVar5 + 0x18);
  }
  plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x20) + -0x10);
  plVar11 = *(longlong **)(lVar1 + 0x18);
LAB_14f91ca80:
  plVar2 = plVar11 + 2;
  iVar4 = 0;
  for (plVar10 = plVar7; plVar2 <= plVar10; plVar10 = plVar10 + -2) {
    if (7 < iVar4) goto LAB_14f91caa8;
    iVar4 = iVar4 + 1;
  }
  goto joined_r0x00014f91caca;
LAB_14f91caa8:
  do {
    (*(code *)plVar7[1])(*plVar7);
    plVar7 = plVar7 + -2;
    plVar10 = plVar10 + -2;
  } while (plVar2 <= plVar10);
joined_r0x00014f91caca:
  for (; plVar2 <= plVar7; plVar7 = plVar7 + -2) {
    (*(code *)plVar7[1])(*plVar7);
  }
  plVar2 = (longlong *)*plVar11;
  if (pcVar6 == (code *)0x0) {
    operator_delete(plVar11,plVar11[1]);
  }
  else {
    (*pcVar6)();
  }
  if (plVar2 == (longlong *)0x0) goto LAB_14f91cb13;
  plVar7 = (longlong *)((plVar2[1] - 0x10U & 0xfffffffffffffff0) + (longlong)plVar2);
  plVar11 = plVar2;
  goto LAB_14f91ca80;
}

// FUN_14f91cb60 @ 14f91cb60

void FUN_14f91cb60(undefined8 *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = (ulonglong)*(uint *)((longlong)param_2 + 8) * 8 + 0x10 + (longlong)param_2;
  uVar6 = *(uint *)((longlong)param_2 + 8);
  if (*(uint *)((longlong)param_2 + 0xc) < *(uint *)((longlong)param_2 + 8)) {
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
  }
  if ((ulonglong)*(uint *)((longlong)param_2 + 8) < (ulonglong)uVar6) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
  }
  lVar1 = lVar8 + (ulonglong)uVar6 * 8;
  while (lVar1 != lVar8) {
    lVar2 = *(longlong *)(lVar1 + -8);
    lVar1 = lVar1 + -8;
    pcVar3 = *(code **)*param_1;
    if (*(StringBlock **)(lVar2 + 0x38) != (StringBlock *)0x0) {
      google::protobuf::internal::SerialArena::FreeStringBlocks
                (*(StringBlock **)(lVar2 + 0x38),*(__uint64 *)(lVar2 + 0x40));
    }
    puVar4 = *(undefined8 **)(lVar2 + 0x48);
    uVar5 = puVar4[1];
    for (puVar7 = (undefined8 *)*puVar4; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7
        ) {
      if (pcVar3 == (code *)0x0) {
        operator_delete(puVar4,uVar5);
      }
      else {
        (*pcVar3)();
      }
      uVar5 = puVar7[1];
      puVar4 = puVar7;
    }
    if (*(code **)*param_1 == (code *)0x0) {
      operator_delete(puVar4,uVar5);
    }
    else {
      (**(code **)*param_1)();
    }
  }
  operator_delete(param_2,(ulonglong)*(uint *)((longlong)param_2 + 8) * 0x10 + 0x10);
  return;
}

// FUN_14f91cc90 @ 14f91cc90

void FUN_14f91cc90(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  if ((ulonglong)uVar3 <= (ulonglong)*(uint *)(param_2 + 8)) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        if (*(longlong *)(uVar2 * 8 + 0x10 + param_2) == param_1[1]) {
          *(undefined8 *)*param_1 =
               *(undefined8 *)((ulonglong)*(uint *)(param_2 + 8) * 8 + 0x10 + uVar2 * 8 + param_2);
          return;
        }
        uVar1 = uVar1 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar2 < uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// Add @ 14f91cdd0

/* public: void __cdecl google::protobuf::internal::cleanup::ChunkList::Add(void * __ptr64,void
   (__cdecl*)(void * __ptr64),class google::protobuf::internal::SerialArena & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::cleanup::ChunkList::Add
          (ChunkList *this,void *param_1,_func_void_void_ptr *param_2,SerialArena *param_3)

{
  CleanupNode *pCVar1;
  
  pCVar1 = this->next_;
  if (pCVar1 < this->limit_) {
    pCVar1->elem = param_1;
    pCVar1->destructor = (_func___cdecl_void_void_ptr *)param_2;
    this->next_ = this->next_ + 1;
    return;
  }
  AddFallback(this,param_1,param_2,param_3);
  return;
}

// AddCleanup @ 14f91ce00

/* public: void __cdecl google::protobuf::internal::SerialArena::AddCleanup(void * __ptr64,void
   (__cdecl*)(void * __ptr64)) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::AddCleanup
          (SerialArena *this,void *param_1,_func_void_void_ptr *param_2)

{
  CleanupNode **ppCVar1;
  CleanupNode *pCVar2;
  CleanupNode *pCVar3;
  CleanupNode *pCVar4;
  
  pCVar2 = (this->cleanup_list_).next_;
  if (pCVar2 < (this->cleanup_list_).limit_) {
    pCVar2->elem = param_1;
    pCVar2->destructor = (_func___cdecl_void_void_ptr *)param_2;
    ppCVar1 = &(this->cleanup_list_).next_;
    *ppCVar1 = *ppCVar1 + 1;
  }
  else {
    cleanup::ChunkList::AddFallback(&this->cleanup_list_,param_1,param_2,this);
  }
  pCVar2 = (CleanupNode *)(this->cleanup_list_).prefetch_ptr_;
  pCVar4 = (this->cleanup_list_).next_;
  pCVar3 = (this->cleanup_list_).limit_;
  if (((longlong)pCVar2 - (longlong)pCVar4 < 0x181) && (pCVar2 < pCVar3)) {
    if (pCVar4 < pCVar2) {
      pCVar4 = pCVar2;
    }
    pCVar2 = pCVar4;
    if (pCVar4 + 0x18 < pCVar3) {
      pCVar3 = pCVar4 + 0x18;
    }
    for (; pCVar2 < pCVar3; pCVar2 = pCVar2 + 4) {
    }
  }
  (this->cleanup_list_).prefetch_ptr_ = (char *)pCVar2;
  return;
}

// AddCleanup @ 14f91ce90

/* public: void __cdecl google::protobuf::internal::ThreadSafeArena::AddCleanup(void * __ptr64,void
   (__cdecl*)(void * __ptr64)) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::AddCleanup
          (ThreadSafeArena *this,void *param_1,_func_void_void_ptr *param_2)

{
  CleanupNode **ppCVar1;
  SerialArena *pSVar2;
  CleanupNode *pCVar3;
  CleanupNode *pCVar4;
  CleanupNode *pCVar5;
  
  pSVar2 = GetSerialArena(this);
  pCVar3 = (pSVar2->cleanup_list_).next_;
  if (pCVar3 < (pSVar2->cleanup_list_).limit_) {
    pCVar3->elem = param_1;
    pCVar3->destructor = (_func___cdecl_void_void_ptr *)param_2;
    ppCVar1 = &(pSVar2->cleanup_list_).next_;
    *ppCVar1 = *ppCVar1 + 1;
  }
  else {
    cleanup::ChunkList::AddFallback(&pSVar2->cleanup_list_,param_1,param_2,pSVar2);
  }
  pCVar3 = (CleanupNode *)(pSVar2->cleanup_list_).prefetch_ptr_;
  pCVar5 = (pSVar2->cleanup_list_).next_;
  pCVar4 = (pSVar2->cleanup_list_).limit_;
  if (((longlong)pCVar3 - (longlong)pCVar5 < 0x181) && (pCVar3 < pCVar4)) {
    if (pCVar5 < pCVar3) {
      pCVar5 = pCVar3;
    }
    pCVar3 = pCVar5;
    if (pCVar5 + 0x18 < pCVar4) {
      pCVar4 = pCVar5 + 0x18;
    }
    for (; pCVar3 < pCVar4; pCVar3 = pCVar3 + 4) {
    }
  }
  (pSVar2->cleanup_list_).prefetch_ptr_ = (char *)pCVar3;
  return;
}

// AddFallback @ 14f91cf40

/* private: void __cdecl google::protobuf::internal::cleanup::ChunkList::AddFallback(void *
   __ptr64,void (__cdecl*)(void * __ptr64),class google::protobuf::internal::SerialArena & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::cleanup::ChunkList::AddFallback
          (ChunkList *this,void *param_1,_func_void_void_ptr *param_2,SerialArena *param_3)

{
  CleanupNode *pCVar1;
  longlong lVar2;
  Chunk *pCVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (this->head_ == (Chunk *)0x0) {
    uVar4 = 0x40;
    uVar5 = (param_3->parent_->alloc_policy_).policy_ & 0xfffffffffffffff8;
  }
  else {
    lVar2 = *(longlong *)(this->head_ + 8);
    uVar5 = (param_3->parent_->alloc_policy_).policy_ & 0xfffffffffffffff8;
    if (lVar2 == 0) {
      uVar4 = 0x40;
    }
    else {
      uVar4 = lVar2 * 2;
      if (0x1000 < uVar4) {
        uVar4 = 0x1000;
      }
    }
  }
  if ((uVar5 == 0) || (*(code **)(uVar5 + 0x10) == (code *)0x0)) {
    pCVar3 = ::operator_new(uVar4);
  }
  else {
    pCVar3 = (Chunk *)(**(code **)(uVar5 + 0x10))();
  }
  param_3->space_allocated_ =
       (atomic<unsigned___int64>)((longlong)param_3->space_allocated_ + uVar4);
  pCVar1 = (CleanupNode *)(pCVar3 + 0x10);
  *(Chunk **)pCVar3 = this->head_;
  *(ulonglong *)(pCVar3 + 8) = uVar4;
  this->next_ = pCVar1;
  this->limit_ = (CleanupNode *)((longlong)&pCVar1->elem + (uVar4 - 0x10 & 0xfffffffffffffff0));
  this->head_ = pCVar3;
  this->prefetch_ptr_ = (char *)pCVar1;
  pCVar1->elem = param_1;
  *(_func_void_void_ptr **)(pCVar3 + 0x18) = param_2;
  this->next_ = this->next_ + 1;
  return;
}

// AddFromExisting @ 14f91d030

/* private: void __cdecl google::protobuf::internal::cleanup::ChunkList::AddFromExisting(void *
   __ptr64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void __thiscall
google::protobuf::internal::cleanup::ChunkList::AddFromExisting
          (ChunkList *this,void *param_1,_func_void_void_ptr *param_2)

{
  CleanupNode *pCVar1;
  
  pCVar1 = this->next_;
  pCVar1->elem = param_1;
  pCVar1->destructor = (_func___cdecl_void_void_ptr *)param_2;
  this->next_ = this->next_ + 1;
  return;
}

// AddSerialArena @ 14f91d050

/* private: void __cdecl google::protobuf::internal::ThreadSafeArena::AddSerialArena(void *
   __ptr64,class google::protobuf::internal::SerialArena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::AddSerialArena
          (ThreadSafeArena *this,void *param_1,SerialArena *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong64 uVar8;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar9;
  
  aVar9 = this->head_;
  if (*(int *)((longlong)aVar9 + 8) != 0) {
    LOCK();
    puVar1 = (uint *)((longlong)aVar9 + 0xc);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar7 < *(uint *)((longlong)aVar9 + 8)) {
      lVar3 = (ulonglong)uVar7 * 8;
      *(void **)(lVar3 + 0x10 + (longlong)aVar9) = param_1;
      *(SerialArena **)
       ((ulonglong)*(uint *)((longlong)aVar9 + 8) * 8 + 0x10 + lVar3 + (longlong)aVar9) = param_2;
      return;
    }
    *(uint *)((longlong)aVar9 + 0xc) = *(uint *)((longlong)aVar9 + 8);
  }
  absl::lts_20240722::Mutex::Lock(&this->mutex_);
  aVar5 = this->head_;
  if (aVar5 != aVar9) {
    LOCK();
    puVar1 = (uint *)((longlong)aVar5 + 0xc);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar7 < *(uint *)((longlong)aVar5 + 8)) {
      lVar3 = (ulonglong)uVar7 * 8;
      *(void **)(lVar3 + 0x10 + (longlong)aVar5) = param_1;
      *(SerialArena **)
       ((ulonglong)*(uint *)((longlong)aVar5 + 8) * 8 + 0x10 + lVar3 + (longlong)aVar5) = param_2;
      goto LAB_14f91d1e3;
    }
    *(uint *)((longlong)aVar5 + 0xc) = *(uint *)((longlong)aVar5 + 8);
    aVar9 = aVar5;
  }
  uVar2 = ((ulonglong)*(uint *)((longlong)aVar9 + 8) * 0x10 + 0x10) * 4;
  iVar4 = 0x1000;
  if (uVar2 < 0x1000) {
    iVar4 = (int)uVar2;
  }
  uVar8 = (ulonglong)(iVar4 - 0x10U >> 4) * 0x10 + 0x10;
  aVar5 = (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)
          ::operator_new(uVar8);
  uVar7 = (int)uVar8 - 0x10U >> 4;
  *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar5 =
       (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)0x0;
  *(uint *)((longlong)aVar5 + 8) = uVar7;
  *(undefined4 *)((longlong)aVar5 + 0xc) = 1;
  *(void **)((longlong)aVar5 + 0x10) = param_1;
  if (uVar7 < 2) {
    *(SerialArena **)((ulonglong)uVar7 * 8 + 0x10 + (longlong)aVar5) = param_2;
  }
  else {
    memset((atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)
           ((longlong)aVar5 + 0x18),0,(ulonglong)(uVar7 - 1) << 3);
    puVar6 = (undefined8 *)((ulonglong)uVar7 * 8 + 0x10 + (longlong)aVar5);
    *puVar6 = param_2;
    memset(puVar6 + 1,0,(ulonglong)(uVar7 - 1) << 3);
  }
  *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar5 = aVar9;
  this->head_ = aVar5;
LAB_14f91d1e3:
  absl::lts_20240722::Mutex::Unlock(&this->mutex_);
  return;
}

// AddSpaceAllocated @ 14f91d210

/* private: void __cdecl google::protobuf::internal::SerialArena::AddSpaceAllocated(unsigned
   __int64) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::AddSpaceAllocated(SerialArena *this,__uint64 param_1)

{
  this->space_allocated_ = (atomic<unsigned___int64>)(param_1 + (longlong)this->space_allocated_);
  return;
}

// AddSpaceUsed @ 14f91d230

/* private: void __cdecl google::protobuf::internal::SerialArena::AddSpaceUsed(unsigned __int64)
   __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::AddSpaceUsed(SerialArena *this,__uint64 param_1)

{
  this->space_used_ = (atomic<unsigned___int64>)(param_1 + (longlong)this->space_used_);
  return;
}

// Align @ 14f91d250

/* unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::adl_barrier::Align(unsigned
   __int64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::container_internal::internal_layout::adl_barrier::Align
          (__uint64 param_1,__uint64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1);
}

// AlignUpTo @ 14f91d270

/* private: static unsigned __int64 __cdecl
   google::protobuf::internal::SerialArena::AlignUpTo(unsigned __int64,unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::SerialArena::AlignUpTo(__uint64 param_1,__uint64 param_2)

{
  if (param_2 < 9) {
    return param_1 + 7 & 0xfffffffffffffff8;
  }
  return (param_2 - 8) + param_1;
}

// AllocPolicy @ 14f91d290

/* private: struct google::protobuf::internal::AllocationPolicy const * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocPolicy(void)const __ptr64 */

AllocationPolicy * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocPolicy(ThreadSafeArena *this)

{
  return (AllocationPolicy *)((this->alloc_policy_).policy_ & 0xfffffffffffffff8);
}

// AllocSize @ 14f91d2a0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >,struct
   std::integer_sequence<unsigned __int64,1>,struct std::integer_sequence<unsigned
   __int64,0,1>,struct std::integer_sequence<unsigned __int64,0,1,2>,struct
   std::integer_sequence<unsigned __int64,0,1,2> >::AllocSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
::AllocSize(LayoutImpl<std::tuple<google::protobuf::internal::SerialArenaChunkHeader,std::atomic<void*___ptr64>,std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>,std::integer_sequence<unsigned___int64,1>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2>,std::integer_sequence<unsigned___int64,0,1,2>_>
            *this)

{
  return *(longlong *)this * 8 + 0x10 + *(longlong *)(this + 8) * 8;
}

// AllocSize @ 14f91d2c0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::AllocSize(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::AllocSize(__uint64 param_1)

{
  return param_1 * 0x10 + 0x10;
}

// Allocate @ 14f91d2e0

/* private: void * __ptr64 __cdecl google::protobuf::Arena::Allocate(unsigned __int64) __ptr64 */

void * __thiscall google::protobuf::Arena::Allocate(Arena *this,__uint64 param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == (this->impl_).tag_and_id_) {
    pvVar2 = internal::SerialArena::AllocateAligned<0>(*(SerialArena **)(lVar1 + 0x9d10),param_1);
    return pvVar2;
  }
  pvVar2 = internal::ThreadSafeArena::AllocateAlignedFallback<0>(&this->impl_,param_1);
  return pvVar2;
}

// AllocateAlignedFallback @ 14f91d370

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateAlignedFallback(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateAlignedFallback(SerialArena *this,__uint64 param_1)

{
  atomic<char_*> aVar1;
  atomic<char_*> aVar2;
  atomic<char_*> aVar3;
  atomic<char_*> aVar4;
  
  AllocateNewBlock(this,param_1);
  aVar1 = this->ptr_;
  aVar4 = (atomic<char_*>)((longlong)aVar1 + param_1);
  if ((ulonglong)aVar4 <= this->limit_) {
    this->ptr_ = aVar4;
    aVar2 = (atomic<char_*>)this->prefetch_ptr_;
    aVar3 = (atomic<char_*>)this->limit_;
    if (((longlong)aVar2 - (longlong)aVar4 < 0x401) && ((ulonglong)aVar2 < (ulonglong)aVar3)) {
      if ((ulonglong)aVar4 < (ulonglong)aVar2) {
        aVar4 = aVar2;
      }
      aVar2 = aVar4;
      if ((longlong)aVar4 + 0x400U < (ulonglong)aVar3) {
        aVar3 = (atomic<char_*>)((longlong)aVar4 + 0x400U);
      }
      for (; (ulonglong)aVar2 < (ulonglong)aVar3; aVar2 = (atomic<char_*>)((longlong)aVar2 + 0x40))
      {
      }
    }
    this->prefetch_ptr_ = (char *)aVar2;
    return (void *)aVar1;
  }
  return (void *)0x0;
}

// AllocateAlignedWithCleanup @ 14f91d400

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateAlignedWithCleanup(unsigned
   __int64,unsigned __int64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::Arena::AllocateAlignedWithCleanup
          (Arena *this,__uint64 param_1,__uint64 param_2,_func_void_void_ptr *param_3)

{
  CleanupNode **ppCVar1;
  longlong lVar2;
  SerialArena *this_00;
  CleanupNode *pCVar3;
  atomic<char_*> aVar4;
  ulonglong uVar5;
  CleanupNode *pCVar6;
  atomic<char_*> aVar7;
  void *pvVar8;
  CleanupNode *pCVar9;
  atomic<char_*> aVar10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar2 + 0x9d08) == (this->impl_).tag_and_id_) {
    this_00 = *(SerialArena **)(lVar2 + 0x9d10);
    uVar5 = param_1 + 7 & 0xfffffffffffffff8;
    pvVar8 = (void *)((longlong)this_00->ptr_ + -1 + param_2 & -param_2);
    aVar10 = (atomic<char_*>)((longlong)pvVar8 + uVar5);
    if (this_00->limit_ < (ulonglong)aVar10) {
      pvVar8 = internal::SerialArena::AllocateAlignedWithCleanupFallback
                         (this_00,uVar5,param_2,param_3);
    }
    else {
      this_00->ptr_ = aVar10;
      pCVar3 = (this_00->cleanup_list_).next_;
      if (pCVar3 < (this_00->cleanup_list_).limit_) {
        pCVar3->elem = pvVar8;
        pCVar3->destructor = (_func___cdecl_void_void_ptr *)param_3;
        ppCVar1 = &(this_00->cleanup_list_).next_;
        *ppCVar1 = *ppCVar1 + 1;
      }
      else {
        internal::cleanup::ChunkList::AddFallback(&this_00->cleanup_list_,pvVar8,param_3,this_00);
      }
      pCVar3 = (CleanupNode *)(this_00->cleanup_list_).prefetch_ptr_;
      pCVar9 = (this_00->cleanup_list_).next_;
      pCVar6 = (this_00->cleanup_list_).limit_;
      if (((longlong)pCVar3 - (longlong)pCVar9 < 0x181) && (pCVar3 < pCVar6)) {
        if (pCVar9 < pCVar3) {
          pCVar9 = pCVar3;
        }
        pCVar3 = pCVar9;
        if (pCVar9 + 0x18 < pCVar6) {
          pCVar6 = pCVar9 + 0x18;
        }
        for (; pCVar3 < pCVar6; pCVar3 = pCVar3 + 4) {
        }
      }
      aVar7 = (atomic<char_*>)this_00->limit_;
      (this_00->cleanup_list_).prefetch_ptr_ = (char *)pCVar3;
      aVar4 = (atomic<char_*>)this_00->prefetch_ptr_;
      if (((longlong)aVar4 - (longlong)aVar10 < 0x401) && ((ulonglong)aVar4 < (ulonglong)aVar7)) {
        if ((ulonglong)aVar10 < (ulonglong)aVar4) {
          aVar10 = aVar4;
        }
        aVar4 = aVar10;
        if ((longlong)aVar10 + 0x400U < (ulonglong)aVar7) {
          aVar7 = (atomic<char_*>)((longlong)aVar10 + 0x400U);
        }
        for (; (ulonglong)aVar4 < (ulonglong)aVar7; aVar4 = (atomic<char_*>)((longlong)aVar4 + 0x40)
            ) {
        }
      }
      this_00->prefetch_ptr_ = (char *)aVar4;
    }
  }
  else {
    pvVar8 = internal::ThreadSafeArena::AllocateAlignedWithCleanupFallback
                       (&this->impl_,param_1,param_2,param_3);
  }
  return pvVar8;
}

// AllocateAlignedWithCleanup @ 14f91d410

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateAlignedWithCleanup(unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateAlignedWithCleanup
          (SerialArena *this,__uint64 param_1,__uint64 param_2,_func_void_void_ptr *param_3)

{
  CleanupNode **ppCVar1;
  atomic<char_*> aVar2;
  CleanupNode *pCVar3;
  ulonglong uVar4;
  CleanupNode *pCVar5;
  atomic<char_*> aVar6;
  void *pvVar7;
  atomic<char_*> aVar8;
  CleanupNode *pCVar9;
  
  uVar4 = param_1 + 7 & 0xfffffffffffffff8;
  pvVar7 = (void *)((longlong)this->ptr_ + -1 + param_2 & -param_2);
  aVar8 = (atomic<char_*>)((longlong)pvVar7 + uVar4);
  if (this->limit_ < (ulonglong)aVar8) {
    pvVar7 = AllocateAlignedWithCleanupFallback(this,uVar4,param_2,param_3);
    return pvVar7;
  }
  this->ptr_ = aVar8;
  pCVar3 = (this->cleanup_list_).next_;
  if (pCVar3 < (this->cleanup_list_).limit_) {
    pCVar3->elem = pvVar7;
    pCVar3->destructor = (_func___cdecl_void_void_ptr *)param_3;
    ppCVar1 = &(this->cleanup_list_).next_;
    *ppCVar1 = *ppCVar1 + 1;
  }
  else {
    cleanup::ChunkList::AddFallback(&this->cleanup_list_,pvVar7,param_3,this);
  }
  pCVar3 = (CleanupNode *)(this->cleanup_list_).prefetch_ptr_;
  pCVar9 = (this->cleanup_list_).next_;
  pCVar5 = (this->cleanup_list_).limit_;
  if (((longlong)pCVar3 - (longlong)pCVar9 < 0x181) && (pCVar3 < pCVar5)) {
    if (pCVar9 < pCVar3) {
      pCVar9 = pCVar3;
    }
    pCVar3 = pCVar9;
    if (pCVar9 + 0x18 < pCVar5) {
      pCVar5 = pCVar9 + 0x18;
    }
    for (; pCVar3 < pCVar5; pCVar3 = pCVar3 + 4) {
    }
  }
  aVar2 = (atomic<char_*>)this->prefetch_ptr_;
  aVar6 = (atomic<char_*>)this->limit_;
  (this->cleanup_list_).prefetch_ptr_ = (char *)pCVar3;
  if (((longlong)aVar2 - (longlong)aVar8 < 0x401) && ((ulonglong)aVar2 < (ulonglong)aVar6)) {
    if ((ulonglong)aVar8 < (ulonglong)aVar2) {
      aVar8 = aVar2;
    }
    aVar2 = aVar8;
    if ((longlong)aVar8 + 0x400U < (ulonglong)aVar6) {
      aVar6 = (atomic<char_*>)((longlong)aVar8 + 0x400U);
    }
    for (; (ulonglong)aVar2 < (ulonglong)aVar6; aVar2 = (atomic<char_*>)((longlong)aVar2 + 0x40)) {
    }
  }
  this->prefetch_ptr_ = (char *)aVar2;
  return pvVar7;
}

// AllocateAlignedWithCleanup @ 14f91d540

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAlignedWithCleanup(unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAlignedWithCleanup
          (ThreadSafeArena *this,__uint64 param_1,__uint64 param_2,_func_void_void_ptr *param_3)

{
  CleanupNode **ppCVar1;
  longlong lVar2;
  SerialArena *this_00;
  CleanupNode *pCVar3;
  atomic<char_*> aVar4;
  ulonglong uVar5;
  CleanupNode *pCVar6;
  atomic<char_*> aVar7;
  void *pvVar8;
  CleanupNode *pCVar9;
  atomic<char_*> aVar10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar2 + 0x9d08) == this->tag_and_id_) {
    this_00 = *(SerialArena **)(lVar2 + 0x9d10);
    uVar5 = param_1 + 7 & 0xfffffffffffffff8;
    pvVar8 = (void *)((longlong)this_00->ptr_ + -1 + param_2 & -param_2);
    aVar10 = (atomic<char_*>)((longlong)pvVar8 + uVar5);
    if (this_00->limit_ < (ulonglong)aVar10) {
      pvVar8 = SerialArena::AllocateAlignedWithCleanupFallback(this_00,uVar5,param_2,param_3);
    }
    else {
      this_00->ptr_ = aVar10;
      pCVar3 = (this_00->cleanup_list_).next_;
      if (pCVar3 < (this_00->cleanup_list_).limit_) {
        pCVar3->elem = pvVar8;
        pCVar3->destructor = (_func___cdecl_void_void_ptr *)param_3;
        ppCVar1 = &(this_00->cleanup_list_).next_;
        *ppCVar1 = *ppCVar1 + 1;
      }
      else {
        cleanup::ChunkList::AddFallback(&this_00->cleanup_list_,pvVar8,param_3,this_00);
      }
      pCVar3 = (CleanupNode *)(this_00->cleanup_list_).prefetch_ptr_;
      pCVar9 = (this_00->cleanup_list_).next_;
      pCVar6 = (this_00->cleanup_list_).limit_;
      if (((longlong)pCVar3 - (longlong)pCVar9 < 0x181) && (pCVar3 < pCVar6)) {
        if (pCVar9 < pCVar3) {
          pCVar9 = pCVar3;
        }
        pCVar3 = pCVar9;
        if (pCVar9 + 0x18 < pCVar6) {
          pCVar6 = pCVar9 + 0x18;
        }
        for (; pCVar3 < pCVar6; pCVar3 = pCVar3 + 4) {
        }
      }
      aVar7 = (atomic<char_*>)this_00->limit_;
      (this_00->cleanup_list_).prefetch_ptr_ = (char *)pCVar3;
      aVar4 = (atomic<char_*>)this_00->prefetch_ptr_;
      if (((longlong)aVar4 - (longlong)aVar10 < 0x401) && ((ulonglong)aVar4 < (ulonglong)aVar7)) {
        if ((ulonglong)aVar10 < (ulonglong)aVar4) {
          aVar10 = aVar4;
        }
        aVar4 = aVar10;
        if ((longlong)aVar10 + 0x400U < (ulonglong)aVar7) {
          aVar7 = (atomic<char_*>)((longlong)aVar10 + 0x400U);
        }
        for (; (ulonglong)aVar4 < (ulonglong)aVar7; aVar4 = (atomic<char_*>)((longlong)aVar4 + 0x40)
            ) {
        }
      }
      this_00->prefetch_ptr_ = (char *)aVar4;
    }
  }
  else {
    pvVar8 = AllocateAlignedWithCleanupFallback(this,param_1,param_2,param_3);
  }
  return pvVar8;
}

// AllocateAlignedWithCleanupFallback @ 14f91d6e0

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateAlignedWithCleanupFallback(unsigned
   __int64,unsigned __int64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateAlignedWithCleanupFallback
          (SerialArena *this,__uint64 param_1,__uint64 param_2,_func_void_void_ptr *param_3)

{
  CleanupNode **ppCVar1;
  CleanupNode *pCVar2;
  char *pcVar3;
  __uint64 _Var4;
  CleanupNode *pCVar5;
  char *pcVar6;
  ulonglong uVar7;
  CleanupNode *pCVar8;
  void *pvVar9;
  char *pcVar10;
  
  if (param_2 < 9) {
    _Var4 = param_1 + 7 & 0xfffffffffffffff8;
  }
  else {
    _Var4 = (param_1 - 8) + param_2;
  }
  AllocateNewBlock(this,_Var4);
  uVar7 = param_1 + 7 & 0xfffffffffffffff8;
  pvVar9 = (void *)((longlong)this->ptr_ + -1 + param_2 & -param_2);
  pcVar10 = (char *)((longlong)pvVar9 + uVar7);
  if (this->limit_ < pcVar10) {
    pvVar9 = AllocateAlignedWithCleanupFallback(this,uVar7,param_2,param_3);
  }
  else {
    set_ptr(this,pcVar10);
    pCVar2 = (this->cleanup_list_).next_;
    if (pCVar2 < (this->cleanup_list_).limit_) {
      pCVar2->elem = pvVar9;
      pCVar2->destructor = (_func___cdecl_void_void_ptr *)param_3;
      ppCVar1 = &(this->cleanup_list_).next_;
      *ppCVar1 = *ppCVar1 + 1;
    }
    else {
      cleanup::ChunkList::AddFallback(&this->cleanup_list_,pvVar9,param_3,this);
    }
    pCVar2 = (CleanupNode *)(this->cleanup_list_).prefetch_ptr_;
    pCVar8 = (this->cleanup_list_).next_;
    pCVar5 = (this->cleanup_list_).limit_;
    if (((longlong)pCVar2 - (longlong)pCVar8 < 0x181) && (pCVar2 < pCVar5)) {
      if (pCVar8 < pCVar2) {
        pCVar8 = pCVar2;
      }
      pCVar2 = pCVar8;
      if (pCVar8 + 0x18 < pCVar5) {
        pCVar5 = pCVar8 + 0x18;
      }
      for (; pCVar2 < pCVar5; pCVar2 = pCVar2 + 4) {
      }
    }
    pcVar6 = this->limit_;
    (this->cleanup_list_).prefetch_ptr_ = (char *)pCVar2;
    pcVar3 = this->prefetch_ptr_;
    if (((longlong)pcVar3 - (longlong)pcVar10 < 0x401) && (pcVar3 < pcVar6)) {
      if (pcVar10 < pcVar3) {
        pcVar10 = pcVar3;
      }
      pcVar3 = pcVar10;
      if (pcVar10 + 0x400 < pcVar6) {
        pcVar6 = pcVar10 + 0x400;
      }
      for (; pcVar3 < pcVar6; pcVar3 = pcVar3 + 0x40) {
      }
    }
    this->prefetch_ptr_ = pcVar3;
  }
  return pvVar9;
}

// AllocateAlignedWithCleanupFallback @ 14f91d840

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateAlignedWithCleanupFallback(unsigned
   __int64,unsigned __int64,void (__cdecl*)(void * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateAlignedWithCleanupFallback
          (ThreadSafeArena *this,__uint64 param_1,__uint64 param_2,_func_void_void_ptr *param_3)

{
  CleanupNode **ppCVar1;
  SerialArena *this_00;
  atomic<char_*> aVar2;
  CleanupNode *pCVar3;
  ulonglong uVar4;
  CleanupNode *pCVar5;
  atomic<char_*> aVar6;
  atomic<char_*> aVar7;
  CleanupNode *pCVar8;
  void *pvVar9;
  
  this_00 = GetSerialArenaFallback(this,param_1 + 0x10);
  uVar4 = param_1 + 7 & 0xfffffffffffffff8;
  pvVar9 = (void *)((param_2 - 1) + (longlong)this_00->ptr_ & -param_2);
  aVar7 = (atomic<char_*>)((longlong)pvVar9 + uVar4);
  if (this_00->limit_ < (ulonglong)aVar7) {
    pvVar9 = SerialArena::AllocateAlignedWithCleanupFallback(this_00,uVar4,param_2,param_3);
  }
  else {
    this_00->ptr_ = aVar7;
    pCVar3 = (this_00->cleanup_list_).next_;
    if (pCVar3 < (this_00->cleanup_list_).limit_) {
      pCVar3->elem = pvVar9;
      pCVar3->destructor = (_func___cdecl_void_void_ptr *)param_3;
      ppCVar1 = &(this_00->cleanup_list_).next_;
      *ppCVar1 = *ppCVar1 + 1;
    }
    else {
      cleanup::ChunkList::AddFallback(&this_00->cleanup_list_,pvVar9,param_3,this_00);
    }
    pCVar3 = (CleanupNode *)(this_00->cleanup_list_).prefetch_ptr_;
    pCVar8 = (this_00->cleanup_list_).next_;
    pCVar5 = (this_00->cleanup_list_).limit_;
    if (((longlong)pCVar3 - (longlong)pCVar8 < 0x181) && (pCVar3 < pCVar5)) {
      if (pCVar8 < pCVar3) {
        pCVar8 = pCVar3;
      }
      pCVar3 = pCVar8;
      if (pCVar8 + 0x18 < pCVar5) {
        pCVar5 = pCVar8 + 0x18;
      }
      for (; pCVar3 < pCVar5; pCVar3 = pCVar3 + 4) {
      }
    }
    aVar2 = (atomic<char_*>)this_00->prefetch_ptr_;
    aVar6 = (atomic<char_*>)this_00->limit_;
    (this_00->cleanup_list_).prefetch_ptr_ = (char *)pCVar3;
    if (((longlong)aVar2 - (longlong)aVar7 < 0x401) && ((ulonglong)aVar2 < (ulonglong)aVar6)) {
      if ((ulonglong)aVar7 < (ulonglong)aVar2) {
        aVar7 = aVar2;
      }
      aVar2 = aVar7;
      if ((longlong)aVar7 + 0x400U < (ulonglong)aVar6) {
        aVar6 = (atomic<char_*>)((longlong)aVar7 + 0x400U);
      }
      for (; (ulonglong)aVar2 < (ulonglong)aVar6; aVar2 = (atomic<char_*>)((longlong)aVar2 + 0x40))
      {
      }
    }
    this_00->prefetch_ptr_ = (char *)aVar2;
  }
  return pvVar9;
}

// AllocateAtLeast @ 14f91d980

/* struct google::protobuf::internal::SizedPtr __cdecl
   google::protobuf::internal::AllocateAtLeast(unsigned __int64) */

SizedPtr * __cdecl
google::protobuf::internal::AllocateAtLeast(SizedPtr *__return_storage_ptr__,__uint64 param_1)

{
  void *pvVar1;
  
  pvVar1 = ::operator_new(param_1);
  __return_storage_ptr__->p = pvVar1;
  __return_storage_ptr__->n = param_1;
  return __return_storage_ptr__;
}

// FUN_14f91d9c0 @ 14f91d9c0

undefined8 *
FUN_14f91d9c0(undefined8 *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  code *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  pcVar5 = (code *)0x0;
  uVar4 = 0x100;
  uVar1 = 0x8000;
  if (param_2 != (ulonglong *)0x0) {
    pcVar5 = (code *)param_2[2];
    uVar1 = param_2[1];
    uVar4 = *param_2;
  }
  if ((param_3 != 0) && (uVar4 = param_3 * 2, uVar1 < (ulonglong)(param_3 * 2))) {
    uVar4 = uVar1;
  }
  if (0xffffffffffffffef < param_4) {
    pbVar2 = absl::lts_20240722::log_internal::MakeCheckOpString<unsigned___int64,unsigned___int64>
                       (param_4,0xffffffffffffffef,
                        "min_bytes <= std::numeric_limits<size_t>::max() - SerialArena::kBlockHeaderSize"
                       );
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\arena.cc"
                 ,0x57,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  if (uVar4 < param_4 + 0x10) {
    uVar4 = param_4 + 0x10;
  }
  if (pcVar5 == (code *)0x0) {
    pvVar3 = operator_new(uVar4);
  }
  else {
    pvVar3 = (void *)(*pcVar5)();
  }
  param_1[1] = uVar4;
  *param_1 = pvVar3;
  return param_1;
}

// FUN_14f91dac0 @ 14f91dac0

undefined8 * FUN_14f91dac0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = param_3 * 2;
    if (0x1000 < uVar2) {
      uVar2 = 0x1000;
    }
  }
  if ((param_2 == 0) || (*(code **)(param_2 + 0x10) == (code *)0x0)) {
    pvVar1 = operator_new(uVar2);
  }
  else {
    pvVar1 = (void *)(**(code **)(param_2 + 0x10))();
  }
  param_1[1] = uVar2;
  *param_1 = pvVar1;
  return param_1;
}

// AllocateForArray @ 14f91db20

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateForArray(unsigned __int64)
   __ptr64 */

void * __thiscall google::protobuf::Arena::AllocateForArray(Arena *this,__uint64 param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == (this->impl_).tag_and_id_) {
    pvVar2 = internal::SerialArena::AllocateAligned<1>(*(SerialArena **)(lVar1 + 0x9d10),param_1);
    return pvVar2;
  }
  pvVar2 = internal::ThreadSafeArena::AllocateAlignedFallback<1>(&this->impl_,param_1);
  return pvVar2;
}

// AllocateFromStringBlock @ 14f91dbb0

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateFromStringBlock(void) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateFromStringBlock(SerialArena *this)

{
  void *pvVar1;
  atomic<unsigned___int64> aVar2;
  
  if (this->string_block_unused_ != (atomic<unsigned___int64>)0x0) {
    aVar2 = (atomic<unsigned___int64>)((longlong)this->string_block_unused_ + -0x20);
    this->string_block_unused_ = aVar2;
    return (void *)((longlong)this->string_block_ + 0x10 + (longlong)aVar2);
  }
  pvVar1 = AllocateFromStringBlockFallback(this);
  return pvVar1;
}

// AllocateFromStringBlock @ 14f91dbe0

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(void) __ptr64 */

void * __thiscall
google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(ThreadSafeArena *this)

{
  SerialArena *this_00;
  void *pvVar1;
  atomic<unsigned___int64> aVar2;
  
  this_00 = GetSerialArena(this);
  if (this_00->string_block_unused_ != (atomic<unsigned___int64>)0x0) {
    aVar2 = (atomic<unsigned___int64>)((longlong)this_00->string_block_unused_ + -0x20);
    this_00->string_block_unused_ = aVar2;
    return (void *)((longlong)this_00->string_block_ + 0x10 + (longlong)aVar2);
  }
  pvVar1 = SerialArena::AllocateFromStringBlockFallback(this_00);
  return pvVar1;
}

// AllocateFromStringBlockFallback @ 14f91dc20

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::AllocateFromStringBlockFallback(void) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::AllocateFromStringBlockFallback(SerialArena *this)

{
  atomic<google::protobuf::internal::StringBlock_*> aVar1;
  atomic<char_*> aVar2;
  atomic<char_*> aVar3;
  short sVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  atomic<char_*> aVar8;
  atomic<char_*> aVar9;
  
  aVar1 = this->string_block_;
  sVar4 = 0x100;
  if (aVar1 == (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
    uVar5 = 0x100;
  }
  else {
    this->space_used_ =
         (atomic<unsigned___int64>)
         ((longlong)this->space_used_ + ((ulonglong)*(ushort *)((longlong)aVar1 + 8) - 0x10));
    uVar5 = (ulonglong)*(ushort *)((longlong)aVar1 + 10);
  }
  aVar2 = this->ptr_;
  aVar9 = (atomic<char_*>)((longlong)aVar2 + uVar5);
  if (this->limit_ < (ulonglong)aVar9) {
    uVar6 = 0x100;
    if (aVar1 != (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
      sVar4 = *(short *)((longlong)aVar1 + 10);
      uVar6 = sVar4 * 2;
      if (0x2000 < uVar6) {
        uVar6 = 0x2000;
      }
    }
    uVar7 = sVar4 - (sVar4 - 0x10U & 0x1f);
    aVar2 = (atomic<char_*>)::operator_new((ulonglong)uVar7);
    *(ushort *)((longlong)aVar2 + 10) = uVar6;
    *(atomic<google::protobuf::internal::StringBlock_*> *)aVar2 = aVar1;
    *(ushort *)((longlong)aVar2 + 8) = uVar7;
    *(undefined1 *)((longlong)aVar2 + 0xc) = 1;
    this->space_allocated_ =
         (atomic<unsigned___int64>)((longlong)this->space_allocated_ + (ulonglong)uVar7);
  }
  else {
    this->ptr_ = aVar9;
    aVar3 = (atomic<char_*>)this->prefetch_ptr_;
    aVar8 = (atomic<char_*>)this->limit_;
    if (((longlong)aVar3 - (longlong)aVar9 < 0x401) && ((ulonglong)aVar3 < (ulonglong)aVar8)) {
      if ((ulonglong)aVar9 < (ulonglong)aVar3) {
        aVar9 = aVar3;
      }
      aVar3 = aVar9;
      if ((longlong)aVar9 + 0x400U < (ulonglong)aVar8) {
        aVar8 = (atomic<char_*>)((longlong)aVar9 + 0x400U);
      }
      for (; (ulonglong)aVar3 < (ulonglong)aVar8; aVar3 = (atomic<char_*>)((longlong)aVar3 + 0x40))
      {
      }
    }
    this->prefetch_ptr_ = (char *)aVar3;
    sVar4 = (short)uVar5;
    this->space_used_ = (atomic<unsigned___int64>)((longlong)this->space_used_ - uVar5);
    if (aVar1 == (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
      uVar6 = 0x100;
    }
    else {
      uVar6 = sVar4 * 2;
      if (0x2000 < (ushort)(sVar4 * 2)) {
        uVar6 = 0x2000;
      }
    }
    *(atomic<google::protobuf::internal::StringBlock_*> *)aVar2 = aVar1;
    *(ushort *)((longlong)aVar2 + 10) = uVar6;
    *(undefined1 *)((longlong)aVar2 + 0xc) = 0;
    *(ushort *)((longlong)aVar2 + 8) = sVar4 - (sVar4 - 0x10U & 0x1f);
  }
  this->string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)aVar2;
  uVar6 = *(ushort *)((longlong)aVar2 + 8);
  this->string_block_unused_ = (atomic<unsigned___int64>)((ulonglong)uVar6 - 0x30);
  return (void *)(((ulonglong)uVar6 - 0x20) + (longlong)aVar2);
}

// FUN_14f91dd90 @ 14f91dd90

undefined8 * FUN_14f91dd90(undefined8 *param_1,longlong param_2,ulong64 param_3)

{
  void *pvVar1;
  
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    pvVar1 = operator_new(param_3);
  }
  else {
    pvVar1 = (void *)(**(code **)(param_2 + 0x10))();
  }
  *param_1 = pvVar1;
  param_1[1] = param_3;
  return param_1;
}

// AllocateNewBlock @ 14f91ddd0

/* private: void __cdecl google::protobuf::internal::SerialArena::AllocateNewBlock(unsigned __int64)
   __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::AllocateNewBlock(SerialArena *this,__uint64 param_1)

{
  atomic<google::protobuf::internal::ArenaBlock_*> aVar1;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar2;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar3;
  atomic<google::protobuf::internal::ArenaBlock_*> *paVar4;
  undefined1 local_18 [16];
  
  aVar1 = this->head_;
  if (*(longlong *)((longlong)aVar1 + 8) != 0) {
    this->space_used_ =
         (atomic<unsigned___int64>)
         ((longlong)this->space_used_ + ((longlong)this->ptr_ - (longlong)aVar1) + -0x10);
  }
  paVar4 = (atomic<google::protobuf::internal::ArenaBlock_*> *)
           FUN_14f91d9c0(local_18,(this->parent_->alloc_policy_).policy_ & 0xfffffffffffffff8,
                         *(undefined8 *)((longlong)aVar1 + 8),param_1);
  aVar2 = *paVar4;
  aVar3 = paVar4[1];
  this->space_allocated_ =
       (atomic<unsigned___int64>)((longlong)this->space_allocated_ + (longlong)aVar3);
  *(atomic<google::protobuf::internal::ArenaBlock_*> *)((longlong)aVar2 + 8) = aVar3;
  *(atomic<google::protobuf::internal::ArenaBlock_*> *)aVar2 = aVar1;
  this->ptr_ = (atomic<char_*>)((longlong)aVar2 + 0x10);
  this->limit_ = (char *)(((ulonglong)aVar3 & 0xfffffffffffffff8) + (longlong)aVar2);
  this->prefetch_ptr_ = (char *)((longlong)aVar2 + 0x10);
  this->head_ = aVar2;
  return;
}

// ArenaAlignAs @ 14f91dea0

/* struct google::protobuf::internal::ArenaAlign __cdecl
   google::protobuf::internal::ArenaAlignAs(unsigned __int64) */

ArenaAlign __cdecl google::protobuf::internal::ArenaAlignAs(__uint64 param_1)

{
  return (ArenaAlign)param_1;
}

// AtOffset @ 14f91deb0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::StringBlock::AtOffset(unsigned __int64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::StringBlock::AtOffset(StringBlock *this,__uint64 param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((longlong)&this[1].next_ + param_1);
}

// CacheSerialArena @ 14f91dec0

/* private: void __cdecl google::protobuf::internal::ThreadSafeArena::CacheSerialArena(class
   google::protobuf::internal::SerialArena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::CacheSerialArena
          (ThreadSafeArena *this,SerialArena *param_1)

{
  longlong lVar1;
  ulong64 uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(SerialArena **)(lVar1 + 0x9d10) = param_1;
  uVar2 = this->tag_and_id_;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(ulong64 *)(lVar1 + 0x9d08) = uVar2;
  return;
}

// Capacity @ 14f91df50

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::cleanup::ChunkList::Chunk::Capacity(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::cleanup::ChunkList::Chunk::Capacity(Chunk *this)

{
  return *(longlong *)(this + 8) - 0x10U >> 4;
}

// Capacity @ 14f91df70

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::cleanup::ChunkList::Chunk::Capacity(unsigned __int64) */

__uint64 __cdecl google::protobuf::internal::cleanup::ChunkList::Chunk::Capacity(__uint64 param_1)

{
  return param_1 - 0x10 >> 4;
}

// Ceil @ 14f91df80

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::ArenaAlignDefault::Ceil(unsigned __int64) */

__uint64 __cdecl google::protobuf::internal::ArenaAlignDefault::Ceil(__uint64 param_1)

{
  return param_1 + 7 & 0xfffffffffffffff8;
}

// Cleanup @ 14f91df90

/* public: void __cdecl google::protobuf::internal::cleanup::ChunkList::Cleanup(class
   google::protobuf::internal::SerialArena const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::cleanup::ChunkList::Cleanup(ChunkList *this,SerialArena *param_1)

{
  CleanupNode *pCVar1;
  Chunk *pCVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  CleanupNode *pCVar6;
  CleanupNode *pCVar7;
  Chunk *pCVar8;
  
  if (this->head_ == (Chunk *)0x0) {
    return;
  }
  uVar4 = (param_1->parent_->alloc_policy_).policy_ & 0xfffffffffffffff8;
  if (uVar4 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    pcVar5 = *(code **)(uVar4 + 0x18);
  }
  pCVar7 = this->next_ + -1;
  pCVar8 = this->head_;
LAB_14f91dfe0:
  pCVar1 = (CleanupNode *)(pCVar8 + 0x10);
  iVar3 = 0;
  for (pCVar6 = pCVar7; pCVar1 <= pCVar6; pCVar6 = pCVar6 + -1) {
    if (7 < iVar3) goto LAB_14f91e008;
    iVar3 = iVar3 + 1;
  }
  goto joined_r0x00014f91e02a;
LAB_14f91e008:
  do {
    (*pCVar7->destructor)(pCVar7->elem);
    pCVar7 = pCVar7 + -1;
    pCVar6 = pCVar6 + -1;
  } while (pCVar1 <= pCVar6);
joined_r0x00014f91e02a:
  for (; pCVar1 <= pCVar7; pCVar7 = pCVar7 + -1) {
    (*pCVar7->destructor)(pCVar7->elem);
  }
  pCVar2 = *(Chunk **)pCVar8;
  if (pcVar5 == (code *)0x0) {
    ::operator_delete(pCVar8,*(ulong64 *)(pCVar8 + 8));
  }
  else {
    (*pcVar5)();
  }
  if (pCVar2 == (Chunk *)0x0) {
    return;
  }
  pCVar7 = (CleanupNode *)(pCVar2 + (*(longlong *)(pCVar2 + 8) - 0x10U & 0xfffffffffffffff0));
  pCVar8 = pCVar2;
  goto LAB_14f91dfe0;
}

// CleanupList @ 14f91e0a0

/* public: void __cdecl google::protobuf::internal::SerialArena::CleanupList(void) __ptr64 */

void __thiscall google::protobuf::internal::SerialArena::CleanupList(SerialArena *this)

{
  CleanupNode *pCVar1;
  Chunk *pCVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  CleanupNode *pCVar6;
  CleanupNode *pCVar7;
  Chunk *pCVar8;
  
  pCVar8 = (this->cleanup_list_).head_;
  if (pCVar8 == (Chunk *)0x0) {
    return;
  }
  uVar4 = (this->parent_->alloc_policy_).policy_ & 0xfffffffffffffff8;
  if (uVar4 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    pcVar5 = *(code **)(uVar4 + 0x18);
  }
  pCVar7 = (this->cleanup_list_).next_ + -1;
LAB_14f91e0f0:
  pCVar1 = (CleanupNode *)(pCVar8 + 0x10);
  iVar3 = 0;
  for (pCVar6 = pCVar7; pCVar1 <= pCVar6; pCVar6 = pCVar6 + -1) {
    if (7 < iVar3) goto LAB_14f91e118;
    iVar3 = iVar3 + 1;
  }
  goto joined_r0x00014f91e13a;
LAB_14f91e118:
  do {
    (*pCVar7->destructor)(pCVar7->elem);
    pCVar7 = pCVar7 + -1;
    pCVar6 = pCVar6 + -1;
  } while (pCVar1 <= pCVar6);
joined_r0x00014f91e13a:
  for (; pCVar1 <= pCVar7; pCVar7 = pCVar7 + -1) {
    (*pCVar7->destructor)(pCVar7->elem);
  }
  pCVar2 = *(Chunk **)pCVar8;
  if (pcVar5 == (code *)0x0) {
    ::operator_delete(pCVar8,*(ulong64 *)(pCVar8 + 8));
  }
  else {
    (*pcVar5)();
  }
  if (pCVar2 == (Chunk *)0x0) {
    return;
  }
  pCVar7 = (CleanupNode *)(pCVar2 + (*(longlong *)(pCVar2 + 8) - 0x10U & 0xfffffffffffffff0));
  pCVar8 = pCVar2;
  goto LAB_14f91e0f0;
}

// CleanupList @ 14f91e1b0

/* private: void __cdecl google::protobuf::internal::ThreadSafeArena::CleanupList(void) __ptr64 */

void __thiscall google::protobuf::internal::ThreadSafeArena::CleanupList(ThreadSafeArena *this)

{
  undefined1 local_res8;
  
  FUN_14f91b1d0(this,local_res8);
  SerialArena::CleanupList(&this->first_arena_);
  return;
}

// Delete @ 14f91e1e0

/* public: static unsigned __int64 __cdecl google::protobuf::internal::StringBlock::Delete(class
   google::protobuf::internal::StringBlock * __ptr64) */

__uint64 __cdecl google::protobuf::internal::StringBlock::Delete(StringBlock *param_1)

{
  ushort uVar1;
  
  if (param_1->heap_allocated_ == false) {
    return 0;
  }
  uVar1 = param_1->allocated_size_;
  ::operator_delete(param_1,(ulonglong)uVar1);
  return (ulonglong)uVar1;
}

// Destroy @ 14f91e220

/* public: void __cdecl google::protobuf::internal::cleanup::CleanupNode::Destroy(void) __ptr64 */

void __thiscall google::protobuf::internal::cleanup::CleanupNode::Destroy(CleanupNode *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f91e226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->destructor)(this->elem);
  return;
}

// Dtor @ 14f91e230

/* private: void __cdecl absl::lts_20240722::Mutex::Dtor(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Dtor(Mutex *this)

{
  return;
}

// Emplace @ 14f91e240

/* public: static class google::protobuf::internal::StringBlock * __ptr64 __cdecl
   google::protobuf::internal::StringBlock::Emplace(void * __ptr64,unsigned __int64,class
   google::protobuf::internal::StringBlock * __ptr64) */

StringBlock * __cdecl
google::protobuf::internal::StringBlock::Emplace
          (void *param_1,__uint64 param_2,StringBlock *param_3)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = (short)param_2;
  if (param_3 == (StringBlock *)0x0) {
    uVar2 = 0x100;
  }
  else {
    uVar2 = sVar1 * 2;
    if (0x2000 < (ushort)(sVar1 * 2)) {
      uVar2 = 0x2000;
    }
  }
  *(StringBlock **)param_1 = param_3;
  *(ushort *)((longlong)param_1 + 10) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(ushort *)((longlong)param_1 + 8) = sVar1 - (sVar1 - 0x10U & 0x1f);
  return param_1;
}

// First @ 14f91e290

/* public: struct google::protobuf::internal::cleanup::CleanupNode * __ptr64 __cdecl
   google::protobuf::internal::cleanup::ChunkList::Chunk::First(void) __ptr64 */

CleanupNode * __thiscall google::protobuf::internal::cleanup::ChunkList::Chunk::First(Chunk *this)

{
  return (CleanupNode *)(this + 0x10);
}

// FirstBlock @ 14f91e2a0

/* private: struct google::protobuf::internal::ArenaBlock * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::FirstBlock(void * __ptr64,unsigned __int64) __ptr64
    */

ArenaBlock * __thiscall
google::protobuf::internal::ThreadSafeArena::FirstBlock
          (ThreadSafeArena *this,void *param_1,__uint64 param_2)

{
  if ((param_1 != (void *)0x0) && (0x10 < param_2)) {
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ | 1;
    *(undefined8 *)param_1 = 0;
    *(__uint64 *)((longlong)param_1 + 8) = param_2;
    return param_1;
  }
  return (ArenaBlock *)&DAT_1535cedd0;
}

// FirstBlock @ 14f91e2d0

/* private: struct google::protobuf::internal::ArenaBlock * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::FirstBlock(void * __ptr64,unsigned __int64,struct
   google::protobuf::internal::AllocationPolicy const & __ptr64) __ptr64 */

ArenaBlock * __thiscall
google::protobuf::internal::ThreadSafeArena::FirstBlock
          (ThreadSafeArena *this,void *param_1,__uint64 param_2,AllocationPolicy *param_3)

{
  ArenaBlock *pAVar1;
  ulonglong uVar2;
  
  if ((((param_3->start_block_size == 0x100) && (param_3->max_block_size == 0x8000)) &&
      (param_3->block_alloc == (_func___cdecl_void_ptr_ulong64 *)0x0)) &&
     (param_3->block_dealloc == (_func___cdecl_void_void_ptr_ulong64 *)0x0)) {
    if ((param_1 != (void *)0x0) && (0x10 < param_2)) {
      (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ | 1;
      *(undefined8 *)param_1 = 0;
      *(__uint64 *)((longlong)param_1 + 8) = param_2;
      return param_1;
    }
    return (ArenaBlock *)&DAT_1535cedd0;
  }
  if ((param_1 != (void *)0x0) && (0x2f < param_2)) {
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ | 1;
    *(undefined8 *)param_1 = 0;
    *(__uint64 *)((longlong)param_1 + 8) = param_2;
    return param_1;
  }
  uVar2 = param_3->start_block_size;
  if (uVar2 < 0x30) {
    uVar2 = 0x30;
  }
  if (param_3->block_alloc == (_func___cdecl_void_ptr_ulong64 *)0x0) {
    pAVar1 = ::operator_new(uVar2);
  }
  else {
    pAVar1 = (*param_3->block_alloc)(uVar2);
  }
  pAVar1->size = uVar2;
  pAVar1->next = (ArenaBlock *)0x0;
  return pAVar1;
}

// Free @ 14f91e3b0

/* private: struct google::protobuf::internal::SizedPtr __cdecl
   google::protobuf::internal::ThreadSafeArena::Free(void) __ptr64 */

SizedPtr * __thiscall
google::protobuf::internal::ThreadSafeArena::Free
          (ThreadSafeArena *this,SizedPtr *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined8 local_res8;
  
  uVar1 = (this->alloc_policy_).policy_ & 0xfffffffffffffff8;
  if (uVar1 == 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = *(undefined8 *)(uVar1 + 0x18);
  }
  FUN_14f91b370(this,&local_res8);
  FUN_14f91aa10(&this->first_arena_,__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// FreeStringBlocks @ 14f91e410

/* private: unsigned __int64 __cdecl google::protobuf::internal::SerialArena::FreeStringBlocks(void)
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::SerialArena::FreeStringBlocks(SerialArena *this)

{
  ushort uVar1;
  atomic<google::protobuf::internal::StringBlock_*> aVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  void *pvVar7;
  ulong64 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  aVar2 = this->string_block_;
  if (aVar2 == (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
    return 0;
  }
  puVar3 = *(undefined8 **)aVar2;
  uVar1 = *(ushort *)((longlong)aVar2 + 8);
  plVar9 = (longlong *)((longlong)this->string_block_unused_ + 0x10 + (longlong)aVar2);
  do {
    if (plVar9 == (longlong *)((ulonglong)uVar1 + (longlong)aVar2)) {
      _Var6 = 0;
      if (*(char *)((longlong)aVar2 + 0xc) != '\0') {
        uVar1 = *(ushort *)((longlong)aVar2 + 8);
        ::operator_delete((void *)aVar2,(ulonglong)uVar1);
        _Var6 = (ulonglong)uVar1;
      }
      do {
        if (puVar3 == (undefined8 *)0x0) {
          return _Var6;
        }
        puVar5 = (undefined8 *)*puVar3;
        uVar1 = *(ushort *)(puVar3 + 1);
        for (plVar9 = puVar3 + 2; plVar9 != (longlong *)((ulonglong)uVar1 + (longlong)puVar3);
            plVar9 = plVar9 + 4) {
          uVar10 = plVar9[3];
          if (0xf < uVar10) {
            pvVar4 = (void *)*plVar9;
            uVar8 = uVar10 + 1;
            pvVar7 = pvVar4;
            if (0xfff < uVar8) {
              pvVar7 = *(void **)((longlong)pvVar4 + -8);
              uVar8 = uVar10 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar7)))
              goto LAB_14f91e5a2;
            }
            ::operator_delete(pvVar7,uVar8);
          }
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
        }
        uVar10 = 0;
        if (*(char *)((longlong)puVar3 + 0xc) != '\0') {
          uVar1 = *(ushort *)(puVar3 + 1);
          ::operator_delete(puVar3,(ulonglong)uVar1);
          uVar10 = (ulonglong)uVar1;
        }
        puVar3 = puVar5;
        _Var6 = _Var6 + uVar10;
      } while( true );
    }
    uVar10 = plVar9[3];
    if (0xf < uVar10) {
      pvVar4 = (void *)*plVar9;
      uVar8 = uVar10 + 1;
      pvVar7 = pvVar4;
      if (0xfff < uVar8) {
        pvVar7 = *(void **)((longlong)pvVar4 + -8);
        uVar8 = uVar10 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar7))) {
LAB_14f91e5a2:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar7,uVar8);
    }
    plVar9[2] = 0;
    plVar9[3] = 0xf;
    *(undefined1 *)plVar9 = 0;
    plVar9 = plVar9 + 4;
  } while( true );
}

// FreeStringBlocks @ 14f91e430

/* private: static unsigned __int64 __cdecl
   google::protobuf::internal::SerialArena::FreeStringBlocks(class
   google::protobuf::internal::StringBlock * __ptr64,unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::SerialArena::FreeStringBlocks(StringBlock *param_1,__uint64 param_2)

{
  ushort uVar1;
  StringBlock *pSVar2;
  void *pvVar3;
  StringBlock *pSVar4;
  StringBlock *pSVar5;
  __uint64 _Var6;
  void *pvVar7;
  StringBlock *pSVar8;
  ulong64 uVar9;
  longlong *plVar10;
  StringBlock *pSVar11;
  ulonglong uVar12;
  
  pSVar2 = param_1->next_;
  uVar1 = param_1->allocated_size_;
  plVar10 = (longlong *)((longlong)&param_1[1].next_ + param_2);
  do {
    if (plVar10 == (longlong *)((longlong)&param_1->next_ + (ulonglong)uVar1)) {
      _Var6 = 0;
      if (param_1->heap_allocated_ != false) {
        uVar1 = param_1->allocated_size_;
        ::operator_delete(param_1,(ulonglong)uVar1);
        _Var6 = (ulonglong)uVar1;
      }
      do {
        if (pSVar2 == (StringBlock *)0x0) {
          return _Var6;
        }
        pSVar4 = pSVar2->next_;
        uVar1 = pSVar2->allocated_size_;
        for (pSVar11 = pSVar2 + 1;
            pSVar11 != (StringBlock *)((longlong)&pSVar2->next_ + (ulonglong)uVar1);
            pSVar11 = pSVar11 + 2) {
          uVar12 = *(ulonglong *)&pSVar11[1].allocated_size_;
          if (0xf < uVar12) {
            pSVar5 = pSVar11->next_;
            uVar9 = uVar12 + 1;
            pSVar8 = pSVar5;
            if (0xfff < uVar9) {
              pSVar8 = *(StringBlock **)&pSVar5[-1].allocated_size_;
              uVar9 = uVar12 + 0x28;
              if (0x1f < (ulonglong)((longlong)pSVar5 + (-8 - (longlong)pSVar8)))
              goto LAB_14f91e5a2;
            }
            ::operator_delete(pSVar8,uVar9);
          }
          pSVar11[1].next_ = (StringBlock *)0x0;
          pSVar11[1].allocated_size_ = 0xf;
          pSVar11[1].next_size_ = 0;
          pSVar11[1].heap_allocated_ = false;
          *(undefined3 *)&pSVar11[1].field_0xd = 0;
          *(undefined1 *)&pSVar11->next_ = 0;
        }
        uVar12 = 0;
        if (pSVar2->heap_allocated_ != false) {
          uVar1 = pSVar2->allocated_size_;
          ::operator_delete(pSVar2,(ulonglong)uVar1);
          uVar12 = (ulonglong)uVar1;
        }
        pSVar2 = pSVar4;
        _Var6 = _Var6 + uVar12;
      } while( true );
    }
    uVar12 = plVar10[3];
    if (0xf < uVar12) {
      pvVar3 = (void *)*plVar10;
      uVar9 = uVar12 + 1;
      pvVar7 = pvVar3;
      if (0xfff < uVar9) {
        pvVar7 = *(void **)((longlong)pvVar3 + -8);
        uVar9 = uVar12 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
LAB_14f91e5a2:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar7,uVar9);
    }
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    plVar10 = plVar10 + 4;
  } while( true );
}

// GetNextLifeCycleId @ 14f91e5b0

/* private: static unsigned __int64 __cdecl
   google::protobuf::internal::ThreadSafeArena::GetNextLifeCycleId(void) */

__uint64 __cdecl google::protobuf::internal::ThreadSafeArena::GetNextLifeCycleId(void)

{
  longlong lVar1;
  __uint64 _Var2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  _Var2 = *(__uint64 *)(lVar1 + 0x9d00);
  if ((char)_Var2 == '\0') {
    LOCK();
    UNLOCK();
    _Var2 = (longlong)lifecycle_id_ << 8;
    lifecycle_id_ = (atomic<unsigned___int64>)((longlong)lifecycle_id_ + 1);
  }
  *(__uint64 *)(lVar1 + 0x9d00) = _Var2 + 1;
  return _Var2;
}

// GetReferenceableValue @ 14f91e610

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(unsigned
   __int64) */

__uint64 __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(__uint64 param_1)

{
  return param_1;
}

// GetSerialArena @ 14f91e620

/* private: class google::protobuf::internal::SerialArena * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::GetSerialArena(void) __ptr64 */

SerialArena * __thiscall
google::protobuf::internal::ThreadSafeArena::GetSerialArena(ThreadSafeArena *this)

{
  longlong lVar1;
  SerialArena *pSVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == this->tag_and_id_) {
    return *(SerialArena **)(lVar1 + 0x9d10);
  }
  pSVar2 = GetSerialArenaFallback(this,0x10);
  return pSVar2;
}

// GetSerialArenaFallback @ 14f91e690

/* private: class google::protobuf::internal::SerialArena * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::GetSerialArenaFallback(unsigned __int64) __ptr64 */

SerialArena * __thiscall
google::protobuf::internal::ThreadSafeArena::GetSerialArenaFallback
          (ThreadSafeArena *this,__uint64 param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  SerialArena *pSVar7;
  void *pvVar8;
  SerialArena *pSVar9;
  SerialArena *pSVar10;
  ulonglong uVar11;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar12;
  basic_string_view<char,std::char_traits<char>_> local_48;
  LogMessageFatal local_38;
  
  pSVar9 = (SerialArena *)0x0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pvVar8 = (void *)(lVar1 + 0x9d00);
  if (pvVar8 == this->first_owner_) {
    CacheSerialArena(this,&this->first_arena_);
    return &this->first_arena_;
  }
  aVar12 = this->head_;
  uVar5 = *(uint *)((longlong)aVar12 + 8);
  pSVar10 = pSVar9;
  if (uVar5 != 0) {
    do {
      uVar6 = *(uint *)((longlong)aVar12 + 8);
      if (*(uint *)((longlong)aVar12 + 0xc) < *(uint *)((longlong)aVar12 + 8)) {
        uVar6 = *(uint *)((longlong)aVar12 + 0xc);
      }
      if ((SerialArena *)(ulonglong)uVar5 < (SerialArena *)(ulonglong)uVar6) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
      }
      pSVar7 = pSVar9;
      if (uVar6 != 0) {
        do {
          if ((void *)((longlong *)((longlong)aVar12 + 0x10))[(longlong)pSVar7] == pvVar8) {
            pSVar10 = *(SerialArena **)
                       ((ulonglong)*(uint *)((longlong)aVar12 + 8) * 8 + 0x10 + (longlong)pSVar7 * 8
                       + (longlong)aVar12);
            break;
          }
          pSVar7 = (SerialArena *)(ulonglong)((int)pSVar7 + 1);
        } while (pSVar7 < (SerialArena *)(ulonglong)uVar6);
      }
      aVar12 = *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar12;
      uVar5 = *(uint *)((longlong)aVar12 + 8);
    } while (uVar5 != 0);
    if (pSVar10 != (SerialArena *)0x0) goto LAB_14f91e84f;
  }
  uVar11 = 0x100;
  puVar2 = (ulonglong *)((this->alloc_policy_).policy_ & 0xfffffffffffffff8);
  if (puVar2 != (ulonglong *)0x0) {
    pSVar9 = (SerialArena *)puVar2[2];
    uVar11 = *puVar2;
  }
  if ((0xffffffffffffffef < param_1 + 0x78) &&
     (pbVar3 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (param_1 + 0x78,0xffffffffffffffef,
                          "min_bytes <= std::numeric_limits<size_t>::max() - SerialArena::kBlockHeaderSize"
                         ),
     pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_48._Mydata = (char *)pbVar3;
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      local_48._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    local_48._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_38,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\arena.cc"
               ,0x57,&local_48);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_38);
  }
  if (uVar11 < param_1 + 0x88) {
    uVar11 = param_1 + 0x88;
  }
  if (pSVar9 == (SerialArena *)0x0) {
    puVar4 = ::operator_new(uVar11);
  }
  else {
    puVar4 = (undefined8 *)(*(code *)pSVar9)();
  }
  puVar4[1] = uVar11;
  pSVar10 = (SerialArena *)(puVar4 + 2);
  *puVar4 = 0;
  pSVar10->ptr_ = (atomic<char_*>)(puVar4 + 0x11);
  puVar4[3] = (uVar11 & 0xfffffffffffffff8) + (longlong)puVar4;
  puVar4[0xb] = puVar4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xc] = 0;
  *(undefined8 **)(puVar4 + 4) = puVar4 + 0x11;
  puVar4[0xd] = puVar4[1];
  puVar4[0xe] = this;
  *(undefined1 *)(puVar4 + 0xf) = 0;
  puVar4[0x10] = 0;
  AddSerialArena(this,pvVar8,pSVar10);
LAB_14f91e84f:
  CacheSerialArena(this,pSVar10);
  return pSVar10;
}

// GetSerialArenaFast @ 14f91e8e0

/* private: bool __cdecl google::protobuf::internal::ThreadSafeArena::GetSerialArenaFast(class
   google::protobuf::internal::SerialArena * __ptr64 * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::ThreadSafeArena::GetSerialArenaFast
          (ThreadSafeArena *this,SerialArena **param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == this->tag_and_id_) {
    *param_1 = *(SerialArena **)(lVar1 + 0x9d10);
    return true;
  }
  return false;
}

// Init @ 14f91e960

/* private: void __cdecl google::protobuf::internal::SerialArena::Init(struct
   google::protobuf::internal::ArenaBlock * __ptr64,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::Init
          (SerialArena *this,ArenaBlock *param_1,__uint64 param_2)

{
  atomic<char_*> aVar1;
  ulonglong uVar2;
  
  uVar2 = param_1->size;
  aVar1 = (atomic<char_*>)((longlong)&param_1->next + param_2);
  this->ptr_ = aVar1;
  this->prefetch_ptr_ = (char *)aVar1;
  this->limit_ = (char *)((longlong)&param_1->next + (uVar2 & 0xfffffffffffffff8));
  this->head_ = (atomic<google::protobuf::internal::ArenaBlock_*>)param_1;
  this->space_used_ = (atomic<unsigned___int64>)0x0;
  this->space_allocated_ = (atomic<unsigned___int64>)param_1->size;
  this->cached_block_length_ = '\0';
  this->cached_blocks_ = (CachedBlock **)0x0;
  this->string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
  this->string_block_unused_ = (atomic<unsigned___int64>)0x0;
  return;
}

// Init @ 14f91e9b0

/* private: void __cdecl google::protobuf::internal::ThreadSafeArena::Init(void) __ptr64 */

void __thiscall google::protobuf::internal::ThreadSafeArena::Init(ThreadSafeArena *this)

{
  longlong lVar1;
  ulong64 uVar2;
  char *pcVar3;
  ulong64 *puVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar3 = (char *)(lVar1 + 0x9d48);
  if (*pcVar3 == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar4 = (ulong64 *)(lVar1 + 0x9d00);
  uVar2 = *puVar4;
  if ((char)uVar2 == '\0') {
    LOCK();
    UNLOCK();
    uVar2 = (longlong)lifecycle_id_ << 8;
    lifecycle_id_ = (atomic<unsigned___int64>)((longlong)lifecycle_id_ + 1);
  }
  *puVar4 = uVar2 + 1;
  this->tag_and_id_ = uVar2;
  this->head_ = (atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*>)
                &DAT_1553e4a08;
  if (*pcVar3 == '\0') {
    __dyn_tls_on_demand_init();
  }
  this->first_owner_ = puVar4;
  CacheSerialArena(this,&this->first_arena_);
  return;
}

// InitializeWithPolicy @ 14f91ea60

/* private: void __cdecl google::protobuf::internal::ThreadSafeArena::InitializeWithPolicy(struct
   google::protobuf::internal::AllocationPolicy const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::InitializeWithPolicy
          (ThreadSafeArena *this,AllocationPolicy *param_1)

{
  atomic<char_*> aVar1;
  ulong64 uVar2;
  _func___cdecl_void_void_ptr_ulong64 *p_Var3;
  atomic<char_*> aVar4;
  LogMessage *this_00;
  atomic<char_*> aVar5;
  atomic<char_*> aVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  Init(this);
  if ((((param_1->start_block_size != 0x100) || (param_1->max_block_size != 0x8000)) ||
      (param_1->block_alloc != (_func___cdecl_void_ptr_ulong64 *)0x0)) ||
     (param_1->block_dealloc != (_func___cdecl_void_void_ptr_ulong64 *)0x0)) {
    aVar1 = (this->first_arena_).ptr_;
    aVar6 = (atomic<char_*>)((longlong)aVar1 + 0x20);
    if ((this->first_arena_).limit_ < (ulonglong)aVar6) {
      this_00 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                          (&local_18,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\arena.cc"
                           ,0x287);
      local_28._Mydata = "MaybeAllocateAligned cannot fail here.";
      local_28._Mysize = 0x26;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
    (this->first_arena_).ptr_ = aVar6;
    aVar4 = (atomic<char_*>)(this->first_arena_).prefetch_ptr_;
    aVar5 = (atomic<char_*>)(this->first_arena_).limit_;
    if (((longlong)aVar4 - (longlong)aVar6 < 0x401) && ((ulonglong)aVar4 < (ulonglong)aVar5)) {
      if ((ulonglong)aVar6 < (ulonglong)aVar4) {
        aVar6 = aVar4;
      }
      aVar4 = aVar6;
      if ((longlong)aVar6 + 0x400U < (ulonglong)aVar5) {
        aVar5 = (atomic<char_*>)((longlong)aVar6 + 0x400U);
      }
      for (; (ulonglong)aVar4 < (ulonglong)aVar5; aVar4 = (atomic<char_*>)((longlong)aVar4 + 0x40))
      {
      }
    }
    (this->first_arena_).prefetch_ptr_ = (char *)aVar4;
    uVar2 = param_1->max_block_size;
    *(ulong64 *)aVar1 = param_1->start_block_size;
    *(ulong64 *)((longlong)aVar1 + 8) = uVar2;
    p_Var3 = param_1->block_dealloc;
    *(_func___cdecl_void_ptr_ulong64 **)((longlong)aVar1 + 0x10) = param_1->block_alloc;
    *(_func___cdecl_void_void_ptr_ulong64 **)((longlong)aVar1 + 0x18) = p_Var3;
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ & 7;
    (this->alloc_policy_).policy_ = (this->alloc_policy_).policy_ | (ulonglong)aVar1;
  }
  return;
}

// InternalStream @ 14f91eb80

/* public: class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullStream::InternalStream(void) __ptr64 */

NullStream * __thiscall
absl::lts_20240722::log_internal::NullStream::InternalStream(NullStream *this)

{
  return this;
}

// IsAligned @ 14f91eb90

/* public: static bool __cdecl google::protobuf::internal::ArenaAlignDefault::IsAligned(unsigned
   __int64) */

bool __cdecl google::protobuf::internal::ArenaAlignDefault::IsAligned(__uint64 param_1)

{
  return (param_1 & 7) == 0;
}

// IsDefault @ 14f91eba0

/* public: bool __cdecl google::protobuf::internal::AllocationPolicy::IsDefault(void)const __ptr64
    */

bool __thiscall google::protobuf::internal::AllocationPolicy::IsDefault(AllocationPolicy *this)

{
  if ((((this->start_block_size == 0x100) && (this->max_block_size == 0x8000)) &&
      (this->block_alloc == (_func___cdecl_void_ptr_ulong64 *)0x0)) &&
     (this->block_dealloc == (_func___cdecl_void_void_ptr_ulong64 *)0x0)) {
    return true;
  }
  return false;
}

// IsSentry @ 14f91ebd0

/* public: bool __cdecl google::protobuf::internal::ArenaBlock::IsSentry(void)const __ptr64 */

bool __thiscall google::protobuf::internal::ArenaBlock::IsSentry(ArenaBlock *this)

{
  return this->size == 0;
}

// IsSentry @ 14f91ebe0

/* public: bool __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::IsSentry(void)const __ptr64 */

bool __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::IsSentry(SerialArenaChunk *this)

{
  return *(int *)(this + 8) == 0;
}

// Last @ 14f91ebf0

/* public: struct google::protobuf::internal::cleanup::CleanupNode * __ptr64 __cdecl
   google::protobuf::internal::cleanup::ChunkList::Chunk::Last(void) __ptr64 */

CleanupNode * __thiscall google::protobuf::internal::cleanup::ChunkList::Chunk::Last(Chunk *this)

{
  return (CleanupNode *)(this + (*(longlong *)(this + 8) - 0x10U & 0xfffffffffffffff0));
}

// Layout @ 14f91ec10

/* private: class
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1>,struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> > __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::Layout(void)const __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::Layout(SerialArenaChunk *this)

{
  uint uVar1;
  ulonglong *in_RDX;
  
  uVar1 = *(uint *)(this + 8);
  *in_RDX = (ulonglong)uVar1;
  in_RDX[1] = (ulonglong)uVar1;
  return;
}

// Layout @ 14f91ec30

/* private: static class
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1>,struct
   google::protobuf::internal::SerialArenaChunkHeader,struct std::atomic<void * __ptr64>,struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> > __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::Layout(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::Layout(__uint64 param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  *(undefined8 *)(param_1 + 8) = in_RDX;
  return param_1;
}

// Limit @ 14f91ec50

/* public: char * __ptr64 __cdecl google::protobuf::internal::ArenaBlock::Limit(void) __ptr64 */

char * __thiscall google::protobuf::internal::ArenaBlock::Limit(ArenaBlock *this)

{
  return (char *)((longlong)&this->next + (this->size & 0xfffffffffffffff8));
}

// MaybeAllocateAligned @ 14f91ec70

/* public: bool __cdecl google::protobuf::internal::SerialArena::MaybeAllocateAligned(unsigned
   __int64,void * __ptr64 * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::SerialArena::MaybeAllocateAligned
          (SerialArena *this,__uint64 param_1,void **param_2)

{
  atomic<char_*> aVar1;
  atomic<char_*> aVar2;
  atomic<char_*> aVar3;
  
  aVar3 = (atomic<char_*>)((longlong)this->ptr_ + param_1);
  if (this->limit_ < (ulonglong)aVar3) {
    return false;
  }
  *param_2 = (void *)this->ptr_;
  this->ptr_ = aVar3;
  aVar1 = (atomic<char_*>)this->prefetch_ptr_;
  aVar2 = (atomic<char_*>)this->limit_;
  if (((longlong)aVar1 - (longlong)aVar3 < 0x401) && ((ulonglong)aVar1 < (ulonglong)aVar2)) {
    if ((ulonglong)aVar3 < (ulonglong)aVar1) {
      aVar3 = aVar1;
    }
    aVar1 = aVar3;
    if ((longlong)aVar3 + 0x400U < (ulonglong)aVar2) {
      aVar2 = (atomic<char_*>)((longlong)aVar3 + 0x400U);
    }
    for (; (ulonglong)aVar1 < (ulonglong)aVar2; aVar1 = (atomic<char_*>)((longlong)aVar1 + 0x40)) {
    }
  }
  this->prefetch_ptr_ = (char *)aVar1;
  return true;
}

// MaybeAllocateString @ 14f91ece0

/* private: bool __cdecl google::protobuf::internal::SerialArena::MaybeAllocateString(void * __ptr64
   & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::SerialArena::MaybeAllocateString(SerialArena *this,void **param_1)

{
  atomic<unsigned___int64> aVar1;
  
  if (this->string_block_unused_ != (atomic<unsigned___int64>)0x0) {
    aVar1 = (atomic<unsigned___int64>)((longlong)this->string_block_unused_ + -0x20);
    this->string_block_unused_ = aVar1;
    *param_1 = (void *)((longlong)this->string_block_ + 0x10 + (longlong)aVar1);
    return true;
  }
  return false;
}

// MaybePrefetchCleanup @ 14f91ed10

/* private: void __cdecl google::protobuf::internal::SerialArena::MaybePrefetchCleanup(void) __ptr64
    */

void __thiscall google::protobuf::internal::SerialArena::MaybePrefetchCleanup(SerialArena *this)

{
  CleanupNode *pCVar1;
  CleanupNode *pCVar2;
  CleanupNode *pCVar3;
  
  pCVar1 = (CleanupNode *)(this->cleanup_list_).prefetch_ptr_;
  pCVar3 = (this->cleanup_list_).limit_;
  pCVar2 = (this->cleanup_list_).next_;
  if (((longlong)pCVar1 - (longlong)pCVar2 < 0x181) && (pCVar1 < pCVar3)) {
    if (pCVar2 < pCVar1) {
      pCVar2 = pCVar1;
    }
    pCVar1 = pCVar2;
    if (pCVar2 + 0x18 < pCVar3) {
      pCVar3 = pCVar2 + 0x18;
    }
    for (; pCVar1 < pCVar3; pCVar1 = pCVar1 + 4) {
    }
  }
  (this->cleanup_list_).prefetch_ptr_ = (char *)pCVar1;
  return;
}

// MaybePrefetchData @ 14f91ed70

/* private: void __cdecl google::protobuf::internal::SerialArena::MaybePrefetchData(char const *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::MaybePrefetchData(SerialArena *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = this->prefetch_ptr_;
  pcVar2 = this->limit_;
  if (0x400 < (longlong)pcVar1 - (longlong)param_1) {
    this->prefetch_ptr_ = pcVar1;
    return;
  }
  if (pcVar1 < pcVar2) {
    if (param_1 < pcVar1) {
      param_1 = pcVar1;
    }
    pcVar1 = param_1;
    if (param_1 + 0x400 < pcVar2) {
      pcVar2 = param_1 + 0x400;
    }
    for (; pcVar1 < pcVar2; pcVar1 = pcVar1 + 0x40) {
    }
  }
  this->prefetch_ptr_ = pcVar1;
  return;
}

// MaybePrefetchImpl @ 14f91edd0

/* private: static char const * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::MaybePrefetchImpl(__int64,char const * __ptr64,char
   const * __ptr64,char const * __ptr64) */

char * __cdecl
google::protobuf::internal::SerialArena::MaybePrefetchImpl
          (__int64 param_1,char *param_2,char *param_3,char *param_4)

{
  if (((longlong)param_4 - (longlong)param_2 <= param_1) && (param_4 < param_3)) {
    if (param_2 < param_4) {
      param_2 = param_4;
    }
    param_4 = param_2;
    if (param_2 + param_1 < param_3) {
      param_3 = param_2 + param_1;
    }
    for (; param_4 < param_3; param_4 = param_4 + 0x40) {
    }
  }
  return param_4;
}

// MutableStats @ 14f91ee20

/* public: struct google::protobuf::internal::ThreadSafeArenaStats * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArenaStatsHandle::MutableStats(void) __ptr64 */

ThreadSafeArenaStats * __thiscall
google::protobuf::internal::ThreadSafeArenaStatsHandle::MutableStats
          (ThreadSafeArenaStatsHandle *this)

{
  return (ThreadSafeArenaStats *)0x0;
}

// New @ 14f91ee30

/* private: static class google::protobuf::internal::SerialArena * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::New(struct google::protobuf::internal::SizedPtr,class
   google::protobuf::internal::ThreadSafeArena & __ptr64) */

SerialArena * __cdecl
google::protobuf::internal::SerialArena::New(SizedPtr *param_1,ThreadSafeArena *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = param_1->p;
  uVar2 = param_1->n;
  puVar1[1] = uVar2;
  *puVar1 = 0;
  puVar1[2] = puVar1 + 0x11;
  puVar1[3] = (uVar2 & 0xfffffffffffffff8) + (longlong)puVar1;
  puVar1[4] = puVar1 + 0x11;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = puVar1;
  puVar1[0xc] = 0;
  puVar1[0xd] = puVar1[1];
  puVar1[0xe] = param_2;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  return (SerialArena *)(puVar1 + 2);
}

// New @ 14f91eea0

/* public: static class google::protobuf::internal::StringBlock * __ptr64 __cdecl
   google::protobuf::internal::StringBlock::New(class google::protobuf::internal::StringBlock *
   __ptr64) */

StringBlock * __cdecl google::protobuf::internal::StringBlock::New(StringBlock *param_1)

{
  StringBlock *pSVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = 0x100;
  uVar2 = 0x100;
  if (param_1 != (StringBlock *)0x0) {
    uVar3 = param_1->next_size_;
    uVar2 = uVar3 * 2;
    if (0x2000 < uVar2) {
      uVar2 = 0x2000;
    }
  }
  uVar3 = uVar3 - (uVar3 - 0x10 & 0x1f);
  pSVar1 = ::operator_new((ulonglong)uVar3);
  pSVar1->next_ = param_1;
  pSVar1->allocated_size_ = uVar3;
  pSVar1->next_size_ = uVar2;
  pSVar1->heap_allocated_ = true;
  return pSVar1;
}

// NewSerialArenaChunk @ 14f91ef10

/* private: static class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64
   __cdecl google::protobuf::internal::ThreadSafeArena::NewSerialArenaChunk(unsigned int,void *
   __ptr64,class google::protobuf::internal::SerialArena * __ptr64) */

SerialArenaChunk * __cdecl
google::protobuf::internal::ThreadSafeArena::NewSerialArenaChunk
          (uint param_1,void *param_2,SerialArena *param_3)

{
  int iVar1;
  SerialArenaChunk *pSVar2;
  ulonglong uVar3;
  uint uVar4;
  ulong64 uVar5;
  
  uVar3 = ((ulonglong)param_1 * 0x10 + 0x10) * 4;
  iVar1 = 0x1000;
  if (uVar3 < 0x1000) {
    iVar1 = (int)uVar3;
  }
  uVar5 = (ulonglong)(iVar1 - 0x10U >> 4) * 0x10 + 0x10;
  pSVar2 = ::operator_new(uVar5);
  uVar4 = (int)uVar5 - 0x10U >> 4;
  *(undefined8 *)pSVar2 = 0;
  *(uint *)(pSVar2 + 8) = uVar4;
  *(undefined4 *)(pSVar2 + 0xc) = 1;
  *(void **)(pSVar2 + 0x10) = param_2;
  if (uVar4 < 2) {
    *(SerialArena **)(pSVar2 + (ulonglong)uVar4 * 8 + 0x10) = param_3;
  }
  else {
    memset(pSVar2 + 0x18,0,(ulonglong)(uVar4 - 1) << 3);
    *(SerialArena **)(pSVar2 + (ulonglong)uVar4 * 8 + 0x10) = param_3;
    memset(pSVar2 + (ulonglong)uVar4 * 8 + 0x10 + 8,0,(ulonglong)(uVar4 - 1) << 3);
  }
  return pSVar2;
}

// NextSize @ 14f91f010

/* public: static unsigned __int64 __cdecl google::protobuf::internal::StringBlock::NextSize(class
   google::protobuf::internal::StringBlock * __ptr64) */

__uint64 __cdecl google::protobuf::internal::StringBlock::NextSize(StringBlock *param_1)

{
  if (param_1 != (StringBlock *)0x0) {
    return (ulonglong)param_1->next_size_;
  }
  return 0x100;
}

// Padded @ 14f91f030

/* public: unsigned __int64 __cdecl google::protobuf::internal::ArenaAlign::Padded(unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::ArenaAlign::Padded(ArenaAlign *this,__uint64 param_1)

{
  return (this->align - 8) + param_1;
}

// PeekCleanupListForTesting @ 14f91f050

/* private: class std::vector<void * __ptr64,class std::allocator<void * __ptr64> > __cdecl
   google::protobuf::Arena::PeekCleanupListForTesting(void) __ptr64 */

void __thiscall google::protobuf::Arena::PeekCleanupListForTesting(Arena *this)

{
  void **ppvVar1;
  SerialArena *pSVar2;
  vector<void*___ptr64,std::allocator<void*___ptr64>_> *in_RDX;
  CleanupNode *pCVar3;
  Chunk *pCVar4;
  
  pSVar2 = internal::ThreadSafeArena::GetSerialArena(&this->impl_);
  *(undefined8 *)in_RDX = 0;
  *(undefined8 *)(in_RDX + 8) = 0;
  *(undefined8 *)(in_RDX + 0x10) = 0;
  pCVar4 = (pSVar2->cleanup_list_).head_;
  if (pCVar4 != (Chunk *)0x0) {
    pCVar3 = (pSVar2->cleanup_list_).next_ + -1;
    while( true ) {
      for (; (CleanupNode *)(pCVar4 + 0x10) <= pCVar3; pCVar3 = pCVar3 + -1) {
        ppvVar1 = *(void ***)(in_RDX + 8);
        if (ppvVar1 == *(void ***)(in_RDX + 0x10)) {
          std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
          _Emplace_reallocate<void*___ptr64_const&___ptr64>(in_RDX,ppvVar1,&pCVar3->elem);
        }
        else {
          *ppvVar1 = pCVar3->elem;
          *(longlong *)(in_RDX + 8) = *(longlong *)(in_RDX + 8) + 8;
        }
      }
      pCVar4 = *(Chunk **)pCVar4;
      if (pCVar4 == (Chunk *)0x0) break;
      pCVar3 = (CleanupNode *)(pCVar4 + (*(longlong *)(pCVar4 + 8) - 0x10U & 0xfffffffffffffff0));
    }
  }
  return;
}

// PeekCleanupListForTesting @ 14f91f120

/* public: class std::vector<void * __ptr64,class std::allocator<void * __ptr64> > __cdecl
   google::protobuf::internal::SerialArena::PeekCleanupListForTesting(void) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::PeekCleanupListForTesting(SerialArena *this)

{
  void **ppvVar1;
  vector<void*___ptr64,std::allocator<void*___ptr64>_> *in_RDX;
  CleanupNode *pCVar2;
  Chunk *pCVar3;
  
  *(undefined8 *)in_RDX = 0;
  *(undefined8 *)(in_RDX + 8) = 0;
  *(undefined8 *)(in_RDX + 0x10) = 0;
  pCVar3 = (this->cleanup_list_).head_;
  if (pCVar3 != (Chunk *)0x0) {
    pCVar2 = (this->cleanup_list_).next_ + -1;
    while( true ) {
      for (; (CleanupNode *)(pCVar3 + 0x10) <= pCVar2; pCVar2 = pCVar2 + -1) {
        ppvVar1 = *(void ***)(in_RDX + 8);
        if (ppvVar1 == *(void ***)(in_RDX + 0x10)) {
          std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
          _Emplace_reallocate<void*___ptr64_const&___ptr64>(in_RDX,ppvVar1,&pCVar2->elem);
        }
        else {
          *ppvVar1 = pCVar2->elem;
          *(longlong *)(in_RDX + 8) = *(longlong *)(in_RDX + 8) + 8;
        }
      }
      pCVar3 = *(Chunk **)pCVar3;
      if (pCVar3 == (Chunk *)0x0) break;
      pCVar2 = (CleanupNode *)(pCVar3 + (*(longlong *)(pCVar3 + 8) - 0x10U & 0xfffffffffffffff0));
    }
  }
  return;
}

// PeekCleanupListForTesting @ 14f91f1e0

/* public: class std::vector<void * __ptr64,class std::allocator<void * __ptr64> > __cdecl
   google::protobuf::internal::ThreadSafeArena::PeekCleanupListForTesting(void) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::PeekCleanupListForTesting(ThreadSafeArena *this)

{
  void **ppvVar1;
  SerialArena *pSVar2;
  vector<void*___ptr64,std::allocator<void*___ptr64>_> *in_RDX;
  CleanupNode *pCVar3;
  Chunk *pCVar4;
  
  pSVar2 = GetSerialArena(this);
  *(undefined8 *)in_RDX = 0;
  *(undefined8 *)(in_RDX + 8) = 0;
  *(undefined8 *)(in_RDX + 0x10) = 0;
  pCVar4 = (pSVar2->cleanup_list_).head_;
  if (pCVar4 != (Chunk *)0x0) {
    pCVar3 = (pSVar2->cleanup_list_).next_ + -1;
    while( true ) {
      for (; (CleanupNode *)(pCVar4 + 0x10) <= pCVar3; pCVar3 = pCVar3 + -1) {
        ppvVar1 = *(void ***)(in_RDX + 8);
        if (ppvVar1 == *(void ***)(in_RDX + 0x10)) {
          std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
          _Emplace_reallocate<void*___ptr64_const&___ptr64>(in_RDX,ppvVar1,&pCVar3->elem);
        }
        else {
          *ppvVar1 = pCVar3->elem;
          *(longlong *)(in_RDX + 8) = *(longlong *)(in_RDX + 8) + 8;
        }
      }
      pCVar4 = *(Chunk **)pCVar4;
      if (pCVar4 == (Chunk *)0x0) break;
      pCVar3 = (CleanupNode *)(pCVar4 + (*(longlong *)(pCVar4 + 8) - 0x10U & 0xfffffffffffffff0));
    }
  }
  return;
}

// PeekForTesting @ 14f91f2b0

/* private: class std::vector<void * __ptr64,class std::allocator<void * __ptr64> > __cdecl
   google::protobuf::internal::cleanup::ChunkList::PeekForTesting(void) __ptr64 */

void __thiscall google::protobuf::internal::cleanup::ChunkList::PeekForTesting(ChunkList *this)

{
  void **ppvVar1;
  vector<void*___ptr64,std::allocator<void*___ptr64>_> *in_RDX;
  CleanupNode *pCVar2;
  Chunk *pCVar3;
  
  *(undefined8 *)in_RDX = 0;
  *(undefined8 *)(in_RDX + 8) = 0;
  *(undefined8 *)(in_RDX + 0x10) = 0;
  pCVar3 = this->head_;
  if (pCVar3 != (Chunk *)0x0) {
    pCVar2 = this->next_ + -1;
    while( true ) {
      for (; (CleanupNode *)(pCVar3 + 0x10) <= pCVar2; pCVar2 = pCVar2 + -1) {
        ppvVar1 = *(void ***)(in_RDX + 8);
        if (ppvVar1 == *(void ***)(in_RDX + 0x10)) {
          std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
          _Emplace_reallocate<void*___ptr64_const&___ptr64>(in_RDX,ppvVar1,&pCVar2->elem);
        }
        else {
          *ppvVar1 = pCVar2->elem;
          *(longlong *)(in_RDX + 8) = *(longlong *)(in_RDX + 8) + 8;
        }
      }
      pCVar3 = *(Chunk **)pCVar3;
      if (pCVar3 == (Chunk *)0x0) break;
      pCVar2 = (CleanupNode *)(pCVar3 + (*(longlong *)(pCVar3 + 8) - 0x10U & 0xfffffffffffffff0));
    }
  }
  return;
}

// Pointer @ 14f91f360

/* public: char * __ptr64 __cdecl google::protobuf::internal::ArenaBlock::Pointer(unsigned __int64)
   __ptr64 */

char * __thiscall google::protobuf::internal::ArenaBlock::Pointer(ArenaBlock *this,__uint64 param_1)

{
  return (char *)((longlong)&this->next + param_1);
}

// PoisonMemoryRegion @ 14f91f370

/* void __cdecl google::protobuf::internal::PoisonMemoryRegion(void const * __ptr64,unsigned
   __int64) */

void __cdecl google::protobuf::internal::PoisonMemoryRegion(void *param_1,__uint64 param_2)

{
  return;
}

// Prefetch @ 14f91f380

/* public: void __cdecl google::protobuf::internal::cleanup::CleanupNode::Prefetch(void) __ptr64 */

void __thiscall google::protobuf::internal::cleanup::CleanupNode::Prefetch(CleanupNode *this)

{
  return;
}

// PrefetchToLocalCacheForWrite @ 14f91f390

/* void __cdecl absl::lts_20240722::PrefetchToLocalCacheForWrite(void const * __ptr64) */

void __cdecl absl::lts_20240722::PrefetchToLocalCacheForWrite(void *param_1)

{
  return;
}

// PrefetchToLocalCacheNta @ 14f91f3a0

/* void __cdecl absl::lts_20240722::PrefetchToLocalCacheNta(void const * __ptr64) */

void __cdecl absl::lts_20240722::PrefetchToLocalCacheNta(void *param_1)

{
  return;
}

// RecordAllocateStats @ 14f91f3b0

/* public: static void __cdecl
   google::protobuf::internal::ThreadSafeArenaStats::RecordAllocateStats(struct
   google::protobuf::internal::ThreadSafeArenaStats * __ptr64,unsigned __int64,unsigned
   __int64,unsigned __int64) */

void __cdecl
google::protobuf::internal::ThreadSafeArenaStats::RecordAllocateStats
          (ThreadSafeArenaStats *param_1,__uint64 param_2,__uint64 param_3,__uint64 param_4)

{
  return;
}

// Reset @ 14f91f3c0

/* public: unsigned __int64 __cdecl google::protobuf::internal::ThreadSafeArena::Reset(void) __ptr64
    */

__uint64 __thiscall google::protobuf::internal::ThreadSafeArena::Reset(ThreadSafeArena *this)

{
  longlong *plVar1;
  uint uVar2;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar3;
  atomic<google::protobuf::internal::StringBlock_*> aVar4;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar5;
  ulonglong uVar6;
  uint uVar7;
  atomic<google::protobuf::internal::ArenaBlock_*> aVar8;
  code *pcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_48;
  atomic<unsigned___int64> local_40;
  code *local_38 [2];
  
  local_40 = (this->first_arena_).space_allocated_;
  aVar3 = this->head_;
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  while( true ) {
    if (uVar2 == 0) {
      FUN_14f91b1d0(this,local_48);
      SerialArena::CleanupList(&this->first_arena_);
      local_38[0] = (code *)0x0;
      (this->first_arena_).cleanup_list_.head_ = (Chunk *)0x0;
      (this->first_arena_).cleanup_list_.next_ = (CleanupNode *)0x0;
      (this->first_arena_).cleanup_list_.limit_ = (CleanupNode *)0x0;
      (this->first_arena_).cleanup_list_.prefetch_ptr_ = (char *)0x0;
      uVar11 = (this->alloc_policy_).policy_ & 0xfffffffffffffff8;
      if (uVar11 != 0) {
        local_38[0] = *(code **)(uVar11 + 0x18);
      }
      FUN_14f91b370(this,local_38);
      pcVar9 = local_38[0];
      aVar4 = (this->first_arena_).string_block_;
      if (aVar4 != (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
        SerialArena::FreeStringBlocks
                  ((StringBlock *)aVar4,(__uint64)(this->first_arena_).string_block_unused_);
      }
      aVar5 = (this->first_arena_).head_;
      uVar11 = *(ulonglong *)((longlong)aVar5 + 8);
      for (aVar8 = *(atomic<google::protobuf::internal::ArenaBlock_*> *)aVar5;
          aVar8 != (atomic<google::protobuf::internal::ArenaBlock_*>)0x0;
          aVar8 = *(atomic<google::protobuf::internal::ArenaBlock_*> *)aVar8) {
        if (pcVar9 == (code *)0x0) {
          ::operator_delete((void *)aVar5,uVar11);
        }
        else {
          (*pcVar9)();
        }
        uVar11 = *(ulonglong *)((longlong)aVar8 + 8);
        aVar5 = aVar8;
      }
      uVar6 = (this->alloc_policy_).policy_;
      if ((uVar6 & 0xfffffffffffffff9) == 0) {
        (this->first_arena_).ptr_ = (atomic<char_*>)&DAT_1535cedd0;
        (this->first_arena_).prefetch_ptr_ = "";
        (this->first_arena_).limit_ = "";
        (this->first_arena_).head_ =
             (atomic<google::protobuf::internal::ArenaBlock_*>)&DAT_1535cedd0;
        (this->first_arena_).space_used_ = (atomic<unsigned___int64>)0x0;
        (this->first_arena_).space_allocated_ = (atomic<unsigned___int64>)0x0;
      }
      else {
        *(ulonglong *)((longlong)aVar5 + 8) = uVar11;
        *(undefined8 *)aVar5 = 0;
        lVar12 = 0x30;
        if ((uVar6 & 0xfffffffffffffff8) == 0) {
          lVar12 = 0x10;
        }
        (this->first_arena_).ptr_ = (atomic<char_*>)(lVar12 + (longlong)aVar5);
        (this->first_arena_).prefetch_ptr_ = (char *)(lVar12 + (longlong)aVar5);
        (this->first_arena_).limit_ = (char *)((uVar11 & 0xfffffffffffffff8) + (longlong)aVar5);
        (this->first_arena_).head_ = aVar5;
        (this->first_arena_).space_used_ = (atomic<unsigned___int64>)0x0;
        (this->first_arena_).space_allocated_ = *(atomic<unsigned___int64> *)((longlong)aVar5 + 8);
      }
      (this->first_arena_).cached_block_length_ = '\0';
      (this->first_arena_).cached_blocks_ = (CachedBlock **)0x0;
      (this->first_arena_).string_block_ = (atomic<google::protobuf::internal::StringBlock_*>)0x0;
      (this->first_arena_).string_block_unused_ = (atomic<unsigned___int64>)0x0;
      Init(this);
      return (__uint64)local_40;
    }
    plVar10 = (longlong *)((ulonglong)uVar2 * 8 + 0x10 + (longlong)aVar3);
    uVar7 = *(uint *)((longlong)aVar3 + 8);
    if (*(uint *)((longlong)aVar3 + 0xc) < *(uint *)((longlong)aVar3 + 8)) {
      uVar7 = *(uint *)((longlong)aVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar7) break;
    plVar1 = plVar10 + uVar7;
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      if (*plVar10 != 0) {
        local_40 = (atomic<unsigned___int64>)((longlong)local_40 + *(longlong *)(*plVar10 + 0x58));
      }
    }
    aVar3 = *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar3;
    uVar2 = *(uint *)((longlong)aVar3 + 8);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// RoundedSize @ 14f91f5f0

/* private: static unsigned short __cdecl
   google::protobuf::internal::StringBlock::RoundedSize(unsigned short) */

ushort __cdecl google::protobuf::internal::StringBlock::RoundedSize(ushort param_1)

{
  return param_1 - (param_1 - 0x10 & 0x1f);
}

// Sample @ 14f91f610

/* class google::protobuf::internal::ThreadSafeArenaStatsHandle __cdecl
   google::protobuf::internal::Sample(void) */

ThreadSafeArenaStatsHandle __cdecl google::protobuf::internal::Sample(void)

{
  ThreadSafeArenaStatsHandle in_CL;
  
  return in_CL;
}

// SentrySerialArenaChunk @ 14f91f630

/* private: static class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64
   __cdecl google::protobuf::internal::ThreadSafeArena::SentrySerialArenaChunk(void) */

SerialArenaChunk * __cdecl google::protobuf::internal::ThreadSafeArena::SentrySerialArenaChunk(void)

{
  return (SerialArenaChunk *)&DAT_1553e4a08;
}

// SizedDelete @ 14f91f640

/* void __cdecl google::protobuf::internal::SizedDelete(void * __ptr64,unsigned __int64) */

void __cdecl google::protobuf::internal::SizedDelete(void *param_1,__uint64 param_2)

{
  ::operator_delete(param_1,param_2);
  return;
}

// SpaceAllocated @ 14f91f650

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::SerialArena::SpaceAllocated(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::SerialArena::SpaceAllocated(SerialArena *this)

{
  return (__uint64)this->space_allocated_;
}

// SpaceAllocated @ 14f91f660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned __int64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SpaceAllocated(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::ThreadSafeArena::SpaceAllocated(ThreadSafeArena *this)

{
  longlong *plVar1;
  uint uVar2;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar3;
  uint uVar4;
  longlong *plVar5;
  atomic<unsigned___int64> aVar6;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  aVar6 = (this->first_arena_).space_allocated_;
  aVar3 = this->head_;
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  while( true ) {
    if (uVar2 == 0) {
      return (__uint64)aVar6;
    }
    plVar5 = (longlong *)((ulonglong)uVar2 * 8 + 0x10 + (longlong)aVar3);
    uVar4 = *(uint *)((longlong)aVar3 + 8);
    if (*(uint *)((longlong)aVar3 + 0xc) < *(uint *)((longlong)aVar3 + 8)) {
      uVar4 = *(uint *)((longlong)aVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    plVar1 = plVar5 + uVar4;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        aVar6 = (atomic<unsigned___int64>)((longlong)aVar6 + *(longlong *)(*plVar5 + 0x58));
      }
    }
    aVar3 = *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar3;
    uVar2 = *(uint *)((longlong)aVar3 + 8);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// SpaceUsed @ 14f91f720

/* public: unsigned __int64 __cdecl google::protobuf::internal::SerialArena::SpaceUsed(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::SerialArena::SpaceUsed(SerialArena *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  
  _Var3 = 0;
  if (this->string_block_ != (atomic<google::protobuf::internal::StringBlock_*>)0x0) {
    _Var3 = ((ulonglong)*(ushort *)((longlong)this->string_block_ + 8) -
            (longlong)this->string_block_unused_) - 0x10;
  }
  uVar1 = *(ulonglong *)((longlong)this->head_ + 8);
  if (uVar1 == 0) {
    return _Var3;
  }
  uVar2 = ((longlong)this->ptr_ - (longlong)this->head_) - 0x10;
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  return (longlong)this->space_used_ + _Var3 + uVar2;
}

// SpaceUsed @ 14f91f780

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SpaceUsed(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::ThreadSafeArena::SpaceUsed(ThreadSafeArena *this)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0x78;
  FUN_14f91ad20(this,local_res8);
  return local_res8[0] -
         (ulonglong)(-(uint)(((this->alloc_policy_).policy_ & 0xfffffffffffffff8) != 0) & 0x20);
}

// TryAllocateFromCachedBlock @ 14f91f7d0

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::TryAllocateFromCachedBlock(unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::internal::SerialArena::TryAllocateFromCachedBlock
          (SerialArena *this,__uint64 param_1)

{
  CachedBlock *pCVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (0xf < param_1) {
    uVar4 = param_1 - 1;
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      if (uVar4 != 0) {
        iVar3 = 0x3f - (int)lVar2;
      }
      else {
        iVar3 = 0x40;
      }
    }
    else {
      iVar3 = (int)LZCOUNT(uVar4);
    }
    uVar4 = (ulonglong)(0x3c - iVar3);
    if (uVar4 < this->cached_block_length_) {
      pCVar1 = this->cached_blocks_[uVar4];
      if (pCVar1 != (CachedBlock *)0x0) {
        this->cached_blocks_[uVar4] = pCVar1->next;
        return pCVar1;
      }
    }
  }
  return (void *)0x0;
}

// UnpoisonAllArenaBlocks @ 14f91f840

/* private: void __cdecl
   google::protobuf::internal::ThreadSafeArena::UnpoisonAllArenaBlocks(void)const __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::UnpoisonAllArenaBlocks(ThreadSafeArena *this)

{
  longlong lVar1;
  uint uVar2;
  atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> aVar3;
  uint uVar4;
  longlong lVar5;
  
  aVar3 = this->head_;
  uVar2 = *(uint *)((longlong)aVar3 + 8);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    lVar5 = (ulonglong)uVar2 * 8 + 0x10 + (longlong)aVar3;
    uVar4 = *(uint *)((longlong)aVar3 + 8);
    if (*(uint *)((longlong)aVar3 + 0xc) < *(uint *)((longlong)aVar3 + 8)) {
      uVar4 = *(uint *)((longlong)aVar3 + 0xc);
    }
    if ((ulonglong)uVar2 < (ulonglong)uVar4) break;
    lVar1 = lVar5 + (ulonglong)uVar4 * 8;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 8) {
    }
    aVar3 = *(atomic<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk_*> *)aVar3;
    uVar2 = *(uint *)((longlong)aVar3 + 8);
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// UnpoisonMemoryRegion @ 14f91f8d0

/* void __cdecl google::protobuf::internal::UnpoisonMemoryRegion(void const * __ptr64,unsigned
   __int64) */

void __cdecl google::protobuf::internal::UnpoisonMemoryRegion(void *param_1,__uint64 param_2)

{
  return;
}

// _Calculate_growth @ 14f91f8e0

/* private: unsigned __int64 __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Calculate_growth
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(this + 0x10) - *(longlong *)this >> 3;
  uVar1 = 0x1fffffffffffffff;
  if ((uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Change_array @ 14f91f920

/* private: void __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::_Change_array(void * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64 */

void __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Change_array
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1,
          __uint64 param_2,__uint64 param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff8;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  *(void ***)this = param_1;
  *(void ***)(this + 8) = param_1 + param_2;
  *(void ***)(this + 0x10) = param_1 + param_3;
  return;
}

// _Get_current @ 14f91f9b0

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   const & __ptr64 __cdecl std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64>::_Get_current(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> ** __thiscall
std::reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>::
_Get_current(reverse_iterator<std::atomic<google::protobuf::internal::SerialArena*___ptr64>*___ptr64>
             *this)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> **)this;
}

// _Get_first @ 14f91f9c0

/* public: class std::allocator<void * __ptr64> & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<void * __ptr64>,class std::_Vector_val<struct std::_Simple_types<void * __ptr64>
   >,1>::_Get_first(void) __ptr64 */

allocator<void*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
             *this)

{
  return (allocator<void*___ptr64> *)this;
}

// _Get_first @ 14f91f9d0

/* public: class std::allocator<void * __ptr64> const & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<void * __ptr64>,class std::_Vector_val<struct std::_Simple_types<void * __ptr64>
   >,1>::_Get_first(void)const __ptr64 */

allocator<void*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<void*___ptr64>,std::_Vector_val<std::_Simple_types<void*___ptr64>_>,1>
             *this)

{
  return (allocator<void*___ptr64> *)this;
}

// _Getal @ 14f91f9e0

/* private: class std::allocator<void * __ptr64> & __ptr64 __cdecl std::vector<void * __ptr64,class
   std::allocator<void * __ptr64> >::_Getal(void) __ptr64 */

allocator<void*___ptr64> * __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Getal
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  return (allocator<void*___ptr64> *)this;
}

// _Getal @ 14f91f9f0

/* private: class std::allocator<void * __ptr64> const & __ptr64 __cdecl std::vector<void *
   __ptr64,class std::allocator<void * __ptr64> >::_Getal(void)const __ptr64 */

allocator<void*___ptr64> * __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Getal
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  return (allocator<void*___ptr64> *)this;
}

// _Orphan_range @ 14f91fa00

/* private: void __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::_Orphan_range(void * __ptr64 * __ptr64,void * __ptr64 * __ptr64)const __ptr64 */

void __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Orphan_range
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1,void **param_2)

{
  return;
}

// _Release @ 14f91fa10

/* public: void * __ptr64 * __ptr64 __cdecl std::_Uninitialized_backout_al<class std::allocator<void
   * __ptr64> >::_Release(void) __ptr64 */

void ** __thiscall
std::_Uninitialized_backout_al<std::allocator<void*___ptr64>_>::_Release
          (_Uninitialized_backout_al<std::allocator<void*___ptr64>_> *this)

{
  *(void ***)this = *(void ***)(this + 8);
  return *(void ***)(this + 8);
}

// _Tidy @ 14f91fa20

/* private: void __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::_Tidy(void) __ptr64 */

void __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Tidy
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff8;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// _Xlength @ 14f91fa90

/* private: static void __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::_Xlength(void) */

void __cdecl std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// allocate @ 14f91fab0

/* public: void * __ptr64 * __ptr64 __cdecl std::allocator<void * __ptr64>::allocate(unsigned
   __int64) __ptr64 */

void ** __thiscall
std::allocator<void*___ptr64>::allocate(allocator<void*___ptr64> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void **ppvVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppvVar3 = ::operator_new(uVar1);
        return ppvVar3;
      }
      return (void **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        ppvVar3 = (void **)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        ppvVar3[-1] = pvVar2;
        return ppvVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocated_size @ 14f91fb30

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::StringBlock::allocated_size(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::StringBlock::allocated_size(StringBlock *this)

{
  return (ulonglong)this->allocated_size_;
}

// arena @ 14f91fb40

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> & __ptr64
   __cdecl google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arena(unsigned int)
   __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arena
          (SerialArenaChunk *this,uint param_1)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (this + (ulonglong)param_1 * 8 + (ulonglong)*(uint *)(this + 8) * 8 + 0x10);
}

// arena @ 14f91fb60

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> const &
   __ptr64 __cdecl google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arena(unsigned
   int)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arena
          (SerialArenaChunk *this,uint param_1)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (this + (ulonglong)param_1 * 8 + (ulonglong)*(uint *)(this + 8) * 8 + 0x10);
}

// arenas @ 14f91fb80

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> > __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arenas(void) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arenas(SerialArenaChunk *this)

{
  uint uVar1;
  undefined8 *in_RDX;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) < *(uint *)(this + 8)) {
    uVar1 = *(uint *)(this + 0xc);
  }
  if ((ulonglong)uVar1 <= (ulonglong)*(uint *)(this + 8)) {
    *in_RDX = this + (ulonglong)*(uint *)(this + 8) * 8 + 0x10;
    in_RDX[1] = (ulonglong)uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// arenas @ 14f91fbe0

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const > __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arenas(void)const __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::arenas(SerialArenaChunk *this)

{
  uint uVar1;
  undefined8 *in_RDX;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) < *(uint *)(this + 8)) {
    uVar1 = *(uint *)(this + 0xc);
  }
  if ((ulonglong)uVar1 <= (ulonglong)*(uint *)(this + 8)) {
    *in_RDX = this + (ulonglong)*(uint *)(this + 8) * 8 + 0x10;
    in_RDX[1] = (ulonglong)uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// begin @ 14f91fc40

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> const *
   __ptr64 __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::begin(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::
begin(Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this)

{
  return *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this;
}

// begin @ 14f91fc50

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   __cdecl absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena
   * __ptr64> >::begin(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::begin
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  return *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this;
}

// begin @ 14f91fc60

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::StringBlock::begin(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::StringBlock::begin(StringBlock *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 1);
}

// capacity @ 14f91fc70

/* public: unsigned __int64 __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::capacity
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 3;
}

// capacity @ 14f91fc90

/* public: unsigned int __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::capacity(void)const __ptr64 */

uint __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::capacity(SerialArenaChunk *this)

{
  return *(uint *)(this + 8);
}

// data @ 14f91fca0

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> const *
   __ptr64 __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::data(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::data
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this)

{
  return *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this;
}

// data @ 14f91fcb0

/* public: struct std::atomic<void * __ptr64> const * __ptr64 __cdecl
   absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const >::data(void)const __ptr64 */

atomic<void*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::data
          (Span<std::atomic<void*___ptr64>_const_> *this)

{
  return *(atomic<void*___ptr64> **)this;
}

// data @ 14f91fcc0

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   __cdecl absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena
   * __ptr64> >::data(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::data
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  return *(atomic<google::protobuf::internal::SerialArena*___ptr64> **)this;
}

// deallocate @ 14f91fcd0

/* public: void __cdecl std::allocator<void * __ptr64>::deallocate(void * __ptr64 * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<void*___ptr64>::deallocate
          (allocator<void*___ptr64> *this,void **param_1,__uint64 param_2)

{
  void **ppvVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  ppvVar1 = param_1;
  if (0xfff < uVar2) {
    ppvVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)ppvVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(ppvVar1,uVar2);
  return;
}

// effective_size @ 14f91fd20

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::StringBlock::effective_size(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::StringBlock::effective_size(StringBlock *this)

{
  return (ulonglong)this->allocated_size_ - 0x10;
}

// end @ 14f91fd30

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> const *
   __ptr64 __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::end(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::end
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (*(longlong *)this + *(longlong *)(this + 8) * 8);
}

// end @ 14f91fd50

/* public: struct std::atomic<class google::protobuf::internal::SerialArena * __ptr64> * __ptr64
   __cdecl absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena
   * __ptr64> >::end(void)const __ptr64 */

atomic<google::protobuf::internal::SerialArena*___ptr64> * __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::end
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  return (atomic<google::protobuf::internal::SerialArena*___ptr64> *)
         (*(longlong *)this + *(longlong *)(this + 8) * 8);
}

// end @ 14f91fd70

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::StringBlock::end(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::StringBlock::end(StringBlock *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((longlong)&this->next_ + (ulonglong)this->allocated_size_);
}

// fetch_add @ 14f91fd80

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: unsigned __int64 __cdecl std::_Atomic_integral<unsigned __int64,8>::fetch_add(unsigned
   __int64,enum std::memory_order) __ptr64 */

__uint64 __thiscall
std::_Atomic_integral<unsigned___int64,8>::fetch_add
          (_Atomic_integral<unsigned___int64,8> *this,__uint64 param_1,memory_order param_2)

{
  _Atomic_integral<unsigned___int64,8> _Var1;
  
  LOCK();
  _Var1 = *this;
  *this = (_Atomic_integral<unsigned___int64,8>)((longlong)*this + param_1);
  UNLOCK();
  return (__uint64)_Var1;
}

// first @ 14f91fd90

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const > __cdecl
   absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> const >::first(unsigned __int64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::
first(Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this,
     __uint64 param_1)

{
  ulonglong in_R8;
  
  if (in_R8 <= *(ulonglong *)(this + 8)) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(ulonglong *)(param_1 + 8) = in_R8;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  base_internal::ThrowStdOutOfRange("len > size()");
}

// first @ 14f91fdd0

/* public: class absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const > __cdecl
   absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const >::first(unsigned __int64)const
   __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::first
          (Span<std::atomic<void*___ptr64>_const_> *this,__uint64 param_1)

{
  ulonglong in_R8;
  
  if (in_R8 <= *(ulonglong *)(this + 8)) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(ulonglong *)(param_1 + 8) = in_R8;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  base_internal::ThrowStdOutOfRange("len > size()");
}

// first @ 14f91fe10

/* public: class absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> > __cdecl absl::lts_20240722::Span<struct
   std::atomic<class google::protobuf::internal::SerialArena * __ptr64> >::first(unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::first
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this,
          __uint64 param_1)

{
  ulonglong in_R8;
  
  if (in_R8 <= *(ulonglong *)(this + 8)) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(ulonglong *)(param_1 + 8) = in_R8;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  base_internal::ThrowStdOutOfRange("len > size()");
}

// get @ 14f91fe50

/* public: struct google::protobuf::internal::AllocationPolicy * __ptr64 __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::get(void) __ptr64 */

AllocationPolicy * __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::get(TaggedAllocationPolicyPtr *this)

{
  return (AllocationPolicy *)(this->policy_ & 0xfffffffffffffff8);
}

// get @ 14f91fe60

/* public: struct google::protobuf::internal::AllocationPolicy const * __ptr64 __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::get(void)const __ptr64 */

AllocationPolicy * __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::get(TaggedAllocationPolicyPtr *this)

{
  return (AllocationPolicy *)(this->policy_ & 0xfffffffffffffff8);
}

// head @ 14f91fe70

/* private: struct google::protobuf::internal::ArenaBlock * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::head(void) __ptr64 */

ArenaBlock * __thiscall google::protobuf::internal::SerialArena::head(SerialArena *this)

{
  return (ArenaBlock *)this->head_;
}

// head @ 14f91fe80

/* private: struct google::protobuf::internal::ArenaBlock const * __ptr64 __cdecl
   google::protobuf::internal::SerialArena::head(void)const __ptr64 */

ArenaBlock * __thiscall google::protobuf::internal::SerialArena::head(SerialArena *this)

{
  return (ArenaBlock *)this->head_;
}

// header @ 14f91fe90

/* private: struct google::protobuf::internal::SerialArenaChunkHeader & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::header(void) __ptr64 */

SerialArenaChunkHeader * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::header(SerialArenaChunk *this)

{
  return (SerialArenaChunkHeader *)this;
}

// header @ 14f91fea0

/* private: struct google::protobuf::internal::SerialArenaChunkHeader const & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::header(void)const __ptr64 */

SerialArenaChunkHeader * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::header(SerialArenaChunk *this)

{
  return (SerialArenaChunkHeader *)this;
}

// id @ 14f91feb0

/* public: struct std::atomic<void * __ptr64> & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::id(unsigned int) __ptr64 */

atomic<void*___ptr64> * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::id
          (SerialArenaChunk *this,uint param_1)

{
  return (atomic<void*___ptr64> *)(this + ((ulonglong)param_1 + 2) * 8);
}

// ids @ 14f91fed0

/* public: class absl::lts_20240722::Span<struct std::atomic<void * __ptr64> const > __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ids(void)const __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ids(SerialArenaChunk *this)

{
  uint uVar1;
  longlong *in_RDX;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) < *(uint *)(this + 8)) {
    uVar1 = *(uint *)(this + 0xc);
  }
  if ((ulonglong)uVar1 <= (ulonglong)*(uint *)(this + 8)) {
    *in_RDX = (longlong)(this + 0x10);
    in_RDX[1] = (ulonglong)uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::base_internal::ThrowStdOutOfRange("len > size()");
}

// insert @ 14f91ff20

/* public: bool __cdecl google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::insert(void *
   __ptr64,class google::protobuf::internal::SerialArena * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::insert
          (SerialArenaChunk *this,void *param_1,SerialArena *param_2)

{
  SerialArenaChunk *pSVar1;
  longlong lVar2;
  uint uVar3;
  
  LOCK();
  pSVar1 = this + 0xc;
  uVar3 = *(uint *)pSVar1;
  *(uint *)pSVar1 = *(uint *)pSVar1 + 1;
  UNLOCK();
  if (*(uint *)(this + 8) <= uVar3) {
    *(uint *)(this + 0xc) = *(uint *)(this + 8);
    return false;
  }
  lVar2 = (ulonglong)uVar3 * 8;
  *(void **)(this + lVar2 + 0x10) = param_1;
  *(SerialArena **)(this + (ulonglong)*(uint *)(this + 8) * 8 + 0x10 + lVar2) = param_2;
  return true;
}

// is_user_owned_initial_block @ 14f91ff70

/* public: bool __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::is_user_owned_initial_block(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::is_user_owned_initial_block
          (TaggedAllocationPolicyPtr *this)

{
  return (bool)((byte)this->policy_ & 1);
}

// load @ 14f91ff80

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: char * __ptr64 __cdecl std::_Atomic_storage<char * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

char * __thiscall
std::_Atomic_storage<char*___ptr64,8>::load
          (_Atomic_storage<char*___ptr64,8> *this,memory_order param_1)

{
  return *(char **)this;
}

// load @ 14f91ffa0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: struct google::protobuf::internal::ArenaBlock * __ptr64 __cdecl
   std::_Atomic_storage<struct google::protobuf::internal::ArenaBlock * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

ArenaBlock * __thiscall
std::_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8>::load
          (_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> *this,
          memory_order param_1)

{
  return *(ArenaBlock **)this;
}

// load @ 14f91ffc0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class google::protobuf::internal::SerialArena * __ptr64 __cdecl
   std::_Atomic_storage<class google::protobuf::internal::SerialArena * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

SerialArena * __thiscall
std::_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8>::load
          (_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> *this,
          memory_order param_1)

{
  return *(SerialArena **)this;
}

// load @ 14f91ffe0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 __cdecl
   std::_Atomic_storage<class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk *
   __ptr64,8>::load(enum std::memory_order)const __ptr64 */

SerialArenaChunk * __thiscall
std::_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>::load
          (_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>
           *this,memory_order param_1)

{
  return *(SerialArenaChunk **)this;
}

// load @ 14f920000

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class google::protobuf::internal::StringBlock * __ptr64 __cdecl
   std::_Atomic_storage<class google::protobuf::internal::StringBlock * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

StringBlock * __thiscall
std::_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8>::load
          (_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> *this,
          memory_order param_1)

{
  return *(StringBlock **)this;
}

// load @ 14f920020

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void * __ptr64 __cdecl std::_Atomic_storage<void * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

void * __thiscall
std::_Atomic_storage<void*___ptr64,8>::load
          (_Atomic_storage<void*___ptr64,8> *this,memory_order param_1)

{
  return *(void **)this;
}

// max_size @ 14f920040

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<void
   * __ptr64> >::max_size(class std::allocator<void * __ptr64> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<void*___ptr64>_>::max_size
          (allocator<void*___ptr64> *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14f920060

/* public: unsigned __int64 __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::max_size
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14f920080

/* private: static unsigned short __cdecl google::protobuf::internal::StringBlock::max_size(void) */

ushort __cdecl google::protobuf::internal::StringBlock::max_size(void)

{
  return 0x2000;
}

// min_size @ 14f920090

/* private: static unsigned short __cdecl google::protobuf::internal::StringBlock::min_size(void) */

ushort __cdecl google::protobuf::internal::StringBlock::min_size(void)

{
  return 0x100;
}

// next @ 14f9200a0

/* public: class google::protobuf::internal::StringBlock * __ptr64 __cdecl
   google::protobuf::internal::StringBlock::next(void)const __ptr64 */

StringBlock * __thiscall google::protobuf::internal::StringBlock::next(StringBlock *this)

{
  return this->next_;
}

// next_chunk @ 14f9200b0

/* public: class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::next_chunk(void) __ptr64 */

SerialArenaChunk * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::next_chunk(SerialArenaChunk *this)

{
  return *(SerialArenaChunk **)this;
}

// next_chunk @ 14f9200c0

/* public: class google::protobuf::internal::ThreadSafeArena::SerialArenaChunk const * __ptr64
   __cdecl google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::next_chunk(void)const
   __ptr64 */

SerialArenaChunk * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::next_chunk(SerialArenaChunk *this)

{
  return *(SerialArenaChunk **)this;
}

// next_size @ 14f9200d0

/* private: unsigned __int64 __cdecl google::protobuf::internal::StringBlock::next_size(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::StringBlock::next_size(StringBlock *this)

{
  return (ulonglong)this->next_size_;
}

// ptr @ 14f9200e0

/* private: char * __ptr64 __cdecl google::protobuf::internal::SerialArena::ptr(void) __ptr64 */

char * __thiscall google::protobuf::internal::SerialArena::ptr(SerialArena *this)

{
  return (char *)this->ptr_;
}

// ptr @ 14f9200f0

/* private: char const * __ptr64 __cdecl google::protobuf::internal::SerialArena::ptr(void)const
   __ptr64 */

char * __thiscall google::protobuf::internal::SerialArena::ptr(SerialArena *this)

{
  return (char *)this->ptr_;
}

// ptr @ 14f920100

/* private: char * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ptr(void) __ptr64 */

char * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ptr(SerialArenaChunk *this)

{
  return (char *)this;
}

// ptr @ 14f920110

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ptr(void)const __ptr64 */

char * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::ptr(SerialArenaChunk *this)

{
  return (char *)this;
}

// push_back @ 14f920120

/* public: void __cdecl std::vector<void * __ptr64,class std::allocator<void * __ptr64>
   >::push_back(void * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::push_back
          (vector<void*___ptr64,std::allocator<void*___ptr64>_> *this,void **param_1)

{
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(this + 8);
  if (ppvVar1 != *(void ***)(this + 0x10)) {
    *ppvVar1 = *param_1;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    return;
  }
  _Emplace_reallocate<void*___ptr64_const&___ptr64>(this,ppvVar1,param_1);
  return;
}

// rbegin @ 14f920150

/* public: class std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64> __cdecl
   absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> >::rbegin(void)const __ptr64 */

void __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::rbegin
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  longlong *in_RDX;
  
  *in_RDX = *(longlong *)this + *(longlong *)(this + 8) * 8;
  return;
}

// rend @ 14f920170

/* public: class std::reverse_iterator<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> * __ptr64> __cdecl
   absl::lts_20240722::Span<struct std::atomic<class google::protobuf::internal::SerialArena *
   __ptr64> >::rend(void)const __ptr64 */

void __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::rend
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// safe_size @ 14f920180

/* private: unsigned int __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::safe_size(void)const __ptr64 */

uint __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::safe_size(SerialArenaChunk *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) < *(uint *)(this + 8)) {
    uVar1 = *(uint *)(this + 0xc);
  }
  return uVar1;
}

// set_is_user_owned_initial_block @ 14f9201a0

/* public: void __cdecl
   google::protobuf::internal::TaggedAllocationPolicyPtr::set_is_user_owned_initial_block(bool)
   __ptr64 */

void __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::set_is_user_owned_initial_block
          (TaggedAllocationPolicyPtr *this,bool param_1)

{
  ulonglong uVar1;
  
  uVar1 = this->policy_ | 1;
  if (!param_1) {
    uVar1 = this->policy_ & 0xfffffffffffffffe;
  }
  this->policy_ = uVar1;
  return;
}

// set_next @ 14f9201c0

/* public: void __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::set_next(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::set_next
          (SerialArenaChunk *this,SerialArenaChunk *param_1)

{
  *(SerialArenaChunk **)this = param_1;
  return;
}

// set_policy @ 14f9201d0

/* public: void __cdecl google::protobuf::internal::TaggedAllocationPolicyPtr::set_policy(struct
   google::protobuf::internal::AllocationPolicy * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::TaggedAllocationPolicyPtr::set_policy
          (TaggedAllocationPolicyPtr *this,AllocationPolicy *param_1)

{
  this->policy_ = this->policy_ & 7;
  this->policy_ = this->policy_ | (ulonglong)param_1;
  return;
}

// set_ptr @ 14f9201e0

/* private: void __cdecl google::protobuf::internal::SerialArena::set_ptr(char * __ptr64) __ptr64 */

void __thiscall google::protobuf::internal::SerialArena::set_ptr(SerialArena *this,char *param_1)

{
  this->ptr_ = (atomic<char_*>)param_1;
  return;
}

// set_range @ 14f9201f0

/* private: void __cdecl google::protobuf::internal::SerialArena::set_range(char * __ptr64,char *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::set_range(SerialArena *this,char *param_1,char *param_2)

{
  this->ptr_ = (atomic<char_*>)param_1;
  this->prefetch_ptr_ = param_1;
  this->limit_ = param_2;
  return;
}

// size @ 14f920210

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> const >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_>::size
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_const_> *this)

{
  return *(__uint64 *)(this + 8);
}

// size @ 14f920220

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<struct std::atomic<void * __ptr64>
   const >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<void*___ptr64>_const_>::size
          (Span<std::atomic<void*___ptr64>_const_> *this)

{
  return *(__uint64 *)(this + 8);
}

// size @ 14f920230

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<struct std::atomic<class
   google::protobuf::internal::SerialArena * __ptr64> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_>::size
          (Span<std::atomic<google::protobuf::internal::SerialArena*___ptr64>_> *this)

{
  return *(__uint64 *)(this + 8);
}

// size @ 14f920240

/* private: struct std::atomic<unsigned int> & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::size(void) __ptr64 */

atomic<unsigned_int> * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::size(SerialArenaChunk *this)

{
  return (atomic<unsigned_int> *)(this + 0xc);
}

// size @ 14f920250

/* private: struct std::atomic<unsigned int> const & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::size(void)const __ptr64 */

atomic<unsigned_int> * __thiscall
google::protobuf::internal::ThreadSafeArena::SerialArenaChunk::size(SerialArenaChunk *this)

{
  return (atomic<unsigned_int> *)(this + 0xc);
}

// store @ 14f920260

/* public: void __cdecl std::_Atomic_storage<unsigned int,4>::store(unsigned int) __ptr64 */

void __thiscall
std::_Atomic_storage<unsigned_int,4>::store(_Atomic_storage<unsigned_int,4> *this,uint param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 14f920270

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<unsigned int,4>::store(unsigned int,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<unsigned_int,4>::store
          (_Atomic_storage<unsigned_int,4> *this,uint param_1,memory_order param_2)

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

// store @ 14f9202c0

/* public: void __cdecl std::_Atomic_storage<char * __ptr64,8>::store(char * __ptr64 const) __ptr64
    */

void __thiscall
std::_Atomic_storage<char*___ptr64,8>::store(_Atomic_storage<char*___ptr64,8> *this,char *param_1)

{
  LOCK();
  *(char **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f9202d0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<char * __ptr64,8>::store(char * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<char*___ptr64,8>::store
          (_Atomic_storage<char*___ptr64,8> *this,char *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(char **)this = param_1;
    return;
  default:
    LOCK();
    *(char **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(char **)this = param_1;
    return;
  }
}

// store @ 14f920320

/* public: void __cdecl std::_Atomic_storage<struct google::protobuf::internal::ArenaBlock *
   __ptr64,8>::store(struct google::protobuf::internal::ArenaBlock * __ptr64 const) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> *this,
          ArenaBlock *param_1)

{
  LOCK();
  *(ArenaBlock **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f920330

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<struct google::protobuf::internal::ArenaBlock *
   __ptr64,8>::store(struct google::protobuf::internal::ArenaBlock * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::ArenaBlock*___ptr64,8> *this,
          ArenaBlock *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(ArenaBlock **)this = param_1;
    return;
  default:
    LOCK();
    *(ArenaBlock **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(ArenaBlock **)this = param_1;
    return;
  }
}

// store @ 14f920380

/* public: void __cdecl std::_Atomic_storage<class google::protobuf::internal::SerialArena *
   __ptr64,8>::store(class google::protobuf::internal::SerialArena * __ptr64 const) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> *this,
          SerialArena *param_1)

{
  LOCK();
  *(SerialArena **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f920390

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<class google::protobuf::internal::SerialArena *
   __ptr64,8>::store(class google::protobuf::internal::SerialArena * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::SerialArena*___ptr64,8> *this,
          SerialArena *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(SerialArena **)this = param_1;
    return;
  default:
    LOCK();
    *(SerialArena **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(SerialArena **)this = param_1;
    return;
  }
}

// store @ 14f9203e0

/* public: void __cdecl std::_Atomic_storage<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64,8>::store(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>::
store(_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>
      *this,SerialArenaChunk *param_1)

{
  LOCK();
  *(SerialArenaChunk **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f9203f0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64,8>::store(class
   google::protobuf::internal::ThreadSafeArena::SerialArenaChunk * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>::
store(_Atomic_storage<google::protobuf::internal::ThreadSafeArena::SerialArenaChunk*___ptr64,8>
      *this,SerialArenaChunk *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(SerialArenaChunk **)this = param_1;
    return;
  default:
    LOCK();
    *(SerialArenaChunk **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(SerialArenaChunk **)this = param_1;
    return;
  }
}

// store @ 14f920440

/* public: void __cdecl std::_Atomic_storage<class google::protobuf::internal::StringBlock *
   __ptr64,8>::store(class google::protobuf::internal::StringBlock * __ptr64 const) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> *this,
          StringBlock *param_1)

{
  LOCK();
  *(StringBlock **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f920450

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<class google::protobuf::internal::StringBlock *
   __ptr64,8>::store(class google::protobuf::internal::StringBlock * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8>::store
          (_Atomic_storage<google::protobuf::internal::StringBlock*___ptr64,8> *this,
          StringBlock *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(StringBlock **)this = param_1;
    return;
  default:
    LOCK();
    *(StringBlock **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(StringBlock **)this = param_1;
    return;
  }
}

// store @ 14f9204a0

/* public: void __cdecl std::_Atomic_storage<void * __ptr64,8>::store(void * __ptr64 const) __ptr64
    */

void __thiscall
std::_Atomic_storage<void*___ptr64,8>::store(_Atomic_storage<void*___ptr64,8> *this,void *param_1)

{
  LOCK();
  *(void **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f9204b0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<void * __ptr64,8>::store(void * __ptr64 const,enum
   std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<void*___ptr64,8>::store
          (_Atomic_storage<void*___ptr64,8> *this,void *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(void **)this = param_1;
    return;
  default:
    LOCK();
    *(void **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(void **)this = param_1;
    return;
  }
}

// thread_cache @ 14f920500

/* private: static struct google::protobuf::internal::ThreadSafeArena::ThreadCache & __ptr64 __cdecl
   google::protobuf::internal::ThreadSafeArena::thread_cache(void) */

ThreadCache * __cdecl google::protobuf::internal::ThreadSafeArena::thread_cache(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return (ThreadCache *)(lVar1 + 0x9d00);
}

// FUN_150294ec0 @ 150294ec0

void FUN_150294ec0(undefined8 param_1,longlong param_2)

{
  std::allocator<void*___ptr64>::deallocate
            (*(allocator<void*___ptr64> **)(param_2 + 0x60),*(void ***)(param_2 + 0x78),
             *(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_150294ef0 @ 150294ef0

void FUN_150294ef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150294f40 @ 150294f40

void FUN_150294f40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150294f70 @ 150294f70

void FUN_150294f70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
    ~vector<void*___ptr64,std::allocator<void*___ptr64>_>
              (*(vector<void*___ptr64,std::allocator<void*___ptr64>_> **)(param_2 + 0x48));
  }
  return;
}

// FUN_150294fa0 @ 150294fa0

void FUN_150294fa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
    ~vector<void*___ptr64,std::allocator<void*___ptr64>_>
              (*(vector<void*___ptr64,std::allocator<void*___ptr64>_> **)(param_2 + 0x48));
  }
  return;
}

// FUN_150294fd0 @ 150294fd0

void FUN_150294fd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
    ~vector<void*___ptr64,std::allocator<void*___ptr64>_>
              (*(vector<void*___ptr64,std::allocator<void*___ptr64>_> **)(param_2 + 0x48));
  }
  return;
}

// FUN_150295000 @ 150295000

void FUN_150295000(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    std::vector<void*___ptr64,std::allocator<void*___ptr64>_>::
    ~vector<void*___ptr64,std::allocator<void*___ptr64>_>
              (*(vector<void*___ptr64,std::allocator<void*___ptr64>_> **)(param_2 + 0x48));
  }
  return;
}

