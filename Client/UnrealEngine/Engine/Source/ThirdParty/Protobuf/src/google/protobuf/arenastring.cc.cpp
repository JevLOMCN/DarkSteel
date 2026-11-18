// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 73

// AllocateInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14f920540

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateInternal<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(void)
   __ptr64 */

void * __thiscall
google::protobuf::Arena::
AllocateInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (Arena *this)

{
  void *pvVar1;
  
  pvVar1 = internal::ThreadSafeArena::AllocateFromStringBlock(&this->impl_);
  return pvVar1;
}

// Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920550

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl google::protobuf::Arena::Create<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   google::protobuf::Arena * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Arena::
Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>(Arena *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 == (Arena *)0x0) {
    pbVar1 = ::operator_new(0x20);
    if (pbVar1 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
  }
  else {
    pbVar1 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  }
  (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar1->_Mypair)._Myval2._Mysize = 0;
  (pbVar1->_Mypair)._Myval2._Myres = 0xf;
  (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return pbVar1;
}

// Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64> @ 14f9205a0

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl google::protobuf::Arena::Create<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(class google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Arena::
Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64>
          (Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x20);
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (this != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               param_2);
    }
    return pbVar1;
  }
  pbVar1 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (pbVar1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             param_2);
  return pbVar1;
}

// Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_const*___ptr64,unsigned___int64> @ 14f9205f0

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl google::protobuf::Arena::Create<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,char const *
   __ptr64,unsigned __int64>(class google::protobuf::Arena * __ptr64,char const * __ptr64 &&
   __ptr64,unsigned __int64 && __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Arena::
Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_const*___ptr64,unsigned___int64>
          (Arena *param_1,char **param_2,__uint64 *param_3)

{
  ulong64 uVar1;
  char *pcVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  if (param_1 != (Arena *)0x0) {
    pbVar3 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
    uVar1 = *param_3;
    pcVar2 = *param_2;
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar3->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (pbVar3,pcVar2,uVar1);
    return pbVar3;
  }
  pbVar3 = ::operator_new(0x20);
  if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    uVar1 = *param_3;
    pcVar2 = *param_2;
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar3->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (pbVar3,pcVar2,uVar1);
  }
  return pbVar3;
}

// Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> @ 14f9206a0

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl google::protobuf::Arena::Create<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Arena::
Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          (Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  if (param_1 == (Arena *)0x0) {
    pbVar3 = ::operator_new(0x20);
    if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
  }
  else {
    pbVar3 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  }
  (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar3->_Mypair)._Myval2._Mysize = 0;
  (pbVar3->_Mypair)._Myval2._Myres = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  (pbVar3->_Mypair)._Myval2._Bx._Ptr = *(char **)param_2;
  *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_2 + 0x18);
  (pbVar3->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_2 + 0x10);
  (pbVar3->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  return pbVar3;
}

// MutableSlow<> @ 14f920710

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::MutableSlow<>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::MutableSlow<>(ArenaStringPtr *this,Arena *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 != (Arena *)0x0) {
    pbVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0xf;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 3);
    return pbVar1;
  }
  pbVar1 = ::operator_new(0x20);
  if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0xf;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 2);
    return pbVar1;
  }
  (this->tagged_ptr_).ptr_ = (void *)0x2;
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
}

// MutableSlow<google::protobuf::internal::LazyString> @ 14f9207a0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::MutableSlow<class
   google::protobuf::internal::LazyString>(class google::protobuf::Arena * __ptr64,class
   google::protobuf::internal::LazyString const & __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::MutableSlow<google::protobuf::internal::LazyString>
          (ArenaStringPtr *this,Arena *param_1,LazyString *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pbVar1 = LazyString::get(param_2);
  if (param_1 == (Arena *)0x0) {
    this_00 = ::operator_new(0x20);
    if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_00,pbVar1);
    }
    pvVar3 = (void *)((ulonglong)pbVar2 | 2);
  }
  else {
    pbVar2 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
    pbVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar2,pbVar1);
    pvVar3 = (void *)((ulonglong)pbVar2 | 3);
  }
  (this->tagged_ptr_).ptr_ = pvVar3;
  return pbVar2;
}

// NewString<> @ 14f920830

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::NewString<>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::NewString<>(ArenaStringPtr *this,Arena *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 != (Arena *)0x0) {
    pbVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0xf;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 3);
    return pbVar1;
  }
  pbVar1 = ::operator_new(0x20);
  if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0xf;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 2);
    return pbVar1;
  }
  (this->tagged_ptr_).ptr_ = (void *)0x2;
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
}

