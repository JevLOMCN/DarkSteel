// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 421

// pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64><std::nullptr_t,int,0> @ 14fa65840

/* public: __cdecl std::pair<class google::protobuf::Message const * __ptr64 *
   __ptr64,__int64>::pair<class google::protobuf::Message const * __ptr64 *
   __ptr64,__int64><std::nullptr_t,int,0>(std::nullptr_t && __ptr64,int && __ptr64) __ptr64 */

pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64> * __thiscall
std::pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64>::
pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64><std::nullptr_t,int,0>
          (pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64> *this,
          std__nullptr_t *param_1,int *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(longlong *)(this + 8) = (longlong)*param_2;
  return this;
}

// _Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1><> @ 14fa65860

/* public: __cdecl std::_Compressed_pair<class std::allocator<class google::protobuf::Message const
   * __ptr64>,class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const
   * __ptr64> >,1>::_Compressed_pair<class std::allocator<class google::protobuf::Message const *
   __ptr64>,class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const *
   __ptr64> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1><>
          (_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1><> @ 14fa65880

/* public: __cdecl std::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey>
   >,1>::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1><>
          (_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// pair<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64><google::protobuf::MapKey*___ptr64&___ptr64,google::protobuf::MapKey*___ptr64&___ptr64,0> @ 14fa658a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::pair<class google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey
   * __ptr64>::pair<class google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey *
   __ptr64><class google::protobuf::MapKey * __ptr64 & __ptr64,class google::protobuf::MapKey *
   __ptr64 & __ptr64,0>(class google::protobuf::MapKey * __ptr64 & __ptr64,class
   google::protobuf::MapKey * __ptr64 & __ptr64) __ptr64 */

pair<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> * __thiscall
std::pair<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64>::
pair<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64><google::protobuf::MapKey*___ptr64&___ptr64,google::protobuf::MapKey*___ptr64&___ptr64,0>
          (pair<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> *this,
          MapKey **param_1,MapKey **param_2)

{
  *(MapKey **)this = *param_1;
  *(MapKey **)(this + 8) = *param_2;
  return this;
}

// ParseContext<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64> @ 14fa658c0

/* public: __cdecl google::protobuf::internal::ParseContext::ParseContext<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64>(struct google::protobuf::internal::ParseContext::Spawn,class
   google::protobuf::internal::ParseContext const & __ptr64,char const * __ptr64 * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64)
   __ptr64 */

ParseContext * __thiscall
google::protobuf::internal::ParseContext::
ParseContext<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
          (ParseContext *this,Spawn param_1,ParseContext *param_2,char **param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  longlong *_Dst;
  ulonglong _Size;
  MessageFactory *pMVar1;
  char *pcVar2;
  longlong lVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Src;
  
  _Dst = &this->_padding_;
  this->_padding_ = 0;
  *_Dst = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x7fffffff;
  this->depth_ = param_2->depth_;
  this->group_depth_ = -0x80000000;
  pMVar1 = (param_2->data_).factory;
  (this->data_).pool = (param_2->data_).pool;
  (this->data_).factory = pMVar1;
  _Src = param_4;
  if (0xf < (param_4->_Mypair)._Myval2._Myres) {
    _Src = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (param_4->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = (param_4->_Mypair)._Myval2._Mysize;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (_Size < 0x11) {
    if (_Size != 0) {
      memcpy(_Dst,_Src,_Size);
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    lVar3 = (longlong)&this->_padding_ + _Size;
    this->_padding_ = 0;
    this->_padding_ = lVar3;
    this->_padding_ = lVar3;
    if (this->_padding_ == 1) {
      this->_padding_ = (longlong)((longlong)_Src + (-0x28 - (longlong)this));
    }
    *param_3 = (char *)_Dst;
  }
  else {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10;
    pcVar2 = (char *)((_Size - 0x10) + (longlong)_Src);
    this->_padding_ = (longlong)_Dst;
    this->_padding_ = (longlong)pcVar2;
    this->_padding_ = (longlong)pcVar2;
    *param_3 = (char *)_Src;
  }
  return this;
}

// pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64><google::protobuf::Message_const*___ptr64*___ptr64,__int64&___ptr64,0> @ 14fa659c0

/* public: __cdecl std::pair<class google::protobuf::Message const * __ptr64 *
   __ptr64,__int64>::pair<class google::protobuf::Message const * __ptr64 * __ptr64,__int64><class
   google::protobuf::Message const * __ptr64 * __ptr64,__int64 & __ptr64,0>(class
   google::protobuf::Message const * __ptr64 * __ptr64 && __ptr64,__int64 & __ptr64) __ptr64 */

pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64> * __thiscall
std::pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64>::
pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64><google::protobuf::Message_const*___ptr64*___ptr64,__int64&___ptr64,0>
          (pair<google::protobuf::Message_const*___ptr64*___ptr64,__int64> *this,Message ***param_1,
          __int64 *param_2)

{
  *(Message ***)this = *param_1;
  *(__int64 *)(this + 8) = *param_2;
  return this;
}

// _Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1><std::allocator<google::protobuf::Message_const*___ptr64>,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa659e0

/* public: __cdecl std::_Compressed_pair<class std::allocator<class google::protobuf::Message const
   * __ptr64>,class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const
   * __ptr64> >,1>::_Compressed_pair<class std::allocator<class google::protobuf::Message const *
   __ptr64>,class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const *
   __ptr64> >,1><class std::allocator<class google::protobuf::Message const * __ptr64>,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<class google::protobuf::Message const *
   __ptr64> && __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 && __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 && __ptr64,class google::protobuf::Message
   const * __ptr64 * __ptr64 && __ptr64) __ptr64 */

_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1><std::allocator<google::protobuf::Message_const*___ptr64>,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
           *this,_One_then_variadic_args_t param_1,
          allocator<google::protobuf::Message_const*___ptr64> *param_2,Message ***param_3,
          Message ***param_4,Message ***param_5)

{
  Message **ppMVar1;
  Message **ppMVar2;
  
  ppMVar1 = *param_5;
  ppMVar2 = *param_4;
  *(Message ***)this = *param_3;
  *(Message ***)(this + 8) = ppMVar2;
  *(Message ***)(this + 0x10) = ppMVar1;
  return this;
}

// _Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1><std::allocator<google::protobuf::MapKey>,google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> @ 14fa65a10

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey>
   >,1>::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >,1><class
   std::allocator<class google::protobuf::MapKey>,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<class google::protobuf::MapKey> &&
   __ptr64,class google::protobuf::MapKey * __ptr64 && __ptr64,class google::protobuf::MapKey *
   __ptr64 && __ptr64,class google::protobuf::MapKey * __ptr64 && __ptr64) __ptr64 */

_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1><std::allocator<google::protobuf::MapKey>,google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64>
          (_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<google::protobuf::MapKey> *param_2,
          MapKey **param_3,MapKey **param_4,MapKey **param_5)

{
  MapKey *pMVar1;
  MapKey *pMVar2;
  
  pMVar1 = *param_5;
  pMVar2 = *param_4;
  *(MapKey **)this = *param_3;
  *(MapKey **)(this + 8) = pMVar2;
  *(MapKey **)(this + 0x10) = pMVar1;
  return this;
}

// _Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64><__int64> @ 14fa65a40

/* public: __cdecl std::_Optimistic_temporary_buffer<class google::protobuf::Message const *
   __ptr64>::_Optimistic_temporary_buffer<class google::protobuf::Message const *
   __ptr64><__int64>(__int64) __ptr64 */

_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> * __thiscall
std::_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64>::
_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64><__int64>
          (_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> *this,
          __int64 param_1)

{
  _Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> *p_Var1;
  ulonglong uVar2;
  
  if ((ulonglong)param_1 < 0x201) {
    p_Var1 = this + 0x10;
    uVar2 = param_1;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if (param_1 < 0x7fffffffffffffff) {
      uVar2 = param_1;
    }
    if ((uVar2 < 0x2000000000000000) && (0 < (longlong)uVar2)) {
      do {
        p_Var1 = ::operator_new(uVar2 * 8,(nothrow_t *)&nothrow);
        if (p_Var1 != (_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> *)0x0)
        {
          if (0x200 < uVar2) goto LAB_14fa65ac8;
          goto LAB_14fa65ab4;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    p_Var1 = (_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> *)0x0;
LAB_14fa65ab4:
    ::operator_delete(p_Var1);
    p_Var1 = this + 0x10;
    uVar2 = 0x200;
  }
LAB_14fa65ac8:
  *(_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> **)this = p_Var1;
  *(ulonglong *)(this + 8) = uVar2;
  return this;
}

// ERROR_UNKNOWN_OPERATOR_TYPE<char,std::char_traits<char>,std::allocator<char>_> @ 14fa65b00

/* struct std::strong_ordering __cdecl std::ERROR UNKNOWN OPERATOR TYPE<char,struct
   std::char_traits<char>,class std::allocator<char> >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

strong_ordering __cdecl
std::ERROR_UNKNOWN_OPERATOR_TYPE<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong _Size;
  
  uVar1 = (param_2->_Mypair)._Myval2._Mysize;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar3 = memcmp(param_1,param_2,_Size);
  if (iVar3 == 0) {
    if (uVar1 <= uVar2) {
      if (uVar2 != uVar1) {
        return (strong_ordering)'\x01';
      }
      return (strong_ordering)'\0';
    }
  }
  else if (-1 < iVar3) {
    return (strong_ordering)'\x01';
  }
  return (strong_ordering)-1;
}

// GetRepeatedFieldRef<google::protobuf::Message> @ 14fa65b70

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::RepeatedFieldRef<class google::protobuf::Message,void> __cdecl
   google::protobuf::Reflection::GetRepeatedFieldRef<class google::protobuf::Message>(class
   google::protobuf::Message const & __ptr64,class google::protobuf::FieldDescriptor const *
   __ptr64)const __ptr64 */

Message * __thiscall
google::protobuf::Reflection::GetRepeatedFieldRef<google::protobuf::Message>
          (Reflection *this,Message *param_1,FieldDescriptor *param_2)

{
  Reflection *this_00;
  code *pcVar1;
  Metadata *pMVar2;
  void *pvVar3;
  RepeatedFieldAccessor *pRVar4;
  MessageFactory *pMVar5;
  Descriptor *pDVar6;
  undefined8 uVar7;
  FieldDescriptor *in_R9;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadata((Message *)param_2,&local_18);
  this_00 = pMVar2->reflection;
  pvVar3 = RepeatedFieldData(this_00,(Message *)param_2,in_R9,CPPTYPE_MESSAGE,(Descriptor *)0x0);
  *(void **)param_1 = pvVar3;
  pRVar4 = RepeatedFieldAccessor(this_00,in_R9);
  *(RepeatedFieldAccessor **)&param_1->field_0x8 = pRVar4;
  pMVar5 = GetMessageFactory(this_00);
  pcVar1 = *(code **)((longlong)*pMVar5 + 8);
  pDVar6 = FieldDescriptor::message_type(in_R9);
  uVar7 = (*pcVar1)(pMVar5,pDVar6);
  *(undefined8 *)(param_1 + 1) = uVar7;
  return param_1;
}

// GroupSize<google::protobuf::Message> @ 14fa65c20

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::GroupSize<class google::protobuf::Message>(class
   google::protobuf::Message const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::GroupSize<google::protobuf::Message>(Message *param_1)

{
  __uint64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fa65c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (**(code **)(*(longlong *)param_1 + 0x10))();
  return _Var1;
}

// ParseGroupInlined<`public:_char_const*___ptr64___cdecl_google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'::`12'::<lambda_1>_> @ 14fa65c30

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ParseContext::ParseGroupInlined<class `public: char const * __ptr64
   __cdecl google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`12'::<lambda_1>
   >(char const * __ptr64,unsigned int,class `public: char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`12'::<lambda_1>
   const & __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::
ParseGroupInlined<_public:_char_const*___ptr64___cdecl_google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64_::_12_::<lambda_1>_>
          (ParseContext *this,char *param_1,uint param_2,<lambda_1> *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  
  piVar1 = &this->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    this->group_depth_ = this->group_depth_ + 1;
    pcVar3 = WireFormat::MessageSetParser::ParseElement
                       (*(MessageSetParser **)param_3,param_1,
                        (ParseContext *)**(undefined8 **)(param_3 + 8));
    lVar2 = this->_padding_;
    this->group_depth_ = this->group_depth_ + -1;
    this->depth_ = this->depth_ + 1;
    *(undefined4 *)&this->_padding_ = 0;
    if ((uint)lVar2 != param_2) {
      pcVar3 = (char *)0x0;
    }
    return pcVar3;
  }
  return (char *)0x0;
}

// FUN_14fa65c90 @ 14fa65c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14fa65c90(CodedInputStream *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FieldDescriptor *pFVar5;
  Metadata *pMVar6;
  UnknownFieldSet *pUVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  __int64 _Var9;
  Message *pMVar10;
  LogMessage *pLVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulonglong _Size;
  undefined1 auStack_148 [32];
  <lambda_1> local_118;
  basic_string_view<char,std::char_traits<char>_> local_108;
  CodedInputStream local_f8;
  basic_string_view<char,std::char_traits<char>_> local_a8;
  LogMessage local_98;
  Metadata local_88;
  Metadata local_78;
  _Bxty local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar4 = 0;
  uVar18 = 0;
  local_68._8_8_ = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_68._Ptr = (char *)0x0;
  local_108._Mydata = param_2;
  uVar19 = uVar4;
LAB_14fa65cf0:
  do {
    pbVar17 = param_1->buffer_;
    uVar13 = 0;
    if (pbVar17 < param_1->buffer_end_) {
      bVar1 = *pbVar17;
      uVar3 = (uint)bVar1;
      uVar13 = (uint)bVar1;
      if (0x7f < bVar1) goto LAB_14fa65d0f;
      param_1->buffer_ = pbVar17 + 1;
    }
    else {
LAB_14fa65d0f:
      uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1,uVar13);
    }
    if (uVar3 == 0) goto LAB_14fa65d43;
    if (uVar3 == 0xc) {
      uVar16 = 1;
      goto LAB_14fa65d45;
    }
    if (uVar3 == 0x10) {
      pbVar17 = param_1->buffer_;
      uVar13 = uVar18;
      if (pbVar17 < param_1->buffer_end_) {
        bVar1 = *pbVar17;
        uVar13 = (uint)bVar1;
        uVar3 = (uint)bVar1;
        if (0x7f < bVar1) goto LAB_14fa65fe1;
        param_1->buffer_ = pbVar17 + 1;
      }
      else {
LAB_14fa65fe1:
        _Var9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,uVar13);
        uVar3 = (uint)_Var9;
        if (_Var9 < 0) goto LAB_14fa65d43;
      }
      if (uVar3 == 0) goto LAB_14fa65d43;
      if (uVar4 == 0) {
        uVar4 = 1;
        uVar19 = uVar3;
      }
      else if (uVar4 == 2) {
        local_f8.buffer_ = (uchar *)&local_68;
        if (0xf < local_50) {
          local_f8.buffer_ = (uchar *)local_68._Ptr;
        }
        local_f8.buffer_end_ = local_f8.buffer_ + (int)local_58;
        local_f8.input_ = (ZeroCopyInputStream *)0x0;
        local_f8.total_bytes_read_ = (int)local_58;
        local_f8.overflow_bytes_ = 0;
        local_f8.last_tag_ = 0;
        local_f8.legitimate_message_end_ = false;
        local_f8.aliasing_enabled_ = false;
        local_f8.force_eager_parsing_ = false;
        local_f8.current_limit_ = (int)local_58;
        local_f8.buffer_size_after_limit_ = 0;
        local_f8.total_bytes_limit_ = 0x7fffffff;
        local_f8.extension_pool_ = (DescriptorPool *)0x0;
        local_f8.extension_factory_ = (MessageFactory *)0x0;
        local_f8.recursion_budget_ = param_1->recursion_budget_;
        local_f8.recursion_limit_ = local_f8.recursion_budget_;
        pFVar5 = google::protobuf::Reflection::FindKnownExtensionByNumber
                           (*(Reflection **)param_2,uVar3);
        pMVar10 = *(Message **)(param_2 + 8);
        pMVar6 = google::protobuf::Message::GetMetadata(pMVar10,&local_78);
        if (pFVar5 == (FieldDescriptor *)0x0) {
          pUVar7 = google::protobuf::Reflection::MutableUnknownFields(pMVar6->reflection,pMVar10);
          uVar4 = uVar18;
          if (local_f8.buffer_ < local_f8.buffer_end_) {
            bVar1 = *local_f8.buffer_;
            uVar14 = (ulonglong)bVar1;
            uVar4 = (uint)bVar1;
            if (0x7f < bVar1) goto LAB_14fa660ef;
            local_f8.buffer_ = local_f8.buffer_ + 1;
          }
          else {
LAB_14fa660ef:
            uVar14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(&local_f8,uVar4);
            if ((longlong)uVar14 < 0) {
              bVar2 = false;
              goto LAB_14fa66141;
            }
          }
          pbVar8 = google::protobuf::UnknownFieldSet::AddLengthDelimited(pUVar7,uVar3);
          bVar2 = google::protobuf::io::CodedInputStream::ReadString(&local_f8,pbVar8,(int)uVar14);
LAB_14fa66141:
          if (bVar2 != false) {
            uVar15 = &local_68;
            if (0xf < local_50) {
              uVar15 = local_68._Ptr;
            }
            local_58 = 0;
            *(byte *)uVar15 = 0;
            uVar4 = 3;
            google::protobuf::io::CodedInputStream::~CodedInputStream(&local_f8);
            param_2 = local_108._Mydata;
            goto LAB_14fa65cf0;
          }
        }
        else {
          if ((!pFVar5->is_repeated_) && (pFVar5->type_ == '\v')) {
            pMVar10 = google::protobuf::Reflection::MutableMessage
                                (pMVar6->reflection,pMVar10,pFVar5,local_f8.extension_factory_);
            bVar2 = google::protobuf::internal::WireFormatLite::
                    ReadMessage<google::protobuf::Message>(&local_f8,pMVar10);
            goto LAB_14fa66141;
          }
          pLVar11 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessage::LogMessage
                              (&local_98,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                               ,0x181,(ErrorTag)0x0);
          local_108._Mydata = "Extensions of MessageSets must be optional messages.";
          local_108._Mysize = 0x34;
          local_a8._Mydata = "Extensions of MessageSets must be optional messages.";
          local_a8._Mysize = (ulong64)&DAT_00000034;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar11,&local_a8);
          absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_98);
        }
        google::protobuf::io::CodedInputStream::~CodedInputStream(&local_f8);
        goto LAB_14fa65d43;
      }
      goto LAB_14fa65cf0;
    }
    if (uVar3 == 0x1a) {
      if (uVar4 == 1) {
        pFVar5 = google::protobuf::Reflection::FindKnownExtensionByNumber
                           (*(Reflection **)param_2,uVar19);
        pMVar10 = *(Message **)(param_2 + 8);
        pMVar6 = google::protobuf::Message::GetMetadata(pMVar10,&local_88);
        if (pFVar5 == (FieldDescriptor *)0x0) {
          pUVar7 = google::protobuf::Reflection::MutableUnknownFields(pMVar6->reflection,pMVar10);
          pbVar17 = param_1->buffer_;
          uVar4 = uVar18;
          if (pbVar17 < param_1->buffer_end_) {
            bVar1 = *pbVar17;
            uVar4 = (uint)bVar1;
            uVar13 = (uint)bVar1;
            if (0x7f < bVar1) goto LAB_14fa65dff;
            param_1->buffer_ = pbVar17 + 1;
          }
          else {
LAB_14fa65dff:
            _Var9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,uVar4);
            uVar13 = (uint)_Var9;
            if (_Var9 < 0) {
              bVar2 = false;
              goto LAB_14fa65e4a;
            }
          }
          pbVar8 = google::protobuf::UnknownFieldSet::AddLengthDelimited(pUVar7,uVar19);
          bVar2 = google::protobuf::io::CodedInputStream::ReadString(param_1,pbVar8,uVar13);
        }
        else {
          if ((pFVar5->is_repeated_) || (pFVar5->type_ != '\v')) {
            pLVar11 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessage::LogMessage
                                ((LogMessage *)&local_a8,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                                 ,0x181,(ErrorTag)0x0);
            local_108._Mydata = "Extensions of MessageSets must be optional messages.";
            local_108._Mysize = 0x34;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar11,&local_108)
            ;
            absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)&local_a8);
            goto LAB_14fa65d43;
          }
          pMVar10 = google::protobuf::Reflection::MutableMessage
                              (pMVar6->reflection,pMVar10,pFVar5,param_1->extension_factory_);
          bVar2 = google::protobuf::internal::WireFormatLite::ReadMessage<google::protobuf::Message>
                            (param_1,pMVar10);
        }
LAB_14fa65e4a:
        if (bVar2 == false) goto LAB_14fa65d43;
        uVar4 = 3;
      }
      else {
        if (uVar4 != 0) {
          uVar3 = 0x1a;
          goto LAB_14fa65d34;
        }
        pbVar17 = param_1->buffer_;
        uVar4 = uVar18;
        if (pbVar17 < param_1->buffer_end_) {
          bVar1 = *pbVar17;
          uVar4 = (uint)bVar1;
          uVar13 = (uint)bVar1;
          if (0x7f < bVar1) goto LAB_14fa65e87;
          param_1->buffer_ = pbVar17 + 1;
        }
        else {
LAB_14fa65e87:
          _Var9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,uVar4);
          uVar13 = (uint)_Var9;
          if (_Var9 < 0) goto LAB_14fa65d43;
        }
        if ((int)uVar13 < 0) goto LAB_14fa65d43;
        uVar4 = uVar13 | 1;
        if (__isa_available < 5) {
          iVar12 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          iVar12 = 0x1f - iVar12;
        }
        else {
          iVar12 = LZCOUNT(uVar4);
        }
        uVar4 = ((0x1f - iVar12) * 9 + 0x49U >> 6) + uVar13;
        uVar14 = (ulonglong)uVar4;
        if (local_58 < uVar14) {
          _Size = uVar14 - local_58;
          if (local_50 - local_58 < _Size) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                       _Size,local_118,_Size,'\0');
            param_2 = local_108._Mydata;
          }
          else {
            uVar15 = &local_68;
            if (0xf < local_50) {
              uVar15 = local_68._Ptr;
            }
            pbVar17 = (byte *)(uVar15 + local_58);
            local_58 = uVar14;
            memset(pbVar17,0,_Size);
            pbVar17[_Size] = 0;
            param_2 = local_108._Mydata;
          }
        }
        else {
          uVar15 = &local_68;
          if (0xf < local_50) {
            uVar15 = local_68._Ptr;
          }
          local_58 = uVar14;
          *(byte *)(uVar15 + (ulonglong)uVar4) = 0;
        }
        uVar15 = &local_68;
        if (0xf < local_50) {
          uVar15 = local_68._Ptr;
        }
        uVar14 = (ulonglong)uVar13;
        uVar4 = uVar13;
        while (0x7f < uVar4) {
          *(byte *)uVar15 = (byte)uVar14 | 0x80;
          uVar14 = uVar14 >> 7;
          uVar15 = uVar15 + 1;
          uVar4 = (uint)uVar14;
        }
        *(byte *)uVar15 = (byte)uVar14;
        bVar2 = google::protobuf::io::CodedInputStream::ReadRaw(param_1,(byte *)(uVar15 + 1),uVar13)
        ;
        if (!bVar2) goto LAB_14fa65d43;
        uVar4 = 2;
      }
    }
    else {
LAB_14fa65d34:
      bVar2 = google::protobuf::internal::WireFormat::SkipField
                        (param_1,uVar3,(UnknownFieldSet *)0x0);
      if (!bVar2) {
LAB_14fa65d43:
        uVar16 = 0;
LAB_14fa65d45:
        if (0xf < local_50) {
          uVar14 = local_50 + 1;
          uVar15 = local_68._Ptr;
          if (0xfff < uVar14) {
            uVar14 = local_50 + 0x28;
            uVar15 = *(undefined8 *)(local_68._Ptr + -8);
            if ((byte *)0x1f < local_68._Ptr + (-8 - uVar15)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar15,uVar14);
        }
        return uVar16;
      }
    }
  } while( true );
}

// ReadGroup<google::protobuf::Message> @ 14fa66290

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadGroup<class
   google::protobuf::Message>(int,class google::protobuf::io::CodedInputStream * __ptr64,class
   google::protobuf::Message * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadGroup<google::protobuf::Message>
          (int param_1,CodedInputStream *param_2,Message *param_3)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = &param_2->recursion_budget_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = MessageLite::MergePartialFromCodedStream((MessageLite *)param_3,param_2);
    if (bVar2) {
      param_2->recursion_budget_ = param_2->recursion_budget_ + 1;
      return param_2->last_tag_ == (param_1 * 8 | 4U);
    }
  }
  return false;
}

// ReadMessage<google::protobuf::Message> @ 14fa662f0

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadMessage<class
   google::protobuf::Message>(class google::protobuf::io::CodedInputStream * __ptr64,class
   google::protobuf::Message * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadMessage<google::protobuf::Message>
          (CodedInputStream *param_1,Message *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int local_res18;
  int local_res1c;
  
  pbVar1 = param_1->buffer_;
  if ((pbVar1 < param_1->buffer_end_) && (*pbVar1 < 0x80)) {
    param_1->buffer_ = pbVar1 + 1;
  }
  else {
    iVar3 = io::CodedInputStream::ReadVarintSizeAsIntFallback(param_1);
    if (iVar3 < 0) {
      return false;
    }
  }
  io::CodedInputStream::IncrementRecursionDepthAndPushLimit(param_1,(int)&local_res18);
  if ((-1 < local_res1c) &&
     (bVar2 = MessageLite::MergePartialFromCodedStream((MessageLite *)param_2,param_1), bVar2)) {
    bVar2 = io::CodedInputStream::DecrementRecursionDepthAndPopLimit(param_1,local_res18);
    return bVar2;
  }
  return false;
}

// FUN_14fa66380 @ 14fa66380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14fa66380(EpsCopyInputStream *param_1,byte *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pbVar4 = (byte *)0x0;
  if (*param_2 < 0x80) {
    local_60 = param_2 + 1;
    local_58 = (uint)*param_2;
  }
  else {
    google::protobuf::internal::ReadSizeFallback((char *)&local_60,(uint)param_2);
  }
  if (local_60 != (byte *)0x0) {
    iVar5 = *(int *)&param_1->buffer_end_ - (int)local_60;
    uVar8 = local_58;
    if (iVar5 < (int)local_58) {
      do {
        local_88 = *param_3;
        uStack_84 = param_3[1];
        uStack_80 = param_3[2];
        uStack_7c = param_3[3];
        local_78 = param_3[4];
        uStack_74 = param_3[5];
        uStack_70 = param_3[6];
        uStack_6c = param_3[7];
        lVar1 = FUN_14fa666f0(local_60,param_1->buffer_end_,&local_88);
        if (lVar1 == 0) {
          return (byte *)0x0;
        }
        iVar7 = (int)lVar1 - *(int *)&param_1->buffer_end_;
        if ((int)(uVar8 - iVar5) < 0x11) {
          local_78 = param_3[4];
          uStack_74 = param_3[5];
          uStack_70 = param_3[6];
          uStack_6c = param_3[7];
          local_40 = 0;
          local_38 = 0;
          local_50 = *(undefined8 *)param_1->buffer_end_;
          uStack_48 = *(undefined8 *)(param_1->buffer_end_ + 8);
          lVar6 = (longlong)&local_50 + (longlong)(int)(uVar8 - iVar5);
          local_88 = *param_3;
          uStack_84 = param_3[1];
          uStack_80 = param_3[2];
          uStack_7c = param_3[3];
          lVar1 = FUN_14fa666f0((longlong)&local_50 + (longlong)iVar7,lVar6,&local_88);
          if (lVar1 == 0) {
            return (byte *)0x0;
          }
          if (lVar1 != lVar6) {
            return (byte *)0x0;
          }
          return (byte *)(param_1->buffer_end_ + (lVar1 - (longlong)&local_50));
        }
        uVar8 = uVar8 - (iVar5 + iVar7);
        if (param_1->limit_ < 0x11) {
          return (byte *)0x0;
        }
        pcVar2 = google::protobuf::internal::EpsCopyInputStream::Next(param_1);
        if (pcVar2 == (char *)0x0) {
          return (byte *)0x0;
        }
        local_60 = (byte *)(pcVar2 + iVar7);
        iVar5 = *(int *)&param_1->buffer_end_ - (int)local_60;
      } while (iVar5 < (int)uVar8);
    }
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = param_3[4];
    uStack_74 = param_3[5];
    uStack_70 = param_3[6];
    uStack_6c = param_3[7];
    pbVar3 = (byte *)FUN_14fa666f0(local_60,local_60 + (int)uVar8,&local_88);
    pbVar4 = (byte *)0x0;
    if (local_60 + (int)uVar8 == pbVar3) {
      pbVar4 = pbVar3;
    }
  }
  return pbVar4;
}

// FUN_14fa66540 @ 14fa66540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14fa66540(EpsCopyInputStream *param_1,byte *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*param_2 < 0x80) {
    local_50 = param_2 + 1;
    uStack_48._0_4_ = (uint)*param_2;
  }
  else {
    google::protobuf::internal::ReadSizeFallback((char *)&local_50,(uint)param_2);
  }
  if (local_50 == (byte *)0x0) {
LAB_14fa666be:
    pbVar4 = (byte *)0x0;
  }
  else {
    iVar5 = *(int *)&param_1->buffer_end_ - (int)local_50;
    uVar8 = (uint)uStack_48;
    if (iVar5 < (int)(uint)uStack_48) {
      do {
        local_78 = *param_3;
        uStack_74 = param_3[1];
        uStack_70 = param_3[2];
        uStack_6c = param_3[3];
        local_68 = param_3[4];
        uStack_64 = param_3[5];
        uStack_60 = param_3[6];
        uStack_5c = param_3[7];
        lVar1 = FUN_14fa666f0(local_50,param_1->buffer_end_,&local_78);
        if (lVar1 == 0) goto LAB_14fa666be;
        iVar7 = (int)lVar1 - *(int *)&param_1->buffer_end_;
        if ((int)(uVar8 - iVar5) < 0x11) {
          local_68 = param_3[4];
          uStack_64 = param_3[5];
          uStack_60 = param_3[6];
          uStack_5c = param_3[7];
          local_40 = 0;
          local_38 = 0;
          local_50 = *(byte **)param_1->buffer_end_;
          uStack_48 = *(undefined8 *)(param_1->buffer_end_ + 8);
          lVar6 = (longlong)&local_50 + (longlong)(int)(uVar8 - iVar5);
          local_78 = *param_3;
          uStack_74 = param_3[1];
          uStack_70 = param_3[2];
          uStack_6c = param_3[3];
          lVar1 = FUN_14fa666f0((longlong)&local_50 + (longlong)iVar7,lVar6,&local_78);
          if ((lVar1 != 0) && (lVar1 == lVar6)) {
            return (byte *)(param_1->buffer_end_ + (lVar1 - (longlong)&local_50));
          }
          goto LAB_14fa666be;
        }
        uVar8 = uVar8 - (iVar5 + iVar7);
        if ((param_1->limit_ < 0x11) ||
           (pcVar2 = google::protobuf::internal::EpsCopyInputStream::Next(param_1),
           pcVar2 == (char *)0x0)) goto LAB_14fa666be;
        local_50 = (byte *)(pcVar2 + iVar7);
        iVar5 = *(int *)&param_1->buffer_end_ - (int)local_50;
      } while (iVar5 < (int)uVar8);
    }
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = param_3[4];
    uStack_64 = param_3[5];
    uStack_60 = param_3[6];
    uStack_5c = param_3[7];
    pbVar3 = (byte *)FUN_14fa666f0(local_50,local_50 + (int)uVar8,&local_78);
    pbVar4 = (byte *)0x0;
    if (local_50 + (int)uVar8 == pbVar3) {
      pbVar4 = pbVar3;
    }
  }
  return pbVar4;
}

// FUN_14fa666f0 @ 14fa666f0

byte * FUN_14fa666f0(byte *param_1,byte *param_2,undefined8 *param_3)

{
  FieldDescriptor *this;
  EnumDescriptor *this_00;
  EnumValueDescriptor *pEVar1;
  UnknownFieldSet *this_01;
  uint uVar2;
  byte *local_18;
  undefined8 local_10;
  
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    uVar2 = (uint)*param_1;
    if ((char)*param_1 < '\0') {
      google::protobuf::internal::VarintParseSlow64((char *)&local_18,(uint)param_1);
      uVar2 = (uint)local_10;
      param_1 = local_18;
    }
    else {
      param_1 = param_1 + 1;
    }
    if (param_1 == (byte *)0x0) break;
    this = (FieldDescriptor *)param_3[1];
    this_00 = google::protobuf::FieldDescriptor::enum_type(this);
    pEVar1 = google::protobuf::EnumDescriptor::FindValueByNumber(this_00,uVar2);
    if (pEVar1 == (EnumValueDescriptor *)0x0) {
      this_01 = google::protobuf::Reflection::MutableUnknownFields
                          ((Reflection *)param_3[2],(Message *)param_3[3]);
      google::protobuf::UnknownFieldSet::AddVarint(this_01,this->number_,(longlong)(int)uVar2);
    }
    else {
      google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)*param_3,uVar2);
    }
  }
  return (byte *)0x0;
}

// ReadPrimitive<int,5> @ 14fa667c0

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<int,5>(class
   google::protobuf::io::CodedInputStream * __ptr64,int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<int,5>
          (CodedInputStream *param_1,int *param_2)

{
  byte *pbVar1;
  __int64 _Var2;
  uint uVar3;
  
  pbVar1 = param_1->buffer_;
  uVar3 = 0;
  if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
    param_1->buffer_ = pbVar1 + 1;
  }
  else {
    _Var2 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar3);
    uVar3 = (uint)_Var2;
    if (_Var2 < 0) {
      return false;
    }
  }
  *param_2 = uVar3;
  return true;
}

// ReadPrimitive<int,17> @ 14fa66820

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<int,17>(class
   google::protobuf::io::CodedInputStream * __ptr64,int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<int,17>
          (CodedInputStream *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  
  pbVar2 = param_1->buffer_;
  uVar4 = 0;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar3 = (ulonglong)bVar1;
    uVar4 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa66848;
    }
  }
  uVar3 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar4);
  if ((longlong)uVar3 < 0) {
    return false;
  }
LAB_14fa66848:
  *param_2 = (uint)(uVar3 >> 1) & 0x7fffffff ^ -((uint)uVar3 & 1);
  return true;
}

// ReadPrimitive<int,14> @ 14fa66890

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<int,14>(class
   google::protobuf::io::CodedInputStream * __ptr64,int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<int,14>
          (CodedInputStream *param_1,int *param_2)

{
  byte *pbVar1;
  __int64 _Var2;
  uint uVar3;
  
  pbVar1 = param_1->buffer_;
  uVar3 = 0;
  if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
    param_1->buffer_ = pbVar1 + 1;
  }
  else {
    _Var2 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar3);
    uVar3 = (uint)_Var2;
    if (_Var2 < 0) {
      return false;
    }
  }
  *param_2 = uVar3;
  return true;
}

// ReadPrimitive<int,15> @ 14fa668f0

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<int,15>(class
   google::protobuf::io::CodedInputStream * __ptr64,int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<int,15>
          (CodedInputStream *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  uint local_res8 [8];
  
  if (3 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    iVar1 = *(int *)param_1->buffer_;
    param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 4);
    *param_2 = iVar1;
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,local_res8);
  if (!bVar2) {
    return false;
  }
  *param_2 = local_res8[0];
  return true;
}

// ReadPrimitive<unsigned_int,7> @ 14fa66950

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned
   int,7>(class google::protobuf::io::CodedInputStream * __ptr64,unsigned int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned_int,7>
          (CodedInputStream *param_1,uint *param_2)

{
  uint *puVar1;
  bool bVar2;
  
  if (3 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    puVar1 = (uint *)param_1->buffer_;
    *param_2 = *puVar1;
    param_1->buffer_ = (uchar *)(puVar1 + 1);
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,param_2);
  return bVar2;
}

// ReadPrimitive<unsigned_int,13> @ 14fa66980

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned
   int,13>(class google::protobuf::io::CodedInputStream * __ptr64,unsigned int * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned_int,13>
          (CodedInputStream *param_1,uint *param_2)

{
  byte bVar1;
  __int64 _Var2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1->buffer_ < param_1->buffer_end_) {
    bVar1 = *param_1->buffer_;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      *param_2 = (uint)bVar1;
      param_1->buffer_ = param_1->buffer_ + 1;
      return true;
    }
  }
  _Var2 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar3);
  *param_2 = (uint)_Var2;
  return (bool)((byte)((ulonglong)_Var2 >> 0x3f) ^ 1);
}

// ReadPrimitive<float,2> @ 14fa669d0

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<float,2>(class
   google::protobuf::io::CodedInputStream * __ptr64,float * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<float,2>
          (CodedInputStream *param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  float local_res8 [8];
  
  if (3 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    fVar1 = *(float *)param_1->buffer_;
    param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 4);
    *param_2 = fVar1;
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,(uint *)local_res8);
  if (!bVar2) {
    return false;
  }
  *param_2 = local_res8[0];
  return true;
}

// ReadPrimitive<double,1> @ 14fa66a30

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<double,1>(class
   google::protobuf::io::CodedInputStream * __ptr64,double * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<double,1>
          (CodedInputStream *param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  double local_res8 [4];
  
  if (7 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    dVar1 = *(double *)param_1->buffer_;
    param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 8);
    *param_2 = dVar1;
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,(__uint64 *)local_res8);
  if (!bVar2) {
    return false;
  }
  *param_2 = local_res8[0];
  return true;
}

// ReadPrimitive<__int64,3> @ 14fa66a90

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,3>(class
   google::protobuf::io::CodedInputStream * __ptr64,__int64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,3>
          (CodedInputStream *param_1,__int64 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  pair<unsigned___int64,bool> local_18;
  
  pbVar2 = param_1->buffer_;
  if ((pbVar2 < param_1->buffer_end_) && (bVar1 = *pbVar2, bVar1 < 0x80)) {
    param_1->buffer_ = pbVar2 + 1;
    local_18.first = (ulonglong)bVar1;
  }
  else {
    io::CodedInputStream::ReadVarint64Fallback(param_1,&local_18);
    if (local_18.second == false) {
      return false;
    }
  }
  *param_2 = local_18.first;
  return true;
}

// ReadPrimitive<__int64,16> @ 14fa66af0

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,16>(class
   google::protobuf::io::CodedInputStream * __ptr64,__int64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,16>
          (CodedInputStream *param_1,__int64 *param_2)

{
  __int64 _Var1;
  bool bVar2;
  __uint64 local_res8 [4];
  
  if (7 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    _Var1 = *(__int64 *)param_1->buffer_;
    param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 8);
    *param_2 = _Var1;
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,local_res8);
  if (!bVar2) {
    return false;
  }
  *param_2 = local_res8[0];
  return true;
}

// ReadPrimitive<__int64,18> @ 14fa66b50

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,18>(class
   google::protobuf::io::CodedInputStream * __ptr64,__int64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<__int64,18>
          (CodedInputStream *param_1,__int64 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  pair<unsigned___int64,bool> local_18;
  
  pbVar2 = param_1->buffer_;
  if ((pbVar2 < param_1->buffer_end_) && (bVar1 = *pbVar2, bVar1 < 0x80)) {
    param_1->buffer_ = pbVar2 + 1;
    local_18.first = (ulonglong)bVar1;
  }
  else {
    io::CodedInputStream::ReadVarint64Fallback(param_1,&local_18);
    if (local_18.second == false) {
      return false;
    }
  }
  *param_2 = local_18.first >> 1 ^ -(ulonglong)((uint)local_18.first & 1);
  return true;
}

// ReadPrimitive<unsigned___int64,4> @ 14fa66bc0

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned
   __int64,4>(class google::protobuf::io::CodedInputStream * __ptr64,unsigned __int64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned___int64,4>
          (CodedInputStream *param_1,__uint64 *param_2)

{
  byte bVar1;
  pair<unsigned___int64,bool> local_18;
  
  if ((param_1->buffer_ < param_1->buffer_end_) && (bVar1 = *param_1->buffer_, bVar1 < 0x80)) {
    *param_2 = (ulonglong)bVar1;
    param_1->buffer_ = param_1->buffer_ + 1;
    return true;
  }
  io::CodedInputStream::ReadVarint64Fallback(param_1,&local_18);
  *param_2 = local_18.first;
  return local_18.second;
}

// ReadPrimitive<unsigned___int64,6> @ 14fa66c10

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned
   __int64,6>(class google::protobuf::io::CodedInputStream * __ptr64,unsigned __int64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned___int64,6>
          (CodedInputStream *param_1,__uint64 *param_2)

{
  __uint64 *p_Var1;
  bool bVar2;
  
  if (7 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
    p_Var1 = (__uint64 *)param_1->buffer_;
    *param_2 = *p_Var1;
    param_1->buffer_ = (uchar *)(p_Var1 + 1);
    return true;
  }
  bVar2 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,param_2);
  return bVar2;
}

// ReadPrimitive<bool,8> @ 14fa66c40

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,8>(class
   google::protobuf::io::CodedInputStream * __ptr64,bool * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,8>
          (CodedInputStream *param_1,bool *param_2)

{
  byte *pbVar1;
  pair<unsigned___int64,bool> local_18;
  
  pbVar1 = param_1->buffer_;
  if ((pbVar1 < param_1->buffer_end_) && (*pbVar1 < 0x80)) {
    local_18.first = (ulong64)*pbVar1;
    param_1->buffer_ = pbVar1 + 1;
  }
  else {
    io::CodedInputStream::ReadVarint64Fallback(param_1,&local_18);
    if (local_18.second == false) {
      return false;
    }
  }
  *param_2 = local_18.first != 0;
  return true;
}

// UnalignedLoad<int> @ 14fa66ca0

/* int __cdecl google::protobuf::internal::UnalignedLoad<int>(char const * __ptr64) */

int __cdecl google::protobuf::internal::UnalignedLoad<int>(char *param_1)

{
  return *(int *)param_1;
}

// UnalignedLoad<float> @ 14fa66cb0

/* float __cdecl google::protobuf::internal::UnalignedLoad<float>(char const * __ptr64) */

float __cdecl google::protobuf::internal::UnalignedLoad<float>(char *param_1)

{
  return *(float *)param_1;
}

// UnalignedLoad<double> @ 14fa66cd0

/* double __cdecl google::protobuf::internal::UnalignedLoad<double>(char const * __ptr64) */

double __cdecl google::protobuf::internal::UnalignedLoad<double>(char *param_1)

{
  return *(double *)param_1;
}

// UnalignedLoad<__int64> @ 14fa66cf0

/* __int64 __cdecl google::protobuf::internal::UnalignedLoad<__int64>(char const * __ptr64) */

__int64 __cdecl google::protobuf::internal::UnalignedLoad<__int64>(char *param_1)

{
  return *(__int64 *)param_1;
}

// VarintParse<unsigned_int> @ 14fa66d00

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParse<unsigned int>(char const *
   __ptr64,unsigned int * __ptr64) */

char * __cdecl google::protobuf::internal::VarintParse<unsigned_int>(char *param_1,uint *param_2)

{
  char *local_18;
  uint local_10;
  
  if (-1 < *param_1) {
    *param_2 = (uint)(byte)*param_1;
    return param_1 + 1;
  }
  VarintParseSlow32((char *)&local_18,(uint)param_1);
  *param_2 = local_10;
  return local_18;
}

// WriteEnumPacked<google::protobuf::RepeatedField<int>_> @ 14fa66d50

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteEnumPacked<class
   google::protobuf::RepeatedField<int> >(int,class google::protobuf::RepeatedField<int> const &
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteEnumPacked<google::protobuf::RepeatedField<int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,int param_3,
          uchar *param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_4 = (byte)uVar6 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar6;
  while( true ) {
    param_4 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar3 | 0x80;
  }
  *param_4 = bVar3;
  pbVar7 = param_4 + 1;
  uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
  if ((~((byte)uVar5 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar5 & 3;
    piVar4 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar4 + (int)uVar6;
  do {
    if (this->end_ <= pbVar7) {
      pbVar7 = EnsureSpaceFallback(this,pbVar7);
    }
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    for (uVar5 = (ulonglong)iVar2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar7 = (byte)uVar5 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar5;
    pbVar7 = pbVar7 + 1;
  } while (piVar4 < piVar1);
  return pbVar7;
}

// WriteFixedPacked<google::protobuf::RepeatedField<int>_> @ 14fa66e80

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<int> >(int,class google::protobuf::RepeatedField<int> const &
   __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<google::protobuf::RepeatedField<int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,uchar *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 4;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<unsigned_int>_> @ 14fa66f90

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<unsigned int> >(int,class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteFixedPacked<google::protobuf::RepeatedField<unsigned_int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned_int> *param_2,uchar *param_3
          )

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 4;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<float>_> @ 14fa670a0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<float> >(int,class google::protobuf::RepeatedField<float> const &
   __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<google::protobuf::RepeatedField<float>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<float> *param_2,uchar *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 4;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<double>_> @ 14fa671b0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<double> >(int,class google::protobuf::RepeatedField<double> const
   & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteFixedPacked<google::protobuf::RepeatedField<double>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<double> *param_2,uchar *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 8;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<__int64>_> @ 14fa672c0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<__int64> >(int,class google::protobuf::RepeatedField<__int64>
   const & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteFixedPacked<google::protobuf::RepeatedField<__int64>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<__int64> *param_2,uchar *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 8;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<unsigned___int64>_> @ 14fa673d0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<unsigned __int64> >(int,class
   google::protobuf::RepeatedField<unsigned __int64> const & __ptr64,unsigned char * __ptr64)
   __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteFixedPacked<google::protobuf::RepeatedField<unsigned___int64>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned___int64> *param_2,
          uchar *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar1 & 3;
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar7 = uVar7 * 8;
  uVar2 = (ulonglong)uVar7;
  uVar6 = uVar7;
  while( true ) {
    pbVar3 = param_3 + 1;
    bVar5 = (byte)uVar2;
    if (uVar6 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *pbVar3 = bVar5 | 0x80;
    uVar6 = (uint)uVar2;
    param_3 = pbVar3;
  }
  *pbVar3 = bVar5;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar3 = param_3 + 2;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)(int)uVar7 <= (longlong)this->end_ - (longlong)pbVar3) {
    memcpy(pbVar3,_Src,(ulonglong)uVar7);
    return pbVar3 + (int)uVar7;
  }
  puVar4 = WriteRawFallback(this,_Src,uVar7,pbVar3);
  return puVar4;
}

// WriteFixedPacked<google::protobuf::RepeatedField<bool>_> @ 14fa674e0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<class
   google::protobuf::RepeatedField<bool> >(int,class google::protobuf::RepeatedField<bool> const &
   __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteFixedPacked<google::protobuf::RepeatedField<bool>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<bool> *param_2,uchar *param_3)

{
  byte *_Dst;
  ulong64 uVar1;
  ulonglong uVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  void *_Src;
  uint uVar6;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar1 & 3;
  }
  for (uVar5 = param_1 * 8 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *param_3 = (byte)uVar5 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar5;
  uVar2 = (ulonglong)uVar6;
  uVar5 = uVar6;
  while( true ) {
    param_3 = param_3 + 1;
    bVar4 = (byte)uVar2;
    if (uVar5 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *param_3 = bVar4 | 0x80;
    uVar5 = (uint)uVar2;
  }
  *param_3 = bVar4;
  uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  _Dst = param_3 + 1;
  _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    _Src = (void *)(uVar2 & 0xfffffffffffffff8);
  }
  if ((longlong)this->end_ - (longlong)_Dst < (longlong)(int)uVar6) {
    puVar3 = WriteRawFallback(this,_Src,uVar6,_Dst);
    return puVar3;
  }
  memcpy(_Dst,_Src,(ulonglong)uVar6);
  return _Dst + (int)uVar6;
}

// WriteInt32Packed<google::protobuf::RepeatedField<int>_> @ 14fa675f0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteInt32Packed<class
   google::protobuf::RepeatedField<int> >(int,class google::protobuf::RepeatedField<int> const &
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteInt32Packed<google::protobuf::RepeatedField<int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,int param_3,
          uchar *param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_4 = (byte)uVar6 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar6;
  while( true ) {
    param_4 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar3 | 0x80;
  }
  *param_4 = bVar3;
  pbVar7 = param_4 + 1;
  uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
  if ((~((byte)uVar5 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar5 & 3;
    piVar4 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar4 + (int)uVar6;
  do {
    if (this->end_ <= pbVar7) {
      pbVar7 = EnsureSpaceFallback(this,pbVar7);
    }
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    for (uVar5 = (ulonglong)iVar2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar7 = (byte)uVar5 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar5;
    pbVar7 = pbVar7 + 1;
  } while (piVar4 < piVar1);
  return pbVar7;
}

// WriteInt64Packed<google::protobuf::RepeatedField<__int64>_> @ 14fa67720

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteInt64Packed<class
   google::protobuf::RepeatedField<__int64> >(int,class google::protobuf::RepeatedField<__int64>
   const & __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteInt64Packed<google::protobuf::RepeatedField<__int64>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<__int64> *param_2,int param_3,
          uchar *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ShortSooRep_u_8 *pSVar3;
  ShortSooRep_u_8 SVar4;
  uint uVar5;
  integral_constant<bool,1> *piVar6;
  ShortSooRep_u_8 *pSVar7;
  ShortSooRep_u_8 *pSVar8;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar5 = param_1 * 8 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *param_4 = (byte)uVar5 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar5;
  while( true ) {
    param_4 = param_4 + 1;
    bVar2 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar2 | 0x80;
  }
  *param_4 = bVar2;
  piVar6 = (integral_constant<bool,1> *)(param_4 + 1);
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar3 = (ShortSooRep_u_8 *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar5 = (uint)uVar1 & 3;
    pSVar3 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar7 = pSVar3;
  do {
    if ((integral_constant<bool,1> *)this->end_ <= piVar6) {
      piVar6 = (integral_constant<bool,1> *)EnsureSpaceFallback(this,(uchar *)piVar6);
    }
    pSVar8 = pSVar7 + 1;
    for (SVar4 = *pSVar7; 0x7f < (ulonglong)SVar4; SVar4.data = SVar4.data >> 7) {
      *piVar6 = (integral_constant<bool,1>)((byte)SVar4.dummy | 0x80);
      piVar6 = piVar6 + 1;
    }
    *piVar6 = SVar4.dummy;
    piVar6 = piVar6 + 1;
    pSVar7 = pSVar8;
  } while (pSVar8 < pSVar3 + (int)uVar5);
  return (uchar *)piVar6;
}

// WriteRawLittleEndian<1> @ 14fa67850

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<1>(void const *
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<1>
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  uchar *puVar1;
  
  if ((longlong)this->end_ - (longlong)param_3 < (longlong)param_2) {
    puVar1 = WriteRawFallback(this,param_1,param_2,param_3);
    return puVar1;
  }
  memcpy(param_3,param_1,(ulonglong)(uint)param_2);
  return param_3 + param_2;
}

// WriteRawLittleEndian<4> @ 14fa678a0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<4>(void const *
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<4>
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  uchar *puVar1;
  
  if ((longlong)this->end_ - (longlong)param_3 < (longlong)param_2) {
    puVar1 = WriteRawFallback(this,param_1,param_2,param_3);
    return puVar1;
  }
  memcpy(param_3,param_1,(ulonglong)(uint)param_2);
  return param_3 + param_2;
}

// WriteRawLittleEndian<8> @ 14fa678f0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<8>(void const *
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRawLittleEndian<8>
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  uchar *puVar1;
  
  if ((longlong)this->end_ - (longlong)param_3 < (longlong)param_2) {
    puVar1 = WriteRawFallback(this,param_1,param_2,param_3);
    return puVar1;
  }
  memcpy(param_3,param_1,(ulonglong)(uint)param_2);
  return param_3 + param_2;
}

// WriteSInt32Packed<google::protobuf::RepeatedField<int>_> @ 14fa67940

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteSInt32Packed<class
   google::protobuf::RepeatedField<int> >(int,class google::protobuf::RepeatedField<int> const &
   __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteSInt32Packed<google::protobuf::RepeatedField<int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,int param_3,
          uchar *param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_4 = (byte)uVar6 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar6;
  while( true ) {
    param_4 = param_4 + 1;
    bVar4 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar4 | 0x80;
  }
  *param_4 = bVar4;
  pbVar7 = param_4 + 1;
  uVar3 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar5 = (int *)(uVar3 & 0xfffffffffffffff8);
  if ((~((byte)uVar3 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar3 & 3;
    piVar5 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar5 + (int)uVar6;
  do {
    if (this->end_ <= pbVar7) {
      pbVar7 = EnsureSpaceFallback(this,pbVar7);
    }
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    for (uVar6 = iVar2 >> 0x1f ^ iVar2 * 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar7 = (byte)uVar6 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar6;
    pbVar7 = pbVar7 + 1;
  } while (piVar5 < piVar1);
  return pbVar7;
}

// WriteSInt64Packed<google::protobuf::RepeatedField<__int64>_> @ 14fa67a80

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteSInt64Packed<class
   google::protobuf::RepeatedField<__int64> >(int,class google::protobuf::RepeatedField<__int64>
   const & __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteSInt64Packed<google::protobuf::RepeatedField<__int64>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<__int64> *param_2,int param_3,
          uchar *param_4)

{
  ShortSooRep_u_8 *pSVar1;
  longlong lVar2;
  byte bVar3;
  ShortSooRep_u_8 *pSVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_4 = (byte)uVar6 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar6;
  while( true ) {
    param_4 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar3 | 0x80;
  }
  *param_4 = bVar3;
  pbVar7 = param_4 + 1;
  uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar4 = (ShortSooRep_u_8 *)(uVar5 & 0xfffffffffffffff8);
  if ((~((byte)uVar5 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar5 & 3;
    pSVar4 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar1 = pSVar4 + (int)uVar6;
  do {
    if (this->end_ <= pbVar7) {
      pbVar7 = EnsureSpaceFallback(this,pbVar7);
    }
    lVar2 = *(longlong *)pSVar4->data;
    pSVar4 = pSVar4 + 1;
    for (uVar5 = lVar2 >> 0x3f ^ lVar2 * 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar7 = (byte)uVar5 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar5;
    pbVar7 = pbVar7 + 1;
  } while (pSVar4 < pSVar1);
  return pbVar7;
}

// WriteString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fa67bc0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteString<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(unsigned int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (EpsCopyOutputStream *this,uint param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,uchar *param_3)

{
  size_t _Size;
  uchar *puVar1;
  uint uVar2;
  longlong lVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  _Size = (param_2->_Mypair)._Myval2._Mysize;
  if ((longlong)_Size < 0x80) {
    uVar2 = param_1 * 8;
    if (uVar2 < 0x80) {
      lVar3 = 1;
    }
    else if (uVar2 < 0x4000) {
      lVar3 = 2;
    }
    else if (uVar2 < 0x200000) {
      lVar3 = 3;
    }
    else {
      lVar3 = 5 - (ulonglong)(uVar2 < 0x10000000);
    }
    if ((longlong)_Size <= (longlong)(this->end_ + (-(longlong)param_3 - lVar3) + 0xf)) {
      for (uVar2 = uVar2 | 2; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
        *param_3 = (byte)uVar2 | 0x80;
        param_3 = param_3 + 1;
      }
      *param_3 = (byte)uVar2;
      param_3[1] = (byte)_Size;
      if (0xf < (param_2->_Mypair)._Myval2._Myres) {
        param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (param_2->_Mypair)._Myval2._Bx._Ptr;
      }
      memcpy(param_3 + 2,param_2,_Size);
      return param_3 + 2 + _Size;
    }
  }
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18._Mydata = (char *)param_2;
  local_18._Mysize = _Size;
  puVar1 = WriteStringOutline(this,param_1,&local_18,param_3);
  return puVar1;
}

// WriteString<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa67ce0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteString<class std::basic_string_view<char,struct
   std::char_traits<char> > >(unsigned int,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteString<std::basic_string_view<char,std::char_traits<char>_>_>
          (EpsCopyOutputStream *this,uint param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,uchar *param_3)

{
  size_t _Size;
  uint uVar1;
  uchar *puVar2;
  longlong lVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  _Size = param_2->_Mysize;
  if ((longlong)_Size < 0x80) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x80) {
      lVar3 = 1;
    }
    else if (uVar1 < 0x4000) {
      lVar3 = 2;
    }
    else if (uVar1 < 0x200000) {
      lVar3 = 3;
    }
    else {
      lVar3 = 5 - (ulonglong)(uVar1 < 0x10000000);
    }
    if ((longlong)_Size <= (longlong)(this->end_ + (-(longlong)param_3 - lVar3) + 0xf)) {
      for (uVar1 = uVar1 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
        *param_3 = (byte)uVar1 | 0x80;
        param_3 = param_3 + 1;
      }
      *param_3 = (byte)uVar1;
      param_3[1] = (byte)_Size;
      memcpy(param_3 + 2,param_2->_Mydata,_Size);
      return param_3 + 2 + _Size;
    }
  }
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  puVar2 = WriteStringOutline(this,param_1,&local_18,param_3);
  return puVar2;
}

// WriteUInt32Packed<google::protobuf::RepeatedField<unsigned_int>_> @ 14fa67dd0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteUInt32Packed<class
   google::protobuf::RepeatedField<unsigned int> >(int,class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64,int,unsigned char * __ptr64)
   __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteUInt32Packed<google::protobuf::RepeatedField<unsigned_int>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned_int> *param_2,int param_3,
          uchar *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar5 = param_1 * 8 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *param_4 = (byte)uVar5 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar5;
  while( true ) {
    param_4 = param_4 + 1;
    bVar2 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar2 | 0x80;
  }
  *param_4 = bVar2;
  pbVar6 = param_4 + 1;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = (int *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar5 = (uint)uVar1 & 3;
    piVar4 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar7 = piVar4;
  do {
    if (this->end_ <= pbVar6) {
      pbVar6 = EnsureSpaceFallback(this,pbVar6);
    }
    piVar8 = piVar7 + 1;
    for (uVar3 = *piVar7; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
      *pbVar6 = (byte)uVar3 | 0x80;
      pbVar6 = pbVar6 + 1;
    }
    *pbVar6 = (byte)uVar3;
    pbVar6 = pbVar6 + 1;
    piVar7 = piVar8;
  } while (piVar8 < piVar4 + (int)uVar5);
  return pbVar6;
}

// WriteUInt64Packed<google::protobuf::RepeatedField<unsigned___int64>_> @ 14fa67f00

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteUInt64Packed<class
   google::protobuf::RepeatedField<unsigned __int64> >(int,class
   google::protobuf::RepeatedField<unsigned __int64> const & __ptr64,int,unsigned char * __ptr64)
   __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteUInt64Packed<google::protobuf::RepeatedField<unsigned___int64>_>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned___int64> *param_2,
          int param_3,uchar *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ShortSooRep_u_8 *pSVar3;
  ShortSooRep_u_8 SVar4;
  uint uVar5;
  integral_constant<bool,1> *piVar6;
  ShortSooRep_u_8 *pSVar7;
  ShortSooRep_u_8 *pSVar8;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar5 = param_1 * 8 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *param_4 = (byte)uVar5 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar5;
  while( true ) {
    param_4 = param_4 + 1;
    bVar2 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *param_4 = bVar2 | 0x80;
  }
  *param_4 = bVar2;
  piVar6 = (integral_constant<bool,1> *)(param_4 + 1);
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar3 = (ShortSooRep_u_8 *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar5 = (uint)uVar1 & 3;
    pSVar3 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar7 = pSVar3;
  do {
    if ((integral_constant<bool,1> *)this->end_ <= piVar6) {
      piVar6 = (integral_constant<bool,1> *)EnsureSpaceFallback(this,(uchar *)piVar6);
    }
    pSVar8 = pSVar7 + 1;
    for (SVar4 = *pSVar7; 0x7f < (ulonglong)SVar4; SVar4.data = SVar4.data >> 7) {
      *piVar6 = (integral_constant<bool,1>)((byte)SVar4.dummy | 0x80);
      piVar6 = piVar6 + 1;
    }
    *piVar6 = SVar4.dummy;
    piVar6 = piVar6 + 1;
    pSVar7 = pSVar8;
  } while (pSVar8 < pSVar3 + (int)uVar5);
  return (uchar *)piVar6;
}

// WriteVarintPacked<google::protobuf::RepeatedField<int>,unsigned_int___cdecl(int)> @ 14fa68030

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<int>,unsigned int __cdecl(int)>(int,class
   google::protobuf::RepeatedField<int> const & __ptr64,int,unsigned char * __ptr64,unsigned int
   (__cdecl&)(int)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<int>,unsigned_int___cdecl(int)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,int param_3,
          uchar *param_4,_func_uint_int *param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar7 = param_1 * 8 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *param_4 = (byte)uVar7 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar7;
  while( true ) {
    pbVar5 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar5 = bVar3 | 0x80;
    param_4 = pbVar5;
  }
  *pbVar5 = bVar3;
  pbVar5 = param_4 + 2;
  uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = (int *)(uVar6 & 0xfffffffffffffff8);
  if ((~((byte)uVar6 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar6 & 3;
    piVar4 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar4 + (int)uVar7;
  do {
    if (this->end_ <= pbVar5) {
      pbVar5 = EnsureSpaceFallback(this,pbVar5);
    }
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    uVar7 = (*param_5)(iVar2);
    uVar6 = (ulonglong)uVar7;
    while (bVar3 = (byte)uVar6, 0x7f < uVar7) {
      uVar6 = uVar6 >> 7;
      *pbVar5 = bVar3 | 0x80;
      pbVar5 = pbVar5 + 1;
      uVar7 = (uint)uVar6;
    }
    *pbVar5 = bVar3;
    pbVar5 = pbVar5 + 1;
  } while (piVar4 < piVar1);
  return pbVar5;
}

// WriteVarintPacked<google::protobuf::RepeatedField<int>,unsigned___int64___cdecl(unsigned___int64)> @ 14fa68150

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<int>,unsigned __int64 __cdecl(unsigned __int64)>(int,class
   google::protobuf::RepeatedField<int> const & __ptr64,int,unsigned char * __ptr64,unsigned __int64
   (__cdecl&)(unsigned __int64)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<int>,unsigned___int64___cdecl(unsigned___int64)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<int> *param_2,int param_3,
          uchar *param_4,_func___uint64___uint64 *param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar7 = param_1 * 8 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *param_4 = (byte)uVar7 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar7;
  while( true ) {
    pbVar5 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar5 = bVar3 | 0x80;
    param_4 = pbVar5;
  }
  *pbVar5 = bVar3;
  pbVar5 = param_4 + 2;
  uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = (int *)(uVar6 & 0xfffffffffffffff8);
  if ((~((byte)uVar6 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar6 & 3;
    piVar4 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar4 + (int)uVar7;
  do {
    if (this->end_ <= pbVar5) {
      pbVar5 = EnsureSpaceFallback(this,pbVar5);
    }
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    for (uVar6 = (*param_5)((longlong)iVar2); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = (byte)uVar6;
    pbVar5 = pbVar5 + 1;
  } while (piVar4 < piVar1);
  return pbVar5;
}

// WriteVarintPacked<google::protobuf::RepeatedField<unsigned_int>,unsigned_int___cdecl(unsigned_int)> @ 14fa68270

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<unsigned int>,unsigned int __cdecl(unsigned int)>(int,class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64,int,unsigned char *
   __ptr64,unsigned int (__cdecl&)(unsigned int)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<unsigned_int>,unsigned_int___cdecl(unsigned_int)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned_int> *param_2,int param_3,
          uchar *param_4,_func_uint_uint *param_5)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_4 = (byte)uVar6 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar6;
  while( true ) {
    pbVar4 = param_4 + 1;
    bVar2 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar4 = bVar2 | 0x80;
    param_4 = pbVar4;
  }
  *pbVar4 = bVar2;
  pbVar4 = param_4 + 2;
  uVar5 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar3 = (int *)(uVar5 & 0xfffffffffffffff8);
  if ((~((byte)uVar5 >> 2) & 1) == 0) {
    uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar6 = (uint)uVar5 & 3;
    piVar3 = &(param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  piVar1 = piVar3 + (int)uVar6;
  do {
    if (this->end_ <= pbVar4) {
      pbVar4 = EnsureSpaceFallback(this,pbVar4);
    }
    uVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    uVar6 = (*param_5)(uVar6);
    uVar5 = (ulonglong)uVar6;
    while (bVar2 = (byte)uVar5, 0x7f < uVar6) {
      uVar5 = uVar5 >> 7;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar4 + 1;
      uVar6 = (uint)uVar5;
    }
    *pbVar4 = bVar2;
    pbVar4 = pbVar4 + 1;
  } while (piVar3 < piVar1);
  return pbVar4;
}

// WriteVarintPacked<google::protobuf::RepeatedField<__int64>,unsigned___int64___cdecl(__int64)> @ 14fa68390

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<__int64>,unsigned __int64 __cdecl(__int64)>(int,class
   google::protobuf::RepeatedField<__int64> const & __ptr64,int,unsigned char * __ptr64,unsigned
   __int64 (__cdecl&)(__int64)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<__int64>,unsigned___int64___cdecl(__int64)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<__int64> *param_2,int param_3,
          uchar *param_4,_func___uint64___int64 *param_5)

{
  ShortSooRep_u_8 *pSVar1;
  ShortSooRep_u_8 SVar2;
  byte bVar3;
  ShortSooRep_u_8 *pSVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar7 = param_1 * 8 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *param_4 = (byte)uVar7 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar7;
  while( true ) {
    pbVar5 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar5 = bVar3 | 0x80;
    param_4 = pbVar5;
  }
  *pbVar5 = bVar3;
  pbVar5 = param_4 + 2;
  uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar4 = (ShortSooRep_u_8 *)(uVar6 & 0xfffffffffffffff8);
  if ((~((byte)uVar6 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar6 & 3;
    pSVar4 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar1 = pSVar4 + (int)uVar7;
  do {
    if (this->end_ <= pbVar5) {
      pbVar5 = EnsureSpaceFallback(this,pbVar5);
    }
    SVar2 = *pSVar4;
    pSVar4 = pSVar4 + 1;
    for (uVar6 = (*param_5)((__int64)SVar2); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = (byte)uVar6;
    pbVar5 = pbVar5 + 1;
  } while (pSVar4 < pSVar1);
  return pbVar5;
}

// WriteVarintPacked<google::protobuf::RepeatedField<__int64>,unsigned___int64___cdecl(unsigned___int64)> @ 14fa684b0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<__int64>,unsigned __int64 __cdecl(unsigned __int64)>(int,class
   google::protobuf::RepeatedField<__int64> const & __ptr64,int,unsigned char * __ptr64,unsigned
   __int64 (__cdecl&)(unsigned __int64)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<__int64>,unsigned___int64___cdecl(unsigned___int64)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<__int64> *param_2,int param_3,
          uchar *param_4,_func___uint64___uint64 *param_5)

{
  ShortSooRep_u_8 *pSVar1;
  ShortSooRep_u_8 SVar2;
  byte bVar3;
  ShortSooRep_u_8 *pSVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar7 = param_1 * 8 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *param_4 = (byte)uVar7 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar7;
  while( true ) {
    pbVar5 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar5 = bVar3 | 0x80;
    param_4 = pbVar5;
  }
  *pbVar5 = bVar3;
  pbVar5 = param_4 + 2;
  uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar4 = (ShortSooRep_u_8 *)(uVar6 & 0xfffffffffffffff8);
  if ((~((byte)uVar6 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar6 & 3;
    pSVar4 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar1 = pSVar4 + (int)uVar7;
  do {
    if (this->end_ <= pbVar5) {
      pbVar5 = EnsureSpaceFallback(this,pbVar5);
    }
    SVar2 = *pSVar4;
    pSVar4 = pSVar4 + 1;
    for (uVar6 = (*param_5)((__uint64)SVar2); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = (byte)uVar6;
    pbVar5 = pbVar5 + 1;
  } while (pSVar4 < pSVar1);
  return pbVar5;
}

// WriteVarintPacked<google::protobuf::RepeatedField<unsigned___int64>,unsigned___int64___cdecl(unsigned___int64)> @ 14fa685d0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteVarintPacked<class
   google::protobuf::RepeatedField<unsigned __int64>,unsigned __int64 __cdecl(unsigned
   __int64)>(int,class google::protobuf::RepeatedField<unsigned __int64> const &
   __ptr64,int,unsigned char * __ptr64,unsigned __int64 (__cdecl&)(unsigned __int64)) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::
WriteVarintPacked<google::protobuf::RepeatedField<unsigned___int64>,unsigned___int64___cdecl(unsigned___int64)>
          (EpsCopyOutputStream *this,int param_1,RepeatedField<unsigned___int64> *param_2,
          int param_3,uchar *param_4,_func___uint64___uint64 *param_5)

{
  ShortSooRep_u_8 *pSVar1;
  ShortSooRep_u_8 SVar2;
  byte bVar3;
  ShortSooRep_u_8 *pSVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (this->end_ <= param_4) {
    param_4 = EnsureSpaceFallback(this,param_4);
  }
  for (uVar7 = param_1 * 8 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
    *param_4 = (byte)uVar7 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar7;
  while( true ) {
    pbVar5 = param_4 + 1;
    bVar3 = (byte)param_3;
    if ((uint)param_3 < 0x80) break;
    param_3 = (uint)param_3 >> 7;
    *pbVar5 = bVar3 | 0x80;
    param_4 = pbVar5;
  }
  *pbVar5 = bVar3;
  pbVar5 = param_4 + 2;
  uVar6 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  pSVar4 = (ShortSooRep_u_8 *)(uVar6 & 0xfffffffffffffff8);
  if ((~((byte)uVar6 >> 2) & 1) == 0) {
    uVar7 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar6 & 3;
    pSVar4 = &(param_2->soo_rep_).field0_0x0.short_rep.field1_0x8;
  }
  pSVar1 = pSVar4 + (int)uVar7;
  do {
    if (this->end_ <= pbVar5) {
      pbVar5 = EnsureSpaceFallback(this,pbVar5);
    }
    SVar2 = *pSVar4;
    pSVar4 = pSVar4 + 1;
    for (uVar6 = (*param_5)((__uint64)SVar2); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar5 = (byte)uVar6 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = (byte)uVar6;
    pbVar5 = pbVar5 + 1;
  } while (pSVar4 < pSVar1);
  return pbVar5;
}

// _Adl_verify_range<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa686f0

/* void __cdecl std::_Adl_verify_range<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const & __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message ***param_1,Message ***param_2)

{
  return;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::Message_const*___ptr64>_>_>_> @ 14fa68700

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > > >(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const * __ptr64> > >
   const & __ptr64,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::Message_const*___ptr64>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
           *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
          *param_2)

{
  return;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>_> @ 14fa68710

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > > >(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > const & __ptr64,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > > const & __ptr64)
    */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
           *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
          *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa68720

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Allocate_at_least_helper<class std::allocator<class google::protobuf::Message const *
   __ptr64> >(class std::allocator<class google::protobuf::Message const * __ptr64> &
   __ptr64,unsigned __int64 & __ptr64) */

Message ** __cdecl
std::_Allocate_at_least_helper<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (allocator<google::protobuf::Message_const*___ptr64> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  Message *pMVar2;
  Message **ppMVar3;
  
  if (*param_2 < 0x2000000000000000) {
    uVar1 = *param_2 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppMVar3 = ::operator_new(uVar1);
        return ppMVar3;
      }
      return (Message **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pMVar2 = ::operator_new(uVar1 + 0x27);
      if (pMVar2 != (Message *)0x0) {
        ppMVar3 = (Message **)((ulonglong)&pMVar2[2].field_0x7 & 0xffffffffffffffe0);
        ppMVar3[-1] = pMVar2;
        return ppMVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Allocate_at_least_helper<std::allocator<google::protobuf::MapKey>_> @ 14fa687a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Allocate_at_least_helper<class
   std::allocator<class google::protobuf::MapKey> >(class std::allocator<class
   google::protobuf::MapKey> & __ptr64,unsigned __int64 & __ptr64) */

MapKey * __cdecl
std::_Allocate_at_least_helper<std::allocator<google::protobuf::MapKey>_>
          (allocator<google::protobuf::MapKey> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  MapKey *pMVar3;
  
  if (*param_2 < 0xaaaaaaaaaaaaaab) {
    uVar1 = *param_2 * 0x18;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pMVar3 = ::operator_new(uVar1);
        return pMVar3;
      }
      return (MapKey *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pMVar3 = (MapKey *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pMVar3[-1].type_ = pvVar2;
        return pMVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Buffered_inplace_merge_divide_and_conquer2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa68820

/* void __cdecl std::_Buffered_inplace_merge_divide_and_conquer2<class google::protobuf::Message
   const * __ptr64 * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,__int64,__int64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator,class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 *
   __ptr64,__int64,__int64) */

void __cdecl
std::
_Buffered_inplace_merge_divide_and_conquer2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 param_1,void *param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
          void *param_6,longlong param_7,undefined8 param_8,void *param_9,void *param_10,
          longlong param_11,longlong param_12)

{
  size_t _Size;
  void *_Dst;
  
  param_4 = param_4 - param_11;
  _Dst = param_10;
  if ((param_4 != 0) && (_Dst = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        _Dst = param_10;
        if ((param_9 != param_2) && (_Dst = param_9, param_2 != param_10)) {
          __std_reverse_trivially_swappable_8(param_9,param_2);
          __std_reverse_trivially_swappable_8(param_2,param_10);
          __std_reverse_trivially_swappable_8(param_9,param_10);
          _Dst = (void *)((longlong)param_9 + ((longlong)param_10 - (longlong)param_2 >> 3) * 8);
        }
      }
      else {
        _Size = (longlong)param_10 - (longlong)param_2;
        memmove(param_6,param_2,_Size);
        memmove((void *)((longlong)param_10 - ((longlong)param_2 - (longlong)param_9)),param_9,
                (longlong)param_2 - (longlong)param_9);
        memmove(param_9,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_9);
      }
    }
    else {
      memmove(param_6,param_9,(longlong)param_2 - (longlong)param_9);
      memmove(param_9,param_2,(longlong)param_10 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_10 - (longlong)param_2) + (longlong)param_9);
      memmove(_Dst,param_6,(longlong)param_2 - (longlong)param_9);
    }
  }
  _Buffered_inplace_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (param_1,param_9,_Dst,param_11,param_12,param_6,param_7,param_8);
  _Buffered_inplace_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (_Dst,param_10,param_3,param_4);
  return;
}

// _Buffered_inplace_merge_divide_and_conquer<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa689f0

/* void __cdecl std::_Buffered_inplace_merge_divide_and_conquer<class google::protobuf::Message
   const * __ptr64 * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,__int64,__int64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Buffered_inplace_merge_divide_and_conquer<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Message **ppMVar1;
  Message **ppMVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_5 < param_4) {
    lVar3 = param_5 >> 1;
    ppMVar1 = (Message **)(param_2 + lVar3 * 8);
    ppMVar2 = upper_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                        (param_1,param_2,ppMVar1,param_8);
    lVar4 = (longlong)ppMVar2 - param_1 >> 3;
  }
  else {
    lVar4 = param_4 >> 1;
    ppMVar2 = (Message **)(param_1 + lVar4 * 8);
    ppMVar1 = lower_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                        (param_2,param_3,ppMVar2);
    lVar3 = (longlong)ppMVar1 - param_2 >> 3;
  }
  _Buffered_inplace_merge_divide_and_conquer2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ppMVar2,ppMVar1,lVar4,
             lVar3);
  return;
}

// _Buffered_inplace_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa68b00

/* void __cdecl std::_Buffered_inplace_merge_unchecked<class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,__int64,__int64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Buffered_inplace_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
          longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (bVar2 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                             ((MapEntryMessageComparator *)&param_8,(Message *)*param_2,
                              (Message *)*param_1), !bVar2) {
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      puVar4 = param_3;
      lVar3 = param_5;
      param_3 = puVar4 + -1;
      if (param_2 == param_3) {
        uVar1 = *param_2;
        memmove((void *)((longlong)puVar4 - ((longlong)param_2 - (longlong)param_1)),param_1,
                (longlong)param_2 - (longlong)param_1);
        *param_1 = uVar1;
        return;
      }
      bVar2 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                        ((MapEntryMessageComparator *)&param_8,(Message *)*param_3,
                         (Message *)param_2[-1]);
      param_5 = lVar3 + -1;
    } while (!bVar2);
    if (param_4 == 1) {
      uVar1 = *param_1;
      memmove(param_1,param_2,(longlong)puVar4 - (longlong)param_2);
      *(undefined8 *)(((longlong)puVar4 - (longlong)param_2) + (longlong)param_1) = uVar1;
    }
    else {
      _Buffered_inplace_merge_unchecked_impl<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                (param_1,param_2,puVar4,param_4,lVar3,param_6,param_7,param_8);
    }
  }
  return;
}

// _Buffered_inplace_merge_unchecked_impl<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa68c40

/* void __cdecl std::_Buffered_inplace_merge_unchecked_impl<class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,__int64,__int64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Buffered_inplace_merge_unchecked_impl<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
          longlong param_5,undefined8 *param_6,longlong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *_Src;
  bool bVar3;
  Message **ppMVar4;
  Message **ppMVar5;
  longlong lVar6;
  size_t _Size;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar1 = param_8;
  _Src = param_6;
  lVar2 = param_5;
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_5 < param_4) {
        lVar6 = param_5 >> 1;
        ppMVar4 = (Message **)(param_2 + lVar6);
        ppMVar5 = upper_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                            (param_1,param_2,ppMVar4,param_8);
        lVar9 = (longlong)ppMVar5 - (longlong)param_1 >> 3;
      }
      else {
        lVar9 = param_4 >> 1;
        ppMVar5 = (Message **)(param_1 + lVar9);
        ppMVar4 = lower_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                            (param_2,param_3,ppMVar5);
        lVar6 = (longlong)ppMVar4 - (longlong)param_2 >> 3;
      }
      _Buffered_inplace_merge_divide_and_conquer2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                (param_1,param_2,param_3,param_4,lVar2,param_6,param_7,uVar1,ppMVar5,ppMVar4,lVar9,
                 lVar6);
    }
    else {
      param_5 = param_8;
      memmove(param_6,param_2,(longlong)param_3 - (longlong)param_2);
      puVar8 = param_2 + -1;
      puVar7 = param_3 + -1;
      puVar10 = (undefined8 *)((longlong)_Src + (((longlong)param_3 - (longlong)param_2) - 8U));
      *puVar7 = param_2[-1];
      do {
        puVar8 = puVar8 + -1;
        while( true ) {
          puVar11 = puVar7;
          puVar7 = puVar11 + -1;
          bVar3 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                            ((MapEntryMessageComparator *)&param_5,(Message *)*puVar10,
                             (Message *)*puVar8);
          if (bVar3) break;
          uVar1 = *puVar10;
          puVar10 = puVar10 + -1;
          *puVar7 = uVar1;
          if (_Src == puVar10) {
            puVar11[-2] = *puVar8;
            memmove((void *)((longlong)(puVar11 + -2) - ((longlong)puVar8 - (longlong)param_1)),
                    param_1,(longlong)puVar8 - (longlong)param_1);
            *param_1 = *_Src;
            return;
          }
        }
        *puVar7 = *puVar8;
      } while (param_1 != puVar8);
      puVar11[-2] = *puVar10;
      memmove((void *)((longlong)(puVar11 + -2) - ((longlong)puVar10 - (longlong)_Src)),_Src,
              (longlong)puVar10 - (longlong)_Src);
    }
  }
  else {
    _Size = (longlong)param_2 - (longlong)param_1;
    param_5 = param_8;
    memmove(param_6,param_1,_Size);
    puVar10 = (undefined8 *)((longlong)_Src + (_Size - 8));
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = param_1 + 1;
    puVar8 = _Src;
    do {
      while( true ) {
        puVar11 = puVar7 + 1;
        bVar3 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                          ((MapEntryMessageComparator *)&param_5,(Message *)*param_2,
                           (Message *)*puVar8);
        if (!bVar3) break;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar11;
        if (param_2 == param_3) {
          memmove(puVar11,puVar8,(longlong)_Src + (_Size - (longlong)puVar8));
          return;
        }
      }
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar11;
    } while (puVar8 != puVar10);
    uVar1 = *puVar10;
    memmove(puVar11,param_2,(longlong)param_3 - (longlong)param_2);
    *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar11) = uVar1;
  }
  return;
}

// _Buffered_merge_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa68f00

/* void __cdecl std::_Buffered_merge_sort_unchecked<class google::protobuf::Message const * __ptr64
   * __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,__int64,class google::protobuf::Message const * __ptr64 * __ptr64
   const,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Buffered_merge_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (Message **param_1,longlong param_2,longlong param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  Message **ppMVar2;
  Message **_Src;
  Message *pMVar3;
  undefined8 *puVar4;
  bool bVar5;
  Message **ppMVar6;
  longlong lVar7;
  longlong lVar8;
  Message **_Src_00;
  longlong lVar9;
  size_t _Size;
  undefined8 local_res18;
  undefined8 *local_res20;
  
  ppMVar6 = param_1;
  local_res20 = param_4;
  if (0x20 < param_3) {
    lVar9 = (param_3 - 0x21U >> 5) + 1;
    do {
      ppMVar6 = _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                          (ppMVar6,ppMVar6 + 0x20,param_5);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (ppMVar6,param_2,param_5);
  lVar9 = param_3;
  ppMVar6 = param_1;
  if (0x20 < param_3) {
    do {
      lVar8 = lVar9 + -0x20;
      local_res18 = param_5;
      ppMVar2 = ppMVar6 + 0x20;
      lVar7 = 0x20;
      if (lVar8 < 0x20) {
        lVar7 = lVar8;
      }
      _Src = ppMVar6 + lVar7 + 0x20;
      _Src_00 = ppMVar2;
      do {
        while( true ) {
          puVar1 = param_4 + 1;
          bVar5 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                            ((MapEntryMessageComparator *)&local_res18,*_Src_00,*ppMVar6);
          if (!bVar5) break;
          pMVar3 = *_Src_00;
          _Src_00 = _Src_00 + 1;
          *param_4 = pMVar3;
          param_4 = puVar1;
          if (_Src_00 == _Src) {
            _Size = (longlong)ppMVar2 - (longlong)ppMVar6;
            memmove(puVar1,ppMVar6,_Size);
            goto LAB_14fa6902d;
          }
        }
        pMVar3 = *ppMVar6;
        ppMVar6 = ppMVar6 + 1;
        *param_4 = pMVar3;
        param_4 = puVar1;
      } while (ppMVar6 != ppMVar2);
      _Size = (longlong)_Src - (longlong)_Src_00;
      memmove(puVar1,_Src_00,_Size);
LAB_14fa6902d:
      param_4 = (undefined8 *)(_Size + (longlong)puVar1);
      lVar9 = lVar8 - lVar7;
      ppMVar6 = _Src;
    } while (0x20 < lVar8 - lVar7);
    memmove(param_4,_Src,param_2 - (longlong)_Src);
    puVar4 = local_res20;
    puVar1 = local_res20 + param_3;
    _Chunked_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (local_res20,puVar1,param_1,0x40,param_3,param_5);
    lVar9 = 0x80;
    if (0x80 < param_3) {
      do {
        _Chunked_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                  (param_1,param_2,puVar4,lVar9,param_3,param_5);
        _Chunked_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                  (puVar4,puVar1,param_1,lVar9 * 2,param_3,param_5);
        lVar9 = lVar9 * 4;
      } while (lVar9 < param_3);
    }
  }
  return;
}

// _Buffered_rotate_unchecked<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa69100

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Buffered_rotate_unchecked<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 * __ptr64
   const,__int64,__int64,class google::protobuf::Message const * __ptr64 * __ptr64 const,__int64) */

Message ** __cdecl
std::_Buffered_rotate_unchecked<google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3,__int64 param_4,__int64 param_5,
          Message **param_6,__int64 param_7)

{
  Message **_Dst;
  size_t _Size;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 != 0) {
    if ((param_5 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_5) {
        _Dst = param_3;
        if ((param_1 != param_2) && (_Dst = param_1, param_2 != param_3)) {
          __std_reverse_trivially_swappable_8(param_1,param_2);
          __std_reverse_trivially_swappable_8(param_2,param_3);
          __std_reverse_trivially_swappable_8(param_1,param_3);
          _Dst = param_1 + ((longlong)param_3 - (longlong)param_2 >> 3);
        }
      }
      else {
        _Size = (longlong)param_3 - (longlong)param_2;
        memmove(param_6,param_2,_Size);
        memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                (longlong)param_2 - (longlong)param_1);
        memmove(param_1,param_6,_Size);
        _Dst = (Message **)(_Size + (longlong)param_1);
      }
    }
    else {
      memmove(param_6,param_1,(longlong)param_2 - (longlong)param_1);
      memmove(param_1,param_2,(longlong)param_3 - (longlong)param_2);
      _Dst = (Message **)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
      memmove(_Dst,param_6,(longlong)param_2 - (longlong)param_1);
    }
    return _Dst;
  }
  return param_1;
}

// _Chunked_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa69240

/* void __cdecl std::_Chunked_merge_unchecked<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 * __ptr64,__int64,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Chunked_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
          longlong param_5,longlong param_6)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *_Src;
  longlong lVar7;
  size_t _Size;
  
  lVar4 = param_6;
  lVar7 = param_5;
  do {
    if (lVar7 <= param_4) {
      memmove(param_3,param_1,param_2 - (longlong)param_1);
      return;
    }
    lVar7 = lVar7 - param_4;
    param_5 = lVar4;
    puVar1 = param_1 + param_4;
    lVar6 = param_4;
    if (lVar7 < param_4) {
      lVar6 = lVar7;
    }
    lVar7 = lVar7 - lVar6;
    puVar2 = param_1 + lVar6 + param_4;
    _Src = puVar1;
    do {
      while( true ) {
        _Dst = param_3 + 1;
        bVar5 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                          ((MapEntryMessageComparator *)&param_5,(Message *)*_Src,
                           (Message *)*param_1);
        if (!bVar5) break;
        uVar3 = *_Src;
        _Src = _Src + 1;
        *param_3 = uVar3;
        param_3 = _Dst;
        if (_Src == puVar2) {
          _Size = (longlong)puVar1 - (longlong)param_1;
          memmove(_Dst,param_1,_Size);
          goto LAB_14fa6932d;
        }
      }
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      param_3 = _Dst;
    } while (param_1 != puVar1);
    _Size = (longlong)puVar2 - (longlong)_Src;
    memmove(_Dst,_Src,_Size);
LAB_14fa6932d:
    param_3 = (undefined8 *)(_Size + (longlong)_Dst);
    param_1 = puVar2;
  } while( true );
}

// _Construct_in_place<google::protobuf::FieldDescriptor_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64> @ 14fa69380

/* void __cdecl std::_Construct_in_place<class google::protobuf::FieldDescriptor const *
   __ptr64,class google::protobuf::FieldDescriptor const * __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 & __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 && __ptr64) */

void __cdecl
std::
_Construct_in_place<google::protobuf::FieldDescriptor_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64>
          (FieldDescriptor **param_1,FieldDescriptor **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64> @ 14fa69390

/* void __cdecl std::_Construct_in_place<class google::protobuf::Message const * __ptr64,class
   google::protobuf::Message const * __ptr64>(class google::protobuf::Message const * __ptr64 &
   __ptr64,class google::protobuf::Message const * __ptr64 && __ptr64) */

void __cdecl
std::
_Construct_in_place<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64>
          (Message **param_1,Message **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64> @ 14fa693a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Construct_in_place<class google::protobuf::MapKey,class
   google::protobuf::MapKey const & __ptr64>(class google::protobuf::MapKey & __ptr64,class
   google::protobuf::MapKey const & __ptr64) */

void __cdecl
std::_Construct_in_place<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64>
          (MapKey *param_1,MapKey *param_2)

{
  ulong64 uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_2->val_).string_value._Mysize;
  (param_1->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
  (param_1->val_).string_value._Mysize = uVar1;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  param_1->type_ = param_2->type_;
  *(undefined4 *)&param_1->field_0x14 = uVar2;
  return;
}

// _Copy_backward_memmove<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa693c0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Copy_backward_memmove<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64) */

Message ** __cdecl
std::
_Copy_backward_memmove<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  Message **ppMVar1;
  
  ppMVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                    (longlong)param_2 - (longlong)param_1);
  return ppMVar1;
}

// _Copy_backward_memmove<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> @ 14fa693e0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Copy_backward_memmove<class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64>(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl
std::_Copy_backward_memmove<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64>
          (MapKey *param_1,MapKey *param_2,MapKey *param_3)

{
  MapKey *pMVar1;
  
  pMVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pMVar1;
}

// _Copy_memmove<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa69400

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Copy_memmove<class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) */

Message ** __cdecl
std::
_Copy_memmove<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Message **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> @ 14fa69440

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Copy_memmove<class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64>(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl
std::_Copy_memmove<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64>
          (MapKey *param_1,MapKey *param_2,MapKey *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (MapKey *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Destroy_range<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa69480

/* void __cdecl std::_Destroy_range<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 const) */

void __cdecl
std::
_Destroy_range<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2)

{
  return;
}

// _Destroy_range<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa69490

/* void __cdecl std::_Destroy_range<class std::allocator<class google::protobuf::Message const *
   __ptr64> >(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class std::allocator<class
   google::protobuf::Message const * __ptr64> & __ptr64) */

void __cdecl
std::_Destroy_range<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (Message **param_1,Message **param_2,
          allocator<google::protobuf::Message_const*___ptr64> *param_3)

{
  return;
}

// _Destroy_range<std::allocator<google::protobuf::MapKey>_> @ 14fa694a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Destroy_range<class std::allocator<class google::protobuf::MapKey> >(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64 const,class
   std::allocator<class google::protobuf::MapKey> & __ptr64) */

void __cdecl
std::_Destroy_range<std::allocator<google::protobuf::MapKey>_>
          (MapKey *param_1,MapKey *param_2,allocator<google::protobuf::MapKey> *param_3)

{
  return;
}

// _Emplace_back<google::protobuf::Message_const*___ptr64> @ 14fa694b0

/* public: void __cdecl std::_Uninitialized_backout<class google::protobuf::Message const * __ptr64
   * __ptr64>::_Emplace_back<class google::protobuf::Message const * __ptr64>(class
   google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>::
_Emplace_back<google::protobuf::Message_const*___ptr64>
          (_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> *this,
          Message **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back<google::protobuf::Message_const*___ptr64> @ 14fa694d0

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::Message const * __ptr64> >::_Emplace_back<class google::protobuf::Message const
   * __ptr64>(class google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>::
_Emplace_back<google::protobuf::Message_const*___ptr64>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,Message **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back<google::protobuf::MapKey> @ 14fa694f0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::MapKey> >::_Emplace_back<class google::protobuf::MapKey>(class
   google::protobuf::MapKey && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>::
_Emplace_back<google::protobuf::MapKey>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar2 = (param_1->val_).string_value._Mysize;
  *puVar1 = (param_1->val_).string_value._Mydata;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined8 *)&param_1->type_;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x18;
  return;
}

// _Emplace_back_with_unused_capacity<google::protobuf::MapKey_const&___ptr64> @ 14fa69510

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: class google::protobuf::MapKey & __ptr64 __cdecl std::vector<class
   google::protobuf::MapKey,class std::allocator<class google::protobuf::MapKey>
   >::_Emplace_back_with_unused_capacity<class google::protobuf::MapKey const & __ptr64>(class
   google::protobuf::MapKey const & __ptr64) __ptr64 */

MapKey * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
_Emplace_back_with_unused_capacity<google::protobuf::MapKey_const&___ptr64>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1)

{
  undefined8 *puVar1;
  MapKey *pMVar2;
  ulong64 uVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar3 = (param_1->val_).string_value._Mysize;
  *puVar1 = (param_1->val_).string_value._Mydata;
  puVar1[1] = uVar3;
  puVar1[2] = *(undefined8 *)&param_1->type_;
  pMVar2 = *(MapKey **)(this + 8);
  *(MapKey **)(this + 8) = pMVar2 + 1;
  return pMVar2;
}

// _Emplace_back_with_unused_capacity<google::protobuf::FieldDescriptor_const*___ptr64> @ 14fa69540

/* private: class google::protobuf::FieldDescriptor const * __ptr64 & __ptr64 __cdecl
   std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> >::_Emplace_back_with_unused_capacity<class
   google::protobuf::FieldDescriptor const * __ptr64>(class google::protobuf::FieldDescriptor const
   * __ptr64 && __ptr64) __ptr64 */

FieldDescriptor ** __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Emplace_back_with_unused_capacity<google::protobuf::FieldDescriptor_const*___ptr64>
          (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,FieldDescriptor **param_1)

{
  FieldDescriptor **ppFVar1;
  
  **(undefined8 **)(this + 8) = *param_1;
  ppFVar1 = *(FieldDescriptor ***)(this + 8);
  *(FieldDescriptor ***)(this + 8) = ppFVar1 + 1;
  return ppFVar1;
}

// _Emplace_back_with_unused_capacity<google::protobuf::Message_const*___ptr64> @ 14fa69560

/* private: class google::protobuf::Message const * __ptr64 & __ptr64 __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::_Emplace_back_with_unused_capacity<class google::protobuf::Message const *
   __ptr64>(class google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

Message ** __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Emplace_back_with_unused_capacity<google::protobuf::Message_const*___ptr64>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,Message **param_1)

{
  Message **ppMVar1;
  
  **(undefined8 **)(this + 8) = *param_1;
  ppMVar1 = *(Message ***)(this + 8);
  *(Message ***)(this + 8) = ppMVar1 + 1;
  return ppMVar1;
}

// _Emplace_one_at_back<google::protobuf::MapKey_const&___ptr64> @ 14fa69580

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: class google::protobuf::MapKey & __ptr64 __cdecl std::vector<class
   google::protobuf::MapKey,class std::allocator<class google::protobuf::MapKey>
   >::_Emplace_one_at_back<class google::protobuf::MapKey const & __ptr64>(class
   google::protobuf::MapKey const & __ptr64) __ptr64 */

MapKey * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
_Emplace_one_at_back<google::protobuf::MapKey_const&___ptr64>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1)

{
  ulong64 uVar1;
  undefined4 uVar2;
  MapKey *pMVar3;
  
  pMVar3 = *(MapKey **)(this + 8);
  if (pMVar3 != *(MapKey **)(this + 0x10)) {
    uVar1 = (param_1->val_).string_value._Mysize;
    (pMVar3->val_).string_value._Mydata = (param_1->val_).string_value._Mydata;
    (pMVar3->val_).string_value._Mysize = uVar1;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    pMVar3->type_ = param_1->type_;
    *(undefined4 *)&pMVar3->field_0x14 = uVar2;
    pMVar3 = *(MapKey **)(this + 8);
    *(MapKey **)(this + 8) = pMVar3 + 1;
    return pMVar3;
  }
  pMVar3 = _Emplace_reallocate<google::protobuf::MapKey_const&___ptr64>(this,pMVar3,param_1);
  return pMVar3;
}

// _Emplace_one_at_back<google::protobuf::FieldDescriptor_const*___ptr64> @ 14fa695c0

/* private: class google::protobuf::FieldDescriptor const * __ptr64 & __ptr64 __cdecl
   std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> >::_Emplace_one_at_back<class
   google::protobuf::FieldDescriptor const * __ptr64>(class google::protobuf::FieldDescriptor const
   * __ptr64 && __ptr64) __ptr64 */

FieldDescriptor ** __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Emplace_one_at_back<google::protobuf::FieldDescriptor_const*___ptr64>
          (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,FieldDescriptor **param_1)

{
  FieldDescriptor **ppFVar1;
  
  ppFVar1 = *(FieldDescriptor ***)(this + 8);
  if (ppFVar1 != *(FieldDescriptor ***)(this + 0x10)) {
    *ppFVar1 = *param_1;
    ppFVar1 = *(FieldDescriptor ***)(this + 8);
    *(FieldDescriptor ***)(this + 8) = ppFVar1 + 1;
    return ppFVar1;
  }
  ppFVar1 = _Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                      (this,ppFVar1,param_1);
  return ppFVar1;
}

// _Emplace_one_at_back<google::protobuf::Message_const*___ptr64> @ 14fa695f0

/* private: class google::protobuf::Message const * __ptr64 & __ptr64 __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::_Emplace_one_at_back<class google::protobuf::Message const * __ptr64>(class
   google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

Message ** __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Emplace_one_at_back<google::protobuf::Message_const*___ptr64>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,Message **param_1)

{
  Message **ppMVar1;
  
  ppMVar1 = *(Message ***)(this + 8);
  if (ppMVar1 != *(Message ***)(this + 0x10)) {
    *ppMVar1 = *param_1;
    ppMVar1 = *(Message ***)(this + 8);
    *(Message ***)(this + 8) = ppMVar1 + 1;
    return ppMVar1;
  }
  ppMVar1 = _Emplace_reallocate<google::protobuf::Message_const*___ptr64>(this,ppMVar1,param_1);
  return ppMVar1;
}

// _Emplace_reallocate<google::protobuf::MapKey_const&___ptr64> @ 14fa69620

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: class google::protobuf::MapKey * __ptr64 __cdecl std::vector<class
   google::protobuf::MapKey,class std::allocator<class google::protobuf::MapKey>
   >::_Emplace_reallocate<class google::protobuf::MapKey const & __ptr64>(class
   google::protobuf::MapKey * __ptr64 const,class google::protobuf::MapKey const & __ptr64) __ptr64
    */

MapKey * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
_Emplace_reallocate<google::protobuf::MapKey_const&___ptr64>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1,MapKey *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  MapKey *pMVar3;
  longlong lVar4;
  MapKey *_Src;
  code *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  void *pvVar8;
  MapKey *_Dst;
  longlong lVar9;
  ulong64 uVar10;
  MapKey *pMVar11;
  ulonglong uVar12;
  size_t _Size;
  void *pvVar13;
  
  lVar4 = *(longlong *)this;
  lVar9 = ((longlong)param_1 - lVar4) / 6 + ((longlong)param_1 - lVar4 >> 0x3f);
  lVar6 = (*(longlong *)(this + 8) - lVar4) / 0x18;
  if (lVar6 == 0xaaaaaaaaaaaaaaa) {
    _Xlength();
    pcVar5 = (code *)swi(3);
    pMVar11 = (MapKey *)(*pcVar5)();
    return pMVar11;
  }
  uVar1 = lVar6 + 1;
  uVar2 = (*(longlong *)(this + 0x10) - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
LAB_14fa69830:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar2 = (uVar2 >> 1) + uVar2;
  uVar12 = uVar1;
  if (uVar1 <= uVar2) {
    uVar12 = uVar2;
  }
  if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_14fa69830;
  uVar2 = uVar12 * 0x18;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      pMVar11 = (MapKey *)0x0;
    }
    else {
      pMVar11 = ::operator_new(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto LAB_14fa69830;
    pvVar8 = ::operator_new(uVar2 + 0x27);
    if (pvVar8 == (void *)0x0) goto LAB_14fa69829;
    pMVar11 = (MapKey *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
    *(void **)&pMVar11[-1].type_ = pvVar8;
  }
  pMVar3 = pMVar11 + ((lVar9 >> 2) - (lVar9 >> 0x3f));
  uVar10 = (param_2->val_).string_value._Mysize;
  (pMVar3->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
  (pMVar3->val_).string_value._Mysize = uVar10;
  uVar7 = *(undefined4 *)&param_2->field_0x14;
  pMVar3->type_ = param_2->type_;
  *(undefined4 *)&pMVar3->field_0x14 = uVar7;
  _Src = *(MapKey **)this;
  if (param_1 == *(MapKey **)(this + 8)) {
    _Size = (longlong)*(MapKey **)(this + 8) - (longlong)_Src;
    _Dst = pMVar11;
    param_1 = _Src;
  }
  else {
    memmove(pMVar11,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = pMVar3 + 1;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar8 = *(void **)this;
  if (pvVar8 != (void *)0x0) {
    uVar10 = ((*(longlong *)(this + 0x10) - (longlong)pvVar8) / 0x18) * 0x18;
    pvVar13 = pvVar8;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      pvVar13 = *(void **)((longlong)pvVar8 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar13))) {
LAB_14fa69829:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar13,uVar10);
  }
  *(MapKey **)this = pMVar11;
  *(MapKey **)(this + 8) = pMVar11 + uVar1;
  *(MapKey **)(this + 0x10) = pMVar11 + uVar12;
  return pMVar3;
}

// _Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64> @ 14fa69850

/* private: class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64 __cdecl
   std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> >::_Emplace_reallocate<class
   google::protobuf::FieldDescriptor const * __ptr64>(class google::protobuf::FieldDescriptor const
   * __ptr64 * __ptr64 const,class google::protobuf::FieldDescriptor const * __ptr64 && __ptr64)
   __ptr64 */

FieldDescriptor ** __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
          (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,FieldDescriptor **param_1,FieldDescriptor **param_2)

{
  ulonglong uVar1;
  FieldDescriptor **ppFVar2;
  longlong lVar3;
  FieldDescriptor **_Src;
  void *pvVar4;
  longlong lVar5;
  FieldDescriptor *pFVar6;
  ulonglong uVar7;
  FieldDescriptor **_Dst;
  void *pvVar8;
  ulong64 uVar9;
  FieldDescriptor **_Dst_00;
  size_t _Size;
  ulonglong uVar10;
  
  lVar3 = *(longlong *)this;
  lVar5 = *(longlong *)(this + 8) - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar5 + 1;
  uVar7 = *(longlong *)(this + 0x10) - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_14fa699e4:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x1fffffffffffffff < uVar10) goto LAB_14fa699e4;
  uVar7 = uVar10 * 8;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst_00 = (FieldDescriptor **)0x0;
    }
    else {
      _Dst_00 = ::operator_new(uVar7);
    }
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_14fa699e4;
    pFVar6 = ::operator_new(uVar7 + 0x27);
    if (pFVar6 == (FieldDescriptor *)0x0) goto LAB_14fa699dd;
    _Dst_00 = (FieldDescriptor **)
              ((ulonglong)((longlong)&pFVar6->type_once_ + 7U) & 0xffffffffffffffe0);
    _Dst_00[-1] = pFVar6;
  }
  ppFVar2 = _Dst_00 + ((longlong)param_1 - lVar3 >> 3);
  *ppFVar2 = *param_2;
  _Src = *(FieldDescriptor ***)this;
  if (param_1 == *(FieldDescriptor ***)(this + 8)) {
    _Size = (longlong)*(FieldDescriptor ***)(this + 8) - (longlong)_Src;
    _Dst = _Dst_00;
    param_1 = _Src;
  }
  else {
    memmove(_Dst_00,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = ppFVar2 + 1;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    uVar9 = *(longlong *)(this + 0x10) - (longlong)pvVar4 & 0xfffffffffffffff8;
    pvVar8 = pvVar4;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      pvVar8 = *(void **)((longlong)pvVar4 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8))) {
LAB_14fa699dd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar8,uVar9);
  }
  *(FieldDescriptor ***)this = _Dst_00;
  *(FieldDescriptor ***)(this + 8) = _Dst_00 + uVar1;
  *(FieldDescriptor ***)(this + 0x10) = _Dst_00 + uVar10;
  return ppFVar2;
}

// _Emplace_reallocate<google::protobuf::Message_const*___ptr64> @ 14fa69a00

/* private: class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::_Emplace_reallocate<class google::protobuf::Message const * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 && __ptr64) __ptr64 */

Message ** __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Emplace_reallocate<google::protobuf::Message_const*___ptr64>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,Message **param_1,Message **param_2)

{
  ulonglong uVar1;
  Message **ppMVar2;
  longlong lVar3;
  Message **_Src;
  longlong lVar4;
  Message *pMVar5;
  ulonglong uVar6;
  Message **_Dst;
  Message **_Dst_00;
  ulonglong uVar7;
  size_t _Size;
  
  lVar3 = *(longlong *)this;
  lVar4 = *(longlong *)(this + 8) - lVar3 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar6 = *(longlong *)(this + 0x10) - lVar3 >> 3;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 < 0x2000000000000000) {
      uVar6 = uVar7 * 8;
      if (uVar6 < 0x1000) {
        if (uVar6 == 0) {
          _Dst_00 = (Message **)0x0;
        }
        else {
          _Dst_00 = ::operator_new(uVar6);
        }
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_14fa69b4f;
        pMVar5 = ::operator_new(uVar6 + 0x27);
        if (pMVar5 == (Message *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        _Dst_00 = (Message **)((ulonglong)&pMVar5[2].field_0x7 & 0xffffffffffffffe0);
        _Dst_00[-1] = pMVar5;
      }
      ppMVar2 = _Dst_00 + ((longlong)param_1 - lVar3 >> 3);
      *ppMVar2 = *param_2;
      _Src = *(Message ***)this;
      if (param_1 == *(Message ***)(this + 8)) {
        _Size = (longlong)*(Message ***)(this + 8) - (longlong)_Src;
        _Dst = _Dst_00;
        param_1 = _Src;
      }
      else {
        memmove(_Dst_00,_Src,(longlong)param_1 - (longlong)_Src);
        _Dst = ppMVar2 + 1;
        _Size = *(longlong *)(this + 8) - (longlong)param_1;
      }
      memmove(_Dst,param_1,_Size);
      _Change_array(this,_Dst_00,uVar1,uVar7);
      return ppMVar2;
    }
  }
LAB_14fa69b4f:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Get_size_of_n<24> @ 14fa69b70

/* unsigned __int64 __cdecl std::_Get_size_of_n<24>(unsigned __int64) */

__uint64 __cdecl std::_Get_size_of_n<24>(__uint64 param_1)

{
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    return param_1 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Get_temporary_buffer<google::protobuf::Message_const*___ptr64> @ 14fa69ba0

/* struct std::pair<class google::protobuf::Message const * __ptr64 * __ptr64,__int64> __cdecl
   std::_Get_temporary_buffer<class google::protobuf::Message const * __ptr64>(__int64) */

__int64 __cdecl
std::_Get_temporary_buffer<google::protobuf::Message_const*___ptr64>(__int64 param_1)

{
  void *pvVar1;
  ulonglong in_RDX;
  
  if ((in_RDX < 0x2000000000000000) && (0 < (longlong)in_RDX)) {
    do {
      pvVar1 = ::operator_new(in_RDX * 8,(nothrow_t *)&nothrow);
      if (pvVar1 != (void *)0x0) {
        *(ulonglong *)(param_1 + 8) = in_RDX;
        *(void **)param_1 = pvVar1;
        return param_1;
      }
      in_RDX = in_RDX >> 1;
    } while (in_RDX != 0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// _Get_unwrapped<google::protobuf::Message_const*___ptr64*___ptr64&___ptr64> @ 14fa69c20

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::Message const * __ptr64 * __ptr64 &
   __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64) */

Message ** __cdecl
std::_Get_unwrapped<google::protobuf::Message_const*___ptr64*___ptr64&___ptr64>(Message ***param_1)

{
  return *param_1;
}

// _Get_unwrapped<google::protobuf::Message_const*___ptr64*___ptr64_const&___ptr64> @ 14fa69c30

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::Message const * __ptr64 * __ptr64
   const & __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64 const & __ptr64) */

Message ** __cdecl
std::_Get_unwrapped<google::protobuf::Message_const*___ptr64*___ptr64_const&___ptr64>
          (Message ***param_1)

{
  return *param_1;
}

// _Get_unwrapped<google::protobuf::MapKey*___ptr64_const&___ptr64> @ 14fa69c40

/* WARNING: Enum "CppType": Some values do not have unique names */
/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::MapKey * __ptr64 const &
   __ptr64>(class google::protobuf::MapKey * __ptr64 const & __ptr64) */

MapKey * __cdecl
std::_Get_unwrapped<google::protobuf::MapKey*___ptr64_const&___ptr64>(MapKey **param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>_const&___ptr64> @ 14fa69c50

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > > const & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > > const & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>_const&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>_const&___ptr64> @ 14fa69c60

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > > const & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > const & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>_const&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Guess_median_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa69c70

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Guess_median_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Guess_median_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (param_3 - param_1) / 0x18;
  if (0x28 < lVar1) {
    lVar2 = lVar1 + 1 >> 3;
    lVar1 = lVar2 * 0x18 + param_1;
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (param_1,lVar1,lVar2 * 0x30 + param_1,param_4);
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (param_2 + lVar2 * -0x18,param_2,lVar2 * 0x18 + param_2,param_4);
    lVar3 = param_3 + lVar2 * -0x18;
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (param_3 + lVar2 * -0x30,lVar3,param_3,param_4);
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (lVar1,param_2,lVar3,param_4);
    return;
  }
  _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (param_1,param_2,param_3,param_4);
  return;
}

// _Inplace_merge_buffer_left<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa69d70

/* void __cdecl std::_Inplace_merge_buffer_left<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Inplace_merge_buffer_left<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *_Src;
  size_t _Size;
  
  _Size = (longlong)param_2 - (longlong)param_1;
  memmove(param_4,param_1,_Size);
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((longlong)param_4 + (_Size - 8));
  param_2 = param_2 + 1;
  _Src = param_4;
  do {
    while( true ) {
      puVar3 = param_1;
      param_1 = puVar3 + 1;
      bVar4 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                        ((MapEntryMessageComparator *)&stack0x00000028,(Message *)*param_2,
                         (Message *)*_Src);
      if (!bVar4) break;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      if (param_2 == param_3) {
        memmove(puVar3 + 2,_Src,(longlong)param_4 + (_Size - (longlong)_Src));
        return;
      }
    }
    uVar2 = *_Src;
    _Src = _Src + 1;
    *param_1 = uVar2;
  } while (_Src != puVar1);
  uVar2 = *puVar1;
  memmove(puVar3 + 2,param_2,(longlong)param_3 - (longlong)param_2);
  *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + 8U + (longlong)param_1) = uVar2;
  return;
}

// _Inplace_merge_buffer_right<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa69e60

/* void __cdecl std::_Inplace_merge_buffer_right<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Inplace_merge_buffer_right<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,void *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  memmove(param_4,param_2,param_3 - (longlong)param_2);
  puVar5 = (undefined8 *)((longlong)param_4 + ((param_3 - (longlong)param_2) - 8U));
  puVar4 = (undefined8 *)((longlong)param_2 + -0x10);
  *(undefined8 *)(param_3 + -8) = *(undefined8 *)((longlong)param_2 + -8);
  puVar2 = (undefined8 *)(param_3 + -8);
  do {
    while( true ) {
      puVar6 = puVar2;
      puVar2 = puVar6 + -1;
      bVar3 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                        ((MapEntryMessageComparator *)&stack0x00000028,(Message *)*puVar5,
                         (Message *)*puVar4);
      if (!bVar3) break;
      *puVar2 = *puVar4;
      if (param_1 == puVar4) {
        puVar6[-2] = *puVar5;
        memmove((void *)((longlong)(puVar6 + -2) - ((longlong)puVar5 - (longlong)param_4)),param_4,
                (longlong)puVar5 - (longlong)param_4);
        return;
      }
      puVar4 = puVar4 + -1;
    }
    uVar1 = *puVar5;
    puVar5 = puVar5 + -1;
    *puVar2 = uVar1;
  } while (param_4 != puVar5);
  puVar6[-2] = *puVar4;
  memmove((void *)((longlong)(puVar6 + -2) - ((longlong)puVar4 - (longlong)param_1)),param_1,
          (longlong)puVar4 - (longlong)param_1);
  *param_1 = *param_4;
  return;
}

// _Insertion_sort_isort_max_chunks<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa69f50

/* void __cdecl std::_Insertion_sort_isort_max_chunks<class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Insertion_sort_isort_max_chunks<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (Message **param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (0x20 < param_3) {
    lVar1 = (param_3 - 0x21U >> 5) + 1;
    do {
      param_1 = _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
                          (param_1,param_1 + 0x20,param_4);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (param_1,param_2,param_4);
  return;
}

// _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa69fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fa6a367) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Insertion_sort_unchecked<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 * __ptr64
   const,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

Message ** __cdecl
std::
_Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (Message **param_1,Message **param_2,FieldDescriptor *param_3)

{
  Message *this;
  Message *pMVar1;
  Reflection *this_00;
  FieldDescriptor *pFVar2;
  size_t _Size;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Metadata *pMVar9;
  __int64 _Var10;
  __int64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  _Bxty *_Buf1;
  _Bxty *p_Var14;
  ulong64 uVar15;
  ulonglong uVar16;
  Message **ppMVar17;
  _Bxty *p_Var18;
  _Bxty *p_Var19;
  ulonglong _Size_00;
  Message **ppMVar20;
  FieldDescriptor *local_res18 [2];
  undefined1 auStack_f8 [32];
  char local_d8;
  Message **local_d0;
  size_t local_c8;
  Message **local_c0;
  Message **local_b8;
  Message **local_b0;
  Metadata local_a8 [2];
  _Bxty local_88;
  ulonglong local_78;
  ulonglong local_70;
  _Bxty local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_1 == param_2) || (ppMVar17 = param_1 + 1, ppMVar17 == param_2)) {
    return param_2;
  }
  local_c8 = 8;
  ppMVar20 = ppMVar17;
  local_res18[0] = param_3;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = ppMVar17;
LAB_14fa6a031:
  _Size = local_c8;
  this = *ppMVar17;
  local_d0 = ppMVar17;
  bVar3 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                    ((MapEntryMessageComparator *)local_res18,this,*param_1);
  pFVar2 = local_res18[0];
  if (!bVar3) {
    do {
      ppMVar20 = ppMVar17 + -1;
      pMVar1 = *ppMVar20;
      pMVar9 = google::protobuf::Message::GetMetadata(this,local_a8);
      this_00 = pMVar9->reflection;
      switch(*(undefined4 *)
              ((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
              (ulonglong)pFVar2->type_ * 4)) {
      case 1:
        iVar8 = google::protobuf::Reflection::GetInt32(this_00,this,pFVar2);
        iVar5 = google::protobuf::Reflection::GetInt32(this_00,pMVar1,pFVar2);
        bVar3 = iVar8 < iVar5;
        break;
      case 2:
        _Var10 = google::protobuf::Reflection::GetInt64(this_00,this,pFVar2);
        _Var11 = google::protobuf::Reflection::GetInt64(this_00,pMVar1,pFVar2);
        bVar3 = _Var10 < _Var11;
        break;
      case 3:
        uVar6 = google::protobuf::Reflection::GetUInt32(this_00,this,pFVar2);
        uVar7 = google::protobuf::Reflection::GetUInt32(this_00,pMVar1,pFVar2);
        bVar3 = uVar6 < uVar7;
        break;
      case 4:
        _Var12 = google::protobuf::Reflection::GetUInt64(this_00,this,pFVar2);
        _Var13 = google::protobuf::Reflection::GetUInt64(this_00,pMVar1,pFVar2);
        bVar3 = _Var12 < _Var13;
        break;
      default:
        goto LAB_14fa6a374;
      case 7:
        bVar4 = google::protobuf::Reflection::GetBool(this_00,this,pFVar2);
        bVar3 = google::protobuf::Reflection::GetBool(this_00,pMVar1,pFVar2);
        bVar3 = bVar3 && !bVar4;
        break;
      case 9:
        google::protobuf::Reflection::GetString
                  (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_68,this,pFVar2);
        google::protobuf::Reflection::GetString
                  (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_88,pMVar1,pFVar2);
        uVar16 = local_58;
        local_d8 = 0xf < local_70;
        p_Var19 = (_Bxty *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        p_Var14 = &local_88;
        if (0xf < local_70) {
          p_Var14 = p_Var19;
        }
        p_Var18 = (_Bxty *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
        _Buf1 = &local_68;
        if (0xf < local_50) {
          _Buf1 = p_Var18;
        }
        _Size_00 = local_58;
        if (local_78 < local_58) {
          _Size_00 = local_78;
        }
        iVar8 = memcmp(_Buf1,p_Var14,_Size_00);
        if (iVar8 == 0) {
          if (uVar16 < local_78) {
            bVar3 = true;
          }
          else {
            if (local_78 < uVar16) goto LAB_14fa6a22c;
            bVar3 = false;
          }
        }
        else if (iVar8 < 0) {
          bVar3 = true;
        }
        else {
LAB_14fa6a22c:
          bVar3 = false;
        }
        if (local_d8 != '\0') {
          uVar15 = local_70 + 1;
          p_Var14 = p_Var19;
          if (0xfff < uVar15) {
            uVar15 = local_70 + 0x28;
            p_Var14 = *(_Bxty **)(p_Var19->_Buf + -8);
            if ((char *)0x1f < p_Var19->_Buf + (-8 - (longlong)p_Var14)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(p_Var14,uVar15);
          p_Var18 = (_Bxty *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
        }
        local_78 = 0;
        local_70 = 0xf;
        local_88._Buf[0] = '\0';
        if (0xf < local_50) {
          uVar16 = local_50 + 1;
          p_Var19 = p_Var18;
          if (0xfff < uVar16) {
            uVar16 = local_50 + 0x28;
            p_Var19 = *(_Bxty **)(p_Var18->_Buf + -8);
            if ((char *)0x1f < p_Var18->_Buf + (-8 - (longlong)p_Var19)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(p_Var19,uVar16);
        }
        local_58 = 0;
        local_50 = 0xf;
        local_68._Buf[0] = '\0';
      }
      if (!bVar3) goto code_r0x00014fa6a2fb;
LAB_14fa6a374:
      *ppMVar17 = *ppMVar20;
      ppMVar17 = ppMVar20;
    } while( true );
  }
  memmove(ppMVar20,param_1,_Size);
  *param_1 = this;
  local_d0 = ppMVar17;
  local_c8 = _Size;
  goto LAB_14fa6a318;
code_r0x00014fa6a2fb:
  *ppMVar17 = this;
  param_1 = local_c0;
  ppMVar20 = local_b0;
  param_2 = local_b8;
LAB_14fa6a318:
  ppMVar17 = local_d0 + 1;
  local_c8 = local_c8 + 8;
  if (ppMVar17 == param_2) {
    return param_2;
  }
  goto LAB_14fa6a031;
}

// _Insertion_sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6a3c0

/* WARNING: Removing unreachable block (ram,0x00014fa6a510) */
/* WARNING: Removing unreachable block (ram,0x00014fa6a901) */
/* WARNING: Removing unreachable block (ram,0x00014fa6a888) */
/* WARNING: Removing unreachable block (ram,0x00014fa6a907) */
/* WARNING: Removing unreachable block (ram,0x00014fa6a90b) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Insertion_sort_unchecked<class
   google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64 const,class google::protobuf::MapKey * __ptr64 const,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

MapKey * __cdecl
std::
_Insertion_sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (MapKey *param_1,MapKey *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *_Buf2;
  ulonglong uVar4;
  char *pcVar5;
  ulong64 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  LogMessage *pLVar14;
  basic_string_view<char,std::char_traits<char>_> *pbVar15;
  __int64 _Var16;
  __int64 _Var17;
  __uint64 _Var18;
  __uint64 _Var19;
  MapKey *pMVar20;
  ulonglong _Size;
  basic_string_view<char,std::char_traits<char>_> local_1a8;
  KeyValue local_198;
  undefined8 local_188;
  MapKey *local_180;
  size_t local_178;
  char *local_168;
  undefined8 uStack_160;
  char *local_158;
  undefined8 uStack_150;
  char *local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  LogMessageFatal local_108;
  LogMessageFatal local_f8;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  basic_string_view<char,std::char_traits<char>_> local_d8 [10];
  
  if ((param_1 != param_2) && (pMVar20 = param_1 + 1, pMVar20 != param_2)) {
    local_178 = 0x18;
    do {
      pcVar5 = (pMVar20->val_).string_value._Mydata;
      uVar6 = (pMVar20->val_).string_value._Mysize;
      uVar2 = *(undefined8 *)&pMVar20->type_;
      local_188._0_4_ = (int)uVar2;
      iVar7 = (int)local_188;
      local_198.string_value._Mydata = pcVar5;
      local_198.string_value._Mysize = uVar6;
      local_188 = uVar2;
      local_180 = pMVar20;
      if ((int)local_188 == 0) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_108,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x52);
        local_168 = "Protocol Buffer map usage error:\n";
        uStack_160 = 0x21;
        local_1a8._Mydata = "Protocol Buffer map usage error:\n";
        local_1a8._Mysize = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
        local_158 = "MapKey::type MapKey is not initialized. ";
        uStack_150 = 0x28;
        local_1a8._Mydata = "MapKey::type MapKey is not initialized. ";
        local_1a8._Mysize = 0x28;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
        local_148 = "Call set methods to initialize MapKey.";
        uStack_140 = 0x26;
        local_1a8._Mydata = "Call set methods to initialize MapKey.";
        local_1a8._Mysize = 0x26;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_108);
      }
      iVar1 = (int)local_188 + -1;
      switch(iVar1) {
      case 0:
        iVar10 = google::protobuf::MapKey::GetInt32Value(param_1);
        iVar11 = google::protobuf::MapKey::GetInt32Value((MapKey *)&local_198.string_value);
        bVar8 = iVar11 < iVar10;
        break;
      case 1:
        _Var16 = google::protobuf::MapKey::GetInt64Value(param_1);
        _Var17 = google::protobuf::MapKey::GetInt64Value((MapKey *)&local_198.string_value);
        bVar8 = _Var17 < _Var16;
        break;
      case 2:
        uVar12 = google::protobuf::MapKey::GetUInt32Value(param_1);
        uVar13 = google::protobuf::MapKey::GetUInt32Value((MapKey *)&local_198.string_value);
        bVar8 = uVar13 < uVar12;
        break;
      case 3:
        _Var18 = google::protobuf::MapKey::GetUInt64Value(param_1);
        _Var19 = google::protobuf::MapKey::GetUInt64Value((MapKey *)&local_198.string_value);
        bVar8 = _Var19 < _Var18;
        break;
      default:
        goto LAB_14fa6a894;
      case 6:
        bVar8 = google::protobuf::MapKey::GetBoolValue(param_1);
        bVar9 = google::protobuf::MapKey::GetBoolValue((MapKey *)&local_198.string_value);
        bVar8 = !bVar9 && bVar8;
        break;
      case 8:
        pbVar15 = google::protobuf::MapKey::GetStringValue(param_1,&local_e8);
        _Buf2 = pbVar15->_Mydata;
        uVar4 = pbVar15->_Mysize;
        pbVar15 = google::protobuf::MapKey::GetStringValue
                            ((MapKey *)&local_198.string_value,local_d8);
        uVar3 = pbVar15->_Mysize;
        _Size = uVar3;
        if (uVar4 < uVar3) {
          _Size = uVar4;
        }
        iVar10 = memcmp(pbVar15->_Mydata,_Buf2,_Size);
        pMVar20 = local_180;
        if (iVar10 == 0) {
          if (uVar3 < uVar4) {
            bVar8 = true;
          }
          else {
            if (uVar4 < uVar3) goto LAB_14fa6a5a5;
            bVar8 = false;
          }
        }
        else if (iVar10 < 0) {
          bVar8 = true;
        }
        else {
LAB_14fa6a5a5:
          bVar8 = false;
        }
      }
      if (!bVar8) {
        if (iVar7 == 0) {
          pLVar14 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_f8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x52);
          local_138 = "Protocol Buffer map usage error:\n";
          uStack_130 = 0x21;
          local_1a8._Mydata = "Protocol Buffer map usage error:\n";
          local_1a8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
          local_128 = "MapKey::type MapKey is not initialized. ";
          uStack_120 = 0x28;
          local_1a8._Mydata = "MapKey::type MapKey is not initialized. ";
          local_1a8._Mysize = 0x28;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
          local_118 = "Call set methods to initialize MapKey.";
          uStack_110 = 0x26;
          local_1a8._Mydata = "Call set methods to initialize MapKey.";
          local_1a8._Mysize = 0x26;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar14,&local_1a8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_f8);
        }
                    /* WARNING: Could not recover jumptable at 0x00014fa6a734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pMVar20 = (MapKey *)
                  (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                            *(uint *)(&DAT_14fa6a940 + (longlong)iVar1 * 4)))
                            (switchD_1501dbc7b::caseD_1.e_magic +
                             *(uint *)(&DAT_14fa6a940 + (longlong)iVar1 * 4));
        return pMVar20;
      }
LAB_14fa6a894:
      memmove(param_1 + 1,param_1,local_178);
      (param_1->val_).string_value._Mydata = pcVar5;
      (param_1->val_).string_value._Mysize = uVar6;
      *(undefined8 *)&param_1->type_ = uVar2;
      pMVar20 = pMVar20 + 1;
      local_178 = local_178 + 0x18;
    } while (pMVar20 != param_2);
  }
  return param_2;
}

// _Make_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6a970

/* WARNING: Removing unreachable block (ram,0x00014fa6aba4) */
/* WARNING: Removing unreachable block (ram,0x00014fa6ac9a) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Make_heap_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Make_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (longlong param_1,longlong param_2,undefined1 param_3)

{
  MapKey *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  MapKey *this_00;
  ulonglong uVar3;
  ulonglong uVar4;
  char *_Buf2;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  CppType CVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  basic_string_view<char,std::char_traits<char>_> *pbVar15;
  __int64 _Var16;
  __int64 _Var17;
  __uint64 _Var18;
  __uint64 _Var19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong _Size;
  longlong lVar23;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  basic_string_view<char,std::char_traits<char>_> local_80;
  basic_string_view<char,std::char_traits<char>_> local_70 [3];
  
  uVar4 = (param_2 - param_1) / 0x18;
  lVar21 = (longlong)uVar4 >> 1;
  if (0 < lVar21) {
    lVar20 = (longlong)(uVar4 - 1) >> 1;
    lVar14 = param_1 + lVar21 * 0x18;
    do {
      local_98 = *(undefined8 *)(lVar14 + -0x18);
      uStack_90 = *(undefined8 *)(lVar14 + -0x10);
      lVar21 = lVar21 + -1;
      local_88 = *(undefined8 *)(lVar14 + -8);
      lVar23 = lVar21;
      while (lVar23 < lVar20) {
        this_00 = (MapKey *)(param_1 + 0x18 + lVar23 * 0x30);
        this = (MapKey *)(param_1 + 0x30 + lVar23 * 0x30);
        lVar22 = lVar23 * 2 + 2;
        CVar9 = google::protobuf::MapKey::type(this);
        switch(CVar9) {
        case CPPTYPE_INT32:
          iVar10 = google::protobuf::MapKey::GetInt32Value(this);
          iVar11 = google::protobuf::MapKey::GetInt32Value(this_00);
          bVar8 = iVar10 < iVar11;
          break;
        case CPPTYPE_INT64:
          _Var16 = google::protobuf::MapKey::GetInt64Value(this);
          _Var17 = google::protobuf::MapKey::GetInt64Value(this_00);
          bVar8 = _Var16 < _Var17;
          break;
        case CPPTYPE_UINT32:
          uVar12 = google::protobuf::MapKey::GetUInt32Value(this);
          uVar13 = google::protobuf::MapKey::GetUInt32Value(this_00);
          bVar8 = uVar12 < uVar13;
          break;
        case CPPTYPE_UINT64:
          _Var18 = google::protobuf::MapKey::GetUInt64Value(this);
          _Var19 = google::protobuf::MapKey::GetUInt64Value(this_00);
          bVar8 = _Var18 < _Var19;
          break;
        default:
          goto LAB_14fa6abb4;
        case CPPTYPE_BOOL:
          bVar7 = google::protobuf::MapKey::GetBoolValue(this);
          bVar8 = google::protobuf::MapKey::GetBoolValue(this_00);
          bVar8 = bVar8 && !bVar7;
          break;
        case CPPTYPE_STRING:
          pbVar15 = google::protobuf::MapKey::GetStringValue(this_00,&local_80);
          _Buf2 = pbVar15->_Mydata;
          uVar5 = pbVar15->_Mysize;
          pbVar15 = google::protobuf::MapKey::GetStringValue(this,local_70);
          uVar3 = pbVar15->_Mysize;
          _Size = uVar3;
          if (uVar5 < uVar3) {
            _Size = uVar5;
          }
          iVar10 = memcmp(pbVar15->_Mydata,_Buf2,_Size);
          if (iVar10 == 0) {
            if (uVar3 < uVar5) {
              bVar8 = true;
            }
            else {
              if (uVar5 < uVar3) goto LAB_14fa6ab02;
              bVar8 = false;
            }
          }
          else if (iVar10 < 0) {
            bVar8 = true;
          }
          else {
LAB_14fa6ab02:
            bVar8 = false;
          }
        }
        if (bVar8) {
LAB_14fa6abb4:
          lVar22 = lVar23 * 2 + 1;
        }
        puVar1 = (undefined8 *)(param_1 + lVar22 * 0x18);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + lVar23 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(param_1 + 0x10 + lVar23 * 0x18) =
             *(undefined8 *)(param_1 + 0x10 + lVar22 * 0x18);
        lVar23 = lVar22;
      }
      if ((lVar23 == lVar20) && ((uVar4 & 1) == 0)) {
        puVar2 = (undefined8 *)(param_1 + -0x18 + uVar4 * 0x18);
        uVar6 = puVar2[1];
        puVar1 = (undefined8 *)(param_1 + lVar23 * 0x18);
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        *(undefined8 *)(param_1 + 0x10 + lVar23 * 0x18) =
             *(undefined8 *)(param_1 + -8 + uVar4 * 0x18);
        lVar23 = uVar4 - 1;
      }
      _Push_heap_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,lVar23,lVar21,&local_98,param_3);
      lVar14 = lVar14 + -0x18;
    } while (0 < lVar21);
  }
  return;
}

// _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6ace0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Med3_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (MapKey *param_1,MapKey *param_2,MapKey *param_3)

{
  ulong64 uVar1;
  char *pcVar2;
  ulong64 uVar3;
  undefined4 uVar4;
  CppType CVar5;
  undefined4 uVar6;
  bool bVar7;
  MapKeyComparator local_res20 [8];
  
  bVar7 = google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()
                    (local_res20,param_2,param_1);
  if (bVar7) {
    uVar1 = (param_1->val_).string_value._Mysize;
    pcVar2 = (param_2->val_).string_value._Mydata;
    uVar3 = (param_2->val_).string_value._Mysize;
    CVar5 = param_2->type_;
    uVar6 = *(undefined4 *)&param_2->field_0x14;
    (param_2->val_).string_value._Mydata = (param_1->val_).string_value._Mydata;
    (param_2->val_).string_value._Mysize = uVar1;
    uVar4 = *(undefined4 *)&param_1->field_0x14;
    param_2->type_ = param_1->type_;
    *(undefined4 *)&param_2->field_0x14 = uVar4;
    (param_1->val_).string_value._Mydata = pcVar2;
    (param_1->val_).string_value._Mysize = uVar3;
    param_1->type_ = CVar5;
    *(undefined4 *)&param_1->field_0x14 = uVar6;
  }
  bVar7 = google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()
                    (local_res20,param_3,param_2);
  if (bVar7) {
    uVar1 = (param_2->val_).string_value._Mysize;
    pcVar2 = (param_3->val_).string_value._Mydata;
    uVar3 = (param_3->val_).string_value._Mysize;
    CVar5 = param_3->type_;
    uVar6 = *(undefined4 *)&param_3->field_0x14;
    (param_3->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
    (param_3->val_).string_value._Mysize = uVar1;
    uVar4 = *(undefined4 *)&param_2->field_0x14;
    param_3->type_ = param_2->type_;
    *(undefined4 *)&param_3->field_0x14 = uVar4;
    (param_2->val_).string_value._Mydata = pcVar2;
    (param_2->val_).string_value._Mysize = uVar3;
    param_2->type_ = CVar5;
    *(undefined4 *)&param_2->field_0x14 = uVar6;
    bVar7 = google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()
                      (local_res20,param_2,param_1);
    if (bVar7) {
      uVar1 = (param_1->val_).string_value._Mysize;
      pcVar2 = (param_2->val_).string_value._Mydata;
      uVar3 = (param_2->val_).string_value._Mysize;
      CVar5 = param_2->type_;
      uVar6 = *(undefined4 *)&param_2->field_0x14;
      (param_2->val_).string_value._Mydata = (param_1->val_).string_value._Mydata;
      (param_2->val_).string_value._Mysize = uVar1;
      uVar4 = *(undefined4 *)&param_1->field_0x14;
      param_2->type_ = param_1->type_;
      *(undefined4 *)&param_2->field_0x14 = uVar4;
      (param_1->val_).string_value._Mydata = pcVar2;
      (param_1->val_).string_value._Mysize = uVar3;
      param_1->type_ = CVar5;
      *(undefined4 *)&param_1->field_0x14 = uVar6;
    }
  }
  return;
}

// _Merge_move<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6adb0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Merge_move<class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

Message ** __cdecl
std::
_Merge_move<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  bool bVar2;
  undefined8 *_Src;
  size_t _Size;
  
  _Src = param_2;
  do {
    while( true ) {
      _Dst = param_4 + 1;
      bVar2 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                        ((MapEntryMessageComparator *)&stack0x00000028,(Message *)*_Src,
                         (Message *)*param_1);
      if (bVar2) break;
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_4 = uVar1;
      param_4 = _Dst;
      if (param_1 == param_2) {
        _Size = (longlong)param_3 - (longlong)_Src;
        memmove(_Dst,_Src,_Size);
LAB_14fa6ae47:
        return (Message **)(_Size + (longlong)_Dst);
      }
    }
    uVar1 = *_Src;
    _Src = _Src + 1;
    *param_4 = uVar1;
    param_4 = _Dst;
  } while (_Src != param_3);
  _Size = (longlong)param_2 - (longlong)param_1;
  memmove(_Dst,param_1,_Size);
  goto LAB_14fa6ae47;
}

// _Move_backward_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6ae70

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Move_backward_unchecked<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64) */

Message ** __cdecl
std::
_Move_backward_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  Message **ppMVar1;
  
  ppMVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                    (longlong)param_2 - (longlong)param_1);
  return ppMVar1;
}

// _Move_backward_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64> @ 14fa6ae90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Move_backward_unchecked<class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64>(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl
std::_Move_backward_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey*___ptr64>
          (MapKey *param_1,MapKey *param_2,MapKey *param_3)

{
  MapKey *pMVar1;
  
  pMVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pMVar1;
}

// _Move_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6aeb0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Move_unchecked<class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) */

Message ** __cdecl
std::
_Move_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Message **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Next_iter<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6aef0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Next_iter<class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64) */

Message ** __cdecl
std::_Next_iter<google::protobuf::Message_const*___ptr64*___ptr64>(Message **param_1)

{
  return param_1 + 1;
}

// _Next_iter<google::protobuf::MapKey*___ptr64> @ 14fa6af00

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Next_iter<class google::protobuf::MapKey *
   __ptr64>(class google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl std::_Next_iter<google::protobuf::MapKey*___ptr64>(MapKey *param_1)

{
  return param_1 + 1;
}

// _Partition_by_median_guess_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6af10

/* WARNING: Removing unreachable block (ram,0x00014fa6bc8e) */
/* WARNING: Removing unreachable block (ram,0x00014fa6bc73) */
/* WARNING: Removing unreachable block (ram,0x00014fa6bb35) */
/* WARNING: Removing unreachable block (ram,0x00014fa6b811) */
/* WARNING: Removing unreachable block (ram,0x00014fa6bb0b) */
/* WARNING: Removing unreachable block (ram,0x00014fa6b833) */
/* WARNING: Removing unreachable block (ram,0x00014fa6bc7c) */
/* WARNING: Removing unreachable block (ram,0x00014fa6bc85) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* struct std::pair<class google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey *
   __ptr64> __cdecl std::_Partition_by_median_guess_unchecked<class google::protobuf::MapKey *
   __ptr64,class google::protobuf::internal::MapKeySorter::MapKeyComparator>(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Partition_by_median_guess_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (undefined8 *param_1,MapKey *param_2,MapKey *param_3,undefined1 param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  CppType CVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  basic_string_view<char,std::char_traits<char>_> *pbVar16;
  __int64 _Var17;
  __int64 _Var18;
  __uint64 _Var19;
  __uint64 _Var20;
  MapKey *pMVar21;
  MapKey *pMVar22;
  MapKey *this;
  MapKey *this_00;
  MapKey *pMVar23;
  ulonglong uVar24;
  MapKey *this_01;
  MapKey *pMVar25;
  basic_string_view<char,std::char_traits<char>_> local_148;
  basic_string_view<char,std::char_traits<char>_> local_138;
  basic_string_view<char,std::char_traits<char>_> local_128;
  basic_string_view<char,std::char_traits<char>_> local_118;
  basic_string_view<char,std::char_traits<char>_> local_108;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  basic_string_view<char,std::char_traits<char>_> local_b8 [7];
  
  pMVar22 = param_3 + -1;
  this = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x18 >> 1);
  lVar15 = ((longlong)pMVar22 - (longlong)param_2) / 0x18;
  pMVar21 = param_2;
  if (0x28 < lVar15) {
    lVar15 = lVar15 + 1 >> 3;
    pMVar21 = param_2 + lVar15;
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (param_2,pMVar21,param_2 + lVar15 * 2,param_4);
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (this + -lVar15,this,this + lVar15,param_4);
    pMVar22 = pMVar22 + -lVar15;
    _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (param_3 + -1 + lVar15 * -2,pMVar22,param_3 + -1,param_4);
  }
  _Med3_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (pMVar21,this,pMVar22,param_4);
  pMVar22 = this;
  if (param_2 < this) {
    do {
      pMVar21 = pMVar22 + -1;
      CVar10 = google::protobuf::MapKey::type(pMVar21);
      switch(CVar10) {
      case CPPTYPE_INT32:
        iVar11 = google::protobuf::MapKey::GetInt32Value(pMVar22);
        iVar12 = google::protobuf::MapKey::GetInt32Value(pMVar21);
        bVar8 = iVar12 < iVar11;
        break;
      case CPPTYPE_INT64:
        _Var17 = google::protobuf::MapKey::GetInt64Value(pMVar22);
        _Var18 = google::protobuf::MapKey::GetInt64Value(pMVar21);
        bVar8 = _Var18 < _Var17;
        break;
      case CPPTYPE_UINT32:
        uVar13 = google::protobuf::MapKey::GetUInt32Value(pMVar22);
        uVar14 = google::protobuf::MapKey::GetUInt32Value(pMVar21);
        bVar8 = uVar14 < uVar13;
        break;
      case CPPTYPE_UINT64:
        _Var19 = google::protobuf::MapKey::GetUInt64Value(pMVar22);
        _Var20 = google::protobuf::MapKey::GetUInt64Value(pMVar21);
        bVar8 = _Var20 < _Var19;
        break;
      default:
        goto joined_r0x00014fa6b2b0;
      case CPPTYPE_BOOL:
        bVar8 = google::protobuf::MapKey::GetBoolValue(pMVar22);
        bVar9 = google::protobuf::MapKey::GetBoolValue(pMVar21);
        bVar8 = !bVar9 && bVar8;
        break;
      case CPPTYPE_STRING:
        pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar22,&local_138);
        pcVar2 = pbVar16->_Mydata;
        uVar3 = pbVar16->_Mysize;
        pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar21,&local_128);
        uVar1 = pbVar16->_Mysize;
        uVar24 = uVar1;
        if (uVar3 < uVar1) {
          uVar24 = uVar3;
        }
        iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
        if (iVar11 == 0) {
          if (uVar1 < uVar3) {
            bVar8 = true;
          }
          else {
            if (uVar3 < uVar1) goto LAB_14fa6b0c7;
            bVar8 = false;
          }
        }
        else if (iVar11 < 0) {
          bVar8 = true;
        }
        else {
LAB_14fa6b0c7:
          bVar8 = false;
        }
      }
      if (bVar8) break;
      CVar10 = google::protobuf::MapKey::type(pMVar22);
      switch(CVar10) {
      case CPPTYPE_INT32:
        iVar11 = google::protobuf::MapKey::GetInt32Value(pMVar21);
        iVar12 = google::protobuf::MapKey::GetInt32Value(pMVar22);
        bVar8 = iVar12 < iVar11;
        break;
      case CPPTYPE_INT64:
        _Var17 = google::protobuf::MapKey::GetInt64Value(pMVar21);
        _Var18 = google::protobuf::MapKey::GetInt64Value(pMVar22);
        bVar8 = _Var18 < _Var17;
        break;
      case CPPTYPE_UINT32:
        uVar13 = google::protobuf::MapKey::GetUInt32Value(pMVar21);
        uVar14 = google::protobuf::MapKey::GetUInt32Value(pMVar22);
        bVar8 = uVar14 < uVar13;
        break;
      case CPPTYPE_UINT64:
        _Var19 = google::protobuf::MapKey::GetUInt64Value(pMVar21);
        _Var20 = google::protobuf::MapKey::GetUInt64Value(pMVar22);
        bVar8 = _Var20 < _Var19;
        break;
      default:
        goto joined_r0x00014fa6b2b0;
      case CPPTYPE_BOOL:
        bVar8 = google::protobuf::MapKey::GetBoolValue(pMVar21);
        bVar9 = google::protobuf::MapKey::GetBoolValue(pMVar22);
        bVar8 = !bVar9 && bVar8;
        break;
      case CPPTYPE_STRING:
        pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar21,&local_118);
        pcVar2 = pbVar16->_Mydata;
        uVar3 = pbVar16->_Mysize;
        pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar22,&local_148);
        uVar1 = pbVar16->_Mysize;
        uVar24 = uVar1;
        if (uVar3 < uVar1) {
          uVar24 = uVar3;
        }
        iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
        if (iVar11 == 0) {
          if (uVar1 < uVar3) {
            bVar8 = true;
          }
          else {
            if (uVar3 < uVar1) goto LAB_14fa6b1f8;
            bVar8 = false;
          }
        }
        else if (iVar11 < 0) {
          bVar8 = true;
        }
        else {
LAB_14fa6b1f8:
          bVar8 = false;
        }
      }
      if ((bVar8) || (pMVar22 = pMVar21, pMVar21 <= param_2)) break;
    } while( true );
  }
joined_r0x00014fa6b2b0:
  do {
    this = this + 1;
    if (param_3 <= this) break;
    CVar10 = google::protobuf::MapKey::type(this);
    switch(CVar10) {
    case CPPTYPE_INT32:
      iVar11 = google::protobuf::MapKey::GetInt32Value(pMVar22);
      iVar12 = google::protobuf::MapKey::GetInt32Value(this);
      bVar8 = iVar12 < iVar11;
      break;
    case CPPTYPE_INT64:
      _Var17 = google::protobuf::MapKey::GetInt64Value(pMVar22);
      _Var18 = google::protobuf::MapKey::GetInt64Value(this);
      bVar8 = _Var18 < _Var17;
      break;
    case CPPTYPE_UINT32:
      uVar13 = google::protobuf::MapKey::GetUInt32Value(pMVar22);
      uVar14 = google::protobuf::MapKey::GetUInt32Value(this);
      bVar8 = uVar14 < uVar13;
      break;
    case CPPTYPE_UINT64:
      _Var19 = google::protobuf::MapKey::GetUInt64Value(pMVar22);
      _Var20 = google::protobuf::MapKey::GetUInt64Value(this);
      bVar8 = _Var20 < _Var19;
      break;
    default:
      goto switchD_14fa6b2e2_caseD_5;
    case CPPTYPE_BOOL:
      bVar8 = google::protobuf::MapKey::GetBoolValue(pMVar22);
      bVar9 = google::protobuf::MapKey::GetBoolValue(this);
      bVar8 = !bVar9 && bVar8;
      break;
    case CPPTYPE_STRING:
      pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar22,&local_148);
      pcVar2 = pbVar16->_Mydata;
      uVar3 = pbVar16->_Mysize;
      pbVar16 = google::protobuf::MapKey::GetStringValue(this,&local_118);
      uVar1 = pbVar16->_Mysize;
      uVar24 = uVar1;
      if (uVar3 < uVar1) {
        uVar24 = uVar3;
      }
      iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
      if (iVar11 == 0) {
        if (uVar1 < uVar3) {
          bVar8 = true;
        }
        else {
          if (uVar3 < uVar1) goto LAB_14fa6b355;
          bVar8 = false;
        }
      }
      else if (iVar11 < 0) {
        bVar8 = true;
      }
      else {
LAB_14fa6b355:
        bVar8 = false;
      }
    }
    if (bVar8) break;
    CVar10 = google::protobuf::MapKey::type(pMVar22);
    switch(CVar10) {
    case CPPTYPE_INT32:
      iVar11 = google::protobuf::MapKey::GetInt32Value(pMVar22);
      iVar12 = google::protobuf::MapKey::GetInt32Value(this);
      bVar8 = iVar11 < iVar12;
      break;
    case CPPTYPE_INT64:
      _Var17 = google::protobuf::MapKey::GetInt64Value(pMVar22);
      _Var18 = google::protobuf::MapKey::GetInt64Value(this);
      bVar8 = _Var17 < _Var18;
      break;
    case CPPTYPE_UINT32:
      uVar13 = google::protobuf::MapKey::GetUInt32Value(pMVar22);
      uVar14 = google::protobuf::MapKey::GetUInt32Value(this);
      bVar8 = uVar13 < uVar14;
      break;
    case CPPTYPE_UINT64:
      _Var19 = google::protobuf::MapKey::GetUInt64Value(pMVar22);
      _Var20 = google::protobuf::MapKey::GetUInt64Value(this);
      bVar8 = _Var19 < _Var20;
      break;
    default:
      goto switchD_14fa6b2e2_caseD_5;
    case CPPTYPE_BOOL:
      bVar9 = google::protobuf::MapKey::GetBoolValue(pMVar22);
      bVar8 = google::protobuf::MapKey::GetBoolValue(this);
      bVar8 = bVar8 && !bVar9;
      break;
    case CPPTYPE_STRING:
      pbVar16 = google::protobuf::MapKey::GetStringValue(this,&local_128);
      pcVar2 = pbVar16->_Mydata;
      uVar3 = pbVar16->_Mysize;
      pbVar16 = google::protobuf::MapKey::GetStringValue(pMVar22,&local_138);
      uVar1 = pbVar16->_Mysize;
      uVar24 = uVar1;
      if (uVar3 < uVar1) {
        uVar24 = uVar3;
      }
      iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
      if (iVar11 == 0) {
        if (uVar1 < uVar3) {
          bVar8 = true;
        }
        else {
          if (uVar3 < uVar1) goto LAB_14fa6b486;
          bVar8 = false;
        }
      }
      else if (iVar11 < 0) {
        bVar8 = true;
      }
      else {
LAB_14fa6b486:
        bVar8 = false;
      }
    }
  } while (!bVar8);
switchD_14fa6b2e2_caseD_5:
  pMVar21 = this;
  this_00 = pMVar22;
  do {
    while (pMVar25 = pMVar22, param_3 <= this) {
joined_r0x00014fa6b84c:
      for (; param_2 < pMVar22; pMVar22 = pMVar22 + -1) {
        this_01 = pMVar25 + -1;
        CVar10 = google::protobuf::MapKey::type(this_01);
        pMVar23 = this_00;
        switch(CVar10) {
        case CPPTYPE_INT32:
          iVar11 = google::protobuf::MapKey::GetInt32Value(this_00);
          iVar12 = google::protobuf::MapKey::GetInt32Value(this_01);
          bVar8 = iVar12 < iVar11;
          break;
        case CPPTYPE_INT64:
          _Var17 = google::protobuf::MapKey::GetInt64Value(this_00);
          _Var18 = google::protobuf::MapKey::GetInt64Value(this_01);
          bVar8 = _Var18 < _Var17;
          break;
        case CPPTYPE_UINT32:
          uVar13 = google::protobuf::MapKey::GetUInt32Value(this_00);
          uVar14 = google::protobuf::MapKey::GetUInt32Value(this_01);
          bVar8 = uVar14 < uVar13;
          break;
        case CPPTYPE_UINT64:
          _Var19 = google::protobuf::MapKey::GetUInt64Value(this_00);
          _Var20 = google::protobuf::MapKey::GetUInt64Value(this_01);
          bVar8 = _Var20 < _Var19;
          break;
        default:
          goto LAB_14fa6bb18;
        case CPPTYPE_BOOL:
          bVar8 = google::protobuf::MapKey::GetBoolValue(this_00);
          bVar9 = google::protobuf::MapKey::GetBoolValue(this_01);
          bVar8 = !bVar9 && bVar8;
          break;
        case CPPTYPE_STRING:
          pbVar16 = google::protobuf::MapKey::GetStringValue(this_00,&local_e8);
          pcVar2 = pbVar16->_Mydata;
          uVar3 = pbVar16->_Mysize;
          pbVar16 = google::protobuf::MapKey::GetStringValue(this_01,&local_d8);
          uVar1 = pbVar16->_Mysize;
          uVar24 = uVar1;
          if (uVar3 < uVar1) {
            uVar24 = uVar3;
          }
          iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
          if (iVar11 == 0) {
            if (uVar1 < uVar3) {
              bVar8 = true;
            }
            else {
              if (uVar3 < uVar1) goto LAB_14fa6b8fe;
              bVar8 = false;
            }
          }
          else if (iVar11 < 0) {
            bVar8 = true;
          }
          else {
LAB_14fa6b8fe:
            bVar8 = false;
          }
        }
        if (!bVar8) {
          CVar10 = google::protobuf::MapKey::type(this_00);
          switch(CVar10) {
          case CPPTYPE_INT32:
            iVar11 = google::protobuf::MapKey::GetInt32Value(this_00);
            iVar12 = google::protobuf::MapKey::GetInt32Value(this_01);
            bVar8 = iVar11 < iVar12;
            break;
          case CPPTYPE_INT64:
            _Var17 = google::protobuf::MapKey::GetInt64Value(this_00);
            _Var18 = google::protobuf::MapKey::GetInt64Value(this_01);
            bVar8 = _Var17 < _Var18;
            break;
          case CPPTYPE_UINT32:
            uVar13 = google::protobuf::MapKey::GetUInt32Value(this_00);
            uVar14 = google::protobuf::MapKey::GetUInt32Value(this_01);
            bVar8 = uVar13 < uVar14;
            break;
          case CPPTYPE_UINT64:
            _Var19 = google::protobuf::MapKey::GetUInt64Value(this_00);
            _Var20 = google::protobuf::MapKey::GetUInt64Value(this_01);
            bVar8 = _Var19 < _Var20;
            break;
          default:
            goto LAB_14fa6bb4c;
          case CPPTYPE_BOOL:
            bVar9 = google::protobuf::MapKey::GetBoolValue(this_00);
            bVar8 = google::protobuf::MapKey::GetBoolValue(this_01);
            bVar8 = bVar8 && !bVar9;
            break;
          case CPPTYPE_STRING:
            pbVar16 = google::protobuf::MapKey::GetStringValue(this_01,&local_c8);
            pcVar2 = pbVar16->_Mydata;
            uVar3 = pbVar16->_Mysize;
            pbVar16 = google::protobuf::MapKey::GetStringValue(this_00,local_b8);
            uVar1 = pbVar16->_Mysize;
            uVar24 = uVar1;
            if (uVar3 < uVar1) {
              uVar24 = uVar3;
            }
            iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
            if (iVar11 == 0) {
              if (uVar1 < uVar3) {
                bVar8 = true;
              }
              else {
                if (uVar3 < uVar1) goto LAB_14fa6ba3e;
                bVar8 = false;
              }
            }
            else if (iVar11 < 0) {
              bVar8 = true;
            }
            else {
LAB_14fa6ba3e:
              bVar8 = false;
            }
          }
          if (bVar8) break;
          pMVar23 = this_00 + -1;
          if (pMVar23 != this_01) {
            uVar4 = pMVar25[-1].val_.string_value._Mysize;
            pcVar2 = (pMVar23->val_).string_value._Mydata;
            uVar5 = this_00[-1].val_.string_value._Mysize;
            CVar10 = this_00[-1].type_;
            uVar7 = *(undefined4 *)&this_00[-1].field_0x14;
            (pMVar23->val_).string_value._Mydata = (this_01->val_).string_value._Mydata;
            this_00[-1].val_.string_value._Mysize = uVar4;
            uVar6 = *(undefined4 *)&pMVar25[-1].field_0x14;
            this_00[-1].type_ = pMVar25[-1].type_;
            *(undefined4 *)&this_00[-1].field_0x14 = uVar6;
            (this_01->val_).string_value._Mydata = pcVar2;
            pMVar25[-1].val_.string_value._Mysize = uVar5;
            pMVar25[-1].type_ = CVar10;
            *(undefined4 *)&pMVar25[-1].field_0x14 = uVar7;
          }
        }
LAB_14fa6bb18:
        this_00 = pMVar23;
        pMVar25 = this_01;
      }
LAB_14fa6bb4c:
      if (pMVar22 == param_2) {
        if (this == param_3) {
          *param_1 = this_00;
          param_1[1] = pMVar21;
          return;
        }
        if (pMVar21 != this) {
          uVar4 = (pMVar21->val_).string_value._Mysize;
          pcVar2 = (this_00->val_).string_value._Mydata;
          uVar5 = (this_00->val_).string_value._Mysize;
          CVar10 = this_00->type_;
          uVar7 = *(undefined4 *)&this_00->field_0x14;
          (this_00->val_).string_value._Mydata = (pMVar21->val_).string_value._Mydata;
          (this_00->val_).string_value._Mysize = uVar4;
          uVar6 = *(undefined4 *)&pMVar21->field_0x14;
          this_00->type_ = pMVar21->type_;
          *(undefined4 *)&this_00->field_0x14 = uVar6;
          (pMVar21->val_).string_value._Mydata = pcVar2;
          (pMVar21->val_).string_value._Mysize = uVar5;
          pMVar21->type_ = CVar10;
          *(undefined4 *)&pMVar21->field_0x14 = uVar7;
        }
        uVar4 = (this->val_).string_value._Mysize;
        pcVar2 = (this_00->val_).string_value._Mydata;
        uVar5 = (this_00->val_).string_value._Mysize;
        CVar10 = this_00->type_;
        uVar7 = *(undefined4 *)&this_00->field_0x14;
        (this_00->val_).string_value._Mydata = (this->val_).string_value._Mydata;
        (this_00->val_).string_value._Mysize = uVar4;
        uVar6 = *(undefined4 *)&this->field_0x14;
        this_00->type_ = this->type_;
        *(undefined4 *)&this_00->field_0x14 = uVar6;
        (this->val_).string_value._Mydata = pcVar2;
        (this->val_).string_value._Mysize = uVar5;
        this->type_ = CVar10;
        *(undefined4 *)&this->field_0x14 = uVar7;
        this = this + 1;
        pMVar21 = pMVar21 + 1;
        this_00 = this_00 + 1;
      }
      else {
        pMVar25 = pMVar22 + -1;
        if (this == param_3) {
          pMVar23 = this_00 + -1;
          if (pMVar25 != pMVar23) {
            uVar4 = this_00[-1].val_.string_value._Mysize;
            pcVar2 = (pMVar25->val_).string_value._Mydata;
            uVar5 = pMVar22[-1].val_.string_value._Mysize;
            CVar10 = pMVar22[-1].type_;
            uVar7 = *(undefined4 *)&pMVar22[-1].field_0x14;
            (pMVar25->val_).string_value._Mydata = (pMVar23->val_).string_value._Mydata;
            pMVar22[-1].val_.string_value._Mysize = uVar4;
            uVar6 = *(undefined4 *)&this_00[-1].field_0x14;
            pMVar22[-1].type_ = this_00[-1].type_;
            *(undefined4 *)&pMVar22[-1].field_0x14 = uVar6;
            (pMVar23->val_).string_value._Mydata = pcVar2;
            this_00[-1].val_.string_value._Mysize = uVar5;
            this_00[-1].type_ = CVar10;
            *(undefined4 *)&this_00[-1].field_0x14 = uVar7;
          }
          uVar4 = pMVar21[-1].val_.string_value._Mysize;
          pcVar2 = (pMVar23->val_).string_value._Mydata;
          uVar5 = this_00[-1].val_.string_value._Mysize;
          CVar10 = this_00[-1].type_;
          uVar7 = *(undefined4 *)&this_00[-1].field_0x14;
          (pMVar23->val_).string_value._Mydata = pMVar21[-1].val_.string_value._Mydata;
          this_00[-1].val_.string_value._Mysize = uVar4;
          uVar6 = *(undefined4 *)&pMVar21[-1].field_0x14;
          this_00[-1].type_ = pMVar21[-1].type_;
          *(undefined4 *)&this_00[-1].field_0x14 = uVar6;
          pMVar21[-1].val_.string_value._Mydata = pcVar2;
          pMVar21[-1].val_.string_value._Mysize = uVar5;
          pMVar21[-1].type_ = CVar10;
          *(undefined4 *)&pMVar21[-1].field_0x14 = uVar7;
          pMVar21 = pMVar21 + -1;
          pMVar22 = pMVar25;
          this_00 = pMVar23;
        }
        else {
          pcVar2 = (this->val_).string_value._Mydata;
          uVar4 = (this->val_).string_value._Mysize;
          CVar10 = this->type_;
          uVar7 = *(undefined4 *)&this->field_0x14;
          uVar5 = pMVar22[-1].val_.string_value._Mysize;
          (this->val_).string_value._Mydata = (pMVar25->val_).string_value._Mydata;
          (this->val_).string_value._Mysize = uVar5;
          uVar6 = *(undefined4 *)&pMVar22[-1].field_0x14;
          this->type_ = pMVar22[-1].type_;
          *(undefined4 *)&this->field_0x14 = uVar6;
          this = this + 1;
          (pMVar25->val_).string_value._Mydata = pcVar2;
          pMVar22[-1].val_.string_value._Mysize = uVar4;
          pMVar22[-1].type_ = CVar10;
          *(undefined4 *)&pMVar22[-1].field_0x14 = uVar7;
          pMVar22 = pMVar25;
        }
      }
    }
    CVar10 = google::protobuf::MapKey::type(this_00);
    switch(CVar10) {
    case CPPTYPE_INT32:
      iVar11 = google::protobuf::MapKey::GetInt32Value(this_00);
      iVar12 = google::protobuf::MapKey::GetInt32Value(this);
      bVar8 = iVar11 < iVar12;
      break;
    case CPPTYPE_INT64:
      _Var17 = google::protobuf::MapKey::GetInt64Value(this_00);
      _Var18 = google::protobuf::MapKey::GetInt64Value(this);
      bVar8 = _Var17 < _Var18;
      break;
    case CPPTYPE_UINT32:
      uVar13 = google::protobuf::MapKey::GetUInt32Value(this_00);
      uVar14 = google::protobuf::MapKey::GetUInt32Value(this);
      bVar8 = uVar13 < uVar14;
      break;
    case CPPTYPE_UINT64:
      _Var19 = google::protobuf::MapKey::GetUInt64Value(this_00);
      _Var20 = google::protobuf::MapKey::GetUInt64Value(this);
      bVar8 = _Var19 < _Var20;
      break;
    default:
      goto LAB_14fa6b81f;
    case CPPTYPE_BOOL:
      bVar9 = google::protobuf::MapKey::GetBoolValue(this_00);
      bVar8 = google::protobuf::MapKey::GetBoolValue(this);
      bVar8 = bVar8 && !bVar9;
      break;
    case CPPTYPE_STRING:
      pbVar16 = google::protobuf::MapKey::GetStringValue(this,&local_f8);
      pcVar2 = pbVar16->_Mydata;
      uVar3 = pbVar16->_Mysize;
      pbVar16 = google::protobuf::MapKey::GetStringValue(this_00,&local_108);
      uVar1 = pbVar16->_Mysize;
      uVar24 = uVar1;
      if (uVar3 < uVar1) {
        uVar24 = uVar3;
      }
      iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
      if (iVar11 == 0) {
        if (uVar1 < uVar3) {
          bVar8 = true;
        }
        else {
          if (uVar3 < uVar1) goto LAB_14fa6b5f0;
          bVar8 = false;
        }
      }
      else if (iVar11 < 0) {
        bVar8 = true;
      }
      else {
LAB_14fa6b5f0:
        bVar8 = false;
      }
    }
    if (!bVar8) {
      CVar10 = google::protobuf::MapKey::type(this);
      switch(CVar10) {
      case CPPTYPE_INT32:
        iVar11 = google::protobuf::MapKey::GetInt32Value(this_00);
        iVar12 = google::protobuf::MapKey::GetInt32Value(this);
        bVar8 = iVar12 < iVar11;
        break;
      case CPPTYPE_INT64:
        _Var17 = google::protobuf::MapKey::GetInt64Value(this_00);
        _Var18 = google::protobuf::MapKey::GetInt64Value(this);
        bVar8 = _Var18 < _Var17;
        break;
      case CPPTYPE_UINT32:
        uVar13 = google::protobuf::MapKey::GetUInt32Value(this_00);
        uVar14 = google::protobuf::MapKey::GetUInt32Value(this);
        bVar8 = uVar14 < uVar13;
        break;
      case CPPTYPE_UINT64:
        _Var19 = google::protobuf::MapKey::GetUInt64Value(this_00);
        _Var20 = google::protobuf::MapKey::GetUInt64Value(this);
        bVar8 = _Var20 < _Var19;
        break;
      default:
        goto joined_r0x00014fa6b84c;
      case CPPTYPE_BOOL:
        bVar8 = google::protobuf::MapKey::GetBoolValue(this_00);
        bVar9 = google::protobuf::MapKey::GetBoolValue(this);
        bVar8 = !bVar9 && bVar8;
        break;
      case CPPTYPE_STRING:
        pbVar16 = google::protobuf::MapKey::GetStringValue(this_00,&local_148);
        pcVar2 = pbVar16->_Mydata;
        uVar3 = pbVar16->_Mysize;
        pbVar16 = google::protobuf::MapKey::GetStringValue(this,&local_118);
        uVar1 = pbVar16->_Mysize;
        uVar24 = uVar1;
        if (uVar3 < uVar1) {
          uVar24 = uVar3;
        }
        iVar11 = memcmp(pbVar16->_Mydata,pcVar2,uVar24);
        if (iVar11 == 0) {
          if (uVar1 < uVar3) {
            bVar8 = true;
          }
          else {
            if (uVar3 < uVar1) goto LAB_14fa6b73d;
            bVar8 = false;
          }
        }
        else if (iVar11 < 0) {
          bVar8 = true;
        }
        else {
LAB_14fa6b73d:
          bVar8 = false;
        }
      }
      if (bVar8) goto joined_r0x00014fa6b84c;
      if (pMVar21 != this) {
        uVar4 = (this->val_).string_value._Mysize;
        pcVar2 = (pMVar21->val_).string_value._Mydata;
        uVar5 = (pMVar21->val_).string_value._Mysize;
        CVar10 = pMVar21->type_;
        uVar7 = *(undefined4 *)&pMVar21->field_0x14;
        (pMVar21->val_).string_value._Mydata = (this->val_).string_value._Mydata;
        (pMVar21->val_).string_value._Mysize = uVar4;
        uVar6 = *(undefined4 *)&this->field_0x14;
        pMVar21->type_ = this->type_;
        *(undefined4 *)&pMVar21->field_0x14 = uVar6;
        (this->val_).string_value._Mydata = pcVar2;
        (this->val_).string_value._Mysize = uVar5;
        this->type_ = CVar10;
        *(undefined4 *)&this->field_0x14 = uVar7;
      }
      pMVar21 = pMVar21 + 1;
    }
LAB_14fa6b81f:
    this = this + 1;
  } while( true );
}

// _Pass_fn<google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6bdc0

/* UNKNOWN __cdecl std::_Pass_fn<class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator & __ptr64) */

MapEntryMessageComparator * __cdecl
std::_Pass_fn<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (MapEntryMessageComparator *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return param_1;
}

// _Pass_fn<google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6bdd0

/* UNKNOWN __cdecl std::_Pass_fn<class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class
   google::protobuf::internal::MapKeySorter::MapKeyComparator & __ptr64) */

MapKeyComparator __cdecl
std::_Pass_fn<google::protobuf::internal::MapKeySorter::MapKeyComparator>(MapKeyComparator *param_1)

{
  return *param_1;
}

// _Pocma<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6bde0

/* void __cdecl std::_Pocma<class std::allocator<class google::protobuf::Message const * __ptr64>
   >(class std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64) */

void __cdecl
std::_Pocma<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (allocator<google::protobuf::Message_const*___ptr64> *param_1,
          allocator<google::protobuf::Message_const*___ptr64> *param_2)

{
  return;
}

// _Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6bdf0

/* WARNING: Removing unreachable block (ram,0x00014fa6bfc1) */
/* WARNING: Removing unreachable block (ram,0x00014fa6c097) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Pop_heap_hole_by_index<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey,class google::protobuf::internal::MapKeySorter::MapKeyComparator>(class
   google::protobuf::MapKey * __ptr64,__int64,__int64,class google::protobuf::MapKey &&
   __ptr64,class google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  MapKey *this;
  MapKey *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char *_Buf2;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  CppType CVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  basic_string_view<char,std::char_traits<char>_> *pbVar13;
  __int64 _Var14;
  __int64 _Var15;
  __uint64 _Var16;
  __uint64 _Var17;
  longlong lVar18;
  ulonglong _Size;
  longlong lVar19;
  longlong lVar20;
  basic_string_view<char,std::char_traits<char>_> local_80;
  basic_string_view<char,std::char_traits<char>_> local_70 [3];
  
  lVar19 = (longlong)(param_3 - 1) >> 1;
  lVar20 = param_2;
  do {
    if (lVar19 <= lVar20) {
      if ((lVar20 == lVar19) && ((param_3 & 1) == 0)) {
        puVar1 = (undefined8 *)(param_1 + -0x18 + param_3 * 0x18);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + lVar20 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        *(undefined8 *)(param_1 + 0x10 + lVar20 * 0x18) =
             *(undefined8 *)(param_1 + -8 + param_3 * 0x18);
        lVar20 = param_3 - 1;
      }
      _Push_heap_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,lVar20,param_2,param_4);
      return;
    }
    this = (MapKey *)(param_1 + 0x18 + lVar20 * 0x30);
    this_00 = (MapKey *)(param_1 + 0x30 + lVar20 * 0x30);
    lVar18 = lVar20 * 2 + 2;
    CVar8 = google::protobuf::MapKey::type(this_00);
    switch(CVar8) {
    case CPPTYPE_INT32:
      iVar9 = google::protobuf::MapKey::GetInt32Value(this_00);
      iVar10 = google::protobuf::MapKey::GetInt32Value(this);
      bVar7 = iVar9 < iVar10;
      break;
    case CPPTYPE_INT64:
      _Var14 = google::protobuf::MapKey::GetInt64Value(this_00);
      _Var15 = google::protobuf::MapKey::GetInt64Value(this);
      bVar7 = _Var14 < _Var15;
      break;
    case CPPTYPE_UINT32:
      uVar11 = google::protobuf::MapKey::GetUInt32Value(this_00);
      uVar12 = google::protobuf::MapKey::GetUInt32Value(this);
      bVar7 = uVar11 < uVar12;
      break;
    case CPPTYPE_UINT64:
      _Var16 = google::protobuf::MapKey::GetUInt64Value(this_00);
      _Var17 = google::protobuf::MapKey::GetUInt64Value(this);
      bVar7 = _Var16 < _Var17;
      break;
    default:
      goto LAB_14fa6bfce;
    case CPPTYPE_BOOL:
      bVar6 = google::protobuf::MapKey::GetBoolValue(this_00);
      bVar7 = google::protobuf::MapKey::GetBoolValue(this);
      bVar7 = bVar7 && !bVar6;
      break;
    case CPPTYPE_STRING:
      pbVar13 = google::protobuf::MapKey::GetStringValue(this,&local_80);
      _Buf2 = pbVar13->_Mydata;
      uVar4 = pbVar13->_Mysize;
      pbVar13 = google::protobuf::MapKey::GetStringValue(this_00,local_70);
      uVar3 = pbVar13->_Mysize;
      _Size = uVar3;
      if (uVar4 < uVar3) {
        _Size = uVar4;
      }
      iVar9 = memcmp(pbVar13->_Mydata,_Buf2,_Size);
      if (iVar9 == 0) {
        if (uVar3 < uVar4) {
          bVar7 = true;
        }
        else {
          if (uVar4 < uVar3) goto LAB_14fa6bf1f;
          bVar7 = false;
        }
      }
      else if (iVar9 < 0) {
        bVar7 = true;
      }
      else {
LAB_14fa6bf1f:
        bVar7 = false;
      }
    }
    if (bVar7) {
LAB_14fa6bfce:
      lVar18 = lVar20 * 2 + 1;
    }
    puVar1 = (undefined8 *)(param_1 + lVar18 * 0x18);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar20 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(param_1 + 0x10 + lVar20 * 0x18) =
         *(undefined8 *)(param_1 + 0x10 + lVar18 * 0x18);
    lVar20 = lVar18;
  } while( true );
}

// _Pop_heap_hole_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6c0d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Pop_heap_hole_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey,class google::protobuf::internal::MapKeySorter::MapKeyComparator>(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey && __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Pop_heap_hole_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
  _Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (uVar1,0,(param_2 - (longlong)param_1) / 0x18);
  return;
}

// _Pop_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6c120

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Pop_heap_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Pop_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (undefined4 *param_1,longlong param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < (param_2 - (longlong)param_1) / 0x18) {
    local_28 = *(undefined8 *)(param_2 + -0x18);
    uStack_20 = *(undefined8 *)(param_2 + -0x10);
    local_18 = *(undefined8 *)(param_2 + -8);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)(param_2 + -0x18) = uVar1;
    *(undefined4 *)(param_2 + -0x14) = uVar2;
    *(undefined4 *)(param_2 + -0x10) = uVar3;
    *(undefined4 *)(param_2 + -0xc) = uVar4;
    *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_1 + 4);
    _Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (uVar1,0,((param_2 + -0x18) - (longlong)param_1) / 0x18,&local_28,param_3);
  }
  return;
}

// _Prev_iter<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6c1c0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Prev_iter<class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64) */

Message ** __cdecl
std::_Prev_iter<google::protobuf::Message_const*___ptr64*___ptr64>(Message **param_1)

{
  return param_1 + -1;
}

// _Prev_iter<google::protobuf::MapKey*___ptr64> @ 14fa6c1d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Prev_iter<class google::protobuf::MapKey *
   __ptr64>(class google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl std::_Prev_iter<google::protobuf::MapKey*___ptr64>(MapKey *param_1)

{
  return param_1 + -1;
}

// _Push_heap_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6c1e0

/* WARNING: Removing unreachable block (ram,0x00014fa6c382) */
/* WARNING: Removing unreachable block (ram,0x00014fa6c3f5) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Push_heap_by_index<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey,class google::protobuf::internal::MapKeySorter::MapKeyComparator>(class
   google::protobuf::MapKey * __ptr64,__int64,__int64,class google::protobuf::MapKey &&
   __ptr64,class google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Push_heap_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (longlong param_1,longlong param_2,longlong param_3,MapKey *param_4)

{
  MapKey *this;
  undefined8 *puVar1;
  ulonglong uVar2;
  char *_Buf2;
  ulonglong uVar3;
  ulong64 uVar4;
  bool bVar5;
  bool bVar6;
  CppType CVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  basic_string_view<char,std::char_traits<char>_> *pbVar12;
  __int64 _Var13;
  __int64 _Var14;
  __uint64 _Var15;
  __uint64 _Var16;
  longlong lVar17;
  ulonglong _Size;
  basic_string_view<char,std::char_traits<char>_> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58 [3];
  
  while (param_3 < param_2) {
    lVar17 = param_2 + -1 >> 1;
    this = (MapKey *)(param_1 + lVar17 * 0x18);
    CVar7 = google::protobuf::MapKey::type(this);
    switch(CVar7) {
    case CPPTYPE_INT32:
      iVar8 = google::protobuf::MapKey::GetInt32Value(this);
      iVar9 = google::protobuf::MapKey::GetInt32Value(param_4);
      bVar6 = iVar8 < iVar9;
      break;
    case CPPTYPE_INT64:
      _Var13 = google::protobuf::MapKey::GetInt64Value(this);
      _Var14 = google::protobuf::MapKey::GetInt64Value(param_4);
      bVar6 = _Var13 < _Var14;
      break;
    case CPPTYPE_UINT32:
      uVar10 = google::protobuf::MapKey::GetUInt32Value(this);
      uVar11 = google::protobuf::MapKey::GetUInt32Value(param_4);
      bVar6 = uVar10 < uVar11;
      break;
    case CPPTYPE_UINT64:
      _Var15 = google::protobuf::MapKey::GetUInt64Value(this);
      _Var16 = google::protobuf::MapKey::GetUInt64Value(param_4);
      bVar6 = _Var15 < _Var16;
      break;
    default:
      goto LAB_14fa6c38f;
    case CPPTYPE_BOOL:
      bVar5 = google::protobuf::MapKey::GetBoolValue(this);
      bVar6 = google::protobuf::MapKey::GetBoolValue(param_4);
      bVar6 = bVar6 && !bVar5;
      break;
    case CPPTYPE_STRING:
      pbVar12 = google::protobuf::MapKey::GetStringValue(param_4,&local_68);
      _Buf2 = pbVar12->_Mydata;
      uVar3 = pbVar12->_Mysize;
      pbVar12 = google::protobuf::MapKey::GetStringValue(this,local_58);
      uVar2 = pbVar12->_Mysize;
      _Size = uVar2;
      if (uVar3 < uVar2) {
        _Size = uVar3;
      }
      iVar8 = memcmp(pbVar12->_Mydata,_Buf2,_Size);
      if (iVar8 == 0) {
        if (uVar2 < uVar3) {
          bVar6 = true;
        }
        else {
          if (uVar3 < uVar2) goto LAB_14fa6c2d9;
          bVar6 = false;
        }
      }
      else if (iVar8 < 0) {
        bVar6 = true;
      }
      else {
LAB_14fa6c2d9:
        bVar6 = false;
      }
    }
    if (!bVar6) break;
LAB_14fa6c38f:
    uVar4 = (this->val_).string_value._Mysize;
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
    *puVar1 = (this->val_).string_value._Mydata;
    puVar1[1] = uVar4;
    *(undefined8 *)(param_1 + 0x10 + param_2 * 0x18) = *(undefined8 *)&this->type_;
    param_2 = lVar17;
  }
  uVar4 = (param_4->val_).string_value._Mysize;
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
  *puVar1 = (param_4->val_).string_value._Mydata;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + 0x10 + param_2 * 0x18) = *(undefined8 *)&param_4->type_;
  return;
}

// _Reallocate<0> @ 14fa6c430

/* private: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::_Reallocate<0>(unsigned
   __int64 & __ptr64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Reallocate<0>(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                 *this,__uint64 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  Message **_Dst;
  
  lVar1 = *(longlong *)(this + 8);
  lVar2 = *(longlong *)this;
  _Dst = _Allocate_at_least_helper<std::allocator<google::protobuf::Message_const*___ptr64>_>
                   ((allocator<google::protobuf::Message_const*___ptr64> *)this,param_1);
  memmove(_Dst,*(void **)this,*(longlong *)(this + 8) - (longlong)*(void **)this);
  _Change_array(this,_Dst,lVar1 - lVar2 >> 3,*param_1);
  return;
}

// _Return_temporary_buffer<google::protobuf::Message_const*___ptr64> @ 14fa6c4a0

/* void __cdecl std::_Return_temporary_buffer<class google::protobuf::Message const * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const) */

void __cdecl
std::_Return_temporary_buffer<google::protobuf::Message_const*___ptr64>(Message **param_1)

{
  ::operator_delete(param_1);
  return;
}

// _Rotate_one_left<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6c4b0

/* void __cdecl std::_Rotate_one_left<class google::protobuf::Message const * __ptr64 *
   __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) */

void __cdecl
std::_Rotate_one_left<google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  Message *pMVar1;
  
  pMVar1 = *param_1;
  memmove(param_1,param_2,(longlong)param_3 - (longlong)param_2);
  *(Message **)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = pMVar1;
  return;
}

// _Rotate_one_right<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6c4f0

/* void __cdecl std::_Rotate_one_right<class google::protobuf::Message const * __ptr64 *
   __ptr64>(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) */

void __cdecl
std::_Rotate_one_right<google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  Message *pMVar1;
  
  pMVar1 = *param_2;
  memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
          (longlong)param_2 - (longlong)param_1);
  *param_1 = pMVar1;
  return;
}

// _Seek_wrapped<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64&___ptr64> @ 14fa6c530

/* void __cdecl std::_Seek_wrapped<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64>(class google::protobuf::Message
   const * __ptr64 * __ptr64 & __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Seek_wrapped<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64&___ptr64>
          (Message ***param_1,Message ***param_2)

{
  *param_1 = *param_2;
  return;
}

// _Seek_wrapped<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6c540

/* void __cdecl std::_Seek_wrapped<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64 & __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 && __ptr64)
    */

void __cdecl
std::
_Seek_wrapped<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message ***param_1,Message ***param_2)

{
  *param_1 = *param_2;
  return;
}

// _Sort_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6c550

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Sort_heap_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Sort_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (undefined4 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while (puVar4 = param_2, 0x2f < (longlong)uVar6) {
    param_2 = puVar4 + -3;
    uVar5 = uVar6 / 0x18;
    uVar6 = (longlong)param_2 - (longlong)param_1;
    if (1 < uVar5) {
      local_38 = *param_2;
      uStack_30 = puVar4[-2];
      local_28 = puVar4[-1];
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined4 *)param_2 = *param_1;
      *(undefined4 *)((longlong)puVar4 + -0x14) = uVar1;
      *(undefined4 *)(puVar4 + -2) = uVar2;
      *(undefined4 *)((longlong)puVar4 + -0xc) = uVar3;
      puVar4[-1] = *(undefined8 *)(param_1 + 4);
      _Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,0,(longlong)uVar6 / 0x18,&local_38,param_3);
    }
  }
  return;
}

// _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6c630

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::_Sort_unchecked<class google::protobuf::MapKey * __ptr64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class google::protobuf::MapKey *
   __ptr64,class google::protobuf::MapKey * __ptr64,__int64,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator) */

void __cdecl
std::
_Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar5 < 0x318) {
      _Insertion_sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,param_2,param_4);
      return;
    }
    if (param_3 < 1) break;
    _Partition_by_median_guess_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (&local_38,param_1,param_2,param_4);
    puVar4 = puStack_30;
    puVar7 = local_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar5 = ((longlong)param_2 - (longlong)puStack_30) / 6 +
            ((longlong)param_2 - (longlong)puStack_30 >> 0x3f);
    if (((longlong)local_38 - (longlong)param_1) / 0x18 < (lVar5 >> 2) - (lVar5 >> 0x3f)) {
      _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,local_38,param_3,param_4);
      puVar7 = param_2;
      param_1 = puVar4;
    }
    else {
      _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (puStack_30,param_2,param_3,param_4);
    }
    lVar5 = (longlong)puVar7 - (longlong)param_1;
    param_2 = puVar7;
  }
  _Make_heap_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (param_1,param_2,param_4);
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while (0x2f < (longlong)uVar6) {
    puVar7 = param_2 + -3;
    if (1 < uVar6 / 0x18) {
      local_38 = (undefined8 *)*puVar7;
      puStack_30 = (undefined4 *)param_2[-2];
      local_28 = param_2[-1];
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined4 *)puVar7 = *param_1;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -2) = uVar2;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar3;
      param_2[-1] = *(undefined8 *)(param_1 + 4);
      _Pop_heap_hole_by_index<google::protobuf::MapKey*___ptr64,google::protobuf::MapKey,google::protobuf::internal::MapKeySorter::MapKeyComparator>
                (param_1,0,((longlong)puVar7 - (longlong)param_1) / 0x18,&local_38,param_4);
    }
    param_2 = puVar7;
    uVar6 = (longlong)puVar7 - (longlong)param_1;
  }
  return;
}

// _Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6c800

/* void __cdecl std::_Stable_sort_unchecked<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,__int64,class google::protobuf::Message const * __ptr64 * __ptr64
   const,__int64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,longlong param_5
          ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (param_1,param_2,param_6);
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 8;
  if (param_5 < lVar3) {
    _Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (param_1,lVar1,lVar3,param_4,param_5,param_6);
    _Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    _Buffered_merge_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              ();
    _Buffered_merge_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (lVar1,param_2,uVar2,param_4,param_6);
  }
  _Buffered_inplace_merge_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
            (param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}

// _Temporary_buffer_size<__int64> @ 14fa6c910

/* __int64 __cdecl std::_Temporary_buffer_size<__int64>(__int64) */

__int64 __cdecl std::_Temporary_buffer_size<__int64>(__int64 param_1)

{
  __int64 _Var1;
  
  _Var1 = 0x7fffffffffffffff;
  if (param_1 < 0x7fffffffffffffff) {
    _Var1 = param_1;
  }
  return _Var1;
}

// _To_address<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6c930

/* UNKNOWN __cdecl std::_To_address<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const & __ptr64) */

Message ** __cdecl
std::_To_address<google::protobuf::Message_const*___ptr64*___ptr64>(Message ***param_1)

{
  return *param_1;
}

// _To_address<google::protobuf::MapKey*___ptr64> @ 14fa6c940

/* WARNING: Enum "CppType": Some values do not have unique names */
/* UNKNOWN __cdecl std::_To_address<class google::protobuf::MapKey * __ptr64>(class
   google::protobuf::MapKey * __ptr64 const & __ptr64) */

MapKey * __cdecl std::_To_address<google::protobuf::MapKey*___ptr64>(MapKey **param_1)

{
  return *param_1;
}

// _Unfancy<google::protobuf::Message_const*___ptr64> @ 14fa6c950

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Unfancy<class
   google::protobuf::Message const * __ptr64>(class google::protobuf::Message const * __ptr64 *
   __ptr64) */

Message ** __cdecl std::_Unfancy<google::protobuf::Message_const*___ptr64>(Message **param_1)

{
  return param_1;
}

// _Unfancy<google::protobuf::MapKey> @ 14fa6c960

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Unfancy<class
   google::protobuf::MapKey>(class google::protobuf::MapKey * __ptr64) */

MapKey * __cdecl std::_Unfancy<google::protobuf::MapKey>(MapKey *param_1)

{
  return param_1;
}

// _Uninitialized_chunked_merge_unchecked2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6c970

/* void __cdecl std::_Uninitialized_chunked_merge_unchecked2<class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 * __ptr64,__int64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
_Uninitialized_chunked_merge_unchecked2<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
          undefined8 param_5)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *_Src;
  size_t _Size;
  undefined8 local_res8;
  longlong local_res10;
  
  local_res10 = param_2;
  do {
    if (param_4 < 0x21) {
      memmove(param_3,param_1,local_res10 - (longlong)param_1);
      return;
    }
    param_4 = param_4 + -0x20;
    local_res8 = param_5;
    puVar1 = param_1 + 0x20;
    lVar5 = 0x20;
    if (param_4 < 0x20) {
      lVar5 = param_4;
    }
    param_4 = param_4 - lVar5;
    puVar2 = param_1 + lVar5 + 0x20;
    _Src = puVar1;
    do {
      while( true ) {
        _Dst = param_3 + 1;
        bVar4 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                          ((MapEntryMessageComparator *)&local_res8,(Message *)*_Src,
                           (Message *)*param_1);
        if (!bVar4) break;
        uVar3 = *_Src;
        _Src = _Src + 1;
        *param_3 = uVar3;
        param_3 = _Dst;
        if (_Src == puVar2) {
          _Size = (longlong)puVar1 - (longlong)param_1;
          memmove(_Dst,param_1,_Size);
          goto LAB_14fa6ca5a;
        }
      }
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      param_3 = _Dst;
    } while (param_1 != puVar1);
    _Size = (longlong)puVar2 - (longlong)_Src;
    memmove(_Dst,_Src,_Size);
LAB_14fa6ca5a:
    param_3 = (undefined8 *)(_Size + (longlong)_Dst);
    param_1 = puVar2;
  } while( true );
}

// _Uninitialized_merge_move<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6cab0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_merge_move<class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class google::protobuf::Message
   const * __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

Message ** __cdecl
std::
_Uninitialized_merge_move<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  bool bVar2;
  undefined8 *_Src;
  size_t _Size;
  
  _Src = param_2;
  do {
    while( true ) {
      _Dst = param_4 + 1;
      bVar2 = google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
                        ((MapEntryMessageComparator *)&stack0x00000028,(Message *)*_Src,
                         (Message *)*param_1);
      if (bVar2) break;
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_4 = uVar1;
      param_4 = _Dst;
      if (param_1 == param_2) {
        _Size = (longlong)param_3 - (longlong)_Src;
        memmove(_Dst,_Src,_Size);
LAB_14fa6cb47:
        return (Message **)(_Size + (longlong)_Dst);
      }
    }
    uVar1 = *_Src;
    _Src = _Src + 1;
    *param_4 = uVar1;
    param_4 = _Dst;
  } while (_Src != param_3);
  _Size = (longlong)param_2 - (longlong)param_1;
  memmove(_Dst,param_1,_Size);
  goto LAB_14fa6cb47;
}

// _Uninitialized_move<google::protobuf::Message_const*___ptr64*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6cb70

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::_Uninitialized_move<class
   google::protobuf::Message const * __ptr64 * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> >(class google::protobuf::Message const * __ptr64 *
   __ptr64 const,class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> & __ptr64) */

Message ** __cdecl
std::
_Uninitialized_move<google::protobuf::Message_const*___ptr64*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          (Message **param_1,Message **param_2,Message **param_3,
          allocator<google::protobuf::Message_const*___ptr64> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1 >> 3);
}

// _Uninitialized_move<google::protobuf::MapKey*___ptr64,std::allocator<google::protobuf::MapKey>_> @ 14fa6cbb0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::_Uninitialized_move<class
   google::protobuf::MapKey * __ptr64,class std::allocator<class google::protobuf::MapKey> >(class
   google::protobuf::MapKey * __ptr64 const,class google::protobuf::MapKey * __ptr64 const,class
   google::protobuf::MapKey * __ptr64,class std::allocator<class google::protobuf::MapKey> &
   __ptr64) */

MapKey * __cdecl
std::
_Uninitialized_move<google::protobuf::MapKey*___ptr64,std::allocator<google::protobuf::MapKey>_>
          (MapKey *param_1,MapKey *param_2,MapKey *param_3,
          allocator<google::protobuf::MapKey> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1) / 0x18;
}

// _Uninitialized_move_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6cc10

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_move_unchecked<class google::protobuf::Message const * __ptr64 *
   __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 * __ptr64) */

Message ** __cdecl
std::
_Uninitialized_move_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Message **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// addressof<google::protobuf::Message_const*___ptr64> @ 14fa6cc50

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::addressof<class
   google::protobuf::Message const * __ptr64>(class google::protobuf::Message const * __ptr64 &
   __ptr64) */

Message ** __cdecl std::addressof<google::protobuf::Message_const*___ptr64>(Message **param_1)

{
  return param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_> @ 14fa6cc60

/* class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const * __ptr64>
   > * __ptr64 __cdecl std::addressof<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > >(class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > & __ptr64) */

_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> * __cdecl
std::addressof<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
          (_Vector_val<struct_std::_Simple_types<class_google::protobuf::Message_const*___ptr64>_>
           *param_1)

{
  return (_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> *)param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> @ 14fa6cc70

/* class std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > * __ptr64
   __cdecl std::addressof<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > >(class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > & __ptr64) */

_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> * __cdecl
std::addressof<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
          (_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_> *param_1)

{
  return (_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> *)param_1;
}

// addressof<std::vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>_> @ 14fa6cc80

/* class std::vector<class google::protobuf::Message const * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> > * __ptr64 __cdecl std::addressof<class
   std::vector<class google::protobuf::Message const * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> > >(class std::vector<class google::protobuf::Message
   const * __ptr64,class std::allocator<class google::protobuf::Message const * __ptr64> > &
   __ptr64) */

vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
* __cdecl std::
          addressof<std::vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>_>
                    (vector<class_google::protobuf::Message_const*___ptr64,class_std::allocator<class_google::protobuf::Message_const*___ptr64>_>
                     *param_1)

{
  return (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          *)param_1;
}

// addressof<google::protobuf::MapKey> @ 14fa6cc90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::addressof<class
   google::protobuf::MapKey>(class google::protobuf::MapKey & __ptr64) */

MapKey * __cdecl std::addressof<google::protobuf::MapKey>(MapKey *param_1)

{
  return param_1;
}

// advance<google::protobuf::Message_const*___ptr64*___ptr64,__int64> @ 14fa6cca0

/* void __cdecl std::advance<class google::protobuf::Message const * __ptr64 *
   __ptr64,__int64>(class google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64,__int64) */

void __cdecl
std::advance<google::protobuf::Message_const*___ptr64*___ptr64,__int64>
          (Message ***param_1,__int64 param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// construct<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64> @ 14fa6ccc0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::Message const * __ptr64> >::construct<class google::protobuf::Message const *
   __ptr64,class google::protobuf::Message const * __ptr64>(class std::allocator<class
   google::protobuf::Message const * __ptr64> & __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::Message_const*___ptr64>_>::
construct<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64>
          (allocator<google::protobuf::Message_const*___ptr64> *param_1,Message **param_2,
          Message **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64> @ 14fa6ccd0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::MapKey> >::construct<class google::protobuf::MapKey,class
   google::protobuf::MapKey const & __ptr64>(class std::allocator<class google::protobuf::MapKey> &
   __ptr64,class google::protobuf::MapKey * __ptr64 const,class google::protobuf::MapKey const &
   __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::MapKey>_>::
construct<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64>
          (allocator<google::protobuf::MapKey> *param_1,MapKey *param_2,MapKey *param_3)

{
  ulong64 uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_3->val_).string_value._Mysize;
  (param_2->val_).string_value._Mydata = (param_3->val_).string_value._Mydata;
  (param_2->val_).string_value._Mysize = uVar1;
  uVar2 = *(undefined4 *)&param_3->field_0x14;
  param_2->type_ = param_3->type_;
  *(undefined4 *)&param_2->field_0x14 = uVar2;
  return;
}

// construct<google::protobuf::MapKey,google::protobuf::MapKey> @ 14fa6ccf0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::MapKey> >::construct<class google::protobuf::MapKey,class
   google::protobuf::MapKey>(class std::allocator<class google::protobuf::MapKey> & __ptr64,class
   google::protobuf::MapKey * __ptr64 const,class google::protobuf::MapKey && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::MapKey>_>::
construct<google::protobuf::MapKey,google::protobuf::MapKey>
          (allocator<google::protobuf::MapKey> *param_1,MapKey *param_2,MapKey *param_3)

{
  ulong64 uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_3->val_).string_value._Mysize;
  (param_2->val_).string_value._Mydata = (param_3->val_).string_value._Mydata;
  (param_2->val_).string_value._Mysize = uVar1;
  uVar2 = *(undefined4 *)&param_3->field_0x14;
  param_2->type_ = param_3->type_;
  *(undefined4 *)&param_2->field_0x14 = uVar2;
  return;
}

// construct_at<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64,0> @ 14fa6cd10

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::construct_at<class
   google::protobuf::Message const * __ptr64,class google::protobuf::Message const *
   __ptr64,0>(class google::protobuf::Message const * __ptr64 * __ptr64 const,class
   google::protobuf::Message const * __ptr64 && __ptr64) */

Message ** __cdecl
std::
construct_at<google::protobuf::Message_const*___ptr64,google::protobuf::Message_const*___ptr64,0>
          (Message **param_1,Message **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64,0> @ 14fa6cd20

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::construct_at<class
   google::protobuf::MapKey,class google::protobuf::MapKey const & __ptr64,0>(class
   google::protobuf::MapKey * __ptr64 const,class google::protobuf::MapKey const & __ptr64) */

MapKey * __cdecl
std::construct_at<google::protobuf::MapKey,google::protobuf::MapKey_const&___ptr64,0>
          (MapKey *param_1,MapKey *param_2)

{
  ulong64 uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_2->val_).string_value._Mysize;
  (param_1->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
  (param_1->val_).string_value._Mysize = uVar1;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  param_1->type_ = param_2->type_;
  *(undefined4 *)&param_1->field_0x14 = uVar2;
  return param_1;
}

// construct_at<google::protobuf::MapKey,google::protobuf::MapKey,0> @ 14fa6cd40

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::construct_at<class
   google::protobuf::MapKey,class google::protobuf::MapKey,0>(class google::protobuf::MapKey *
   __ptr64 const,class google::protobuf::MapKey && __ptr64) */

MapKey * __cdecl
std::construct_at<google::protobuf::MapKey,google::protobuf::MapKey,0>
          (MapKey *param_1,MapKey *param_2)

{
  ulong64 uVar1;
  undefined4 uVar2;
  
  uVar1 = (param_2->val_).string_value._Mysize;
  (param_1->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
  (param_1->val_).string_value._Mysize = uVar1;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  param_1->type_ = param_2->type_;
  *(undefined4 *)&param_1->field_0x14 = uVar2;
  return param_1;
}

// countl_zero<unsigned_int,0> @ 14fa6cd60

/* int __cdecl std::countl_zero<unsigned int,0>(unsigned int) */

int __cdecl std::countl_zero<unsigned_int,0>(uint param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return LZCOUNT(param_1);
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x20;
  }
  return 0x1f - iVar1;
}

// distance<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6cd90

/* __int64 __cdecl std::distance<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) */

__int64 __cdecl
std::distance<google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2)

{
  return (longlong)param_2 - (longlong)param_1 >> 3;
}

// exchange<google::protobuf::Message_const*___ptr64*___ptr64,std::nullptr_t> @ 14fa6cdb0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::exchange<class
   google::protobuf::Message const * __ptr64 * __ptr64,std::nullptr_t>(class
   google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64,std::nullptr_t && __ptr64) */

Message ** __cdecl
std::exchange<google::protobuf::Message_const*___ptr64*___ptr64,std::nullptr_t>
          (Message ***param_1,std__nullptr_t *param_2)

{
  Message **ppMVar1;
  
  ppMVar1 = *param_1;
  *param_1 = *(Message ***)param_2;
  return ppMVar1;
}

// exchange<google::protobuf::MapKey*___ptr64,std::nullptr_t> @ 14fa6cdc0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::exchange<class google::protobuf::MapKey *
   __ptr64,std::nullptr_t>(class google::protobuf::MapKey * __ptr64 & __ptr64,std::nullptr_t &&
   __ptr64) */

MapKey * __cdecl
std::exchange<google::protobuf::MapKey*___ptr64,std::nullptr_t>
          (MapKey **param_1,std__nullptr_t *param_2)

{
  MapKey *pMVar1;
  
  pMVar1 = *param_1;
  *param_1 = *(MapKey **)param_2;
  return pMVar1;
}

// forward<google::protobuf::Message_const*___ptr64*___ptr64&___ptr64> @ 14fa6cdd0

/* class google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::Message const * __ptr64 * __ptr64 & __ptr64>(class google::protobuf::Message
   const * __ptr64 * __ptr64 & __ptr64) */

Message *** __cdecl
std::forward<google::protobuf::Message_const*___ptr64*___ptr64&___ptr64>(Message ***param_1)

{
  return param_1;
}

// forward<google::protobuf::MapKey*___ptr64&___ptr64> @ 14fa6cde0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::MapKey * __ptr64 & __ptr64>(class google::protobuf::MapKey * __ptr64 & __ptr64)
    */

MapKey ** __cdecl std::forward<google::protobuf::MapKey*___ptr64&___ptr64>(MapKey **param_1)

{
  return param_1;
}

// forward<google::protobuf::MapKey_const&___ptr64> @ 14fa6cdf0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey const & __ptr64 __cdecl std::forward<class
   google::protobuf::MapKey const & __ptr64>(class google::protobuf::MapKey const & __ptr64) */

MapKey * __cdecl std::forward<google::protobuf::MapKey_const&___ptr64>(MapKey *param_1)

{
  return param_1;
}

// forward<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6ce00

/* class google::protobuf::Message const * __ptr64 * __ptr64 && __ptr64 __cdecl std::forward<class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64 & __ptr64) */

Message *** __cdecl
std::forward<google::protobuf::Message_const*___ptr64*___ptr64>(Message ***param_1)

{
  return param_1;
}

// forward<google::protobuf::MapKey*___ptr64> @ 14fa6ce10

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 && __ptr64 __cdecl std::forward<class
   google::protobuf::MapKey * __ptr64>(class google::protobuf::MapKey * __ptr64 & __ptr64) */

MapKey ** __cdecl std::forward<google::protobuf::MapKey*___ptr64>(MapKey **param_1)

{
  return param_1;
}

// forward<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6ce20

/* class std::allocator<class google::protobuf::Message const * __ptr64> && __ptr64 __cdecl
   std::forward<class std::allocator<class google::protobuf::Message const * __ptr64> >(class
   std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64) */

allocator<google::protobuf::Message_const*___ptr64> * __cdecl
std::forward<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (allocator<class_google::protobuf::Message_const*___ptr64> *param_1)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)param_1;
}

// forward<std::allocator<google::protobuf::MapKey>_> @ 14fa6ce30

/* class std::allocator<class google::protobuf::MapKey> && __ptr64 __cdecl std::forward<class
   std::allocator<class google::protobuf::MapKey> >(class std::allocator<class
   google::protobuf::MapKey> & __ptr64) */

allocator<google::protobuf::MapKey> * __cdecl
std::forward<std::allocator<google::protobuf::MapKey>_>
          (allocator<class_google::protobuf::MapKey> *param_1)

{
  return (allocator<google::protobuf::MapKey> *)param_1;
}

// forward<google::protobuf::MapKey> @ 14fa6ce40

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey && __ptr64 __cdecl std::forward<class
   google::protobuf::MapKey>(class google::protobuf::MapKey & __ptr64) */

MapKey * __cdecl std::forward<google::protobuf::MapKey>(MapKey *param_1)

{
  return param_1;
}

// lower_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fa6d137) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::lower_bound<class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64 const,class google::protobuf::Message const * __ptr64 const & __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

Message ** __cdecl
std::
lower_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (Message **param_1,longlong param_2,undefined8 *param_3,FieldDescriptor *param_4)

{
  Message *this;
  Reflection *this_00;
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Metadata *pMVar8;
  __int64 _Var9;
  __int64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  _Bxty *_Buf1;
  _Bxty *p_Var13;
  ulong64 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  _Bxty *p_Var17;
  ulonglong _Size;
  undefined1 auStack_d8 [32];
  char local_b8;
  _Bxty *local_b0;
  undefined8 *local_a8;
  Metadata local_a0 [2];
  _Bxty local_80;
  ulonglong local_70;
  ulonglong local_68;
  _Bxty local_60;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar16 = param_2 - (longlong)param_1 >> 3;
  local_a8 = param_3;
  do {
    do {
      uVar1 = uVar16;
      if ((longlong)uVar1 < 1) {
        return param_1;
      }
      uVar16 = uVar1 >> 1;
      local_b0 = (_Bxty *)*local_a8;
      this = param_1[uVar16];
      pMVar8 = google::protobuf::Message::GetMetadata(this,local_a0);
      this_00 = pMVar8->reflection;
      switch(*(undefined4 *)
              ((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
              (ulonglong)param_4->type_ * 4)) {
      case 1:
        iVar7 = google::protobuf::Reflection::GetInt32(this_00,this,param_4);
        iVar4 = google::protobuf::Reflection::GetInt32(this_00,(Message *)local_b0,param_4);
        bVar3 = iVar7 < iVar4;
        break;
      case 2:
        _Var9 = google::protobuf::Reflection::GetInt64(this_00,this,param_4);
        _Var10 = google::protobuf::Reflection::GetInt64(this_00,(Message *)local_b0,param_4);
        bVar3 = _Var9 < _Var10;
        break;
      case 3:
        uVar5 = google::protobuf::Reflection::GetUInt32(this_00,this,param_4);
        uVar6 = google::protobuf::Reflection::GetUInt32(this_00,(Message *)local_b0,param_4);
        bVar3 = uVar5 < uVar6;
        break;
      case 4:
        _Var11 = google::protobuf::Reflection::GetUInt64(this_00,this,param_4);
        _Var12 = google::protobuf::Reflection::GetUInt64(this_00,(Message *)local_b0,param_4);
        bVar3 = _Var11 < _Var12;
        break;
      default:
        goto LAB_14fa6d145;
      case 7:
        bVar2 = google::protobuf::Reflection::GetBool(this_00,this,param_4);
        bVar3 = google::protobuf::Reflection::GetBool(this_00,(Message *)local_b0,param_4);
        bVar3 = bVar3 && !bVar2;
        break;
      case 9:
        google::protobuf::Reflection::GetString
                  (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_60,this,param_4);
        google::protobuf::Reflection::GetString
                  (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_80,(Message *)local_b0,param_4);
        uVar15 = local_50;
        local_b8 = 0xf < local_68;
        local_b0 = (_Bxty *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
        p_Var13 = &local_80;
        if (0xf < local_68) {
          p_Var13 = local_b0;
        }
        p_Var17 = (_Bxty *)CONCAT71(local_60._1_7_,local_60._Buf[0]);
        _Buf1 = &local_60;
        if (0xf < local_48) {
          _Buf1 = p_Var17;
        }
        _Size = local_50;
        if (local_70 < local_50) {
          _Size = local_70;
        }
        iVar7 = memcmp(_Buf1,p_Var13,_Size);
        if (iVar7 == 0) {
          if (uVar15 < local_70) {
            bVar3 = true;
          }
          else {
            if (local_70 < uVar15) goto LAB_14fa6d069;
            bVar3 = false;
          }
        }
        else if (iVar7 < 0) {
          bVar3 = true;
        }
        else {
LAB_14fa6d069:
          bVar3 = false;
        }
        if (local_b8 != '\0') {
          uVar14 = local_68 + 1;
          p_Var13 = local_b0;
          if (0xfff < uVar14) {
            uVar14 = local_68 + 0x28;
            p_Var13 = *(_Bxty **)(local_b0->_Buf + -8);
            if ((char *)0x1f < local_b0->_Buf + (-8 - (longlong)p_Var13)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(p_Var13,uVar14);
          p_Var17 = (_Bxty *)CONCAT71(local_60._1_7_,local_60._Buf[0]);
        }
        local_70 = 0;
        local_68 = 0xf;
        local_80._Buf[0] = '\0';
        if (0xf < local_48) {
          uVar15 = local_48 + 1;
          p_Var13 = p_Var17;
          if (0xfff < uVar15) {
            uVar15 = local_48 + 0x28;
            p_Var13 = *(_Bxty **)(p_Var17->_Buf + -8);
            if ((char *)0x1f < p_Var17->_Buf + (-8 - (longlong)p_Var13)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(p_Var13,uVar15);
        }
        local_50 = 0;
        local_48 = 0xf;
        local_60._Buf[0] = '\0';
      }
    } while (!bVar3);
LAB_14fa6d145:
    param_1 = param_1 + uVar16 + 1;
    uVar16 = uVar1 + (-1 - uVar16);
  } while( true );
}

// move<google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa6d1d0

/* class google::protobuf::Message const * __ptr64 && __ptr64 __cdecl std::move<class
   google::protobuf::Message const * __ptr64 & __ptr64>(class google::protobuf::Message const *
   __ptr64 & __ptr64) */

Message ** __cdecl std::move<google::protobuf::Message_const*___ptr64&___ptr64>(Message **param_1)

{
  return param_1;
}

// move<std::allocator<google::protobuf::Message_const*___ptr64>&___ptr64> @ 14fa6d1e0

/* class std::allocator<class google::protobuf::Message const * __ptr64> && __ptr64 __cdecl
   std::move<class std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64>(class
   std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64) */

allocator<google::protobuf::Message_const*___ptr64> * __cdecl
std::move<std::allocator<google::protobuf::Message_const*___ptr64>&___ptr64>
          (allocator<class_google::protobuf::Message_const*___ptr64> *param_1)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)param_1;
}

// move<std::allocator<google::protobuf::MapKey>&___ptr64> @ 14fa6d1f0

/* class std::allocator<class google::protobuf::MapKey> && __ptr64 __cdecl std::move<class
   std::allocator<class google::protobuf::MapKey> & __ptr64>(class std::allocator<class
   google::protobuf::MapKey> & __ptr64) */

allocator<google::protobuf::MapKey> * __cdecl
std::move<std::allocator<google::protobuf::MapKey>&___ptr64>
          (allocator<class_google::protobuf::MapKey> *param_1)

{
  return (allocator<google::protobuf::MapKey> *)param_1;
}

// move<google::protobuf::MapKey&___ptr64> @ 14fa6d200

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey && __ptr64 __cdecl std::move<class google::protobuf::MapKey &
   __ptr64>(class google::protobuf::MapKey & __ptr64) */

MapKey * __cdecl std::move<google::protobuf::MapKey&___ptr64>(MapKey *param_1)

{
  return param_1;
}

// next<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6d210

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::next<class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64,__int64) */

Message ** __cdecl
std::next<google::protobuf::Message_const*___ptr64*___ptr64>(Message **param_1,__int64 param_2)

{
  return param_1 + param_2;
}

// reverse<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6d220

/* void __cdecl std::reverse<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,class google::protobuf::Message const *
   __ptr64 * __ptr64 const) */

void __cdecl
std::reverse<google::protobuf::Message_const*___ptr64*___ptr64>(Message **param_1,Message **param_2)

{
  __std_reverse_trivially_swappable_8(param_1,param_2);
  return;
}

// rotate<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6d230

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::rotate<class
   google::protobuf::Message const * __ptr64 * __ptr64>(class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64) */

Message ** __cdecl
std::rotate<google::protobuf::Message_const*___ptr64*___ptr64>
          (Message **param_1,Message **param_2,Message **param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  __std_reverse_trivially_swappable_8(param_1,param_2);
  __std_reverse_trivially_swappable_8(param_2,param_3);
  __std_reverse_trivially_swappable_8(param_1,param_3);
  return param_1 + ((longlong)param_3 - (longlong)param_2 >> 3);
}

// sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>,google::protobuf::internal::MapKeySorter::MapKeyComparator> @ 14fa6d2c0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::sort<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >,class
   google::protobuf::internal::MapKeySorter::MapKeyComparator>(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > >,class google::protobuf::internal::MapKeySorter::MapKeyComparator)
    */

void __cdecl
std::
sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>,google::protobuf::internal::MapKeySorter::MapKeyComparator>
          (longlong param_1,longlong param_2,undefined1 param_3)

{
  _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (param_1,param_2,(param_2 - param_1) / 0x18,param_3);
  return;
}

// stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6d300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl std::stable_sort<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > >,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const * __ptr64> >
   >,class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > >,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

void __cdecl
std::
stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_1058 [32];
  ulonglong local_1038;
  undefined8 local_1030;
  undefined1 *local_1028;
  ulonglong local_1020;
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14fa6d320;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1058;
  lVar3 = param_2 - param_1 >> 3;
  if (lVar3 < 0x21) {
    _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              ();
  }
  else {
    uVar1 = lVar3 - (lVar3 - (param_2 - param_1 >> 0x3f) >> 1);
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)uVar1 < 0x7fffffffffffffff) {
      uVar2 = uVar1;
    }
    if (0x200 < uVar1) {
      if ((uVar2 < 0x2000000000000000) && (0 < (longlong)uVar2)) {
        do {
          local_1028 = ::operator_new(uVar2 * 8,(nothrow_t *)&nothrow);
          if (local_1028 != (undefined1 *)0x0) {
            if (0x200 < uVar2) goto LAB_14fa6d3d6;
            goto LAB_14fa6d3c4;
          }
          uVar2 = uVar2 >> 1;
        } while (uVar2 != 0);
      }
      local_1028 = (undefined1 *)0x0;
LAB_14fa6d3c4:
      ::operator_delete(local_1028);
      uVar1 = 0x200;
    }
    uVar2 = uVar1;
    local_1028 = local_1018;
LAB_14fa6d3d6:
    local_1038 = uVar2;
    local_1030 = param_3;
    local_1020 = uVar2;
    _Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (param_1,param_2,lVar3,local_1028);
    if (0x200 < local_1020) {
      ::operator_delete(local_1028);
    }
  }
  return;
}

// swap<google::protobuf::Message_const*___ptr64,0> @ 14fa6d460

/* void __cdecl std::swap<class google::protobuf::Message const * __ptr64,0>(class
   google::protobuf::Message const * __ptr64 & __ptr64,class google::protobuf::Message const *
   __ptr64 & __ptr64) */

void __cdecl
std::swap<google::protobuf::Message_const*___ptr64,0>(Message **param_1,Message **param_2)

{
  Message *pMVar1;
  
  pMVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pMVar1;
  return;
}

// swap<google::protobuf::MapKey,0> @ 14fa6d480

/* WARNING: Enum "CppType": Some values do not have unique names */
/* void __cdecl std::swap<class google::protobuf::MapKey,0>(class google::protobuf::MapKey &
   __ptr64,class google::protobuf::MapKey & __ptr64) */

void __cdecl std::swap<google::protobuf::MapKey,0>(MapKey *param_1,MapKey *param_2)

{
  ulong64 uVar1;
  char *pcVar2;
  ulong64 uVar3;
  undefined4 uVar4;
  CppType CVar5;
  undefined4 uVar6;
  
  uVar1 = (param_2->val_).string_value._Mysize;
  pcVar2 = (param_1->val_).string_value._Mydata;
  uVar3 = (param_1->val_).string_value._Mysize;
  CVar5 = param_1->type_;
  uVar6 = *(undefined4 *)&param_1->field_0x14;
  (param_1->val_).string_value._Mydata = (param_2->val_).string_value._Mydata;
  (param_1->val_).string_value._Mysize = uVar1;
  uVar4 = *(undefined4 *)&param_2->field_0x14;
  param_1->type_ = param_2->type_;
  *(undefined4 *)&param_1->field_0x14 = uVar4;
  (param_2->val_).string_value._Mydata = pcVar2;
  (param_2->val_).string_value._Mysize = uVar3;
  param_2->type_ = CVar5;
  *(undefined4 *)&param_2->field_0x14 = uVar6;
  return;
}

// to_address<google::protobuf::Message_const*___ptr64> @ 14fa6d4b0

/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::to_address<class
   google::protobuf::Message const * __ptr64>(class google::protobuf::Message const * __ptr64 *
   __ptr64 const) */

Message ** __cdecl std::to_address<google::protobuf::Message_const*___ptr64>(Message **param_1)

{
  return param_1;
}

// to_address<google::protobuf::MapKey> @ 14fa6d4c0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::MapKey * __ptr64 __cdecl std::to_address<class
   google::protobuf::MapKey>(class google::protobuf::MapKey * __ptr64 const) */

MapKey * __cdecl std::to_address<google::protobuf::MapKey>(MapKey *param_1)

{
  return param_1;
}

// upper_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator> @ 14fa6d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fa6d7cb) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::upper_bound<class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64,class google::protobuf::DynamicMapSorter::MapEntryMessageComparator>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64,class google::protobuf::Message const * __ptr64 const & __ptr64,class
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator) */

Message ** __cdecl
std::
upper_bound<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
          (Message **param_1,longlong param_2,undefined8 *param_3,FieldDescriptor *param_4)

{
  Message **ppMVar1;
  Message *pMVar2;
  Message *this;
  Reflection *this_00;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  Metadata *pMVar10;
  __int64 _Var11;
  __int64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  _Bxty *_Buf1;
  _Bxty *p_Var15;
  ulong64 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  _Bxty *p_Var19;
  _Bxty *p_Var20;
  ulonglong _Size;
  undefined1 auStack_e8 [32];
  char local_c8;
  Message **local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  Metadata local_a8 [2];
  _Bxty local_88;
  ulonglong local_78;
  ulonglong local_70;
  _Bxty local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uVar18 = param_2 - (longlong)param_1 >> 3;
  local_b0 = param_3;
  local_c0 = param_1;
joined_r0x00014fa6d51e:
  do {
    uVar3 = uVar18;
    if ((longlong)uVar3 < 1) {
      return local_c0;
    }
    uVar18 = uVar3 >> 1;
    ppMVar1 = local_c0 + uVar18;
    pMVar2 = *ppMVar1;
    this = (Message *)*local_b0;
    pMVar10 = google::protobuf::Message::GetMetadata(this,local_a8);
    this_00 = pMVar10->reflection;
    switch(*(undefined4 *)
            ((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
            (ulonglong)param_4->type_ * 4)) {
    case 1:
      iVar9 = google::protobuf::Reflection::GetInt32(this_00,this,param_4);
      iVar6 = google::protobuf::Reflection::GetInt32(this_00,pMVar2,param_4);
      bVar5 = iVar9 < iVar6;
      break;
    case 2:
      _Var11 = google::protobuf::Reflection::GetInt64(this_00,this,param_4);
      _Var12 = google::protobuf::Reflection::GetInt64(this_00,pMVar2,param_4);
      bVar5 = _Var11 < _Var12;
      break;
    case 3:
      uVar7 = google::protobuf::Reflection::GetUInt32(this_00,this,param_4);
      uVar8 = google::protobuf::Reflection::GetUInt32(this_00,pMVar2,param_4);
      bVar5 = uVar7 < uVar8;
      break;
    case 4:
      _Var13 = google::protobuf::Reflection::GetUInt64(this_00,this,param_4);
      _Var14 = google::protobuf::Reflection::GetUInt64(this_00,pMVar2,param_4);
      bVar5 = _Var13 < _Var14;
      break;
    default:
      goto switchD_14fa6d57c_caseD_5;
    case 7:
      bVar4 = google::protobuf::Reflection::GetBool(this_00,this,param_4);
      bVar5 = google::protobuf::Reflection::GetBool(this_00,pMVar2,param_4);
      bVar5 = bVar5 && !bVar4;
      break;
    case 9:
      google::protobuf::Reflection::GetString
                (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_68,this,param_4);
      google::protobuf::Reflection::GetString
                (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_88,pMVar2,param_4);
      uVar17 = local_58;
      local_c8 = 0xf < local_70;
      p_Var20 = (_Bxty *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
      p_Var15 = &local_88;
      if (0xf < local_70) {
        p_Var15 = p_Var20;
      }
      p_Var19 = (_Bxty *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
      _Buf1 = &local_68;
      if (0xf < local_50) {
        _Buf1 = p_Var19;
      }
      _Size = local_58;
      if (local_78 < local_58) {
        _Size = local_78;
      }
      iVar9 = memcmp(_Buf1,p_Var15,_Size);
      if (iVar9 == 0) {
        if (uVar17 < local_78) {
          bVar5 = true;
        }
        else {
          if (local_78 < uVar17) goto LAB_14fa6d6ea;
          bVar5 = false;
        }
      }
      else if (iVar9 < 0) {
        bVar5 = true;
      }
      else {
LAB_14fa6d6ea:
        bVar5 = false;
      }
      if (local_c8 != '\0') {
        uVar16 = local_70 + 1;
        p_Var15 = p_Var20;
        if (0xfff < uVar16) {
          uVar16 = local_70 + 0x28;
          p_Var15 = *(_Bxty **)(p_Var20->_Buf + -8);
          if ((char *)0x1f < p_Var20->_Buf + (-8 - (longlong)p_Var15)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(p_Var15,uVar16);
        p_Var19 = (_Bxty *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
      }
      local_78 = 0;
      local_70 = 0xf;
      local_88._Buf[0] = '\0';
      if (0xf < local_50) {
        uVar17 = local_50 + 1;
        p_Var20 = p_Var19;
        if (0xfff < uVar17) {
          uVar17 = local_50 + 0x28;
          p_Var20 = *(_Bxty **)(p_Var19->_Buf + -8);
          if ((char *)0x1f < p_Var19->_Buf + (-8 - (longlong)p_Var20)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(p_Var20,uVar17);
      }
      local_58 = 0;
      local_50 = 0xf;
      local_68._Buf[0] = '\0';
    }
    if (!bVar5) {
      local_c0 = ppMVar1 + 1;
      uVar18 = uVar3 + (-1 - uVar18);
    }
  } while( true );
switchD_14fa6d57c_caseD_5:
  goto joined_r0x00014fa6d51e;
}

// <lambda_1> @ 14fa6d8b0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`12'::<lambda_1>::<lambda_1>(struct
   google::protobuf::internal::WireFormat::MessageSetParser * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l12::<lambda_1>::<lambda_1>(<lambda_1> *this,MessageSetParser *param_1,ParseContext **param_2)

{
  *(MessageSetParser **)this = param_1;
  *(ParseContext ***)(this + 8) = param_2;
  return this;
}

// RepeatedField<int> @ 14fa6d8d0

/* private: __cdecl google::protobuf::RepeatedField<int>::RepeatedField<int>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<int> const & __ptr64)
   __ptr64 */

RepeatedField<int> * __thiscall
google::protobuf::RepeatedField<int>::RepeatedField<int>
          (RepeatedField<int> *this,Arena *param_1,RepeatedField<int> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 4);
    }
  }
  return this;
}

// RepeatedField<int> @ 14fa6d9a0

/* public: __cdecl google::protobuf::RepeatedField<int>::RepeatedField<int>(class
   google::protobuf::RepeatedField<int> const & __ptr64) __ptr64 */

RepeatedField<int> * __thiscall
google::protobuf::RepeatedField<int>::RepeatedField<int>
          (RepeatedField<int> *this,RepeatedField<int> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 4);
    }
  }
  return this;
}

// RepeatedField<unsigned_int> @ 14fa6da70

/* private: __cdecl google::protobuf::RepeatedField<unsigned int>::RepeatedField<unsigned int>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<unsigned int> const &
   __ptr64) __ptr64 */

RepeatedField<unsigned_int> * __thiscall
google::protobuf::RepeatedField<unsigned_int>::RepeatedField<unsigned_int>
          (RepeatedField<unsigned_int> *this,Arena *param_1,RepeatedField<unsigned_int> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 4);
    }
  }
  return this;
}

// RepeatedField<unsigned_int> @ 14fa6db40

/* public: __cdecl google::protobuf::RepeatedField<unsigned int>::RepeatedField<unsigned int>(class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64) __ptr64 */

RepeatedField<unsigned_int> * __thiscall
google::protobuf::RepeatedField<unsigned_int>::RepeatedField<unsigned_int>
          (RepeatedField<unsigned_int> *this,RepeatedField<unsigned_int> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 4);
    }
  }
  return this;
}

// RepeatedField<float> @ 14fa6dc10

/* private: __cdecl google::protobuf::RepeatedField<float>::RepeatedField<float>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<float> const & __ptr64)
   __ptr64 */

RepeatedField<float> * __thiscall
google::protobuf::RepeatedField<float>::RepeatedField<float>
          (RepeatedField<float> *this,Arena *param_1,RepeatedField<float> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 4);
    }
  }
  return this;
}

// RepeatedField<float> @ 14fa6dce0

/* public: __cdecl google::protobuf::RepeatedField<float>::RepeatedField<float>(class
   google::protobuf::RepeatedField<float> const & __ptr64) __ptr64 */

RepeatedField<float> * __thiscall
google::protobuf::RepeatedField<float>::RepeatedField<float>
          (RepeatedField<float> *this,RepeatedField<float> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 3) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 4);
    }
  }
  return this;
}

// RepeatedField<double> @ 14fa6ddb0

/* private: __cdecl google::protobuf::RepeatedField<double>::RepeatedField<double>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<double> const & __ptr64)
   __ptr64 */

RepeatedField<double> * __thiscall
google::protobuf::RepeatedField<double>::RepeatedField<double>
          (RepeatedField<double> *this,Arena *param_1,RepeatedField<double> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 8);
    }
  }
  return this;
}

// RepeatedField<double> @ 14fa6de80

/* public: __cdecl google::protobuf::RepeatedField<double>::RepeatedField<double>(class
   google::protobuf::RepeatedField<double> const & __ptr64) __ptr64 */

RepeatedField<double> * __thiscall
google::protobuf::RepeatedField<double>::RepeatedField<double>
          (RepeatedField<double> *this,RepeatedField<double> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 8);
    }
  }
  return this;
}

// RepeatedField<__int64> @ 14fa6df50

/* private: __cdecl google::protobuf::RepeatedField<__int64>::RepeatedField<__int64>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<__int64> const & __ptr64)
   __ptr64 */

RepeatedField<__int64> * __thiscall
google::protobuf::RepeatedField<__int64>::RepeatedField<__int64>
          (RepeatedField<__int64> *this,Arena *param_1,RepeatedField<__int64> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 8);
    }
  }
  return this;
}

// RepeatedField<__int64> @ 14fa6e020

/* public: __cdecl google::protobuf::RepeatedField<__int64>::RepeatedField<__int64>(class
   google::protobuf::RepeatedField<__int64> const & __ptr64) __ptr64 */

RepeatedField<__int64> * __thiscall
google::protobuf::RepeatedField<__int64>::RepeatedField<__int64>
          (RepeatedField<__int64> *this,RepeatedField<__int64> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 8);
    }
  }
  return this;
}

// RepeatedField<unsigned___int64> @ 14fa6e0f0

/* private: __cdecl google::protobuf::RepeatedField<unsigned __int64>::RepeatedField<unsigned
   __int64>(class google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<unsigned
   __int64> const & __ptr64) __ptr64 */

RepeatedField<unsigned___int64> * __thiscall
google::protobuf::RepeatedField<unsigned___int64>::RepeatedField<unsigned___int64>
          (RepeatedField<unsigned___int64> *this,Arena *param_1,
          RepeatedField<unsigned___int64> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2 * 8);
    }
  }
  return this;
}

// RepeatedField<unsigned___int64> @ 14fa6e1c0

/* public: __cdecl google::protobuf::RepeatedField<unsigned __int64>::RepeatedField<unsigned
   __int64>(class google::protobuf::RepeatedField<unsigned __int64> const & __ptr64) __ptr64 */

RepeatedField<unsigned___int64> * __thiscall
google::protobuf::RepeatedField<unsigned___int64>::RepeatedField<unsigned___int64>
          (RepeatedField<unsigned___int64> *this,RepeatedField<unsigned___int64> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 2) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3 * 8);
    }
  }
  return this;
}

// RepeatedField<bool> @ 14fa6e290

/* private: __cdecl google::protobuf::RepeatedField<bool>::RepeatedField<bool>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedField<bool> const & __ptr64)
   __ptr64 */

RepeatedField<bool> * __thiscall
google::protobuf::RepeatedField<bool>::RepeatedField<bool>
          (RepeatedField<bool> *this,Arena *param_1,RepeatedField<bool> *param_2)

{
  ulong64 uVar1;
  void *_Src;
  uint uVar2;
  byte bVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_2->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = ~((byte)uVar1 >> 2) & 1;
  if (bVar3 == 0) {
    uVar2 = (param_2->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 4) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar3 == 0) {
      _Src = (void *)((param_2->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_2->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2);
    }
  }
  return this;
}

// RepeatedField<bool> @ 14fa6e350

/* public: __cdecl google::protobuf::RepeatedField<bool>::RepeatedField<bool>(class
   google::protobuf::RepeatedField<bool> const & __ptr64) __ptr64 */

RepeatedField<bool> * __thiscall
google::protobuf::RepeatedField<bool>::RepeatedField<bool>
          (RepeatedField<bool> *this,RepeatedField<bool> *param_1)

{
  ulong64 uVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = 0;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 4) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar3;
    }
    else {
      Grow(this,true,0,uVar3);
      *_Dst = uVar3;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (bVar2 == 0) {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    else {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    if (0 < (int)uVar3) {
      memmove(_Dst,_Src,(longlong)(int)uVar3);
    }
  }
  return this;
}

// RepeatedFieldRef<google::protobuf::Message,void> @ 14fa6e410

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: __cdecl google::protobuf::RepeatedFieldRef<class
   google::protobuf::Message,void>::RepeatedFieldRef<class google::protobuf::Message,void>(class
   google::protobuf::Message const & __ptr64,class google::protobuf::FieldDescriptor const *
   __ptr64) __ptr64 */

RepeatedFieldRef<google::protobuf::Message,void> * __thiscall
google::protobuf::RepeatedFieldRef<google::protobuf::Message,void>::
RepeatedFieldRef<google::protobuf::Message,void>
          (RepeatedFieldRef<google::protobuf::Message,void> *this,Message *param_1,
          FieldDescriptor *param_2)

{
  Reflection *this_00;
  code *pcVar1;
  Metadata *pMVar2;
  void *pvVar3;
  RepeatedFieldAccessor *pRVar4;
  MessageFactory *pMVar5;
  Descriptor *pDVar6;
  undefined8 uVar7;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadata(param_1,&local_18);
  this_00 = pMVar2->reflection;
  pvVar3 = Reflection::RepeatedFieldData(this_00,param_1,param_2,CPPTYPE_MESSAGE,(Descriptor *)0x0);
  *(void **)this = pvVar3;
  pRVar4 = Reflection::RepeatedFieldAccessor(this_00,param_2);
  *(RepeatedFieldAccessor **)(this + 8) = pRVar4;
  pMVar5 = Reflection::GetMessageFactory(this_00);
  pcVar1 = *(code **)((longlong)*pMVar5 + 8);
  pDVar6 = FieldDescriptor::message_type(param_2);
  uVar7 = (*pcVar1)(pMVar5,pDVar6);
  *(undefined8 *)(this + 0x10) = uVar7;
  return this;
}

// RepeatedFieldRefIterator<google::protobuf::Message> @ 14fa6e4c0

/* public: __cdecl google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message>::RepeatedFieldRefIterator<class google::protobuf::Message>(void const
   * __ptr64,class google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,bool,class
   google::protobuf::Message * __ptr64) __ptr64 */

RepeatedFieldRefIterator<google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedFieldRefIterator<google::protobuf::Message>::
RepeatedFieldRefIterator<google::protobuf::Message>
          (RepeatedFieldRefIterator<google::protobuf::Message> *this,void *param_1,
          RepeatedFieldAccessor *param_2,bool param_3,Message *param_4)

{
  undefined8 uVar1;
  
  *(void **)this = param_1;
  *(RepeatedFieldAccessor **)(this + 8) = param_2;
  if (param_3) {
    uVar1 = (**(code **)((longlong)*param_2 + 0x48))();
  }
  else {
    uVar1 = (**(code **)((longlong)*param_2 + 0x50))(param_2);
  }
  *(undefined8 *)(this + 0x10) = uVar1;
  *(Message **)(this + 0x18) = param_4;
  return this;
}

// _Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6e500

/* public: __cdecl std::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 *
   __ptr64>::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) __ptr64 */

_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> * __thiscall
std::_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>::
_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>
          (_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> *this,
          Message **param_1,Message **param_2)

{
  *(Message ***)this = param_1;
  *(Message ***)(this + 8) = param_2;
  return this;
}

// _Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6e520

/* public: __cdecl std::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 *
   __ptr64>::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 * __ptr64>(class
   google::protobuf::Message const * __ptr64 * __ptr64) __ptr64 */

_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> * __thiscall
std::_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>::
_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>
          (_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> *this,
          Message **param_1)

{
  *(Message ***)this = param_1;
  *(Message ***)(this + 8) = param_1;
  return this;
}

// _Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6e540

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::Message const * __ptr64> >::_Uninitialized_backout_al<class
   std::allocator<class google::protobuf::Message const * __ptr64> >(class google::protobuf::Message
   const * __ptr64 * __ptr64,class std::allocator<class google::protobuf::Message const * __ptr64> &
   __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_> * __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>::
_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,Message **param_1,allocator<google::protobuf::Message_const*___ptr64> *param_2)

{
  *(Message ***)this = param_1;
  *(Message ***)(this + 8) = param_1;
  *(allocator<google::protobuf::Message_const*___ptr64> **)(this + 0x10) = param_2;
  return this;
}

// _Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> @ 14fa6e560

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::MapKey> >::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::MapKey> >(class google::protobuf::MapKey * __ptr64,class std::allocator<class
   google::protobuf::MapKey> & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> * __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>::
_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1,allocator<google::protobuf::MapKey> *param_2)

{
  *(MapKey **)this = param_1;
  *(MapKey **)(this + 8) = param_1;
  *(allocator<google::protobuf::MapKey> **)(this + 0x10) = param_2;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_> @ 14fa6e580

/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> >
   >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > >(class google::protobuf::Message const * __ptr64 *
   __ptr64,struct std::_Container_base0 const * __ptr64) __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
* __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
           *this,Message **param_1,_Container_base0 *param_2)

{
  *(Message ***)this = param_1;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> @ 14fa6e590

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >::_Vector_const_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > >(class
   google::protobuf::MapKey * __ptr64,struct std::_Container_base0 const * __ptr64) __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> *
__thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
           *this,MapKey *param_1,_Container_base0 *param_2)

{
  *(MapKey **)this = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_> @ 14fa6e5a0

/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > >::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::Message const * __ptr64> > >(class
   google::protobuf::Message const * __ptr64 * __ptr64,struct std::_Container_base0 const * __ptr64)
   __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_> *
__thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
           *this,Message **param_1,_Container_base0 *param_2)

{
  *(Message ***)this = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> @ 14fa6e5b0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > >::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >(class google::protobuf::MapKey *
   __ptr64,struct std::_Container_base0 const * __ptr64) __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> *this,
          MapKey *param_1,_Container_base0 *param_2)

{
  *(MapKey **)this = param_1;
  return this;
}

// _Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> @ 14fa6e5c0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const
   * __ptr64> >::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const *
   __ptr64> >(class google::protobuf::Message const * __ptr64 * __ptr64,class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64) __ptr64 */

_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> * __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>::
_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>
          (_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> *this,
          Message **param_1,Message **param_2,Message **param_3)

{
  *(Message ***)this = param_1;
  *(Message ***)(this + 8) = param_2;
  *(Message ***)(this + 0x10) = param_3;
  return this;
}

// _Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> @ 14fa6e5e0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const
   * __ptr64> >::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const *
   __ptr64> >(void) __ptr64 */

_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> * __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>::
_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>
          (_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Vector_val<std::_Simple_types<google::protobuf::MapKey>_> @ 14fa6e600

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey>
   >::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >(class
   google::protobuf::MapKey * __ptr64,class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64) __ptr64 */

_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> * __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>::
_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>
          (_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> *this,MapKey *param_1,
          MapKey *param_2,MapKey *param_3)

{
  *(MapKey **)this = param_1;
  *(MapKey **)(this + 8) = param_2;
  *(MapKey **)(this + 0x10) = param_3;
  return this;
}

// _Vector_val<std::_Simple_types<google::protobuf::MapKey>_> @ 14fa6e620

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey>
   >::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >(void) __ptr64 */

_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> * __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>::
_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>
          (_Vector_val<std::_Simple_types<google::protobuf::MapKey>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<google::protobuf::Message_const*___ptr64> @ 14fa6e640

/* public: __cdecl std::allocator<class google::protobuf::Message const * __ptr64>::allocator<class
   google::protobuf::Message const * __ptr64>(void) __ptr64 */

allocator<google::protobuf::Message_const*___ptr64> * __thiscall
std::allocator<google::protobuf::Message_const*___ptr64>::
allocator<google::protobuf::Message_const*___ptr64>
          (allocator<google::protobuf::Message_const*___ptr64> *this)

{
  return this;
}

// allocator<google::protobuf::MapKey> @ 14fa6e650

/* public: __cdecl std::allocator<class google::protobuf::MapKey>::allocator<class
   google::protobuf::MapKey>(void) __ptr64 */

allocator<google::protobuf::MapKey> * __thiscall
std::allocator<google::protobuf::MapKey>::allocator<google::protobuf::MapKey>
          (allocator<google::protobuf::MapKey> *this)

{
  return this;
}

// vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6e660

/* public: __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >(class std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> > && __ptr64) __ptr64 */

vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
* __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this,vector<class_google::protobuf::Message_const*___ptr64,class_std::allocator<class_google::protobuf::Message_const*___ptr64>_>
                 *param_1)

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

// vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6e690

/* public: __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >(void) __ptr64 */

vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
* __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> @ 14fa6e6b0

/* public: __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >(class std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> > && __ptr64) __ptr64 */

vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          vector<class_google::protobuf::MapKey,class_std::allocator<class_google::protobuf::MapKey>_>
          *param_1)

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

// vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> @ 14fa6e6e0

/* public: __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >(void) __ptr64 */

vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// MapEntryMessageComparator @ 14fa6e700

/* public: __cdecl
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator::MapEntryMessageComparator(class
   google::protobuf::Descriptor const * __ptr64) __ptr64 */

MapEntryMessageComparator * __thiscall
google::protobuf::DynamicMapSorter::MapEntryMessageComparator::MapEntryMessageComparator
          (MapEntryMessageComparator *this,Descriptor *param_1)

{
  *(FieldDescriptor **)this = param_1->fields_;
  return this;
}

// ~RepeatedFieldRefIterator<google::protobuf::Message> @ 14fa6e720

/* public: __cdecl google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message>::~RepeatedFieldRefIterator<class google::protobuf::Message>(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldRefIterator<google::protobuf::Message>::
~RepeatedFieldRefIterator<google::protobuf::Message>
          (RepeatedFieldRefIterator<google::protobuf::Message> *this)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)(this + 8) + 0x70))
            (*(longlong **)(this + 8),*(undefined8 *)this,*(undefined8 *)(this + 0x10));
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fa6e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> @ 14fa6e760

/* public: __cdecl std::_Optimistic_temporary_buffer<class google::protobuf::Message const *
   __ptr64>::~_Optimistic_temporary_buffer<class google::protobuf::Message const * __ptr64>(void)
   __ptr64 */

void __thiscall
std::_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64>::
~_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64>
          (_Optimistic_temporary_buffer<google::protobuf::Message_const*___ptr64> *this)

{
  if (0x200 < *(ulonglong *)(this + 8)) {
    ::operator_delete(*(void **)this);
    return;
  }
  return;
}

// ~_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> @ 14fa6e780

/* public: __cdecl std::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 *
   __ptr64>::~_Uninitialized_backout<class google::protobuf::Message const * __ptr64 *
   __ptr64>(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>::
~_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>
          (_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> *this)

{
  return;
}

// ~_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6e790

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::Message const * __ptr64> >::~_Uninitialized_backout_al<class
   std::allocator<class google::protobuf::Message const * __ptr64> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>::
~_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

{
  return;
}

// ~_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> @ 14fa6e7a0

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::MapKey> >::~_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::MapKey> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>::
~_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> *this)

{
  return;
}

// ~vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_> @ 14fa6e7b0

/* public: __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::~vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::
~vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

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

// ~vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> @ 14fa6e820

/* public: __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::~vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >(void) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
~vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = ((*(longlong *)(this + 0x10) - (longlong)pvVar1) / 0x18) * 0x18;
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

// operator= @ 14fa6e8b0

/* public: class std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> > & __ptr64 __cdecl
   std::vector<class google::protobuf::Message const * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> >::operator=(class std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> > && __ptr64) __ptr64 */

vector<class_google::protobuf::Message_const*___ptr64,class_std::allocator<class_google::protobuf::Message_const*___ptr64>_>
* __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::operator=(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
            *this,vector<class_google::protobuf::Message_const*___ptr64,class_std::allocator<class_google::protobuf::Message_const*___ptr64>_>
                  *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (this != (vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
               *)param_1) {
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
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return (vector<class_google::protobuf::Message_const*___ptr64,class_std::allocator<class_google::protobuf::Message_const*___ptr64>_>
          *)this;
}

// operator== @ 14fa6e960

/* public: bool __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >::operator==(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > const & __ptr64)const __ptr64 */

bool __thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
operator==(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
           *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
                 *param_1)

{
  return *(longlong *)this == *(longlong *)param_1;
}

// operator!= @ 14fa6e970

/* public: bool __cdecl google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message>::operator!=(class
   google::protobuf::internal::RepeatedFieldRefIterator<class google::protobuf::Message> const &
   __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldRefIterator<google::protobuf::Message>::operator!=
          (RepeatedFieldRefIterator<google::protobuf::Message> *this,
          RepeatedFieldRefIterator<class_google::protobuf::Message> *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(this + 8) + 0x68))
                    (*(longlong **)(this + 8),*(undefined8 *)this,*(undefined8 *)(this + 0x10),
                     *(undefined8 *)(param_1 + 0x10));
  return cVar1 == '\0';
}

// operator[] @ 14fa6e9a0

/* public: class google::protobuf::Message const * __ptr64 & __ptr64 __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::operator[](unsigned __int64) __ptr64 */

Message ** __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::operator[](vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
             *this,__uint64 param_1)

{
  return (Message **)(*(longlong *)this + param_1 * 8);
}

// operator* @ 14fa6e9b0

/* public: class google::protobuf::Message const & __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message>::operator*(void)const __ptr64 */

Message * __thiscall
google::protobuf::internal::RepeatedFieldRefIterator<google::protobuf::Message>::operator*
          (RepeatedFieldRefIterator<google::protobuf::Message> *this)

{
  Message *pMVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fa6e9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar1 = (Message *)
           (**(code **)(**(longlong **)(this + 8) + 0x78))
                     (*(longlong **)(this + 8),*(undefined8 *)this,*(undefined8 *)(this + 0x10),
                      *(undefined8 *)(this + 0x18));
  return pMVar1;
}

// operator* @ 14fa6e9d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey const & __ptr64 __cdecl std::_Vector_const_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >
   >::operator*(void)const __ptr64 */

MapKey * __thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
operator*(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
          *this)

{
  return *(MapKey **)this;
}

// operator* @ 14fa6e9e0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey & __ptr64 __cdecl std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >
   >::operator*(void)const __ptr64 */

MapKey * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::operator*
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> *this)

{
  return *(MapKey **)this;
}

// operator++ @ 14fa6e9f0

/* public: class google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message> & __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message>::operator++(void) __ptr64 */

RepeatedFieldRefIterator<class_google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedFieldRefIterator<google::protobuf::Message>::operator++
          (RepeatedFieldRefIterator<google::protobuf::Message> *this)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(this + 8) + 0x60))
                    (*(longlong **)(this + 8),*(undefined8 *)this,*(undefined8 *)(this + 0x10));
  *(undefined8 *)(this + 0x10) = uVar1;
  return (RepeatedFieldRefIterator<class_google::protobuf::Message> *)this;
}

// operator++ @ 14fa6ea20

/* public: class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > & __ptr64 __cdecl std::_Vector_const_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > >::operator++(void)
   __ptr64 */

_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
* __thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
operator++(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
           *this)

{
  *(longlong *)this = *(longlong *)this + 0x18;
  return (_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
          *)this;
}

// operator++ @ 14fa6ea30

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > & __ptr64 __cdecl std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> > >::operator++(void)
   __ptr64 */

_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
* __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::operator++
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> *this)

{
  *(longlong *)this = *(longlong *)this + 0x18;
  return (_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
          *)this;
}

// FUN_14fa6eaa0 @ 14fa6eaa0

void FUN_14fa6eaa0(undefined8 *param_1,int param_2)

{
  EnumDescriptor *this;
  EnumValueDescriptor *pEVar1;
  UnknownFieldSet *this_00;
  
  this = google::protobuf::FieldDescriptor::enum_type((FieldDescriptor *)param_1[1]);
  pEVar1 = google::protobuf::EnumDescriptor::FindValueByNumber(this,param_2);
  if (pEVar1 != (EnumValueDescriptor *)0x0) {
    google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)*param_1,param_2);
    return;
  }
  this_00 = google::protobuf::Reflection::MutableUnknownFields
                      ((Reflection *)param_1[2],(Message *)param_1[3]);
  google::protobuf::UnknownFieldSet::AddVarint(this_00,*(int *)(param_1[1] + 8),(longlong)param_2);
  return;
}

// operator() @ 14fa6eb10

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`12'::<lambda_1>::operator()(char const * __ptr64)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l12::<lambda_1>::operator()(<lambda_1> *this,char *param_1)

{
  google::protobuf::internal::WireFormat::MessageSetParser::ParseElement
            (*(MessageSetParser **)this,param_1,(ParseContext *)**(undefined8 **)(this + 8));
  return;
}

// operator() @ 14fa6eb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl
   google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()(class
   google::protobuf::Message const * __ptr64,class google::protobuf::Message const * __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()
          (MapEntryMessageComparator *this,Message *param_1,Message *param_2)

{
  Reflection *this_00;
  FieldDescriptor *pFVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Metadata *pMVar7;
  __int64 _Var8;
  __int64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  undefined8 _Buf1;
  _Bxty *p_Var12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  byte bVar16;
  undefined8 uVar17;
  _Bxty *p_Var18;
  undefined1 auStack_a8 [40];
  Metadata local_80;
  _Bxty local_70;
  ulonglong local_60;
  ulonglong local_58;
  _Bxty local_50;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pMVar7 = protobuf::Message::GetMetadata(param_1,&local_80);
  this_00 = pMVar7->reflection;
  pFVar1 = *(FieldDescriptor **)this;
  switch(*(undefined4 *)
          ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar1->type_ * 4)) {
  case 1:
    iVar6 = Reflection::GetInt32(this_00,param_1,pFVar1);
    iVar3 = Reflection::GetInt32(this_00,param_2,*(FieldDescriptor **)this);
    bVar15 = iVar6 < iVar3;
    break;
  case 2:
    _Var8 = Reflection::GetInt64(this_00,param_1,pFVar1);
    _Var9 = Reflection::GetInt64(this_00,param_2,*(FieldDescriptor **)this);
    bVar15 = _Var8 < _Var9;
    break;
  case 3:
    uVar4 = Reflection::GetUInt32(this_00,param_1,pFVar1);
    uVar5 = Reflection::GetUInt32(this_00,param_2,*(FieldDescriptor **)this);
    bVar15 = uVar4 < uVar5;
    break;
  case 4:
    _Var10 = Reflection::GetUInt64(this_00,param_1,pFVar1);
    _Var11 = Reflection::GetUInt64(this_00,param_2,*(FieldDescriptor **)this);
    bVar15 = _Var10 < _Var11;
    break;
  default:
    bVar15 = true;
    break;
  case 7:
    bVar2 = Reflection::GetBool(this_00,param_1,pFVar1);
    bVar15 = Reflection::GetBool(this_00,param_2,*(FieldDescriptor **)this);
    bVar15 = bVar15 && !bVar2;
    break;
  case 9:
    Reflection::GetString
              (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               param_1,pFVar1);
    Reflection::GetString
              (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               param_2,*(FieldDescriptor **)this);
    uVar13 = local_38;
    uVar17 = local_50._Ptr;
    p_Var18 = (_Bxty *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    p_Var12 = &local_70;
    if (0xf < local_58) {
      p_Var12 = p_Var18;
    }
    _Buf1 = &local_50;
    if (0xf < local_38) {
      _Buf1 = local_50._Ptr;
    }
    uVar14 = local_40;
    if (local_60 < local_40) {
      uVar14 = local_60;
    }
    iVar6 = memcmp((void *)_Buf1,p_Var12,uVar14);
    if (iVar6 == 0) {
      if (local_40 < local_60) goto LAB_14fa6ecdd;
      if (local_40 != local_60) goto LAB_14fa6ed1f;
      bVar16 = 0;
    }
    else if (iVar6 < 0) {
LAB_14fa6ecdd:
      bVar16 = 0xff;
    }
    else {
LAB_14fa6ed1f:
      bVar16 = 0;
    }
    bVar15 = (bool)(bVar16 >> 7);
    if (0xf < local_58) {
      uVar13 = local_58 + 1;
      p_Var12 = p_Var18;
      if (0xfff < uVar13) {
        uVar13 = local_58 + 0x28;
        p_Var12 = *(_Bxty **)(p_Var18->_Buf + -8);
        if ((char *)0x1f < p_Var18->_Buf + (-8 - (longlong)p_Var12)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(p_Var12,uVar13);
      uVar13 = local_38;
      uVar17 = local_50._Ptr;
    }
    local_60 = 0;
    local_58 = 0xf;
    local_70._Buf[0] = '\0';
    if (0xf < uVar13) {
      uVar14 = uVar13 + 1;
      p_Var18 = (_Bxty *)uVar17;
      if (0xfff < uVar14) {
        uVar14 = uVar13 + 0x28;
        p_Var18 = *(_Bxty **)(uVar17 + -8);
        if ((char *)0x1f < (char *)(uVar17 + (-8 - (longlong)p_Var18))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(p_Var18,uVar14);
    }
  }
  return bVar15;
}

// operator() @ 14fa6ede0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()(class
   google::protobuf::MapKey const & __ptr64,class google::protobuf::MapKey const & __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::MapKeySorter::MapKeyComparator::operator()
          (MapKeyComparator *this,MapKey *param_1,MapKey *param_2)

{
  ulonglong uVar1;
  char *_Buf2;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  CppType CVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  basic_string_view<char,std::char_traits<char>_> *pbVar10;
  __int64 _Var11;
  __int64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  ulonglong _Size;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  CVar5 = MapKey::type(param_1);
  switch(CVar5) {
  case CPPTYPE_INT32:
    iVar6 = MapKey::GetInt32Value(param_1);
    iVar7 = MapKey::GetInt32Value(param_2);
    return iVar6 < iVar7;
  case CPPTYPE_INT64:
    _Var11 = MapKey::GetInt64Value(param_1);
    _Var12 = MapKey::GetInt64Value(param_2);
    return _Var11 < _Var12;
  case CPPTYPE_UINT32:
    uVar8 = MapKey::GetUInt32Value(param_1);
    uVar9 = MapKey::GetUInt32Value(param_2);
    return uVar8 < uVar9;
  case CPPTYPE_UINT64:
    _Var13 = MapKey::GetUInt64Value(param_1);
    _Var14 = MapKey::GetUInt64Value(param_2);
    return _Var13 < _Var14;
  default:
    return true;
  case CPPTYPE_BOOL:
    bVar3 = MapKey::GetBoolValue(param_1);
    bVar4 = MapKey::GetBoolValue(param_2);
    return bVar4 && !bVar3;
  case CPPTYPE_STRING:
    break;
  }
  pbVar10 = MapKey::GetStringValue(param_2,&local_28);
  _Buf2 = pbVar10->_Mydata;
  uVar2 = pbVar10->_Mysize;
  pbVar10 = MapKey::GetStringValue(param_1,&local_18);
  uVar1 = pbVar10->_Mysize;
  _Size = uVar1;
  if (uVar2 < uVar1) {
    _Size = uVar2;
  }
  iVar6 = memcmp(pbVar10->_Mydata,_Buf2,_Size);
  if (iVar6 == 0) {
    if (uVar2 <= uVar1) {
      if (uVar1 != uVar2) {
        return false;
      }
      return false;
    }
  }
  else if (-1 < iVar6) {
    return false;
  }
  return true;
}

// ByteSize @ 14fa6ef90

/* WARNING: Type propagation algorithm not settling */
/* public: static unsigned __int64 __cdecl google::protobuf::internal::WireFormat::ByteSize(class
   google::protobuf::Message const & __ptr64) */

__uint64 __cdecl google::protobuf::internal::WireFormat::ByteSize(Message *param_1)

{
  Descriptor *pDVar1;
  Reflection *this;
  ulonglong uVar2;
  __uint64 _Var3;
  FieldDescriptor **ppFVar4;
  FieldDescriptor **ppFVar5;
  int iVar6;
  Metadata *pMVar7;
  __uint64 _Var8;
  UnknownFieldSet *pUVar9;
  int iVar10;
  FieldDescriptor *pFVar11;
  ulong64 uVar12;
  __uint64 _Var13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar17;
  FieldDescriptor *local_res10;
  Metadata local_68;
  Metadata local_58;
  FieldDescriptor *local_48;
  FieldDescriptor **ppFStack_40;
  FieldDescriptor **local_38;
  undefined1 *puVar16;
  
  pMVar7 = protobuf::Message::GetMetadata(param_1,&local_68);
  pDVar1 = pMVar7->descriptor;
  pMVar7 = protobuf::Message::GetMetadata(param_1,&local_58);
  this = pMVar7->reflection;
  _Var13 = 0;
  local_48 = (FieldDescriptor *)0x0;
  ppFStack_40 = (FieldDescriptor **)0x0;
  local_38 = (FieldDescriptor **)0x0;
  _Var3 = _Var13;
  if ((pDVar1->options_->_impl_).map_entry_ == false) {
    Reflection::ListFields
              (this,param_1,
               (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&local_48);
    pFVar11 = local_48;
    ppFVar4 = ppFStack_40;
  }
  else {
    _Var8 = _Var13;
    pFVar11 = local_48;
    ppFVar4 = ppFStack_40;
    if (0 < pDVar1->field_count_) {
      do {
        local_res10 = pDVar1->fields_ + (int)_Var8;
        if (ppFStack_40 == local_38) {
          std::
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                    ((vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                      *)&local_48,ppFStack_40,&local_res10);
        }
        else {
          *ppFStack_40 = local_res10;
          ppFStack_40 = ppFStack_40 + 1;
        }
        uVar14 = (int)_Var8 + 1;
        _Var8 = (__uint64)uVar14;
        pFVar11 = local_48;
        ppFVar4 = ppFStack_40;
      } while ((int)uVar14 < pDVar1->field_count_);
    }
  }
  for (; ppFVar5 = ppFStack_40, pFVar11 != (FieldDescriptor *)ppFStack_40;
      pFVar11 = (FieldDescriptor *)((longlong)pFVar11 + 8)) {
    ppFStack_40 = ppFVar4;
    _Var8 = FieldByteSize(*(FieldDescriptor **)pFVar11,param_1);
    _Var3 = _Var3 + _Var8;
    ppFVar4 = ppFStack_40;
    ppFStack_40 = ppFVar5;
  }
  if ((pDVar1->options_->_impl_).message_set_wire_format_ == false) {
    ppFStack_40 = ppFVar4;
    pUVar9 = Reflection::GetUnknownFields(this,param_1);
    _Var13 = ComputeUnknownFieldsSize(pUVar9);
  }
  else {
    ppFStack_40 = ppFVar4;
    pUVar9 = Reflection::GetUnknownFields(this,param_1);
    iVar6 = UnknownFieldSet::field_count(pUVar9);
    lVar17 = (longlong)iVar6;
    if (0 < iVar6) {
      uVar2 = (pUVar9->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      puVar16 = (undefined1 *)((longlong)&(pUVar9->fields_).soo_rep_.field0_0x0 + 8);
      if ((~((byte)uVar2 >> 2) & 1) == 0) {
        puVar16 = (undefined1 *)(uVar2 & 0xfffffffffffffff8);
      }
      plVar15 = (longlong *)(puVar16 + 8);
      do {
        if (*(int *)((longlong)plVar15 + -4) == 3) {
          uVar14 = *(uint *)(plVar15 + -1) | 1;
          if (__isa_available < 5) {
            iVar6 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            iVar6 = 0x1f - iVar6;
          }
          else {
            iVar6 = LZCOUNT(uVar14);
          }
          uVar14 = *(uint *)(*plVar15 + 0x10) | 1;
          if (__isa_available < 5) {
            iVar10 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
              }
            }
            iVar10 = 0x1f - iVar10;
          }
          else {
            iVar10 = LZCOUNT(uVar14);
          }
          _Var13 = _Var13 + WireFormatLite::kMessageSetItemTagsSize +
                   (ulonglong)(iVar6 * -9 + 0x160U >> 6) + (longlong)(int)*(uint *)(*plVar15 + 0x10)
                   + (ulonglong)(iVar10 * -9 + 0x160U >> 6);
        }
        plVar15 = plVar15 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  if (local_48 != (FieldDescriptor *)0x0) {
    uVar12 = (longlong)local_38 - (longlong)local_48 & 0xfffffffffffffff8;
    pFVar11 = local_48;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      pFVar11 = *(FieldDescriptor **)&local_48[0xffffffffffffffff].field24_0x58;
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pFVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pFVar11,uVar12);
  }
  return _Var13 + _Var3;
}

// BytesSize @ 14fa6f1f0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::BytesSize(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::BytesSize
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1->_Mysize;
  uVar3 = (uint)uVar1 | 1;
  if (4 < __isa_available) {
    return (LZCOUNT(uVar3) * -9 + 0x160U >> 6) + uVar1;
  }
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return ((0x1f - iVar2) * -9 + 0x160U >> 6) + uVar1;
}

// ComputeUnknownFieldsSize @ 14fa6f240

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(class
   google::protobuf::UnknownFieldSet const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(UnknownFieldSet *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  int iVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  __uint64 _Var12;
  undefined1 *puVar11;
  
  _Var7 = 0;
  iVar2 = UnknownFieldSet::field_count(param_1);
  uVar8 = _Var7;
  _Var12 = _Var7;
  iVar9 = __isa_available;
  if (0 < iVar2) {
    do {
      uVar5 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      puVar11 = (undefined1 *)((longlong)&(param_1->fields_).soo_rep_.field0_0x0 + 8);
      if ((~((byte)uVar5 >> 2) & 1) == 0) {
        puVar11 = (undefined1 *)(uVar5 & 0xfffffffffffffff8);
      }
      piVar10 = (int *)(puVar11 + _Var12);
      iVar2 = piVar10[1];
      if (iVar2 == 0) {
        uVar3 = *piVar10 << 3 | 1;
        if (iVar9 < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        uVar5 = *(ulonglong *)(piVar10 + 2) | 1;
        if (iVar9 < 5) {
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar6 = 0x3f - (int)lVar1;
        }
        else {
          iVar6 = (int)LZCOUNT(uVar5);
        }
        _Var7 = _Var7 + (iVar2 * -9 + 0x160U >> 6) + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
      }
      else if (iVar2 == 1) {
        uVar3 = *piVar10 << 3 | 5;
        if (iVar9 < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        _Var7 = _Var7 + 4 + (ulonglong)(iVar2 * -9 + 0x160U >> 6);
      }
      else if (iVar2 == 2) {
        uVar3 = *piVar10 << 3 | 1;
        if (iVar9 < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        _Var7 = _Var7 + 8 + (ulonglong)(iVar2 * -9 + 0x160U >> 6);
      }
      else if (iVar2 == 3) {
        uVar3 = *piVar10 << 3 | 3;
        if (iVar9 < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        uVar3 = (uint)*(longlong *)(*(longlong *)(piVar10 + 2) + 0x10) | 1;
        if (iVar9 < 5) {
          iVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 0x1f - iVar6;
        }
        else {
          iVar6 = LZCOUNT(uVar3);
        }
        _Var7 = _Var7 + (iVar2 * -9 + 0x160U >> 6) +
                (ulonglong)(iVar6 * -9 + 0x160U >> 6) +
                *(longlong *)(*(longlong *)(piVar10 + 2) + 0x10);
      }
      else if (iVar2 == 4) {
        uVar3 = *piVar10 << 3 | 3;
        if (iVar9 < 5) {
          iVar9 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          iVar9 = 0x1f - iVar9;
        }
        else {
          iVar9 = LZCOUNT(uVar3);
        }
        _Var4 = ComputeUnknownFieldsSize(*(UnknownFieldSet **)(piVar10 + 2));
        uVar3 = *piVar10 << 3 | 5;
        if (__isa_available < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        _Var7 = _Var7 + (iVar9 * -9 + 0x160U >> 6) + _Var4 + (ulonglong)(iVar2 * -9 + 0x160U >> 6);
        iVar9 = __isa_available;
      }
      uVar3 = (int)uVar8 + 1;
      iVar2 = UnknownFieldSet::field_count(param_1);
      uVar8 = (ulonglong)uVar3;
      _Var12 = _Var12 + 0x10;
    } while ((int)uVar3 < iVar2);
  }
  return _Var7;
}

// ComputeUnknownFieldsSize @ 14fa6f4c0

/* unsigned __int64 __cdecl google::protobuf::internal::ComputeUnknownFieldsSize(class
   google::protobuf::internal::InternalMetadata const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize * __ptr64) */

__uint64 __cdecl
google::protobuf::internal::ComputeUnknownFieldsSize
          (InternalMetadata *param_1,__uint64 param_2,CachedSize *param_3)

{
  UnknownFieldSet *pUVar1;
  __uint64 _Var2;
  atomic<int> aVar3;
  
  if ((param_1->ptr_ & 1) == 0) {
    pUVar1 = UnknownFieldSet::default_instance();
  }
  else {
    pUVar1 = (UnknownFieldSet *)((param_1->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  _Var2 = WireFormat::ComputeUnknownFieldsSize(pUVar1);
  aVar3 = SUB84(param_2 + _Var2,0);
  if ((aVar3 != (atomic<int>)0x0) || (param_3->atom_ != (atomic<int>)0x0)) {
    param_3->atom_ = aVar3;
  }
  return param_2 + _Var2;
}

// ComputeUnknownMessageSetItemsSize @ 14fa6f520

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(class
   google::protobuf::UnknownFieldSet const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(UnknownFieldSet *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  longlong *plVar6;
  longlong lVar8;
  undefined1 *puVar7;
  
  _Var5 = 0;
  iVar2 = UnknownFieldSet::field_count(param_1);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    uVar1 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    puVar7 = (undefined1 *)((longlong)&(param_1->fields_).soo_rep_.field0_0x0 + 8);
    if ((~((byte)uVar1 >> 2) & 1) == 0) {
      puVar7 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
    }
    plVar6 = (longlong *)(puVar7 + 8);
    do {
      if (*(int *)((longlong)plVar6 + -4) == 3) {
        uVar3 = *(uint *)(plVar6 + -1) | 1;
        if (__isa_available < 5) {
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar2 = 0x1f - iVar2;
        }
        else {
          iVar2 = LZCOUNT(uVar3);
        }
        uVar3 = *(uint *)(*plVar6 + 0x10) | 1;
        if (__isa_available < 5) {
          iVar4 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar4 = 0x1f - iVar4;
        }
        else {
          iVar4 = LZCOUNT(uVar3);
        }
        _Var5 = _Var5 + WireFormatLite::kMessageSetItemTagsSize +
                (ulonglong)(iVar2 * -9 + 0x160U >> 6) + (longlong)(int)*(uint *)(*plVar6 + 0x10) +
                (ulonglong)(iVar4 * -9 + 0x160U >> 6);
      }
      plVar6 = plVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return _Var5;
}

// DecodeDouble @ 14fa6f600

/* public: static double __cdecl google::protobuf::internal::WireFormatLite::DecodeDouble(unsigned
   __int64) */

double __cdecl google::protobuf::internal::WireFormatLite::DecodeDouble(__uint64 param_1)

{
  return (double)param_1;
}

// DecodeFloat @ 14fa6f610

/* public: static float __cdecl google::protobuf::internal::WireFormatLite::DecodeFloat(unsigned
   int) */

float __cdecl google::protobuf::internal::WireFormatLite::DecodeFloat(uint param_1)

{
  return (float)param_1;
}

// DecodeTwoBytes @ 14fa6f620

/* unsigned int __cdecl google::protobuf::internal::DecodeTwoBytes(char const * __ptr64 * __ptr64)
    */

uint __cdecl google::protobuf::internal::DecodeTwoBytes(char **param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)*param_1;
  uVar3 = (uint)(char)uVar1;
  uVar2 = (uVar3 & uVar1) + uVar3;
  *param_1 = (char *)((ulonglong)(uVar2 < uVar3) + 1 + (longlong)*param_1);
  return uVar2;
}

// DecrementRecursionDepth @ 14fa6f650

/* public: void __cdecl google::protobuf::io::CodedInputStream::DecrementRecursionDepth(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::DecrementRecursionDepth(CodedInputStream *this)

{
  if (this->recursion_budget_ < this->recursion_limit_) {
    this->recursion_budget_ = this->recursion_budget_ + 1;
  }
  return;
}

// Encode32 @ 14fa6f670

/* private: static unsigned int __cdecl google::protobuf::io::EpsCopyOutputStream::Encode32(unsigned
   int) */

uint __cdecl google::protobuf::io::EpsCopyOutputStream::Encode32(uint param_1)

{
  return param_1;
}

// FieldByteSize @ 14fa6f680

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormat::FieldByteSize(class google::protobuf::FieldDescriptor
   const * __ptr64,class google::protobuf::Message const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormat::FieldByteSize(FieldDescriptor *param_1,Message *param_2)

{
  undefined1 *puVar1;
  Reflection *this;
  bool bVar2;
  uint uVar3;
  Metadata *pMVar4;
  Message *pMVar5;
  longlong lVar6;
  MapFieldBase *this_00;
  __uint64 _Var7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  Metadata local_28;
  
  pMVar4 = protobuf::Message::GetMetadata(param_2,&local_28);
  this = pMVar4->reflection;
  if ((((param_1->is_extension_) &&
       ((param_1->containing_type_->options_->_impl_).message_set_wire_format_ != false)) &&
      (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)param_1->type_ * 4) == 10
      )) && (!param_1->is_repeated_)) {
    pMVar4 = protobuf::Message::GetMetadata(param_2,&local_28);
    uVar3 = param_1->number_ | 1;
    if (__isa_available < 5) {
      iVar8 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 0x1f - iVar8;
    }
    else {
      iVar8 = LZCOUNT(uVar3);
    }
    lVar11 = WireFormatLite::kMessageSetItemTagsSize + (iVar8 * -9 + 0x160U >> 6);
    pMVar5 = Reflection::GetMessage(pMVar4->reflection,param_2,param_1,(MessageFactory *)0x0);
    lVar6 = (**(code **)(*(longlong *)pMVar5 + 0x10))(pMVar5);
    uVar3 = (uint)lVar6 | 1;
    if (__isa_available < 5) {
      iVar8 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 0x1f - iVar8;
    }
    else {
      iVar8 = LZCOUNT(uVar3);
    }
    return (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar6 + lVar11;
  }
  if (param_1->is_repeated_) {
    if ((param_1->type_ == '\v') && (bVar2 = FieldDescriptor::is_map_message_type(param_1), bVar2))
    {
      this_00 = Reflection::GetMapData(this,param_2,param_1);
      bVar2 = MapFieldBase::IsMapValid(this_00);
      if (bVar2) {
        uVar3 = MapFieldBase::size(this_00);
        uVar12 = (ulonglong)uVar3;
        goto LAB_14fa6f80f;
      }
    }
    uVar3 = Reflection::FieldSize(this,param_2,param_1);
    uVar12 = (ulonglong)uVar3;
  }
  else if ((param_1->containing_type_->options_->_impl_).map_entry_ == false) {
    bVar2 = Reflection::HasField(this,param_2,param_1);
    uVar12 = (ulonglong)bVar2;
  }
  else {
    uVar12 = 1;
  }
LAB_14fa6f80f:
  _Var7 = FieldDataOnlyByteSize(param_1,param_2);
  bVar2 = FieldDescriptor::is_packed(param_1);
  if (bVar2) {
    if (_Var7 != 0) {
      uVar3 = param_1->number_ << 3 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar3);
      }
      lVar6 = (iVar8 * -9 + 0x160U >> 6) + _Var7;
      uVar3 = (uint)_Var7 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        _Var7 = lVar6 + (ulonglong)((0x1f - iVar8) * -9 + 0x160U >> 6);
      }
      else {
        _Var7 = lVar6 + (ulonglong)(LZCOUNT(uVar3) * -9 + 0x160U >> 6);
      }
    }
  }
  else {
    uVar3 = param_1->number_ << 3 | 1;
    if (__isa_available < 5) {
      iVar8 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 0x1f - iVar8;
    }
    else {
      iVar8 = LZCOUNT(uVar3);
    }
    uVar9 = (ulonglong)(iVar8 * -9 + 0x160U >> 6);
    uVar10 = uVar9 * 2;
    if (param_1->type_ != '\n') {
      uVar10 = uVar9;
    }
    _Var7 = uVar10 * uVar12 + _Var7;
  }
  return _Var7;
}

// FieldDataOnlyByteSize @ 14fa6f910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message const &
   __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormat::FieldDataOnlyByteSize
          (FieldDescriptor *param_1,Message *param_2)

{
  Reflection *this;
  FieldDescriptor *pFVar1;
  bool bVar2;
  uint uVar3;
  CppStringType CVar4;
  Metadata *pMVar5;
  Descriptor *pDVar6;
  FieldDescriptor *pFVar7;
  __uint64 _Var8;
  longlong lVar9;
  __int64 _Var10;
  Message *pMVar11;
  ExtensionSet *this_00;
  EnumValueDescriptor *pEVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  undefined1 auStackY_148 [32];
  Metadata local_118;
  MapIterator local_108;
  MapIterator local_b8;
  Rep_u_0 local_68;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pMVar5 = protobuf::Message::GetMetadata(param_2,&local_118);
  this = pMVar5->reflection;
  uVar18 = 0;
  uVar17 = 0;
  if ((param_1->type_ == '\v') && (bVar2 = FieldDescriptor::is_map_message_type(param_1), bVar2)) {
    local_68.as_tree.cordz_info = (long64)Reflection::GetMapData(this,param_2,param_1);
    bVar2 = MapFieldBase::IsMapValid((MapFieldBase *)local_68.as_tree.cordz_info);
    if (bVar2) {
      local_108.value_._0_8_ = 0;
      pMVar5 = protobuf::Message::GetMetadata(param_2,&local_118);
      local_108.map_ = Reflection::MutableMapData(pMVar5->reflection,param_2,param_1);
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar7 = Descriptor::map_key(pDVar6);
      local_108.key_.type_ =
           *(CppType *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4);
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar7 = Descriptor::map_value(pDVar6);
      local_108.value_._8_4_ =
           *(undefined4 *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4);
      local_b8.value_._0_8_ = 0;
      pMVar5 = protobuf::Message::GetMetadata(param_2,&local_118);
      local_b8.map_ = Reflection::MutableMapData(pMVar5->reflection,param_2,param_1);
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar7 = Descriptor::map_key(pDVar6);
      local_b8.key_.type_ =
           *(CppType *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4);
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar7 = Descriptor::map_value(pDVar6);
      local_b8.value_._8_4_ =
           *(undefined4 *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4);
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar7 = pDVar6->fields_;
      pDVar6 = FieldDescriptor::message_type(param_1);
      pFVar1 = pDVar6->fields_;
      MapFieldBase::MapBegin((MapFieldBase *)local_68.as_tree.cordz_info,&local_108);
      MapFieldBase::MapEnd((MapFieldBase *)local_68.as_tree.cordz_info,&local_b8);
      bVar2 = MapFieldBase::EqualIterator(local_108.map_,&local_108,&local_b8);
      while (!bVar2) {
        _Var8 = MapKeyDataOnlyByteSize(pFVar7,&local_108.key_);
        lVar9 = FUN_14fa73250(pFVar1 + 1,&local_108.value_);
        lVar9 = _Var8 + 2 + lVar9;
        uVar3 = (uint)lVar9 | 1;
        if (__isa_available < 5) {
          iVar14 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar14 = 0x1f - iVar14;
        }
        else {
          iVar14 = LZCOUNT(uVar3);
        }
        uVar18 = uVar18 + (ulonglong)(iVar14 * -9 + 0x160U >> 6) + lVar9;
        MapFieldBase::IncreaseIterator(local_108.map_,&local_108);
        bVar2 = MapFieldBase::EqualIterator(local_108.map_,&local_108,&local_b8);
      }
      return uVar18;
    }
  }
  if (param_1->is_repeated_) {
    uVar3 = Reflection::FieldSize(this,param_2,param_1);
    uVar20 = (ulonglong)uVar3;
  }
  else if ((param_1->containing_type_->options_->_impl_).map_entry_ == false) {
    bVar2 = Reflection::HasField(this,param_2,param_1);
    uVar20 = (ulonglong)bVar2;
  }
  else {
    uVar20 = 1;
  }
  switch(param_1->type_) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar17 = uVar20 * 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    uVar17 = uVar20 * 4;
    break;
  case '\x03':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          uVar15 = Reflection::GetRepeatedInt64(this,param_2,param_1,(int)uVar18);
          uVar15 = uVar15 | 1;
          if (__isa_available < 5) {
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar14 = 0x3f - (int)lVar9;
          }
          else {
            iVar14 = (int)LZCOUNT(uVar15);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x280U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      _Var10 = Reflection::GetInt64(this,param_2,param_1);
      uVar17 = WireFormatLite::Int64Size(_Var10);
    }
    break;
  case '\x04':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          _Var8 = Reflection::GetRepeatedUInt64(this,param_2,param_1,(int)uVar18);
          uVar15 = _Var8 | 1;
          if (__isa_available < 5) {
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar14 = 0x3f - (int)lVar9;
          }
          else {
            iVar14 = (int)LZCOUNT(uVar15);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x280U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      _Var8 = Reflection::GetUInt64(this,param_2,param_1);
      uVar17 = WireFormatLite::UInt64Size(_Var8);
    }
    break;
  case '\x05':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          iVar14 = Reflection::GetRepeatedInt32(this,param_2,param_1,(int)uVar18);
          uVar15 = (longlong)iVar14 | 1;
          if (__isa_available < 5) {
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar14 = 0x3f - (int)lVar9;
          }
          else {
            iVar14 = (int)LZCOUNT(uVar15);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x280U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      iVar14 = Reflection::GetInt32(this,param_2,param_1);
      uVar17 = WireFormatLite::Int32Size(iVar14);
    }
    break;
  case '\b':
    uVar17 = uVar20;
    break;
  case '\t':
  case '\f':
    CVar4 = FieldDescriptor::cpp_string_type(param_1);
    if (CVar4 == kCord) {
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        Reflection::GetCord(this,(Cord *)&local_68.as_tree,param_2,param_1);
        if ((local_68.as_tree.cordz_info & 1U) == 0) {
          uVar15 = (ulonglong)(longlong)local_68.data[0] >> 1;
        }
        else {
          uVar15 = (local_68.as_tree.rep)->length;
        }
        uVar3 = (uint)uVar15 | 1;
        if (__isa_available < 5) {
          iVar14 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar14 = 0x1f - iVar14;
        }
        else {
          iVar14 = LZCOUNT(uVar3);
        }
        uVar17 = uVar17 + (iVar14 * -9 + 0x160U >> 6) + uVar15;
        if ((local_68.as_tree.cordz_info & 1U) != 0) {
          absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_68.as_tree);
        }
      }
    }
    else {
      uVar15 = uVar18;
      if (uVar20 != 0) {
        do {
          local_68.as_tree.rep = (CordRep *)0x0;
          local_58 = 0;
          local_50 = 0xf;
          local_68.as_tree.cordz_info = 0;
          if (param_1->is_repeated_) {
            pbVar13 = Reflection::GetRepeatedStringReference
                                (this,param_2,param_1,(int)uVar15,
                                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)&local_68.as_tree);
          }
          else {
            pbVar13 = Reflection::GetStringReference
                                (this,param_2,param_1,
                                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)&local_68.as_tree);
          }
          uVar17 = (pbVar13->_Mypair)._Myval2._Mysize;
          uVar3 = (uint)uVar17 | 1;
          if (__isa_available < 5) {
            iVar14 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            iVar14 = 0x1f - iVar14;
          }
          else {
            iVar14 = LZCOUNT(uVar3);
          }
          uVar17 = uVar18 + (iVar14 * -9 + 0x160U >> 6) + uVar17;
          if (0xf < local_50) {
            uVar18 = local_50 + 1;
            uVar16 = local_68.as_tree.cordz_info;
            if (0xfff < uVar18) {
              uVar18 = local_50 + 0x28;
              uVar16 = *(longlong *)(local_68.as_tree.cordz_info + -8);
              if (0x1f < (local_68.as_tree.cordz_info - uVar16) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar16,uVar18);
          }
          uVar15 = uVar15 + 1;
          uVar18 = uVar17;
        } while (uVar15 < uVar20);
      }
    }
    break;
  case '\n':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          pMVar11 = Reflection::GetRepeatedMessage(this,param_2,param_1,(int)uVar18);
          lVar9 = (**(code **)(*(longlong *)pMVar11 + 0x10))(pMVar11);
          uVar17 = uVar19 + lVar9;
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      pMVar11 = Reflection::GetMessage(this,param_2,param_1,(MessageFactory *)0x0);
      uVar17 = (**(code **)(*(longlong *)pMVar11 + 0x10))(pMVar11);
    }
    break;
  case '\v':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          pMVar11 = Reflection::GetRepeatedMessage(this,param_2,param_1,(int)uVar18);
          lVar9 = (**(code **)(*(longlong *)pMVar11 + 0x10))(pMVar11);
          uVar3 = (uint)lVar9 | 1;
          if (__isa_available < 5) {
            iVar14 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            iVar14 = 0x1f - iVar14;
          }
          else {
            iVar14 = LZCOUNT(uVar3);
          }
          uVar17 = uVar19 + (ulonglong)(iVar14 * -9 + 0x160U >> 6) + lVar9;
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else if (param_1->is_extension_) {
      this_00 = Reflection::GetExtensionSet(this,param_2);
      _Var8 = ExtensionSet::GetMessageByteSizeLong(this_00,param_1->number_);
      uVar17 = WireFormatLite::LengthDelimitedSize(_Var8);
    }
    else {
      pMVar11 = Reflection::GetMessage(this,param_2,param_1,(MessageFactory *)0x0);
      uVar17 = WireFormatLite::MessageSize<google::protobuf::Message>(pMVar11);
    }
    break;
  case '\r':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          uVar3 = Reflection::GetRepeatedUInt32(this,param_2,param_1,(int)uVar18);
          uVar3 = uVar3 | 1;
          if (__isa_available < 5) {
            iVar14 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            iVar14 = 0x1f - iVar14;
          }
          else {
            iVar14 = LZCOUNT(uVar3);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x160U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      uVar3 = Reflection::GetUInt32(this,param_2,param_1);
      uVar17 = WireFormatLite::UInt32Size(uVar3);
    }
    break;
  case '\x0e':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          pEVar12 = Reflection::GetRepeatedEnum(this,param_2,param_1,(int)uVar18);
          uVar15 = (longlong)pEVar12->number_ | 1;
          if (__isa_available < 5) {
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar14 = 0x3f - (int)lVar9;
          }
          else {
            iVar14 = (int)LZCOUNT(uVar15);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x280U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      pEVar12 = Reflection::GetEnum(this,param_2,param_1);
      uVar17 = WireFormatLite::EnumSize(pEVar12->number_);
    }
    break;
  case '\x11':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          iVar14 = Reflection::GetRepeatedInt32(this,param_2,param_1,(int)uVar18);
          uVar3 = iVar14 >> 0x1f ^ iVar14 * 2 | 1;
          if (__isa_available < 5) {
            iVar14 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            iVar14 = 0x1f - iVar14;
          }
          else {
            iVar14 = LZCOUNT(uVar3);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x160U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      iVar14 = Reflection::GetInt32(this,param_2,param_1);
      uVar17 = WireFormatLite::SInt32Size(iVar14);
    }
    break;
  case '\x12':
    if (param_1->is_repeated_) {
      uVar19 = uVar18;
      if (uVar20 != 0) {
        do {
          _Var10 = Reflection::GetRepeatedInt64(this,param_2,param_1,(int)uVar18);
          uVar15 = _Var10 >> 0x3f ^ _Var10 * 2 | 1;
          if (__isa_available < 5) {
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar14 = 0x3f - (int)lVar9;
          }
          else {
            iVar14 = (int)LZCOUNT(uVar15);
          }
          uVar17 = uVar19 + (iVar14 * -9 + 0x280U >> 6);
          uVar18 = uVar18 + 1;
          uVar19 = uVar17;
        } while (uVar18 < uVar20);
      }
    }
    else {
      _Var10 = Reflection::GetInt64(this,param_2,param_1);
      uVar17 = WireFormatLite::SInt64Size(_Var10);
    }
  }
  return uVar17;
}

// FromIntSize @ 14fa70250

/* unsigned __int64 __cdecl google::protobuf::internal::FromIntSize(int) */

__uint64 __cdecl google::protobuf::internal::FromIntSize(int param_1)

{
  return (ulonglong)(uint)param_1;
}

// GetLengthDelimitedSize @ 14fa70260

/* public: unsigned __int64 __cdecl
   google::protobuf::UnknownField::GetLengthDelimitedSize(void)const __ptr64 */

__uint64 __thiscall google::protobuf::UnknownField::GetLengthDelimitedSize(UnknownField *this)

{
  return (((this->data_).string_value)->_Mypair)._Myval2._Mysize;
}

// GetMessageFieldDescriptor @ 14fa70270

/* public: static class google::protobuf::Descriptor const * __ptr64 __cdecl
   google::protobuf::internal::RefTypeTraits<class
   google::protobuf::Message,void>::GetMessageFieldDescriptor(void) */

Descriptor * __cdecl
google::protobuf::internal::RefTypeTraits<google::protobuf::Message,void>::GetMessageFieldDescriptor
          (void)

{
  return (Descriptor *)0x0;
}

// GetTagWireType @ 14fa70280

/* public: static enum google::protobuf::internal::WireFormatLite::WireType __cdecl
   google::protobuf::internal::WireFormatLite::GetTagWireType(unsigned int) */

WireType __cdecl google::protobuf::internal::WireFormatLite::GetTagWireType(uint param_1)

{
  return param_1 & (WIRETYPE_END_GROUP|WIRETYPE_START_GROUP);
}

// FUN_14fa70290 @ 14fa70290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14fa70290(Message *param_1,char *param_2,ParseContext *param_3,int param_4,
                    Reflection *param_5,FieldDescriptor *param_6)

{
  int *piVar1;
  MessageFactory *pMVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  MessageLite *this;
  char *pcVar6;
  Descriptor *this_00;
  FieldDescriptor *this_01;
  EnumDescriptor *this_02;
  Metadata *pMVar7;
  EnumValueDescriptor *pEVar8;
  UnknownFieldSet *this_03;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  undefined8 uVar10;
  ulong64 uVar11;
  undefined1 auStack_98 [40];
  Metadata local_70;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar2 = (param_3->data_).factory;
  if (param_6->is_repeated_) {
    this = (MessageLite *)google::protobuf::Reflection::AddMessage(param_5,param_1,param_6,pMVar2);
  }
  else {
    this = (MessageLite *)
           google::protobuf::Reflection::MutableMessage(param_5,param_1,param_6,pMVar2);
  }
  if (((byte)param_4 & 7) == 3) {
    piVar1 = &param_3->depth_;
    *piVar1 = *piVar1 + -1;
    pcVar6 = (char *)0x0;
    if (-1 < *piVar1) {
      param_3->group_depth_ = param_3->group_depth_ + 1;
      pcVar6 = google::protobuf::MessageLite::_InternalParse(this,param_2,param_3);
      param_3->group_depth_ = param_3->group_depth_ + -1;
      param_3->depth_ = param_3->depth_ + 1;
      lVar3 = param_3->_padding_;
      *(undefined4 *)&param_3->_padding_ = 0;
      if ((int)lVar3 != param_4) {
        pcVar6 = (char *)0x0;
      }
    }
  }
  else {
    pcVar6 = google::protobuf::internal::ParseContext::ParseMessage(param_3,this,param_2);
    if (((pcVar6 != (char *)0x0) && (param_6->type_ == '\v')) &&
       (bVar4 = google::protobuf::FieldDescriptor::is_map_message_type(param_6), bVar4)) {
      this_00 = google::protobuf::FieldDescriptor::message_type(param_6);
      this_01 = google::protobuf::Descriptor::map_value(this_00);
      this_02 = google::protobuf::FieldDescriptor::enum_type(this_01);
      if ((this_02 != (EnumDescriptor *)0x0) &&
         (bVar4 = google::protobuf::internal::cpp::HasPreservingUnknownEnumSemantics(this_01),
         !bVar4)) {
        pMVar7 = google::protobuf::Message::GetMetadata((Message *)this,&local_70);
        iVar5 = google::protobuf::Reflection::GetEnumValue
                          (pMVar7->reflection,(Message *)this,this_01);
        pEVar8 = google::protobuf::EnumDescriptor::FindValueByNumber(this_02,iVar5);
        if (pEVar8 == (EnumValueDescriptor *)0x0) {
          this_03 = google::protobuf::Reflection::MutableUnknownFields(param_5,param_1);
          pbVar9 = google::protobuf::MessageLite::SerializeAsString
                             (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60);
          google::protobuf::UnknownFieldSet::AddLengthDelimited<>(this_03,param_6->number_,pbVar9);
          if (0xf < local_48) {
            uVar11 = local_48 + 1;
            uVar10 = local_60._Ptr;
            if (0xfff < uVar11) {
              uVar11 = local_48 + 0x28;
              uVar10 = *(undefined8 *)(local_60._Ptr + -8);
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar10,uVar11);
          }
          google::protobuf::Reflection::RemoveLast(param_5,param_1,param_6);
        }
      }
    }
  }
  return pcVar6;
}

// IncrementRecursionDepth @ 14fa70470

/* public: bool __cdecl google::protobuf::io::CodedInputStream::IncrementRecursionDepth(void)
   __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::IncrementRecursionDepth(CodedInputStream *this)

{
  this->recursion_budget_ = this->recursion_budget_ + -1;
  return (bool)((byte)((uint)this->recursion_budget_ >> 0x1f) ^ 1);
}

// InternalSerializeField @ 14fa70490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::InternalSerializeField(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message const &
   __ptr64,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::InternalSerializeField
          (FieldDescriptor *param_1,Message *param_2,uchar *param_3,EpsCopyOutputStream *param_4)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  double dVar2;
  MapKey *pMVar3;
  undefined1 uVar4;
  MapKey *pMVar5;
  bool bVar6;
  integral_constant<bool,1> iVar7;
  int iVar8;
  CppStringType CVar9;
  Metadata *pMVar10;
  MessageLite *pMVar11;
  uchar *puVar12;
  MapFieldBase *this;
  MapIterator *pMVar13;
  ulonglong uVar14;
  MapKey **ppMVar15;
  longlong lVar16;
  RepeatedField<int> *pRVar17;
  RepeatedField<__int64> *pRVar18;
  integral_constant<bool,1> *piVar19;
  RepeatedField<unsigned_int> *pRVar20;
  RepeatedField<unsigned___int64> *pRVar21;
  RepeatedField<float> *pRVar22;
  RepeatedField<double> *pRVar23;
  RepeatedField<bool> *pRVar24;
  __uint64 _Var25;
  EnumValueDescriptor *pEVar26;
  MapKey *pMVar27;
  MapKey *pMVar28;
  LogMessage *this_00;
  uint uVar29;
  uint uVar30;
  ShortSooRep_u_8 SVar31;
  longlong *plVar32;
  ulonglong uVar33;
  ulong64 uVar34;
  void *pvVar35;
  byte *pbVar36;
  MapKey *pMVar37;
  byte bVar38;
  Reflection *pRVar39;
  ShortSooRep_u_8 *pSVar40;
  int *piVar41;
  ShortSooRep_u_8 *pSVar42;
  int *piVar43;
  int *piVar44;
  ShortSooRep_u_8 *pSVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_298 [32];
  undefined1 local_268;
  uint local_264;
  SooRep_u_0 local_260;
  longlong local_250;
  MapKey *local_248;
  MapKey *local_240;
  MapKey *local_238;
  Reflection *local_230;
  basic_string_view<char,std::char_traits<char>_> local_228;
  MapKey *local_218;
  char *local_208 [2];
  MapKey *local_1f8;
  MapKey *pMStack_1f0;
  MapKey *local_1e8;
  SooRep_u_0 local_1e0;
  undefined1 local_1d0 [16];
  SooRep_u_0 local_1c0;
  undefined1 local_1b0 [16];
  SooRep_u_0 local_1a0;
  undefined1 local_190 [16];
  SooRep_u_0 local_180;
  MapKey *local_168;
  MapKey *pMStack_160;
  basic_string_view<char,std::char_traits<char>_> local_158;
  MapIterator local_148;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  Metadata local_e8;
  MapIterator local_d8;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  piVar41 = &local_1a0.long_rep.size;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pMVar28 = (MapKey *)0x0;
  uVar29 = 0;
  local_238 = (MapKey *)param_2;
  pMVar10 = protobuf::Message::GetMetadata(param_2,&local_e8);
  pRVar39 = pMVar10->reflection;
  local_230 = pRVar39;
  if ((((param_1->is_extension_) &&
       ((param_1->containing_type_->options_->_impl_).message_set_wire_format_ != false)) &&
      (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)param_1->type_ * 4) == 10
      )) && (!param_1->is_repeated_)) {
    pMVar10 = protobuf::Message::GetMetadata(param_2,&local_e8);
    pRVar39 = pMVar10->reflection;
    if (param_4->end_ <= param_3) {
      param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
    }
    *param_3 = '\v';
    uVar29 = param_1->number_;
    param_3[1] = '\x10';
    pbVar36 = param_3 + 2;
    for (; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
      *pbVar36 = (byte)uVar29 | 0x80;
      pbVar36 = pbVar36 + 1;
    }
    *pbVar36 = (byte)uVar29;
    pMVar11 = (MessageLite *)Reflection::GetMessage(pRVar39,param_2,param_1,(MessageFactory *)0x0);
    iVar8 = MessageLite::GetCachedSize(pMVar11);
    puVar12 = WireFormatLite::InternalWriteMessage(3,pMVar11,iVar8,pbVar36 + 1,param_4);
    if (param_4->end_ <= puVar12) {
      puVar12 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,puVar12);
    }
    *puVar12 = '\f';
    return (uchar *)(integral_constant<bool,1> *)(puVar12 + 1);
  }
  if ((param_1->type_ == '\v') && (bVar6 = FieldDescriptor::is_map_message_type(param_1), bVar6)) {
    this = Reflection::GetMapData(pRVar39,param_2,param_1);
    bVar6 = MapFieldBase::IsMapValid(this);
    if (!bVar6) goto LAB_14fa70899;
    if (param_4->is_serialization_deterministic_ == false) {
      Reflection::MapBegin(pRVar39,&local_148,param_2,param_1);
      pMVar13 = Reflection::MapEnd(pRVar39,&local_d8,param_2,param_1);
      bVar6 = MapFieldBase::EqualIterator(local_148.map_,&local_148,pMVar13);
      while (!bVar6) {
        param_3 = (uchar *)FUN_14fa72980(param_1,&local_148.key_,&local_148.value_,param_3);
        MapFieldBase::IncreaseIterator(local_148.map_,&local_148);
        pMVar13 = Reflection::MapEnd(pRVar39,&local_d8,param_2,param_1);
        bVar6 = MapFieldBase::EqualIterator(local_148.map_,&local_148,pMVar13);
      }
      return param_3;
    }
    local_228._Mydata = (char *)0x0;
    local_228._Mysize = 0;
    local_240 = (MapKey *)0x0;
    local_218 = (MapKey *)0x0;
    Reflection::MapBegin(pRVar39,&local_148,param_2,param_1);
    pMVar13 = Reflection::MapEnd(pRVar39,&local_d8,param_2,param_1);
    bVar6 = MapFieldBase::EqualIterator(local_148.map_,&local_148,pMVar13);
    pRVar39 = local_230;
    pMVar27 = local_240;
    pMVar37 = (MapKey *)local_228._Mydata;
    pMVar3 = (MapKey *)local_228._Mysize;
    while (local_228._Mydata = (char *)pMVar37, !bVar6) {
      if (pMVar3 == pMVar28) {
        std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
        _Emplace_reallocate<google::protobuf::MapKey_const&___ptr64>
                  ((vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *)
                   &local_228,pMVar3,&local_148.key_);
        pMVar28 = local_218;
      }
      else {
        (pMVar3->val_).string_value._Mydata = local_148.key_.val_.string_value._Mydata;
        (pMVar3->val_).string_value._Mysize = local_148.key_.val_.string_value._Mysize;
        pMVar3->type_ = local_148.key_.type_;
        *(int *)&pMVar3->field_0x14 = local_148.key_._20_4_;
        local_228._Mysize = (ulong64)(pMVar3 + 1);
      }
      pMVar3 = (MapKey *)local_228._Mysize;
      MapFieldBase::IncreaseIterator(local_148.map_,&local_148);
      pMVar13 = Reflection::MapEnd(pRVar39,&local_d8,param_2,param_1);
      bVar6 = MapFieldBase::EqualIterator(local_148.map_,&local_148,pMVar13);
      pMVar27 = pMVar28;
      pMVar37 = (MapKey *)local_228._Mydata;
    }
    local_240 = pMVar27;
    std::
    _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
              (pMVar37,pMVar3,((longlong)pMVar3 - (longlong)pMVar37) / 0x18,local_268);
    pRVar39 = local_230;
    pMVar5 = local_238;
    pMVar27 = pMVar37;
    for (; pMVar37 != pMVar3; pMVar37 = pMVar37 + 1) {
      local_260.long_rep.elements_int = 0;
      local_260.long_rep.size = 0;
      Reflection::LookupMapValue
                (pRVar39,(Message *)pMVar5,param_1,pMVar37,(MapValueConstRef *)&local_260.long_rep);
      param_3 = (uchar *)FUN_14fa72980(param_1,pMVar37,&local_260,param_3);
      pMVar28 = local_240;
      pMVar27 = (MapKey *)local_228._Mydata;
    }
    if (pMVar27 == (MapKey *)0x0) {
      return param_3;
    }
    uVar34 = (((longlong)pMVar28 - (longlong)pMVar27) / 0x18) * 0x18;
    if (uVar34 < 0x1000) goto LAB_14fa70a40;
    pMVar28 = *(MapKey **)&pMVar27[-1].type_;
    uVar14 = (longlong)pMVar27 + (-8 - (longlong)pMVar28);
  }
  else {
LAB_14fa70899:
    if (param_1->is_repeated_) {
      uVar29 = Reflection::FieldSize(pRVar39,param_2,param_1);
    }
    else if ((param_1->containing_type_->options_->_impl_).map_entry_ == false) {
      bVar6 = Reflection::HasField(pRVar39,param_2,param_1);
      if (bVar6) {
        uVar29 = 1;
      }
    }
    else {
      uVar29 = 1;
    }
    local_1f8 = (MapKey *)0x0;
    pMStack_1f0 = (MapKey *)0x0;
    local_240 = (MapKey *)0x0;
    local_1e8 = (MapKey *)0x0;
    if ((((int)uVar29 < 2) || (param_1->type_ != '\v')) ||
       ((bVar6 = FieldDescriptor::is_map_message_type(param_1), !bVar6 ||
        (param_4->is_serialization_deterministic_ == false)))) {
      local_238 = pMStack_1f0;
      local_248 = local_1f8;
    }
    else {
      ppMVar15 = (MapKey **)
                 DynamicMapSorter::Sort
                           ((Message *)&local_228,(int)param_2,(Reflection *)(ulonglong)uVar29,
                            (FieldDescriptor *)pRVar39);
      if (&local_1f8 != ppMVar15) {
        local_1f8 = *ppMVar15;
        pMStack_1f0 = ppMVar15[1];
        local_240 = ppMVar15[2];
        *ppMVar15 = (MapKey *)0x0;
        ppMVar15[1] = (MapKey *)0x0;
        ppMVar15[2] = (MapKey *)0x0;
        local_1e8 = local_240;
      }
      local_248 = local_1f8;
      local_238 = pMStack_1f0;
      if ((MapKey *)local_228._Mydata != (MapKey *)0x0) {
        uVar14 = ((longlong)local_218 - (longlong)local_228._Mydata >> 3) * 8;
        pMVar27 = (MapKey *)local_228._Mydata;
        if (0xfff < uVar14) {
          uVar14 = uVar14 + 0x27;
          pMVar27 = *(MapKey **)&((MapKey *)((longlong)local_228._Mydata + -0x18))->type_;
          if (0x1f < (ulonglong)((longlong)local_228._Mydata + (-8 - (longlong)pMVar27))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pMVar27,uVar14);
      }
    }
    bVar6 = FieldDescriptor::is_packed(param_1);
    if (bVar6) {
      if (uVar29 != 0) {
        if (param_4->end_ <= param_3) {
          param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
        }
        switch(param_1->type_) {
        case '\x01':
          pRVar23 = Reflection::GetRepeatedFieldInternal<double>(pRVar39,param_2,param_1);
          local_260.long_rep.elements_int = 0;
          local_260.long_rep.size = local_260.long_rep.size & 0xffffff00;
          uVar34 = (pRVar23->soo_rep_).field0_0x0.long_rep.elements_int;
          bVar38 = ~((byte)uVar34 >> 2) & 1;
          if (bVar38 == 0) {
            uVar29 = (pRVar23->soo_rep_).field0_0x0.long_rep.size;
          }
          else {
            uVar29 = (uint)uVar34 & 3;
          }
          if (uVar29 != 0) {
            if ((int)uVar29 < 2) {
              local_260.long_rep.elements_int = (ulong64)(int)uVar29;
              piVar41 = &local_260.long_rep.size;
            }
            else {
              RepeatedField<double>::Grow
                        ((RepeatedField<double> *)&local_260.long_rep,true,0,uVar29);
              piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
              local_260.long_rep.size = uVar29;
            }
            if (bVar38 == 0) {
              pvVar35 = (void *)((pRVar23->soo_rep_).field0_0x0.long_rep.elements_int &
                                0xfffffffffffffff8);
            }
            else {
              pvVar35 = (void *)((longlong)&(pRVar23->soo_rep_).field0_0x0 + 8);
            }
            if (0 < (int)uVar29) {
              memmove(piVar41,pvVar35,(longlong)(int)uVar29 << 3);
            }
          }
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar4 = local_260.long_rep.elements_int._0_1_;
          bVar38 = (byte)local_260.long_rep.elements_int._0_1_ >> 2;
          uVar47 = local_260.long_rep.size;
          if ((~bVar38 & 1) != 0) {
            uVar47 = local_260.long_rep.elements_int._0_4_ & 3;
          }
          uVar30 = uVar47 << 3;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)uVar4 >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<8>
                              (param_4,piVar41,uVar30,param_3 + 1);
          if ((~((byte)local_260.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_260.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_260.long_rep.capacity * 8 + 8);
            }
          }
          break;
        case '\x02':
          pRVar22 = Reflection::GetRepeatedFieldInternal<float>(pRVar39,param_2,param_1);
          local_260.long_rep.elements_int = 0;
          local_260.long_rep.size = local_260.long_rep.size & 0xffffff00;
          uVar34 = (pRVar22->soo_rep_).field0_0x0.long_rep.elements_int;
          bVar38 = ~((byte)uVar34 >> 2) & 1;
          if (bVar38 == 0) {
            uVar29 = (pRVar22->soo_rep_).field0_0x0.long_rep.size;
          }
          else {
            uVar29 = (uint)uVar34 & 3;
          }
          if (uVar29 != 0) {
            if ((int)uVar29 < 3) {
              local_260.long_rep.elements_int = (ulong64)(int)uVar29;
              piVar41 = &local_260.long_rep.size;
            }
            else {
              RepeatedField<float>::Grow((RepeatedField<float> *)&local_260.long_rep,true,0,uVar29);
              piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
              local_260.long_rep.size = uVar29;
            }
            if (bVar38 == 0) {
              pvVar35 = (void *)((pRVar22->soo_rep_).field0_0x0.long_rep.elements_int &
                                0xfffffffffffffff8);
            }
            else {
              pvVar35 = (void *)((longlong)&(pRVar22->soo_rep_).field0_0x0 + 8);
            }
            if (0 < (int)uVar29) {
              memmove(piVar41,pvVar35,(longlong)(int)uVar29 << 2);
            }
          }
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar4 = local_260.long_rep.elements_int._0_1_;
          bVar38 = (byte)local_260.long_rep.elements_int._0_1_ >> 2;
          uVar47 = local_260.long_rep.size;
          if ((~bVar38 & 1) != 0) {
            uVar47 = local_260.long_rep.elements_int._0_4_ & 3;
          }
          uVar30 = uVar47 << 2;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          if ((~((byte)uVar4 >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<4>
                              (param_4,piVar41,uVar30,param_3 + 2);
          if ((~((byte)local_260.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_260.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_260.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\x03':
          pRVar18 = Reflection::GetRepeatedFieldInternal<__int64>(pRVar39,param_2,param_1);
          RepeatedField<__int64>::RepeatedField<__int64>
                    ((RepeatedField<__int64> *)&((SooRep_u_0 *)local_1d0)->long_rep,pRVar18);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_1d0._0_8_ >> 2) & 1) == 0) {
            pSVar42 = (ShortSooRep_u_8 *)(local_1d0._0_8_ & 0xfffffffffffffff8);
          }
          else {
            pSVar42 = &(((SooRep_u_0 *)local_1d0)->short_rep).field1_0x8;
            local_1d0._8_4_ = (uint)local_1d0._0_8_ & 3;
          }
          pSVar45 = pSVar42;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            pSVar40 = pSVar45 + 1;
            for (SVar31 = *pSVar45; 0x7f < (ulonglong)SVar31; SVar31.data = SVar31.data >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SVar31.dummy | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SVar31.dummy;
            piVar19 = piVar19 + 1;
            pSVar45 = pSVar40;
          } while (pSVar40 < pSVar42 + (int)local_1d0._8_4_);
          RepeatedField<__int64>::~RepeatedField<__int64>
                    ((RepeatedField<__int64> *)&((SooRep_u_0 *)local_1d0)->long_rep);
          break;
        case '\x04':
          pRVar21 = Reflection::GetRepeatedFieldInternal<unsigned___int64>(pRVar39,param_2,param_1);
          RepeatedField<unsigned___int64>::RepeatedField<unsigned___int64>
                    ((RepeatedField<unsigned___int64> *)&((SooRep_u_0 *)local_190)->long_rep,pRVar21
                    );
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_190._0_8_ >> 2) & 1) == 0) {
            pSVar42 = (ShortSooRep_u_8 *)(local_190._0_8_ & 0xfffffffffffffff8);
          }
          else {
            pSVar42 = &(((SooRep_u_0 *)local_190)->short_rep).field1_0x8;
            local_190._8_4_ = (uint)local_190._0_8_ & 3;
          }
          pSVar45 = pSVar42;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            pSVar40 = pSVar45 + 1;
            for (SVar31 = *pSVar45; 0x7f < (ulonglong)SVar31; SVar31.data = SVar31.data >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SVar31.dummy | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SVar31.dummy;
            piVar19 = piVar19 + 1;
            pSVar45 = pSVar40;
          } while (pSVar40 < pSVar42 + (int)local_190._8_4_);
          RepeatedField<unsigned___int64>::~RepeatedField<unsigned___int64>
                    ((RepeatedField<unsigned___int64> *)&((SooRep_u_0 *)local_190)->long_rep);
          break;
        case '\x05':
          pRVar17 = Reflection::GetRepeatedFieldInternal<int>(pRVar39,param_2,param_1);
          RepeatedField<int>::RepeatedField<int>((RepeatedField<int> *)&local_1e0.long_rep,pRVar17);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_1e0.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_1e0.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_1e0.long_rep.size;
            local_1e0.long_rep.size = (uint)local_1e0.long_rep.elements_int & 3;
          }
          piVar43 = piVar41 + local_1e0.long_rep.size;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            iVar8 = *piVar41;
            piVar41 = piVar41 + 1;
            for (uVar14 = (ulonglong)iVar8; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SUB81(uVar14,0) | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SUB81(uVar14,0);
            piVar19 = piVar19 + 1;
          } while (piVar41 < piVar43);
          if ((~((byte)local_1e0.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_1e0.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_1e0.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\x06':
          pRVar21 = Reflection::GetRepeatedFieldInternal<unsigned___int64>(pRVar39,param_2,param_1);
          RepeatedField<unsigned___int64>::RepeatedField<unsigned___int64>
                    ((RepeatedField<unsigned___int64> *)&local_260.long_rep,pRVar21);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar47 = local_260.long_rep.size;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) != 0) {
            uVar47 = (uint)local_260.long_rep.elements_int & 3;
          }
          uVar30 = uVar47 << 3;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<8>
                              (param_4,piVar41,uVar30,param_3 + 1);
          RepeatedField<unsigned___int64>::~RepeatedField<unsigned___int64>
                    ((RepeatedField<unsigned___int64> *)&local_260.long_rep);
          break;
        case '\a':
          pRVar20 = Reflection::GetRepeatedFieldInternal<unsigned_int>(pRVar39,param_2,param_1);
          RepeatedField<unsigned_int>::RepeatedField<unsigned_int>
                    ((RepeatedField<unsigned_int> *)&local_260.long_rep,pRVar20);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar47 = local_260.long_rep.size;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) != 0) {
            uVar47 = (uint)local_260.long_rep.elements_int & 3;
          }
          uVar30 = uVar47 << 2;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<4>
                              (param_4,piVar41,uVar30,param_3 + 1);
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_260.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_260.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\b':
          pRVar24 = Reflection::GetRepeatedFieldInternal<bool>(pRVar39,param_2,param_1);
          local_260.long_rep.elements_int = 0;
          local_260.long_rep.size = local_260.long_rep.size & 0xffffff00;
          uVar34 = (pRVar24->soo_rep_).field0_0x0.long_rep.elements_int;
          bVar38 = ~((byte)uVar34 >> 2) & 1;
          if (bVar38 == 0) {
            uVar29 = (pRVar24->soo_rep_).field0_0x0.long_rep.size;
          }
          else {
            uVar29 = (uint)uVar34 & 3;
          }
          if (uVar29 != 0) {
            if ((int)uVar29 < 4) {
              local_260.long_rep.elements_int = (ulong64)(int)uVar29;
              piVar41 = &local_260.long_rep.size;
            }
            else {
              RepeatedField<bool>::Grow((RepeatedField<bool> *)&local_260.long_rep,true,0,uVar29);
              piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
              local_260.long_rep.size = uVar29;
            }
            if (bVar38 == 0) {
              pvVar35 = (void *)((pRVar24->soo_rep_).field0_0x0.long_rep.elements_int &
                                0xfffffffffffffff8);
            }
            else {
              pvVar35 = (void *)((longlong)&(pRVar24->soo_rep_).field0_0x0 + 8);
            }
            if (0 < (int)uVar29) {
              memmove(piVar41,pvVar35,(longlong)(int)uVar29);
            }
          }
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar4 = local_260.long_rep.elements_int._0_1_;
          bVar38 = (byte)local_260.long_rep.elements_int._0_1_ >> 2;
          uVar47 = local_260.long_rep.size;
          if ((~bVar38 & 1) != 0) {
            uVar47 = local_260.long_rep.elements_int._0_4_ & 3;
          }
          uVar14 = (ulonglong)(uint)uVar47;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = uVar47;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)uVar4 >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<1>
                              (param_4,piVar41,uVar47,param_3 + 1);
          if ((~((byte)local_260.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_260.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_260.long_rep.capacity + 8);
            }
          }
          break;
        default:
          this_00 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              ((LogMessageFatal *)&local_168,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                               ,0x53a);
          local_208[0] = "Invalid descriptor";
          local_208[1] = &DAT_00000012;
          local_158._Mydata = "Invalid descriptor";
          local_158._Mysize = 0x12;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_158);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                    ((LogMessageFatal *)&local_168);
        case '\r':
          pRVar20 = Reflection::GetRepeatedFieldInternal<unsigned_int>(pRVar39,param_2,param_1);
          RepeatedField<unsigned_int>::RepeatedField<unsigned_int>
                    ((RepeatedField<unsigned_int> *)&local_1a0.long_rep,pRVar20);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_1a0.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_1a0.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            local_1a0.long_rep.size = (uint)local_1a0.long_rep.elements_int & 3;
          }
          piVar43 = piVar41;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            piVar44 = piVar43 + 1;
            for (uVar29 = *piVar43; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SUB41(uVar29,0) | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SUB41(uVar29,0);
            piVar19 = piVar19 + 1;
            piVar43 = piVar44;
          } while (piVar44 < piVar41 + local_1a0.long_rep.size);
          if ((~((byte)local_1a0.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_1a0.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_1a0.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\x0e':
          pRVar17 = Reflection::GetRepeatedFieldInternal<int>(pRVar39,param_2,param_1);
          RepeatedField<int>::RepeatedField<int>((RepeatedField<int> *)&local_180.long_rep,pRVar17);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_180.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_180.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_180.long_rep.size;
            local_180.long_rep.size = (uint)local_180.long_rep.elements_int & 3;
          }
          piVar43 = piVar41 + local_180.long_rep.size;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            iVar8 = *piVar41;
            piVar41 = piVar41 + 1;
            for (uVar14 = (ulonglong)iVar8; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SUB81(uVar14,0) | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SUB81(uVar14,0);
            piVar19 = piVar19 + 1;
          } while (piVar41 < piVar43);
          if ((~((byte)local_180.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_180.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_180.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\x0f':
          pRVar17 = Reflection::GetRepeatedFieldInternal<int>(pRVar39,param_2,param_1);
          RepeatedField<int>::RepeatedField<int>((RepeatedField<int> *)&local_260.long_rep,pRVar17);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar47 = local_260.long_rep.size;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) != 0) {
            uVar47 = (uint)local_260.long_rep.elements_int & 3;
          }
          uVar30 = uVar47 << 2;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<4>
                              (param_4,piVar41,uVar30,param_3 + 1);
          RepeatedField<int>::~RepeatedField<int>((RepeatedField<int> *)&local_260.long_rep);
          break;
        case '\x10':
          pRVar18 = Reflection::GetRepeatedFieldInternal<__int64>(pRVar39,param_2,param_1);
          RepeatedField<__int64>::RepeatedField<__int64>
                    ((RepeatedField<__int64> *)&local_260.long_rep,pRVar18);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          uVar47 = local_260.long_rep.size;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) != 0) {
            uVar47 = (uint)local_260.long_rep.elements_int & 3;
          }
          uVar30 = uVar47 << 3;
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar14 = (ulonglong)uVar30;
          uVar29 = uVar30;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_260.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_260.long_rep.size;
          }
          piVar19 = (integral_constant<bool,1> *)
                    io::EpsCopyOutputStream::WriteRawLittleEndian<8>
                              (param_4,piVar41,uVar30,param_3 + 1);
          if ((~((byte)local_260.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_260.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_260.long_rep.capacity * 8 + 8);
            }
          }
          break;
        case '\x11':
          pRVar17 = Reflection::GetRepeatedFieldInternal<int>(pRVar39,param_2,param_1);
          RepeatedField<int>::RepeatedField<int>((RepeatedField<int> *)&local_1c0.long_rep,pRVar17);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            pbVar36 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *pbVar36 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
            param_3 = pbVar36;
          }
          *pbVar36 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 2);
          if ((~((byte)local_1c0.long_rep.elements_int >> 2) & 1) == 0) {
            piVar41 = (int *)(local_1c0.long_rep.elements_int & 0xfffffffffffffff8);
          }
          else {
            piVar41 = &local_1c0.long_rep.size;
            local_1c0.long_rep.size = (uint)local_1c0.long_rep.elements_int & 3;
          }
          piVar43 = piVar41 + local_1c0.long_rep.size;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            iVar8 = *piVar41;
            piVar41 = piVar41 + 1;
            for (uVar29 = iVar8 >> 0x1f ^ iVar8 * 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SUB41(uVar29,0) | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SUB41(uVar29,0);
            piVar19 = piVar19 + 1;
          } while (piVar41 < piVar43);
          if ((~((byte)local_1c0.long_rep.elements_int >> 2) & 1) == 0) {
            plVar32 = (longlong *)((local_1c0.long_rep.elements_int & 0xfffffffffffffff8) - 8);
            if (*plVar32 == 0) {
              ::operator_delete(plVar32,(longlong)local_1c0.long_rep.capacity * 4 + 8);
            }
          }
          break;
        case '\x12':
          pRVar18 = Reflection::GetRepeatedFieldInternal<__int64>(pRVar39,param_2,param_1);
          RepeatedField<__int64>::RepeatedField<__int64>
                    ((RepeatedField<__int64> *)&((SooRep_u_0 *)local_1b0)->long_rep,pRVar18);
          uVar14 = FieldDataOnlyByteSize(param_1,param_2);
          iVar8 = param_1->number_;
          if (param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
          }
          for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
            *param_3 = (byte)uVar29 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar29;
          uVar29 = (uint)uVar14;
          while( true ) {
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) break;
            *param_3 = (byte)uVar14 | 0x80;
            uVar14 = uVar14 >> 7 & 0x1ffffff;
            uVar29 = (uint)uVar14;
          }
          *param_3 = (byte)uVar14;
          piVar19 = (integral_constant<bool,1> *)(param_3 + 1);
          if ((~((byte)local_1b0._0_8_ >> 2) & 1) == 0) {
            pSVar42 = (ShortSooRep_u_8 *)(local_1b0._0_8_ & 0xfffffffffffffff8);
          }
          else {
            pSVar42 = &(((SooRep_u_0 *)local_1b0)->short_rep).field1_0x8;
            local_1b0._8_4_ = (uint)local_1b0._0_8_ & 3;
          }
          pSVar45 = pSVar42 + (int)local_1b0._8_4_;
          do {
            if ((integral_constant<bool,1> *)param_4->end_ <= piVar19) {
              piVar19 = (integral_constant<bool,1> *)
                        io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,(uchar *)piVar19);
            }
            lVar16 = *(longlong *)pSVar42->data;
            pSVar42 = pSVar42 + 1;
            for (uVar14 = lVar16 >> 0x3f ^ lVar16 * 2; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
              *piVar19 = (integral_constant<bool,1>)((byte)SUB81(uVar14,0) | 0x80);
              piVar19 = piVar19 + 1;
            }
            *piVar19 = SUB81(uVar14,0);
            piVar19 = piVar19 + 1;
          } while (pSVar42 < pSVar45);
          RepeatedField<__int64>::~RepeatedField<__int64>
                    ((RepeatedField<__int64> *)&((SooRep_u_0 *)local_1b0)->long_rep);
        }
        if (local_248 == (MapKey *)0x0) {
          return (uchar *)piVar19;
        }
        uVar34 = (longlong)local_240 - (longlong)local_248 & 0xfffffffffffffff8;
        pMVar28 = local_248;
        if (uVar34 < 0x1000) {
LAB_14fa71c0f:
          ::operator_delete(pMVar28,uVar34);
          return (uchar *)piVar19;
        }
        uVar34 = uVar34 + 0x27;
        pMVar28 = *(MapKey **)&local_248[-1].type_;
        if ((ulonglong)((longlong)local_248 + (-8 - (longlong)pMVar28)) < 0x20) goto LAB_14fa71c0f;
        goto LAB_14fa7287c;
      }
      if (local_248 == (MapKey *)0x0) {
        return param_3;
      }
      uVar34 = (longlong)local_240 - (longlong)local_248 & 0xfffffffffffffff8;
      pMVar27 = local_248;
      if (uVar34 < 0x1000) goto LAB_14fa70a40;
      pMVar28 = *(MapKey **)&local_248[-1].type_;
      lVar16 = (longlong)local_248 - (longlong)pMVar28;
    }
    else {
      local_264 = 0;
      if (0 < (int)uVar29) {
        local_260.long_rep.elements_int = (ulong64)(int)uVar29;
        local_250 = 0;
        do {
          uVar29 = (uint)pMVar28;
          if ((integral_constant<bool,1> *)param_4->end_ <= param_3) {
            param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
            uVar29 = local_264;
          }
          switch(param_1->type_) {
          case '\x01':
            if (param_1->is_repeated_) {
              dVar2 = Reflection::GetRepeatedDouble(pRVar39,param_2,param_1,uVar29);
              uVar47 = SUB84(dVar2,0);
              uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            else {
              dVar2 = Reflection::GetDouble(pRVar39,param_2,param_1);
              uVar47 = SUB84(dVar2,0);
              uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            for (uVar29 = param_1->number_ * 8 | 1; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
              *param_3 = (byte)SUB41(uVar29,0) | 0x80;
              param_3 = param_3 + 1;
            }
            *param_3 = (uchar)SUB41(uVar29,0);
            *(ulonglong *)(param_3 + 1) = CONCAT44(uVar48,uVar47);
            param_3 = param_3 + 9;
            uVar29 = local_264;
            break;
          case '\x02':
            if (param_1->is_repeated_) {
              fVar46 = Reflection::GetRepeatedFloat(pRVar39,param_2,param_1,uVar29);
            }
            else {
              fVar46 = Reflection::GetFloat(pRVar39,param_2,param_1);
            }
            for (uVar29 = param_1->number_ * 8 | 5; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
              *param_3 = (byte)SUB41(uVar29,0) | 0x80;
              param_3 = param_3 + 1;
            }
            *param_3 = (uchar)SUB41(uVar29,0);
            *(float *)(param_3 + 1) = fVar46;
            param_3 = param_3 + 5;
            uVar29 = local_264;
            break;
          case '\x03':
            if (param_1->is_repeated_) {
              uVar14 = Reflection::GetRepeatedInt64(pRVar39,param_2,param_1,uVar29);
            }
            else {
              uVar14 = Reflection::GetInt64(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar33 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar33,0) | 0x80;
              uVar33 = uVar33 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar33;
            }
            *param_3 = (uchar)SUB81(uVar33,0);
            param_3 = param_3 + 1;
            if (uVar14 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
            break;
          case '\x04':
            if (param_1->is_repeated_) {
              uVar14 = Reflection::GetRepeatedUInt64(pRVar39,param_2,param_1,uVar29);
            }
            else {
              uVar14 = Reflection::GetUInt64(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar33 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar33,0) | 0x80;
              uVar33 = uVar33 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar33;
            }
            *param_3 = (uchar)SUB81(uVar33,0);
            param_3 = param_3 + 1;
            if (uVar14 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
            break;
          case '\x05':
            if (param_1->is_repeated_) {
              iVar8 = Reflection::GetRepeatedInt32(pRVar39,param_2,param_1,uVar29);
            }
            else {
              iVar8 = Reflection::GetInt32(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar14 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar14,0) | 0x80;
              uVar14 = uVar14 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar14;
            }
            *param_3 = (uchar)SUB81(uVar14,0);
            for (uVar14 = (ulonglong)iVar8; param_3 = param_3 + 1, 0x7f < uVar14;
                uVar14 = uVar14 >> 7) {
              *param_3 = (byte)uVar14 | 0x80;
            }
LAB_14fa71d07:
            *param_3 = (uchar)SUB81(uVar14,0);
            param_3 = param_3 + 1;
            uVar29 = local_264;
            break;
          case '\x06':
            if (param_1->is_repeated_) {
              _Var25 = Reflection::GetRepeatedUInt64(pRVar39,param_2,param_1,uVar29);
            }
            else {
              _Var25 = Reflection::GetUInt64(pRVar39,param_2,param_1);
            }
            for (uVar29 = param_1->number_ * 8 | 1; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
              *param_3 = (byte)uVar29 | 0x80;
              param_3 = param_3 + 1;
            }
LAB_14fa720a5:
            *param_3 = (uchar)SUB41(uVar29,0);
            *(__uint64 *)(param_3 + 1) = _Var25;
            param_3 = param_3 + 9;
            uVar29 = local_264;
            break;
          case '\a':
            if (param_1->is_repeated_) {
              uVar29 = Reflection::GetRepeatedUInt32(pRVar39,param_2,param_1,uVar29);
            }
            else {
              uVar29 = Reflection::GetUInt32(pRVar39,param_2,param_1);
            }
            for (uVar30 = param_1->number_ * 8 | 5; 0x7f < uVar30; uVar30 = uVar30 >> 7) {
              *param_3 = (byte)uVar30 | 0x80;
              param_3 = param_3 + 1;
            }
LAB_14fa72045:
            *param_3 = (uchar)SUB41(uVar30,0);
            *(uint *)(param_3 + 1) = uVar29;
            param_3 = param_3 + 5;
            uVar29 = local_264;
            break;
          case '\b':
            if (param_1->is_repeated_) {
              iVar7 = (integral_constant<bool,1>)
                      Reflection::GetRepeatedBool(pRVar39,param_2,param_1,uVar29);
            }
            else {
              iVar7 = (integral_constant<bool,1>)Reflection::GetBool(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar14 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar14,0) | 0x80;
              uVar14 = uVar14 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar14;
            }
            *param_3 = (uchar)SUB81(uVar14,0);
            *(integral_constant<bool,1> *)(param_3 + 1) = iVar7;
            param_3 = param_3 + 2;
            uVar29 = local_264;
            break;
          case '\t':
            bVar6 = FieldDescriptor::requires_utf8_validation(param_1);
            uStack_88 = 0;
            local_80 = 0;
            local_78 = 0xf;
            local_90 = (void *)0x0;
            if (param_1->is_repeated_) {
              pMVar28 = (MapKey *)
                        Reflection::GetRepeatedStringReference
                                  (local_230,param_2,param_1,local_264,
                                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)&local_90);
            }
            else {
              pMVar28 = (MapKey *)
                        Reflection::GetStringReference
                                  (local_230,param_2,param_1,
                                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)&local_90);
            }
            if (bVar6) {
              pbVar1 = param_1->all_names_;
              local_f8._Mydata = (char *)(pbVar1 + 1);
              if (0xf < pbVar1[1]._Mypair._Myval2._Myres) {
                local_f8._Mydata = pbVar1[1]._Mypair._Myval2._Bx._Ptr;
              }
              local_f8._Mysize = pbVar1[1]._Mypair._Myval2._Mysize;
              pMVar27 = pMVar28;
              if ((char *)0xf < pMVar28[1].val_.string_value._Mydata) {
                pMVar27 = (MapKey *)(pMVar28->val_).string_value._Mydata;
              }
              WireFormatLite::VerifyUtf8String((char *)pMVar27,pMVar28->type_,SERIALIZE,&local_f8);
            }
            pMVar27 = *(MapKey **)&pMVar28->type_;
            if ((longlong)pMVar27 < 0x80) {
              uVar29 = param_1->number_ * 8;
              if (uVar29 < 0x80) {
                lVar16 = 1;
              }
              else if (uVar29 < 0x4000) {
                lVar16 = 2;
              }
              else if (uVar29 < 0x200000) {
                lVar16 = 3;
              }
              else {
                lVar16 = 5 - (ulonglong)(uVar29 < 0x10000000);
              }
              if ((longlong)(param_4->end_ + (-lVar16 - (longlong)param_3) + 0xf) <
                  (longlong)pMVar27) goto LAB_14fa7255c;
              for (uVar29 = uVar29 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
                *param_3 = (byte)SUB41(uVar29,0) | 0x80;
                param_3 = param_3 + 1;
              }
              *param_3 = (uchar)SUB41(uVar29,0);
              *(integral_constant<bool,1> *)(param_3 + 1) = SUB81(pMVar27,0);
              if ((char *)0xf < pMVar28[1].val_.string_value._Mydata) {
                pMVar28 = (MapKey *)(pMVar28->val_).string_value._Mydata;
              }
              memcpy((integral_constant<bool,1> *)(param_3 + 2),pMVar28,(size_t)pMVar27);
              param_3 = (uchar *)((integral_constant<bool,1> *)(param_3 + 2) + (longlong)pMVar27);
            }
            else {
LAB_14fa7255c:
              if ((char *)0xf < pMVar28[1].val_.string_value._Mydata) {
                pMVar28 = (MapKey *)(pMVar28->val_).string_value._Mydata;
              }
              local_228._Mydata = (char *)pMVar28;
              local_228._Mysize = (ulong64)pMVar27;
              local_168 = pMVar28;
              pMStack_160 = pMVar27;
              param_3 = io::EpsCopyOutputStream::WriteStringOutline
                                  (param_4,param_1->number_,&local_228,param_3);
            }
            if (0xf < local_78) {
              uVar34 = local_78 + 1;
              pvVar35 = local_90;
              if (0xfff < uVar34) {
                uVar34 = local_78 + 0x28;
                pvVar35 = *(void **)((longlong)local_90 + -8);
                if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar35))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              ::operator_delete(pvVar35,uVar34);
            }
            local_80 = 0;
            local_78 = 0xf;
            local_90 = (void *)((ulonglong)local_90 & 0xffffffffffffff00);
            pRVar39 = local_230;
            uVar29 = local_264;
            break;
          case '\n':
            if (param_1->is_repeated_) {
              if (local_248 == local_238) {
                pMVar11 = (MessageLite *)
                          Reflection::GetRepeatedMessage(pRVar39,param_2,param_1,uVar29);
              }
              else {
                pMVar11 = *(MessageLite **)((longlong)&local_248->val_ + local_250 * 8);
              }
            }
            else {
              pMVar11 = (MessageLite *)
                        Reflection::GetMessage(pRVar39,param_2,param_1,(MessageFactory *)0x0);
            }
            param_3 = WireFormatLite::InternalWriteGroup(param_1->number_,pMVar11,param_3,param_4);
            uVar29 = local_264;
            break;
          case '\v':
            if (param_1->is_repeated_) {
              if (local_248 == local_238) {
                pMVar11 = (MessageLite *)
                          Reflection::GetRepeatedMessage(pRVar39,param_2,param_1,uVar29);
              }
              else {
                pMVar11 = *(MessageLite **)((longlong)&local_248->val_ + local_250 * 8);
              }
            }
            else {
              pMVar11 = (MessageLite *)
                        Reflection::GetMessage(pRVar39,param_2,param_1,(MessageFactory *)0x0);
            }
            iVar8 = MessageLite::GetCachedSize(pMVar11);
            param_3 = WireFormatLite::InternalWriteMessage
                                (param_1->number_,pMVar11,iVar8,param_3,param_4);
            uVar29 = local_264;
            break;
          case '\f':
            CVar9 = FieldDescriptor::cpp_string_type(param_1);
            if (CVar9 == kCord) {
              Reflection::GetCord(pRVar39,(Cord *)local_208,param_2,param_1);
              iVar8 = param_1->number_;
              if ((integral_constant<bool,1> *)param_4->end_ <= param_3) {
                param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
              }
              for (uVar29 = iVar8 * 8 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
                *param_3 = (byte)SUB41(uVar29,0) | 0x80;
                param_3 = param_3 + 1;
              }
              *param_3 = (uchar)SUB41(uVar29,0);
              param_3 = io::EpsCopyOutputStream::WriteCordOutline
                                  (param_4,(Cord *)local_208,(uchar *)(param_3 + 1));
              uVar29 = local_264;
              if (((ulonglong)local_208[0] & 1) != 0) {
                absl::lts_20240722::Cord::DestroyCordSlow((Cord *)local_208);
              }
            }
            else {
              uStack_68 = 0;
              local_60 = 0;
              local_58 = 0xf;
              local_70 = (void *)0x0;
              if (param_1->is_repeated_) {
                pMVar28 = (MapKey *)
                          Reflection::GetRepeatedStringReference
                                    (pRVar39,param_2,param_1,local_264,
                                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)&local_70);
              }
              else {
                pMVar28 = (MapKey *)
                          Reflection::GetStringReference
                                    (pRVar39,param_2,param_1,
                                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)&local_70);
              }
              pMVar27 = *(MapKey **)&pMVar28->type_;
              if ((longlong)pMVar27 < 0x80) {
                uVar29 = param_1->number_ * 8;
                if (uVar29 < 0x80) {
                  lVar16 = 1;
                }
                else if (uVar29 < 0x4000) {
                  lVar16 = 2;
                }
                else if (uVar29 < 0x200000) {
                  lVar16 = 3;
                }
                else {
                  lVar16 = 5 - (ulonglong)(uVar29 < 0x10000000);
                }
                if ((longlong)(param_4->end_ + (-lVar16 - (longlong)param_3) + 0xf) <
                    (longlong)pMVar27) goto LAB_14fa7278b;
                for (uVar29 = uVar29 | 2; 0x7f < uVar29; uVar29 = uVar29 >> 7) {
                  *param_3 = (byte)SUB41(uVar29,0) | 0x80;
                  param_3 = param_3 + 1;
                }
                *param_3 = (uchar)SUB41(uVar29,0);
                *(integral_constant<bool,1> *)(param_3 + 1) = SUB81(pMVar27,0);
                if ((char *)0xf < pMVar28[1].val_.string_value._Mydata) {
                  pMVar28 = (MapKey *)(pMVar28->val_).string_value._Mydata;
                }
                memcpy((integral_constant<bool,1> *)(param_3 + 2),pMVar28,(size_t)pMVar27);
                param_3 = (uchar *)((integral_constant<bool,1> *)(param_3 + 2) + (longlong)pMVar27);
              }
              else {
LAB_14fa7278b:
                if ((char *)0xf < pMVar28[1].val_.string_value._Mydata) {
                  pMVar28 = (MapKey *)(pMVar28->val_).string_value._Mydata;
                }
                local_228._Mydata = (char *)pMVar28;
                local_228._Mysize = (ulong64)pMVar27;
                local_158._Mydata = (char *)pMVar28;
                local_158._Mysize = (ulong64)pMVar27;
                param_3 = io::EpsCopyOutputStream::WriteStringOutline
                                    (param_4,param_1->number_,&local_228,param_3);
              }
              if (0xf < local_58) {
                uVar34 = local_58 + 1;
                pvVar35 = local_70;
                if (0xfff < uVar34) {
                  uVar34 = local_58 + 0x28;
                  pvVar35 = *(void **)((longlong)local_70 + -8);
                  if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar35))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                ::operator_delete(pvVar35,uVar34);
              }
              local_60 = 0;
              local_58 = 0xf;
              local_70 = (void *)((ulonglong)local_70 & 0xffffffffffffff00);
              uVar29 = local_264;
            }
            break;
          case '\r':
            if (param_1->is_repeated_) {
              uVar29 = Reflection::GetRepeatedUInt32(pRVar39,param_2,param_1,uVar29);
            }
            else {
              uVar29 = Reflection::GetUInt32(pRVar39,param_2,param_1);
            }
            uVar14 = (ulonglong)uVar29;
            uVar30 = param_1->number_ * 8;
            uVar33 = (ulonglong)uVar30;
            while (0x7f < uVar30) {
              *param_3 = (byte)SUB81(uVar33,0) | 0x80;
              uVar33 = uVar33 >> 7;
              param_3 = param_3 + 1;
              uVar30 = (uint)uVar33;
            }
            *param_3 = (uchar)SUB81(uVar33,0);
            param_3 = param_3 + 1;
            if (uVar29 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < (uint)uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
            break;
          case '\x0e':
            if (param_1->is_repeated_) {
              pEVar26 = Reflection::GetRepeatedEnum(pRVar39,param_2,param_1,uVar29);
            }
            else {
              pEVar26 = Reflection::GetEnum(pRVar39,param_2,param_1);
            }
            uVar14 = (ulonglong)pEVar26->number_;
            uVar29 = param_1->number_ * 8;
            uVar33 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar33,0) | 0x80;
              uVar33 = uVar33 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar33;
            }
            *param_3 = (uchar)SUB81(uVar33,0);
            param_3 = param_3 + 1;
            if (uVar14 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
            break;
          case '\x0f':
            if (param_1->is_repeated_) {
              uVar29 = Reflection::GetRepeatedInt32(pRVar39,param_2,param_1,uVar29);
            }
            else {
              uVar29 = Reflection::GetInt32(pRVar39,param_2,param_1);
            }
            uVar30 = param_1->number_ * 8 | 5;
            if (uVar30 < 0x80) goto LAB_14fa72045;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar30 | 0x80);
              uVar30 = uVar30 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar30);
            piVar19[1] = SUB41(uVar30,0);
            *(uint *)(piVar19 + 2) = uVar29;
            param_3 = (uchar *)(piVar19 + 6);
            uVar29 = local_264;
            break;
          case '\x10':
            if (param_1->is_repeated_) {
              _Var25 = Reflection::GetRepeatedInt64(pRVar39,param_2,param_1,uVar29);
            }
            else {
              _Var25 = Reflection::GetInt64(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8 | 1;
            if (uVar29 < 0x80) goto LAB_14fa720a5;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar29 | 0x80);
              uVar29 = uVar29 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar29);
            piVar19[1] = SUB41(uVar29,0);
            *(__uint64 *)(piVar19 + 2) = _Var25;
            param_3 = (uchar *)(piVar19 + 10);
            uVar29 = local_264;
            break;
          case '\x11':
            if (param_1->is_repeated_) {
              iVar8 = Reflection::GetRepeatedInt32(pRVar39,param_2,param_1,uVar29);
            }
            else {
              iVar8 = Reflection::GetInt32(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar14 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar14,0) | 0x80;
              uVar14 = uVar14 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar14;
            }
            *param_3 = (uchar)SUB81(uVar14,0);
            param_3 = param_3 + 1;
            uVar29 = iVar8 >> 0x1f ^ iVar8 * 2;
            uVar14 = (ulonglong)uVar29;
            if (uVar29 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < (uint)uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
            break;
          case '\x12':
            if (param_1->is_repeated_) {
              lVar16 = Reflection::GetRepeatedInt64(pRVar39,param_2,param_1,uVar29);
            }
            else {
              lVar16 = Reflection::GetInt64(pRVar39,param_2,param_1);
            }
            uVar29 = param_1->number_ * 8;
            uVar14 = (ulonglong)uVar29;
            while (0x7f < uVar29) {
              *param_3 = (byte)SUB81(uVar14,0) | 0x80;
              uVar14 = uVar14 >> 7;
              param_3 = param_3 + 1;
              uVar29 = (uint)uVar14;
            }
            *param_3 = (uchar)SUB81(uVar14,0);
            param_3 = param_3 + 1;
            uVar14 = lVar16 >> 0x3f ^ lVar16 * 2;
            if (uVar14 < 0x80) goto LAB_14fa71d07;
            do {
              piVar19 = (integral_constant<bool,1> *)param_3;
              *piVar19 = (integral_constant<bool,1>)((byte)uVar14 | 0x80);
              uVar14 = uVar14 >> 7;
              param_3 = (uchar *)(piVar19 + 1);
            } while (0x7f < uVar14);
            piVar19[1] = SUB81(uVar14,0);
            param_3 = (uchar *)(piVar19 + 2);
            uVar29 = local_264;
          }
          local_264 = uVar29 + 1;
          pMVar28 = (MapKey *)(ulonglong)local_264;
          local_250 = local_250 + 1;
        } while (local_250 < (longlong)local_260.long_rep.elements_int);
      }
      if (local_248 == (MapKey *)0x0) {
        return param_3;
      }
      uVar34 = (longlong)local_240 - (longlong)local_248 & 0xfffffffffffffff8;
      pMVar27 = local_248;
      if (uVar34 < 0x1000) goto LAB_14fa70a40;
      pMVar28 = *(MapKey **)&local_248[-1].type_;
      lVar16 = (longlong)local_248 - (longlong)pMVar28;
    }
    uVar14 = lVar16 - 8;
  }
  uVar34 = uVar34 + 0x27;
  pMVar27 = pMVar28;
  if (0x1f < uVar14) {
LAB_14fa7287c:
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
LAB_14fa70a40:
  ::operator_delete(pMVar27,uVar34);
  return (uchar *)(integral_constant<bool,1> *)param_3;
}

// FUN_14fa72980 @ 14fa72980

/* WARNING: Enum "CppType": Some values do not have unique names */

void FUN_14fa72980(FieldDescriptor *param_1,MapKey *param_2,undefined8 param_3,byte *param_4,
                  EpsCopyOutputStream *param_5)

{
  FieldDescriptor *pFVar1;
  FieldDescriptor *pFVar2;
  uint uVar3;
  Descriptor *pDVar4;
  __uint64 _Var5;
  longlong lVar6;
  uchar *puVar7;
  byte bVar8;
  ulonglong uVar9;
  
  pDVar4 = google::protobuf::FieldDescriptor::message_type(param_1);
  pFVar1 = pDVar4->fields_;
  pDVar4 = google::protobuf::FieldDescriptor::message_type(param_1);
  pFVar2 = pDVar4->fields_;
  _Var5 = google::protobuf::internal::MapKeyDataOnlyByteSize(pFVar1,param_2);
  lVar6 = FUN_14fa73250(pFVar2 + 1,param_3);
  uVar9 = _Var5 + 2 + lVar6;
  if (param_5->end_ <= param_4) {
    param_4 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_5,param_4);
  }
  for (uVar3 = param_1->number_ << 3 | 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_4 = (byte)uVar3 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar3;
  uVar3 = (uint)uVar9;
  while( true ) {
    param_4 = param_4 + 1;
    bVar8 = (byte)uVar9;
    if (uVar3 < 0x80) break;
    uVar9 = uVar9 >> 7 & 0x1ffffff;
    *param_4 = bVar8 | 0x80;
    uVar3 = (uint)uVar9;
  }
  *param_4 = bVar8;
  puVar7 = google::protobuf::internal::SerializeMapKeyWithCachedSizes
                     (pFVar1,param_2,param_4 + 1,param_5);
  FUN_14fa75bd0(pFVar2 + 1,param_3,puVar7,param_5);
  return;
}

// InternalSerializeMessageSetItem @ 14fa72aa0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::InternalSerializeMessageSetItem(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message const &
   __ptr64,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::InternalSerializeMessageSetItem
          (FieldDescriptor *param_1,Message *param_2,uchar *param_3,EpsCopyOutputStream *param_4)

{
  Reflection *this;
  uint uVar1;
  int iVar2;
  Metadata *pMVar3;
  MessageLite *this_00;
  uchar *puVar4;
  byte *pbVar5;
  Metadata local_18;
  
  pMVar3 = protobuf::Message::GetMetadata(param_2,&local_18);
  this = pMVar3->reflection;
  if (param_4->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
  }
  *param_3 = '\v';
  uVar1 = param_1->number_;
  param_3[1] = '\x10';
  pbVar5 = param_3 + 2;
  for (; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar5 = (byte)uVar1 | 0x80;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = (byte)uVar1;
  this_00 = (MessageLite *)Reflection::GetMessage(this,param_2,param_1,(MessageFactory *)0x0);
  iVar2 = MessageLite::GetCachedSize(this_00);
  puVar4 = WireFormatLite::InternalWriteMessage(3,this_00,iVar2,pbVar5 + 1,param_4);
  if (param_4->end_ <= puVar4) {
    puVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,puVar4);
  }
  *puVar4 = '\f';
  return puVar4 + 1;
}

// InternalSerializeUnknownFieldsToArray @ 14fa72b90

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(class
   google::protobuf::UnknownFieldSet const & __ptr64,unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
          (UnknownFieldSet *param_1,uchar *param_2,EpsCopyOutputStream *param_3)

{
  char *pcVar1;
  size_t _Size;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  char *_Src;
  longlong lVar12;
  basic_string_view<char,std::char_traits<char>_> local_38;
  undefined1 *puVar11;
  
  iVar9 = 0;
  iVar3 = UnknownFieldSet::field_count(param_1);
  if (0 < iVar3) {
    lVar12 = 0;
    do {
      uVar8 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      puVar11 = (undefined1 *)((longlong)&(param_1->fields_).soo_rep_.field0_0x0 + 8);
      if ((~((byte)uVar8 >> 2) & 1) == 0) {
        puVar11 = (undefined1 *)(uVar8 & 0xfffffffffffffff8);
      }
      puVar10 = (uint *)(puVar11 + lVar12);
      if (param_3->end_ <= param_2) {
        param_2 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,param_2);
      }
      uVar4 = puVar10[1];
      if (uVar4 == 0) {
        uVar8 = *(ulonglong *)(puVar10 + 2);
        for (uVar4 = *puVar10 << 3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        while( true ) {
          param_2 = param_2 + 1;
          bVar6 = (byte)uVar8;
          if (uVar8 < 0x80) break;
          uVar8 = uVar8 >> 7;
          *param_2 = bVar6 | 0x80;
        }
        *param_2 = bVar6;
LAB_14fa72e69:
        param_2 = param_2 + 1;
      }
      else if (uVar4 == 1) {
        uVar4 = puVar10[2];
        for (uVar5 = *puVar10 << 3 | 5; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
          *param_2 = (byte)uVar5 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar5;
        *(uint *)(param_2 + 1) = uVar4;
        param_2 = param_2 + 5;
      }
      else if (uVar4 == 2) {
        uVar2 = *(undefined8 *)(puVar10 + 2);
        for (uVar4 = *puVar10 << 3 | 1; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        *(undefined8 *)(param_2 + 1) = uVar2;
        param_2 = param_2 + 9;
      }
      else if (uVar4 == 3) {
        pcVar1 = *(char **)(puVar10 + 2);
        _Src = pcVar1;
        if (0xf < *(ulonglong *)(pcVar1 + 0x18)) {
          _Src = *(char **)pcVar1;
        }
        _Size = *(size_t *)(pcVar1 + 0x10);
        if ((longlong)_Size < 0x80) {
          uVar4 = *puVar10 * 8;
          if (uVar4 < 0x80) {
            lVar7 = 1;
          }
          else if (uVar4 < 0x4000) {
            lVar7 = 2;
          }
          else if (uVar4 < 0x200000) {
            lVar7 = 3;
          }
          else {
            lVar7 = 5 - (ulonglong)(uVar4 < 0x10000000);
          }
          if ((longlong)_Size <= (longlong)(param_3->end_ + (-(longlong)param_2 - lVar7) + 0xf)) {
            for (uVar4 = uVar4 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
              *param_2 = (byte)uVar4 | 0x80;
              param_2 = param_2 + 1;
            }
            *param_2 = (byte)uVar4;
            param_2[1] = (byte)_Size;
            memcpy(param_2 + 2,_Src,_Size);
            param_2 = param_2 + 2 + _Size;
            goto LAB_14fa72e6c;
          }
        }
        local_38._Mydata = _Src;
        local_38._Mysize = _Size;
        param_2 = io::EpsCopyOutputStream::WriteStringOutline(param_3,*puVar10,&local_38,param_2);
      }
      else if (uVar4 == 4) {
        for (uVar4 = *puVar10 << 3 | 3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        param_2 = InternalSerializeUnknownFieldsToArray
                            (*(UnknownFieldSet **)(puVar10 + 2),param_2 + 1,param_3);
        if (param_3->end_ <= param_2) {
          param_2 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,param_2);
        }
        for (uVar4 = *puVar10 << 3 | 4; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        goto LAB_14fa72e69;
      }
LAB_14fa72e6c:
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 0x10;
      iVar3 = UnknownFieldSet::field_count(param_1);
    } while (iVar9 < iVar3);
  }
  return param_2;
}

// InternalSerializeUnknownMessageSetItemsToArray @ 14fa72eb0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::InternalSerializeUnknownMessageSetItemsToArray(class
   google::protobuf::UnknownFieldSet const & __ptr64,unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::InternalSerializeUnknownMessageSetItemsToArray
          (UnknownFieldSet *param_1,uchar *param_2,EpsCopyOutputStream *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  UnknownField *this;
  byte *pbVar7;
  longlong lVar8;
  undefined1 *puVar6;
  
  iVar5 = 0;
  iVar2 = UnknownFieldSet::field_count(param_1);
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      uVar1 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      puVar6 = (undefined1 *)((longlong)&(param_1->fields_).soo_rep_.field0_0x0 + 8);
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        puVar6 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
      }
      this = (UnknownField *)(puVar6 + lVar8);
      if (this->type_ == 3) {
        if (param_3->end_ <= param_2) {
          param_2 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,param_2);
        }
        param_2[0] = '\v';
        param_2[1] = '\x10';
        pbVar7 = param_2 + 2;
        for (uVar3 = this->number_; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
          *pbVar7 = (byte)uVar3 | 0x80;
          pbVar7 = pbVar7 + 1;
        }
        *pbVar7 = (byte)uVar3;
        pbVar7[1] = 0x1a;
        puVar4 = UnknownField::InternalSerializeLengthDelimitedNoTag(this,pbVar7 + 2,param_3);
        if (param_3->end_ <= puVar4) {
          puVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,puVar4);
        }
        *puVar4 = '\f';
        param_2 = puVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
      iVar2 = UnknownFieldSet::field_count(param_1);
    } while (iVar5 < iVar2);
  }
  return param_2;
}

// IsSerializationDeterministic @ 14fa72fd0

/* public: bool __cdecl
   google::protobuf::io::EpsCopyOutputStream::IsSerializationDeterministic(void)const __ptr64 */

bool __thiscall
google::protobuf::io::EpsCopyOutputStream::IsSerializationDeterministic(EpsCopyOutputStream *this)

{
  return this->is_serialization_deterministic_;
}

// LastTagWas @ 14fa72fe0

/* public: bool __cdecl google::protobuf::io::CodedInputStream::LastTagWas(unsigned int) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::LastTagWas(CodedInputStream *this,uint param_1)

{
  return this->last_tag_ == param_1;
}

// LengthDelimitedSize @ 14fa72ff0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::LengthDelimitedSize(unsigned __int64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::LengthDelimitedSize(__uint64 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 | 1;
  if (4 < __isa_available) {
    return (LZCOUNT(uVar2) * -9 + 0x160U >> 6) + param_1;
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return ((0x1f - iVar1) * -9 + 0x160U >> 6) + param_1;
}

// MapKeyDataOnlyByteSize @ 14fa73040

/* WARNING: Enum "CppType": Some values do not have unique names */
/* unsigned __int64 __cdecl google::protobuf::internal::MapKeyDataOnlyByteSize(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::MapKey const & __ptr64)
    */

__uint64 __cdecl
google::protobuf::internal::MapKeyDataOnlyByteSize(FieldDescriptor *param_1,MapKey *param_2)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  __int64 _Var4;
  __uint64 _Var5;
  basic_string_view<char,std::char_traits<char>_> *pbVar6;
  LogMessage *pLVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  switch(param_1->type_) {
  case '\x01':
  case '\x02':
  case '\n':
  case '\v':
  case '\f':
  case '\x0e':
    pLVar7 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                        ,0x61f);
    local_38._Mydata = "Unsupported";
    local_38._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  case '\x03':
    _Var4 = MapKey::GetInt64Value(param_2);
    uVar3 = WireFormatLite::Int64Size(_Var4);
    return uVar3;
  case '\x04':
    _Var5 = MapKey::GetUInt64Value(param_2);
    uVar3 = WireFormatLite::UInt64Size(_Var5);
    return uVar3;
  case '\x05':
    iVar2 = MapKey::GetInt32Value(param_2);
    uVar3 = WireFormatLite::Int32Size(iVar2);
    return uVar3;
  case '\x06':
  case '\x10':
    return 8;
  case '\a':
  case '\x0f':
    return 4;
  case '\b':
    return 1;
  case '\t':
    break;
  case '\r':
    uVar1 = MapKey::GetUInt32Value(param_2);
    uVar3 = WireFormatLite::UInt32Size(uVar1);
    return uVar3;
  case '\x11':
    iVar2 = MapKey::GetInt32Value(param_2);
    _Var5 = WireFormatLite::SInt32Size(iVar2);
    return _Var5;
  case '\x12':
    _Var4 = MapKey::GetInt64Value(param_2);
    _Var5 = WireFormatLite::SInt64Size(_Var4);
    return _Var5;
  default:
    pLVar7 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_18,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                        ,0x63a);
    local_38._Mydata = "Cannot get here";
    local_38._Mysize = 0xf;
    local_28._Mydata = "Cannot get here";
    local_28._Mysize = 0xf;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_18);
  }
  pbVar6 = MapKey::GetStringValue(param_2,&local_18);
  uVar1 = (uint)pbVar6->_Mysize | 1;
  if (__isa_available < 5) {
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 0x1f - iVar2;
  }
  else {
    iVar2 = LZCOUNT(uVar1);
  }
  return (ulonglong)(iVar2 * -9 + 0x160U >> 6) + pbVar6->_Mysize;
}

// FUN_14fa73250 @ 14fa73250

/* WARNING: Enum "CppType": Some values do not have unique names */

__uint64 FUN_14fa73250(longlong param_1,MapValueConstRef *param_2)

{
  uint uVar1;
  int iVar2;
  __int64 _Var3;
  __uint64 _Var4;
  basic_string_view<char,std::char_traits<char>_> *pbVar5;
  Message *pMVar6;
  LogMessage *pLVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 6:
  case 0x10:
    return 8;
  case 2:
  case 7:
  case 0xf:
    return 4;
  case 3:
    _Var3 = google::protobuf::MapValueConstRef::GetInt64Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::Int64Size(_Var3);
    return _Var4;
  case 4:
    _Var4 = google::protobuf::MapValueConstRef::GetUInt64Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::UInt64Size(_Var4);
    return _Var4;
  case 5:
    iVar2 = google::protobuf::MapValueConstRef::GetInt32Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::Int32Size(iVar2);
    return _Var4;
  case 8:
    return 1;
  case 9:
  case 0xc:
    break;
  case 10:
    pLVar7 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                        ,0x642);
    local_38._Mydata = "Unsupported";
    local_38._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  case 0xb:
    pMVar6 = google::protobuf::MapValueConstRef::GetMessageValue(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      (pMVar6);
    return _Var4;
  case 0xd:
    uVar1 = google::protobuf::MapValueConstRef::GetUInt32Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::UInt32Size(uVar1);
    return _Var4;
  case 0xe:
    iVar2 = google::protobuf::MapValueConstRef::GetEnumValue(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::EnumSize(iVar2);
    return _Var4;
  case 0x11:
    iVar2 = google::protobuf::MapValueConstRef::GetInt32Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::SInt32Size(iVar2);
    return _Var4;
  case 0x12:
    _Var3 = google::protobuf::MapValueConstRef::GetInt64Value(param_2);
    _Var4 = google::protobuf::internal::WireFormatLite::SInt64Size(_Var3);
    return _Var4;
  default:
    pLVar7 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_18,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                        ,0x662);
    local_38._Mydata = "Cannot get here";
    local_38._Mysize = 0xf;
    local_28._Mydata = "Cannot get here";
    local_28._Mysize = 0xf;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_18);
  }
  pbVar5 = google::protobuf::MapValueConstRef::GetStringValue(param_2,&local_18);
  uVar1 = (uint)pbVar5->_Mysize | 1;
  if (__isa_available < 5) {
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 0x1f - iVar2;
  }
  else {
    iVar2 = LZCOUNT(uVar1);
  }
  return (ulonglong)(iVar2 * -9 + 0x160U >> 6) + pbVar5->_Mysize;
}

// MessageSetItemByteSize @ 14fa73490

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetItemByteSize(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message const &
   __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormat::MessageSetItemByteSize
          (FieldDescriptor *param_1,Message *param_2)

{
  uint uVar1;
  Metadata *pMVar2;
  Message *pMVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadata(param_2,&local_18);
  uVar1 = param_1->number_ | 1;
  if (__isa_available < 5) {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  else {
    iVar5 = LZCOUNT(uVar1);
  }
  lVar6 = WireFormatLite::kMessageSetItemTagsSize + (iVar5 * -9 + 0x160U >> 6);
  pMVar3 = Reflection::GetMessage(pMVar2->reflection,param_2,param_1,(MessageFactory *)0x0);
  lVar4 = (**(code **)(*(longlong *)pMVar3 + 0x10))(pMVar3);
  uVar1 = (uint)lVar4 | 1;
  if (__isa_available < 5) {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  else {
    iVar5 = LZCOUNT(uVar1);
  }
  return (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar4 + lVar6;
}

// NewMessage @ 14fa73570

/* public: class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::RepeatedFieldRef<class google::protobuf::Message,void>::NewMessage(void)const
   __ptr64 */

Message * __thiscall
google::protobuf::RepeatedFieldRef<google::protobuf::Message,void>::NewMessage
          (RepeatedFieldRef<google::protobuf::Message,void> *this)

{
  MessageLite *pMVar1;
  
  pMVar1 = MessageLite::New(*(MessageLite **)(this + 0x10),(Arena *)0x0);
  return (Message *)pMVar1;
}

// ParseAndMergeField @ 14fa73590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static bool __cdecl google::protobuf::internal::WireFormat::ParseAndMergeField(unsigned
   int,class google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message *
   __ptr64,class google::protobuf::io::CodedInputStream * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::ParseAndMergeField
          (uint param_1,FieldDescriptor *param_2,Message *param_3,CodedInputStream *param_4)

{
  int *piVar1;
  byte bVar2;
  Reflection *this;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  CppStringType CVar7;
  uint uVar8;
  int iVar9;
  Metadata *pMVar10;
  ulonglong uVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  MessageLite *this_00;
  Message *pMVar13;
  __int64 _Var14;
  EnumDescriptor *this_01;
  EnumValueDescriptor *pEVar15;
  UnknownFieldSet *pUVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong64 uVar19;
  uint uVar20;
  undefined1 auStack_e8 [48];
  Rep_u_0 local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a8;
  Metadata local_88;
  _Bxty local_78;
  ulong64 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pMVar10 = protobuf::Message::GetMetadata(param_3,&local_88);
  this = pMVar10->reflection;
  if (param_2 == (FieldDescriptor *)0x0) {
LAB_14fa7456e:
    pUVar16 = Reflection::MutableUnknownFields(this,param_3);
    bVar5 = SkipField(param_4,param_1,pUVar16);
    return bVar5;
  }
  bVar2 = param_2->type_;
  if ((param_1 & 7) !=
      *(uint *)((longlong)&WireFormatLite::kWireTypeForFieldType + (ulonglong)bVar2 * 4)) {
    if ((((!param_2->is_repeated_) || ((byte)(bVar2 - 9) < 3)) || (bVar2 == 0xc)) ||
       ((param_1 & 7) != 2)) goto LAB_14fa7456e;
    uVar20 = 0;
    pbVar3 = param_4->buffer_;
    uVar8 = 0;
    if (pbVar3 < param_4->buffer_end_) {
      bVar2 = *pbVar3;
      uVar18 = (uint)bVar2;
      uVar8 = (uint)bVar2;
      if (0x7f < bVar2) goto LAB_14fa73e4d;
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
LAB_14fa73e4d:
      _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
      uVar18 = (uint)_Var14;
      if (_Var14 < 0) {
        return false;
      }
    }
    local_b8.as_tree.cordz_info._0_4_ = io::CodedInputStream::PushLimit(param_4,uVar18);
    switch(param_2->type_) {
    case '\x01':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
            bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback
                              (param_4,(__uint64 *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
          }
          else {
            local_78._Ptr = (char *)*(undefined8 *)param_4->buffer_;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
          }
          Reflection::AddDouble(this,param_3,param_2,(double)local_78._Ptr);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x02':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
            bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
            uVar6 = local_78._0_4_;
          }
          else {
            uVar6 = *(undefined4 *)param_4->buffer_;
            local_78._0_4_ = uVar6;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
          }
          Reflection::AddFloat(this,param_3,param_2,(float)uVar6);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x03':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
            param_4->buffer_ = pbVar3 + 1;
            uVar17 = (char *)(ulonglong)bVar2;
          }
          else {
            io::CodedInputStream::ReadVarint64Fallback
                      (param_4,(pair<unsigned___int64,bool> *)&local_78);
            uVar17 = local_78._Ptr;
            if (local_78._Buf[8] == '\0') {
              return false;
            }
          }
          Reflection::AddInt64(this,param_3,param_2,uVar17);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x04':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
            param_4->buffer_ = pbVar3 + 1;
            uVar17 = (char *)(ulonglong)bVar2;
          }
          else {
            io::CodedInputStream::ReadVarint64Fallback
                      (param_4,(pair<unsigned___int64,bool> *)&local_78);
            uVar17 = local_78._Ptr;
            if (local_78._Buf[8] == '\0') {
              return false;
            }
          }
          Reflection::AddUInt64(this,param_3,param_2,uVar17);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x05':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          uVar8 = uVar20;
          if (pbVar3 < param_4->buffer_end_) {
            bVar2 = *pbVar3;
            uVar8 = (uint)bVar2;
            uVar18 = (uint)bVar2;
            if (0x7f < bVar2) goto LAB_14fa73ec3;
            param_4->buffer_ = pbVar3 + 1;
          }
          else {
LAB_14fa73ec3:
            _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
            uVar18 = (uint)_Var14;
            if (_Var14 < 0) {
              return false;
            }
          }
          Reflection::AddInt32(this,param_3,param_2,uVar18);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
          if (iVar9 < 1) {
            io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
            return true;
          }
        } while( true );
      }
      break;
    case '\x06':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
            bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback
                              (param_4,(__uint64 *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
          }
          else {
            local_78._Ptr = (char *)*(undefined8 *)param_4->buffer_;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
          }
          Reflection::AddUInt64(this,param_3,param_2,(__uint64)local_78._Ptr);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\a':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
            bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
            uVar6 = local_78._0_4_;
          }
          else {
            uVar6 = *(undefined4 *)param_4->buffer_;
            local_78._0_4_ = uVar6;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
          }
          Reflection::AddUInt32(this,param_3,param_2,uVar6);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\b':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
            param_4->buffer_ = pbVar3 + 1;
            uVar17 = (char *)(ulonglong)bVar2;
          }
          else {
            io::CodedInputStream::ReadVarint64Fallback
                      (param_4,(pair<unsigned___int64,bool> *)&local_78);
            uVar17 = local_78._Ptr;
            if (local_78._Buf[8] == '\0') {
              return false;
            }
          }
          Reflection::AddBool(this,param_3,param_2,(char *)uVar17 != (char *)0x0);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
      goto switchD_14fa73e90_caseD_9;
    case '\r':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          uVar8 = uVar20;
          if (pbVar3 < param_4->buffer_end_) {
            bVar2 = *pbVar3;
            uVar8 = (uint)bVar2;
            uVar18 = (uint)bVar2;
            if (0x7f < bVar2) goto LAB_14fa740b5;
            param_4->buffer_ = pbVar3 + 1;
          }
          else {
LAB_14fa740b5:
            _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
            uVar18 = (uint)_Var14;
            if (_Var14 < 0) {
              return false;
            }
          }
          Reflection::AddUInt32(this,param_3,param_2,uVar18);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
          if (iVar9 < 1) {
            io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
            return true;
          }
        } while( true );
      }
      break;
    case '\x0e':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      while (0 < iVar9) {
        pbVar3 = param_4->buffer_;
        uVar8 = uVar20;
        if (pbVar3 < param_4->buffer_end_) {
          bVar2 = *pbVar3;
          uVar11 = (ulonglong)bVar2;
          uVar8 = (uint)bVar2;
          if (0x7f < bVar2) goto LAB_14fa744d1;
          param_4->buffer_ = pbVar3 + 1;
        }
        else {
LAB_14fa744d1:
          uVar11 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
          if ((longlong)uVar11 < 0) {
            return false;
          }
        }
        bVar5 = FieldDescriptor::legacy_enum_field_treated_as_closed(param_2);
        iVar9 = (int)uVar11;
        if (bVar5) {
          this_01 = FieldDescriptor::enum_type(param_2);
          pEVar15 = EnumDescriptor::FindValueByNumber(this_01,iVar9);
          if (pEVar15 == (EnumValueDescriptor *)0x0) {
            pUVar16 = Reflection::MutableUnknownFields(this,param_3);
            UnknownFieldSet::AddVarint(pUVar16,param_1 >> 3,(longlong)iVar9);
          }
          else {
            Reflection::AddEnum(this,param_3,param_2,pEVar15);
          }
        }
        else {
          Reflection::AddEnumValue(this,param_3,param_2,iVar9);
        }
        iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      }
      break;
    case '\x0f':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
            bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
            uVar6 = local_78._0_4_;
          }
          else {
            uVar6 = *(undefined4 *)param_4->buffer_;
            local_78._0_4_ = uVar6;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
          }
          Reflection::AddInt32(this,param_3,param_2,uVar6);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x10':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
            bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback
                              (param_4,(__uint64 *)local_78._Buf);
            if (!bVar5) {
              return false;
            }
          }
          else {
            local_78._Ptr = (char *)*(undefined8 *)param_4->buffer_;
            param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
          }
          Reflection::AddInt64(this,param_3,param_2,(__int64)local_78._Ptr);
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x11':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          uVar8 = 0;
          if ((pbVar3 < param_4->buffer_end_) && (uVar8 = (uint)*pbVar3, *pbVar3 < 0x80)) {
            param_4->buffer_ = pbVar3 + 1;
          }
          else {
            _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
            uVar8 = (uint)_Var14;
            if (_Var14 < 0) {
              return false;
            }
          }
          Reflection::AddInt32(this,param_3,param_2,uVar8 >> 1 ^ -(uVar8 & 1));
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
      break;
    case '\x12':
      iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
      if (0 < iVar9) {
        do {
          pbVar3 = param_4->buffer_;
          if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
            param_4->buffer_ = pbVar3 + 1;
            uVar17 = (char *)(ulonglong)bVar2;
          }
          else {
            io::CodedInputStream::ReadVarint64Fallback
                      (param_4,(pair<unsigned___int64,bool> *)&local_78);
            uVar17 = local_78._Ptr;
            if (local_78._Buf[8] == '\0') {
              return false;
            }
          }
          Reflection::AddInt64
                    (this,param_3,param_2,(ulonglong)uVar17 >> 1 ^ -(ulonglong)((uint)uVar17 & 1));
          iVar9 = io::CodedInputStream::BytesUntilLimit(param_4);
        } while (0 < iVar9);
        io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
        return true;
      }
    }
    io::CodedInputStream::PopLimit(param_4,local_b8.as_tree.cordz_info._0_4_);
switchD_14fa73617_default:
    return true;
  }
  switch(param_2->type_) {
  case '\x01':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
      bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback(param_4,(__uint64 *)local_b8.data);
      if (!bVar5) {
        return false;
      }
    }
    else {
      local_b8.as_tree.cordz_info = *(undefined8 *)param_4->buffer_;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
    }
    if (!param_2->is_repeated_) {
      Reflection::SetDouble(this,param_3,param_2,(double)local_b8.as_tree.cordz_info);
      return true;
    }
    Reflection::AddDouble(this,param_3,param_2,(double)local_b8.as_tree.cordz_info);
    return true;
  case '\x02':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
      bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
      if (!bVar5) {
        return false;
      }
    }
    else {
      local_78._0_4_ = *(undefined4 *)param_4->buffer_;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
    }
    if (!param_2->is_repeated_) {
      Reflection::SetFloat(this,param_3,param_2,(float)local_78._0_4_);
      return true;
    }
    Reflection::AddFloat(this,param_3,param_2,(float)local_78._0_4_);
    return true;
  case '\x03':
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (*pbVar3 < 0x80)) {
      local_b8.as_tree.cordz_info = (long64)*pbVar3;
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback
                (param_4,(pair<unsigned___int64,bool> *)&local_b8.as_tree);
      if (local_b8.data[8] == '\0') {
        return false;
      }
    }
    break;
  case '\x04':
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
      param_4->buffer_ = pbVar3 + 1;
      uVar17 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(ulonglong)bVar2;
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback
                (param_4,(pair<unsigned___int64,bool> *)&local_b8.as_tree);
      uVar17 = local_b8.as_tree.cordz_info;
      if (local_b8.data[8] == '\0') {
        return false;
      }
    }
    goto LAB_14fa73823;
  case '\x05':
    uVar8 = 0;
    pbVar3 = param_4->buffer_;
    if (pbVar3 < param_4->buffer_end_) {
      bVar2 = *pbVar3;
      uVar11 = (ulonglong)bVar2;
      uVar8 = (uint)bVar2;
      if (0x7f < bVar2) goto LAB_14fa7363a;
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
LAB_14fa7363a:
      uVar11 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
      if ((longlong)uVar11 < 0) {
switchD_14fa73e90_caseD_9:
        return false;
      }
    }
    local_78._0_4_ = (undefined4)uVar11;
    goto LAB_14fa7365b;
  case '\x06':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
      bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback(param_4,(__uint64 *)local_b8.data);
      uVar17 = local_b8.as_tree.cordz_info;
      if (!bVar5) {
        return false;
      }
    }
    else {
      local_b8.as_tree.cordz_info = *(undefined8 *)param_4->buffer_;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
      uVar17 = local_b8.as_tree.cordz_info;
    }
LAB_14fa73823:
    if (!param_2->is_repeated_) {
      Reflection::SetUInt64(this,param_3,param_2,uVar17);
      return true;
    }
    Reflection::AddUInt64(this,param_3,param_2,uVar17);
    return true;
  case '\a':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
      bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
      if (!bVar5) {
        return false;
      }
      uVar6 = local_78._0_4_;
    }
    else {
      uVar6 = *(undefined4 *)param_4->buffer_;
      local_78._0_4_ = uVar6;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
    }
    goto LAB_14fa737c6;
  case '\b':
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (*pbVar3 < 0x80)) {
      local_b8.as_tree.cordz_info = (long64)*pbVar3;
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback
                (param_4,(pair<unsigned___int64,bool> *)&local_b8.as_tree);
      if (local_b8.data[8] == '\0') {
        return false;
      }
    }
    if (!param_2->is_repeated_) {
      Reflection::SetBool(this,param_3,param_2,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          local_b8.as_tree.cordz_info !=
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0);
      return true;
    }
    Reflection::AddBool(this,param_3,param_2,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        local_b8.as_tree.cordz_info !=
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0);
    return true;
  case '\t':
    bVar5 = FieldDescriptor::requires_utf8_validation(param_2);
    local_78._8_8_ = 0;
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    local_78._Ptr = (char *)0x0;
    bVar4 = WireFormatLite::ReadBytes
                      (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_78);
    if (bVar4) {
      if (bVar5) {
        pbVar12 = param_2->all_names_;
        local_b8.as_tree.cordz_info = (long64)(pbVar12 + 1);
        if (0xf < pbVar12[1]._Mypair._Myval2._Myres) {
          local_b8.as_tree.cordz_info = (long64)pbVar12[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_b8.as_tree.rep = (CordRep *)pbVar12[1]._Mypair._Myval2._Mysize;
        uVar17 = &local_78;
        if (0xf < uStack_60) {
          uVar17 = local_78._Ptr;
        }
        bVar5 = WireFormatLite::VerifyUtf8String
                          ((char *)uVar17,(int)local_68,PARSE,
                           (basic_string_view<char,std::char_traits<char>_> *)&local_b8.as_tree);
        if (!bVar5) goto LAB_14fa73bb1;
      }
      if (param_2->is_repeated_) {
        pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                            (&local_a8,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78);
        Reflection::AddString(this,param_3,param_2,pbVar12);
      }
      else {
        pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                            (&local_a8,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78);
        Reflection::SetString(this,param_3,param_2,pbVar12);
      }
      if (uStack_60 < 0x10) {
        return true;
      }
      uVar19 = uStack_60 + 1;
      uVar17 = local_78._Ptr;
      if (0xfff < uVar19) {
        uVar19 = uStack_60 + 0x28;
        uVar17 = *(undefined8 *)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar17)) goto LAB_14fa73bef;
      }
LAB_14fa73ba5:
      ::operator_delete((void *)uVar17,uVar19);
      return true;
    }
LAB_14fa73bb1:
    if (uStack_60 < 0x10) {
      return false;
    }
    uVar19 = uStack_60 + 1;
    uVar17 = local_78._Ptr;
    if (0xfff < uVar19) {
      uVar19 = uStack_60 + 0x28;
      uVar17 = *(undefined8 *)(local_78._Ptr + -8);
      if ((char *)0x1f < local_78._Ptr + (-8 - uVar17)) {
LAB_14fa73bef:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_14fa73cea:
    ::operator_delete((void *)uVar17,uVar19);
    return false;
  case '\n':
    if (param_2->is_repeated_) {
      this_00 = (MessageLite *)
                Reflection::AddMessage(this,param_3,param_2,param_4->extension_factory_);
    }
    else {
      this_00 = (MessageLite *)
                Reflection::MutableMessage(this,param_3,param_2,param_4->extension_factory_);
    }
    piVar1 = &param_4->recursion_budget_;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return false;
    }
    bVar5 = MessageLite::MergePartialFromCodedStream(this_00,param_4);
    if (!bVar5) {
      return false;
    }
    param_4->recursion_budget_ = param_4->recursion_budget_ + 1;
    if (param_4->last_tag_ == (param_1 & 0xfffffffc | 4)) {
      return true;
    }
    return false;
  case '\v':
    if (param_2->is_repeated_) {
      pMVar13 = Reflection::AddMessage(this,param_3,param_2,param_4->extension_factory_);
    }
    else {
      pMVar13 = Reflection::MutableMessage(this,param_3,param_2,param_4->extension_factory_);
    }
    bVar5 = WireFormatLite::ReadMessage<google::protobuf::Message>(param_4,pMVar13);
    return bVar5;
  case '\f':
    CVar7 = FieldDescriptor::cpp_string_type(param_2);
    if (CVar7 == kCord) {
      local_b8.as_tree.cordz_info = 0;
      local_b8.as_tree.rep = (CordRep *)0x0;
      pbVar3 = param_4->buffer_;
      if ((pbVar3 < param_4->buffer_end_) && (uVar8 = (uint)*pbVar3, *pbVar3 < 0x80)) {
        param_4->buffer_ = pbVar3 + 1;
      }
      else {
        uVar8 = io::CodedInputStream::ReadVarintSizeAsIntFallback(param_4);
        if ((int)uVar8 < 0) goto LAB_14fa73c78;
      }
      bVar5 = io::CodedInputStream::ReadCord(param_4,(Cord *)&local_b8.as_tree,uVar8);
      if (bVar5) {
        Reflection::SetString(this,param_3,param_2,(Cord *)&local_b8.as_tree);
        if ((local_b8.as_tree.cordz_info & 1U) != 0) {
          absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_b8.as_tree);
        }
        return true;
      }
LAB_14fa73c78:
      if ((local_b8.as_tree.cordz_info & 1U) == 0) {
        return false;
      }
      absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_b8.as_tree);
      return false;
    }
    local_78._8_8_ = 0;
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    local_78._Ptr = (char *)0x0;
    bVar5 = WireFormatLite::ReadBytes
                      (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_78);
    if (bVar5) {
      if (param_2->is_repeated_) {
        pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                            (&local_a8,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78);
        Reflection::AddString(this,param_3,param_2,pbVar12);
      }
      else {
        pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                            (&local_a8,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78);
        Reflection::SetString(this,param_3,param_2,pbVar12);
      }
      if (uStack_60 < 0x10) {
        return true;
      }
      uVar19 = uStack_60 + 1;
      uVar17 = local_78._Ptr;
      if (0xfff < uVar19) {
        uVar19 = uStack_60 + 0x28;
        uVar17 = *(float **)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - (longlong)*(float **)(local_78._Ptr + -8)))
        goto LAB_14fa73d71;
      }
      goto LAB_14fa73ba5;
    }
    if (uStack_60 < 0x10) {
      return false;
    }
    uVar19 = uStack_60 + 1;
    uVar17 = local_78._Ptr;
    if (0xfff < uVar19) {
      uVar19 = uStack_60 + 0x28;
      uVar17 = *(float **)(local_78._Ptr + -8);
      if ((char *)0x1f < local_78._Ptr + (-8 - (longlong)*(float **)(local_78._Ptr + -8))) {
LAB_14fa73d71:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_14fa73cea;
  case '\r':
    uVar6 = 0.0;
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (uVar6 = ZEXT14(*pbVar3), *pbVar3 < 0x80)) {
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
      _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar6);
      uVar6 = (undefined4)_Var14;
      if (_Var14 < 0) {
        return false;
      }
    }
LAB_14fa737c6:
    if (!param_2->is_repeated_) {
      Reflection::SetUInt32(this,param_3,param_2,uVar6);
      return true;
    }
    Reflection::AddUInt32(this,param_3,param_2,uVar6);
    return true;
  case '\x0e':
    uVar8 = 0;
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (uVar8 = (uint)*pbVar3, *pbVar3 < 0x80)) {
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
      _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
      uVar8 = (uint)_Var14;
      if (_Var14 < 0) {
        return false;
      }
    }
    if (!param_2->is_repeated_) {
      Reflection::SetEnumValue(this,param_3,param_2,uVar8);
      return true;
    }
    Reflection::AddEnumValue(this,param_3,param_2,uVar8);
    return true;
  case '\x0f':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 4) {
      bVar5 = io::CodedInputStream::ReadLittleEndian32Fallback(param_4,(uint *)local_78._Buf);
      if (!bVar5) {
        return false;
      }
    }
    else {
      local_78._0_4_ = *(undefined4 *)param_4->buffer_;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 4);
    }
    goto LAB_14fa7365b;
  case '\x10':
    if (*(int *)&param_4->buffer_end_ - *(int *)&param_4->buffer_ < 8) {
      bVar5 = io::CodedInputStream::ReadLittleEndian64Fallback(param_4,(__uint64 *)local_b8.data);
      if (!bVar5) {
        return false;
      }
    }
    else {
      local_b8.as_tree.cordz_info = *(undefined8 *)param_4->buffer_;
      param_4->buffer_ = (uchar *)((longlong)param_4->buffer_ + 8);
    }
    break;
  case '\x11':
    uVar8 = 0;
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (uVar8 = (uint)*pbVar3, *pbVar3 < 0x80)) {
      param_4->buffer_ = pbVar3 + 1;
    }
    else {
      _Var14 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
      uVar8 = (uint)_Var14;
      if (_Var14 < 0) {
        return false;
      }
    }
    local_78._0_4_ = uVar8 >> 1 ^ -(uVar8 & 1);
LAB_14fa7365b:
    if (!param_2->is_repeated_) {
      Reflection::SetInt32(this,param_3,param_2,local_78._0_4_);
      return true;
    }
    Reflection::AddInt32(this,param_3,param_2,local_78._0_4_);
    return true;
  case '\x12':
    pbVar3 = param_4->buffer_;
    if ((pbVar3 < param_4->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
      param_4->buffer_ = pbVar3 + 1;
      local_b8.as_tree.cordz_info = (ulonglong)(bVar2 >> 1) ^ -(ulonglong)(bVar2 & 1);
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback
                (param_4,(pair<unsigned___int64,bool> *)&local_b8.as_tree);
      if (local_b8.data[8] == '\0') {
        return false;
      }
      local_b8.as_tree.cordz_info =
           (ulonglong)local_b8.as_tree.cordz_info >> 1 ^
           -(ulonglong)((uint)local_b8.as_tree.cordz_info & 1);
    }
    break;
  default:
    goto switchD_14fa73617_default;
  }
  if (param_2->is_repeated_) {
    Reflection::AddInt64(this,param_3,param_2,local_b8.as_tree.cordz_info);
  }
  else {
    Reflection::SetInt64(this,param_3,param_2,local_b8.as_tree.cordz_info);
  }
  return true;
}

// ParseAndMergeMessageSetField @ 14fa74640

/* private: static bool __cdecl
   google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField(unsigned int,class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::Message * __ptr64,class
   google::protobuf::io::CodedInputStream * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::ParseAndMergeMessageSetField
          (uint param_1,FieldDescriptor *param_2,Message *param_3,CodedInputStream *param_4)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  Metadata *pMVar4;
  UnknownFieldSet *this;
  __int64 _Var5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  LogMessage *this_00;
  uint uVar8;
  uint uVar9;
  basic_string_view<char,std::char_traits<char>_> local_38;
  Metadata local_28;
  
  uVar8 = 0;
  pMVar4 = protobuf::Message::GetMetadata(param_3,&local_28);
  if (param_2 == (FieldDescriptor *)0x0) {
    this = Reflection::MutableUnknownFields(pMVar4->reflection,param_3);
    pbVar2 = param_4->buffer_;
    if (pbVar2 < param_4->buffer_end_) {
      bVar1 = *pbVar2;
      uVar8 = (uint)bVar1;
      uVar9 = (uint)bVar1;
      if (0x7f < bVar1) goto LAB_14fa746a1;
      param_4->buffer_ = pbVar2 + 1;
    }
    else {
LAB_14fa746a1:
      _Var5 = io::CodedInputStream::ReadVarint32Fallback(param_4,uVar8);
      uVar9 = (uint)_Var5;
      if (_Var5 < 0) goto LAB_14fa7475f;
    }
    pbVar6 = UnknownFieldSet::AddLengthDelimited(this,param_1);
    bVar3 = io::CodedInputStream::ReadString(param_4,pbVar6,uVar9);
  }
  else {
    if ((!param_2->is_repeated_) && (param_2->type_ == '\v')) {
      pMVar7 = Reflection::MutableMessage
                         (pMVar4->reflection,param_3,param_2,param_4->extension_factory_);
      bVar3 = WireFormatLite::ReadMessage<google::protobuf::Message>(param_4,pMVar7);
      return bVar3;
    }
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessage::LogMessage
                        ((LogMessage *)&local_28,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                         ,0x181,(ErrorTag)0x0);
    local_38._Mydata = "Extensions of MessageSets must be optional messages.";
    local_38._Mysize = 0x34;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_38);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)&local_28);
LAB_14fa7475f:
    bVar3 = false;
  }
  return bVar3;
}

// ParseAndMergeMessageSetItem @ 14fa74780

/* public: static bool __cdecl
   google::protobuf::internal::WireFormat::ParseAndMergeMessageSetItem(class
   google::protobuf::io::CodedInputStream * __ptr64,class google::protobuf::Message * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::ParseAndMergeMessageSetItem
          (CodedInputStream *param_1,Message *param_2)

{
  undefined1 uVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadata(param_2,&local_18);
  local_18.descriptor = (Descriptor *)pMVar2->reflection;
  local_18.reflection = (Reflection *)param_2;
  uVar1 = FUN_14fa65c90(param_1,&local_18);
  return (bool)uVar1;
}

// ParseAndMergePartial @ 14fa747d0

/* public: static bool __cdecl google::protobuf::internal::WireFormat::ParseAndMergePartial(class
   google::protobuf::io::CodedInputStream * __ptr64,class google::protobuf::Message * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::ParseAndMergePartial
          (CodedInputStream *param_1,Message *param_2)

{
  byte bVar1;
  Descriptor *this;
  Reflection *this_00;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  Metadata *pMVar6;
  FieldDescriptor *pFVar7;
  ExtensionRange *pEVar8;
  ulonglong uVar9;
  Reflection *local_58;
  Message *local_50;
  Metadata local_48;
  Metadata local_38;
  Metadata local_28;
  
  pMVar6 = protobuf::Message::GetMetadata(param_2,&local_48);
  this = pMVar6->descriptor;
  pMVar6 = protobuf::Message::GetMetadata(param_2,&local_38);
  this_00 = pMVar6->reflection;
  do {
    pbVar2 = param_1->buffer_;
    uVar5 = 0;
    if (pbVar2 < param_1->buffer_end_) {
      bVar1 = *pbVar2;
      uVar9 = (ulonglong)bVar1;
      uVar5 = (uint)bVar1;
      if (0x7f < bVar1) goto LAB_14fa7483e;
      param_1->buffer_ = pbVar2 + 1;
    }
    else {
LAB_14fa7483e:
      uVar5 = io::CodedInputStream::ReadTagFallback(param_1,uVar5);
      uVar9 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar9;
    param_1->last_tag_ = uVar5;
    if ((uVar5 == 0) || (((byte)uVar9 & 7) == 4)) {
      return true;
    }
    pFVar7 = (FieldDescriptor *)0x0;
    if (this == (Descriptor *)0x0) {
LAB_14fa748f3:
      cVar4 = ParseAndMergeField(uVar5,pFVar7,param_2,param_1);
    }
    else {
      iVar3 = (int)(uVar9 >> 3);
      pFVar7 = Descriptor::FindFieldByNumber(this,iVar3);
      if (pFVar7 != (FieldDescriptor *)0x0) goto LAB_14fa748f3;
      pEVar8 = Descriptor::FindExtensionRangeContainingNumber(this,iVar3);
      if (pEVar8 != (ExtensionRange *)0x0) {
        if (param_1->extension_pool_ == (DescriptorPool *)0x0) {
          pFVar7 = Reflection::FindKnownExtensionByNumber(this_00,iVar3);
        }
        else {
          pFVar7 = DescriptorPool::FindExtensionByNumber(param_1->extension_pool_,this,iVar3);
        }
        if (pFVar7 != (FieldDescriptor *)0x0) goto LAB_14fa748f3;
      }
      if (((this->options_->_impl_).message_set_wire_format_ == false) || (uVar5 != 0xb))
      goto LAB_14fa748f3;
      pMVar6 = protobuf::Message::GetMetadata(param_2,&local_28);
      local_58 = pMVar6->reflection;
      local_50 = param_2;
      cVar4 = FUN_14fa65c90(param_1,&local_58);
    }
    if (cVar4 == '\0') {
      return false;
    }
  } while( true );
}

// ParseBigVarint @ 14fa74940

/* char const * __ptr64 __cdecl google::protobuf::internal::ParseBigVarint(char const *
   __ptr64,unsigned __int64 * __ptr64) */

char * __cdecl google::protobuf::internal::ParseBigVarint(char *param_1,__uint64 *param_2)

{
  ushort uVar1;
  uint uVar2;
  __uint64 _Var3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar2 = (uint)(char)*(ushort *)param_1;
  uVar4 = (uVar2 & *(ushort *)param_1) + uVar2;
  _Var3 = (__uint64)(uVar4 >> 1);
  if (-1 < (short)uVar4) {
    *param_2 = _Var3;
    return param_1 + (ulonglong)(uVar4 < uVar2) + 1;
  }
  uVar2 = 1;
  bVar6 = 0xd;
  do {
    uVar1 = *(ushort *)(param_1 + uVar2 * 2);
    uVar4 = (uint)(char)uVar1;
    uVar5 = (uVar4 & uVar1) + uVar4;
    _Var3 = _Var3 + ((ulonglong)uVar5 - 2 << (bVar6 & 0x3f));
    if (-1 < (short)uVar5) {
      *param_2 = _Var3;
      return (char *)((longlong)(param_1 + uVar2 * 2) + (ulonglong)(uVar5 < uVar4) + 1);
    }
    uVar2 = uVar2 + 1;
    bVar6 = bVar6 + 0xe;
  } while (uVar2 < 5);
  return (char *)0x0;
}

// ParseElement @ 14fa74a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetParser::ParseElement(char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::WireFormat::MessageSetParser::ParseElement
          (MessageSetParser *this,char *param_1,ParseContext *param_2)

{
  ushort uVar1;
  DescriptorPool *pDVar2;
  MessageFactory *pMVar3;
  int iVar4;
  InternalMetadata *this_00;
  FieldDescriptor *pFVar5;
  Descriptor *pDVar6;
  MessageLite *this_01;
  char *pcVar7;
  UnknownFieldSet *this_02;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_03;
  undefined8 uVar8;
  ExtensionRange *pEVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort *puVar14;
  byte bVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStackY_168 [32];
  <lambda_1> local_138;
  ushort *local_120;
  char local_118;
  ushort *local_110;
  uint local_108;
  ushort *local_100;
  uint local_f8;
  ushort *local_f0;
  uint local_e8;
  _Bxty local_e0;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined1 local_b8 [48];
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  DescriptorPool *local_58;
  MessageFactory *pMStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = Reflection::MutableInternalMetadata(*(Reflection **)(this + 0x10),*(Message **)this);
  uVar13 = 0;
  local_e0._8_8_ = 0;
  local_d0 = 0;
  local_c8 = 0xf;
  local_e0._Ptr = (char *)0x0;
  uVar18 = uVar13;
  do {
    while( true ) {
      if ((ushort *)param_2->_padding_ <= param_1) {
        iVar4 = (int)param_1 - (int)param_2->_padding_;
        if (iVar4 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          puVar16 = (ushort *)param_1;
          if ((0 < iVar4) && (puVar16 = (ushort *)param_1, param_2->_padding_ == 0)) {
            puVar16 = (ushort *)0x0;
          }
          goto LAB_14fa74fb3;
        }
        EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_2,(int)&local_120,iVar4);
        puVar16 = local_120;
        param_1 = (char *)local_120;
        if (local_118 != '\0') goto LAB_14fa74fb3;
      }
      pFVar5 = (FieldDescriptor *)0x0;
      puVar14 = (ushort *)((longlong)param_1 + 1);
      iVar4 = (int)uVar13;
      if ((byte)*(ushort *)param_1 != 0x10) break;
      uVar10 = (uint)(char)*puVar14;
      uVar11 = (uVar10 & *puVar14) + uVar10;
      param_1 = (char *)((ulonglong)(uVar11 < uVar10) + 1 + (longlong)puVar14);
      uVar10 = uVar11 >> 1;
      uVar17 = (ulonglong)uVar10;
      if ((short)uVar11 < 0) {
        uVar11 = 1;
        bVar15 = 0xd;
        while( true ) {
          puVar16 = (ushort *)((ulonglong)(uVar11 * 2) + (longlong)puVar14);
          uVar1 = *puVar16;
          uVar10 = (uint)(char)uVar1;
          uVar12 = (uVar10 & uVar1) + uVar10;
          param_1 = (char *)((longlong)puVar16 + (ulonglong)(uVar12 < uVar10) + 1);
          uVar17 = uVar17 + ((ulonglong)uVar12 - 2 << (bVar15 & 0x3f));
          uVar10 = (uint)uVar17;
          if (-1 < (short)uVar12) break;
          uVar11 = uVar11 + 1;
          bVar15 = bVar15 + 0xe;
          if (4 < uVar11) goto LAB_14fa74b52;
        }
      }
      if (((ushort *)param_1 == (ushort *)0x0) || (uVar10 == 0)) goto LAB_14fa74b52;
      if (iVar4 == 0) {
        uVar18 = (ulonglong)uVar10;
        uVar13 = 1;
      }
      else if (iVar4 == 2) {
        uVar18 = (ulonglong)uVar10;
        pDVar2 = (param_2->data_).pool;
        if (pDVar2 == (DescriptorPool *)0x0) {
          pFVar5 = Reflection::FindKnownExtensionByNumber(*(Reflection **)(this + 0x10),uVar10);
        }
        else {
          pFVar5 = DescriptorPool::FindExtensionByNumber(pDVar2,*(Descriptor **)(this + 8),uVar10);
        }
        if ((pFVar5 == (FieldDescriptor *)0x0) ||
           (pDVar6 = FieldDescriptor::message_type(pFVar5), pDVar6 == (Descriptor *)0x0)) {
          if ((this_00->ptr_ & 1) == 0) {
            this_02 = InternalMetadata::
                      mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this_00);
          }
          else {
            this_02 = (UnknownFieldSet *)((this_00->ptr_ & 0xfffffffffffffffeU) + 8);
          }
          uVar13 = local_d0;
          uVar8 = &local_e0;
          if (0xf < local_c8) {
            uVar8 = local_e0._Ptr;
          }
          this_03 = UnknownFieldSet::AddLengthDelimited(this_02,uVar10);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (this_03,(char *)uVar8,uVar13);
          uVar13 = 3;
        }
        else {
          pMVar3 = (param_2->data_).factory;
          if (pFVar5->is_repeated_) {
            this_01 = (MessageLite *)
                      Reflection::AddMessage
                                (*(Reflection **)(this + 0x10),*(Message **)this,pFVar5,pMVar3);
          }
          else {
            this_01 = (MessageLite *)
                      Reflection::MutableMessage
                                (*(Reflection **)(this + 0x10),*(Message **)this,pFVar5,pMVar3);
          }
          uVar13 = local_d0;
          local_b8._32_8_ = 0;
          local_b8._40_8_ = 0;
          lStack_88 = 0;
          local_80 = 0;
          lStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = param_2->depth_;
          local_5c = -0x80000000;
          local_58 = (param_2->data_).pool;
          pMStack_50 = (param_2->data_).factory;
          uVar8 = &local_e0;
          if (0xf < local_c8) {
            uVar8 = local_e0._Ptr;
          }
          if (local_d0 < 0x11) {
            if (local_d0 != 0) {
              memcpy(local_b8 + 0x28,(void *)uVar8,local_d0);
            }
            local_b8._28_4_ = 0;
            local_b8._8_8_ = local_b8 + uVar13 + 0x28;
            local_b8._16_8_ = (undefined1 *)0x0;
            if (local_70 == 1) {
              local_70 = uVar8 + (-0x28 - (longlong)local_b8);
            }
            uVar8 = local_b8 + 0x28;
          }
          else {
            local_b8._28_4_ = 0x10;
            local_b8._8_8_ = uVar8 + (local_d0 - 0x10);
            local_b8._16_8_ = local_b8 + 0x28;
          }
          local_b8._0_8_ = local_b8._8_8_;
          pcVar7 = MessageLite::_InternalParse(this_01,(char *)uVar8,(ParseContext *)local_b8);
          if ((pcVar7 == (char *)0x0) || ((int)local_68 != 0)) goto LAB_14fa74b52;
          uVar13 = 3;
        }
      }
    }
    if ((byte)*(ushort *)param_1 == 0x1a) {
      if (iVar4 == 0) {
        if (*(byte *)puVar14 < 0x80) {
          puVar16 = (ushort *)((longlong)param_1 + 2);
          uVar10 = (uint)*(byte *)puVar14;
        }
        else {
          ReadSizeFallback((char *)&local_110,(uint)puVar14);
          puVar16 = local_110;
          uVar10 = local_108;
        }
        if (puVar16 == (ushort *)0x0) break;
        if (((int)param_2->_padding_ - (int)puVar16) + 0x10 < (int)uVar10) {
          param_1 = EpsCopyInputStream::ReadStringFallback
                              ((EpsCopyInputStream *)param_2,(char *)puVar16,uVar10,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_e0);
        }
        else {
          uVar13 = (ulonglong)(int)uVar10;
          if (local_d0 < uVar13) {
            uVar17 = uVar13 - local_d0;
            if (local_c8 - local_d0 < uVar17) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_e0,uVar17,local_138,uVar17,'\0');
            }
            else {
              uVar8 = &local_e0;
              if (0xf < local_c8) {
                uVar8 = local_e0._Ptr;
              }
              pcVar7 = (char *)(uVar8 + local_d0);
              local_d0 = uVar13;
              memset(pcVar7,0,uVar17);
              pcVar7[uVar17] = '\0';
            }
          }
          else {
            uVar8 = &local_e0;
            if (0xf < local_c8) {
              uVar8 = local_e0._Ptr;
            }
            local_d0 = uVar13;
            *(char *)(uVar8 + uVar13) = '\0';
          }
          uVar8 = &local_e0;
          if (0xf < local_c8) {
            uVar8 = local_e0._Ptr;
          }
          memcpy((void *)uVar8,puVar16,uVar13);
          param_1 = (char *)((longlong)puVar16 + uVar13);
        }
        if ((ushort *)param_1 == (ushort *)0x0) break;
        uVar13 = 2;
      }
      else if (iVar4 == 1) {
        iVar4 = (int)uVar18;
        pEVar9 = Descriptor::FindExtensionRangeContainingNumber(*(Descriptor **)(this + 8),iVar4);
        if (pEVar9 != (ExtensionRange *)0x0) {
          pDVar2 = (param_2->data_).pool;
          if (pDVar2 == (DescriptorPool *)0x0) {
            pFVar5 = Reflection::FindKnownExtensionByNumber(*(Reflection **)(this + 0x10),iVar4);
          }
          else {
            pFVar5 = DescriptorPool::FindExtensionByNumber(pDVar2,*(Descriptor **)(this + 8),iVar4);
          }
        }
        param_1 = _InternalParseAndMergeField
                            (*(Message **)this,(char *)puVar14,param_2,uVar18 * 8 + 2,
                             *(Reflection **)(this + 0x10),pFVar5);
        uVar13 = 3;
      }
      else {
        if (*(byte *)puVar14 < 0x80) {
          puVar16 = (ushort *)((longlong)param_1 + 2);
          uVar10 = (uint)*(byte *)puVar14;
        }
        else {
          ReadSizeFallback((char *)&local_100,(uint)puVar14);
          puVar16 = local_100;
          uVar10 = local_f8;
        }
        if (puVar16 == (ushort *)0x0) break;
        if (((int)param_2->_padding_ - (int)puVar16) + 0x10 < (int)uVar10) {
          param_1 = EpsCopyInputStream::SkipFallback
                              ((EpsCopyInputStream *)param_2,(char *)puVar16,uVar10);
        }
        else {
          param_1 = (char *)((longlong)puVar16 + (longlong)(int)uVar10);
        }
      }
    }
    else {
      bVar15 = (byte)*(ushort *)param_1;
      puVar16 = puVar14;
      uVar10 = (uint)bVar15;
      if (0x7f < bVar15) {
        if (*(byte *)puVar14 < 0x80) {
          puVar16 = (ushort *)((longlong)param_1 + 2);
          uVar10 = (bVar15 - 0x80) + (uint)*(byte *)puVar14 * 0x80;
        }
        else {
          ReadTagFallback((char *)&local_f0,(uint)param_1);
          puVar16 = local_f0;
          uVar10 = local_e8;
        }
      }
      if ((uVar10 == 0) || (((byte)uVar10 & 7) == 4)) {
        *(uint *)&param_2->_padding_ = uVar10 - 1;
        goto LAB_14fa74fb3;
      }
      param_1 = UnknownFieldParse(uVar10,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)0x0,(char *)puVar16,param_2);
    }
  } while ((ushort *)param_1 != (ushort *)0x0);
LAB_14fa74b52:
  puVar16 = (ushort *)0x0;
LAB_14fa74fb3:
  if (0xf < local_c8) {
    uVar13 = local_c8 + 1;
    uVar8 = local_e0._Ptr;
    if (0xfff < uVar13) {
      uVar13 = local_c8 + 0x28;
      uVar8 = *(undefined8 *)(local_e0._Ptr + -8);
      if ((char *)0x1f < local_e0._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar8,uVar13);
  }
  return (char *)puVar16;
}

// FUN_14fa75030 @ 14fa75030

bool FUN_14fa75030(undefined8 *param_1,int param_2,CodedInputStream *param_3)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  FieldDescriptor *pFVar4;
  Metadata *pMVar5;
  UnknownFieldSet *this;
  __int64 _Var6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  LogMessage *this_00;
  uint uVar9;
  uint uVar10;
  basic_string_view<char,std::char_traits<char>_> local_48;
  LogMessage local_38;
  Metadata local_28;
  
  uVar9 = 0;
  pFVar4 = google::protobuf::Reflection::FindKnownExtensionByNumber((Reflection *)*param_1,param_2);
  pMVar8 = (Message *)param_1[1];
  pMVar5 = google::protobuf::Message::GetMetadata(pMVar8,&local_28);
  if (pFVar4 == (FieldDescriptor *)0x0) {
    this = google::protobuf::Reflection::MutableUnknownFields(pMVar5->reflection,pMVar8);
    pbVar2 = param_3->buffer_;
    if (pbVar2 < param_3->buffer_end_) {
      bVar1 = *pbVar2;
      uVar9 = (uint)bVar1;
      uVar10 = (uint)bVar1;
      if (0x7f < bVar1) goto LAB_14fa7509d;
      param_3->buffer_ = pbVar2 + 1;
    }
    else {
LAB_14fa7509d:
      _Var6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_3,uVar9);
      uVar10 = (uint)_Var6;
      if (_Var6 < 0) goto LAB_14fa7515b;
    }
    pbVar7 = google::protobuf::UnknownFieldSet::AddLengthDelimited(this,param_2);
    bVar3 = google::protobuf::io::CodedInputStream::ReadString(param_3,pbVar7,uVar10);
  }
  else {
    if ((!pFVar4->is_repeated_) && (pFVar4->type_ == '\v')) {
      pMVar8 = google::protobuf::Reflection::MutableMessage
                         (pMVar5->reflection,pMVar8,pFVar4,param_3->extension_factory_);
      bVar3 = google::protobuf::internal::WireFormatLite::ReadMessage<google::protobuf::Message>
                        (param_3,pMVar8);
      return bVar3;
    }
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessage::LogMessage
                        (&local_38,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                         ,0x181,(ErrorTag)0x0);
    local_48._Mydata = "Extensions of MessageSets must be optional messages.";
    local_48._Mysize = 0x34;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_48);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_38);
LAB_14fa7515b:
    bVar3 = false;
  }
  return bVar3;
}

// ParseGroup @ 14fa75180

/* public: char const * __ptr64 __cdecl google::protobuf::internal::ParseContext::ParseGroup(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,unsigned int) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::ParseGroup
          (ParseContext *this,MessageLite *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  
  piVar1 = &this->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    this->group_depth_ = this->group_depth_ + 1;
    pcVar3 = MessageLite::_InternalParse(param_1,param_2,this);
    lVar2 = this->_padding_;
    this->group_depth_ = this->group_depth_ + -1;
    this->depth_ = this->depth_ + 1;
    *(undefined4 *)&this->_padding_ = 0;
    if ((uint)lVar2 != param_3) {
      pcVar3 = (char *)0x0;
    }
    return pcVar3;
  }
  return (char *)0x0;
}

// ParseMessageSet @ 14fa751e0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::WireFormat::MessageSetParser::ParseMessageSet
          (MessageSetParser *this,char *param_1,ParseContext *param_2)

{
  int *piVar1;
  byte bVar2;
  DescriptorPool *this_00;
  longlong lVar3;
  int iVar4;
  ExtensionRange *pEVar5;
  FieldDescriptor *pFVar6;
  FieldDescriptor *pFVar7;
  uint uVar8;
  uint uVar9;
  FieldDescriptor *pFVar10;
  FieldDescriptor *local_48;
  char local_40;
  FieldDescriptor *local_38;
  uint local_30;
  
  pFVar10 = (FieldDescriptor *)0x0;
  do {
    if ((FieldDescriptor *)param_2->_padding_ <= param_1) {
      iVar4 = (int)param_1 - (int)param_2->_padding_;
      if (iVar4 == *(int *)((longlong)&param_2->_padding_ + 4)) {
        if (iVar4 < 1) {
          return &((FieldDescriptor *)param_1)->_padding_;
        }
        if (param_2->_padding_ == 0) {
          return (char *)0x0;
        }
        return &((FieldDescriptor *)param_1)->_padding_;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_2,(int)&local_48,iVar4);
      param_1 = &local_48->_padding_;
      if (local_40 != '\0') {
        return &local_48->_padding_;
      }
    }
    bVar2 = ((FieldDescriptor *)param_1)->_padding_;
    if (bVar2 < 0x80) {
      pFVar7 = (FieldDescriptor *)&((FieldDescriptor *)param_1)->field_0x1;
      uVar9 = (uint)bVar2;
    }
    else if ((byte)(((FieldDescriptor *)param_1)->label_ << 6) < 0x80) {
      pFVar7 = (FieldDescriptor *)&((FieldDescriptor *)param_1)->type_;
      uVar9 = (bVar2 - 0x80) + (uint)(byte)((FieldDescriptor *)param_1)->field_0x1 * 0x80;
    }
    else {
      ReadTagFallback((char *)&local_38,(uint)param_1);
      pFVar7 = local_38;
      uVar9 = local_30;
    }
    if (pFVar7 == (FieldDescriptor *)0x0) {
      return (char *)0x0;
    }
    if ((uVar9 == 0) || (((byte)uVar9 & 7) == 4)) {
      *(uint *)&param_2->_padding_ = uVar9 - 1;
      return &pFVar7->_padding_;
    }
    if (uVar9 == 0xb) {
      piVar1 = &param_2->depth_;
      *piVar1 = *piVar1 + -1;
      param_1 = &pFVar10->_padding_;
      if (-1 < *piVar1) {
        param_2->group_depth_ = param_2->group_depth_ + 1;
        param_1 = ParseElement(this,&pFVar7->_padding_,param_2);
        param_2->group_depth_ = param_2->group_depth_ + -1;
        lVar3 = param_2->_padding_;
        param_2->depth_ = param_2->depth_ + 1;
        *(undefined4 *)&param_2->_padding_ = 0;
        if ((int)lVar3 != 0xb) {
          param_1 = &pFVar10->_padding_;
        }
      }
    }
    else {
      uVar8 = uVar9 >> 3;
      pEVar5 = Descriptor::FindExtensionRangeContainingNumber(*(Descriptor **)(this + 8),uVar8);
      pFVar6 = pFVar10;
      if (pEVar5 != (ExtensionRange *)0x0) {
        this_00 = (param_2->data_).pool;
        if (this_00 == (DescriptorPool *)0x0) {
          pFVar6 = Reflection::FindKnownExtensionByNumber(*(Reflection **)(this + 0x10),uVar8);
        }
        else {
          pFVar6 = DescriptorPool::FindExtensionByNumber(this_00,*(Descriptor **)(this + 8),uVar8);
        }
      }
      param_1 = _InternalParseAndMergeField
                          (*(Message **)this,&pFVar7->_padding_,param_2,(ulonglong)uVar9,
                           *(Reflection **)(this + 0x10),pFVar6);
    }
  } while ((FieldDescriptor *)param_1 != (FieldDescriptor *)0x0);
  return (char *)0x0;
}

// ReadBytes @ 14fa75390

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadBytes(class
   google::protobuf::io::CodedInputStream * __ptr64,class absl::lts_20240722::Cord * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadBytes(CodedInputStream *param_1,Cord *param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  pbVar1 = param_1->buffer_;
  if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
    param_1->buffer_ = pbVar1 + 1;
  }
  else {
    uVar3 = io::CodedInputStream::ReadVarintSizeAsIntFallback(param_1);
    if ((int)uVar3 < 0) {
      return false;
    }
  }
  bVar2 = io::CodedInputStream::ReadCord(param_1,param_2,uVar3);
  if (!bVar2) {
    return false;
  }
  return true;
}

// ReadLittleEndian32 @ 14fa75400

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian32(unsigned int *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian32(CodedInputStream *this,uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  
  if (3 < *(int *)&this->buffer_end_ - *(int *)&this->buffer_) {
    puVar1 = (uint *)this->buffer_;
    *param_1 = *puVar1;
    this->buffer_ = (uchar *)(puVar1 + 1);
    return true;
  }
  bVar2 = ReadLittleEndian32Fallback(this,param_1);
  return bVar2;
}

// ReadLittleEndian64 @ 14fa75430

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian64(unsigned __int64
   * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian64(CodedInputStream *this,__uint64 *param_1)

{
  __uint64 *p_Var1;
  bool bVar2;
  
  if (7 < *(int *)&this->buffer_end_ - *(int *)&this->buffer_) {
    p_Var1 = (__uint64 *)this->buffer_;
    *param_1 = *p_Var1;
    this->buffer_ = (uchar *)(p_Var1 + 1);
    return true;
  }
  bVar2 = ReadLittleEndian64Fallback(this,param_1);
  return bVar2;
}

// ReadPackedEnumPreserveUnknowns @ 14fa75460

/* public: static bool __cdecl
   google::protobuf::internal::WireFormat::ReadPackedEnumPreserveUnknowns(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int,bool (__cdecl*)(int),class
   google::protobuf::UnknownFieldSet * __ptr64,class google::protobuf::RepeatedField<int> * __ptr64)
    */

bool __cdecl
google::protobuf::internal::WireFormat::ReadPackedEnumPreserveUnknowns
          (CodedInputStream *param_1,uint param_2,_func_bool_int *param_3,UnknownFieldSet *param_4,
          RepeatedField<int> *param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  __int64 _Var6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  
  pbVar2 = param_1->buffer_;
  uVar9 = 0;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar10 = (uint)bVar1;
    uVar9 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa754c3;
    }
  }
  _Var6 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar9);
  uVar10 = (uint)_Var6;
  if (_Var6 < 0) {
    return false;
  }
LAB_14fa754c3:
  iVar4 = io::CodedInputStream::PushLimit(param_1,uVar10);
  iVar5 = io::CodedInputStream::BytesUntilLimit(param_1);
  do {
    if (iVar5 < 1) {
      io::CodedInputStream::PopLimit(param_1,iVar4);
      return true;
    }
    pbVar2 = param_1->buffer_;
    uVar9 = 0;
    if (pbVar2 < param_1->buffer_end_) {
      bVar1 = *pbVar2;
      uVar7 = (ulonglong)bVar1;
      uVar9 = (uint)bVar1;
      if (0x7f < bVar1) goto LAB_14fa754fe;
      param_1->buffer_ = pbVar2 + 1;
    }
    else {
LAB_14fa754fe:
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar9);
      if ((longlong)uVar7 < 0) {
        return false;
      }
    }
    iVar5 = (int)uVar7;
    if ((param_3 == (_func_bool_int *)0x0) || (bVar3 = (*param_3)(iVar5), bVar3)) {
      uVar7 = (param_5->soo_rep_).field0_0x0.long_rep.elements_int;
      piVar8 = &(param_5->soo_rep_).field0_0x0.long_rep.size;
      bVar3 = (bool)(~((byte)uVar7 >> 2) & 1);
      if (bVar3 == false) {
        uVar9 = *piVar8;
        uVar10 = (param_5->soo_rep_).field0_0x0.long_rep.capacity;
        piVar8 = (int *)(uVar7 & 0xfffffffffffffff8);
      }
      else {
        uVar10 = 2;
        uVar9 = (uint)uVar7 & 3;
      }
      if (uVar9 == uVar10) {
        RepeatedField<int>::Grow(param_5,bVar3,uVar9,uVar9 + 1);
        piVar8 = (int *)((param_5->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
LAB_14fa7558e:
        uVar10 = (param_5->soo_rep_).field0_0x0.long_rep.size;
        (param_5->soo_rep_).field0_0x0.long_rep.size = uVar9 + 1;
      }
      else {
        if (bVar3 == false) goto LAB_14fa7558e;
        uVar10 = (uint)uVar7 & 3;
        (param_5->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar7 & 0xfffffffffffffff8 | (longlong)(int)(uVar9 + 1);
      }
      piVar8[(int)uVar10] = iVar5;
    }
    else {
      UnknownFieldSet::AddVarint(param_4,param_2,(longlong)iVar5);
    }
    iVar5 = io::CodedInputStream::BytesUntilLimit(param_1);
  } while( true );
}

// ReadString @ 14fa75600

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadString(class
   google::protobuf::io::CodedInputStream * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadString
          (CodedInputStream *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  
  bVar1 = ReadBytes(param_1,param_2);
  return bVar1;
}

// ReadTag @ 14fa75610

/* public: unsigned int __cdecl google::protobuf::io::CodedInputStream::ReadTag(void) __ptr64 */

uint __thiscall google::protobuf::io::CodedInputStream::ReadTag(CodedInputStream *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = this->buffer_;
  uVar3 = 0;
  if (pbVar2 < this->buffer_end_) {
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      this->last_tag_ = (uint)bVar1;
      this->buffer_ = pbVar2 + 1;
      return (uint)bVar1;
    }
  }
  uVar3 = ReadTagFallback(this,uVar3);
  this->last_tag_ = uVar3;
  return uVar3;
}

// ReadTagNoLastTag @ 14fa75660

/* public: unsigned int __cdecl google::protobuf::io::CodedInputStream::ReadTagNoLastTag(void)
   __ptr64 */

uint __thiscall google::protobuf::io::CodedInputStream::ReadTagNoLastTag(CodedInputStream *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = this->buffer_;
  uVar3 = 0;
  if (pbVar2 < this->buffer_end_) {
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      this->buffer_ = pbVar2 + 1;
      return (uint)bVar1;
    }
  }
  uVar3 = ReadTagFallback(this,uVar3);
  return uVar3;
}

// ReadVarintSizeAsInt @ 14fa75690

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadVarintSizeAsInt(int * __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadVarintSizeAsInt(CodedInputStream *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((this->buffer_ < this->buffer_end_) && (uVar1 = (uint)*this->buffer_, uVar1 < 0x80)) {
    *param_1 = uVar1;
    this->buffer_ = this->buffer_ + 1;
    return true;
  }
  iVar2 = ReadVarintSizeAsIntFallback(this);
  *param_1 = iVar2;
  return (bool)((byte)((uint)iVar2 >> 0x1f) ^ 1);
}

// ReadVarintZigZag32 @ 14fa756e0

/* int __cdecl google::protobuf::internal::ReadVarintZigZag32(char const * __ptr64 * __ptr64) */

int __cdecl google::protobuf::internal::ReadVarintZigZag32(char **param_1)

{
  byte *pbVar1;
  byte *local_18;
  uint local_10;
  
  pbVar1 = (byte *)*param_1;
  if ((char)*pbVar1 < '\0') {
    VarintParseSlow64((char *)&local_18,(uint)pbVar1);
  }
  else {
    local_18 = pbVar1 + 1;
    local_10 = (uint)*pbVar1;
  }
  *param_1 = (char *)local_18;
  return -(local_10 & 1) ^ local_10 >> 1;
}

// ReadVarintZigZag64 @ 14fa75730

/* __int64 __cdecl google::protobuf::internal::ReadVarintZigZag64(char const * __ptr64 * __ptr64) */

__int64 __cdecl google::protobuf::internal::ReadVarintZigZag64(char **param_1)

{
  byte *pbVar1;
  byte *local_18;
  ulonglong local_10;
  
  pbVar1 = (byte *)*param_1;
  if ((char)*pbVar1 < '\0') {
    VarintParseSlow64((char *)&local_18,(uint)pbVar1);
  }
  else {
    local_18 = pbVar1 + 1;
    local_10 = (ulonglong)*pbVar1;
  }
  *param_1 = (char *)local_18;
  return -(ulonglong)((uint)local_10 & 1) ^ local_10 >> 1;
}

// SInt32Size @ 14fa75790

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt32Size(int) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::SInt32Size(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f ^ param_1 * 2 | 1;
  if (4 < __isa_available) {
    return (ulonglong)(LZCOUNT(uVar2) * -9 + 0x160U >> 6);
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (ulonglong)((0x1f - iVar1) * -9 + 0x160U >> 6);
}

// SInt64Size @ 14fa757e0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt64Size(__int64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::SInt64Size(__int64 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 >> 0x3f ^ param_1 * 2 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x280U >> 6);
}

// SerializeMapKeyWithCachedSizes @ 14fa75840

/* WARNING: Enum "CppType": Some values do not have unique names */
/* unsigned char * __ptr64 __cdecl google::protobuf::internal::SerializeMapKeyWithCachedSizes(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::MapKey const &
   __ptr64,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::SerializeMapKeyWithCachedSizes
          (FieldDescriptor *param_1,MapKey *param_2,uchar *param_3,EpsCopyOutputStream *param_4)

{
  size_t _Size;
  bool bVar1;
  int iVar2;
  __uint64 _Var3;
  __int64 _Var4;
  basic_string_view<char,std::char_traits<char>_> *pbVar5;
  LogMessage *this;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_4->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
  }
  switch(param_1->type_) {
  case '\x01':
  case '\x02':
  case '\n':
  case '\v':
  case '\f':
  case '\x0e':
    this = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     ((LogMessageFatal *)&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                      ,0x443);
    local_28._Mydata = "Unsupported";
    local_28._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_18);
  case '\x03':
    uVar7 = MapKey::GetInt64Value(param_2);
    *param_3 = 8;
    for (; param_3 = param_3 + 1, 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      *param_3 = (byte)uVar7 | 0x80;
    }
    goto LAB_14fa758d7;
  case '\x04':
    uVar7 = MapKey::GetUInt64Value(param_2);
    *param_3 = 8;
    param_3 = param_3 + 1;
    if (0x7f < uVar7) {
      do {
        pbVar8 = param_3;
        *pbVar8 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        param_3 = pbVar8 + 1;
      } while (0x7f < uVar7);
      pbVar8[1] = (byte)uVar7;
      return pbVar8 + 2;
    }
    goto LAB_14fa758d7;
  case '\x05':
    iVar2 = MapKey::GetInt32Value(param_2);
    *param_3 = 8;
    for (uVar7 = (ulonglong)iVar2; param_3 = param_3 + 1, 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      *param_3 = (byte)uVar7 | 0x80;
    }
    goto LAB_14fa75957;
  case '\x06':
    _Var3 = MapKey::GetUInt64Value(param_2);
    *param_3 = 9;
    *(__uint64 *)(param_3 + 1) = _Var3;
    param_3 = param_3 + 9;
    break;
  case '\a':
    uVar6 = MapKey::GetUInt32Value(param_2);
    *param_3 = 0xd;
    *(uint *)(param_3 + 1) = uVar6;
    param_3 = param_3 + 5;
    break;
  case '\b':
    bVar1 = MapKey::GetBoolValue(param_2);
    *param_3 = 8;
    param_3[1] = bVar1;
    param_3 = param_3 + 2;
    break;
  case '\t':
    pbVar5 = MapKey::GetStringValue(param_2,&local_28);
    _Size = pbVar5->_Mysize;
    if (((longlong)_Size < 0x80) &&
       ((longlong)_Size <= (longlong)(param_4->end_ + (0xe - (longlong)param_3)))) {
      *param_3 = 10;
      param_3[1] = (byte)_Size;
      memcpy(param_3 + 2,pbVar5->_Mydata,_Size);
      param_3 = param_3 + 2 + _Size;
    }
    else {
      local_18._Mydata = pbVar5->_Mydata;
      local_18._Mysize = pbVar5->_Mysize;
      param_3 = io::EpsCopyOutputStream::WriteStringOutline(param_4,1,&local_18,param_3);
    }
    break;
  case '\r':
    uVar6 = MapKey::GetUInt32Value(param_2);
    uVar7 = (ulonglong)uVar6;
    *param_3 = 8;
    param_3 = param_3 + 1;
    if (0x7f < uVar6) {
      do {
        pbVar8 = param_3;
        *pbVar8 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        param_3 = pbVar8 + 1;
      } while (0x7f < (uint)uVar7);
      pbVar8[1] = (byte)uVar7;
      return pbVar8 + 2;
    }
LAB_14fa758d7:
    *param_3 = (byte)uVar7;
    param_3 = param_3 + 1;
    break;
  case '\x0f':
    iVar2 = MapKey::GetInt32Value(param_2);
    *param_3 = 0xd;
    *(int *)(param_3 + 1) = iVar2;
    param_3 = param_3 + 5;
    break;
  case '\x10':
    _Var4 = MapKey::GetInt64Value(param_2);
    *param_3 = 9;
    *(__int64 *)(param_3 + 1) = _Var4;
    param_3 = param_3 + 9;
    break;
  case '\x11':
    iVar2 = MapKey::GetInt32Value(param_2);
    *param_3 = 8;
    param_3 = param_3 + 1;
    uVar6 = iVar2 >> 0x1f ^ iVar2 * 2;
    uVar7 = (ulonglong)uVar6;
    if (0x7f < uVar6) {
      do {
        pbVar8 = param_3;
        *pbVar8 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        param_3 = pbVar8 + 1;
      } while (0x7f < (uint)uVar7);
      pbVar8[1] = (byte)uVar7;
      return pbVar8 + 2;
    }
    goto LAB_14fa75957;
  case '\x12':
    _Var4 = MapKey::GetInt64Value(param_2);
    *param_3 = 8;
    param_3 = param_3 + 1;
    uVar7 = _Var4 >> 0x3f ^ _Var4 * 2;
    if (0x7f < uVar7) {
      do {
        pbVar8 = param_3;
        *pbVar8 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        param_3 = pbVar8 + 1;
      } while (0x7f < uVar7);
      pbVar8[1] = (byte)uVar7;
      return pbVar8 + 2;
    }
LAB_14fa75957:
    *param_3 = (byte)uVar7;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// FUN_14fa75bd0 @ 14fa75bd0

/* WARNING: Enum "CppType": Some values do not have unique names */

byte * FUN_14fa75bd0(longlong param_1,MapValueConstRef *param_2,byte *param_3,
                    EpsCopyOutputStream *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  size_t _Size;
  CppType CVar4;
  int iVar5;
  __uint64 _Var6;
  LogMessage *pLVar7;
  __int64 _Var8;
  basic_string_view<char,std::char_traits<char>_> *pbVar9;
  MessageLite *pMVar10;
  uint uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  byte *pbVar14;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (param_4->end_ <= param_3) {
    param_3 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
    CVar4 = google::protobuf::MapValueConstRef::type(param_2);
    if (CVar4 != CPPTYPE_DOUBLE) {
      pLVar7 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_28,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                          ,0x2a6);
      local_48._Mydata = "Protocol Buffer map usage error:\n";
      local_48._Mysize = 0x21;
      local_38._Mydata = "Protocol Buffer map usage error:\n";
      local_38._Mysize = 0x21;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      local_48._Mydata = "MapValueConstRef::GetDoubleValue";
      local_48._Mysize = 0x20;
      local_38._Mydata = "MapValueConstRef::GetDoubleValue";
      local_38._Mysize = 0x20;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      local_48._Mydata = " type does not match\n";
      local_48._Mysize = 0x15;
      local_38._Mydata = " type does not match\n";
      local_38._Mysize = 0x15;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      local_48._Mydata = "  Expected : ";
      local_48._Mysize = 0xd;
      local_38._Mydata = "  Expected : ";
      local_38._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      local_48._Mydata = PTR_s_double_1535d0148;
      uVar13 = 0xffffffffffffffff;
      local_48._Mysize = 0xffffffffffffffff;
      do {
        local_48._Mysize = local_48._Mysize + 1;
      } while (PTR_s_double_1535d0148[local_48._Mysize] != '\0');
      pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
      local_48._Mydata = "\n";
      local_48._Mysize = 1;
      local_38._Mydata = "\n";
      local_38._Mysize = 1;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      local_48._Mydata = "  Actual   : ";
      local_48._Mysize = 0xd;
      local_38._Mydata = "  Actual   : ";
      local_38._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_38);
      CVar4 = google::protobuf::MapValueConstRef::type(param_2);
      local_48._Mydata = (&google::protobuf::FieldDescriptor::kCppTypeToName)[(int)CVar4];
      do {
        uVar13 = uVar13 + 1;
      } while (local_48._Mydata[uVar13] != '\0');
      local_48._Mysize = uVar13;
      absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_28);
    }
    uVar2 = *(undefined8 *)param_2->data_;
    *param_3 = 0x11;
    *(undefined8 *)(param_3 + 1) = uVar2;
    param_3 = param_3 + 9;
    break;
  case 2:
    CVar4 = google::protobuf::MapValueConstRef::type(param_2);
    if (CVar4 != CPPTYPE_FLOAT) {
      pLVar7 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_38,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                          ,0x2a1);
      local_48._Mydata = "Protocol Buffer map usage error:\n";
      local_48._Mysize = 0x21;
      local_28._Mydata = "Protocol Buffer map usage error:\n";
      local_28._Mysize = 0x21;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      local_48._Mydata = "MapValueConstRef::GetFloatValue";
      local_48._Mysize = 0x1f;
      local_28._Mydata = "MapValueConstRef::GetFloatValue";
      local_28._Mysize = 0x1f;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      local_48._Mydata = " type does not match\n";
      local_48._Mysize = 0x15;
      local_28._Mydata = " type does not match\n";
      local_28._Mysize = 0x15;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      local_48._Mydata = "  Expected : ";
      local_48._Mysize = 0xd;
      local_28._Mydata = "  Expected : ";
      local_28._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      local_48._Mydata = PTR_s_float_1535d0150;
      uVar13 = 0xffffffffffffffff;
      local_48._Mysize = 0xffffffffffffffff;
      do {
        local_48._Mysize = local_48._Mysize + 1;
      } while (PTR_s_float_1535d0150[local_48._Mysize] != '\0');
      pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
      local_48._Mydata = "\n";
      local_48._Mysize = 1;
      local_28._Mydata = "\n";
      local_28._Mysize = 1;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      local_48._Mydata = "  Actual   : ";
      local_48._Mysize = 0xd;
      local_28._Mydata = "  Actual   : ";
      local_28._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_28);
      CVar4 = google::protobuf::MapValueConstRef::type(param_2);
      local_48._Mydata = (&google::protobuf::FieldDescriptor::kCppTypeToName)[(int)CVar4];
      do {
        uVar13 = uVar13 + 1;
      } while (local_48._Mydata[uVar13] != '\0');
      local_48._Mysize = uVar13;
      absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_38);
    }
    uVar1 = *(undefined4 *)param_2->data_;
    *param_3 = 0x15;
    *(undefined4 *)(param_3 + 1) = uVar1;
    param_3 = param_3 + 5;
    break;
  case 3:
    uVar12 = google::protobuf::MapValueConstRef::GetInt64Value(param_2);
    *param_3 = 0x10;
    for (; param_3 = param_3 + 1, 0x7f < uVar12; uVar12 = uVar12 >> 7) {
      *param_3 = (byte)uVar12 | 0x80;
    }
    goto LAB_14fa75c67;
  case 4:
    uVar12 = google::protobuf::MapValueConstRef::GetUInt64Value(param_2);
    *param_3 = 0x10;
    param_3 = param_3 + 1;
    if (0x7f < uVar12) {
      do {
        pbVar14 = param_3;
        *pbVar14 = (byte)uVar12 | 0x80;
        uVar12 = uVar12 >> 7;
        param_3 = pbVar14 + 1;
      } while (0x7f < uVar12);
      pbVar14[1] = (byte)uVar12;
      return pbVar14 + 2;
    }
    goto LAB_14fa75c67;
  case 5:
    iVar5 = google::protobuf::MapValueConstRef::GetInt32Value(param_2);
    *param_3 = 0x10;
    for (uVar12 = (ulonglong)iVar5; param_3 = param_3 + 1, 0x7f < uVar12; uVar12 = uVar12 >> 7) {
      *param_3 = (byte)uVar12 | 0x80;
    }
    goto LAB_14fa75ce7;
  case 6:
    _Var6 = google::protobuf::MapValueConstRef::GetUInt64Value(param_2);
    *param_3 = 0x11;
    *(__uint64 *)(param_3 + 1) = _Var6;
    param_3 = param_3 + 9;
    break;
  case 7:
    uVar11 = google::protobuf::MapValueConstRef::GetUInt32Value(param_2);
    *param_3 = 0x15;
    *(uint *)(param_3 + 1) = uVar11;
    param_3 = param_3 + 5;
    break;
  case 8:
    CVar4 = google::protobuf::MapValueConstRef::type(param_2);
    if (CVar4 != CPPTYPE_BOOL) {
      pLVar7 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_38,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                          ,0x293);
      local_48._Mydata = "Protocol Buffer map usage error:\n";
      local_48._Mysize = 0x21;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      local_48._Mydata = "MapValueConstRef::GetBoolValue";
      local_48._Mysize = 0x1e;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      local_48._Mydata = " type does not match\n";
      local_48._Mysize = 0x15;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      local_48._Mydata = "  Expected : ";
      local_48._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      local_48._Mydata = PTR_s_bool_1535d0158;
      uVar13 = 0xffffffffffffffff;
      local_48._Mysize = 0xffffffffffffffff;
      do {
        local_48._Mysize = local_48._Mysize + 1;
      } while (PTR_s_bool_1535d0158[local_48._Mysize] != '\0');
      pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
      local_48._Mydata = "\n";
      local_48._Mysize = 1;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      local_48._Mydata = "  Actual   : ";
      local_48._Mysize = 0xd;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_48);
      CVar4 = google::protobuf::MapValueConstRef::type(param_2);
      local_48._Mydata = (&google::protobuf::FieldDescriptor::kCppTypeToName)[(int)CVar4];
      do {
        uVar13 = uVar13 + 1;
      } while (local_48._Mydata[uVar13] != '\0');
      local_48._Mysize = uVar13;
      absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_48);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_38);
    }
    cVar3 = *(char *)param_2->data_;
    *param_3 = 0x10;
    param_3[1] = cVar3 != '\0';
    param_3 = param_3 + 2;
    break;
  case 9:
  case 0xc:
    pbVar9 = google::protobuf::MapValueConstRef::GetStringValue(param_2,&local_38);
    _Size = pbVar9->_Mysize;
    if (((longlong)_Size < 0x80) &&
       ((longlong)_Size <= (longlong)(param_4->end_ + (0xe - (longlong)param_3)))) {
      *param_3 = 0x12;
      param_3[1] = (byte)_Size;
      memcpy(param_3 + 2,pbVar9->_Mydata,_Size);
      param_3 = param_3 + 2 + _Size;
    }
    else {
      local_28._Mydata = pbVar9->_Mydata;
      local_28._Mysize = pbVar9->_Mysize;
      param_3 = google::protobuf::io::EpsCopyOutputStream::WriteStringOutline
                          (param_4,2,&local_28,param_3);
    }
    break;
  case 10:
    pMVar10 = (MessageLite *)google::protobuf::MapValueConstRef::GetMessageValue(param_2);
    param_3 = google::protobuf::internal::WireFormatLite::InternalWriteGroup
                        (2,pMVar10,param_3,param_4);
    break;
  case 0xb:
    pMVar10 = (MessageLite *)google::protobuf::MapValueConstRef::GetMessageValue(param_2);
    iVar5 = google::protobuf::MessageLite::GetCachedSize(pMVar10);
    param_3 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,pMVar10,iVar5,param_3,param_4);
    break;
  case 0xd:
    uVar11 = google::protobuf::MapValueConstRef::GetUInt32Value(param_2);
    uVar12 = (ulonglong)uVar11;
    *param_3 = 0x10;
    param_3 = param_3 + 1;
    if (0x7f < uVar11) {
      do {
        pbVar14 = param_3;
        *pbVar14 = (byte)uVar12 | 0x80;
        uVar12 = uVar12 >> 7;
        param_3 = pbVar14 + 1;
      } while (0x7f < (uint)uVar12);
      pbVar14[1] = (byte)uVar12;
      return pbVar14 + 2;
    }
LAB_14fa75c67:
    *param_3 = (byte)uVar12;
    param_3 = param_3 + 1;
    break;
  case 0xe:
    iVar5 = google::protobuf::MapValueConstRef::GetEnumValue(param_2);
    *param_3 = 0x10;
    param_3 = param_3 + 1;
    uVar12 = (ulonglong)iVar5;
    if (0x7f < uVar12) {
      do {
        pbVar14 = param_3;
        *pbVar14 = (byte)uVar12 | 0x80;
        uVar12 = uVar12 >> 7;
        param_3 = pbVar14 + 1;
      } while (0x7f < uVar12);
      pbVar14[1] = (byte)uVar12;
      return pbVar14 + 2;
    }
    goto LAB_14fa75ce7;
  case 0xf:
    iVar5 = google::protobuf::MapValueConstRef::GetInt32Value(param_2);
    *param_3 = 0x15;
    *(int *)(param_3 + 1) = iVar5;
    param_3 = param_3 + 5;
    break;
  case 0x10:
    _Var8 = google::protobuf::MapValueConstRef::GetInt64Value(param_2);
    *param_3 = 0x11;
    *(__int64 *)(param_3 + 1) = _Var8;
    param_3 = param_3 + 9;
    break;
  case 0x11:
    iVar5 = google::protobuf::MapValueConstRef::GetInt32Value(param_2);
    *param_3 = 0x10;
    param_3 = param_3 + 1;
    uVar11 = iVar5 >> 0x1f ^ iVar5 * 2;
    uVar12 = (ulonglong)uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar14 = param_3;
        *pbVar14 = (byte)uVar12 | 0x80;
        uVar12 = uVar12 >> 7;
        param_3 = pbVar14 + 1;
      } while (0x7f < (uint)uVar12);
      pbVar14[1] = (byte)uVar12;
      return pbVar14 + 2;
    }
    goto LAB_14fa75ce7;
  case 0x12:
    _Var8 = google::protobuf::MapValueConstRef::GetInt64Value(param_2);
    *param_3 = 0x10;
    param_3 = param_3 + 1;
    uVar12 = _Var8 >> 0x3f ^ _Var8 * 2;
    if (0x7f < uVar12) {
      do {
        pbVar14 = param_3;
        *pbVar14 = (byte)uVar12 | 0x80;
        uVar12 = uVar12 >> 7;
        param_3 = pbVar14 + 1;
      } while (0x7f < uVar12);
      pbVar14[1] = (byte)uVar12;
      return pbVar14 + 2;
    }
LAB_14fa75ce7:
    *param_3 = (byte)uVar12;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// SetRecursionLimit @ 14fa76490

/* public: void __cdecl google::protobuf::io::CodedInputStream::SetRecursionLimit(int) __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::SetRecursionLimit(CodedInputStream *this,int param_1)

{
  this->recursion_budget_ = this->recursion_budget_ + (param_1 - this->recursion_limit_);
  this->recursion_limit_ = param_1;
  return;
}

// Skip @ 14fa764b0

/* public: char const * __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::Skip(char
   const * __ptr64,int) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::Skip
          (EpsCopyInputStream *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 <= (*(int *)&this->buffer_end_ - (int)param_1) + 0x10) {
    return param_1 + param_2;
  }
  pcVar1 = SkipFallback(this,param_1,param_2);
  return pcVar1;
}

// SkipField @ 14fa764f0

/* public: virtual bool __cdecl
   google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int) __ptr64 */

bool __thiscall
google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipField
          (UnknownFieldSetFieldSkipper *this,CodedInputStream *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = WireFormat::SkipField(param_1,param_2,*(UnknownFieldSet **)(this + 8));
  return bVar1;
}

// SkipField @ 14fa76510

/* public: static bool __cdecl google::protobuf::internal::WireFormat::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int,class
   google::protobuf::UnknownFieldSet * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::SkipField
          (CodedInputStream *param_1,uint param_2,UnknownFieldSet *param_3)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  __int64 _Var5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  UnknownFieldSet *pUVar7;
  int iVar8;
  uint uVar9;
  uint local_res10 [2];
  __uint64 local_res20;
  pair<unsigned___int64,bool> local_28;
  
  uVar9 = param_2 >> 3;
  if (param_2 >> 3 == 0) {
    return false;
  }
  switch(param_2 & 7) {
  case 0:
    pbVar2 = param_1->buffer_;
    if ((pbVar2 < param_1->buffer_end_) && (*pbVar2 < 0x80)) {
      local_28.first = (ulong64)*pbVar2;
      param_1->buffer_ = pbVar2 + 1;
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback(param_1,&local_28);
      if (local_28.second == false) {
        return false;
      }
    }
    if (param_3 != (UnknownFieldSet *)0x0) {
      UnknownFieldSet::AddVarint(param_3,uVar9,local_28.first);
      return true;
    }
    break;
  case 1:
    if (*(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_ < 8) {
      bVar3 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,&local_res20);
      if (!bVar3) {
        return false;
      }
    }
    else {
      local_res20 = *(__uint64 *)param_1->buffer_;
      param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 8);
    }
    if (param_3 != (UnknownFieldSet *)0x0) {
      UnknownFieldSet::AddFixed64(param_3,uVar9,local_res20);
      return true;
    }
    break;
  case 2:
    pbVar2 = param_1->buffer_;
    uVar4 = 0;
    if ((pbVar2 < param_1->buffer_end_) && (uVar4 = (uint)*pbVar2, *pbVar2 < 0x80)) {
      param_1->buffer_ = pbVar2 + 1;
    }
    else {
      _Var5 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar4);
      uVar4 = (uint)_Var5;
      if (_Var5 < 0) {
        return false;
      }
    }
    if (param_3 != (UnknownFieldSet *)0x0) {
      pbVar6 = UnknownFieldSet::AddLengthDelimited(param_3,uVar9);
      bVar3 = io::CodedInputStream::ReadString(param_1,pbVar6,uVar4);
      if (!bVar3) {
        return false;
      }
      return true;
    }
    if ((int)uVar4 < 0) {
      return false;
    }
    iVar8 = *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_;
    if (iVar8 < (int)uVar4) {
      bVar3 = io::CodedInputStream::SkipFallback(param_1,uVar4,iVar8);
      if (!bVar3) {
        return false;
      }
      return true;
    }
    param_1->buffer_ = param_1->buffer_ + (int)uVar4;
    return true;
  case 3:
    piVar1 = &param_1->recursion_budget_;
    *piVar1 = *piVar1 + -1;
    if (-1 < *piVar1) {
      if (param_3 == (UnknownFieldSet *)0x0) {
        pUVar7 = (UnknownFieldSet *)0x0;
      }
      else {
        pUVar7 = UnknownFieldSet::AddGroup(param_3,uVar9);
      }
      bVar3 = SkipMessage(param_1,pUVar7);
      if (bVar3) {
        if (param_1->recursion_budget_ < param_1->recursion_limit_) {
          param_1->recursion_budget_ = param_1->recursion_budget_ + 1;
        }
        if (param_1->last_tag_ == (param_2 & 0xfffffffc | 4)) {
          return true;
        }
      }
    }
  default:
    return false;
  case 5:
    if (*(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_ < 4) {
      bVar3 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,local_res10);
      if (!bVar3) {
        return false;
      }
    }
    else {
      local_res10[0] = *(uint *)param_1->buffer_;
      param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 4);
    }
    if (param_3 != (UnknownFieldSet *)0x0) {
      UnknownFieldSet::AddFixed32(param_3,uVar9,local_res10[0]);
    }
  }
  return true;
}

// SkipMessage @ 14fa76760

/* public: virtual bool __cdecl
   google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipMessage
          (UnknownFieldSetFieldSkipper *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  bVar1 = WireFormat::SkipMessage(param_1,*(UnknownFieldSet **)(this + 8));
  return bVar1;
}

// SkipMessage @ 14fa76780

/* public: static bool __cdecl google::protobuf::internal::WireFormat::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64,class google::protobuf::UnknownFieldSet *
   __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::SkipMessage
          (CodedInputStream *param_1,UnknownFieldSet *param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  while( true ) {
    pbVar1 = param_1->buffer_;
    uVar3 = 0;
    if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
      param_1->buffer_ = pbVar1 + 1;
    }
    else {
      uVar3 = io::CodedInputStream::ReadTagFallback(param_1,uVar3);
    }
    param_1->last_tag_ = uVar3;
    if ((uVar3 == 0) || (((byte)uVar3 & 7) == 4)) break;
    bVar2 = SkipField(param_1,uVar3,param_2);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// SkipMessageSetField @ 14fa76800

/* private: static bool __cdecl google::protobuf::internal::WireFormat::SkipMessageSetField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int,class
   google::protobuf::UnknownFieldSet * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormat::SkipMessageSetField
          (CodedInputStream *param_1,uint param_2,UnknownFieldSet *param_3)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  __int64 _Var5;
  uint uVar6;
  uint uVar7;
  
  pbVar2 = param_1->buffer_;
  uVar6 = 0;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar6 = (uint)bVar1;
    uVar7 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa76838;
    }
  }
  _Var5 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar6);
  uVar7 = (uint)_Var5;
  if (_Var5 < 0) {
    return false;
  }
LAB_14fa76838:
  pbVar4 = UnknownFieldSet::AddLengthDelimited(param_3,param_2);
  bVar3 = io::CodedInputStream::ReadString(param_1,pbVar4,uVar7);
  return bVar3;
}

// SkipUnknownEnum @ 14fa76890

/* public: virtual void __cdecl
   google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipUnknownEnum(int,int) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldSetFieldSkipper::SkipUnknownEnum
          (UnknownFieldSetFieldSkipper *this,int param_1,int param_2)

{
  UnknownFieldSet::AddVarint(*(UnknownFieldSet **)(this + 8),param_1,(longlong)param_2);
  return;
}

// Sort @ 14fa768b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static class std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> > __cdecl
   google::protobuf::DynamicMapSorter::Sort(class google::protobuf::Message const &
   __ptr64,int,class google::protobuf::Reflection const * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64) */

Message * __cdecl
google::protobuf::DynamicMapSorter::Sort
          (Message *param_1,int param_2,Reflection *param_3,FieldDescriptor *param_4)

{
  Reflection *this;
  code *pcVar1;
  Message **ppMVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  Metadata *pMVar6;
  Descriptor *pDVar7;
  Reflection *pRVar8;
  MessageFactory *pMVar9;
  MessageLite *pMVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 in_register_00000014;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FieldDescriptor *in_stack_00000028;
  undefined1 auStackY_10e8 [32];
  MessageLite *local_10b0;
  FieldDescriptor *local_10a8;
  Metadata local_10a0;
  undefined8 local_1090;
  undefined8 local_1088;
  Descriptor *local_1080;
  Reflection *local_1078;
  undefined8 local_1070;
  MessageLite *local_1068;
  Message *local_1060;
  undefined1 *local_1058;
  ulonglong local_1050;
  undefined1 local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14fa768d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  local_10a8 = in_stack_00000028;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  local_10b0 = (MessageLite *)(longlong)(int)param_3;
  local_1060 = param_1;
  if ((int)param_3 != 0) {
    if ((MessageLite *)0x1fffffffffffffff < local_10b0) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
      ::_Xlength();
    }
    std::
    vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
    ::_Reallocate<0>((vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                      *)param_1,(__uint64 *)&local_10b0);
  }
  pMVar6 = protobuf::Message::GetMetadata
                     ((Message *)CONCAT44(in_register_00000014,param_2),&local_10a0);
  this = pMVar6->reflection;
  pDVar7 = Reflection::RepeatedFieldData
                     (this,(Message *)CONCAT44(in_register_00000014,param_2),in_stack_00000028,
                      CPPTYPE_MESSAGE,(Descriptor *)0x0);
  pRVar8 = (Reflection *)Reflection::RepeatedFieldAccessor(this,in_stack_00000028);
  pMVar9 = Reflection::GetMessageFactory(this);
  pcVar1 = *(code **)((longlong)*pMVar9 + 8);
  FieldDescriptor::message_type(in_stack_00000028);
  pMVar10 = (MessageLite *)(*pcVar1)(pMVar9);
  pMVar10 = MessageLite::New(pMVar10,(Arena *)0x0);
  local_10b0 = pMVar10;
  local_1080 = pDVar7;
  local_1078 = pRVar8;
  uVar11 = (*(code *)pRVar8->descriptor_->nested_types_)(pRVar8,pDVar7);
  local_1068 = pMVar10;
  while( true ) {
    local_10a0.descriptor = pDVar7;
    local_10a0.reflection = pRVar8;
    local_1070 = uVar11;
    uVar12 = (*(code *)pRVar8->descriptor_->enum_types_)(pRVar8,pDVar7);
    local_1088 = 0;
    local_1090 = uVar12;
    cVar5 = (*(code *)pRVar8->descriptor_->reserved_ranges_)(pRVar8,pDVar7,uVar11,uVar12);
    (*(code *)pRVar8->descriptor_->reserved_names_)(pRVar8,pDVar7,uVar12);
    if (cVar5 != '\0') break;
    local_10a0.descriptor =
         (Descriptor *)
         (**(code **)&pRVar8->descriptor_->oneof_decl_count_)(pRVar8,pDVar7,uVar11,local_10b0);
    ppMVar2 = *(Message ***)&param_1->field_0x8;
    if (ppMVar2 == *(Message ***)(param_1 + 1)) {
      std::
      vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
      ::_Emplace_reallocate<google::protobuf::Message_const*___ptr64>
                ((vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                  *)param_1,ppMVar2,(Message **)&local_10a0);
    }
    else {
      *ppMVar2 = (Message *)local_10a0.descriptor;
      *(longlong *)&param_1->field_0x8 = *(longlong *)&param_1->field_0x8 + 8;
    }
    uVar11 = (*(code *)pRVar8->descriptor_->extensions_)(pRVar8,pDVar7,uVar11);
  }
  (*(code *)pRVar8->descriptor_->reserved_names_)(pRVar8,pDVar7,uVar11);
  if (local_10b0 != (MessageLite *)0x0) {
    (**(code **)local_10b0->_padding_)(local_10b0,1);
  }
  pDVar7 = FieldDescriptor::message_type(local_10a8);
  lVar3 = *(longlong *)&param_1->field_0x8;
  lVar4 = *(longlong *)param_1;
  lVar13 = lVar3 - lVar4 >> 3;
  if (lVar13 < 0x21) {
    std::
    _Insertion_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (lVar4,lVar3,pDVar7->fields_);
  }
  else {
    uVar14 = lVar13 - (lVar13 - (lVar3 - lVar4 >> 0x3f) >> 1);
    uVar15 = 0x7fffffffffffffff;
    if ((longlong)uVar14 < 0x7fffffffffffffff) {
      uVar15 = uVar14;
    }
    if (0x200 < uVar14) {
      if ((uVar15 < 0x2000000000000000) && (0 < (longlong)uVar15)) {
        do {
          local_1058 = ::operator_new(uVar15 * 8,(nothrow_t *)&std::nothrow);
          if (local_1058 != (undefined1 *)0x0) {
            if (0x200 < uVar15) goto LAB_14fa76b71;
            goto LAB_14fa76b60;
          }
          uVar15 = uVar15 >> 1;
        } while (uVar15 != 0);
      }
      local_1058 = (undefined1 *)0x0;
LAB_14fa76b60:
      ::operator_delete(local_1058);
      uVar14 = 0x200;
    }
    uVar15 = uVar14;
    local_1058 = local_1048;
LAB_14fa76b71:
    local_1050 = uVar15;
    std::
    _Stable_sort_unchecked<google::protobuf::Message_const*___ptr64*___ptr64,google::protobuf::DynamicMapSorter::MapEntryMessageComparator>
              (lVar4,lVar3,lVar13,local_1058);
    if (0x200 < local_1050) {
      ::operator_delete(local_1058);
    }
  }
  return param_1;
}

// SortKey @ 14fa76bf0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static class std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> > __cdecl google::protobuf::internal::MapKeySorter::SortKey(class
   google::protobuf::Message const & __ptr64,class google::protobuf::Reflection const *
   __ptr64,class google::protobuf::FieldDescriptor const * __ptr64) */

Message * __cdecl
google::protobuf::internal::MapKeySorter::SortKey
          (Message *param_1,Reflection *param_2,FieldDescriptor *param_3)

{
  MapKey *pMVar1;
  bool bVar2;
  MapIterator *pMVar3;
  FieldDescriptor *in_R9;
  undefined4 uVar4;
  MapIterator local_a8;
  MapIterator local_58;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  uVar4 = 1;
  Reflection::MapBegin((Reflection *)param_3,&local_a8,(Message *)param_2,in_R9);
  pMVar3 = Reflection::MapEnd((Reflection *)param_3,&local_58,(Message *)param_2,in_R9);
  bVar2 = MapFieldBase::EqualIterator(local_a8.map_,&local_a8,pMVar3);
  while (!bVar2) {
    pMVar1 = *(MapKey **)&param_1->field_0x8;
    if (pMVar1 == *(MapKey **)(param_1 + 1)) {
      std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
      _Emplace_reallocate<google::protobuf::MapKey_const&___ptr64>
                ((vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *)
                 param_1,pMVar1,&local_a8.key_);
    }
    else {
      (pMVar1->val_).string_value._Mydata = local_a8.key_.val_.string_value._Mydata;
      (pMVar1->val_).string_value._Mysize = local_a8.key_.val_.string_value._Mysize;
      pMVar1->type_ = local_a8.key_.type_;
      *(int *)&pMVar1->field_0x14 = local_a8.key_._20_4_;
      *(longlong *)&param_1->field_0x8 = *(longlong *)&param_1->field_0x8 + 0x18;
    }
    MapFieldBase::IncreaseIterator(local_a8.map_,&local_a8);
    pMVar3 = Reflection::MapEnd((Reflection *)param_3,&local_58,(Message *)param_2,in_R9);
    bVar2 = MapFieldBase::EqualIterator(local_a8.map_,&local_a8,pMVar3);
  }
  std::
  _Sort_unchecked<google::protobuf::MapKey*___ptr64,google::protobuf::internal::MapKeySorter::MapKeyComparator>
            (*(longlong *)param_1,*(undefined8 *)&param_1->field_0x8,
             (*(longlong *)&param_1->field_0x8 - *(longlong *)param_1) / 0x18,
             (ulonglong)param_1 & 0xff,uVar4);
  return param_1;
}

// StringSize @ 14fa76d40

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::StringSize(class absl::lts_20240722::Cord const &
   __ptr64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::StringSize(Cord *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  uVar3 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3 >> 1;
  }
  else {
    uVar4 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = (uint)uVar4 | 1;
  if (4 < __isa_available) {
    return (LZCOUNT(uVar2) * -9 + 0x160U >> 6) + uVar4;
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return ((0x1f - iVar1) * -9 + 0x160U >> 6) + uVar4;
}

// StringSize @ 14fa76db0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::StringSize(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::StringSize
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1->_Mysize;
  uVar3 = (uint)uVar1 | 1;
  if (4 < __isa_available) {
    return (LZCOUNT(uVar3) * -9 + 0x160U >> 6) + uVar1;
  }
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return ((0x1f - iVar2) * -9 + 0x160U >> 6) + uVar1;
}

// TagSize @ 14fa76e00

/* private: static int __cdecl google::protobuf::io::EpsCopyOutputStream::TagSize(unsigned int) */

int __cdecl google::protobuf::io::EpsCopyOutputStream::TagSize(uint param_1)

{
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x4000) {
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  return 5 - (uint)(param_1 < 0x10000000);
}

// TagSize @ 14fa76e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* public: static unsigned __int64 __cdecl google::protobuf::internal::WireFormat::TagSize(int,enum
   google::protobuf::internal::FieldDescriptorLite::Type) */

__uint64 __cdecl google::protobuf::internal::WireFormat::TagSize(int param_1,Type param_2)

{
  __uint64 _Var1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = param_1 * 8 | 1;
  if (__isa_available < 5) {
    iVar4 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar4 = 0x1f - iVar4;
  }
  else {
    iVar4 = LZCOUNT(uVar2);
  }
  uVar3 = (ulonglong)(iVar4 * -9 + 0x160U >> 6);
  _Var1 = uVar3 * 2;
  if (param_2 != TYPE_GROUP) {
    _Var1 = uVar3;
  }
  return _Var1;
}

// TagSize @ 14fa76e90

/* WARNING: Enum "FieldType": Some values do not have unique names */
/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::TagSize(int,enum
   google::protobuf::internal::WireFormatLite::FieldType) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::TagSize(int param_1,FieldType param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 * 8 | 1;
  if (__isa_available < 5) {
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f - iVar3;
  }
  else {
    iVar3 = LZCOUNT(uVar2);
  }
  uVar1 = (ulonglong)(iVar3 * -9 + 0x160U >> 6);
  if (param_2 == TYPE_GROUP) {
    uVar1 = uVar1 * 2;
  }
  return uVar1;
}

// UnsafeDecrementRecursionDepth @ 14fa76ee0

/* public: void __cdecl google::protobuf::io::CodedInputStream::UnsafeDecrementRecursionDepth(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::UnsafeDecrementRecursionDepth(CodedInputStream *this)

{
  this->recursion_budget_ = this->recursion_budget_ + 1;
  return;
}

// VarintParseSlow @ 14fa76ef0

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParseSlow(char const *
   __ptr64,unsigned int,unsigned int * __ptr64) */

char * __cdecl google::protobuf::internal::VarintParseSlow(char *param_1,uint param_2,uint *param_3)

{
  char *local_18;
  uint local_10;
  
  VarintParseSlow32((char *)&local_18,(uint)param_1);
  *param_3 = local_10;
  return local_18;
}

// VarintSize32 @ 14fa76f20

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize32(unsigned int) */

__uint64 __cdecl google::protobuf::io::CodedOutputStream::VarintSize32(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)(LZCOUNT(uVar2) * -9 + 0x160U >> 6);
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (ulonglong)((0x1f - iVar1) * -9 + 0x160U >> 6);
}

// VarintSize32SignExtended @ 14fa76f70

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize32SignExtended(int) */

__uint64 __cdecl google::protobuf::io::CodedOutputStream::VarintSize32SignExtended(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x280U >> 6);
}

// VarintSize64 @ 14fa76fc0

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize64(unsigned __int64) */

__uint64 __cdecl google::protobuf::io::CodedOutputStream::VarintSize64(__uint64 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x280U >> 6);
}

// VerifyUTF8StringNamedField @ 14fa77010

/* public: static void __cdecl
   google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(char const * __ptr64,int,enum
   google::protobuf::internal::WireFormat::Operation,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

void __cdecl
google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField
          (char *param_1,int param_2,Operation param_3,
          basic_string_view<char,std::char_traits<char>_> *param_4)

{
  return;
}

// WireTypeForFieldType @ 14fa77020

/* WARNING: Enum "Type": Some values do not have unique names */
/* public: static enum google::protobuf::internal::WireFormatLite::WireType __cdecl
   google::protobuf::internal::WireFormat::WireTypeForFieldType(enum
   google::protobuf::internal::FieldDescriptorLite::Type) */

WireType __cdecl google::protobuf::internal::WireFormat::WireTypeForFieldType(Type param_1)

{
  return *(WireType *)
          ((longlong)&WireFormatLite::kWireTypeForFieldType + (longlong)(int)param_1 * 4);
}

// WireTypeForFieldType @ 14fa77040

/* WARNING: Enum "FieldType": Some values do not have unique names */
/* public: static enum google::protobuf::internal::WireFormatLite::WireType __cdecl
   google::protobuf::internal::WireFormatLite::WireTypeForFieldType(enum
   google::protobuf::internal::WireFormatLite::FieldType) */

WireType __cdecl google::protobuf::internal::WireFormatLite::WireTypeForFieldType(FieldType param_1)

{
  return *(WireType *)((longlong)&kWireTypeForFieldType + (longlong)(int)param_1 * 4);
}

// WriteFixed32NoTagToArray @ 14fa77060

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed32NoTagToArray(unsigned int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed32NoTagToArray(uint param_1,uchar *param_2)

{
  *(uint *)param_2 = param_1;
  return param_2 + 4;
}

// WriteFixed32ToArray @ 14fa77070

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(int,unsigned int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed32ToArray
          (int param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 5; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(uint *)(param_3 + 1) = param_2;
  return param_3 + 5;
}

// WriteFixed64NoTagToArray @ 14fa770b0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed64NoTagToArray(unsigned __int64,unsigned
   char * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed64NoTagToArray
          (__uint64 param_1,uchar *param_2)

{
  *(__uint64 *)param_2 = param_1;
  return param_2 + 8;
}

// WriteFixed64ToArray @ 14fa770c0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(int,unsigned __int64,unsigned
   char * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed64ToArray
          (int param_1,__uint64 param_2,uchar *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(__uint64 *)(param_3 + 1) = param_2;
  return param_3 + 9;
}

// WriteLittleEndian32ToArray @ 14fa77100

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(unsigned int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(uint param_1,uchar *param_2)

{
  *(uint *)param_2 = param_1;
  return param_2 + 4;
}

// WriteLittleEndian64ToArray @ 14fa77110

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteLittleEndian64ToArray(unsigned __int64,unsigned
   char * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteLittleEndian64ToArray(__uint64 param_1,uchar *param_2)

{
  *(__uint64 *)param_2 = param_1;
  return param_2 + 8;
}

// WriteSFixed32NoTagToArray @ 14fa77120

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed32NoTagToArray(int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed32NoTagToArray(int param_1,uchar *param_2)

{
  *(int *)param_2 = param_1;
  return param_2 + 4;
}

// WriteSFixed32ToArray @ 14fa77130

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed32ToArray(int,int,unsigned char * __ptr64)
    */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed32ToArray
          (int param_1,int param_2,uchar *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 5; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(int *)(param_3 + 1) = param_2;
  return param_3 + 5;
}

// WriteSFixed64NoTagToArray @ 14fa77170

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed64NoTagToArray(__int64,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed64NoTagToArray
          (__int64 param_1,uchar *param_2)

{
  *(__int64 *)param_2 = param_1;
  return param_2 + 8;
}

// WriteSFixed64ToArray @ 14fa77180

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(int,__int64,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray
          (int param_1,__int64 param_2,uchar *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(__int64 *)(param_3 + 1) = param_2;
  return param_3 + 9;
}

// WriteSInt32NoTagToArray @ 14fa771c0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt32NoTagToArray(int,unsigned char * __ptr64)
    */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt32NoTagToArray(int param_1,uchar *param_2)

{
  uint uVar1;
  
  for (uVar1 = param_1 >> 0x1f ^ param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}

// WriteSInt32ToArray @ 14fa77200

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(int,int,unsigned char * __ptr64)
    */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt32ToArray
          (int param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  for (uVar3 = param_1 * 8; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar3 = param_2 >> 0x1f ^ param_2 * 2;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// WriteSInt64NoTagToArray @ 14fa77270

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt64NoTagToArray(__int64,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt64NoTagToArray(__int64 param_1,uchar *param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = param_1 >> 0x3f ^ param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}

// WriteSInt64ToArray @ 14fa772c0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(int,__int64,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt64ToArray
          (int param_1,__int64 param_2,uchar *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  
  for (uVar3 = param_1 * 8; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar2 = param_2 >> 0x3f ^ param_2 * 2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar1 = (byte)uVar2;
    if (uVar2 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *param_3 = bVar1 | 0x80;
  }
  *param_3 = bVar1;
  return param_3 + 1;
}

// WriteString @ 14fa77340

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteString(unsigned int,class
   absl::lts_20240722::Cord const & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteString
          (EpsCopyOutputStream *this,uint param_1,Cord *param_2,uchar *param_3)

{
  uint uVar1;
  uchar *puVar2;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  for (uVar1 = param_1 * 8 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  puVar2 = WriteCordOutline(this,param_2,param_3 + 1);
  return puVar2;
}

// ZigZagEncode32 @ 14fa773c0

/* private: static unsigned int __cdecl
   google::protobuf::io::EpsCopyOutputStream::ZigZagEncode32(int) */

uint __cdecl google::protobuf::io::EpsCopyOutputStream::ZigZagEncode32(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// ZigZagEncode64 @ 14fa773d0

/* private: static unsigned __int64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::ZigZagEncode64(__int64) */

__uint64 __cdecl google::protobuf::io::EpsCopyOutputStream::ZigZagEncode64(__int64 param_1)

{
  return param_1 >> 0x3f ^ param_1 * 2;
}

// _Calculate_growth @ 14fa773f0

/* private: unsigned __int64 __cdecl std::vector<class google::protobuf::Message const *
   __ptr64,class std::allocator<class google::protobuf::Message const * __ptr64>
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Calculate_growth(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                    *this,__uint64 param_1)

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

// _Calculate_growth @ 14fa77430

/* private: unsigned __int64 __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::_Calculate_growth(unsigned __int64)const
   __ptr64 */

__uint64 __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Calculate_growth
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          __uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (*(longlong *)(this + 0x10) - *(longlong *)this) / 0x18;
  uVar2 = 0xaaaaaaaaaaaaaaa;
  if ((uVar1 <= 0xaaaaaaaaaaaaaaa - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)
     ) {
    uVar2 = param_1;
  }
  return uVar2;
}

// _Change_array @ 14fa77490

/* private: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::_Change_array(class
   google::protobuf::Message const * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64)
   __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Change_array(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                *this,Message **param_1,__uint64 param_2,__uint64 param_3)

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
  *(Message ***)this = param_1;
  *(Message ***)(this + 8) = param_1 + param_2;
  *(Message ***)(this + 0x10) = param_1 + param_3;
  return;
}

// _Change_array @ 14fa77520

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::_Change_array(class google::protobuf::MapKey * __ptr64
   const,unsigned __int64,unsigned __int64) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Change_array
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1,__uint64 param_2,__uint64 param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = ((*(longlong *)(this + 0x10) - (longlong)pvVar1) / 0x18) * 0x18;
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
  *(MapKey **)this = param_1;
  *(MapKey **)(this + 8) = param_1 + param_2;
  *(MapKey **)(this + 0x10) = param_1 + param_3;
  return;
}

// _Compat @ 14fa775e0

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::MapKey> > >::_Compat(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > const & __ptr64)const __ptr64 */

void __thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::
_Compat(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>
        *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::MapKey>_>_>
              *param_1)

{
  return;
}

// _Get_first @ 14fa775f0

/* public: class std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class google::protobuf::Message const * __ptr64>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const * __ptr64>
   >,1>::_Get_first(void) __ptr64 */

allocator<google::protobuf::Message_const*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
             *this)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)this;
}

// _Get_first @ 14fa77600

/* public: class std::allocator<class google::protobuf::Message const * __ptr64> const & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<class google::protobuf::Message const *
   __ptr64>,class std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message const *
   __ptr64> >,1>::_Get_first(void)const __ptr64 */

allocator<google::protobuf::Message_const*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::Message_const*___ptr64>,std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>,1>
             *this)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)this;
}

// _Get_first @ 14fa77610

/* public: class std::allocator<class google::protobuf::MapKey> & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >,1>::_Get_first(void)
   __ptr64 */

allocator<google::protobuf::MapKey> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
             *this)

{
  return (allocator<google::protobuf::MapKey> *)this;
}

// _Get_first @ 14fa77620

/* public: class std::allocator<class google::protobuf::MapKey> const & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class google::protobuf::MapKey>,class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey>
   >,1>::_Get_first(void)const __ptr64 */

allocator<google::protobuf::MapKey> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::MapKey>,std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>,1>
             *this)

{
  return (allocator<google::protobuf::MapKey> *)this;
}

// _Getal @ 14fa77630

/* private: class std::allocator<class google::protobuf::Message const * __ptr64> & __ptr64 __cdecl
   std::vector<class google::protobuf::Message const * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> >::_Getal(void) __ptr64 */

allocator<google::protobuf::Message_const*___ptr64> * __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Getal(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
         *this)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)this;
}

// _Getal @ 14fa77640

/* private: class std::allocator<class google::protobuf::Message const * __ptr64> const & __ptr64
   __cdecl std::vector<class google::protobuf::Message const * __ptr64,class std::allocator<class
   google::protobuf::Message const * __ptr64> >::_Getal(void)const __ptr64 */

allocator<google::protobuf::Message_const*___ptr64> * __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Getal(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
         *this)

{
  return (allocator<google::protobuf::Message_const*___ptr64> *)this;
}

// _Getal @ 14fa77650

/* private: class std::allocator<class google::protobuf::MapKey> & __ptr64 __cdecl std::vector<class
   google::protobuf::MapKey,class std::allocator<class google::protobuf::MapKey> >::_Getal(void)
   __ptr64 */

allocator<google::protobuf::MapKey> * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Getal
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  return (allocator<google::protobuf::MapKey> *)this;
}

// _Getal @ 14fa77660

/* private: class std::allocator<class google::protobuf::MapKey> const & __ptr64 __cdecl
   std::vector<class google::protobuf::MapKey,class std::allocator<class google::protobuf::MapKey>
   >::_Getal(void)const __ptr64 */

allocator<google::protobuf::MapKey> * __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Getal
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  return (allocator<google::protobuf::MapKey> *)this;
}

// _InternalParse @ 14fa77670

/* public: static char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::_InternalParse(class google::protobuf::Message *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::WireFormat::_InternalParse
          (Message *param_1,char *param_2,ParseContext *param_3)

{
  byte bVar1;
  Descriptor *this;
  Reflection *this_00;
  DescriptorPool *this_01;
  int iVar2;
  Metadata *pMVar3;
  char *pcVar4;
  FieldDescriptor *pFVar5;
  ExtensionRange *pEVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *local_78;
  char local_70;
  byte *local_68;
  uint local_60;
  Metadata local_58;
  Metadata local_48;
  Reflection *local_38;
  
  pMVar3 = protobuf::Message::GetMetadata(param_1,&local_58);
  this = pMVar3->descriptor;
  pMVar3 = protobuf::Message::GetMetadata(param_1,&local_48);
  this_00 = pMVar3->reflection;
  if ((this->options_->_impl_).message_set_wire_format_ == false) {
    do {
      if ((byte *)param_3->_padding_ <= param_2) {
        iVar2 = (int)param_2 - (int)param_3->_padding_;
        if (iVar2 == *(int *)((longlong)&param_3->_padding_ + 4)) {
          if (iVar2 < 1) {
            return (char *)(byte *)param_2;
          }
          if (param_3->_padding_ != 0) {
            return (char *)(byte *)param_2;
          }
          return (char *)0x0;
        }
        EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_3,(int)&local_78,iVar2);
        param_2 = (char *)local_78;
        if (local_70 != '\0') {
          return (char *)local_78;
        }
      }
      bVar1 = *param_2;
      if (bVar1 < 0x80) {
        pbVar7 = (byte *)(param_2 + 1);
        uVar9 = (uint)bVar1;
      }
      else if ((byte)param_2[1] < 0x80) {
        pbVar7 = (byte *)(param_2 + 2);
        uVar9 = (bVar1 - 0x80) + (uint)(byte)param_2[1] * 0x80;
      }
      else {
        ReadTagFallback((char *)&local_68,(uint)param_2);
        pbVar7 = local_68;
        uVar9 = local_60;
      }
      if (pbVar7 == (byte *)0x0) break;
      if ((uVar9 == 0) || (((byte)uVar9 & 7) == 4)) {
        *(uint *)&param_3->_padding_ = uVar9 - 1;
        return (char *)pbVar7;
      }
      uVar8 = uVar9 >> 3;
      pFVar5 = Descriptor::FindFieldByNumber(this,uVar8);
      if ((pFVar5 == (FieldDescriptor *)0x0) &&
         (pEVar6 = Descriptor::FindExtensionRangeContainingNumber(this,uVar8),
         pEVar6 != (ExtensionRange *)0x0)) {
        this_01 = (param_3->data_).pool;
        if (this_01 == (DescriptorPool *)0x0) {
          pFVar5 = Reflection::FindKnownExtensionByNumber(this_00,uVar8);
        }
        else {
          pFVar5 = DescriptorPool::FindExtensionByNumber(this_01,this,uVar8);
        }
      }
      param_2 = _InternalParseAndMergeField
                          (param_1,(char *)pbVar7,param_3,(ulonglong)uVar9,this_00,pFVar5);
    } while ((byte *)param_2 != (byte *)0x0);
    pcVar4 = (char *)0x0;
  }
  else {
    local_48.descriptor = (Descriptor *)param_1;
    local_48.reflection = (Reflection *)this;
    local_38 = this_00;
    pcVar4 = MessageSetParser::ParseMessageSet((MessageSetParser *)&local_48,param_2,param_3);
  }
  return pcVar4;
}

// _InternalParseAndMergeField @ 14fa77850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: static char const * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::_InternalParseAndMergeField(class
   google::protobuf::Message * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,unsigned __int64,class
   google::protobuf::Reflection const * __ptr64,class google::protobuf::FieldDescriptor const *
   __ptr64) */

char * __cdecl
google::protobuf::internal::WireFormat::_InternalParseAndMergeField
          (Message *param_1,char *param_2,ParseContext *param_3,__uint64 param_4,Reflection *param_5
          ,FieldDescriptor *param_6)

{
  byte bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  bool bVar3;
  CppStringType CVar4;
  UnknownFieldSet *pUVar5;
  char *pcVar6;
  RepeatedField<int> *pRVar7;
  RepeatedField<__int64> *pRVar8;
  RepeatedField<unsigned_int> *pRVar9;
  RepeatedField<unsigned___int64> *pRVar10;
  RepeatedField<float> *pRVar11;
  RepeatedField<double> *pRVar12;
  RepeatedField<bool> *pRVar13;
  LogMessage *this;
  uint uVar14;
  int iVar15;
  undefined8 _Dst;
  undefined8 uVar16;
  ulong64 uVar17;
  ulonglong _Size;
  undefined4 uVar18;
  undefined1 auStack_e8 [32];
  <lambda_1> local_b8;
  _Bxty local_a8;
  ulonglong local_98;
  ulonglong uStack_90;
  Rep_u_0 local_88;
  _Bxty local_78;
  Reflection *local_68;
  Message *pMStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_88.as_tree.cordz_info = local_88.as_tree.cordz_info & 0xffffffff00000000;
  if (param_6 == (FieldDescriptor *)0x0) {
LAB_14fa77897:
    pUVar5 = Reflection::MutableUnknownFields(param_5,param_1);
    pcVar6 = UnknownFieldParse(param_4,pUVar5,param_2,param_3);
    return pcVar6;
  }
  bVar1 = param_6->type_;
  uVar14 = (uint)param_4 & 7;
  if (uVar14 != *(uint *)((longlong)&WireFormatLite::kWireTypeForFieldType + (ulonglong)bVar1 * 4))
  {
    if ((((!param_6->is_repeated_) || (bVar1 - 9 < 3)) || (bVar1 == 0xc)) || (uVar14 != 2))
    goto LAB_14fa77897;
    switch(bVar1) {
    case 1:
      pRVar12 = Reflection::MutableRepeatedFieldInternal<double>(param_5,param_1,param_6);
      pcVar6 = PackedDoubleParser(pRVar12,param_2,param_3);
      return pcVar6;
    case 2:
      pRVar11 = Reflection::MutableRepeatedFieldInternal<float>(param_5,param_1,param_6);
      pcVar6 = PackedFloatParser(pRVar11,param_2,param_3);
      return pcVar6;
    case 3:
      pRVar8 = Reflection::MutableRepeatedFieldInternal<__int64>(param_5,param_1,param_6);
      pcVar6 = PackedInt64Parser(pRVar8,param_2,param_3);
      return pcVar6;
    case 4:
      pRVar10 = Reflection::MutableRepeatedFieldInternal<unsigned___int64>(param_5,param_1,param_6);
      pcVar6 = PackedUInt64Parser(pRVar10,param_2,param_3);
      return pcVar6;
    case 5:
      pRVar7 = Reflection::MutableRepeatedFieldInternal<int>(param_5,param_1,param_6);
      pcVar6 = PackedInt32Parser(pRVar7,param_2,param_3);
      return pcVar6;
    case 6:
      pRVar10 = Reflection::MutableRepeatedFieldInternal<unsigned___int64>(param_5,param_1,param_6);
      pcVar6 = PackedFixed64Parser(pRVar10,param_2,param_3);
      return pcVar6;
    case 7:
      pRVar9 = Reflection::MutableRepeatedFieldInternal<unsigned_int>(param_5,param_1,param_6);
      pcVar6 = PackedFixed32Parser(pRVar9,param_2,param_3);
      return pcVar6;
    case 8:
      pRVar13 = Reflection::MutableRepeatedFieldInternal<bool>(param_5,param_1,param_6);
      pcVar6 = PackedBoolParser(pRVar13,param_2,param_3);
      return pcVar6;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      this = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_78,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format.cc"
                        ,0x390);
      local_88.as_tree.cordz_info._0_4_ = 1;
      local_a8._Ptr = "Can\'t reach";
      local_a8._8_8_ = 0xb;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                (this,(basic_string_view<char,std::char_traits<char>_> *)&local_a8);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_78);
    case 0xd:
      pRVar9 = Reflection::MutableRepeatedFieldInternal<unsigned_int>(param_5,param_1,param_6);
      pcVar6 = PackedUInt32Parser(pRVar9,param_2,param_3);
      return pcVar6;
    case 0xe:
      pRVar7 = Reflection::MutableRepeatedFieldInternal<int>(param_5,param_1,param_6);
      bVar3 = FieldDescriptor::legacy_enum_field_treated_as_closed(param_6);
      if (bVar3) {
        local_78._8_8_ = param_6;
        local_68 = param_5;
        local_78._Ptr = (char *)pRVar7;
        pMStack_60 = param_1;
        pcVar6 = (char *)FUN_14fa66380(param_3,param_2,&local_78);
        return pcVar6;
      }
      pcVar6 = PackedEnumParser(pRVar7,param_2,param_3);
      return pcVar6;
    case 0xf:
      pRVar7 = Reflection::MutableRepeatedFieldInternal<int>(param_5,param_1,param_6);
      pcVar6 = PackedSFixed32Parser(pRVar7,param_2,param_3);
      return pcVar6;
    case 0x10:
      pRVar8 = Reflection::MutableRepeatedFieldInternal<__int64>(param_5,param_1,param_6);
      pcVar6 = PackedSFixed64Parser(pRVar8,param_2,param_3);
      return pcVar6;
    case 0x11:
      pRVar7 = Reflection::MutableRepeatedFieldInternal<int>(param_5,param_1,param_6);
      pcVar6 = PackedSInt32Parser(pRVar7,param_2,param_3);
      return pcVar6;
    case 0x12:
      pRVar8 = Reflection::MutableRepeatedFieldInternal<__int64>(param_5,param_1,param_6);
      pcVar6 = PackedSInt64Parser(pRVar8,param_2,param_3);
      return pcVar6;
    }
  }
  bVar3 = false;
  local_b8 = (<lambda_1>)0x0;
  uVar14 = (uint)param_2;
  switch(bVar1) {
  case 1:
    if (!param_6->is_repeated_) {
      Reflection::SetDouble(param_5,param_1,param_6,*(double *)param_2);
      return param_2 + 8;
    }
    Reflection::AddDouble(param_5,param_1,param_6,*(double *)param_2);
    return param_2 + 8;
  case 2:
    if (!param_6->is_repeated_) {
      Reflection::SetFloat(param_5,param_1,param_6,*(float *)param_2);
      return param_2 + 4;
    }
    Reflection::AddFloat(param_5,param_1,param_6,*(float *)param_2);
    return param_2 + 4;
  case 3:
    if (*param_2 < '\0') {
      VarintParseSlow64(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      local_a8._8_8_ = ZEXT18((byte)*param_2);
      uVar16 = (_Bxty *)(param_2 + 1);
    }
    goto LAB_14fa77c0c;
  case 4:
    if (*param_2 < '\0') {
      VarintParseSlow64(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      local_a8._8_8_ = ZEXT18((byte)*param_2);
      uVar16 = (_Bxty *)(param_2 + 1);
    }
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetUInt64(param_5,param_1,param_6,local_a8._8_8_);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddUInt64(param_5,param_1,param_6,local_a8._8_8_);
      return (char *)(_Bxty *)uVar16;
    }
    break;
  case 5:
    if (*param_2 < '\0') {
      VarintParseSlow32(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      uVar16 = (_Bxty *)(param_2 + 1);
      local_a8._8_4_ = (uint)(byte)*param_2;
    }
    goto LAB_14fa77bb5;
  case 6:
    if (!param_6->is_repeated_) {
      Reflection::SetUInt64(param_5,param_1,param_6,*(__uint64 *)param_2);
      return param_2 + 8;
    }
    Reflection::AddUInt64(param_5,param_1,param_6,*(__uint64 *)param_2);
    return param_2 + 8;
  case 7:
    if (!param_6->is_repeated_) {
      Reflection::SetUInt32(param_5,param_1,param_6,*(uint *)param_2);
      return param_2 + 4;
    }
    Reflection::AddUInt32(param_5,param_1,param_6,*(uint *)param_2);
    return param_2 + 4;
  case 8:
    if (*param_2 < '\0') {
      VarintParseSlow64(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      local_a8._8_8_ = (ulonglong)(byte)*param_2;
      uVar16 = (_Bxty *)(param_2 + 1);
    }
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetBool(param_5,param_1,param_6,local_a8._8_8_ != 0);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddBool(param_5,param_1,param_6,local_a8._8_8_ != 0);
      return (char *)(_Bxty *)uVar16;
    }
    break;
  case 9:
    bVar3 = true;
    local_b8 = (<lambda_1>)FieldDescriptor::requires_utf8_validation(param_6);
  case 0xc:
    if ((byte)*param_2 < 0x80) {
      uVar16 = (_Bxty *)(param_2 + 1);
      uVar18 = (uint)(byte)*param_2;
    }
    else {
      ReadSizeFallback(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
      uVar18 = local_a8._8_4_;
    }
    if ((_Bxty *)uVar16 == (_Bxty *)0x0) {
      return (char *)0x0;
    }
    CVar4 = FieldDescriptor::cpp_string_type(param_6);
    iVar15 = ((int)param_3->_padding_ - (int)uVar16) + 0x10;
    if (CVar4 == kCord) {
      local_88.as_tree.cordz_info = 0;
      local_88.as_tree.rep = (CordRep *)0x0;
      if (0x200 < iVar15) {
        iVar15 = 0x200;
      }
      if (iVar15 < (int)uVar18) {
        pcVar6 = EpsCopyInputStream::ReadCordFallback
                           ((EpsCopyInputStream *)param_3,(char *)uVar16,uVar18,
                            (Cord *)&local_88.as_tree);
      }
      else {
        local_a8._Ptr = (char *)uVar16;
        local_a8._8_8_ = (longlong)(int)uVar18;
        absl::lts_20240722::Cord::operator=
                  ((Cord *)&local_88.as_tree,
                   (basic_string_view<char,std::char_traits<char>_> *)&local_a8);
        pcVar6 = (char *)(uVar16 + (longlong)(int)uVar18);
      }
      if (pcVar6 == (char *)0x0) {
        if ((local_88.as_tree.cordz_info & 1U) == 0) {
          return (char *)0x0;
        }
        absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_88.as_tree);
        return (char *)0x0;
      }
      Reflection::SetString(param_5,param_1,param_6,(Cord *)&local_88.as_tree);
      if ((local_88.as_tree.cordz_info & 1U) != 0) {
        absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_88.as_tree);
        return pcVar6;
      }
      return pcVar6;
    }
    local_78._8_8_ = 0;
    local_68 = (Reflection *)0x0;
    pMStack_60 = (Message *)0xf;
    local_78._Ptr = (char *)0x0;
    if (iVar15 < (int)uVar18) {
      pcVar6 = EpsCopyInputStream::ReadStringFallback
                         ((EpsCopyInputStream *)param_3,(char *)uVar16,uVar18,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78);
    }
    else {
      _Size = (ulonglong)(int)uVar18;
      if (uVar18 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_78._Buf[0] = '\0';
        local_68 = (Reflection *)_Size;
      }
      else if (_Size < 0x10) {
        local_68 = (Reflection *)_Size;
        memset(&local_78,0,_Size);
        local_78._Buf[_Size] = '\0';
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   _Size,local_b8,_Size,'\0');
      }
      _Dst = &local_78;
      if (0xf < pMStack_60) {
        _Dst = local_78._Ptr;
      }
      memcpy((void *)_Dst,(void *)uVar16,_Size);
      pcVar6 = (char *)(uVar16 + _Size);
    }
    if (pcVar6 != (char *)0x0) {
      if ((bVar3) && (local_b8 != (<lambda_1>)0x0)) {
        pbVar2 = param_6->all_names_;
        local_a8._Ptr = (char *)(pbVar2 + 1);
        if (0xf < pbVar2[1]._Mypair._Myval2._Myres) {
          local_a8._Ptr = pbVar2[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_a8._8_8_ = pbVar2[1]._Mypair._Myval2._Mysize;
        uVar16 = &local_78;
        if (0xf < pMStack_60) {
          uVar16 = local_78._Ptr;
        }
        bVar3 = WireFormatLite::VerifyUtf8String
                          ((char *)uVar16,(int)local_68,PARSE,
                           (basic_string_view<char,std::char_traits<char>_> *)&local_a8);
        if (!bVar3) goto LAB_14fa780e3;
      }
      local_a8._Ptr = local_78._Ptr;
      local_a8._8_8_ = local_78._8_8_;
      local_78._Ptr = local_78._Ptr & 0xffffffffffffff00;
      local_98 = (ulonglong)local_68;
      uStack_90 = (ulonglong)pMStack_60;
      local_68 = (Reflection *)0x0;
      pMStack_60 = (Message *)0xf;
      if (param_6->is_repeated_) {
        Reflection::AddString
                  (param_5,param_1,param_6,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8);
      }
      else {
        Reflection::SetString
                  (param_5,param_1,param_6,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8);
      }
      if (pMStack_60 < 0x10) {
        return pcVar6;
      }
      uVar17 = (longlong)pMStack_60 + 1;
      uVar16 = local_78._Ptr;
      if (0xfff < uVar17) {
        uVar17 = (longlong)pMStack_60 + 0x28;
        uVar16 = *(undefined8 *)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar16)) {
LAB_14fa7819d:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete((void *)uVar16,uVar17);
      return pcVar6;
    }
LAB_14fa780e3:
    if (0xf < pMStack_60) {
      uVar17 = (longlong)pMStack_60 + 1;
      uVar16 = local_78._Ptr;
      if (0xfff < uVar17) {
        uVar17 = (longlong)pMStack_60 + 0x28;
        uVar16 = *(undefined8 *)(local_78._Ptr + -8);
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar16)) goto LAB_14fa7819d;
      }
      ::operator_delete((void *)uVar16,uVar17);
    }
    break;
  case 10:
  case 0xb:
    pcVar6 = (char *)FUN_14fa70290(param_1,param_2,param_3,param_4);
    return pcVar6;
  case 0xd:
    if (*param_2 < '\0') {
      VarintParseSlow32(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      uVar16 = (_Bxty *)(param_2 + 1);
      local_a8._8_4_ = (uint)(byte)*param_2;
    }
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetUInt32(param_5,param_1,param_6,local_a8._8_4_);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddUInt32(param_5,param_1,param_6,local_a8._8_4_);
      return (char *)(_Bxty *)uVar16;
    }
    break;
  case 0xe:
    if (*param_2 < '\0') {
      VarintParseSlow32(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
    }
    else {
      uVar16 = (_Bxty *)(param_2 + 1);
      local_a8._8_4_ = (uint)(byte)*param_2;
    }
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetEnumValue(param_5,param_1,param_6,local_a8._8_4_);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddEnumValue(param_5,param_1,param_6,local_a8._8_4_);
      return (char *)(_Bxty *)uVar16;
    }
    break;
  case 0xf:
    if (!param_6->is_repeated_) {
      Reflection::SetInt32(param_5,param_1,param_6,*(int *)param_2);
      return param_2 + 4;
    }
    Reflection::AddInt32(param_5,param_1,param_6,*(int *)param_2);
    return param_2 + 4;
  case 0x10:
    if (!param_6->is_repeated_) {
      Reflection::SetInt64(param_5,param_1,param_6,*(__int64 *)param_2);
      return param_2 + 8;
    }
    Reflection::AddInt64(param_5,param_1,param_6,*(__int64 *)param_2);
    return param_2 + 8;
  case 0x11:
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      VarintParseSlow64(local_a8._Buf,uVar14);
      uVar16 = local_a8._Ptr;
      local_a8._8_4_ =
           (uint)((ulonglong)local_a8._8_8_ >> 1) & 0x7fffffff ^ -((uint)local_a8._8_8_ & 1);
    }
    else {
      uVar16 = (_Bxty *)(param_2 + 1);
      local_a8._8_4_ = (uint)(bVar1 >> 1) ^ -(bVar1 & 1);
    }
LAB_14fa77bb5:
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetInt32(param_5,param_1,param_6,local_a8._8_4_);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddInt32(param_5,param_1,param_6,local_a8._8_4_);
      return (char *)(_Bxty *)uVar16;
    }
    break;
  case 0x12:
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      VarintParseSlow64(local_a8._Buf,uVar14);
      local_a8._8_8_ = (ulonglong)local_a8._8_8_ >> 1 ^ -(ulonglong)((uint)local_a8._8_8_ & 1);
      uVar16 = local_a8._Ptr;
    }
    else {
      local_a8._8_8_ = (ulonglong)(bVar1 >> 1) ^ -(ulonglong)(bVar1 & 1);
      uVar16 = (_Bxty *)(param_2 + 1);
    }
LAB_14fa77c0c:
    if ((_Bxty *)uVar16 != (_Bxty *)0x0) {
      if (!param_6->is_repeated_) {
        Reflection::SetInt64(param_5,param_1,param_6,local_a8._8_8_);
        return (char *)(_Bxty *)uVar16;
      }
      Reflection::AddInt64(param_5,param_1,param_6,local_a8._8_8_);
      return (char *)(_Bxty *)uVar16;
    }
  }
  return (char *)0x0;
}

// _InternalSerialize @ 14fa782c0

/* WARNING: Type propagation algorithm not settling */
/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::_InternalSerialize(class google::protobuf::Message const
   & __ptr64,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::_InternalSerialize
          (Message *param_1,uchar *param_2,EpsCopyOutputStream *param_3)

{
  Descriptor *pDVar1;
  Reflection *this;
  ulonglong uVar2;
  FieldDescriptor **ppFVar3;
  FieldDescriptor **ppFVar4;
  int iVar5;
  Metadata *pMVar6;
  UnknownFieldSet *pUVar7;
  uchar *puVar8;
  FieldDescriptor *pFVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar13;
  UnknownField *this_00;
  byte *pbVar15;
  FieldDescriptor *local_68;
  Metadata local_60;
  Metadata local_50;
  FieldDescriptor *local_40;
  FieldDescriptor **ppFStack_38;
  FieldDescriptor **local_30;
  ulonglong uVar12;
  undefined1 *puVar14;
  
  pMVar6 = protobuf::Message::GetMetadata(param_1,&local_60);
  pDVar1 = pMVar6->descriptor;
  pMVar6 = protobuf::Message::GetMetadata(param_1,&local_50);
  this = pMVar6->reflection;
  local_40 = (FieldDescriptor *)0x0;
  ppFStack_38 = (FieldDescriptor **)0x0;
  uVar13 = 0;
  local_30 = (FieldDescriptor **)0x0;
  if ((pDVar1->options_->_impl_).map_entry_ == false) {
    Reflection::ListFields
              (this,param_1,
               (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&local_40);
    pFVar9 = local_40;
    ppFVar3 = ppFStack_38;
  }
  else {
    uVar12 = uVar13;
    pFVar9 = local_40;
    ppFVar3 = ppFStack_38;
    if (0 < pDVar1->field_count_) {
      do {
        local_68 = pDVar1->fields_ + (int)uVar12;
        if (ppFStack_38 == local_30) {
          std::
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                    ((vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                      *)&local_40,ppFStack_38,&local_68);
        }
        else {
          *ppFStack_38 = local_68;
          ppFStack_38 = ppFStack_38 + 1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        pFVar9 = local_40;
        ppFVar3 = ppFStack_38;
      } while ((int)uVar11 < pDVar1->field_count_);
    }
  }
  for (; ppFVar4 = ppFStack_38, pFVar9 != (FieldDescriptor *)ppFStack_38;
      pFVar9 = (FieldDescriptor *)((longlong)pFVar9 + 8)) {
    ppFStack_38 = ppFVar3;
    param_2 = InternalSerializeField(*(FieldDescriptor **)pFVar9,param_1,param_2,param_3);
    ppFVar3 = ppFStack_38;
    ppFStack_38 = ppFVar4;
  }
  if ((pDVar1->options_->_impl_).message_set_wire_format_ == false) {
    ppFStack_38 = ppFVar3;
    pUVar7 = Reflection::GetUnknownFields(this,param_1);
    param_2 = InternalSerializeUnknownFieldsToArray(pUVar7,param_2,param_3);
  }
  else {
    ppFStack_38 = ppFVar3;
    pUVar7 = Reflection::GetUnknownFields(this,param_1);
    iVar5 = UnknownFieldSet::field_count(pUVar7);
    uVar12 = uVar13;
    if (0 < iVar5) {
      do {
        uVar2 = (pUVar7->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
        puVar14 = (undefined1 *)((longlong)&(pUVar7->fields_).soo_rep_.field0_0x0 + 8);
        if ((~((byte)uVar2 >> 2) & 1) == 0) {
          puVar14 = (undefined1 *)(uVar2 & 0xfffffffffffffff8);
        }
        this_00 = (UnknownField *)(puVar14 + uVar13);
        if (this_00->type_ == 3) {
          if (param_3->end_ <= param_2) {
            param_2 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,param_2);
          }
          param_2[0] = '\v';
          param_2[1] = '\x10';
          pbVar15 = param_2 + 2;
          for (uVar11 = this_00->number_; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
            *pbVar15 = (byte)uVar11 | 0x80;
            pbVar15 = pbVar15 + 1;
          }
          *pbVar15 = (byte)uVar11;
          pbVar15[1] = 0x1a;
          puVar8 = UnknownField::InternalSerializeLengthDelimitedNoTag(this_00,pbVar15 + 2,param_3);
          if (param_3->end_ <= puVar8) {
            puVar8 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_3,puVar8);
          }
          *puVar8 = '\f';
          param_2 = puVar8 + 1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar13 = uVar13 + 0x10;
        iVar5 = UnknownFieldSet::field_count(pUVar7);
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar5);
    }
  }
  if (local_40 != (FieldDescriptor *)0x0) {
    uVar10 = (longlong)local_30 - (longlong)local_40 & 0xfffffffffffffff8;
    pFVar9 = local_40;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      pFVar9 = *(FieldDescriptor **)&local_40[0xffffffffffffffff].field24_0x58;
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pFVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pFVar9,uVar10);
  }
  return param_2;
}

// _Orphan_range @ 14fa78550

/* private: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::_Orphan_range(class
   google::protobuf::Message const * __ptr64 * __ptr64,class google::protobuf::Message const *
   __ptr64 * __ptr64)const __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Orphan_range(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                *this,Message **param_1,Message **param_2)

{
  return;
}

// _Orphan_range @ 14fa78560

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::_Orphan_range(class google::protobuf::MapKey * __ptr64,class
   google::protobuf::MapKey * __ptr64)const __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Orphan_range
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1,MapKey *param_2)

{
  return;
}

// _Release @ 14fa78570

/* public: class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_backout<class google::protobuf::Message const * __ptr64 *
   __ptr64>::_Release(void) __ptr64 */

Message ** __thiscall
std::_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64>::_Release
          (_Uninitialized_backout<google::protobuf::Message_const*___ptr64*___ptr64> *this)

{
  *(Message ***)this = *(Message ***)(this + 8);
  return *(Message ***)(this + 8);
}

// _Release @ 14fa78580

/* public: class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_backout_al<class std::allocator<class google::protobuf::Message const *
   __ptr64> >::_Release(void) __ptr64 */

Message ** __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>::_Release
          (_Uninitialized_backout_al<std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

{
  *(Message ***)this = *(Message ***)(this + 8);
  return *(Message ***)(this + 8);
}

// _Release @ 14fa78590

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey * __ptr64 __cdecl std::_Uninitialized_backout_al<class
   std::allocator<class google::protobuf::MapKey> >::_Release(void) __ptr64 */

MapKey * __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_>::_Release
          (_Uninitialized_backout_al<std::allocator<google::protobuf::MapKey>_> *this)

{
  *(MapKey **)this = *(MapKey **)(this + 8);
  return *(MapKey **)(this + 8);
}

// _Take_contents @ 14fa785a0

/* public: void __cdecl std::_Vector_val<struct std::_Simple_types<class google::protobuf::Message
   const * __ptr64> >::_Take_contents(class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > & __ptr64) __ptr64 */

void __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>::_Take_contents
          (_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_> *this,
          _Vector_val<struct_std::_Simple_types<class_google::protobuf::Message_const*___ptr64>_>
          *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

// _Tidy @ 14fa785d0

/* private: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Tidy(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
        *this)

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

// _Tidy @ 14fa78640

/* private: void __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::_Tidy(void) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Tidy
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = ((*(longlong *)(this + 0x10) - (longlong)pvVar1) / 0x18) * 0x18;
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

// _Unwrapped @ 14fa786d0

/* public: class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > >::_Unwrapped(void)const __ptr64 */

Message ** __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>::
_Unwrapped(_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::Message_const*___ptr64>_>_>
           *this)

{
  return *(Message ***)this;
}

// _Unwrapped @ 14fa786e0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey * __ptr64 __cdecl std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::MapKey> >
   >::_Unwrapped(void)const __ptr64 */

MapKey * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_>::_Unwrapped
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::MapKey>_>_> *this)

{
  return *(MapKey **)this;
}

// _Xlength @ 14fa786f0

/* private: static void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::_Xlength(void) */

void __cdecl
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14fa78710

/* private: static void __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::_Xlength(void) */

void __cdecl
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// allocate @ 14fa78730

/* public: class google::protobuf::Message const * __ptr64 * __ptr64 __cdecl std::allocator<class
   google::protobuf::Message const * __ptr64>::allocate(unsigned __int64) __ptr64 */

Message ** __thiscall
std::allocator<google::protobuf::Message_const*___ptr64>::allocate
          (allocator<google::protobuf::Message_const*___ptr64> *this,__uint64 param_1)

{
  ulonglong uVar1;
  Message *pMVar2;
  Message **ppMVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppMVar3 = ::operator_new(uVar1);
        return ppMVar3;
      }
      return (Message **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pMVar2 = ::operator_new(uVar1 + 0x27);
      if (pMVar2 != (Message *)0x0) {
        ppMVar3 = (Message **)((ulonglong)&pMVar2[2].field_0x7 & 0xffffffffffffffe0);
        ppMVar3[-1] = pMVar2;
        return ppMVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 14fa787b0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey * __ptr64 __cdecl std::allocator<class
   google::protobuf::MapKey>::allocate(unsigned __int64) __ptr64 */

MapKey * __thiscall
std::allocator<google::protobuf::MapKey>::allocate
          (allocator<google::protobuf::MapKey> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  MapKey *pMVar3;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    uVar1 = param_1 * 0x18;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pMVar3 = ::operator_new(uVar1);
        return pMVar3;
      }
      return (MapKey *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pMVar3 = (MapKey *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pMVar3[-1].type_ = pvVar2;
        return pMVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// begin @ 14fa78830

/* public: class google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message> __cdecl google::protobuf::RepeatedFieldRef<class
   google::protobuf::Message,void>::begin(void)const __ptr64 */

void __thiscall
google::protobuf::RepeatedFieldRef<google::protobuf::Message,void>::begin
          (RepeatedFieldRef<google::protobuf::Message,void> *this)

{
  longlong *plVar1;
  MessageLite *pMVar2;
  undefined8 uVar3;
  undefined8 *in_RDX;
  
  pMVar2 = MessageLite::New(*(MessageLite **)(this + 0x10),(Arena *)0x0);
  plVar1 = *(longlong **)(this + 8);
  *in_RDX = *(undefined8 *)this;
  in_RDX[1] = plVar1;
  uVar3 = (**(code **)(*plVar1 + 0x48))();
  in_RDX[2] = uVar3;
  in_RDX[3] = pMVar2;
  return;
}

// begin @ 14fa78890

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > > __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::begin(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::begin(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
        *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// begin @ 14fa788a0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::begin(void) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::begin
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// capacity @ 14fa788b0

/* public: unsigned __int64 __cdecl std::vector<class google::protobuf::Message const *
   __ptr64,class std::allocator<class google::protobuf::Message const * __ptr64>
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::capacity(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 3;
}

// capacity @ 14fa788d0

/* public: unsigned __int64 __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::capacity
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  return (*(longlong *)(this + 0x10) - *(longlong *)this) / 0x18;
}

// compare @ 14fa78900

/* public: int __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::compare(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64)const __ptr64 */

int __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong _Size;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               param_1;
  }
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = memcmp(this,param_1,_Size);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return -1;
    }
    uVar3 = (uint)(uVar1 < uVar2);
  }
  return uVar3;
}

// data @ 14fa78970

/* public: int const * __ptr64 __cdecl google::protobuf::RepeatedField<int>::data(void)const __ptr64
    */

int * __thiscall google::protobuf::RepeatedField<int>::data(RepeatedField<int> *this)

{
  ulonglong uVar1;
  int *piVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar2 = (int *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    piVar2 = (int *)(uVar1 & 0xfffffffffffffff8);
  }
  return piVar2;
}

// data @ 14fa789a0

/* public: unsigned int const * __ptr64 __cdecl google::protobuf::RepeatedField<unsigned
   int>::data(void)const __ptr64 */

uint * __thiscall
google::protobuf::RepeatedField<unsigned_int>::data(RepeatedField<unsigned_int> *this)

{
  ulonglong uVar1;
  uint *puVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  puVar2 = (uint *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    puVar2 = (uint *)(uVar1 & 0xfffffffffffffff8);
  }
  return puVar2;
}

// data @ 14fa789d0

/* public: float const * __ptr64 __cdecl google::protobuf::RepeatedField<float>::data(void)const
   __ptr64 */

float * __thiscall google::protobuf::RepeatedField<float>::data(RepeatedField<float> *this)

{
  ulonglong uVar1;
  float *pfVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  pfVar2 = (float *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    pfVar2 = (float *)(uVar1 & 0xfffffffffffffff8);
  }
  return pfVar2;
}

// data @ 14fa78a00

/* public: double const * __ptr64 __cdecl google::protobuf::RepeatedField<double>::data(void)const
   __ptr64 */

double * __thiscall google::protobuf::RepeatedField<double>::data(RepeatedField<double> *this)

{
  ulonglong uVar1;
  double *pdVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  pdVar2 = (double *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    pdVar2 = (double *)(uVar1 & 0xfffffffffffffff8);
  }
  return pdVar2;
}

// data @ 14fa78a30

/* public: __int64 const * __ptr64 __cdecl google::protobuf::RepeatedField<__int64>::data(void)const
   __ptr64 */

__int64 * __thiscall google::protobuf::RepeatedField<__int64>::data(RepeatedField<__int64> *this)

{
  ulonglong uVar1;
  __int64 *p_Var2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  p_Var2 = (__int64 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    p_Var2 = (__int64 *)(uVar1 & 0xfffffffffffffff8);
  }
  return p_Var2;
}

// data @ 14fa78a60

/* public: unsigned __int64 const * __ptr64 __cdecl google::protobuf::RepeatedField<unsigned
   __int64>::data(void)const __ptr64 */

__uint64 * __thiscall
google::protobuf::RepeatedField<unsigned___int64>::data(RepeatedField<unsigned___int64> *this)

{
  ulonglong uVar1;
  __uint64 *p_Var2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  p_Var2 = (__uint64 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    p_Var2 = (__uint64 *)(uVar1 & 0xfffffffffffffff8);
  }
  return p_Var2;
}

// data @ 14fa78a90

/* public: bool const * __ptr64 __cdecl google::protobuf::RepeatedField<bool>::data(void)const
   __ptr64 */

bool * __thiscall google::protobuf::RepeatedField<bool>::data(RepeatedField<bool> *this)

{
  ulonglong uVar1;
  bool *pbVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  pbVar2 = (bool *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    pbVar2 = (bool *)(uVar1 & 0xfffffffffffffff8);
  }
  return pbVar2;
}

// deallocate @ 14fa78ac0

/* public: void __cdecl std::allocator<class google::protobuf::Message const *
   __ptr64>::deallocate(class google::protobuf::Message const * __ptr64 * __ptr64 const,unsigned
   __int64) __ptr64 */

void __thiscall
std::allocator<google::protobuf::Message_const*___ptr64>::deallocate
          (allocator<google::protobuf::Message_const*___ptr64> *this,Message **param_1,
          __uint64 param_2)

{
  Message *pMVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  pMVar1 = (Message *)param_1;
  if (0xfff < uVar2) {
    pMVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pMVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pMVar1,uVar2);
  return;
}

// deallocate @ 14fa78b10

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl std::allocator<class google::protobuf::MapKey>::deallocate(class
   google::protobuf::MapKey * __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<google::protobuf::MapKey>::deallocate
          (allocator<google::protobuf::MapKey> *this,MapKey *param_1,__uint64 param_2)

{
  MapKey *pMVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x18;
  pMVar1 = param_1;
  if (0xfff < uVar2) {
    pMVar1 = *(MapKey **)&param_1[-1].type_;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pMVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pMVar1,uVar2);
  return;
}

// empty @ 14fa78b60

/* public: bool __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::empty(void)const __ptr64 */

bool __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::empty(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
        *this)

{
  return *(longlong *)this == *(longlong *)(this + 8);
}

// end @ 14fa78b80

/* public: class google::protobuf::internal::RepeatedFieldRefIterator<class
   google::protobuf::Message> __cdecl google::protobuf::RepeatedFieldRef<class
   google::protobuf::Message,void>::end(void)const __ptr64 */

void __thiscall
google::protobuf::RepeatedFieldRef<google::protobuf::Message,void>::end
          (RepeatedFieldRef<google::protobuf::Message,void> *this)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *in_RDX;
  
  plVar1 = *(longlong **)(this + 8);
  *in_RDX = *(undefined8 *)this;
  in_RDX[1] = plVar1;
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  in_RDX[2] = uVar2;
  in_RDX[3] = 0;
  return;
}

// end @ 14fa78bc0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::Message const * __ptr64> > > __cdecl std::vector<class
   google::protobuf::Message const * __ptr64,class std::allocator<class google::protobuf::Message
   const * __ptr64> >::end(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::end(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
      *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// end @ 14fa78be0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::MapKey> > > __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::end(void) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::end
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// fixed32 @ 14fa78c00

/* public: unsigned int __cdecl google::protobuf::UnknownField::fixed32(void)const __ptr64 */

uint __thiscall google::protobuf::UnknownField::fixed32(UnknownField *this)

{
  return (this->data_).fixed32;
}

// fixed64 @ 14fa78c10

/* public: unsigned __int64 __cdecl google::protobuf::UnknownField::fixed64(void)const __ptr64 */

__uint64 __thiscall google::protobuf::UnknownField::fixed64(UnknownField *this)

{
  return (this->data_).varint;
}

// get @ 14fa78c20

/* public: static class google::protobuf::Descriptor const * __ptr64 __cdecl
   google::protobuf::internal::MessageDescriptorGetter<class google::protobuf::Message>::get(void)
    */

Descriptor * __cdecl
google::protobuf::internal::MessageDescriptorGetter<google::protobuf::Message>::get(void)

{
  return (Descriptor *)0x0;
}

// length @ 14fa78c30

/* public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::length(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::length
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return (this->_Mypair)._Myval2._Mysize;
}

// max_size @ 14fa78c40

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::Message const * __ptr64> >::max_size(class std::allocator<class
   google::protobuf::Message const * __ptr64> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::Message_const*___ptr64>_>::max_size
          (allocator<google::protobuf::Message_const*___ptr64> *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14fa78c60

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::MapKey> >::max_size(class std::allocator<class google::protobuf::MapKey> const
   & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::MapKey>_>::max_size
          (allocator<google::protobuf::MapKey> *param_1)

{
  return 0xaaaaaaaaaaaaaaa;
}

// max_size @ 14fa78c80

/* public: unsigned __int64 __cdecl std::vector<class google::protobuf::Message const *
   __ptr64,class std::allocator<class google::protobuf::Message const * __ptr64>
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::max_size(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
           *this)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14fa78ca0

/* public: unsigned __int64 __cdecl std::vector<class google::protobuf::MapKey,class
   std::allocator<class google::protobuf::MapKey> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::max_size
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this)

{
  return 0xaaaaaaaaaaaaaaa;
}

// push_back @ 14fa78cc0

/* public: void __cdecl std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64> >::push_back(class
   google::protobuf::FieldDescriptor const * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::push_back(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
            *this,FieldDescriptor **param_1)

{
  FieldDescriptor **ppFVar1;
  
  ppFVar1 = *(FieldDescriptor ***)(this + 8);
  if (ppFVar1 != *(FieldDescriptor ***)(this + 0x10)) {
    *ppFVar1 = *param_1;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    return;
  }
  _Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>(this,ppFVar1,param_1);
  return;
}

// push_back @ 14fa78cf0

/* public: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::push_back(class
   google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::push_back(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
            *this,Message **param_1)

{
  Message **ppMVar1;
  
  ppMVar1 = *(Message ***)(this + 8);
  if (ppMVar1 != *(Message ***)(this + 0x10)) {
    *ppMVar1 = *param_1;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    return;
  }
  _Emplace_reallocate<google::protobuf::Message_const*___ptr64>(this,ppMVar1,param_1);
  return;
}

// push_back @ 14fa78d20

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl std::vector<class google::protobuf::MapKey,class std::allocator<class
   google::protobuf::MapKey> >::push_back(class google::protobuf::MapKey const & __ptr64) __ptr64 */

void __thiscall
std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::push_back
          (vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *this,
          MapKey *param_1)

{
  MapKey *pMVar1;
  ulong64 uVar2;
  undefined4 uVar3;
  
  pMVar1 = *(MapKey **)(this + 8);
  if (pMVar1 != *(MapKey **)(this + 0x10)) {
    uVar2 = (param_1->val_).string_value._Mysize;
    (pMVar1->val_).string_value._Mydata = (param_1->val_).string_value._Mydata;
    (pMVar1->val_).string_value._Mysize = uVar2;
    uVar3 = *(undefined4 *)&param_1->field_0x14;
    pMVar1->type_ = param_1->type_;
    *(undefined4 *)&pMVar1->field_0x14 = uVar3;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x18;
    return;
  }
  _Emplace_reallocate<google::protobuf::MapKey_const&___ptr64>(this,pMVar1,param_1);
  return;
}

// reserve @ 14fa78d50

/* public: void __cdecl std::vector<class google::protobuf::Message const * __ptr64,class
   std::allocator<class google::protobuf::Message const * __ptr64> >::reserve(unsigned __int64)
   __ptr64 */

void __thiscall
std::
vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
::reserve(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
          *this,__uint64 param_1)

{
  __uint64 local_res10 [3];
  
  if ((ulonglong)(*(longlong *)(this + 0x10) - *(longlong *)this >> 3) < param_1) {
    local_res10[0] = param_1;
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    _Reallocate<0>(this,local_res10);
  }
  return;
}

// varint @ 14fa78da0

/* public: unsigned __int64 __cdecl google::protobuf::UnknownField::varint(void)const __ptr64 */

__uint64 __thiscall google::protobuf::UnknownField::varint(UnknownField *this)

{
  return (this->data_).varint;
}

// FUN_15029eec0 @ 15029eec0

void FUN_15029eec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0xa0));
  }
  return;
}

// FUN_15029eef0 @ 15029eef0

void FUN_15029eef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0xb0));
  }
  return;
}

// FUN_15029ef20 @ 15029ef20

/* WARNING: Enum "CppType": Some values do not have unique names */

void FUN_15029ef20(undefined8 param_1,longlong param_2)

{
  std::allocator<google::protobuf::MapKey>::deallocate
            (*(allocator<google::protobuf::MapKey> **)(param_2 + 0x60),*(MapKey **)(param_2 + 0x78),
             *(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15029ef50 @ 15029ef50

void FUN_15029ef50(undefined8 param_1,longlong param_2)

{
  std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>::deallocate
            (*(allocator<google::protobuf::FieldDescriptor_const*___ptr64> **)(param_2 + 0x60),
             *(FieldDescriptor ***)(param_2 + 0x78),*(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15029ef80 @ 15029ef80

void FUN_15029ef80(undefined8 param_1,longlong param_2)

{
  std::allocator<google::protobuf::Message_const*___ptr64>::deallocate
            (*(allocator<google::protobuf::Message_const*___ptr64> **)(param_2 + 0x60),
             *(Message ***)(param_2 + 0x78),*(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15029efd0 @ 15029efd0

void FUN_15029efd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1e8) & 4) != 0) {
    *(uint *)(param_2 + 0x1e8) = *(uint *)(param_2 + 0x1e8) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0xc0));
  }
  return;
}

// FUN_15029f010 @ 15029f010

void FUN_15029f010(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1e8) & 0x20) != 0) {
    *(uint *)(param_2 + 0x1e8) = *(uint *)(param_2 + 0x1e8) & 0xffffffdf;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0xd0));
  }
  return;
}

// FUN_15029f050 @ 15029f050

void FUN_15029f050(undefined8 param_1,longlong param_2)

{
  std::allocator<google::protobuf::Message_const*___ptr64>::deallocate
            (*(allocator<google::protobuf::Message_const*___ptr64> **)(param_2 + 0x40),
             *(Message ***)(param_2 + 0x50),**(__uint64 **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15029f350 @ 15029f350

void FUN_15029f350(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x130));
  }
  return;
}

// FUN_15029f3e0 @ 15029f3e0

void FUN_15029f3e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
    ~vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>
              ((vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> *)
               (param_2 + 0x70));
  }
  return;
}

// FUN_15029f410 @ 15029f410

void FUN_15029f410(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029f440 @ 15029f440

void FUN_15029f440(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_15029f470 @ 15029f470

void FUN_15029f470(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029f4a0 @ 15029f4a0

void FUN_15029f4a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_15029f530 @ 15029f530

void FUN_15029f530(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029f580 @ 15029f580

void FUN_15029f580(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029f5b0 @ 15029f5b0

void FUN_15029f5b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029f5e0 @ 15029f5e0

void FUN_15029f5e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_15029f620 @ 15029f620

void FUN_15029f620(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_15029f660 @ 15029f660

void FUN_15029f660(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 4) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_15029f6a0 @ 15029f6a0

void FUN_15029f6a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::
    vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
    ::
    ~vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
              (*(vector<google::protobuf::Message_const*___ptr64,std::allocator<google::protobuf::Message_const*___ptr64>_>
                 **)(param_2 + 0x88));
  }
  return;
}

// FUN_15029f730 @ 15029f730

void FUN_15029f730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>::
    ~vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_>
              (*(vector<google::protobuf::MapKey,std::allocator<google::protobuf::MapKey>_> **)
                (param_2 + 0xe0));
  }
  return;
}

// FUN_15029f760 @ 15029f760

void FUN_15029f760(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x70));
  }
  return;
}

