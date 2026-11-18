// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 191

// Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_> @ 14f9f0820

/* protected: class google::protobuf::EnumValue * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Add<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::EnumValue> >(void) __ptr64
    */

EnumValue * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_>
          (RepeatedPtrFieldBase *this)

{
  EnumValue *pEVar1;
  
  pEVar1 = AddMessageLite(this,Arena::DefaultConstruct<google::protobuf::EnumValue>);
  return pEVar1;
}

// Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_> @ 14f9f0840

/* protected: class google::protobuf::Field * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Add<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Field> >(void) __ptr64 */

Field * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_>
          (RepeatedPtrFieldBase *this)

{
  Field *pFVar1;
  
  pFVar1 = AddMessageLite(this,Arena::DefaultConstruct<google::protobuf::Field>);
  return pFVar1;
}

// Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_> @ 14f9f0860

/* protected: class google::protobuf::Option * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Add<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Option> >(void) __ptr64 */

Option * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_>
          (RepeatedPtrFieldBase *this)

{
  Option *pOVar1;
  
  pOVar1 = AddMessageLite(this,Arena::DefaultConstruct<google::protobuf::Option>);
  return pOVar1;
}

// DefaultConstruct<google::protobuf::Any> @ 14f9f0880

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::Any>(class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Arena::DefaultConstruct<google::protobuf::Any>(Arena *param_1)

{
  Any *pAVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pAVar1 = Allocate(param_1,0x28);
    pvVar2 = (void *)Any::Any(pAVar1,param_1);
    return pvVar2;
  }
  pAVar1 = ::operator_new(0x28);
  pvVar2 = (void *)Any::Any(pAVar1,(Arena *)0x0);
  return pvVar2;
}

// DefaultConstruct<google::protobuf::Any> @ 14f9f08d0

/* protected: static class google::protobuf::Any * __ptr64 __cdecl
   google::protobuf::MessageLite::DefaultConstruct<class google::protobuf::Any>(class
   google::protobuf::Arena * __ptr64) */

Any * __cdecl google::protobuf::MessageLite::DefaultConstruct<google::protobuf::Any>(Arena *param_1)

{
  Any *pAVar1;
  
  pAVar1 = Arena::DefaultConstruct<google::protobuf::Any>(param_1);
  return pAVar1;
}

// DefaultConstruct<google::protobuf::EnumValue> @ 14f9f08e0

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::EnumValue>(class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::Arena::DefaultConstruct<google::protobuf::EnumValue>(Arena *param_1)

{
  EnumValue *pEVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pEVar1 = Allocate(param_1,0x40);
    pvVar2 = (void *)EnumValue::EnumValue(pEVar1,param_1);
    return pvVar2;
  }
  pEVar1 = ::operator_new(0x40);
  pvVar2 = (void *)EnumValue::EnumValue(pEVar1,(Arena *)0x0);
  return pvVar2;
}

// DefaultConstruct<google::protobuf::Field> @ 14f9f0930

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::Field>(class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Arena::DefaultConstruct<google::protobuf::Field>(Arena *param_1)

{
  Field *pFVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pFVar1 = Allocate(param_1,0x68);
    pvVar2 = (void *)Field::Field(pFVar1,param_1);
    return pvVar2;
  }
  pFVar1 = ::operator_new(0x68);
  pvVar2 = (void *)Field::Field(pFVar1,(Arena *)0x0);
  return pvVar2;
}

// DefaultConstruct<google::protobuf::Option> @ 14f9f0980

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::Option>(class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Arena::DefaultConstruct<google::protobuf::Option>(Arena *param_1)

{
  Option *pOVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pOVar1 = Allocate(param_1,0x28);
    pvVar2 = (void *)Option::Option(pOVar1,param_1);
    return pvVar2;
  }
  pOVar1 = ::operator_new(0x28);
  pvVar2 = (void *)Option::Option(pOVar1,(Arena *)0x0);
  return pvVar2;
}

// DefaultConstruct<google::protobuf::SourceContext> @ 14f9f09d0

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::SourceContext>(class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::Arena::DefaultConstruct<google::protobuf::SourceContext>(Arena *param_1)

{
  SourceContext *pSVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pSVar1 = Allocate(param_1,0x20);
    pvVar2 = (void *)SourceContext::SourceContext(pSVar1,param_1);
    return pvVar2;
  }
  pSVar1 = ::operator_new(0x20);
  pvVar2 = (void *)SourceContext::SourceContext(pSVar1,(Arena *)0x0);
  return pvVar2;
}

// DefaultConstruct<google::protobuf::SourceContext> @ 14f9f0a20

/* protected: static class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::MessageLite::DefaultConstruct<class google::protobuf::SourceContext>(class
   google::protobuf::Arena * __ptr64) */

SourceContext * __cdecl
google::protobuf::MessageLite::DefaultConstruct<google::protobuf::SourceContext>(Arena *param_1)

{
  SourceContext *pSVar1;
  
  pSVar1 = Arena::DefaultConstruct<google::protobuf::SourceContext>(param_1);
  return pSVar1;
}

// FUN_14f9f0a30 @ 14f9f0a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f9f0a30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  undefined8 uStack_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_3 + 8);
  local_a0.piece_._Mydata = (char *)(lVar1 + 0x20);
  if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
    local_a0.piece_._Mydata = *(char **)(lVar1 + 0x20);
  }
  local_a0.piece_._Mysize = *(ulong64 *)(lVar1 + 0x30);
  local_40.piece_._Mydata = (char *)*param_2;
  local_40.piece_._Mysize = param_2[1];
  local_b0 = &s__;
  uStack_a8 = 1;
  local_70.piece_._Mydata = "/";
  local_70.piece_._Mysize = 1;
  absl::lts_20240722::StrCat(param_1,&local_40,&local_70,&local_a0);
  return param_1;
}

// FUN_14f9f0ae0 @ 14f9f0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f9f0ae0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  undefined8 uStack_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_3 + 8);
  local_a0.piece_._Mydata = (char *)(lVar1 + 0x20);
  if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
    local_a0.piece_._Mydata = *(char **)(lVar1 + 0x20);
  }
  local_a0.piece_._Mysize = *(ulong64 *)(lVar1 + 0x30);
  local_40.piece_._Mydata = (char *)*param_2;
  local_40.piece_._Mysize = param_2[1];
  local_b0 = &s__;
  uStack_a8 = 1;
  local_70.piece_._Mydata = "/";
  local_70.piece_._Mysize = 1;
  absl::lts_20240722::StrCat(param_1,&local_40,&local_70,&local_a0);
  return param_1;
}

// SetBytes<> @ 14f9f0b90

/* public: void __cdecl google::protobuf::internal::ArenaStringPtr::SetBytes<>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ArenaStringPtr::SetBytes<>
          (ArenaStringPtr *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2)

{
  Set<>(this,param_1,param_2);
  return;
}

// FUN_14f9f0ba0 @ 14f9f0ba0

BoolValue * FUN_14f9f0ba0(BoolValue *param_1,BoolValue param_2)

{
  google::protobuf::BoolValue::BoolValue(param_1,(Arena *)0x0);
  param_1[0x18] = param_2;
  *(undefined ***)param_1 = google::protobuf::BoolValue::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0be0 @ 14f9f0be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BytesValue *
FUN_14f9f0be0(BytesValue *param_1,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  BytesValue *local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  google::protobuf::BytesValue::BytesValue(param_1,(Arena *)0x0);
  *(undefined ***)param_1 = google::protobuf::BytesValue::vftable;
  local_28 = 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  pAVar5 = (Arena *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  if (((byte)param_1[8] & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set<>
            ((ArenaStringPtr *)(param_1 + 0x18),param_2,pAVar5);
  uVar1 = (param_2->_Mypair)._Myval2._Myres;
  if (0xf < uVar1) {
    uVar4 = uVar1 + 1;
    pcVar2 = (param_2->_Mypair)._Myval2._Bx._Ptr;
    pcVar3 = pcVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar1 + 0x28;
      pcVar3 = *(char **)(pcVar2 + -8);
      if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,uVar4);
  }
  (param_2->_Mypair)._Myval2._Mysize = 0;
  (param_2->_Mypair)._Myval2._Myres = 0xf;
  (param_2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return param_1;
}

// FUN_14f9f0cc0 @ 14f9f0cc0

DoubleValue * FUN_14f9f0cc0(DoubleValue *param_1,undefined8 param_2)

{
  google::protobuf::DoubleValue::DoubleValue(param_1,(Arena *)0x0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::DoubleValue::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0d00 @ 14f9f0d00

FloatValue * FUN_14f9f0d00(FloatValue *param_1,undefined4 param_2)

{
  google::protobuf::FloatValue::FloatValue(param_1,(Arena *)0x0);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::FloatValue::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0d40 @ 14f9f0d40

Int32Value * FUN_14f9f0d40(Int32Value *param_1,undefined4 param_2)

{
  google::protobuf::Int32Value::Int32Value(param_1,(Arena *)0x0);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::Int32Value::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0d80 @ 14f9f0d80

Int64Value * FUN_14f9f0d80(Int64Value *param_1,undefined8 param_2)

{
  google::protobuf::Int64Value::Int64Value(param_1,(Arena *)0x0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::Int64Value::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0dc0 @ 14f9f0dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

StringValue *
FUN_14f9f0dc0(StringValue *param_1,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  StringValue *local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  google::protobuf::StringValue::StringValue(param_1,(Arena *)0x0);
  *(undefined ***)param_1 = google::protobuf::StringValue::vftable;
  local_28 = 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  pAVar5 = (Arena *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  if (((byte)param_1[8] & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set<>
            ((ArenaStringPtr *)(param_1 + 0x18),param_2,pAVar5);
  uVar1 = (param_2->_Mypair)._Myval2._Myres;
  if (0xf < uVar1) {
    uVar4 = uVar1 + 1;
    pcVar2 = (param_2->_Mypair)._Myval2._Bx._Ptr;
    pcVar3 = pcVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar1 + 0x28;
      pcVar3 = *(char **)(pcVar2 + -8);
      if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,uVar4);
  }
  (param_2->_Mypair)._Myval2._Mysize = 0;
  (param_2->_Mypair)._Myval2._Myres = 0xf;
  (param_2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return param_1;
}

// FUN_14f9f0ea0 @ 14f9f0ea0

UInt32Value * FUN_14f9f0ea0(UInt32Value *param_1,undefined4 param_2)

{
  google::protobuf::UInt32Value::UInt32Value(param_1,(Arena *)0x0);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::UInt32Value::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// FUN_14f9f0ee0 @ 14f9f0ee0

UInt64Value * FUN_14f9f0ee0(UInt64Value *param_1,undefined8 param_2)

{
  google::protobuf::UInt64Value::UInt64Value(param_1,(Arena *)0x0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined ***)param_1 = google::protobuf::UInt64Value::vftable;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}

// add_oneofs<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f0f20

/* public: void __cdecl google::protobuf::Type::add_oneofs<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Type::add_oneofs<std::basic_string_view<char,std::char_traits<char>_>_>
          (Type *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  pcVar1 = param_1->_Mydata;
  uVar2 = param_1->_Mysize;
  this_00 = internal::RepeatedPtrFieldBase::AddString
                      ((RepeatedPtrFieldBase *)&(this->_impl_).oneofs_);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(this_00,pcVar1,uVar2)
  ;
  return;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_> @ 14f9f0f60

/* private: static class google::protobuf::EnumValue * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::EnumValue> >(void *
   __ptr64) */

EnumValue * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_>(void *param_1)