// NewString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64> @ 14f9208c0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::NewString<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(class google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::
NewString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
          (ArenaStringPtr *this,Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (param_1 == (Arena *)0x0) {
    this_00 = ::operator_new(0x20);
    if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )param_2);
    }
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 2);
    return pbVar1;
  }
  pbVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (pbVar1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             param_2);
  (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar1 | 3);
  return pbVar1;
}

// NewString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920950

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::NewString<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::
NewString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (ArenaStringPtr *this,Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  if (param_1 != (Arena *)0x0) {
    pbVar3 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar3->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Myres = 0;
    uVar1 = *(undefined8 *)(param_2 + 8);
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = *(char **)param_2;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = uVar1;
    uVar2 = *(ulong64 *)(param_2 + 0x18);
    (pbVar3->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_2 + 0x10);
    (pbVar3->_Mypair)._Myval2._Myres = uVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xf;
    *param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar3 | 3);
    return pbVar3;
  }
  pbVar3 = ::operator_new(0x20);
  if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar3->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Myres = 0;
    uVar1 = *(undefined8 *)(param_2 + 8);
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = *(char **)param_2;
    *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = uVar1;
    uVar2 = *(ulong64 *)(param_2 + 0x18);
    (pbVar3->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_2 + 0x10);
    (pbVar3->_Mypair)._Myval2._Myres = uVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xf;
    *param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar3 | 2);
    return pbVar3;
  }
  (this->tagged_ptr_).ptr_ = (void *)0x2;
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
}

// Own<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920a40

/* public: void __cdecl google::protobuf::Arena::Own<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

void __thiscall
google::protobuf::Arena::Own<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Arena *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    internal::ThreadSafeArena::AddCleanup
              (&this->impl_,param_1,
               internal::
               arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
    return;
  }
  return;
}

// OwnDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920a60

/* public: void __cdecl google::protobuf::Arena::OwnDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

void __thiscall
google::protobuf::Arena::
OwnDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Arena *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    internal::ThreadSafeArena::AddCleanup
              (&this->impl_,param_1,
               internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
    return;
  }
  return;
}

// Set<> @ 14f920a80

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::Set<>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::Set<>
          (ArenaStringPtr *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    if (param_2 == (Arena *)0x0) {
      pbVar4 = param_1;
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      uVar2 = (param_1->_Mypair)._Myval2._Mysize;
      this_00 = ::operator_new(0x20);
      if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
        (this_00->_Mypair)._Myval2._Mysize = 0;
        (this_00->_Mypair)._Myval2._Myres = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>(this_00,(char *)pbVar4,uVar2);
        pbVar5 = this_00;
      }
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar5 | 2);
    }
    else {
      pbVar5 = param_1;
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      uVar2 = (param_1->_Mypair)._Myval2._Mysize;
      pbVar4 = ThreadSafeArena::AllocateFromStringBlock(&param_2->impl_);
      (pbVar4->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar4->_Mypair)._Myval2._Mysize = 0;
      (pbVar4->_Mypair)._Myval2._Myres = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>(pbVar4,(char *)pbVar5,uVar2);
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar4 | 3);
    }
  }
  else {
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((ulonglong)pvVar1 & 0xfffffffffffffffc);
    if (pbVar5 != param_1) {
      p_Var3 = &param_1->_Mypair;
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (pbVar5,(char *)param_1,(p_Var3->_Myval2)._Mysize);
    }
  }
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>_> @ 14f920b70

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64> >(struct std::_Atomic_padded<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>_>
          (_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>_> @ 14f920b80

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64> >(struct std::_Atomic_padded<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>_>
          (_Atomic_padded<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64> @ 14f920b90

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const * __ptr64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const * __ptr64
   const & __ptr64) */

__int64 __cdecl
std::
_Atomic_reinterpret_as<__int64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_1)

{
  return (__int64)*param_1;
}

// _Pocca<std::allocator<char>_> @ 14f920ba0

/* void __cdecl std::_Pocca<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> const & __ptr64) */

void __cdecl std::_Pocca<std::allocator<char>_>(allocator<char> *param_1,allocator<char> *param_2)

{
  return;
}

// addressof<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_> @ 14f920bb0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64 __cdecl std::addressof<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::addressof<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920bc0

