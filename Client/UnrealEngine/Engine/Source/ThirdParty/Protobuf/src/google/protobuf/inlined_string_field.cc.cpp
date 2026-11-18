// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 13

// ScopedCheckInvariants @ 14fb7a2d0

/* public: __cdecl
   google::protobuf::internal::InlinedStringField::ScopedCheckInvariants::ScopedCheckInvariants(class
   google::protobuf::internal::InlinedStringField const * __ptr64) __ptr64 */

ScopedCheckInvariants * __thiscall
google::protobuf::internal::InlinedStringField::ScopedCheckInvariants::ScopedCheckInvariants
          (ScopedCheckInvariants *this,InlinedStringField *param_1)

{
  return this;
}

// ClearToDefault @ 14fb7a2e0

/* public: void __cdecl google::protobuf::internal::InlinedStringField::ClearToDefault(class
   google::protobuf::internal::LazyString const & __ptr64,class google::protobuf::Arena *
   __ptr64,bool) __ptr64 */

void __thiscall
google::protobuf::internal::InlinedStringField::ClearToDefault
          (InlinedStringField *this,LazyString *param_1,Arena *param_2,bool param_3)

{
  InlinedStringField *pIVar1;
  atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*> aVar2;
  
  aVar2 = param_1->inited_;
  if (aVar2 == (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>
               )0x0) {
    aVar2 = (atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)
            LazyString::Init(param_1);
  }
  if ((atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>)this !=
      aVar2) {
    pIVar1 = (InlinedStringField *)((longlong)aVar2 + 0x10);
    if (0xf < *(ulonglong *)((longlong)aVar2 + 0x18)) {
      aVar2 = *(atomic<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*>
                *)aVar2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,(char *)aVar2
               ,*(ulong64 *)pIVar1);
    return;
  }
  return;
}

// Mutable @ 14fb7a330

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InlinedStringField::Mutable(class
   google::protobuf::internal::LazyString const & __ptr64,class google::protobuf::Arena *
   __ptr64,bool,unsigned int * __ptr64,unsigned int,class google::protobuf::MessageLite * __ptr64)
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::Mutable
          (InlinedStringField *this,LazyString *param_1,Arena *param_2,bool param_3,uint *param_4,
          uint param_5,MessageLite *param_6)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// Mutable @ 14fb7a340

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InlinedStringField::Mutable(class
   google::protobuf::Arena * __ptr64,bool,unsigned int * __ptr64,unsigned int,class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::Mutable
          (InlinedStringField *this,Arena *param_1,bool param_2,uint *param_3,uint param_4,
          MessageLite *param_5)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// MutableSlow @ 14fb7a350

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::InlinedStringField::MutableSlow(class
   google::protobuf::Arena * __ptr64,bool,unsigned int * __ptr64,unsigned int,class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::MutableSlow
          (InlinedStringField *this,Arena *param_1,bool param_2,uint *param_3,uint param_4,
          MessageLite *param_5)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// Release @ 14fb7a360

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InlinedStringField::Release(class
   google::protobuf::Arena * __ptr64,bool) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::Release
          (InlinedStringField *this,Arena *param_1,bool param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  InlinedStringField *pIVar4;
  
  if ((param_1 == (Arena *)0x0) || (!param_2)) {
    pbVar3 = ::operator_new(0x20);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar3->_Mypair)._Myval2._Mysize = 0;
      (pbVar3->_Mypair)._Myval2._Myres = 0;
      uVar1 = *(undefined8 *)(this + 8);
      (pbVar3->_Mypair)._Myval2._Bx._Ptr = *(char **)this;
      *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = uVar1;
      uVar2 = *(ulong64 *)(this + 0x18);
      (pbVar3->_Mypair)._Myval2._Mysize = *(ulong64 *)(this + 0x10);
      (pbVar3->_Mypair)._Myval2._Myres = uVar2;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0xf;
      *this = (InlinedStringField)0x0;
    }
  }
  else {
    this_00 = ::operator_new(0x20);
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )this);
    }
  }
  pIVar4 = this + 0x10;
  if (0xf < *(ulonglong *)(this + 0x18)) {
    this = *(InlinedStringField **)this;
  }
  *(undefined8 *)pIVar4 = 0;
  *this = (InlinedStringField)0x0;
  return pbVar3;
}