{
  return param_1;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_> @ 14f9f0f70

/* private: static class google::protobuf::Field * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Field> >(void * __ptr64)
    */

Field * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_>(void *param_1)

{
  return param_1;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_> @ 14f9f0f80

/* private: static class google::protobuf::Option * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Option> >(void * __ptr64)
    */

Option * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_>(void *param_1)

{
  return param_1;
}

// move<google::protobuf::BoolValue&___ptr64> @ 14f9f0f90

/* class google::protobuf::BoolValue && __ptr64 __cdecl std::move<class google::protobuf::BoolValue
   & __ptr64>(class google::protobuf::BoolValue & __ptr64) */

BoolValue * __cdecl std::move<google::protobuf::BoolValue&___ptr64>(BoolValue *param_1)

{
  return param_1;
}

// move<google::protobuf::BytesValue&___ptr64> @ 14f9f0fa0

/* class google::protobuf::BytesValue && __ptr64 __cdecl std::move<class
   google::protobuf::BytesValue & __ptr64>(class google::protobuf::BytesValue & __ptr64) */

BytesValue * __cdecl std::move<google::protobuf::BytesValue&___ptr64>(BytesValue *param_1)

{
  return param_1;
}

// move<google::protobuf::DoubleValue&___ptr64> @ 14f9f0fb0

/* class google::protobuf::DoubleValue && __ptr64 __cdecl std::move<class
   google::protobuf::DoubleValue & __ptr64>(class google::protobuf::DoubleValue & __ptr64) */

DoubleValue * __cdecl std::move<google::protobuf::DoubleValue&___ptr64>(DoubleValue *param_1)

{
  return param_1;
}

// move<google::protobuf::Enum&___ptr64> @ 14f9f0fc0

/* class google::protobuf::Enum && __ptr64 __cdecl std::move<class google::protobuf::Enum &
   __ptr64>(class google::protobuf::Enum & __ptr64) */

Enum * __cdecl std::move<google::protobuf::Enum&___ptr64>(Enum *param_1)

{
  return param_1;
}

// move<google::protobuf::FloatValue&___ptr64> @ 14f9f0fd0

/* class google::protobuf::FloatValue && __ptr64 __cdecl std::move<class
   google::protobuf::FloatValue & __ptr64>(class google::protobuf::FloatValue & __ptr64) */

FloatValue * __cdecl std::move<google::protobuf::FloatValue&___ptr64>(FloatValue *param_1)

{
  return param_1;
}

// move<google::protobuf::Int32Value&___ptr64> @ 14f9f0fe0

/* class google::protobuf::Int32Value && __ptr64 __cdecl std::move<class
   google::protobuf::Int32Value & __ptr64>(class google::protobuf::Int32Value & __ptr64) */

Int32Value * __cdecl std::move<google::protobuf::Int32Value&___ptr64>(Int32Value *param_1)

{
  return param_1;
}

// move<google::protobuf::Int64Value&___ptr64> @ 14f9f0ff0

/* class google::protobuf::Int64Value && __ptr64 __cdecl std::move<class
   google::protobuf::Int64Value & __ptr64>(class google::protobuf::Int64Value & __ptr64) */

Int64Value * __cdecl std::move<google::protobuf::Int64Value&___ptr64>(Int64Value *param_1)

{
  return param_1;
}

// move<google::protobuf::StringValue&___ptr64> @ 14f9f1000

/* class google::protobuf::StringValue && __ptr64 __cdecl std::move<class
   google::protobuf::StringValue & __ptr64>(class google::protobuf::StringValue & __ptr64) */

StringValue * __cdecl std::move<google::protobuf::StringValue&___ptr64>(StringValue *param_1)

{
  return param_1;
}

// move<google::protobuf::Type&___ptr64> @ 14f9f1010

/* class google::protobuf::Type && __ptr64 __cdecl std::move<class google::protobuf::Type &
   __ptr64>(class google::protobuf::Type & __ptr64) */

Type * __cdecl std::move<google::protobuf::Type&___ptr64>(Type *param_1)

{
  return param_1;
}

// move<google::protobuf::UInt32Value&___ptr64> @ 14f9f1020

/* class google::protobuf::UInt32Value && __ptr64 __cdecl std::move<class
   google::protobuf::UInt32Value & __ptr64>(class google::protobuf::UInt32Value & __ptr64) */

UInt32Value * __cdecl std::move<google::protobuf::UInt32Value&___ptr64>(UInt32Value *param_1)

{
  return param_1;
}

// move<google::protobuf::UInt64Value&___ptr64> @ 14f9f1030

/* class google::protobuf::UInt64Value && __ptr64 __cdecl std::move<class
   google::protobuf::UInt64Value & __ptr64>(class google::protobuf::UInt64Value & __ptr64) */

UInt64Value * __cdecl std::move<google::protobuf::UInt64Value&___ptr64>(UInt64Value *param_1)

{
  return param_1;
}

// set_default_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9f1040

/* public: void __cdecl google::protobuf::Field::set_default_value<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > && __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::Field::
set_default_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 8;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set(&(this->_impl_).default_value_,param_1,pAVar1);
  return;
}

// set_edition<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9f1070

/* public: void __cdecl google::protobuf::Enum::set_edition<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::Enum::
set_edition<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Enum *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set(&(this->_impl_).edition_,param_1,pAVar1);
  return;
}

// set_edition<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9f10a0

/* public: void __cdecl google::protobuf::Type::set_edition<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::Type::
set_edition<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Type *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set(&(this->_impl_).edition_,param_1,pAVar1);
  return;
}

// set_file_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f10d0

/* public: void __cdecl google::protobuf::SourceContext::set_file_name<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::SourceContext::
set_file_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (SourceContext *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).file_name_,&local_18,pAVar1);
  return;
}

// set_json_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f1110

/* public: void __cdecl google::protobuf::Field::set_json_name<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::set_json_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (Field *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 4;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).json_name_,&local_18,pAVar1);
  return;
}

// set_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f1150

/* public: void __cdecl google::protobuf::Enum::set_name<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Enum::set_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (Enum *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).name_,&local_18,pAVar1);
  return;
}

// set_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f1190

/* public: void __cdecl google::protobuf::EnumValue::set_name<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::EnumValue::set_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (EnumValue *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).name_,&local_18,pAVar1);
  return;
}

// set_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f11d0

/* public: void __cdecl google::protobuf::Field::set_name<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::set_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (Field *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).name_,&local_18,pAVar1);
  return;
}

// set_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f1210

/* public: void __cdecl google::protobuf::Option::set_name<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Option::set_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (Option *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).name_,&local_18,pAVar1);
  return;
}

// set_name<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9f1250

/* public: void __cdecl google::protobuf::Type::set_name<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Type::set_name<std::basic_string_view<char,std::char_traits<char>_>_>
          (Type *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  Arena *pAVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  internal::ArenaStringPtr::Set(&(this->_impl_).name_,&local_18,pAVar1);
  return;
}

// set_type_url<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9f1290

/* public: void __cdecl google::protobuf::Field::set_type_url<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::
set_type_url<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set(&(this->_impl_).type_url_,param_1,pAVar1);
  return;
}

// set_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64> @ 14f9f12c0

/* public: void __cdecl google::protobuf::BytesValue::set_value<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::BytesValue::
set_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
          (BytesValue *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1
          )

{
  Arena *pAVar1;
  
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  pAVar1 = (Arena *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
  if (((byte)this[8] & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>((ArenaStringPtr *)(this + 0x18),param_1,pAVar1);
  return;
}

// set_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64> @ 14f9f12f0

/* public: void __cdecl google::protobuf::StringValue::set_value<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::StringValue::
set_value<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
          (StringValue *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  pAVar1 = (Arena *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
  if (((byte)this[8] & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>((ArenaStringPtr *)(this + 0x18),param_1,pAVar1);
  return;
}

// BoolValue @ 14f9f1320

/* protected: __cdecl google::protobuf::BoolValue::BoolValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::BoolValue && __ptr64) __ptr64 */

BoolValue * __thiscall
google::protobuf::BoolValue::BoolValue(BoolValue *this,Arena *param_1,BoolValue *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  BoolValue(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// BoolValue @ 14f9f13a0

/* public: __cdecl google::protobuf::BoolValue::BoolValue(class google::protobuf::BoolValue &&
   __ptr64) __ptr64 */

BoolValue * __thiscall google::protobuf::BoolValue::BoolValue(BoolValue *this,BoolValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  BoolValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// BoolValue @ 14f9f1430

/* public: __cdecl google::protobuf::BoolValue::BoolValue(void) __ptr64 */

BoolValue * __thiscall google::protobuf::BoolValue::BoolValue(BoolValue *this)

{
  BoolValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// BytesValue @ 14f9f1460

/* protected: __cdecl google::protobuf::BytesValue::BytesValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::BytesValue && __ptr64) __ptr64 */

BytesValue * __thiscall
google::protobuf::BytesValue::BytesValue(BytesValue *this,Arena *param_1,BytesValue *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  BytesValue(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// BytesValue @ 14f9f14e0

/* public: __cdecl google::protobuf::BytesValue::BytesValue(class google::protobuf::BytesValue &&
   __ptr64) __ptr64 */

BytesValue * __thiscall
google::protobuf::BytesValue::BytesValue(BytesValue *this,BytesValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  BytesValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// BytesValue @ 14f9f1570

/* public: __cdecl google::protobuf::BytesValue::BytesValue(void) __ptr64 */

BytesValue * __thiscall google::protobuf::BytesValue::BytesValue(BytesValue *this)

{
  BytesValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// FUN_14f9f15a0 @ 14f9f15a0

undefined8 * FUN_14f9f15a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = google::protobuf::util::_anon_83CE1D39::DescriptorPoolTypeResolver::vftable;
  (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1))->_Mypair).
  _Myval2._Bx._Ptr = (char *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),
             (char *)*param_2,param_2[1]);
  param_1[5] = param_3;
  return param_1;
}

// DoubleValue @ 14f9f1600

/* protected: __cdecl google::protobuf::DoubleValue::DoubleValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::DoubleValue && __ptr64) __ptr64 */

DoubleValue * __thiscall
google::protobuf::DoubleValue::DoubleValue(DoubleValue *this,Arena *param_1,DoubleValue *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  DoubleValue(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// DoubleValue @ 14f9f1680

/* public: __cdecl google::protobuf::DoubleValue::DoubleValue(class google::protobuf::DoubleValue &&
   __ptr64) __ptr64 */

DoubleValue * __thiscall
google::protobuf::DoubleValue::DoubleValue(DoubleValue *this,DoubleValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  DoubleValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// DoubleValue @ 14f9f1710

/* public: __cdecl google::protobuf::DoubleValue::DoubleValue(void) __ptr64 */

DoubleValue * __thiscall google::protobuf::DoubleValue::DoubleValue(DoubleValue *this)

{
  DoubleValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// Enum @ 14f9f1740

/* protected: __cdecl google::protobuf::Enum::Enum(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Enum && __ptr64) __ptr64 */

Enum * __thiscall google::protobuf::Enum::Enum(Enum *this,Arena *param_1,Enum *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Enum(this,param_1);
  this->_padding_ = (longlong)vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// Enum @ 14f9f17c0

/* public: __cdecl google::protobuf::Enum::Enum(class google::protobuf::Enum && __ptr64) __ptr64 */

Enum * __thiscall google::protobuf::Enum::Enum(Enum *this,Enum *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Enum(this,(Arena *)0x0);
  this->_padding_ = (longlong)vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  this->_padding_ = (longlong)vftable;
  return this;
}

// Enum @ 14f9f1850

/* public: __cdecl google::protobuf::Enum::Enum(void) __ptr64 */

Enum * __thiscall google::protobuf::Enum::Enum(Enum *this)

{
  Enum(this,(Arena *)0x0);
  this->_padding_ = (longlong)vftable;
  return this;
}

// FloatValue @ 14f9f1880

/* protected: __cdecl google::protobuf::FloatValue::FloatValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::FloatValue && __ptr64) __ptr64 */

FloatValue * __thiscall
google::protobuf::FloatValue::FloatValue(FloatValue *this,Arena *param_1,FloatValue *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FloatValue(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// FloatValue @ 14f9f1900

/* public: __cdecl google::protobuf::FloatValue::FloatValue(class google::protobuf::FloatValue &&
   __ptr64) __ptr64 */

FloatValue * __thiscall
google::protobuf::FloatValue::FloatValue(FloatValue *this,FloatValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FloatValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// FloatValue @ 14f9f1990

/* public: __cdecl google::protobuf::FloatValue::FloatValue(void) __ptr64 */

FloatValue * __thiscall google::protobuf::FloatValue::FloatValue(FloatValue *this)

{
  FloatValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// Int32Value @ 14f9f19c0

/* protected: __cdecl google::protobuf::Int32Value::Int32Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Int32Value && __ptr64) __ptr64 */

Int32Value * __thiscall
google::protobuf::Int32Value::Int32Value(Int32Value *this,Arena *param_1,Int32Value *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Int32Value(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// Int32Value @ 14f9f1a40

/* public: __cdecl google::protobuf::Int32Value::Int32Value(class google::protobuf::Int32Value &&
   __ptr64) __ptr64 */

Int32Value * __thiscall
google::protobuf::Int32Value::Int32Value(Int32Value *this,Int32Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Int32Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// Int32Value @ 14f9f1ad0

/* public: __cdecl google::protobuf::Int32Value::Int32Value(void) __ptr64 */

Int32Value * __thiscall google::protobuf::Int32Value::Int32Value(Int32Value *this)

{
  Int32Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// Int64Value @ 14f9f1b00

/* protected: __cdecl google::protobuf::Int64Value::Int64Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Int64Value && __ptr64) __ptr64 */

Int64Value * __thiscall
google::protobuf::Int64Value::Int64Value(Int64Value *this,Arena *param_1,Int64Value *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Int64Value(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// Int64Value @ 14f9f1b80

/* public: __cdecl google::protobuf::Int64Value::Int64Value(class google::protobuf::Int64Value &&
   __ptr64) __ptr64 */

Int64Value * __thiscall
google::protobuf::Int64Value::Int64Value(Int64Value *this,Int64Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Int64Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// Int64Value @ 14f9f1c10

/* public: __cdecl google::protobuf::Int64Value::Int64Value(void) __ptr64 */

Int64Value * __thiscall google::protobuf::Int64Value::Int64Value(Int64Value *this)

{
  Int64Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// StringValue @ 14f9f1c40

/* protected: __cdecl google::protobuf::StringValue::StringValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::StringValue && __ptr64) __ptr64 */

StringValue * __thiscall
google::protobuf::StringValue::StringValue(StringValue *this,Arena *param_1,StringValue *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  StringValue(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// StringValue @ 14f9f1cc0

/* public: __cdecl google::protobuf::StringValue::StringValue(class google::protobuf::StringValue &&
   __ptr64) __ptr64 */

StringValue * __thiscall
google::protobuf::StringValue::StringValue(StringValue *this,StringValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  StringValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// StringValue @ 14f9f1d50

/* public: __cdecl google::protobuf::StringValue::StringValue(void) __ptr64 */

StringValue * __thiscall google::protobuf::StringValue::StringValue(StringValue *this)

{
  StringValue(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// Type @ 14f9f1d80

/* protected: __cdecl google::protobuf::Type::Type(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Type && __ptr64) __ptr64 */

Type * __thiscall google::protobuf::Type::Type(Type *this,Arena *param_1,Type *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Type(this,param_1);
  this->_padding_ = (longlong)vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// Type @ 14f9f1e00

/* public: __cdecl google::protobuf::Type::Type(class google::protobuf::Type && __ptr64) __ptr64 */

Type * __thiscall google::protobuf::Type::Type(Type *this,Type *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Type(this,(Arena *)0x0);
  this->_padding_ = (longlong)vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  this->_padding_ = (longlong)vftable;
  return this;
}

// Type @ 14f9f1e90

/* public: __cdecl google::protobuf::Type::Type(void) __ptr64 */

Type * __thiscall google::protobuf::Type::Type(Type *this)

{
  Type(this,(Arena *)0x0);
  this->_padding_ = (longlong)vftable;
  return this;
}

// TypeResolver @ 14f9f1ec0

/* public: __cdecl google::protobuf::util::TypeResolver::TypeResolver(void) __ptr64 */

TypeResolver * __thiscall google::protobuf::util::TypeResolver::TypeResolver(TypeResolver *this)

{
  *this = (TypeResolver)vftable;
  return this;
}

// UInt32Value @ 14f9f1ee0

/* protected: __cdecl google::protobuf::UInt32Value::UInt32Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::UInt32Value && __ptr64) __ptr64 */

UInt32Value * __thiscall
google::protobuf::UInt32Value::UInt32Value(UInt32Value *this,Arena *param_1,UInt32Value *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInt32Value(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// UInt32Value @ 14f9f1f60

/* public: __cdecl google::protobuf::UInt32Value::UInt32Value(class google::protobuf::UInt32Value &&
   __ptr64) __ptr64 */

UInt32Value * __thiscall
google::protobuf::UInt32Value::UInt32Value(UInt32Value *this,UInt32Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInt32Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// UInt32Value @ 14f9f1ff0

/* public: __cdecl google::protobuf::UInt32Value::UInt32Value(void) __ptr64 */

UInt32Value * __thiscall google::protobuf::UInt32Value::UInt32Value(UInt32Value *this)

{
  UInt32Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// UInt64Value @ 14f9f2020

/* protected: __cdecl google::protobuf::UInt64Value::UInt64Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::UInt64Value && __ptr64) __ptr64 */

UInt64Value * __thiscall
google::protobuf::UInt64Value::UInt64Value(UInt64Value *this,Arena *param_1,UInt64Value *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInt64Value(this,param_1);
  *(undefined ***)this = vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
    if (((byte)param_2[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// UInt64Value @ 14f9f20a0

/* public: __cdecl google::protobuf::UInt64Value::UInt64Value(class google::protobuf::UInt64Value &&
   __ptr64) __ptr64 */

UInt64Value * __thiscall
google::protobuf::UInt64Value::UInt64Value(UInt64Value *this,UInt64Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInt64Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  *(undefined ***)this = vftable;
  return this;
}

// UInt64Value @ 14f9f2130

/* public: __cdecl google::protobuf::UInt64Value::UInt64Value(void) __ptr64 */

UInt64Value * __thiscall google::protobuf::UInt64Value::UInt64Value(UInt64Value *this)

{
  UInt64Value(this,(Arena *)0x0);
  *(undefined ***)this = vftable;
  return this;
}

// FUN_14f9f2160 @ 14f9f2160

void FUN_14f9f2160(undefined8 *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    pvVar2 = (void *)param_1[1];
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
    operator_delete(pvVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = google::protobuf::util::TypeResolver::vftable;
  return;
}

// ~TypeResolver @ 14f9f21e0

/* public: virtual __cdecl google::protobuf::util::TypeResolver::~TypeResolver(void) __ptr64 */

void __thiscall google::protobuf::util::TypeResolver::~TypeResolver(TypeResolver *this)

{
  *this = (TypeResolver)vftable;
  return;
}

// operator= @ 14f9f2200

/* public: class google::protobuf::BoolValue & __ptr64 __cdecl
   google::protobuf::BoolValue::operator=(class google::protobuf::BoolValue && __ptr64) __ptr64 */

BoolValue * __thiscall google::protobuf::BoolValue::operator=(BoolValue *this,BoolValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2260

/* public: class google::protobuf::BytesValue & __ptr64 __cdecl
   google::protobuf::BytesValue::operator=(class google::protobuf::BytesValue && __ptr64) __ptr64 */

BytesValue * __thiscall
google::protobuf::BytesValue::operator=(BytesValue *this,BytesValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f22c0

/* public: class google::protobuf::DoubleValue & __ptr64 __cdecl
   google::protobuf::DoubleValue::operator=(class google::protobuf::DoubleValue && __ptr64) __ptr64
    */

DoubleValue * __thiscall
google::protobuf::DoubleValue::operator=(DoubleValue *this,DoubleValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2320

/* public: class google::protobuf::Enum & __ptr64 __cdecl google::protobuf::Enum::operator=(class
   google::protobuf::Enum && __ptr64) __ptr64 */

Enum * __thiscall google::protobuf::Enum::operator=(Enum *this,Enum *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2380

/* public: class google::protobuf::FloatValue & __ptr64 __cdecl
   google::protobuf::FloatValue::operator=(class google::protobuf::FloatValue && __ptr64) __ptr64 */

FloatValue * __thiscall
google::protobuf::FloatValue::operator=(FloatValue *this,FloatValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f23e0

/* public: class google::protobuf::Int32Value & __ptr64 __cdecl
   google::protobuf::Int32Value::operator=(class google::protobuf::Int32Value && __ptr64) __ptr64 */

Int32Value * __thiscall
google::protobuf::Int32Value::operator=(Int32Value *this,Int32Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2440

/* public: class google::protobuf::Int64Value & __ptr64 __cdecl
   google::protobuf::Int64Value::operator=(class google::protobuf::Int64Value && __ptr64) __ptr64 */

Int64Value * __thiscall
google::protobuf::Int64Value::operator=(Int64Value *this,Int64Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f24a0

/* public: class google::protobuf::StringValue & __ptr64 __cdecl
   google::protobuf::StringValue::operator=(class google::protobuf::StringValue && __ptr64) __ptr64
    */

StringValue * __thiscall
google::protobuf::StringValue::operator=(StringValue *this,StringValue *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2500

/* public: class google::protobuf::Type & __ptr64 __cdecl google::protobuf::Type::operator=(class
   google::protobuf::Type && __ptr64) __ptr64 */

Type * __thiscall google::protobuf::Type::operator=(Type *this,Type *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f2560

/* public: class google::protobuf::UInt32Value & __ptr64 __cdecl
   google::protobuf::UInt32Value::operator=(class google::protobuf::UInt32Value && __ptr64) __ptr64
    */

UInt32Value * __thiscall
google::protobuf::UInt32Value::operator=(UInt32Value *this,UInt32Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator= @ 14f9f25c0

/* public: class google::protobuf::UInt64Value & __ptr64 __cdecl
   google::protobuf::UInt64Value::operator=(class google::protobuf::UInt64Value && __ptr64) __ptr64
    */

UInt64Value * __thiscall
google::protobuf::UInt64Value::operator=(UInt64Value *this,UInt64Value *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    if (((byte)param_1[8] & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
    if (((byte)this[8] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// FUN_14f9f2620 @ 14f9f2620

undefined8 * FUN_14f9f2620(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    pvVar2 = (void *)param_1[1];
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
    operator_delete(pvVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = google::protobuf::util::TypeResolver::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,0x30);
  }
  return param_1;
}

// `vector_deleting_destructor' @ 14f9f26c0

/* public: virtual void * __ptr64 __cdecl google::protobuf::util::TypeResolver::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::util::TypeResolver::_vector_deleting_destructor_(TypeResolver *this,uint param_1)

{
  *this = (TypeResolver)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Add @ 14f9f2700

/* public: class google::protobuf::EnumValue * __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::EnumValue>::Add(void) __ptr64 */

EnumValue * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::Add
          (RepeatedPtrField<google::protobuf::EnumValue> *this)

{
  EnumValue *pEVar1;
  
  pEVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)this,
                      Arena::DefaultConstruct<google::protobuf::EnumValue>);
  return pEVar1;
}

// Add @ 14f9f2720

/* public: class google::protobuf::Field * __ptr64 __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::Add(void) __ptr64 */

Field * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::Add
          (RepeatedPtrField<google::protobuf::Field> *this)

{
  Field *pFVar1;
  
  pFVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)this,Arena::DefaultConstruct<google::protobuf::Field>)
  ;
  return pFVar1;
}

// Add @ 14f9f2740

/* public: class google::protobuf::Option * __ptr64 __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::Add(void) __ptr64 */

Option * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::Add
          (RepeatedPtrField<google::protobuf::Option> *this)

{
  Option *pOVar1;
  
  pOVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)this,Arena::DefaultConstruct<google::protobuf::Option>
                     );
  return pOVar1;
}

// FUN_14f9f2760 @ 14f9f2760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f9f2bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f9f2760(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  Type *param_5)

{
  longlong lVar1;
  char *pcVar2;
  char ***pppcVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  SourceContext *pSVar7;
  undefined8 uVar8;
  char ****ppppcVar9;
  MessageOptionsDefaultTypeInternal *pMVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  Arena *pAVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  char *pcVar18;
  undefined1 auStack_128 [32];
  char ***local_108;
  code *pcStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  longlong local_e8;
  char *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  longlong *local_c0;
  basic_string_view<char,std::char_traits<char>_> local_b8;
  basic_string_view<char,std::char_traits<char>_> local_a8;
  char ***local_98;
  undefined8 uStack_90;
  ulong64 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulong64 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar16 = 0;
  iVar5 = 0;
  local_c8 = 0;
  local_e8 = param_4;
  local_c0 = param_1;
  google::protobuf::Type::Clear(param_5);
  lVar1 = *(longlong *)(param_2 + 8);
  local_a8._Mydata = (char *)(lVar1 + 0x20);
  if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
    local_a8._Mydata = *(char **)(lVar1 + 0x20);
  }
  local_a8._Mysize = *(undefined8 *)(lVar1 + 0x30);
  (param_5->_impl_)._has_bits_.has_bits_[0] = (param_5->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar14 = (Arena *)(param_5->_padding_ & 0xfffffffffffffffe);
  if ((param_5->_padding_ & 1) != 0) {
    pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set(&(param_5->_impl_).name_,&local_a8,pAVar14);
  puVar12 = (undefined8 *)(*(ulonglong *)(param_3 + 0xc0) & 0xfffffffffffffffc);
  puVar15 = puVar12;
  if (0xf < (ulonglong)puVar12[3]) {
    puVar15 = (undefined8 *)*puVar12;
  }
  lVar1 = puVar12[2];
  local_108 = (char ***)&s_proto2;
  pcStack_100 = (code *)0x6;
  if (lVar1 == 6) {
    iVar4 = memcmp(puVar15,&s_proto2,6);
    if (iVar4 == 0) goto LAB_14f9f2849;
  }
  else if (lVar1 == 0) goto LAB_14f9f2849;
  local_108 = (char ***)&s_proto3;
  pcStack_100 = (code *)0x6;
  if ((lVar1 == 6) && (iVar5 = memcmp(puVar15,&s_proto3,6), iVar5 == 0)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 2;
  }
LAB_14f9f2849:
  (param_5->_impl_).syntax_ = iVar5;
  (param_5->_impl_)._has_bits_.has_bits_[0] = (param_5->_impl_)._has_bits_.has_bits_[0] | 8;
  if (iVar5 == 2) {
    uStack_90 = 0;
    local_88 = ___xmm_000000000000000f0000000000000000;
    uStack_80 = _UNK_15076add8;
    local_98 = (char ***)0x0;
    local_a8._Mydata =
         (char *)google::protobuf::internal::ShortEditionName
                           (&local_b8,*(Edition *)(param_3 + 0xd8));
    local_108 = (char ***)&local_98;
    local_a8._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_f8._Mydata = (char *)&local_a8;
    local_f8._Mysize = 1;
    local_d8 = "%v";
    uStack_d0 = 2;
    pcStack_100 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_108,&local_d8,&local_f8);
    ppppcVar9 = &local_98;
    if (0xf < uStack_80) {
      ppppcVar9 = (char ****)local_98;
    }
    local_78._Ptr = (char *)0x0;
    local_78._8_8_ = 0;
    local_68 = 0;
    uStack_60 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (char *)ppppcVar9,local_88);
    (param_5->_impl_)._has_bits_.has_bits_[0] = (param_5->_impl_)._has_bits_.has_bits_[0] | 2;
    pAVar14 = (Arena *)(param_5->_padding_ & 0xfffffffffffffffe);
    if ((param_5->_padding_ & 1) != 0) {
      pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              (&(param_5->_impl_).edition_,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pAVar14)
    ;
    if (0xf < uStack_60) {
      uVar11 = uStack_60 + 1;
      uVar8 = local_78._Ptr;
      if (0xfff < uVar11) {
        uVar11 = uStack_60 + 0x28;
        uVar8 = *(undefined8 *)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar8,uVar11);
    }
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    local_78._Ptr = local_78._Ptr & 0xffffffffffffff00;
    if (0xf < uStack_80) {
      uVar11 = uStack_80 + 1;
      ppppcVar9 = (char ****)local_98;
      if (0xfff < uVar11) {
        uVar11 = uStack_80 + 0x28;
        ppppcVar9 = (char ****)local_98[-1];
        if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)ppppcVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar9,uVar11);
    }
  }
  lVar1 = local_e8;
  uVar13 = uVar16;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      pvVar6 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         ((RepeatedPtrFieldBase *)&(param_5->_impl_).fields_,
                          google::protobuf::Arena::DefaultConstruct<google::protobuf::Field>);
      iVar5 = (int)uVar13;
      if ((~*(byte *)(lVar1 + 0x18) & 1) == 0) {
        puVar15 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 7 + (longlong)iVar5 * 8);
      }
      else {
        puVar15 = (undefined8 *)(lVar1 + 0x18);
      }
      local_f8._Mydata = (char *)*local_c0;
      local_f8._Mysize = local_c0[1];
      FUN_14f9f3230(&local_f8,(longlong)iVar5 * 0x60 + *(longlong *)(param_2 + 0x38),*puVar15,pvVar6
                   );
      uVar13 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_2 + 4));
  }
  uVar13 = uVar16;
  if (0 < *(int *)(param_2 + 0x78)) {
    do {
      pcVar2 = *(char **)(uVar16 + 8 + *(longlong *)(param_2 + 0x40));
      pcVar18 = pcVar2;
      if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
        pcVar18 = *(char **)pcVar2;
      }
      uVar11 = *(ulong64 *)(pcVar2 + 0x10);
      this = google::protobuf::internal::RepeatedPtrFieldBase::AddString
                       ((RepeatedPtrFieldBase *)&(param_5->_impl_).oneofs_);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (this,pcVar18,uVar11);
      uVar17 = (int)uVar13 + 1;
      uVar16 = uVar16 + 0x38;
      uVar13 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(param_2 + 0x78));
  }
  (param_5->_impl_)._has_bits_.has_bits_[0] = (param_5->_impl_)._has_bits_.has_bits_[0] | 4;
  pSVar7 = (param_5->_impl_).source_context_;
  if (pSVar7 == (SourceContext *)0x0) {
    pAVar14 = (Arena *)(param_5->_padding_ & 0xfffffffffffffffe);
    if ((param_5->_padding_ & 1) != 0) {
      pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
    }
    pSVar7 = google::protobuf::Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar14);
    (param_5->_impl_).source_context_ = pSVar7;
  }
  pppcVar3 = *(char ****)(*(longlong *)(param_2 + 0x10) + 8);
  local_108 = pppcVar3;
  if ((char **)0xf < pppcVar3[3]) {
    local_108 = (char ***)*pppcVar3;
  }
  pcStack_100 = (code *)pppcVar3[2];
  (pSVar7->_impl_)._has_bits_.has_bits_[0] = (pSVar7->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar14 = (Arena *)(pSVar7->_padding_ & 0xfffffffffffffffe);
  if ((pSVar7->_padding_ & 1) != 0) {
    pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
  }
  local_f8._Mydata = (char *)local_108;
  local_f8._Mysize = (ulong64)pcStack_100;
  google::protobuf::internal::ArenaStringPtr::Set(&(pSVar7->_impl_).file_name_,&local_f8,pAVar14);
  pMVar10 = &google::protobuf::_MessageOptions_default_instance_;
  if (*(MessageOptionsDefaultTypeInternal **)(local_e8 + 0xe0) !=
      (MessageOptionsDefaultTypeInternal *)0x0) {
    pMVar10 = *(MessageOptionsDefaultTypeInternal **)(local_e8 + 0xe0);
  }
  FUN_14f9f3da0(pMVar10,&(param_5->_impl_).options_);
  return;
}

// ConvertDescriptorToType @ 14f9f2bd0

/* class google::protobuf::Enum __cdecl google::protobuf::util::ConvertDescriptorToType(class
   google::protobuf::EnumDescriptor const & __ptr64) */

Enum * __cdecl
google::protobuf::util::ConvertDescriptorToType
          (Enum *__return_storage_ptr__,EnumDescriptor *param_1)

{
  EnumDescriptorProto *pEVar1;
  RepeatedPtrFieldBase *pRVar2;
  undefined4 uVar3;
  undefined1 local_e8 [72];
  RepeatedPtrFieldBase local_a0 [6];
  
  Enum::Enum(__return_storage_ptr__,(Arena *)0x0);
  __return_storage_ptr__->_padding_ = (longlong)Enum::vftable;
  uVar3 = 1;
  FileDescriptorProto::FileDescriptorProto((FileDescriptorProto *)local_e8,(Arena *)0x0);
  local_e8._0_8_ = FileDescriptorProto::vftable;
  FileDescriptor::CopyHeadingTo(param_1->file_,(FileDescriptorProto *)local_e8);
  pEVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     (local_a0,Arena::DefaultConstruct<google::protobuf::EnumDescriptorProto>);
  EnumDescriptor::CopyTo(param_1,pEVar1);
  if ((~(byte)local_a0[0].tagged_rep_or_elem_ & 1) == 0) {
    pRVar2 = (RepeatedPtrFieldBase *)((longlong)local_a0[0].tagged_rep_or_elem_ + 7);
  }
  else {
    pRVar2 = local_a0;
  }
  FUN_14f9f2da0(param_1,local_e8,pRVar2->tagged_rep_or_elem_,__return_storage_ptr__,uVar3);
  FileDescriptorProto::~FileDescriptorProto((FileDescriptorProto *)local_e8);
  return __return_storage_ptr__;
}

// ConvertDescriptorToType @ 14f9f2ca0

/* class google::protobuf::Type __cdecl google::protobuf::util::ConvertDescriptorToType(class
   std::basic_string_view<char,struct std::char_traits<char> >,class google::protobuf::Descriptor
   const & __ptr64) */

Type * __cdecl
google::protobuf::util::ConvertDescriptorToType
          (Type *__return_storage_ptr__,basic_string_view<char,std::char_traits<char>_> *param_1,
          Descriptor *param_2)

{
  DescriptorProto *pDVar1;
  RepeatedPtrFieldBase *pRVar2;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [48];
  RepeatedPtrFieldBase local_b8 [7];
  
  protobuf::Type::Type(__return_storage_ptr__,(Arena *)0x0);
  __return_storage_ptr__->_padding_ = (longlong)protobuf::Type::vftable;
  FileDescriptorProto::FileDescriptorProto((FileDescriptorProto *)local_e8,(Arena *)0x0);
  local_e8._0_8_ = FileDescriptorProto::vftable;
  FileDescriptor::CopyHeadingTo(param_2->file_,(FileDescriptorProto *)local_e8);
  pDVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     (local_b8,Arena::DefaultConstruct<google::protobuf::DescriptorProto>);
  Descriptor::CopyTo(param_2,pDVar1);
  if ((~(byte)local_b8[0].tagged_rep_or_elem_ & 1) == 0) {
    pRVar2 = (RepeatedPtrFieldBase *)((longlong)local_b8[0].tagged_rep_or_elem_ + 7);
  }
  else {
    pRVar2 = local_b8;
  }
  local_f8 = *(undefined4 *)&param_1->_Mydata;
  uStack_f4 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_f0 = (undefined4)param_1->_Mysize;
  uStack_ec = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  FUN_14f9f2760(&local_f8,param_2,local_e8,pRVar2->tagged_rep_or_elem_,__return_storage_ptr__);
  FileDescriptorProto::~FileDescriptorProto((FileDescriptorProto *)local_e8);
  return __return_storage_ptr__;
}

// FUN_14f9f2da0 @ 14f9f2da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f9f2da0(longlong param_1,longlong param_2,longlong param_3,Enum *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  SourceContext *pSVar6;
  void *pvVar7;
  byte *pbVar8;
  undefined8 uVar9;
  char ****ppppcVar10;
  EnumValueOptionsDefaultTypeInternal *pEVar11;
  EnumOptionsDefaultTypeInternal *pEVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  Arena *pAVar17;
  undefined8 *_Buf1;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  basic_string_view<char,std::char_traits<char>_> local_e8;
  uint local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  char *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  basic_string_view<char,std::char_traits<char>_> local_a0;
  char ***local_90;
  undefined8 uStack_88;
  ulong64 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  ulong64 local_60;
  ulonglong uStack_58;
  basic_string_view<char,std::char_traits<char>_> *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar16 = 0;
  iVar5 = 0;
  local_d8 = 0;
  local_a8 = param_3;
  google::protobuf::Enum::Clear(param_4);
  puVar14 = (undefined8 *)(*(ulonglong *)(param_2 + 0xc0) & 0xfffffffffffffffc);
  _Buf1 = puVar14;
  if (0xf < (ulonglong)puVar14[3]) {
    _Buf1 = (undefined8 *)*puVar14;
  }
  lVar2 = puVar14[2];
  local_e8._Mydata = "proto2";
  local_e8._Mysize = 6;
  if (lVar2 == 6) {
    iVar4 = memcmp(_Buf1,&s_proto2,6);
    if (iVar4 == 0) goto LAB_14f9f2e41;
  }
  else if (lVar2 == 0) goto LAB_14f9f2e41;
  local_e8._Mydata = "proto3";
  local_e8._Mysize = 6;
  if ((lVar2 == 6) && (iVar5 = memcmp(_Buf1,&s_proto3,6), iVar5 == 0)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 2;
  }
LAB_14f9f2e41:
  (param_4->_impl_).syntax_ = iVar5;
  (param_4->_impl_)._has_bits_.has_bits_[0] = (param_4->_impl_)._has_bits_.has_bits_[0] | 8;
  if (iVar5 == 2) {
    uStack_88 = 0;
    local_80 = ___xmm_000000000000000f0000000000000000;
    uStack_78 = _UNK_15076add8;
    local_90 = (char ***)0x0;
    local_50 = google::protobuf::internal::ShortEditionName(&local_a0,*(Edition *)(param_2 + 0xd8));
    local_e8._Mydata = (char *)&local_90;
    local_48 = absl::lts_20240722::str_format_internal::FormatArgImpl::
               Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_c8._Mydata = (char *)&local_50;
    local_c8._Mysize = 1;
    local_b8 = "%v";
    uStack_b0 = 2;
    local_e8._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_e8,&local_b8,&local_c8);
    ppppcVar10 = &local_90;
    if (0xf < uStack_78) {
      ppppcVar10 = (char ****)local_90;
    }
    local_70._Ptr = (char *)0x0;
    local_70._8_8_ = 0;
    local_60 = 0;
    uStack_58 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               (char *)ppppcVar10,local_80);
    local_d8 = 2;
    (param_4->_impl_)._has_bits_.has_bits_[0] = (param_4->_impl_)._has_bits_.has_bits_[0] | 2;
    pAVar17 = (Arena *)(param_4->_padding_ & 0xfffffffffffffffe);
    if ((param_4->_padding_ & 1) != 0) {
      pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              (&(param_4->_impl_).edition_,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,pAVar17)
    ;
    if (0xf < uStack_58) {
      uVar13 = uStack_58 + 1;
      uVar9 = local_70._Ptr;
      if (0xfff < uVar13) {
        uVar13 = uStack_58 + 0x28;
        uVar9 = *(undefined8 *)(local_70._Ptr + -8);
        if ((char *)0x1f < local_70._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar9,uVar13);
    }
    local_60 = ___xmm_000000000000000f0000000000000000;
    uStack_58 = _UNK_15076add8;
    local_70._Ptr = local_70._Ptr & 0xffffffffffffff00;
    if (0xf < uStack_78) {
      uVar13 = uStack_78 + 1;
      ppppcVar10 = (char ****)local_90;
      if (0xfff < uVar13) {
        uVar13 = uStack_78 + 0x28;
        ppppcVar10 = (char ****)local_90[-1];
        if ((char *)0x1f < (char *)((longlong)local_90 + (-8 - (longlong)ppppcVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar10,uVar13);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  local_e8._Mydata = (char *)(lVar2 + 0x20);
  if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
    local_e8._Mydata = *(char **)(lVar2 + 0x20);
  }
  local_e8._Mysize = *(ulong64 *)(lVar2 + 0x30);
  (param_4->_impl_)._has_bits_.has_bits_[0] = (param_4->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar17 = (Arena *)(param_4->_padding_ & 0xfffffffffffffffe);
  if ((param_4->_padding_ & 1) != 0) {
    pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set(&(param_4->_impl_).name_,&local_e8,pAVar17);
  (param_4->_impl_)._has_bits_.has_bits_[0] = (param_4->_impl_)._has_bits_.has_bits_[0] | 4;
  pSVar6 = (param_4->_impl_).source_context_;
  if (pSVar6 == (SourceContext *)0x0) {
    pAVar17 = (Arena *)(param_4->_padding_ & 0xfffffffffffffffe);
    if ((param_4->_padding_ & 1) != 0) {
      pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
    }
    pSVar6 = google::protobuf::Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar17);
    (param_4->_impl_).source_context_ = pSVar6;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  local_e8._Mydata = (char *)plVar3;
  if (0xf < (ulonglong)plVar3[3]) {
    local_e8._Mydata = (char *)*plVar3;
  }
  local_e8._Mysize = plVar3[2];
  (pSVar6->_impl_)._has_bits_.has_bits_[0] = (pSVar6->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar17 = (Arena *)(pSVar6->_padding_ & 0xfffffffffffffffe);
  if ((pSVar6->_padding_ & 1) != 0) {
    pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
  }
  local_c8._Mydata = local_e8._Mydata;
  local_c8._Mysize = local_e8._Mysize;
  google::protobuf::internal::ArenaStringPtr::Set(&(pSVar6->_impl_).file_name_,&local_c8,pAVar17);
  if (0 < *(int *)(param_1 + 4)) {
    pbVar1 = (byte *)(param_3 + 0x18);
    uVar18 = uVar16;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      pvVar7 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         ((RepeatedPtrFieldBase *)&(param_4->_impl_).enumvalue_,
                          google::protobuf::Arena::DefaultConstruct<google::protobuf::EnumValue>);
      plVar3 = *(longlong **)(lVar2 + 8 + uVar18);
      local_e8._Mydata = (char *)plVar3;
      if (0xf < (ulonglong)plVar3[3]) {
        local_e8._Mydata = (char *)*plVar3;
      }
      local_e8._Mysize = plVar3[2];
      *(uint *)((longlong)pvVar7 + 0x10) = *(uint *)((longlong)pvVar7 + 0x10) | 1;
      pAVar17 = (Arena *)(*(ulonglong *)((longlong)pvVar7 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar7 + 8) & 1) != 0) {
        pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
      }
      local_c8._Mydata = local_e8._Mydata;
      local_c8._Mysize = local_e8._Mysize;
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)((longlong)pvVar7 + 0x30),&local_c8,pAVar17);
      *(undefined4 *)((longlong)pvVar7 + 0x38) = *(undefined4 *)(lVar2 + 4 + uVar18);
      *(uint *)((longlong)pvVar7 + 0x10) = *(uint *)((longlong)pvVar7 + 0x10) | 2;
      pbVar8 = pbVar1;
      if ((~*pbVar1 & 1) == 0) {
        if ((local_d8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                    ((LogMessageFatal *)&local_a0);
        }
        pbVar8 = (byte *)(*(longlong *)pbVar1 + (longlong)(int)uVar16 * 8 + 7);
      }
      pEVar11 = &google::protobuf::_EnumValueOptions_default_instance_;
      if (*(EnumValueOptionsDefaultTypeInternal **)(*(longlong *)pbVar8 + 0x20) !=
          (EnumValueOptionsDefaultTypeInternal *)0x0) {
        pEVar11 = *(EnumValueOptionsDefaultTypeInternal **)(*(longlong *)pbVar8 + 0x20);
      }
      FUN_14f9f3da0(pEVar11,(longlong)pvVar7 + 0x18);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      uVar18 = uVar18 + 0x30;
      param_3 = local_a8;
    } while ((int)uVar15 < *(int *)(param_1 + 4));
  }
  pEVar12 = &google::protobuf::_EnumOptions_default_instance_;
  if (*(EnumOptionsDefaultTypeInternal **)(param_3 + 0x68) != (EnumOptionsDefaultTypeInternal *)0x0)
  {
    pEVar12 = *(EnumOptionsDefaultTypeInternal **)(param_3 + 0x68);
  }
  FUN_14f9f3da0(pEVar12,&(param_4->_impl_).options_);
  return;
}

// FUN_14f9f3230 @ 14f9f3230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f9f3230(undefined8 *param_1,FieldDescriptor *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  OneofDescriptor *pOVar2;
  byte bVar3;
  bool bVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  EnumDescriptor *pEVar6;
  Descriptor *pDVar7;
  undefined8 uVar8;
  FieldOptionsDefaultTypeInternal *pFVar9;
  uint uVar10;
  ulong64 uVar11;
  Arena *pAVar12;
  undefined1 auStack_118 [32];
  basic_string_view<char,std::char_traits<char>_> local_f8;
  _Bxty local_e0;
  ulonglong local_c8;
  AlphaNum local_c0;
  AlphaNum local_90;
  AlphaNum local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  *(uint *)(param_4 + 0x50) = (uint)param_2->type_;
  uVar1 = *(uint *)(param_4 + 0x10);
  uVar10 = uVar1 | 0x10;
  *(uint *)(param_4 + 0x10) = uVar10;
  bVar3 = param_2->label_;
  if (bVar3 == 1) {
    *(undefined4 *)(param_4 + 0x54) = 1;
LAB_14f9f32a2:
    uVar10 = uVar1 | 0x30;
    *(uint *)(param_4 + 0x10) = uVar10;
  }
  else {
    if (bVar3 == 2) {
      *(undefined4 *)(param_4 + 0x54) = 2;
      goto LAB_14f9f32a2;
    }
    if (bVar3 == 3) {
      *(undefined4 *)(param_4 + 0x54) = 3;
      goto LAB_14f9f32a2;
    }
  }
  *(int *)(param_4 + 0x58) = param_2->number_;
  *(uint *)(param_4 + 0x10) = uVar10 | 0x40;
  pbVar5 = param_2->all_names_;
  local_f8._Mydata = (char *)pbVar5;
  if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
    local_f8._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
  }
  local_f8._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
  *(uint *)(param_4 + 0x10) = uVar10 | 0x41;
  pAVar12 = (Arena *)(*(ulonglong *)(param_4 + 8) & 0xfffffffffffffffe);
  if ((*(byte *)(param_4 + 8) & 1) != 0) {
    pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)(param_4 + 0x30),&local_f8,pAVar12);
  pbVar5 = param_2->all_names_ + param_2->json_name_index_;
  local_f8._Mydata = (char *)pbVar5;
  if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
    local_f8._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
  }
  local_f8._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
  pAVar12 = (Arena *)(*(ulonglong *)(param_4 + 8) & 0xfffffffffffffffe);
  if ((*(byte *)(param_4 + 8) & 1) != 0) {
    pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)(param_4 + 0x40),&local_f8,pAVar12);
  if (param_2->has_default_value_) {
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_14f9f3f70(&local_e0,param_2);
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 8;
    pAVar12 = (Arena *)(*(ulonglong *)(param_4 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(param_4 + 0x48),pbVar5,pAVar12);
    if (0xf < local_c8) {
      uVar11 = local_c8 + 1;
      uVar8 = local_e0._Ptr;
      if (0xfff < uVar11) {
        uVar11 = local_c8 + 0x28;
        uVar8 = *(undefined8 *)(local_e0._Ptr + -8);
        if ((char *)0x1f < local_e0._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar8,uVar11);
    }
  }
  if ((byte)(param_2->type_ - 10) < 2) {
    pDVar7 = google::protobuf::FieldDescriptor::message_type(param_2);
    pbVar5 = pDVar7->all_names_;
    local_c0.piece_._Mydata = (char *)(pbVar5 + 1);
    if (0xf < pbVar5[1]._Mypair._Myval2._Myres) {
      local_c0.piece_._Mydata = pbVar5[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_c0.piece_._Mysize = pbVar5[1]._Mypair._Myval2._Mysize;
    local_f8._Mydata = "/";
    local_f8._Mysize = 1;
    local_60.piece_._Mydata = "/";
    local_60.piece_._Mysize = 1;
    local_90.piece_._Mydata = (char *)*param_1;
    local_90.piece_._Mysize = param_1[1];
    absl::lts_20240722::StrCat
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e0,
               &local_90,&local_60,&local_c0);
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 2;
    pAVar12 = (Arena *)(*(ulonglong *)(param_4 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(param_4 + 0x38),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e0,pAVar12)
    ;
    if (local_c8 < 0x10) goto LAB_14f9f356c;
    uVar11 = local_c8 + 1;
    uVar8 = local_e0._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_c8 + 0x28;
      uVar8 = *(undefined8 *)(local_e0._Ptr + -8);
      if ((char *)0x1f < local_e0._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (param_2->type_ != '\x0e') goto LAB_14f9f356c;
    pEVar6 = google::protobuf::FieldDescriptor::enum_type(param_2);
    pbVar5 = pEVar6->all_names_;
    local_c0.piece_._Mydata = (char *)(pbVar5 + 1);
    if (0xf < pbVar5[1]._Mypair._Myval2._Myres) {
      local_c0.piece_._Mydata = pbVar5[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_c0.piece_._Mysize = pbVar5[1]._Mypair._Myval2._Mysize;
    local_f8._Mydata = "/";
    local_f8._Mysize = 1;
    local_90.piece_._Mydata = "/";
    local_90.piece_._Mysize = 1;
    local_60.piece_._Mydata = (char *)*param_1;
    local_60.piece_._Mysize = param_1[1];
    absl::lts_20240722::StrCat
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e0,
               &local_60,&local_90,&local_c0);
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 2;
    pAVar12 = (Arena *)(*(ulonglong *)(param_4 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(param_4 + 0x38),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e0,pAVar12)
    ;
    if (local_c8 < 0x10) goto LAB_14f9f356c;
    uVar11 = local_c8 + 1;
    uVar8 = local_e0._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_c8 + 0x28;
      uVar8 = *(char **)(local_e0._Ptr + -8);
      if ((char *)0x1f < local_e0._Ptr + (-8 - (longlong)*(char **)(local_e0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete((void *)uVar8,uVar11);
LAB_14f9f356c:
  if ((param_2->is_oneof_) &&
     (pOVar2 = (param_2->scope_).containing_oneof, pOVar2 != (OneofDescriptor *)0x0)) {
    *(int *)(param_4 + 0x5c) =
         (int)(((longlong)pOVar2 - (longlong)pOVar2->containing_type_->oneof_decls_) / 0x38) + 1;
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x80;
  }
  bVar4 = google::protobuf::FieldDescriptor::is_packed(param_2);
  if (bVar4) {
    *(undefined1 *)(param_4 + 0x60) = 1;
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x100;
  }
  pFVar9 = &google::protobuf::_FieldOptions_default_instance_;
  if (*(FieldOptionsDefaultTypeInternal **)(param_3 + 0x40) !=
      (FieldOptionsDefaultTypeInternal *)0x0) {
    pFVar9 = *(FieldOptionsDefaultTypeInternal **)(param_3 + 0x40);
  }
  FUN_14f9f3da0(pFVar9,param_4 + 0x18);
  return;
}

// FUN_14f9f3620 @ 14f9f3620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "CppType": Some values do not have unique names */

void FUN_14f9f3620(Reflection *param_1,Message *param_2,FieldDescriptor *param_3,int param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  Any *this;
  Message *pMVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  EnumValueDescriptor *pEVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong64 uVar12;
  uint uVar13;
  Arena *pAVar14;
  float fVar15;
  TaggedStringPtr TVar16;
  undefined1 auStackY_148 [32];
  Message local_118;
  uint local_108;
  ArenaStringPtr local_100;
  uint local_f8;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d8;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8 = 0;
  pbVar7 = param_3->all_names_;
  if (param_3->is_extension_) {
    local_e8._Mydata = (char *)(pbVar7 + 1);
    if (0xf < pbVar7[1]._Mypair._Myval2._Myres) {
      local_e8._Mydata = pbVar7[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_e8._Mysize = pbVar7[1]._Mypair._Myval2._Mysize;
  }
  else {
    local_e8._Mydata = (char *)pbVar7;
    if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
      local_e8._Mydata = (pbVar7->_Mypair)._Myval2._Bx._Ptr;
    }
    local_e8._Mysize = (pbVar7->_Mypair)._Myval2._Mysize;
  }
  *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) | 1;
  pAVar14 = (Arena *)(*(ulonglong *)(param_5 + 8) & 0xfffffffffffffffe);
  if ((*(byte *)(param_5 + 8) & 1) != 0) {
    pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
  }
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)(param_5 + 0x18),&local_e8,pAVar14);
  *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) | 2;
  this = *(Any **)(param_5 + 0x20);
  if (this == (Any *)0x0) {
    pAVar14 = (Arena *)(*(ulonglong *)(param_5 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)(param_5 + 8) & 1) != 0) {
      pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
    }
    this = google::protobuf::Arena::DefaultConstruct<google::protobuf::Any>(pAVar14);
    *(Any **)(param_5 + 0x20) = this;
  }
  switch(*(undefined4 *)
          ((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
          (ulonglong)param_3->type_ * 4)) {
  case 1:
    if (param_3->is_repeated_) {
      iVar5 = google::protobuf::Reflection::GetRepeatedInt32(param_1,param_2,param_3,param_4);
    }
    else {
      iVar5 = google::protobuf::Reflection::GetInt32(param_1,param_2,param_3);
    }
    google::protobuf::Int32Value::Int32Value((Int32Value *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::Int32Value::vftable;
    local_100.tagged_ptr_.ptr_._0_4_ = (float)iVar5;
    local_108 = local_108 | 1;
    google::protobuf::Any::PackFrom(this,&local_118);
    goto LAB_14f9f3d33;
  case 2:
    if (param_3->is_repeated_) {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetRepeatedInt64
                                      (param_1,param_2,param_3,param_4);
    }
    else {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetInt64(param_1,param_2,param_3);
    }
    google::protobuf::Int64Value::Int64Value((Int64Value *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::Int64Value::vftable;
    local_108 = local_108 | 1;
    local_100.tagged_ptr_.ptr_ = (TaggedStringPtr)(TaggedStringPtr)TVar16.ptr_;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::Int64Value::~Int64Value((Int64Value *)&local_118);
    break;
  case 3:
    if (param_3->is_repeated_) {
      uVar13 = google::protobuf::Reflection::GetRepeatedUInt32(param_1,param_2,param_3,param_4);
    }
    else {
      uVar13 = google::protobuf::Reflection::GetUInt32(param_1,param_2,param_3);
    }
    google::protobuf::UInt32Value::UInt32Value((UInt32Value *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::UInt32Value::vftable;
    local_100.tagged_ptr_.ptr_._0_4_ = (float)uVar13;
    local_108 = local_108 | 1;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::UInt32Value::~UInt32Value((UInt32Value *)&local_118);
    break;
  case 4:
    if (param_3->is_repeated_) {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetRepeatedUInt64
                                      (param_1,param_2,param_3,param_4);
    }
    else {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetUInt64(param_1,param_2,param_3);
    }
    google::protobuf::UInt64Value::UInt64Value((UInt64Value *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::UInt64Value::vftable;
    local_108 = local_108 | 1;
    local_100.tagged_ptr_.ptr_ = (TaggedStringPtr)(TaggedStringPtr)TVar16.ptr_;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::UInt64Value::~UInt64Value((UInt64Value *)&local_118);
    break;
  case 5:
    if (param_3->is_repeated_) {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetRepeatedDouble
                                      (param_1,param_2,param_3,param_4);
    }
    else {
      TVar16.ptr_ = (void *)google::protobuf::Reflection::GetDouble(param_1,param_2,param_3);
    }
    google::protobuf::DoubleValue::DoubleValue((DoubleValue *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::DoubleValue::vftable;
    local_108 = local_108 | 1;
    local_100.tagged_ptr_.ptr_ = (TaggedStringPtr)(TaggedStringPtr)TVar16.ptr_;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::DoubleValue::~DoubleValue((DoubleValue *)&local_118);
    break;
  case 6:
    if (param_3->is_repeated_) {
      fVar15 = google::protobuf::Reflection::GetRepeatedFloat(param_1,param_2,param_3,param_4);
    }
    else {
      fVar15 = google::protobuf::Reflection::GetFloat(param_1,param_2,param_3);
    }
    google::protobuf::FloatValue::FloatValue((FloatValue *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::FloatValue::vftable;
    local_100.tagged_ptr_.ptr_._0_4_ = fVar15;
    local_108 = local_108 | 1;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::FloatValue::~FloatValue((FloatValue *)&local_118);
    break;
  case 7:
    if (param_3->is_repeated_) {
      bVar4 = google::protobuf::Reflection::GetRepeatedBool(param_1,param_2,param_3,param_4);
    }
    else {
      bVar4 = google::protobuf::Reflection::GetBool(param_1,param_2,param_3);
    }
    google::protobuf::BoolValue::BoolValue((BoolValue *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::BoolValue::vftable;
    local_100.tagged_ptr_.ptr_._0_1_ = bVar4;
    local_108 = local_108 | 1;
    google::protobuf::Any::PackFrom(this,&local_118);
    google::protobuf::BoolValue::~BoolValue((BoolValue *)&local_118);
    break;
  case 8:
    if (param_3->is_repeated_) {
      pEVar8 = google::protobuf::Reflection::GetRepeatedEnum(param_1,param_2,param_3,param_4);
    }
    else {
      pEVar8 = google::protobuf::Reflection::GetEnum(param_1,param_2,param_3);
    }
    iVar5 = pEVar8->number_;
    google::protobuf::Int32Value::Int32Value((Int32Value *)&local_118,(Arena *)0x0);
    local_118._0_8_ = google::protobuf::Int32Value::vftable;
    local_100.tagged_ptr_.ptr_._0_4_ = (float)iVar5;
    local_108 = local_108 | 1;
    google::protobuf::Any::PackFrom(this,&local_118);
LAB_14f9f3d33:
    google::protobuf::Int32Value::~Int32Value((Int32Value *)&local_118);
    break;
  case 9:
    if (param_3->is_repeated_) {
      pbVar7 = google::protobuf::Reflection::GetRepeatedString
                         (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_98,param_2,param_3,param_4);
      uVar13 = 1;
    }
    else {
      pbVar7 = google::protobuf::Reflection::GetString
                         (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_b8,param_2,param_3);
      uVar13 = 2;
    }
    local_f8 = uVar13;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pbVar7);
    if ((uVar13 & 2) != 0) {
      uVar13 = uVar13 & 0xfffffffd;
      local_f8 = uVar13;
      if (0xf < uStack_a0) {
        uVar12 = uStack_a0 + 1;
        pvVar3 = (void *)CONCAT71(local_b8._1_7_,local_b8._Buf[0]);
        pvVar9 = pvVar3;
        if (0xfff < uVar12) {
          uVar12 = uStack_a0 + 0x28;
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,uVar12);
      }
      local_a8 = ___xmm_000000000000000f0000000000000000;
      uStack_a0 = _UNK_15076add8;
      local_b8._Buf[0] = '\0';
    }
    if ((uVar13 & 1) != 0) {
      uVar13 = uVar13 & 0xfffffffe;
      local_f8 = uVar13;
      if (0xf < uStack_80) {
        uVar12 = uStack_80 + 1;
        pvVar3 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        pvVar9 = pvVar3;
        if (0xfff < uVar12) {
          uVar12 = uStack_80 + 0x28;
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,uVar12);
      }
      local_88 = ___xmm_000000000000000f0000000000000000;
      uStack_80 = _UNK_15076add8;
      local_98._Buf[0] = '\0';
    }
    if (param_3->type_ == '\t') {
      pbVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (&local_d8,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78);
      local_e8._Mydata = (char *)pbVar7;
      google::protobuf::StringValue::StringValue((StringValue *)&local_118,(Arena *)0x0);
      local_118._0_8_ = google::protobuf::StringValue::vftable;
      local_f8 = uVar13 | 0x800;
      local_108 = local_108 | 1;
      if ((local_118._8_1_ & 1) == 0) {
        pAVar14 = (Arena *)(CONCAT71(local_118._9_7_,local_118._8_1_) & 0xfffffffffffffffe);
      }
      else {
        pAVar14 = *(Arena **)(CONCAT71(local_118._9_7_,local_118._8_1_) & 0xfffffffffffffffe);
      }
      google::protobuf::internal::ArenaStringPtr::Set<>(&local_100,pbVar7,pAVar14);
      uVar1 = (pbVar7->_Mypair)._Myval2._Myres;
      if (0xf < uVar1) {
        pcVar2 = (pbVar7->_Mypair)._Myval2._Bx._Ptr;
        uVar12 = uVar1 + 1;
        pcVar10 = pcVar2;
        if (0xfff < uVar12) {
          uVar12 = uVar1 + 0x28;
          pcVar10 = *(char **)(pcVar2 + -8);
          if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar10)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar10,uVar12);
      }
      (pbVar7->_Mypair)._Myval2._Mysize = 0;
      (pbVar7->_Mypair)._Myval2._Myres = 0xf;
      (pbVar7->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      google::protobuf::Any::PackFrom(this,&local_118);
      google::protobuf::StringValue::~StringValue((StringValue *)&local_118);
    }
    else {
      pbVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (&local_d8,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78);
      local_e8._Mydata = (char *)pbVar7;
      google::protobuf::BytesValue::BytesValue((BytesValue *)&local_118,(Arena *)0x0);
      local_118._0_8_ = google::protobuf::BytesValue::vftable;
      local_f8 = uVar13 | 0x400;
      local_108 = local_108 | 1;
      if ((local_118._8_1_ & 1) == 0) {
        pAVar14 = (Arena *)(CONCAT71(local_118._9_7_,local_118._8_1_) & 0xfffffffffffffffe);
      }
      else {
        pAVar14 = *(Arena **)(CONCAT71(local_118._9_7_,local_118._8_1_) & 0xfffffffffffffffe);
      }
      google::protobuf::internal::ArenaStringPtr::Set<>(&local_100,pbVar7,pAVar14);
      uVar1 = (pbVar7->_Mypair)._Myval2._Myres;
      if (0xf < uVar1) {
        pcVar2 = (pbVar7->_Mypair)._Myval2._Bx._Ptr;
        uVar12 = uVar1 + 1;
        pcVar10 = pcVar2;
        if (0xfff < uVar12) {
          uVar12 = uVar1 + 0x28;
          pcVar10 = *(char **)(pcVar2 + -8);
          if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar10)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar10,uVar12);
      }
      (pbVar7->_Mypair)._Myval2._Mysize = 0;
      (pbVar7->_Mypair)._Myval2._Myres = 0xf;
      (pbVar7->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      google::protobuf::Any::PackFrom(this,&local_118);
      google::protobuf::BytesValue::~BytesValue((BytesValue *)&local_118);
    }
    if (0xf < local_60) {
      uVar12 = local_60 + 1;
      uVar11 = local_78._Ptr;
      if (0xfff < uVar12) {
        uVar12 = local_60 + 0x28;
        uVar11 = *(undefined8 *)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar11,uVar12);
    }
    break;
  case 10:
    if (param_3->is_repeated_) {
      pMVar6 = google::protobuf::Reflection::GetRepeatedMessage(param_1,param_2,param_3,param_4);
      google::protobuf::Any::PackFrom(this,pMVar6);
    }
    else {
      pMVar6 = google::protobuf::Reflection::GetMessage
                         (param_1,param_2,param_3,(MessageFactory *)0x0);
      google::protobuf::Any::PackFrom(this,pMVar6);
    }
  }
  return;
}

// FUN_14f9f3da0 @ 14f9f3da0

void FUN_14f9f3da0(Message *param_1,RepeatedPtrFieldBase *param_2)

{
  Reflection *this;
  FieldDescriptor *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  Metadata *pMVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  int iVar8;
  Metadata local_58;
  undefined8 *local_48;
  undefined8 *puStack_40;
  longlong local_38;
  
  pMVar4 = google::protobuf::Message::GetMetadata(param_1,&local_58);
  this = pMVar4->reflection;
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  google::protobuf::Reflection::ListFields
            (this,param_1,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_48);
  puVar2 = puStack_40;
  for (puVar7 = local_48; puVar7 != puVar2; puVar7 = puVar7 + 1) {
    pFVar1 = (FieldDescriptor *)*puVar7;
    if (pFVar1->is_repeated_) {
      iVar3 = google::protobuf::Reflection::FieldSize(this,param_1,pFVar1);
      iVar8 = 0;
      if (0 < iVar3) {
        do {
          pvVar5 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                             (param_2,google::protobuf::Arena::
                                      DefaultConstruct<google::protobuf::Option>);
          FUN_14f9f3620(this,param_1,pFVar1,iVar8,pvVar5);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar3);
      }
    }
    else {
      pvVar5 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         (param_2,google::protobuf::Arena::
                                  DefaultConstruct<google::protobuf::Option>);
      FUN_14f9f3620(this,param_1,pFVar1,0xffffffff,pvVar5);
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar6 = local_38 - (longlong)local_48 & 0xfffffffffffffff8;
    puVar7 = local_48;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      puVar7 = (undefined8 *)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)puVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar7,uVar6);
  }
  return;
}

// FUN_14f9f3f00 @ 14f9f3f00

undefined8 FUN_14f9f3f00(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1[1] == 6) && (iVar1 = memcmp((void *)*param_1,&s_proto2,6), iVar1 == 0)) {
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  if ((param_1[1] == 6) && (iVar1 = memcmp((void *)*param_1,&s_proto3,6), iVar1 == 0)) {
    return 1;
  }
  return 2;
}

// FUN_14f9f3f70 @ 14f9f3f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f9f3f70(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             FieldDescriptor *param_2)

{
  EnumValueDescriptor *pEVar1;
  char *pcVar2;
  undefined1 auStack_88 [32];
  allocator<char> local_68 [16];
  basic_string_view<char,std::char_traits<char>_> local_58;
  char *local_40;
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58._Mydata = (char *)param_1;
  switch(*(undefined4 *)
          ((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
          (ulonglong)param_2->type_ * 4)) {
  case 1:
    local_38 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                         ((param_2->field24_0x58).default_value_int32_t_,local_30);
    goto LAB_14f9f3fd9;
  case 2:
    local_38 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                         ((param_2->field24_0x58).default_value_int64_t_,local_30);
    goto LAB_14f9f3fd9;
  case 3:
    local_38 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                         ((param_2->field24_0x58).default_value_uint32_t_,local_30);
    goto LAB_14f9f3fd9;
  case 4:
    local_38 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                         ((param_2->field24_0x58).default_value_uint64_t_,local_30);
LAB_14f9f3fd9:
    local_38 = local_38 + (-0x10 - (longlong)&local_40);
    local_40 = local_30;
    (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (param_1,local_30,(ulong64)local_38);
    break;
  case 5:
    google::protobuf::io::SimpleDtoa(param_1,(param_2->field24_0x58).default_value_double_);
    break;
  case 6:
    google::protobuf::io::SimpleFtoa(param_1,(param_2->field24_0x58).default_value_float_);
    break;
  case 7:
    pcVar2 = "false";
    if ((param_2->field24_0x58).default_value_bool_ != false) {
      pcVar2 = "true";
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,pcVar2);
    break;
  case 8:
    pEVar1 = google::protobuf::FieldDescriptor::default_value_enum(param_2);
    pEVar1 = (EnumValueDescriptor *)pEVar1->all_names_;
    goto LAB_14f9f40b8;
  case 9:
    pEVar1 = (param_2->field24_0x58).default_value_enum_;
    if (param_2->type_ == 0xc) {
      local_58._Mydata = (char *)pEVar1;
      if ((EnumValueOptions *)&DAT_0000000f < pEVar1->options_) {
        local_58._Mydata = *(char **)pEVar1;
      }
      local_58._Mysize = (ulong64)pEVar1->type_;
      absl::lts_20240722::CEscape(param_1,&local_58);
      return param_1;
    }
LAB_14f9f40b8:
    local_58._Mydata = (char *)pEVar1;
    if ((EnumValueOptions *)&DAT_0000000f < pEVar1->options_) {
      local_58._Mydata = *(char **)pEVar1;
    }
    local_58._Mysize = (ulong64)pEVar1->type_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_><std::basic_string_view<char,std::char_traits<char>_>,0>
              (param_1,&local_58,local_68);
    break;
  default:
    (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 0xf;
    (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  return param_1;
}

// GetNewFunc @ 14f9f4160

/* public: static __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::EnumValue>::GetNewFunc(void) */

code * __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>::GetNewFunc(void)

{
  return Arena::DefaultConstruct<google::protobuf::EnumValue>;
}

// GetNewFunc @ 14f9f4170

/* public: static __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::Field>::GetNewFunc(void) */

code * __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>::GetNewFunc(void)

{
  return Arena::DefaultConstruct<google::protobuf::Field>;
}

// GetNewFunc @ 14f9f4180

/* public: static __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::Option>::GetNewFunc(void) */

code * __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>::GetNewFunc(void)

{
  return Arena::DefaultConstruct<google::protobuf::Option>;
}

// NewTypeResolverForDescriptorPool @ 14f9f4190

/* class google::protobuf::util::TypeResolver * __ptr64 __cdecl
   google::protobuf::util::NewTypeResolverForDescriptorPool(class std::basic_string_view<char,struct
   std::char_traits<char> >,class google::protobuf::DescriptorPool const * __ptr64) */

TypeResolver * __cdecl
google::protobuf::util::NewTypeResolverForDescriptorPool
          (basic_string_view<char,std::char_traits<char>_> *param_1,DescriptorPool *param_2)

{
  TypeResolver *pTVar1;
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 != (TypeResolver *)0x0) {
    *pTVar1 = (TypeResolver)_anon_83CE1D39::DescriptorPoolTypeResolver::vftable;
    pTVar1[1] = (TypeResolver)0x0;
    pTVar1[2] = (TypeResolver)0x0;
    pTVar1[3] = (TypeResolver)0x0;
    pTVar1[4] = (TypeResolver)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pTVar1 + 1),
               param_1->_Mydata,param_1->_Mysize);
    pTVar1[5] = (TypeResolver)param_2;
    return pTVar1;
  }
  return (TypeResolver *)0x0;
}

// PackFrom @ 14f9f4220

/* public: bool __cdecl google::protobuf::Any::PackFrom(class google::protobuf::Message const &
   __ptr64) __ptr64 */

bool __thiscall google::protobuf::Any::PackFrom(Any *this,Message *param_1)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  Arena *pAVar4;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  pbVar2 = internal::ArenaStringPtr::Mutable(&(this->_impl_).value_,pAVar4);
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  pbVar3 = internal::ArenaStringPtr::Mutable(&(this->_impl_).type_url_,pAVar4);
  bVar1 = internal::InternalPackFrom(param_1,pbVar3,pbVar2);
  return bVar1;
}

// FUN_14f9f42a0 @ 14f9f42a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14f9f42a0(longlong param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
             undefined8 *param_3,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  ulonglong _Size;
  void *_Buf1;
  ulonglong uVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *_Buf2;
  ulong64 uVar6;
  longlong lVar7;
  undefined1 auStackY_188 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_148;
  _Bxty local_128;
  ulonglong local_110;
  AlphaNum local_108;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  _Buf1 = (void *)*param_3;
  uVar1 = param_3[1];
  plVar4 = (longlong *)(param_1 + 8);
  _Buf2 = plVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    _Buf2 = (longlong *)*plVar4;
  }
  _Size = *(ulonglong *)(param_1 + 0x18);
  if ((((_Size == 0) ||
       ((_Size <= uVar1 &&
        (local_148._Mypair._Myval2._Bx._Ptr = (char *)param_2, iVar2 = memcmp(_Buf1,_Buf2,_Size),
        iVar2 == 0)))) && (lVar7 = uVar1 - _Size, lVar7 != 0)) &&
     (*(char *)((longlong)_Buf1 + _Size) == '/')) {
    local_148._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    local_148._Mypair._Myval2._Bx._8_8_ = 0;
    local_148._Mypair._Myval2._Mysize = 0;
    local_148._Mypair._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (&local_148,(char *)((longlong)_Buf1 + _Size + 1),lVar7 - 1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_4,&local_148);
    if (0xf < local_148._Mypair._Myval2._Myres) {
      uVar6 = local_148._Mypair._Myval2._Myres + 1;
      uVar5 = local_148._Mypair._Myval2._Bx._Ptr;
      if (0xfff < uVar6) {
        uVar6 = local_148._Mypair._Myval2._Myres + 0x28;
        uVar5 = *(undefined8 *)(local_148._Mypair._Myval2._Bx._Ptr + -8);
        if ((char *)0x1f < local_148._Mypair._Myval2._Bx._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar5,uVar6);
    }
    param_2->_Mydata = (char *)0x1;
    return param_2;
  }
  local_d8.piece_._Mydata = (char *)*param_3;
  local_d8.piece_._Mysize = param_3[1];
  local_a8.piece_._Mydata = "/<typename>\', got: ";
  local_a8.piece_._Mysize = 0x13;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    plVar4 = (longlong *)*plVar4;
  }
  local_148._Mypair._Myval2._Bx._Ptr = "Invalid type URL, type URLs must be of the form \'";
  local_148._Mypair._Myval2._Bx._8_8_ = 0x31;
  local_78.piece_._Mydata = "Invalid type URL, type URLs must be of the form \'";
  local_78.piece_._Mysize = 0x31;
  local_108.piece_._Mydata = (char *)plVar4;
  local_108.piece_._Mysize = _Size;
  pbVar3 = absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128,
                      &local_78,&local_108,&local_a8,&local_d8);
  local_148._Mypair._Myval2._Bx._Ptr = (char *)pbVar3;
  if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
    local_148._Mypair._Myval2._Bx._Ptr = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
  }
  local_148._Mypair._Myval2._Bx._8_8_ = (pbVar3->_Mypair)._Myval2._Mysize;
  absl::lts_20240722::InvalidArgumentError(param_2);
  if (0xf < local_110) {
    uVar6 = local_110 + 1;
    uVar5 = local_128._Ptr;
    if (0xfff < uVar6) {
      uVar6 = local_110 + 0x28;
      uVar5 = *(undefined8 *)(local_128._Ptr + -8);
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar5,uVar6);
  }
  return param_2;
}

// FUN_14f9f44f0 @ 14f9f44f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14f9f44f0(longlong param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
             StatusRep *param_3,Enum *param_4)

{
  void *pvVar1;
  longlong lVar2;
  EnumDescriptor *this;
  StatusRep *pSVar3;
  EnumDescriptorProto *pEVar4;
  void *pvVar5;
  ulong64 uVar6;
  RepeatedPtrFieldBase *pRVar7;
  undefined1 auStack_268 [32];
  basic_string_view<char,std::char_traits<char>_> local_248;
  StatusRep *local_238;
  ulong64 uStack_230;
  undefined4 local_228;
  Enum local_218;
  undefined1 local_1a8 [72];
  RepeatedPtrFieldBase local_160 [6];
  undefined1 local_c8 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a8;
  AlphaNum local_88;
  AlphaNum local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_228 = 0;
  local_c8._8_8_ = (char *)0x0;
  local_c8._16_8_ = 0;
  local_c8._24_8_ = 0xf;
  local_c8._0_8_ = (StatusRep *)0x0;
  local_248._Mydata = (char *)param_3;
  if (0xf < (param_3->message_)._Mypair._Myval2._Mysize) {
    local_248._Mydata = *(char **)param_3;
  }
  local_248._Mysize = *(ulong64 *)((longlong)&(param_3->message_)._Mypair._Myval2._Bx + 8);
  local_238 = (StatusRep *)local_248._Mydata;
  uStack_230 = local_248._Mysize;
  FUN_14f9f42a0(param_1,&local_238,&local_248,local_c8);
  if (local_238 == (StatusRep *)&DAT_00000001) {
    local_248._Mydata = (char *)local_c8;
    if (0xf < (ulonglong)local_c8._24_8_) {
      local_248._Mydata = (char *)local_c8._0_8_;
    }
    local_248._Mysize = local_c8._16_8_;
    this = google::protobuf::DescriptorPool::FindEnumTypeByName
                     (*(DescriptorPool **)(param_1 + 0x28),&local_248);
    if (this == (EnumDescriptor *)0x0) {
      local_88.piece_._Mydata = (char *)local_c8;
      if (0xf < (ulonglong)local_c8._24_8_) {
        local_88.piece_._Mydata = (char *)local_c8._0_8_;
      }
      local_88.piece_._Mysize = local_c8._16_8_;
      local_248._Mydata = "Invalid type URL, unknown type: ";
      local_248._Mysize = 0x20;
      local_58.piece_._Mydata = "Invalid type URL, unknown type: ";
      local_58.piece_._Mysize = 0x20;
      pSVar3 = (StatusRep *)absl::lts_20240722::StrCat(&local_a8,&local_58,&local_88);
      local_248._Mydata = (char *)pSVar3;
      if (0xf < (pSVar3->message_)._Mypair._Myval2._Mysize) {
        local_248._Mydata = *(char **)pSVar3;
      }
      local_248._Mysize = *(ulong64 *)((longlong)&(pSVar3->message_)._Mypair._Myval2._Bx + 8);
      absl::lts_20240722::InvalidArgumentError(param_2);
      if (0xf < local_a8._Mypair._Myval2._Myres) {
        uVar6 = local_a8._Mypair._Myval2._Myres + 1;
        pvVar1 = (void *)CONCAT71(local_a8._Mypair._Myval2._Bx._1_7_,
                                  local_a8._Mypair._Myval2._Bx._Buf[0]);
        pvVar5 = pvVar1;
        if (0xfff < uVar6) {
          uVar6 = local_a8._Mypair._Myval2._Myres + 0x28;
          pvVar5 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,uVar6);
      }
      local_a8._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
      local_a8._Mypair._Myval2._Myres = _UNK_15076add8;
      local_a8._Mypair._Myval2._Bx._Buf[0] = '\0';
      if (((ulonglong)local_238 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_238);
      }
      if ((ulonglong)local_c8._24_8_ < 0x10) {
        return param_2;
      }
      uVar6 = local_c8._24_8_ + 1;
      pSVar3 = (StatusRep *)local_c8._0_8_;
      if (0xfff < uVar6) {
        uVar6 = local_c8._24_8_ + 0x28;
        pSVar3 = (StatusRep *)(((StatusRep *)(local_c8._0_8_ + -0x30))->payloads_)._Mypair._Myval2;
        if ((undefined1 *)0x1f < (undefined1 *)(local_c8._0_8_ + (-8 - (longlong)pSVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_14f9f45e1;
    }
    google::protobuf::Enum::Enum(&local_218,(Arena *)0x0);
    local_218._padding_ = (longlong)google::protobuf::Enum::vftable;
    local_228 = 2;
    google::protobuf::FileDescriptorProto::FileDescriptorProto
              ((FileDescriptorProto *)local_1a8,(Arena *)0x0);
    local_1a8._0_8_ = google::protobuf::FileDescriptorProto::vftable;
    google::protobuf::FileDescriptor::CopyHeadingTo(this->file_,(FileDescriptorProto *)local_1a8);
    pEVar4 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                       (local_160,
                        google::protobuf::Arena::
                        DefaultConstruct<google::protobuf::EnumDescriptorProto>);
    google::protobuf::EnumDescriptor::CopyTo(this,pEVar4);
    if ((~(byte)local_160[0].tagged_rep_or_elem_ & 1) == 0) {
      pRVar7 = (RepeatedPtrFieldBase *)((longlong)local_160[0].tagged_rep_or_elem_ + 7);
    }
    else {
      pRVar7 = local_160;
    }
    FUN_14f9f2da0(this,local_1a8,pRVar7->tagged_rep_or_elem_,&local_218);
    google::protobuf::FileDescriptorProto::~FileDescriptorProto((FileDescriptorProto *)local_1a8);
    google::protobuf::Enum::operator=(param_4,&local_218);
    google::protobuf::Enum::~Enum(&local_218);
    param_2->_Mydata = (char *)0x1;
    if (((ulonglong)local_238 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_238);
    }
    if ((ulonglong)local_c8._24_8_ < 0x10) {
      return param_2;
    }
    uVar6 = local_c8._24_8_ + 1;
    pSVar3 = (StatusRep *)local_c8._0_8_;
    if (uVar6 < 0x1000) goto LAB_14f9f45e1;
    pSVar3 = (StatusRep *)(((StatusRep *)(local_c8._0_8_ + -0x30))->payloads_)._Mypair._Myval2;
    lVar2 = local_c8._0_8_ - (longlong)pSVar3;
  }
  else {
    param_2->_Mydata = (char *)local_238;
    local_238 = (StatusRep *)&DAT_00000037;
    if ((ulonglong)local_c8._24_8_ < 0x10) {
      return param_2;
    }
    uVar6 = local_c8._24_8_ + 1;
    pSVar3 = (StatusRep *)local_c8._0_8_;
    if (uVar6 < 0x1000) goto LAB_14f9f45e1;
    pSVar3 = (StatusRep *)(((StatusRep *)(local_c8._0_8_ + -0x30))->payloads_)._Mypair._Myval2;
    lVar2 = local_c8._0_8_ - (longlong)pSVar3;
  }
  uVar6 = local_c8._24_8_ + 0x28;
  if (0x1f < lVar2 - 8U) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
LAB_14f9f45e1:
  operator_delete(pSVar3,uVar6);
  return param_2;
}

// FUN_14f9f48c0 @ 14f9f48c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14f9f48c0(longlong param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
             StatusRep *param_3,Type *param_4)

{
  void *pvVar1;
  longlong lVar2;
  Descriptor *this;
  StatusRep *pSVar3;
  DescriptorProto *pDVar4;
  char ******ppppppcVar5;
  void *pvVar6;
  ulong64 uVar7;
  RepeatedPtrFieldBase *pRVar8;
  undefined1 auStack_298 [32];
  Type *local_278;
  basic_string_view<char,std::char_traits<char>_> local_268;
  StatusRep *local_258;
  ulong64 uStack_250;
  undefined4 local_248;
  Type local_238;
  undefined1 local_1b8 [48];
  RepeatedPtrFieldBase local_188 [7];
  char *****local_d8;
  undefined8 uStack_d0;
  ulong64 local_c8;
  ulonglong local_c0;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  AlphaNum local_98;
  AlphaNum local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_248 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = (char *****)0x0;
  local_268._Mydata = (char *)param_3;
  if (0xf < (param_3->message_)._Mypair._Myval2._Mysize) {
    local_268._Mydata = *(char **)param_3;
  }
  local_268._Mysize = *(ulong64 *)((longlong)&(param_3->message_)._Mypair._Myval2._Bx + 8);
  local_258 = (StatusRep *)local_268._Mydata;
  uStack_250 = local_268._Mysize;
  FUN_14f9f42a0(param_1,&local_258,&local_268,&local_d8);
  if (local_258 == (StatusRep *)&DAT_00000001) {
    local_268._Mydata = (char *)&local_d8;
    if (0xf < local_c0) {
      local_268._Mydata = (char *)local_d8;
    }
    local_268._Mysize = local_c8;
    this = google::protobuf::DescriptorPool::FindMessageTypeByName
                     (*(DescriptorPool **)(param_1 + 0x28),&local_268);
    if (this == (Descriptor *)0x0) {
      local_98.piece_._Mydata = (char *)&local_d8;
      if (0xf < local_c0) {
        local_98.piece_._Mydata = (char *)local_d8;
      }
      local_98.piece_._Mysize = local_c8;
      local_268._Mydata = "Invalid type URL, unknown type: ";
      local_268._Mysize = 0x20;
      local_68.piece_._Mydata = "Invalid type URL, unknown type: ";
      local_68.piece_._Mysize = 0x20;
      pSVar3 = (StatusRep *)
               absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_b8,&local_68,&local_98);
      local_268._Mydata = (char *)pSVar3;
      if (0xf < (pSVar3->message_)._Mypair._Myval2._Mysize) {
        local_268._Mydata = *(char **)pSVar3;
      }
      local_268._Mysize = *(ulong64 *)((longlong)&(pSVar3->message_)._Mypair._Myval2._Bx + 8);
      absl::lts_20240722::NotFoundError(param_2);
      if (0xf < uStack_a0) {
        uVar7 = uStack_a0 + 1;
        pvVar1 = (void *)CONCAT71(local_b8._1_7_,local_b8._Buf[0]);
        pvVar6 = pvVar1;
        if (0xfff < uVar7) {
          uVar7 = uStack_a0 + 0x28;
          pvVar6 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,uVar7);
      }
      local_a8 = ___xmm_000000000000000f0000000000000000;
      uStack_a0 = _UNK_15076add8;
      local_b8._Buf[0] = '\0';
      if (((ulonglong)local_258 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_258);
      }
      if (local_c0 < 0x10) {
        return param_2;
      }
      uVar7 = local_c0 + 1;
      ppppppcVar5 = (char ******)local_d8;
      if (0xfff < uVar7) {
        uVar7 = local_c0 + 0x28;
        ppppppcVar5 = (char ******)local_d8[-1];
        if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)local_d8[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_14f9f49b0;
    }
    local_268._Mydata = (char *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      local_268._Mydata = *(char **)(param_1 + 8);
    }
    local_268._Mysize = *(ulong64 *)(param_1 + 0x18);
    google::protobuf::Type::Type(&local_238,(Arena *)0x0);
    local_238._padding_ = (longlong)google::protobuf::Type::vftable;
    local_248 = 2;
    google::protobuf::FileDescriptorProto::FileDescriptorProto
              ((FileDescriptorProto *)local_1b8,(Arena *)0x0);
    local_1b8._0_8_ = google::protobuf::FileDescriptorProto::vftable;
    google::protobuf::FileDescriptor::CopyHeadingTo(this->file_,(FileDescriptorProto *)local_1b8);
    pDVar4 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                       (local_188,
                        google::protobuf::Arena::DefaultConstruct<google::protobuf::DescriptorProto>
                       );
    google::protobuf::Descriptor::CopyTo(this,pDVar4);
    if ((~(byte)local_188[0].tagged_rep_or_elem_ & 1) == 0) {
      pRVar8 = (RepeatedPtrFieldBase *)((longlong)local_188[0].tagged_rep_or_elem_ + 7);
    }
    else {
      pRVar8 = local_188;
    }
    local_278 = &local_238;
    FUN_14f9f2760(&local_268,this,local_1b8,pRVar8->tagged_rep_or_elem_);
    google::protobuf::FileDescriptorProto::~FileDescriptorProto((FileDescriptorProto *)local_1b8);
    google::protobuf::Type::operator=(param_4,&local_238);
    google::protobuf::Type::~Type(&local_238);
    param_2->_Mydata = (char *)0x1;
    if (((ulonglong)local_258 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_258);
    }
    if (local_c0 < 0x10) {
      return param_2;
    }
    uVar7 = local_c0 + 1;
    ppppppcVar5 = (char ******)local_d8;
    if (uVar7 < 0x1000) goto LAB_14f9f49b0;
    ppppppcVar5 = (char ******)local_d8[-1];
    lVar2 = (longlong)local_d8 - (longlong)ppppppcVar5;
  }
  else {
    param_2->_Mydata = (char *)local_258;
    local_258 = (StatusRep *)&DAT_00000037;
    if (local_c0 < 0x10) {
      return param_2;
    }
    uVar7 = local_c0 + 1;
    ppppppcVar5 = (char ******)local_d8;
    if (uVar7 < 0x1000) goto LAB_14f9f49b0;
    ppppppcVar5 = (char ******)local_d8[-1];
    lVar2 = (longlong)local_d8 - (longlong)ppppppcVar5;
  }
  uVar7 = local_c0 + 0x28;
  if (0x1f < lVar2 - 8U) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
LAB_14f9f49b0:
  operator_delete(ppppppcVar5,uVar7);
  return param_2;
}

// _internal_mutable_enumvalue @ 14f9f4cc0

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::EnumValue> * __ptr64
   __cdecl google::protobuf::Enum::_internal_mutable_enumvalue(void) __ptr64 */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::Enum::_internal_mutable_enumvalue(Enum *this)

{
  return &(this->_impl_).enumvalue_;
}

// _internal_mutable_fields @ 14f9f4cd0

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Field> * __ptr64
   __cdecl google::protobuf::Type::_internal_mutable_fields(void) __ptr64 */

RepeatedPtrField<google::protobuf::Field> * __thiscall
google::protobuf::Type::_internal_mutable_fields(Type *this)

{
  return &(this->_impl_).fields_;
}

// _internal_mutable_oneofs @ 14f9f4ce0

/* private: class google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > * __ptr64 __cdecl
   google::protobuf::Type::_internal_mutable_oneofs(void) __ptr64 */

RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::Type::_internal_mutable_oneofs(Type *this)

{
  return &(this->_impl_).oneofs_;
}

// _internal_mutable_options @ 14f9f4cf0

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Enum::_internal_mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Enum::_internal_mutable_options(Enum *this)

{
  return &(this->_impl_).options_;
}

// _internal_mutable_options @ 14f9f4d00

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::EnumValue::_internal_mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::EnumValue::_internal_mutable_options(EnumValue *this)

{
  return &(this->_impl_).options_;
}

// _internal_mutable_options @ 14f9f4d10

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Field::_internal_mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Field::_internal_mutable_options(Field *this)

{
  return &(this->_impl_).options_;
}

// _internal_mutable_options @ 14f9f4d20

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Type::_internal_mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Type::_internal_mutable_options(Type *this)

{
  return &(this->_impl_).options_;
}

// _internal_mutable_source_context @ 14f9f4d30

/* private: class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::Enum::_internal_mutable_source_context(void) __ptr64 */

SourceContext * __thiscall google::protobuf::Enum::_internal_mutable_source_context(Enum *this)

{
  SourceContext *pSVar1;
  Arena *pAVar2;
  
  pSVar1 = (this->_impl_).source_context_;
  if (pSVar1 == (SourceContext *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pSVar1 = Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar2);
    (this->_impl_).source_context_ = pSVar1;
  }
  return pSVar1;
}

// _internal_mutable_source_context @ 14f9f4d70

/* private: class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::Type::_internal_mutable_source_context(void) __ptr64 */

SourceContext * __thiscall google::protobuf::Type::_internal_mutable_source_context(Type *this)

{
  SourceContext *pSVar1;
  Arena *pAVar2;
  
  pSVar1 = (this->_impl_).source_context_;
  if (pSVar1 == (SourceContext *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pSVar1 = Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar2);
    (this->_impl_).source_context_ = pSVar1;
  }
  return pSVar1;
}

// _internal_mutable_type_url @ 14f9f4db0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::Any::_internal_mutable_type_url(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Any::_internal_mutable_type_url(Any *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  pbVar1 = internal::ArenaStringPtr::Mutable(&(this->_impl_).type_url_,pAVar2);
  return pbVar1;
}

// _internal_mutable_value @ 14f9f4de0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::Any::_internal_mutable_value(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Any::_internal_mutable_value(Any *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  pbVar1 = internal::ArenaStringPtr::Mutable(&(this->_impl_).value_,pAVar2);
  return pbVar1;
}

// _internal_mutable_value @ 14f9f4e10

/* private: class google::protobuf::Any * __ptr64 __cdecl
   google::protobuf::Option::_internal_mutable_value(void) __ptr64 */

Any * __thiscall google::protobuf::Option::_internal_mutable_value(Option *this)

{
  Any *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (this->_impl_).value_;
  if (pAVar1 == (Any *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pAVar1 = Arena::DefaultConstruct<google::protobuf::Any>(pAVar2);
    (this->_impl_).value_ = pAVar1;
  }
  return pAVar1;
}

// _internal_set_cardinality @ 14f9f4e50

/* private: void __cdecl google::protobuf::Field::_internal_set_cardinality(enum
   google::protobuf::Field_Cardinality) __ptr64 */

void __thiscall
google::protobuf::Field::_internal_set_cardinality(Field *this,Field_Cardinality param_1)

{
  (this->_impl_).cardinality_ = param_1;
  return;
}

// _internal_set_kind @ 14f9f4e60

/* private: void __cdecl google::protobuf::Field::_internal_set_kind(enum
   google::protobuf::Field_Kind) __ptr64 */

void __thiscall google::protobuf::Field::_internal_set_kind(Field *this,Field_Kind param_1)

{
  (this->_impl_).kind_ = param_1;
  return;
}

// _internal_set_number @ 14f9f4e70

/* private: void __cdecl google::protobuf::EnumValue::_internal_set_number(int) __ptr64 */

void __thiscall google::protobuf::EnumValue::_internal_set_number(EnumValue *this,int param_1)

{
  (this->_impl_).number_ = param_1;
  return;
}

// _internal_set_number @ 14f9f4e80

/* private: void __cdecl google::protobuf::Field::_internal_set_number(int) __ptr64 */

void __thiscall google::protobuf::Field::_internal_set_number(Field *this,int param_1)

{
  (this->_impl_).number_ = param_1;
  return;
}

// _internal_set_oneof_index @ 14f9f4e90

/* private: void __cdecl google::protobuf::Field::_internal_set_oneof_index(int) __ptr64 */

void __thiscall google::protobuf::Field::_internal_set_oneof_index(Field *this,int param_1)

{
  (this->_impl_).oneof_index_ = param_1;
  return;
}

// _internal_set_packed @ 14f9f4ea0

/* private: void __cdecl google::protobuf::Field::_internal_set_packed(bool) __ptr64 */

void __thiscall google::protobuf::Field::_internal_set_packed(Field *this,bool param_1)

{
  (this->_impl_).packed_ = param_1;
  return;
}

// _internal_set_syntax @ 14f9f4eb0

/* private: void __cdecl google::protobuf::Enum::_internal_set_syntax(enum google::protobuf::Syntax)
   __ptr64 */

void __thiscall google::protobuf::Enum::_internal_set_syntax(Enum *this,Syntax param_1)

{
  (this->_impl_).syntax_ = param_1;
  return;
}

// _internal_set_syntax @ 14f9f4ec0

/* private: void __cdecl google::protobuf::Type::_internal_set_syntax(enum google::protobuf::Syntax)
   __ptr64 */

void __thiscall google::protobuf::Type::_internal_set_syntax(Type *this,Syntax param_1)

{
  (this->_impl_).syntax_ = param_1;
  return;
}

// _internal_set_value @ 14f9f4ed0

/* private: void __cdecl google::protobuf::BoolValue::_internal_set_value(bool) __ptr64 */

void __thiscall google::protobuf::BoolValue::_internal_set_value(BoolValue *this,bool param_1)

{
  this[0x18] = (BoolValue)param_1;
  return;
}

// _internal_set_value @ 14f9f4ee0

/* private: void __cdecl google::protobuf::DoubleValue::_internal_set_value(double) __ptr64 */

void __thiscall google::protobuf::DoubleValue::_internal_set_value(DoubleValue *this,double param_1)

{
  *(double *)(this + 0x18) = param_1;
  return;
}

// _internal_set_value @ 14f9f4ef0

/* private: void __cdecl google::protobuf::FloatValue::_internal_set_value(float) __ptr64 */

void __thiscall google::protobuf::FloatValue::_internal_set_value(FloatValue *this,float param_1)

{
  *(float *)(this + 0x18) = param_1;
  return;
}

// _internal_set_value @ 14f9f4f00

/* private: void __cdecl google::protobuf::Int32Value::_internal_set_value(int) __ptr64 */

void __thiscall google::protobuf::Int32Value::_internal_set_value(Int32Value *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  return;
}

// _internal_set_value @ 14f9f4f10

/* private: void __cdecl google::protobuf::Int64Value::_internal_set_value(__int64) __ptr64 */

void __thiscall google::protobuf::Int64Value::_internal_set_value(Int64Value *this,__int64 param_1)

{
  *(__int64 *)(this + 0x18) = param_1;
  return;
}

// _internal_set_value @ 14f9f4f20

/* private: void __cdecl google::protobuf::UInt32Value::_internal_set_value(unsigned int) __ptr64 */

void __thiscall google::protobuf::UInt32Value::_internal_set_value(UInt32Value *this,uint param_1)

{
  *(uint *)(this + 0x18) = param_1;
  return;
}

// _internal_set_value @ 14f9f4f30

/* private: void __cdecl google::protobuf::UInt64Value::_internal_set_value(unsigned __int64)
   __ptr64 */

void __thiscall
google::protobuf::UInt64Value::_internal_set_value(UInt64Value *this,__uint64 param_1)

{
  *(__uint64 *)(this + 0x18) = param_1;
  return;
}

// _internal_syntax @ 14f9f4f40

/* private: enum google::protobuf::Syntax __cdecl
   google::protobuf::Enum::_internal_syntax(void)const __ptr64 */

Syntax __thiscall google::protobuf::Enum::_internal_syntax(Enum *this)

{
  return (this->_impl_).syntax_;
}

// _internal_syntax @ 14f9f4f50

/* private: enum google::protobuf::Syntax __cdecl
   google::protobuf::Type::_internal_syntax(void)const __ptr64 */

Syntax __thiscall google::protobuf::Type::_internal_syntax(Type *this)

{
  return (this->_impl_).syntax_;
}

// add_fields @ 14f9f4f60

/* public: class google::protobuf::Field * __ptr64 __cdecl google::protobuf::Type::add_fields(void)
   __ptr64 */

Field * __thiscall google::protobuf::Type::add_fields(Type *this)

{
  Field *pFVar1;
  
  pFVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)&(this->_impl_).fields_,
                      Arena::DefaultConstruct<google::protobuf::Field>);
  return pFVar1;
}

// default_value_int32 @ 14f9f4f80

/* public: int __cdecl google::protobuf::FieldDescriptor::default_value_int32(void)const __ptr64 */

int __thiscall google::protobuf::FieldDescriptor::default_value_int32(FieldDescriptor *this)

{
  return (this->field24_0x58).default_value_int32_t_;
}

// default_value_int64 @ 14f9f4f90

/* public: __int64 __cdecl google::protobuf::FieldDescriptor::default_value_int64(void)const __ptr64
    */

__int64 __thiscall google::protobuf::FieldDescriptor::default_value_int64(FieldDescriptor *this)

{
  return (this->field24_0x58).default_value_int64_t_;
}

// default_value_uint32 @ 14f9f4fa0

/* public: unsigned int __cdecl google::protobuf::FieldDescriptor::default_value_uint32(void)const
   __ptr64 */

uint __thiscall google::protobuf::FieldDescriptor::default_value_uint32(FieldDescriptor *this)

{
  return (this->field24_0x58).default_value_uint32_t_;
}

// default_value_uint64 @ 14f9f4fb0

/* public: unsigned __int64 __cdecl
   google::protobuf::FieldDescriptor::default_value_uint64(void)const __ptr64 */

__uint64 __thiscall google::protobuf::FieldDescriptor::default_value_uint64(FieldDescriptor *this)

{
  return (this->field24_0x58).default_value_int64_t_;
}

// mutable_enumvalue @ 14f9f4fc0

/* public: class google::protobuf::RepeatedPtrField<class google::protobuf::EnumValue> * __ptr64
   __cdecl google::protobuf::Enum::mutable_enumvalue(void) __ptr64 */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::Enum::mutable_enumvalue(Enum *this)

{
  return &(this->_impl_).enumvalue_;
}

// mutable_options @ 14f9f4fd0

/* public: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Enum::mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Enum::mutable_options(Enum *this)

{
  return &(this->_impl_).options_;
}

// mutable_options @ 14f9f4fe0

/* public: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::EnumValue::mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::EnumValue::mutable_options(EnumValue *this)

{
  return &(this->_impl_).options_;
}

// mutable_options @ 14f9f4ff0

/* public: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Field::mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Field::mutable_options(Field *this)

{
  return &(this->_impl_).options_;
}

// mutable_options @ 14f9f5000

/* public: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> * __ptr64
   __cdecl google::protobuf::Type::mutable_options(void) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Type::mutable_options(Type *this)

{
  return &(this->_impl_).options_;
}

// mutable_source_context @ 14f9f5010

/* public: class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::Enum::mutable_source_context(void) __ptr64 */

SourceContext * __thiscall google::protobuf::Enum::mutable_source_context(Enum *this)

{
  SourceContext *pSVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 4;
  pSVar1 = (this->_impl_).source_context_;
  if (pSVar1 == (SourceContext *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pSVar1 = Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar2);
    (this->_impl_).source_context_ = pSVar1;
  }
  return pSVar1;
}

// mutable_source_context @ 14f9f5050

/* public: class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::Type::mutable_source_context(void) __ptr64 */

SourceContext * __thiscall google::protobuf::Type::mutable_source_context(Type *this)

{
  SourceContext *pSVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 4;
  pSVar1 = (this->_impl_).source_context_;
  if (pSVar1 == (SourceContext *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pSVar1 = Arena::DefaultConstruct<google::protobuf::SourceContext>(pAVar2);
    (this->_impl_).source_context_ = pSVar1;
  }
  return pSVar1;
}

// mutable_type_url @ 14f9f5090

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::Any::mutable_type_url(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Any::mutable_type_url(Any *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  pbVar1 = internal::ArenaStringPtr::Mutable(&(this->_impl_).type_url_,pAVar2);
  return pbVar1;
}

// mutable_value @ 14f9f50c0

/* public: class google::protobuf::Any * __ptr64 __cdecl
   google::protobuf::Option::mutable_value(void) __ptr64 */

Any * __thiscall google::protobuf::Option::mutable_value(Option *this)

{
  Any *pAVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (this->_impl_).value_;
  if (pAVar1 == (Any *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pAVar1 = Arena::DefaultConstruct<google::protobuf::Any>(pAVar2);
    (this->_impl_).value_ = pAVar1;
  }
  return pAVar1;
}

// set_cardinality @ 14f9f5100

/* public: void __cdecl google::protobuf::Field::set_cardinality(enum
   google::protobuf::Field_Cardinality) __ptr64 */

void __thiscall google::protobuf::Field::set_cardinality(Field *this,Field_Cardinality param_1)

{
  (this->_impl_).cardinality_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 0x20;
  return;
}

// set_kind @ 14f9f5110

/* public: void __cdecl google::protobuf::Field::set_kind(enum google::protobuf::Field_Kind) __ptr64
    */

void __thiscall google::protobuf::Field::set_kind(Field *this,Field_Kind param_1)

{
  (this->_impl_).kind_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 0x10;
  return;
}

// set_number @ 14f9f5120

/* public: void __cdecl google::protobuf::EnumValue::set_number(int) __ptr64 */

void __thiscall google::protobuf::EnumValue::set_number(EnumValue *this,int param_1)

{
  (this->_impl_).number_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  return;
}

// set_number @ 14f9f5130

/* public: void __cdecl google::protobuf::Field::set_number(int) __ptr64 */

void __thiscall google::protobuf::Field::set_number(Field *this,int param_1)

{
  (this->_impl_).number_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 0x40;
  return;
}

// set_oneof_index @ 14f9f5140

/* public: void __cdecl google::protobuf::Field::set_oneof_index(int) __ptr64 */

void __thiscall google::protobuf::Field::set_oneof_index(Field *this,int param_1)

{
  (this->_impl_).oneof_index_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 0x80;
  return;
}

// set_packed @ 14f9f5160

/* public: void __cdecl google::protobuf::Field::set_packed(bool) __ptr64 */

void __thiscall google::protobuf::Field::set_packed(Field *this,bool param_1)

{
  (this->_impl_).packed_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 0x100;
  return;
}

// set_syntax @ 14f9f5180

/* public: void __cdecl google::protobuf::Enum::set_syntax(enum google::protobuf::Syntax) __ptr64 */

void __thiscall google::protobuf::Enum::set_syntax(Enum *this,Syntax param_1)

{
  (this->_impl_).syntax_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 8;
  return;
}

// set_syntax @ 14f9f5190

/* public: void __cdecl google::protobuf::Type::set_syntax(enum google::protobuf::Syntax) __ptr64 */

void __thiscall google::protobuf::Type::set_syntax(Type *this,Syntax param_1)

{
  (this->_impl_).syntax_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 8;
  return;
}

// set_value @ 14f9f51a0

/* public: void __cdecl google::protobuf::BoolValue::set_value(bool) __ptr64 */

void __thiscall google::protobuf::BoolValue::set_value(BoolValue *this,bool param_1)

{
  this[0x18] = (BoolValue)param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f51b0

/* public: void __cdecl google::protobuf::DoubleValue::set_value(double) __ptr64 */

void __thiscall google::protobuf::DoubleValue::set_value(DoubleValue *this,double param_1)

{
  *(double *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f51c0

/* public: void __cdecl google::protobuf::FloatValue::set_value(float) __ptr64 */

void __thiscall google::protobuf::FloatValue::set_value(FloatValue *this,float param_1)

{
  *(float *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f51d0

/* public: void __cdecl google::protobuf::Int32Value::set_value(int) __ptr64 */

void __thiscall google::protobuf::Int32Value::set_value(Int32Value *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f51e0

/* public: void __cdecl google::protobuf::Int64Value::set_value(__int64) __ptr64 */

void __thiscall google::protobuf::Int64Value::set_value(Int64Value *this,__int64 param_1)

{
  *(__int64 *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f51f0

/* public: void __cdecl google::protobuf::UInt32Value::set_value(unsigned int) __ptr64 */

void __thiscall google::protobuf::UInt32Value::set_value(UInt32Value *this,uint param_1)

{
  *(uint *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// set_value @ 14f9f5200

/* public: void __cdecl google::protobuf::UInt64Value::set_value(unsigned __int64) __ptr64 */

void __thiscall google::protobuf::UInt64Value::set_value(UInt64Value *this,__uint64 param_1)

{
  *(__uint64 *)(this + 0x18) = param_1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  return;
}

// syntax @ 14f9f5210

/* public: enum google::protobuf::Syntax __cdecl google::protobuf::Enum::syntax(void)const __ptr64
    */

Syntax __thiscall google::protobuf::Enum::syntax(Enum *this)

{
  return (this->_impl_).syntax_;
}

// syntax @ 14f9f5220

/* public: enum google::protobuf::Syntax __cdecl google::protobuf::Type::syntax(void)const __ptr64
    */

Syntax __thiscall google::protobuf::Type::syntax(Type *this)

{
  return (this->_impl_).syntax_;
}

// FUN_15029c990 @ 15029c990

void FUN_15029c990(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    google::protobuf::BytesValue::~BytesValue(*(BytesValue **)(param_2 + 0x28));
  }
  return;
}

// FUN_15029c9e0 @ 15029c9e0

void FUN_15029c9e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    google::protobuf::StringValue::~StringValue(*(StringValue **)(param_2 + 0x28));
  }
  return;
}

// FUN_15029ca70 @ 15029ca70

void FUN_15029ca70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    google::protobuf::Enum::~Enum(*(Enum **)(param_2 + 0x120));
  }
  return;
}

// FUN_15029cac0 @ 15029cac0

void FUN_15029cac0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    google::protobuf::Type::~Type(*(Type **)(param_2 + 0x140));
  }
  return;
}

// FUN_15029cc90 @ 15029cc90

void FUN_15029cc90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb0));
  }
  return;
}

// FUN_15029ccc0 @ 15029ccc0

void FUN_15029ccc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x90));
  }
  return;
}

// FUN_15029cd50 @ 15029cd50

void FUN_15029cd50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffbff;
    google::protobuf::BytesValue::~BytesValue((BytesValue *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029cdb0 @ 15029cdb0

void FUN_15029cdb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x800) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffff7ff;
    google::protobuf::StringValue::~StringValue((StringValue *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029ce10 @ 15029ce10

void FUN_15029ce10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x30);
  return;
}

// FUN_15029cee0 @ 15029cee0

void FUN_15029cee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    google::protobuf::Enum::~Enum((Enum *)(param_2 + 0x50));
  }
  return;
}

// FUN_15029cf90 @ 15029cf90

void FUN_15029cf90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    google::protobuf::Type::~Type((Type *)(param_2 + 0x60));
  }
  return;
}