/* void __cdecl google::protobuf::internal::arena_delete_object<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(void * __ptr64) */

void __cdecl
google::protobuf::internal::
arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (void *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  if (param_1 != (void *)0x0) {
    uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
    if (0xf < uVar1) {
      pvVar2 = *(void **)param_1;
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar3,uVar4);
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0xf;
    *(undefined1 *)param_1 = 0;
    ::operator_delete(param_1,0x20);
  }
  return;
}

// arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f920c40

/* void __cdecl google::protobuf::internal::cleanup::arena_destruct_object<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void *
   __ptr64) */

void __cdecl
google::protobuf::internal::cleanup::
arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (void *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)param_1;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// TaggedStringPtr @ 14f920cc0

/* public: __cdecl google::protobuf::internal::TaggedStringPtr::TaggedStringPtr(class
   google::protobuf::internal::GlobalEmptyString const * __ptr64) __ptr64 */

TaggedStringPtr * __thiscall
google::protobuf::internal::TaggedStringPtr::TaggedStringPtr
          (TaggedStringPtr *this,GlobalEmptyString *param_1)

{
  this->ptr_ = param_1;
  return this;
}

// BytesAvailable @ 14f920cd0

/* private: int __cdecl google::protobuf::internal::EpsCopyInputStream::BytesAvailable(char const *
   __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::EpsCopyInputStream::BytesAvailable
          (EpsCopyInputStream *this,char *param_1)

{
  return (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
}

// ClearToDefault @ 14f920ce0

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::ClearToDefault(class
   google::protobuf::internal::LazyString const & __ptr64,class google::protobuf::Arena * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::ClearToDefault
          (ArenaStringPtr *this,LazyString *param_1,Arena *param_2)

{
  void *pvVar1;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) != 0) {
    this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              ((ulonglong)pvVar1 & 0xfffffffffffffffc);
    pbVar3 = LazyString::get(param_1);
    if (this_00 != pbVar3) {
      p_Var2 = &pbVar3->_Mypair;
      if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar3->_Mypair)._Myval2._Bx._Ptr;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (this_00,(char *)pbVar3,(p_Var2->_Myval2)._Mysize);
      return;
    }
  }
  return;
}

// ClearToEmpty @ 14f920d30

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::ClearToEmpty(void) __ptr64 */

void __thiscall google::protobuf::internal::ArenaStringPtr::ClearToEmpty(ArenaStringPtr *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) != 0) {
    puVar2 = (undefined8 *)((ulonglong)pvVar1 & 0xfffffffffffffffc);
    puVar3 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar3 = (undefined8 *)*puVar2;
    }
    puVar2[2] = 0;
    *(undefined1 *)puVar3 = 0;
  }
  return;
}

// FUN_14f920d60 @ 14f920d60

ulonglong * FUN_14f920d60(ulonglong *param_1,ThreadSafeArena *param_2,undefined8 *param_3)

{
  ulong64 uVar1;
  char *pcVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  uVar1 = param_3[1];
  pcVar2 = (char *)*param_3;
  if (param_2 == (ThreadSafeArena *)0x0) {
    this = operator_new(0x20);
    if (this != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
      (this->_Mypair)._Myval2._Mysize = 0;
      (this->_Mypair)._Myval2._Myres = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>(this,pcVar2,uVar1);
      this_00 = this;
    }
  }
  else {
    this_00 = google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(param_2);
    (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
    (this_00->_Mypair)._Myval2._Mysize = 0;
    (this_00->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (this_00,pcVar2,uVar1);
  }
  *param_1 = (ulonglong)this_00 | 3;
  return param_1;
}

// FUN_14f920e10 @ 14f920e10

ulonglong * FUN_14f920e10(ulonglong *param_1,undefined8 *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  this = operator_new(0x20);
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
    (this->_Mypair)._Myval2._Mysize = 0;
    (this->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (this,(char *)*param_2,param_2[1]);
  }
  *param_1 = (ulonglong)this | 2;
  return param_1;
}

// DebugHardenForceCopyDefaultString @ 14f920e90

/* bool __cdecl google::protobuf::internal::DebugHardenForceCopyDefaultString(void) */

bool __cdecl google::protobuf::internal::DebugHardenForceCopyDefaultString(void)

{
  return false;
}

// Destroy @ 14f920ea0

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::Destroy(void) __ptr64 */

void __thiscall google::protobuf::internal::ArenaStringPtr::Destroy(ArenaStringPtr *this)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((ulonglong)(this->tagged_ptr_).ptr_ ^ 2);
  if ((((ulonglong)plVar5 & 3) == 0) && (plVar5 != (longlong *)0x0)) {
    uVar1 = plVar5[3];
    if (0xf < uVar1) {
      pvVar2 = (void *)*plVar5;
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar3,uVar4);
    }
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
    ::operator_delete(plVar5,0x20);
    return;
  }
  return;
}