// Release @ 14fb7a410

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InlinedStringField::Release(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::Release(InlinedStringField *this)

{
  InlinedStringField *pIVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  
  pbVar4 = ::operator_new(0x20);
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pIVar1 = this + 0x10;
  if (pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar4->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar4->_Mypair)._Myval2._Mysize = 0;
    (pbVar4->_Mypair)._Myval2._Myres = 0;
    uVar2 = *(undefined8 *)(this + 8);
    (pbVar4->_Mypair)._Myval2._Bx._Ptr = *(char **)this;
    *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = uVar2;
    uVar3 = *(ulong64 *)(this + 0x18);
    (pbVar4->_Mypair)._Myval2._Mysize = *(ulong64 *)(this + 0x10);
    (pbVar4->_Mypair)._Myval2._Myres = uVar3;
    *(undefined8 *)pIVar1 = 0;
    *(undefined8 *)(this + 0x18) = 0xf;
    *this = (InlinedStringField)0x0;
    pbVar5 = pbVar4;
  }
  if (0xf < *(ulonglong *)(this + 0x18)) {
    this = *(InlinedStringField **)this;
  }
  *(undefined8 *)pIVar1 = 0;
  *this = (InlinedStringField)0x0;
  return pbVar5;
}

// Set @ 14fb7a480

/* public: void __cdecl google::protobuf::internal::InlinedStringField::Set(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&
   __ptr64,class google::protobuf::Arena * __ptr64,bool,unsigned int * __ptr64,unsigned int,class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InlinedStringField::Set
          (InlinedStringField *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2,
          bool param_3,uint *param_4,uint param_5,MessageLite *param_6)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if (this != (InlinedStringField *)param_1) {
    uVar1 = *(ulonglong *)(this + 0x18);
    if (0xf < uVar1) {
      pvVar2 = *(void **)this;
      uVar5 = uVar1 + 1;
      pvVar4 = pvVar2;
      if (0xfff < uVar5) {
        pvVar4 = *(void **)((longlong)pvVar2 + -8);
        uVar5 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar4,uVar5);
    }
    *(undefined8 *)(this + 0x18) = 0xf;
    *(undefined8 *)(this + 0x10) = 0;
    *this = (InlinedStringField)0x0;
    uVar3 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
    *(char **)this = (param_1->_Mypair)._Myval2._Bx._Ptr;
    *(undefined8 *)(this + 8) = uVar3;
    uVar5 = (param_1->_Mypair)._Myval2._Myres;
    *(ulong64 *)(this + 0x10) = (param_1->_Mypair)._Myval2._Mysize;
    *(ulong64 *)(this + 0x18) = uVar5;
    (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 0xf;
  }
  return;
}

// SetAllocated @ 14fb7a490

/* public: void __cdecl google::protobuf::internal::InlinedStringField::SetAllocated(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,class google::protobuf::Arena * __ptr64,bool,unsigned int * __ptr64,unsigned int,class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InlinedStringField::SetAllocated
          (InlinedStringField *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
          Arena *param_3,bool param_4,uint *param_5,uint param_6,MessageLite *param_7)

{
  ulonglong uVar1;
  void *pvVar2;
  InlinedStringField *pIVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if (param_2 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    pIVar3 = this;
    if (0xf < *(ulonglong *)(this + 0x18)) {
      pIVar3 = *(InlinedStringField **)this;
    }
    *(undefined8 *)(this + 0x10) = 0;
    *pIVar3 = (InlinedStringField)0x0;
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2);
  uVar1 = *(ulonglong *)(param_2 + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)param_2;
    uVar5 = uVar1 + 1;
    pvVar4 = pvVar2;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar2 + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  ::operator_delete(param_2,0x20);
  return;
}

// SetAllocatedNoArena @ 14fb7a530

/* public: void __cdecl google::protobuf::internal::InlinedStringField::SetAllocatedNoArena(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InlinedStringField::SetAllocatedNoArena
          (InlinedStringField *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  InlinedStringField *pIVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if (param_2 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    pIVar3 = this;
    if (0xf < *(ulonglong *)(this + 0x18)) {
      pIVar3 = *(InlinedStringField **)this;
    }
    *(undefined8 *)(this + 0x10) = 0;
    *pIVar3 = (InlinedStringField)0x0;
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2);
  uVar1 = *(ulonglong *)(param_2 + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)param_2;
    uVar5 = uVar1 + 1;
    pvVar4 = pvVar2;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar2 + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  ::operator_delete(param_2,0x20);
  return;
}

// SetNoArena @ 14fb7a5d0

/* public: void __cdecl google::protobuf::internal::InlinedStringField::SetNoArena(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > && __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::InlinedStringField::SetNoArena
          (InlinedStringField *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,param_1);
  return;
}

// UnsafeMutablePointer @ 14fb7a5e0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InlinedStringField::UnsafeMutablePointer(void)
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InlinedStringField::UnsafeMutablePointer(InlinedStringField *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// FUN_1502ac620 @ 1502ac620

void FUN_1502ac620(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