// ForceCopy @ 14f920f30

/* private: class google::protobuf::internal::TaggedStringPtr __cdecl
   google::protobuf::internal::TaggedStringPtr::ForceCopy(class google::protobuf::Arena *
   __ptr64)const __ptr64 */

TaggedStringPtr __thiscall
google::protobuf::internal::TaggedStringPtr::ForceCopy(TaggedStringPtr *this,Arena *param_1)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  ulong64 uVar3;
  char *pcVar4;
  ThreadSafeArena *in_R8;
  
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pcVar1 = (char *)((ulonglong)this->ptr_ & 0xfffffffffffffffc);
  if (in_R8 == (ThreadSafeArena *)0x0) {
    pcVar4 = pcVar1;
    if (0xf < *(ulonglong *)(pcVar1 + 0x18)) {
      pcVar4 = *(char **)pcVar1;
    }
    uVar3 = *(ulong64 *)(pcVar1 + 0x10);
    this_00 = ::operator_new(0x20);
    if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
      (this_00->_Mypair)._Myval2._Mysize = 0;
      (this_00->_Mypair)._Myval2._Myres = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>(this_00,pcVar4,uVar3);
      pbVar2 = this_00;
    }
    uVar3 = (ulonglong)pbVar2 | 2;
  }
  else {
    pcVar4 = pcVar1;
    if (0xf < *(ulonglong *)(pcVar1 + 0x18)) {
      pcVar4 = *(char **)pcVar1;
    }
    uVar3 = *(ulong64 *)(pcVar1 + 0x10);
    pbVar2 = ThreadSafeArena::AllocateFromStringBlock(in_R8);
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (pbVar2,pcVar4,uVar3);
    uVar3 = (ulonglong)pbVar2 | 3;
  }
  (param_1->impl_).tag_and_id_ = uVar3;
  return (TaggedStringPtr)param_1;
}

// Get @ 14f921000

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::TaggedStringPtr::Get(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::TaggedStringPtr::Get(TaggedStringPtr *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)this->ptr_ & 0xfffffffffffffffc);
}

// GetIfAllocated @ 14f921010

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::TaggedStringPtr::GetIfAllocated(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::TaggedStringPtr::GetIfAllocated(TaggedStringPtr *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((ulonglong)this->ptr_ ^ 2);
  if (((ulonglong)pbVar1 & 3) != 0) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  return pbVar1;
}

// Init @ 14f921030

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::internal::LazyString::Init(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::LazyString::Init(LazyString *this)

{
  char *pcVar1;
  ulong64 uVar2;
  atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*> aVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4a20) {
    _Init_thread_header(&DAT_1553e4a20);
    if (DAT_1553e4a20 == -1) {
      atexit(FUN_150474390);
      _Init_thread_footer(&DAT_1553e4a20);
    }
  }
  absl::lts_20240722::Mutex::Lock((Mutex *)&DAT_1553e4a18);
  aVar3 = this->inited_;
  if (this->inited_ ==
      (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)0x0) {
    pcVar1 = (this->field0_0x0).init_value_.ptr;
    uVar2 = (this->field0_0x0).init_value_.size;
    (this->field0_0x0).init_value_.ptr = (char *)0x0;
    (this->field0_0x0).init_value_.size = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x10) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x18) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,pcVar1,uVar2)
    ;
    this->inited_ =
         (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)this;
    aVar3 = (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)
            this;
  }
  absl::lts_20240722::Mutex::Unlock((Mutex *)&DAT_1553e4a18);
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)aVar3;
}

// InitAllocated @ 14f921100

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::InitAllocated(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::InitAllocated
          (ArenaStringPtr *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2)

{
  if (param_2 == (Arena *)0x0) {
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)param_1 | 2);
  }
  else {
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)param_1 | 3);
    if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_2->impl_,param_1,
                 arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                );
      return;
    }
  }
  return;
}

// InitDefault @ 14f921140

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::InitDefault(void) __ptr64 */

void __thiscall google::protobuf::internal::ArenaStringPtr::InitDefault(ArenaStringPtr *this)

{
  (this->tagged_ptr_).ptr_ = &fixed_address_empty_string;
  return;
}

// IsArena @ 14f921160

/* public: bool __cdecl google::protobuf::internal::TaggedStringPtr::IsArena(void)const __ptr64 */

bool __thiscall google::protobuf::internal::TaggedStringPtr::IsArena(TaggedStringPtr *this)

{
  return (bool)(*(byte *)&this->ptr_ & 1);
}

// IsDefault @ 14f921170

/* public: bool __cdecl google::protobuf::internal::ArenaStringPtr::IsDefault(void)const __ptr64 */

bool __thiscall google::protobuf::internal::ArenaStringPtr::IsDefault(ArenaStringPtr *this)

{
  return ((ulonglong)(this->tagged_ptr_).ptr_ & 3) == 0;
}

// IsDefault @ 14f921180

/* public: bool __cdecl google::protobuf::internal::TaggedStringPtr::IsDefault(void)const __ptr64 */

bool __thiscall google::protobuf::internal::TaggedStringPtr::IsDefault(TaggedStringPtr *this)

{
  return ((ulonglong)this->ptr_ & 3) == 0;
}

// IsFixedSizeArena @ 14f921190

/* private: bool __cdecl google::protobuf::internal::ArenaStringPtr::IsFixedSizeArena(void)const
   __ptr64 */

bool __thiscall google::protobuf::internal::ArenaStringPtr::IsFixedSizeArena(ArenaStringPtr *this)

{
  return false;
}

// IsMutable @ 14f9211a0

/* public: bool __cdecl google::protobuf::internal::TaggedStringPtr::IsMutable(void)const __ptr64 */

bool __thiscall google::protobuf::internal::TaggedStringPtr::IsMutable(TaggedStringPtr *this)

{
  return (bool)(*(byte *)&this->ptr_ >> 1 & 1);
}

// Mutable @ 14f9211b0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::Mutable(class
   google::protobuf::internal::LazyString const & __ptr64,class google::protobuf::Arena * __ptr64)
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::Mutable
          (ArenaStringPtr *this,LazyString *param_1,Arena *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  void *pvVar3;
  
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pvVar3 = (this->tagged_ptr_).ptr_;
  if (((byte)pvVar3 >> 1 & 1) == 0) {
    pbVar2 = LazyString::get(param_1);
    if (param_2 == (Arena *)0x0) {
      this_00 = ::operator_new(0x20);
      if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_00,pbVar2);
      }
      pvVar3 = (void *)((ulonglong)pbVar1 | 2);
    }
    else {
      pbVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_2->impl_);
      pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar1,pbVar2);
      pvVar3 = (void *)((ulonglong)pbVar1 | 3);
    }
    (this->tagged_ptr_).ptr_ = pvVar3;
  }
  else {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((ulonglong)pvVar3 & 0xfffffffffffffffc);
  }
  return pbVar1;
}

// Mutable @ 14f921260

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::Mutable(class google::protobuf::Arena
   * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::Mutable(ArenaStringPtr *this,Arena *param_1)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((byte)pvVar1 >> 1 & 1) != 0) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((ulonglong)pvVar1 & 0xfffffffffffffffc);
  }
  if (param_1 == (Arena *)0x0) {
    pbVar2 = ::operator_new(0x20);
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar2->_Mypair)._Myval2._Mysize = 0;
      (pbVar2->_Mypair)._Myval2._Myres = 0xf;
      (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 2);
      return pbVar2;
    }
    (this->tagged_ptr_).ptr_ = (void *)0x2;
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar2 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar2->_Mypair)._Myval2._Mysize = 0;
  (pbVar2->_Mypair)._Myval2._Myres = 0xf;
  (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 3);
  return pbVar2;
}

// MutableNoCopy @ 14f921310

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::MutableNoCopy(class
   google::protobuf::Arena * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::MutableNoCopy(ArenaStringPtr *this,Arena *param_1)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((byte)pvVar1 >> 1 & 1) != 0) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((ulonglong)pvVar1 & 0xfffffffffffffffc);
  }
  if (param_1 == (Arena *)0x0) {
    pbVar2 = ::operator_new(0x20);
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar2->_Mypair)._Myval2._Mysize = 0;
      (pbVar2->_Mypair)._Myval2._Myres = 0xf;
      (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 2);
      return pbVar2;
    }
    (this->tagged_ptr_).ptr_ = (void *)0x2;
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar2 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar2->_Mypair)._Myval2._Mysize = 0;
  (pbVar2->_Mypair)._Myval2._Myres = 0xf;
  (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 3);
  return pbVar2;
}

// ReadArenaString @ 14f9213c0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadArenaString(char const * __ptr64,struct
   google::protobuf::internal::ArenaStringPtr * __ptr64,class google::protobuf::Arena * __ptr64)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadArenaString
          (EpsCopyInputStream *this,char *param_1,ArenaStringPtr *param_2,Arena *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  undefined1 *puVar1;
  char *pcVar2;
  uint uVar3;
  ulong64 _Size;
  char *local_28;
  uint local_20;
  
  if ((byte)*param_1 < 0x80) {
    pcVar2 = param_1 + 1;
    uVar3 = (uint)(byte)*param_1;
  }
  else {
    ReadSizeFallback((char *)&local_28,(uint)param_1);
    pcVar2 = local_28;
    uVar3 = local_20;
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    if (param_3 == (Arena *)0x0) {
      this_00 = ::operator_new(0x20);
      if (this_00 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        puVar1 = &DAT_00000002;
      }
      else {
        (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
        (this_00->_Mypair)._Myval2._Mysize = 0;
        (this_00->_Mypair)._Myval2._Myres = 0xf;
        (this_00->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        puVar1 = (undefined1 *)((ulonglong)this_00 | 2);
      }
    }
    else {
      this_00 = ThreadSafeArena::AllocateFromStringBlock(&param_3->impl_);
      (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
      (this_00->_Mypair)._Myval2._Mysize = 0;
      (this_00->_Mypair)._Myval2._Myres = 0xf;
      (this_00->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      puVar1 = (undefined1 *)((ulonglong)this_00 | 3);
    }
    (param_2->tagged_ptr_).ptr_ = puVar1;
    if ((*(int *)&this->buffer_end_ - (int)pcVar2) + 0x10 < (int)uVar3) {
      pcVar2 = ReadStringFallback(this,pcVar2,uVar3,this_00);
    }
    else {
      _Size = (ulong64)(int)uVar3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                (this_00,_Size,'\0');
      if (0xf < (this_00->_Mypair)._Myval2._Myres) {
        this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (this_00->_Mypair)._Myval2._Bx._Ptr;
      }
      memcpy(this_00,pcVar2,_Size);
      pcVar2 = pcVar2 + _Size;
    }
  }
  return pcVar2;
}

// ReadSize @ 14f9214e0

/* unsigned int __cdecl google::protobuf::internal::ReadSize(char const * __ptr64 * __ptr64) */

uint __cdecl google::protobuf::internal::ReadSize(char **param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *local_18;
  uint local_10;
  
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  if (bVar1 < 0x80) {
    *param_1 = (char *)(pbVar2 + 1);
    return (uint)bVar1;
  }
  ReadSizeFallback((char *)&local_18,(uint)pbVar2);
  *param_1 = local_18;
  return local_10;
}

// ReadString @ 14f921530

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadString(char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadString
          (EpsCopyInputStream *this,char *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char *pcVar1;
  ulong64 _Size;
  
  if (param_2 <= (*(int *)&this->buffer_end_ - (int)param_1) + 0x10) {
    _Size = (ulong64)param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_3,_Size,'\0')
    ;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    memcpy(param_3,param_1,_Size);
    return param_1 + _Size;
  }
  pcVar1 = ReadStringFallback(this,param_1,param_2,param_3);
  return pcVar1;
}

// Release @ 14f9215b0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::Release(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::Release(ArenaStringPtr *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((ulonglong)pvVar1 & 0xfffffffffffffffc);
  pbVar4 = pbVar5;
  if (((ulonglong)pvVar1 & 1) != 0) {
    if (((ulonglong)pvVar1 >> 1 & 1) == 0) {
      pbVar4 = ::operator_new(0x20);
      if (pbVar4 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      }
      else {
        pbVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar4,pbVar5);
      }
    }
    else {
      pbVar4 = ::operator_new(0x20);
      if (pbVar4 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      }
      else {
        (pbVar4->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = 0;
        (pbVar4->_Mypair)._Myval2._Mysize = 0;
        (pbVar4->_Mypair)._Myval2._Myres = 0;
        uVar2 = *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8);
        (pbVar4->_Mypair)._Myval2._Bx._Ptr = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
        *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = uVar2;
        uVar3 = (pbVar5->_Mypair)._Myval2._Myres;
        (pbVar4->_Mypair)._Myval2._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
        (pbVar4->_Mypair)._Myval2._Myres = uVar3;
        (pbVar5->_Mypair)._Myval2._Mysize = 0;
        (pbVar5->_Mypair)._Myval2._Myres = 0xf;
        (pbVar5->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      }
    }
  }
  (this->tagged_ptr_).ptr_ = &fixed_address_empty_string;
  return pbVar4;
}

// Set @ 14f921670

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::Set(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&
   __ptr64,class google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::Set
          (ArenaStringPtr *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) != 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((ulonglong)pvVar1 & 0xfffffffffffffffc),param_1);
    return;
  }
  if (param_2 == (Arena *)0x0) {
    puVar4 = ::operator_new(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
      *puVar4 = (param_1->_Mypair)._Myval2._Bx._Ptr;
      puVar4[1] = uVar2;
      uVar3 = (param_1->_Mypair)._Myval2._Myres;
      puVar4[2] = (param_1->_Mypair)._Myval2._Mysize;
      puVar4[3] = uVar3;
      (param_1->_Mypair)._Myval2._Mysize = 0;
      (param_1->_Mypair)._Myval2._Myres = 0xf;
      (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)puVar4 | 2);
      return;
    }
    (this->tagged_ptr_).ptr_ = (void *)0x2;
    return;
  }
  puVar4 = ThreadSafeArena::AllocateFromStringBlock(&param_2->impl_);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
  *puVar4 = (param_1->_Mypair)._Myval2._Bx._Ptr;
  puVar4[1] = uVar2;
  uVar3 = (param_1->_Mypair)._Myval2._Myres;
  puVar4[2] = (param_1->_Mypair)._Myval2._Mysize;
  puVar4[3] = uVar3;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (this->tagged_ptr_).ptr_ = (void *)((ulonglong)puVar4 | 3);
  return;
}

// Set @ 14f921770

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::Set(class
   std::basic_string_view<char,struct std::char_traits<char> >,class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::Set
          (ArenaStringPtr *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          Arena *param_2)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pvVar1 = (this->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    if (param_2 == (Arena *)0x0) {
      this_00 = ::operator_new(0x20);
      if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
        (this_00->_Mypair)._Myval2._Mysize = 0;
        (this_00->_Mypair)._Myval2._Myres = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>(this_00,param_1->_Mydata,param_1->_Mysize);
        pbVar2 = this_00;
      }
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 2);
    }
    else {
      pbVar2 = ThreadSafeArena::AllocateFromStringBlock(&param_2->impl_);
      (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar2->_Mypair)._Myval2._Mysize = 0;
      (pbVar2->_Mypair)._Myval2._Myres = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>(pbVar2,param_1->_Mydata,param_1->_Mysize);
      (this->tagged_ptr_).ptr_ = (void *)((ulonglong)pbVar2 | 3);
    }
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((ulonglong)pvVar1 & 0xfffffffffffffffc),param_1->_Mydata,param_1->_Mysize);
  }
  return;
}

// SetAllocated @ 14f921840

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::SetAllocated(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::SetAllocated
          (ArenaStringPtr *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((ulonglong)(this->tagged_ptr_).ptr_ ^ 2);
  if ((((ulonglong)plVar5 & 3) == 0) && (plVar5 != (longlong *)0x0)) {
    uVar1 = plVar5[3];
    if (0xf < uVar1) {
      pvVar2 = (void *)*plVar5;
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar3,uVar4);
    }
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
    ::operator_delete(plVar5,0x20);
  }
  if (param_1 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (this->tagged_ptr_).ptr_ = &fixed_address_empty_string;
  }
  else if (param_2 == (Arena *)0x0) {
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)param_1 | 2);
  }
  else {
    (this->tagged_ptr_).ptr_ = (void *)((ulonglong)param_1 | 3);
    ThreadSafeArena::AddCleanup
              (&param_2->impl_,param_1,
               arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// SetAllocated @ 14f921930

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::TaggedStringPtr::SetAllocated(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::TaggedStringPtr::SetAllocated
          (TaggedStringPtr *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  this->ptr_ = (void *)((ulonglong)param_1 | 2);
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// SetMutableArena @ 14f921950

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::TaggedStringPtr::SetMutableArena(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::TaggedStringPtr::SetMutableArena
          (TaggedStringPtr *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  this->ptr_ = (void *)((ulonglong)param_1 | 3);
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// TagAs @ 14f921970

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::TaggedStringPtr::TagAs(enum
   google::protobuf::internal::TaggedStringPtr::Type,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::TaggedStringPtr::TagAs
          (TaggedStringPtr *this,Type param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  this->ptr_ = (void *)((longlong)(int)param_1 | (ulonglong)param_2);
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2;
}

// UnsafeMutablePointer @ 14f921990

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ArenaStringPtr::UnsafeMutablePointer(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::ArenaStringPtr::UnsafeMutablePointer(ArenaStringPtr *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->tagged_ptr_).ptr_ & 0xfffffffffffffffc);
}

// as_int @ 14f9219a0

/* private: unsigned __int64 __cdecl google::protobuf::internal::TaggedStringPtr::as_int(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::TaggedStringPtr::as_int(TaggedStringPtr *this)

{
  return (__uint64)this->ptr_;
}

// assert_aligned @ 14f9219b0

/* private: static void __cdecl google::protobuf::internal::TaggedStringPtr::assert_aligned(void
   const * __ptr64) */

void __cdecl google::protobuf::internal::TaggedStringPtr::assert_aligned(void *param_1)

{
  return;
}

// assign @ 14f9219c0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this !=
      param_1) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 param_1;
    }
    assign(this,(char *)param_1,*(ulong64 *)pbVar1);
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// get @ 14f9219f0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::internal::LazyString::get(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::LazyString::get(LazyString *this)

{
  char *pcVar1;
  ulong64 uVar2;
  atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*> aVar3;
  
  aVar3 = this->inited_;
  if (aVar3 == (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>
               )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < DAT_1553e4a20) {
      _Init_thread_header(&DAT_1553e4a20);
      if (DAT_1553e4a20 == -1) {
        atexit(FUN_150474390);
        _Init_thread_footer(&DAT_1553e4a20);
      }
    }
    absl::lts_20240722::Mutex::Lock((Mutex *)&DAT_1553e4a18);
    aVar3 = this->inited_;
    if (this->inited_ ==
        (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)0x0) {
      pcVar1 = (this->field0_0x0).init_value_.ptr;
      uVar2 = (this->field0_0x0).init_value_.size;
      (this->field0_0x0).init_value_.ptr = (char *)0x0;
      (this->field0_0x0).init_value_.size = 0;
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x10) = 0;
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x18) = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,pcVar1,
                 uVar2);
      this->inited_ =
           (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)
           this;
      aVar3 = (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)
              this;
    }
    absl::lts_20240722::Mutex::Unlock((Mutex *)&DAT_1553e4a18);
  }
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)aVar3;
}

// length @ 14f921ad0

/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::length(void)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::length
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mysize;
}

// load @ 14f921ae0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const * __ptr64 __cdecl std::_Atomic_storage<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::
_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
::load(_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
       *this,memory_order param_1)

{
  return *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this;
}

// store @ 14f921b00

/* public: void __cdecl std::_Atomic_storage<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const * __ptr64,8>::store(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const * __ptr64
   const) __ptr64 */

void __thiscall
std::
_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
::store(_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
        *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  LOCK();
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f921b10

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const * __ptr64,8>::store(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const * __ptr64
   const,enum std::memory_order) __ptr64 */

void __thiscall
std::
_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
::store(_Atomic_storage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const*___ptr64,8>
        *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
       memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
    return;
  default:
    LOCK();
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
    return;
  }
}

// FUN_150295030 @ 150295030

void FUN_150295030(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150295060 @ 150295060

void FUN_150295060(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150295090 @ 150295090

void FUN_150295090(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38),0x20);
  return;
}

// FUN_1502950c0 @ 1502950c0

void FUN_1502950c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38),0x20);
  return;
}

// FUN_1502950f0 @ 1502950f0

void FUN_1502950f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x20);
  return;
}

// FUN_150295120 @ 150295120

void FUN_150295120(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x20);
  return;
}

// FUN_150295150 @ 150295150

void FUN_150295150(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150295180 @ 150295180

void FUN_150295180(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48),0x20);
  return;
}

// FUN_1502951b0 @ 1502951b0

void FUN_1502951b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_1502951e0 @ 1502951e0

void FUN_1502951e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150295210 @ 150295210

void FUN_150295210(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150474390 @ 150474390

void FUN_150474390(void)

{
  return;
}

