// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 141

// pair<char_const*___ptr64,int><std::nullptr_t,int,0> @ 14faba460

/* public: __cdecl std::pair<char const * __ptr64,int>::pair<char const *
   __ptr64,int><std::nullptr_t,int,0>(std::nullptr_t && __ptr64,int && __ptr64) __ptr64 */

pair<char_const*___ptr64,int> * __thiscall
std::pair<char_const*___ptr64,int>::pair<char_const*___ptr64,int><std::nullptr_t,int,0>
          (pair<char_const*___ptr64,int> *this,std__nullptr_t *param_1,int *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(int *)(this + 8) = *param_2;
  return this;
}

// pair<char_const*___ptr64,unsigned_int><std::nullptr_t,int,0> @ 14faba480

/* public: __cdecl std::pair<char const * __ptr64,unsigned int>::pair<char const * __ptr64,unsigned
   int><std::nullptr_t,int,0>(std::nullptr_t && __ptr64,int && __ptr64) __ptr64 */

pair<char_const*___ptr64,unsigned_int> * __thiscall
std::pair<char_const*___ptr64,unsigned_int>::
pair<char_const*___ptr64,unsigned_int><std::nullptr_t,int,0>
          (pair<char_const*___ptr64,unsigned_int> *this,std__nullptr_t *param_1,int *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(int *)(this + 8) = *param_2;
  return this;
}

// pair<char_const*___ptr64,unsigned___int64><std::nullptr_t,int,0> @ 14faba4a0

/* public: __cdecl std::pair<char const * __ptr64,unsigned __int64>::pair<char const *
   __ptr64,unsigned __int64><std::nullptr_t,int,0>(std::nullptr_t && __ptr64,int && __ptr64) __ptr64
    */

pair<char_const*___ptr64,unsigned___int64> * __thiscall
std::pair<char_const*___ptr64,unsigned___int64>::
pair<char_const*___ptr64,unsigned___int64><std::nullptr_t,int,0>
          (pair<char_const*___ptr64,unsigned___int64> *this,std__nullptr_t *param_1,int *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(longlong *)(this + 8) = (longlong)*param_2;
  return this;
}

// pair<char_const*___ptr64,bool><std::nullptr_t,bool,0> @ 14faba4c0

/* public: __cdecl std::pair<char const * __ptr64,bool>::pair<char const *
   __ptr64,bool><std::nullptr_t,bool,0>(std::nullptr_t && __ptr64,bool && __ptr64) __ptr64 */

pair<char_const*___ptr64,bool> * __thiscall
std::pair<char_const*___ptr64,bool>::pair<char_const*___ptr64,bool><std::nullptr_t,bool,0>
          (pair<char_const*___ptr64,bool> *this,std__nullptr_t *param_1,bool *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = (pair<char_const*___ptr64,bool>)*param_2;
  return this;
}

// pair<char_const*___ptr64,bool><char_const*___ptr64&___ptr64,bool,0> @ 14faba4e0

/* public: __cdecl std::pair<char const * __ptr64,bool>::pair<char const * __ptr64,bool><char const
   * __ptr64 & __ptr64,bool,0>(char const * __ptr64 & __ptr64,bool && __ptr64) __ptr64 */

pair<char_const*___ptr64,bool> * __thiscall
std::pair<char_const*___ptr64,bool>::
pair<char_const*___ptr64,bool><char_const*___ptr64&___ptr64,bool,0>
          (pair<char_const*___ptr64,bool> *this,char **param_1,bool *param_2)

{
  *(char **)this = *param_1;
  this[8] = (pair<char_const*___ptr64,bool>)*param_2;
  return this;
}

// pair<char_const*___ptr64,int><char_const*___ptr64,unsigned_int&___ptr64,0> @ 14faba500

/* public: __cdecl std::pair<char const * __ptr64,int>::pair<char const * __ptr64,int><char const *
   __ptr64,unsigned int & __ptr64,0>(char const * __ptr64 && __ptr64,unsigned int & __ptr64) __ptr64
    */

pair<char_const*___ptr64,int> * __thiscall
std::pair<char_const*___ptr64,int>::
pair<char_const*___ptr64,int><char_const*___ptr64,unsigned_int&___ptr64,0>
          (pair<char_const*___ptr64,int> *this,char **param_1,uint *param_2)

{
  *(char **)this = *param_1;
  *(uint *)(this + 8) = *param_2;
  return this;
}

// pair<char_const*___ptr64,unsigned_int><char_const*___ptr64,unsigned_int&___ptr64,0> @ 14faba520

/* public: __cdecl std::pair<char const * __ptr64,unsigned int>::pair<char const * __ptr64,unsigned
   int><char const * __ptr64,unsigned int & __ptr64,0>(char const * __ptr64 && __ptr64,unsigned int
   & __ptr64) __ptr64 */

pair<char_const*___ptr64,unsigned_int> * __thiscall
std::pair<char_const*___ptr64,unsigned_int>::
pair<char_const*___ptr64,unsigned_int><char_const*___ptr64,unsigned_int&___ptr64,0>
          (pair<char_const*___ptr64,unsigned_int> *this,char **param_1,uint *param_2)

{
  *(char **)this = *param_1;
  *(uint *)(this + 8) = *param_2;
  return this;
}

// pair<char_const*___ptr64,unsigned___int64><char_const*___ptr64,unsigned___int64&___ptr64,0> @ 14faba540

/* public: __cdecl std::pair<char const * __ptr64,unsigned __int64>::pair<char const *
   __ptr64,unsigned __int64><char const * __ptr64,unsigned __int64 & __ptr64,0>(char const * __ptr64
   && __ptr64,unsigned __int64 & __ptr64) __ptr64 */

pair<char_const*___ptr64,unsigned___int64> * __thiscall
std::pair<char_const*___ptr64,unsigned___int64>::
pair<char_const*___ptr64,unsigned___int64><char_const*___ptr64,unsigned___int64&___ptr64,0>
          (pair<char_const*___ptr64,unsigned___int64> *this,char **param_1,__uint64 *param_2)

{
  *(char **)this = *param_1;
  *(__uint64 *)(this + 8) = *param_2;
  return this;
}

// operator<<<google::protobuf::RepeatedField<int>*___ptr64,0> @ 14faba560

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<class
   google::protobuf::RepeatedField<int> * __ptr64,0>(class google::protobuf::RepeatedField<int> *
   __ptr64 const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::
operator<<<google::protobuf::RepeatedField<int>*___ptr64,0>
          (LogMessage *this,RepeatedField<int> **param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this_00;
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  this_00 = OstreamView::stream(&local_a8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<google::protobuf::RepeatedField<float>*___ptr64,0> @ 14faba5c0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<class
   google::protobuf::RepeatedField<float> * __ptr64,0>(class google::protobuf::RepeatedField<float>
   * __ptr64 const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::
operator<<<google::protobuf::RepeatedField<float>*___ptr64,0>
          (LogMessage *this,RepeatedField<float> **param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this_00;
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  this_00 = OstreamView::stream(&local_a8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<google::protobuf::RepeatedField<double>*___ptr64,0> @ 14faba620

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<class
   google::protobuf::RepeatedField<double> * __ptr64,0>(class
   google::protobuf::RepeatedField<double> * __ptr64 const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::
operator<<<google::protobuf::RepeatedField<double>*___ptr64,0>
          (LogMessage *this,RepeatedField<double> **param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this_00;
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  this_00 = OstreamView::stream(&local_a8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<google::protobuf::RepeatedField<__int64>*___ptr64,0> @ 14faba680

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<class
   google::protobuf::RepeatedField<__int64> * __ptr64,0>(class
   google::protobuf::RepeatedField<__int64> * __ptr64 const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::
operator<<<google::protobuf::RepeatedField<__int64>*___ptr64,0>
          (LogMessage *this,RepeatedField<__int64> **param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this_00;
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  this_00 = OstreamView::stream(&local_a8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// FUN_14faba6e0 @ 14faba6e0

char * FUN_14faba6e0(EpsCopyInputStream *param_1,char *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)&param_1->buffer_end_ - (int)param_2) + 0x10;
  do {
    if (param_1->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_4,param_2,
               (longlong)iVar2);
    param_3 = param_3 - iVar2;
    if (param_1->limit_ < 0x11) {
      return (char *)0x0;
    }
    param_2 = google::protobuf::internal::EpsCopyInputStream::NextBuffer(param_1,0,-1);
    if (param_2 == (char *)0x0) {
      param_1->last_tag_minus_1_ = 1;
      param_1->limit_end_ = param_1->buffer_end_;
      return (char *)0x0;
    }
    iVar2 = ((int)param_2 - *(int *)&param_1->buffer_end_) + param_1->limit_;
    param_1->limit_ = iVar2;
    iVar1 = 0;
    if (iVar2 < 0) {
      iVar1 = iVar2;
    }
    param_2 = param_2 + 0x10;
    iVar2 = ((int)param_1->buffer_end_ - (int)param_2) + 0x10;
    param_1->limit_end_ = param_1->buffer_end_ + iVar1;
  } while (iVar2 < param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_4,param_2,
             (longlong)param_3);
  return param_2 + param_3;
}

// FUN_14faba7b0 @ 14faba7b0

char * FUN_14faba7b0(EpsCopyInputStream *param_1,char *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)&param_1->buffer_end_ - (int)param_2) + 0x10;
  do {
    if (param_1->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_4,param_2,
               (longlong)iVar2);
    param_3 = param_3 - iVar2;
    if (param_1->limit_ < 0x11) {
      return (char *)0x0;
    }
    param_2 = google::protobuf::internal::EpsCopyInputStream::NextBuffer(param_1,0,-1);
    if (param_2 == (char *)0x0) {
      param_1->last_tag_minus_1_ = 1;
      param_1->limit_end_ = param_1->buffer_end_;
      return (char *)0x0;
    }
    iVar2 = ((int)param_2 - *(int *)&param_1->buffer_end_) + param_1->limit_;
    param_1->limit_ = iVar2;
    iVar1 = 0;
    if (iVar2 < 0) {
      iVar1 = iVar2;
    }
    param_2 = param_2 + 0x10;
    iVar2 = ((int)param_1->buffer_end_ - (int)param_2) + 0x10;
    param_1->limit_end_ = param_1->buffer_end_ + iVar1;
  } while (iVar2 < param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_4,param_2,
             (longlong)param_3);
  return param_2 + param_3;
}

// FUN_14faba880 @ 14faba880

char * FUN_14faba880(EpsCopyInputStream *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&param_1->buffer_end_ - param_2) + 0x10;
  do {
    if ((param_1->next_chunk_ == (char *)0x0) || (param_3 = param_3 - iVar3, param_1->limit_ < 0x11)
       ) {
      return (char *)0x0;
    }
    pcVar1 = google::protobuf::internal::EpsCopyInputStream::NextBuffer(param_1,0,-1);
    if (pcVar1 == (char *)0x0) {
      param_1->last_tag_minus_1_ = 1;
      param_1->limit_end_ = param_1->buffer_end_;
      return (char *)0x0;
    }
    iVar3 = (param_1->limit_ - *(int *)&param_1->buffer_end_) + (int)pcVar1;
    param_1->limit_ = iVar3;
    iVar2 = 0;
    if (iVar3 < 0) {
      iVar2 = iVar3;
    }
    iVar3 = ((int)param_1->buffer_end_ - (int)(pcVar1 + 0x10)) + 0x10;
    param_1->limit_end_ = param_1->buffer_end_ + iVar2;
  } while (iVar3 < param_3);
  return pcVar1 + 0x10 + param_3;
}

// FUN_14faba930 @ 14faba930

char * FUN_14faba930(EpsCopyInputStream *param_1,char *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  iVar2 = (*(int *)&param_1->buffer_end_ - (int)param_2) + 0x10;
  do {
    if (param_1->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    local_28._Mysize = (ulong64)iVar2;
    local_28._Mydata = param_2;
    absl::lts_20240722::Cord::InlineRep::AppendArray((InlineRep *)*param_4,&local_28,kAppendString);
    param_3 = param_3 - iVar2;
    if (param_1->limit_ < 0x11) {
      return (char *)0x0;
    }
    param_2 = google::protobuf::internal::EpsCopyInputStream::NextBuffer(param_1,0,-1);
    if (param_2 == (char *)0x0) {
      param_1->last_tag_minus_1_ = 1;
      param_1->limit_end_ = param_1->buffer_end_;
      return (char *)0x0;
    }
    iVar2 = ((int)param_2 - *(int *)&param_1->buffer_end_) + param_1->limit_;
    param_1->limit_ = iVar2;
    iVar1 = 0;
    if (iVar2 < 0) {
      iVar1 = iVar2;
    }
    param_2 = param_2 + 0x10;
    iVar2 = ((int)param_1->buffer_end_ - (int)param_2) + 0x10;
    param_1->limit_end_ = param_1->buffer_end_ + iVar1;
  } while (iVar2 < param_3);
  local_28._Mydata = param_2;
  local_28._Mysize = (longlong)param_3;
  absl::lts_20240722::Cord::InlineRep::AppendArray((InlineRep *)*param_4,&local_28,kAppendString);
  return param_2 + param_3;
}

// FieldParser<google::protobuf::internal::UnknownFieldLiteParserHelper> @ 14fabaa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* char const * __ptr64 __cdecl google::protobuf::internal::FieldParser<class
   google::protobuf::internal::UnknownFieldLiteParserHelper>(unsigned __int64,class
   google::protobuf::internal::UnknownFieldLiteParserHelper & __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FieldParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
          (__uint64 param_1,UnknownFieldLiteParserHelper *param_2,char *param_3,
          ParseContext *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  LogMessage *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  int iVar9;
  __uint64 _Var10;
  char *pcVar11;
  int iVar12;
  undefined1 auStackY_98 [32];
  <lambda_1> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58;
  LogMessageFatal local_48;
  char *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pcVar11 = (char *)0x0;
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  iVar12 = (int)(param_1 >> 3);
  if (iVar12 != 0) {
    switch((uint)param_1 & 7) {
    case 0:
      pcVar11 = VarintParse<unsigned___int64>(param_3,(__uint64 *)&local_38);
      if (pcVar11 != (char *)0x0) {
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return pcVar11;
        }
        WriteVarint((ulonglong)(uint)(iVar12 * 8),
                    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
        WriteVarint((__uint64)local_38,
                    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
        return pcVar11;
      }
      break;
    case 1:
      pcVar11 = *(char **)param_3;
      pcVar7 = param_3 + 8;
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return pcVar7;
      }
      WriteVarint((ulonglong)(iVar12 * 8 + 1),
                  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
      pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2;
      uVar3 = (pbVar8->_Mypair)._Myval2._Mysize;
      uVar4 = (pbVar8->_Mypair)._Myval2._Myres;
      if (7 < uVar4 - uVar3) {
        (pbVar8->_Mypair)._Myval2._Mysize = uVar3 + 8;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar8->_Mypair)._Myval2._Bx._Ptr;
        }
        *(char **)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = pcVar11;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 8] = '\0';
        return pcVar7;
      }
      local_38 = pcVar11;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                (pbVar8,8,local_68,(char *)&local_38,8);
      return pcVar7;
    case 2:
      local_38 = param_3;
      uVar6 = ReadSize(&local_38);
      pcVar7 = local_38;
      _Var10 = (__uint64)(int)uVar6;
      if (local_38 != (char *)0x0) {
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          iVar12 = ((int)param_4->_padding_ - (int)local_38) + 0x10;
          if (iVar12 < (int)uVar6) {
            do {
              if (param_4->_padding_ == 0) goto LAB_14fabac39;
              uVar6 = (int)_Var10 - iVar12;
              _Var10 = (__uint64)uVar6;
              if (*(int *)((longlong)&param_4->_padding_ + 4) < 0x11) goto LAB_14fabac39;
              pcVar7 = EpsCopyInputStream::NextBuffer((EpsCopyInputStream *)param_4,0,-1);
              if (pcVar7 == (char *)0x0) {
                *(undefined4 *)&param_4->_padding_ = 1;
                param_4->_padding_ = param_4->_padding_;
                goto LAB_14fabac39;
              }
              iVar9 = (*(int *)((longlong)&param_4->_padding_ + 4) - (int)param_4->_padding_) +
                      (int)pcVar7;
              *(int *)((longlong)&param_4->_padding_ + 4) = iVar9;
              iVar12 = 0;
              if (iVar9 < 0) {
                iVar12 = iVar9;
              }
              param_4->_padding_ = (longlong)iVar12 + param_4->_padding_;
              iVar12 = ((int)param_4->_padding_ - (int)(pcVar7 + 0x10)) + 0x10;
            } while (iVar12 < (int)uVar6);
            pcVar11 = pcVar7 + 0x10 + (int)uVar6;
          }
          else {
            pcVar11 = local_38 + _Var10;
          }
        }
        else {
          WriteVarint((ulonglong)(iVar12 * 8 + 2),
                      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
          WriteVarint(_Var10,*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                              param_2);
          pcVar11 = EpsCopyInputStream::AppendString
                              ((EpsCopyInputStream *)param_4,pcVar7,uVar6,
                               *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                                param_2);
        }
LAB_14fabac39:
        if (pcVar11 != (char *)0x0) {
          return pcVar11;
        }
      }
      break;
    case 3:
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        WriteVarint((ulonglong)(iVar12 * 8 + 3),
                    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
      }
      piVar1 = &param_4->depth_;
      *piVar1 = *piVar1 + -1;
      if (-1 < *piVar1) {
        param_4->group_depth_ = param_4->group_depth_ + 1;
        pcVar11 = WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                            (param_2,param_3,param_4);
        param_4->group_depth_ = param_4->group_depth_ + -1;
        param_4->depth_ = param_4->depth_ + 1;
        lVar5 = param_4->_padding_;
        *(undefined4 *)&param_4->_padding_ = 0;
        if (((int)lVar5 == iVar12 * 8 + 3) && (pcVar11 != (char *)0x0)) {
          if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return pcVar11;
          }
          WriteVarint((ulonglong)(iVar12 * 8 + 4),
                      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
          return pcVar11;
        }
      }
      break;
    case 4:
      this = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       (&local_48,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                        ,0x523);
      local_38 = (char *)CONCAT44(local_38._4_4_,1);
      local_58._Mydata = "Can\'t happen";
      local_58._Mysize = 0xc;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_58);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_48);
    case 5:
      uVar2 = *(undefined4 *)param_3;
      pcVar11 = param_3 + 4;
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return pcVar11;
      }
      WriteVarint((ulonglong)(iVar12 * 8 + 5),
                  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2);
      local_38 = (char *)CONCAT44(local_38._4_4_,uVar2);
      pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)param_2;
      uVar3 = (pbVar8->_Mypair)._Myval2._Mysize;
      uVar4 = (pbVar8->_Mypair)._Myval2._Myres;
      if (uVar4 - uVar3 < 4) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                  (pbVar8,4,local_68,(char *)&local_38,4);
        return pcVar11;
      }
      (pbVar8->_Mypair)._Myval2._Mysize = uVar3 + 4;
      if (0xf < uVar4) {
        pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar8->_Mypair)._Myval2._Bx._Ptr;
      }
      *(undefined4 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = uVar2;
      (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 4] = '\0';
      return pcVar11;
    }
  }
  return (char *)0x0;
}

// FixedParser<int> @ 14fabadd0

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<int>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<int>(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<int>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// FixedParser<unsigned_int> @ 14fabae20

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<unsigned int>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<unsigned_int>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<unsigned_int>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// FixedParser<float> @ 14fabae70

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<float>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<float>(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<float>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// FixedParser<double> @ 14fabaec0

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<double>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<double>(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<double>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// FixedParser<__int64> @ 14fabaf10

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<__int64>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<__int64>(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<__int64>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// FixedParser<unsigned___int64> @ 14fabaf60

/* char const * __ptr64 __cdecl google::protobuf::internal::FixedParser<unsigned __int64>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FixedParser<unsigned___int64>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<unsigned___int64>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// ParseGroupInlined<`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'::`2'::<lambda_1>_> @ 14fabafb0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ParseContext::ParseGroupInlined<class `public: char const * __ptr64
   __cdecl google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned int,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1> >(char const * __ptr64,unsigned int,class `public: char const * __ptr64
   __cdecl google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned int,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1> const & __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::
ParseGroupInlined<_public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64_::_2_::<lambda_1>_>
          (ParseContext *this,char *param_1,uint param_2,<lambda_1> *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  
  piVar1 = &this->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    this->group_depth_ = this->group_depth_ + 1;
    pcVar3 = WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                       (*(UnknownFieldLiteParserHelper **)param_3,param_1,
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

// ReadPackedFixed<int> @ 14fabb010

/* WARNING: Removing unreachable block (ram,0x00014fabb361) */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<int>(char const *
   __ptr64,int,class google::protobuf::RepeatedField<int> * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<int>
          (EpsCopyInputStream *this,char *param_1,int param_2,RepeatedField<int> *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  LogMessage *this_00;
  basic_ostream<char,std::char_traits<char>_> *this_01;
  int *piVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_f8;
  int local_e8 [2];
  LogMessageFatal local_e0;
  OstreamView local_c8;
  
  if (param_1 == (char *)0x0) {
LAB_14fabb197:
    pcVar12 = (char *)0x0;
  }
  else {
    pcVar12 = this->buffer_end_ + (0x10 - (longlong)param_1);
    if ((int)pcVar12 < param_2) {
      do {
        local_res10[0] = 0;
        iVar9 = 2;
        iVar5 = RepeatedField<int>::size(param_3);
        iVar3 = (int)((ulonglong)(longlong)(int)pcVar12 >> 2);
        uVar1 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        bVar8 = (bool)(~((byte)uVar1 >> 2) & 1);
        if (bVar8 == false) {
          iVar9 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        }
        piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
        if (iVar9 < iVar5 + iVar3) {
          if (bVar8 == false) {
            uVar10 = *piVar7;
          }
          else {
            uVar10 = (uint)uVar1 & 3;
          }
          RepeatedField<int>::Grow(param_3,bVar8,uVar10,iVar5 + iVar3);
        }
        uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        if ((~((byte)uVar2 >> 2) & 1) == 0) {
          piVar11 = (int *)(uVar2 & 0xfffffffffffffff8);
          uVar10 = *piVar7;
          *piVar7 = *piVar7 + iVar3;
        }
        else {
          uVar10 = (uint)uVar2 & 3;
          (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
               uVar2 & 0xfffffffffffffff8 | (longlong)(int)(iVar3 + uVar10);
          piVar11 = piVar7;
        }
        memcpy(piVar11 + (int)uVar10,param_1,(longlong)(iVar3 * 4));
        param_2 = param_2 + iVar3 * -4;
        piVar7 = &this->limit_;
        if (*piVar7 < 0x11) goto LAB_14fabb197;
        pcVar6 = NextBuffer(this,0,-1);
        if (pcVar6 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabb197;
        }
        *piVar7 = *piVar7 + ((int)pcVar6 - *(int *)&this->buffer_end_);
        local_res10[0] = 0;
        piVar11 = local_res10;
        if (*piVar7 < 0) {
          piVar11 = piVar7;
        }
        this->limit_end_ = this->buffer_end_ + *piVar11;
        param_1 = pcVar6 + ((iVar3 * 4 - (int)pcVar12) + 0x10);
        uVar10 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
        pcVar12 = (char *)(ulonglong)uVar10;
      } while ((int)uVar10 < param_2);
    }
    local_res10[0] = 0;
    iVar9 = 2;
    iVar3 = (int)((ulonglong)(longlong)param_2 >> 2);
    iVar5 = iVar3 * 4;
    if (iVar3 == 0) {
      pcVar12 = (char *)0x0;
      if (param_2 == 0) {
        pcVar12 = param_1;
      }
    }
    else {
      uVar1 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      uVar10 = (uint)uVar1 & 3;
      bVar8 = (bool)(~((byte)uVar1 >> 2) & 1);
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar4 = uVar10;
      if (bVar8 == false) {
        iVar9 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        uVar4 = *piVar7;
      }
      if (iVar9 < (int)(uVar4 + iVar3)) {
        if (bVar8 == false) {
          uVar10 = *piVar7;
        }
        RepeatedField<int>::Grow(param_3,bVar8,uVar10,uVar4 + iVar3);
      }
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar2 >> 2) & 1) == 0) {
        piVar11 = (int *)(uVar2 & 0xfffffffffffffff8);
        uVar10 = *piVar7;
        (param_3->soo_rep_).field0_0x0.long_rep.size = *piVar7 + iVar3;
      }
      else {
        uVar10 = (uint)uVar2 & 3;
        (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar2 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar2 & 3) + iVar3);
        piVar11 = piVar7;
      }
      if (piVar11 + (int)uVar10 == (int *)0x0) {
        local_f8._Mydata = "dst != nullptr";
        local_f8._Mysize = 0xe;
        this_00 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_e0,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                             ,0x4b3,&local_f8);
        local_res10[0] = 1;
        absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                  (&local_c8,(this_00->data_)._Mypair._Myval2);
        this_01 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_c8);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_01,param_3);
        absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_c8);
        local_f8._Mydata = ",";
        local_f8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_f8);
        local_e8[0] = iVar3;
        absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(this_00,local_e8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e0);
      }
      memcpy(piVar11 + (int)uVar10,param_1,(longlong)iVar5);
      pcVar12 = param_1 + iVar5;
      if (param_2 != iVar5) {
        pcVar12 = (char *)0x0;
      }
    }
  }
  return pcVar12;
}

// ReadPackedFixed<float> @ 14fabb380

/* WARNING: Removing unreachable block (ram,0x00014fabb6d1) */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<float>(char const *
   __ptr64,int,class google::protobuf::RepeatedField<float> * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<float>
          (EpsCopyInputStream *this,char *param_1,int param_2,RepeatedField<float> *param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  LogMessage *this_00;
  basic_ostream<char,std::char_traits<char>_> *this_01;
  int *piVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_f8;
  int local_e8 [2];
  LogMessageFatal local_e0;
  OstreamView local_c8;
  
  if (param_1 == (char *)0x0) {
LAB_14fabb507:
    pcVar12 = (char *)0x0;
  }
  else {
    pcVar12 = this->buffer_end_ + (0x10 - (longlong)param_1);
    if ((int)pcVar12 < param_2) {
      do {
        local_res10[0] = 0;
        iVar9 = 2;
        iVar5 = RepeatedField<float>::size(param_3);
        iVar3 = (int)((ulonglong)(longlong)(int)pcVar12 >> 2);
        uVar1 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        bVar8 = (bool)(~((byte)uVar1 >> 2) & 1);
        if (bVar8 == false) {
          iVar9 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        }
        piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
        if (iVar9 < iVar5 + iVar3) {
          if (bVar8 == false) {
            uVar10 = *piVar7;
          }
          else {
            uVar10 = (uint)uVar1 & 3;
          }
          RepeatedField<float>::Grow(param_3,bVar8,uVar10,iVar5 + iVar3);
        }
        uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        if ((~((byte)uVar2 >> 2) & 1) == 0) {
          piVar11 = (int *)(uVar2 & 0xfffffffffffffff8);
          uVar10 = *piVar7;
          *piVar7 = *piVar7 + iVar3;
        }
        else {
          uVar10 = (uint)uVar2 & 3;
          (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
               uVar2 & 0xfffffffffffffff8 | (longlong)(int)(iVar3 + uVar10);
          piVar11 = piVar7;
        }
        memcpy(piVar11 + (int)uVar10,param_1,(longlong)(iVar3 * 4));
        param_2 = param_2 + iVar3 * -4;
        piVar7 = &this->limit_;
        if (*piVar7 < 0x11) goto LAB_14fabb507;
        pcVar6 = NextBuffer(this,0,-1);
        if (pcVar6 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabb507;
        }
        *piVar7 = *piVar7 + ((int)pcVar6 - *(int *)&this->buffer_end_);
        local_res10[0] = 0;
        piVar11 = local_res10;
        if (*piVar7 < 0) {
          piVar11 = piVar7;
        }
        this->limit_end_ = this->buffer_end_ + *piVar11;
        param_1 = pcVar6 + ((iVar3 * 4 - (int)pcVar12) + 0x10);
        uVar10 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
        pcVar12 = (char *)(ulonglong)uVar10;
      } while ((int)uVar10 < param_2);
    }
    local_res10[0] = 0;
    iVar9 = 2;
    iVar3 = (int)((ulonglong)(longlong)param_2 >> 2);
    iVar5 = iVar3 * 4;
    if (iVar3 == 0) {
      pcVar12 = (char *)0x0;
      if (param_2 == 0) {
        pcVar12 = param_1;
      }
    }
    else {
      uVar1 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      uVar10 = (uint)uVar1 & 3;
      bVar8 = (bool)(~((byte)uVar1 >> 2) & 1);
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar4 = uVar10;
      if (bVar8 == false) {
        iVar9 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        uVar4 = *piVar7;
      }
      if (iVar9 < (int)(uVar4 + iVar3)) {
        if (bVar8 == false) {
          uVar10 = *piVar7;
        }
        RepeatedField<float>::Grow(param_3,bVar8,uVar10,uVar4 + iVar3);
      }
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar2 >> 2) & 1) == 0) {
        piVar11 = (int *)(uVar2 & 0xfffffffffffffff8);
        uVar10 = *piVar7;
        (param_3->soo_rep_).field0_0x0.long_rep.size = *piVar7 + iVar3;
      }
      else {
        uVar10 = (uint)uVar2 & 3;
        (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar2 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar2 & 3) + iVar3);
        piVar11 = piVar7;
      }
      if (piVar11 + (int)uVar10 == (int *)0x0) {
        local_f8._Mydata = "dst != nullptr";
        local_f8._Mysize = 0xe;
        this_00 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_e0,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                             ,0x4b3,&local_f8);
        local_res10[0] = 1;
        absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                  (&local_c8,(this_00->data_)._Mypair._Myval2);
        this_01 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_c8);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_01,param_3);
        absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_c8);
        local_f8._Mydata = ",";
        local_f8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_f8);
        local_e8[0] = iVar3;
        absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(this_00,local_e8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e0);
      }
      memcpy(piVar11 + (int)uVar10,param_1,(longlong)iVar5);
      pcVar12 = param_1 + iVar5;
      if (param_2 != iVar5) {
        pcVar12 = (char *)0x0;
      }
    }
  }
  return pcVar12;
}

// ReadPackedFixed<double> @ 14fabb6f0

/* WARNING: Removing unreachable block (ram,0x00014fabba44) */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<double>(char const *
   __ptr64,int,class google::protobuf::RepeatedField<double> * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<double>
          (EpsCopyInputStream *this,char *param_1,int param_2,RepeatedField<double> *param_3)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  LogMessage *this_00;
  basic_ostream<char,std::char_traits<char>_> *this_01;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_f8;
  int local_e8 [2];
  LogMessageFatal local_e0;
  OstreamView local_c8;
  
  if (param_1 == (char *)0x0) {
LAB_14fabb896:
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = this->buffer_end_ + (0x10 - (longlong)param_1);
    if ((int)pcVar11 < param_2) {
      do {
        local_res10[0] = 0;
        iVar4 = RepeatedField<double>::size(param_3);
        iVar12 = (int)((ulonglong)(longlong)(int)pcVar11 >> 3);
        uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        bVar8 = (bool)(~((byte)uVar2 >> 2) & 1);
        iVar5 = 1;
        if (bVar8 == false) {
          iVar5 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        }
        piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
        if (iVar5 < iVar4 + iVar12) {
          if (bVar8 == false) {
            uVar9 = *piVar7;
          }
          else {
            uVar9 = (uint)uVar2 & 3;
          }
          RepeatedField<double>::Grow(param_3,bVar8,uVar9,iVar4 + iVar12);
        }
        uVar3 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        if ((~((byte)uVar3 >> 2) & 1) == 0) {
          piVar10 = (int *)(uVar3 & 0xfffffffffffffff8);
          uVar9 = *piVar7;
          *piVar7 = *piVar7 + iVar12;
        }
        else {
          uVar9 = (uint)uVar3 & 3;
          (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
               uVar3 & 0xfffffffffffffff8 | (longlong)(int)(iVar12 + uVar9);
          piVar10 = piVar7;
        }
        memcpy(piVar10 + (longlong)(int)uVar9 * 2,param_1,(longlong)(iVar12 * 8));
        param_2 = param_2 + iVar12 * -8;
        piVar7 = &this->limit_;
        if (*piVar7 < 0x11) goto LAB_14fabb896;
        pcVar6 = NextBuffer(this,0,-1);
        if (pcVar6 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabb896;
        }
        *piVar7 = *piVar7 + ((int)pcVar6 - *(int *)&this->buffer_end_);
        local_res10[0] = 0;
        piVar10 = local_res10;
        if (*piVar7 < 0) {
          piVar10 = piVar7;
        }
        this->limit_end_ = this->buffer_end_ + *piVar10;
        param_1 = pcVar6 + ((iVar12 * 8 - (int)pcVar11) + 0x10);
        uVar9 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
        pcVar11 = (char *)(ulonglong)uVar9;
      } while ((int)uVar9 < param_2);
    }
    local_res10[0] = 0;
    iVar5 = (int)((ulonglong)(longlong)param_2 >> 3);
    iVar12 = iVar5 * 8;
    if (iVar5 == 0) {
      pcVar11 = (char *)0x0;
      if (param_2 == 0) {
        pcVar11 = param_1;
      }
    }
    else {
      uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      uVar9 = (uint)uVar2 & 3;
      bVar8 = (bool)(~((byte)uVar2 >> 2) & 1);
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      if (bVar8 == false) {
        uVar1 = *piVar7;
        iVar4 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
      }
      else {
        iVar4 = 1;
        uVar1 = uVar9;
      }
      if (iVar4 < (int)(uVar1 + iVar5)) {
        if (bVar8 == false) {
          uVar9 = *piVar7;
        }
        RepeatedField<double>::Grow(param_3,bVar8,uVar9,uVar1 + iVar5);
      }
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar3 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar3 >> 2) & 1) == 0) {
        piVar10 = (int *)(uVar3 & 0xfffffffffffffff8);
        uVar9 = *piVar7;
        (param_3->soo_rep_).field0_0x0.long_rep.size = *piVar7 + iVar5;
      }
      else {
        uVar9 = (uint)uVar3 & 3;
        (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar3 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar3 & 3) + iVar5);
        piVar10 = piVar7;
      }
      if (piVar10 + (longlong)(int)uVar9 * 2 == (int *)0x0) {
        local_f8._Mydata = "dst != nullptr";
        local_f8._Mysize = 0xe;
        this_00 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_e0,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                             ,0x4b3,&local_f8);
        local_res10[0] = 1;
        absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                  (&local_c8,(this_00->data_)._Mypair._Myval2);
        this_01 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_c8);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_01,param_3);
        absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_c8);
        local_f8._Mydata = ",";
        local_f8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_f8);
        local_e8[0] = iVar5;
        absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(this_00,local_e8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e0);
      }
      memcpy(piVar10 + (longlong)(int)uVar9 * 2,param_1,(longlong)iVar12);
      pcVar11 = param_1 + iVar12;
      if (param_2 != iVar12) {
        pcVar11 = (char *)0x0;
      }
    }
  }
  return pcVar11;
}

// ReadPackedFixed<__int64> @ 14fabba60

/* WARNING: Removing unreachable block (ram,0x00014fabbdb4) */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<__int64>(char const *
   __ptr64,int,class google::protobuf::RepeatedField<__int64> * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadPackedFixed<__int64>
          (EpsCopyInputStream *this,char *param_1,int param_2,RepeatedField<__int64> *param_3)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  LogMessage *this_00;
  basic_ostream<char,std::char_traits<char>_> *this_01;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_f8;
  int local_e8 [2];
  LogMessageFatal local_e0;
  OstreamView local_c8;
  
  if (param_1 == (char *)0x0) {
LAB_14fabbc06:
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = this->buffer_end_ + (0x10 - (longlong)param_1);
    if ((int)pcVar11 < param_2) {
      do {
        local_res10[0] = 0;
        iVar4 = RepeatedField<__int64>::size(param_3);
        iVar12 = (int)((ulonglong)(longlong)(int)pcVar11 >> 3);
        uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        bVar8 = (bool)(~((byte)uVar2 >> 2) & 1);
        iVar5 = 1;
        if (bVar8 == false) {
          iVar5 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
        }
        piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
        if (iVar5 < iVar4 + iVar12) {
          if (bVar8 == false) {
            uVar9 = *piVar7;
          }
          else {
            uVar9 = (uint)uVar2 & 3;
          }
          RepeatedField<__int64>::Grow(param_3,bVar8,uVar9,iVar4 + iVar12);
        }
        uVar3 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
        if ((~((byte)uVar3 >> 2) & 1) == 0) {
          piVar10 = (int *)(uVar3 & 0xfffffffffffffff8);
          uVar9 = *piVar7;
          *piVar7 = *piVar7 + iVar12;
        }
        else {
          uVar9 = (uint)uVar3 & 3;
          (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
               uVar3 & 0xfffffffffffffff8 | (longlong)(int)(iVar12 + uVar9);
          piVar10 = piVar7;
        }
        memcpy(piVar10 + (longlong)(int)uVar9 * 2,param_1,(longlong)(iVar12 * 8));
        param_2 = param_2 + iVar12 * -8;
        piVar7 = &this->limit_;
        if (*piVar7 < 0x11) goto LAB_14fabbc06;
        pcVar6 = NextBuffer(this,0,-1);
        if (pcVar6 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabbc06;
        }
        *piVar7 = *piVar7 + ((int)pcVar6 - *(int *)&this->buffer_end_);
        local_res10[0] = 0;
        piVar10 = local_res10;
        if (*piVar7 < 0) {
          piVar10 = piVar7;
        }
        this->limit_end_ = this->buffer_end_ + *piVar10;
        param_1 = pcVar6 + ((iVar12 * 8 - (int)pcVar11) + 0x10);
        uVar9 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
        pcVar11 = (char *)(ulonglong)uVar9;
      } while ((int)uVar9 < param_2);
    }
    local_res10[0] = 0;
    iVar5 = (int)((ulonglong)(longlong)param_2 >> 3);
    iVar12 = iVar5 * 8;
    if (iVar5 == 0) {
      pcVar11 = (char *)0x0;
      if (param_2 == 0) {
        pcVar11 = param_1;
      }
    }
    else {
      uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      uVar9 = (uint)uVar2 & 3;
      bVar8 = (bool)(~((byte)uVar2 >> 2) & 1);
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      if (bVar8 == false) {
        uVar1 = *piVar7;
        iVar4 = (param_3->soo_rep_).field0_0x0.long_rep.capacity;
      }
      else {
        iVar4 = 1;
        uVar1 = uVar9;
      }
      if (iVar4 < (int)(uVar1 + iVar5)) {
        if (bVar8 == false) {
          uVar9 = *piVar7;
        }
        RepeatedField<__int64>::Grow(param_3,bVar8,uVar9,uVar1 + iVar5);
      }
      piVar7 = &(param_3->soo_rep_).field0_0x0.long_rep.size;
      uVar3 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar3 >> 2) & 1) == 0) {
        piVar10 = (int *)(uVar3 & 0xfffffffffffffff8);
        uVar9 = *piVar7;
        (param_3->soo_rep_).field0_0x0.long_rep.size = *piVar7 + iVar5;
      }
      else {
        uVar9 = (uint)uVar3 & 3;
        (param_3->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar3 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar3 & 3) + iVar5);
        piVar10 = piVar7;
      }
      if (piVar10 + (longlong)(int)uVar9 * 2 == (int *)0x0) {
        local_f8._Mydata = "dst != nullptr";
        local_f8._Mysize = 0xe;
        this_00 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_e0,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                             ,0x4b3,&local_f8);
        local_res10[0] = 1;
        absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                  (&local_c8,(this_00->data_)._Mypair._Myval2);
        this_01 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_c8);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_01,param_3);
        absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_c8);
        local_f8._Mydata = ",";
        local_f8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_f8);
        local_e8[0] = iVar5;
        absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(this_00,local_e8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e0);
      }
      memcpy(piVar10 + (longlong)(int)uVar9 * 2,param_1,(longlong)iVar12);
      pcVar11 = param_1 + iVar12;
      if (param_2 != iVar12) {
        pcVar11 = (char *)0x0;
      }
    }
  }
  return pcVar11;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabbdd0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void
   * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabbdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const
   * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char
   const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const
   * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char
   const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabbee6:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabbee6;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabbee6;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabbee6;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabbee6;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabbf70

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void
   * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabbf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const
   * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char
   const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const
   * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char
   const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc086:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc086;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc086;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc086;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc086;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc110

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabc130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1> >(char const * __ptr64,class `char const *
   __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc226:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc226;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc226;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc226;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc226;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc2b0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabc2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc3c6:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc3c6;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc3c6;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc3c6;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc3c6;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc450

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc566:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc566;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc566;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc566;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc566;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc5f0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabc610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1> >(char const * __ptr64,class `char const *
   __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc706:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc706;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc706;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc706;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc706;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc790

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (void)

{
  char *pcVar1;
  
  pcVar1 = ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ();
  return pcVar1;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fabc7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class
   `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>,class `public: char const *
   __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char
   const * __ptr64 __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>
   >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,char *param_1,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  char *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = param_1;
  uVar1 = ReadSize(local_68);
  if (local_68[0] == (char *)0x0) {
LAB_14fabc8a6:
    pcVar5 = (char *)0x0;
  }
  else {
    iVar6 = *(int *)&this->buffer_end_ - (int)local_68[0];
    pcVar3 = local_68[0];
    if (iVar6 < (int)uVar1) {
      do {
        pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                           (pcVar3,this->buffer_end_,param_3);
        if (pcVar3 == (char *)0x0) goto LAB_14fabc8a6;
        iVar7 = (int)pcVar3 - *(int *)&this->buffer_end_;
        if ((int)(uVar1 - iVar6) < 0x11) {
          local_48 = 0;
          local_40 = 0;
          local_58 = *(undefined8 *)this->buffer_end_;
          uStack_50 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_58 + (longlong)(int)(uVar1 - iVar6));
          pcVar3 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                             ((longlong)&local_58 + (longlong)iVar7,pcVar5,param_3);
          if ((pcVar3 != (char *)0x0) && (pcVar3 == pcVar5)) {
            return pcVar3 + ((longlong)this->buffer_end_ - (longlong)&local_58);
          }
          goto LAB_14fabc8a6;
        }
        uVar1 = uVar1 - (iVar7 + iVar6);
        if (this->limit_ < 0x11) goto LAB_14fabc8a6;
        pcVar3 = NextBuffer(this,0,-1);
        if (pcVar3 == (char *)0x0) {
          this->last_tag_minus_1_ = 1;
          this->limit_end_ = this->buffer_end_;
          goto LAB_14fabc8a6;
        }
        iVar6 = ((int)pcVar3 - *(int *)&this->buffer_end_) + this->limit_;
        this->limit_ = iVar6;
        iVar2 = 0;
        if (iVar6 < 0) {
          iVar2 = iVar6;
        }
        pcVar3 = pcVar3 + iVar7;
        iVar6 = (int)this->buffer_end_ - (int)pcVar3;
        this->limit_end_ = this->buffer_end_ + iVar2;
      } while (iVar6 < (int)uVar1);
    }
    pcVar4 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
                       (pcVar3,pcVar3 + (int)uVar1,param_3);
    pcVar5 = (char *)0x0;
    if (pcVar3 + (int)uVar1 == pcVar4) {
      pcVar5 = pcVar4;
    }
  }
  return pcVar5;
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabc930

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<int> *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    pbVar2 = param_1 + 1;
    uVar3 = (ulonglong)*param_1;
    if ((char)*param_1 < '\0') {
      uVar1 = 7;
      uVar4 = 1;
      do {
        uVar3 = uVar3 + ((ulonglong)*pbVar2 - 1 << ((byte)uVar1 & 0x3f));
        if ((ulonglong)*pbVar2 < 0x80) {
          pbVar2 = param_1 + (ulonglong)uVar4 + 1;
          goto LAB_14fabc9a5;
        }
        uVar4 = uVar4 + 1;
        uVar1 = uVar1 + 7;
        pbVar2 = pbVar2 + 1;
      } while (uVar1 < 0x46);
      pbVar2 = (byte *)0x0;
      uVar3 = 0;
    }
LAB_14fabc9a5:
    if (pbVar2 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<int>::Add(param_3,(uint)(uVar3 >> 1) & 0x7fffffff ^ -((uint)uVar3 & 1));
    param_1 = pbVar2;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabca00

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<int> *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    bVar1 = *param_1;
    pbVar3 = param_1 + 1;
    uVar6 = (ulonglong)bVar1;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar2 = 7;
      uVar4 = 1;
      do {
        uVar6 = uVar6 + ((ulonglong)*pbVar3 - 1 << ((byte)uVar2 & 0x3f));
        uVar5 = (uint)uVar6;
        if ((ulonglong)*pbVar3 < 0x80) {
          pbVar3 = param_1 + (ulonglong)uVar4 + 1;
          goto LAB_14fabca75;
        }
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 + 7;
        pbVar3 = pbVar3 + 1;
      } while (uVar2 < 0x46);
      pbVar3 = (byte *)0x0;
      uVar5 = 0;
    }
LAB_14fabca75:
    if (pbVar3 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<int>::Add(param_3,uVar5);
    param_1 = pbVar3;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabcac0

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>
   >(char const * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<unsigned_int> *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    bVar1 = *param_1;
    pbVar3 = param_1 + 1;
    uVar6 = (ulonglong)bVar1;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar2 = 7;
      uVar4 = 1;
      do {
        uVar6 = uVar6 + ((ulonglong)*pbVar3 - 1 << ((byte)uVar2 & 0x3f));
        uVar5 = (uint)uVar6;
        if ((ulonglong)*pbVar3 < 0x80) {
          pbVar3 = param_1 + (ulonglong)uVar4 + 1;
          goto LAB_14fabcb35;
        }
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 + 7;
        pbVar3 = pbVar3 + 1;
      } while (uVar2 < 0x46);
      pbVar3 = (byte *)0x0;
      uVar5 = 0;
    }
LAB_14fabcb35:
    if (pbVar3 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<unsigned_int>::Add(param_3,uVar5);
    param_1 = pbVar3;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabcb80

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<__int64> *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    pbVar2 = param_1 + 1;
    uVar3 = (ulonglong)*param_1;
    if ((char)*param_1 < '\0') {
      uVar1 = 7;
      uVar4 = 1;
      do {
        uVar3 = uVar3 + ((ulonglong)*pbVar2 - 1 << ((byte)uVar1 & 0x3f));
        if ((ulonglong)*pbVar2 < 0x80) {
          pbVar2 = param_1 + (ulonglong)uVar4 + 1;
          goto LAB_14fabcbf5;
        }
        uVar4 = uVar4 + 1;
        uVar1 = uVar1 + 7;
        pbVar2 = pbVar2 + 1;
      } while (uVar1 < 0x46);
      pbVar2 = (byte *)0x0;
      uVar3 = 0;
    }
LAB_14fabcbf5:
    if (pbVar2 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<__int64>::Add(param_3,uVar3 >> 1 ^ -(ulonglong)((uint)uVar3 & 1));
    param_1 = pbVar2;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabcc50

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<__int64> *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    pbVar2 = param_1 + 1;
    uVar4 = (ulonglong)*param_1;
    if ((char)*param_1 < '\0') {
      uVar1 = 7;
      uVar3 = 1;
      do {
        uVar4 = uVar4 + ((ulonglong)*pbVar2 - 1 << ((byte)uVar1 & 0x3f));
        if ((ulonglong)*pbVar2 < 0x80) {
          pbVar2 = param_1 + (ulonglong)uVar3 + 1;
          goto LAB_14fabccc5;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + 7;
        pbVar2 = pbVar2 + 1;
      } while (uVar1 < 0x46);
      pbVar2 = (byte *)0x0;
      uVar4 = 0;
    }
LAB_14fabccc5:
    if (pbVar2 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<__int64>::Add(param_3,uVar4);
    param_1 = pbVar2;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabcd10

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1> >(char const * __ptr64,char const * __ptr64,class `char const *
   __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<unsigned___int64> *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    pbVar2 = param_1 + 1;
    uVar4 = (ulonglong)*param_1;
    if ((char)*param_1 < '\0') {
      uVar1 = 7;
      uVar3 = 1;
      do {
        uVar4 = uVar4 + ((ulonglong)*pbVar2 - 1 << ((byte)uVar1 & 0x3f));
        if ((ulonglong)*pbVar2 < 0x80) {
          pbVar2 = param_1 + (ulonglong)uVar3 + 1;
          goto LAB_14fabcd85;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + 7;
        pbVar2 = pbVar2 + 1;
      } while (uVar1 < 0x46);
      pbVar2 = (byte *)0x0;
      uVar4 = 0;
    }
LAB_14fabcd85:
    if (pbVar2 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<unsigned___int64>::Add(param_3,uVar4);
    param_1 = pbVar2;
  } while( true );
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_> @ 14fabcdd0

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,RepeatedField<bool> *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  do {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    pbVar2 = param_1 + 1;
    uVar4 = (ulonglong)*param_1;
    if ((char)*param_1 < '\0') {
      uVar1 = 7;
      uVar3 = 1;
      do {
        uVar4 = uVar4 + ((ulonglong)*pbVar2 - 1 << ((byte)uVar1 & 0x3f));
        if ((ulonglong)*pbVar2 < 0x80) {
          pbVar2 = param_1 + (ulonglong)uVar3 + 1;
          goto LAB_14fabce45;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + 7;
        pbVar2 = pbVar2 + 1;
      } while (uVar1 < 0x46);
      pbVar2 = (byte *)0x0;
      uVar4 = 0;
    }
LAB_14fabce45:
    if (pbVar2 == (byte *)0x0) {
      return (char *)0x0;
    }
    RepeatedField<bool>::Add(param_3,uVar4 != 0);
    param_1 = pbVar2;
  } while( true );
}

// VarintParser<int,1> @ 14fabce90

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<int,1>(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<int,0> @ 14fabceb0

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<int,0>(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<unsigned_int,0> @ 14fabced0

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<unsigned_int,0>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<__int64,1> @ 14fabcef0

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,1>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<__int64,1>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<__int64,0> @ 14fabcf10

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<__int64,0>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<__int64,0>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<unsigned___int64,0> @ 14fabcf30

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<unsigned___int64,0>
          (void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// VarintParser<bool,0> @ 14fabcf50

/* char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::VarintParser<bool,0>(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper> @ 14fabcf70

/* char const * __ptr64 __cdecl google::protobuf::internal::WireFormatParser<class
   google::protobuf::internal::UnknownFieldLiteParserHelper>(class
   google::protobuf::internal::UnknownFieldLiteParserHelper & __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::
WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
          (UnknownFieldLiteParserHelper *param_1,char *param_2,ParseContext *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  
  do {
    iVar4 = param_3->group_depth_;
    if ((byte *)param_3->_padding_ <= param_2) {
      iVar7 = (int)param_2 - (int)param_3->_padding_;
      iVar1 = *(int *)((longlong)&param_3->_padding_ + 4);
      if (iVar7 == iVar1) {
        if (iVar7 < 1) {
          return (char *)(byte *)param_2;
        }
        if (param_3->_padding_ == 0) {
          return (char *)0x0;
        }
        return (char *)(byte *)param_2;
      }
      if (iVar1 <= iVar7) {
        return (char *)0x0;
      }
      do {
        pcVar5 = EpsCopyInputStream::NextBuffer((EpsCopyInputStream *)param_3,iVar7,iVar4);
        if (pcVar5 == (char *)0x0) {
          if (iVar7 != 0) {
            return (char *)0x0;
          }
          param_3->_padding_ = param_3->_padding_;
          *(undefined4 *)&param_3->_padding_ = 1;
          return (char *)param_3->_padding_;
        }
        param_2 = pcVar5 + iVar7;
        uVar8 = ((int)pcVar5 - (int)param_3->_padding_) +
                *(int *)((longlong)&param_3->_padding_ + 4);
        iVar7 = (int)param_2 - (int)param_3->_padding_;
        *(uint *)((longlong)&param_3->_padding_ + 4) = uVar8;
      } while (-1 < iVar7);
      uVar6 = 0;
      if ((int)uVar8 < 0) {
        uVar6 = uVar8;
      }
      param_3->_padding_ = (longlong)(int)uVar6 + param_3->_padding_;
    }
    bVar2 = *param_2;
    pbVar9 = (byte *)(param_2 + 1);
    uVar8 = (uint)bVar2;
    if (0x7f < bVar2) {
      bVar3 = *pbVar9;
      pbVar9 = (byte *)(param_2 + 2);
      uVar8 = (bVar2 - 0x80) + (uint)bVar3 * 0x80;
      if (0x7f < bVar3) {
        uVar6 = 0xe;
        uVar10 = 2;
        do {
          uVar8 = uVar8 + (*pbVar9 - 1 << ((byte)uVar6 & 0x1f));
          if (*pbVar9 < 0x80) {
            pbVar9 = (byte *)(param_2 + (ulonglong)uVar10 + 1);
            goto LAB_14fabd065;
          }
          uVar10 = uVar10 + 1;
          uVar6 = uVar6 + 7;
          pbVar9 = pbVar9 + 1;
        } while (uVar6 < 0x23);
        pbVar9 = (byte *)0x0;
        uVar8 = 0;
      }
    }
LAB_14fabd065:
    if (pbVar9 == (byte *)0x0) {
      return (char *)0x0;
    }
    if ((uVar8 == 0) || (((byte)uVar8 & 7) == 4)) {
      *(uint *)&param_3->_padding_ = uVar8 - 1;
      return (char *)pbVar9;
    }
    param_2 = FieldParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                        ((ulonglong)uVar8,param_1,(char *)pbVar9,param_3);
    if ((byte *)param_2 == (byte *)0x0) {
      return (char *)0x0;
    }
  } while( true );
}

// <lambda_1> @ 14fabd0f0

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64
   const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd100

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64
   const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd110

/* public: __cdecl `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64 const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd120

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64
   const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd130

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64
   const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd140

/* public: __cdecl `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64 const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd150

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::<lambda_1>(void * __ptr64
   const & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,void **param_1)

{
  *(void **)this = *param_1;
  return this;
}

// <lambda_1> @ 14fabd170

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class
   google::protobuf::internal::UnknownFieldLiteParserHelper * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,UnknownFieldLiteParserHelper *param_1,ParseContext **param_2)

{
  *(UnknownFieldLiteParserHelper **)this = param_1;
  *(ParseContext ***)(this + 8) = param_2;
  return this;
}

// UnknownFieldLiteParserHelper @ 14fabd1b0

/* public: __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::UnknownFieldLiteParserHelper(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

UnknownFieldLiteParserHelper * __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::UnknownFieldLiteParserHelper
          (UnknownFieldLiteParserHelper *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
  return this;
}

// operator() @ 14fabd1c0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,1>(void
   * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd1d0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<int,0>(void
   * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd1e0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned int,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd1f0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd200

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd210

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<unsigned __int64,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>) __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd220

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1> >(char const
   * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// operator() @ 14fabd230

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::operator()(unsigned
   __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<int>::Add
            (*(RepeatedField<int> **)this,(uint)param_1 >> 1 ^ -((uint)param_1 & 1));
  return;
}

// operator() @ 14fabd250

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<int,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::operator()(unsigned
   __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<int>::Add(*(RepeatedField<int> **)this,(int)param_1);
  return;
}

// operator() @ 14fabd260

/* public: __cdecl `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   int,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>::operator()(unsigned __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<unsigned_int>::Add
            (*(RepeatedField<unsigned_int> **)this,(uint)param_1);
  return;
}

// operator() @ 14fabd270

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,1>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::operator()(unsigned
   __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<__int64>::Add
            (*(RepeatedField<__int64> **)this,param_1 >> 1 ^ -(ulonglong)((uint)param_1 & 1));
  return;
}

// operator() @ 14fabd290

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<__int64,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::operator()(unsigned
   __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<__int64>::Add(*(RepeatedField<__int64> **)this,param_1);
  return;
}

// operator() @ 14fabd2a0

/* public: __cdecl `char const * __ptr64 __cdecl google::protobuf::internal::VarintParser<unsigned
   __int64,0>(void * __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext *
   __ptr64)'::`2'::<lambda_1>::operator()(unsigned __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<unsigned___int64>::Add
            (*(RepeatedField<unsigned___int64> **)this,param_1);
  return;
}

// operator() @ 14fabd2b0

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::VarintParser<bool,0>(void * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64)'::`2'::<lambda_1>::operator()(unsigned
   __int64)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  google::protobuf::RepeatedField<bool>::Add(*(RepeatedField<bool> **)this,param_1 != 0);
  return;
}

// operator() @ 14fabd2f0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1>::operator()(char const * __ptr64)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,char *param_1)

{
  google::protobuf::internal::
  WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
            (*(UnknownFieldLiteParserHelper **)this,param_1,
             (ParseContext *)**(undefined8 **)(this + 8));
  return;
}

// FUN_14fabd340 @ 14fabd340

void FUN_14fabd340(undefined8 *param_1,char *param_2,int param_3)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = (ulong64)param_3;
  local_18._Mydata = param_2;
  absl::lts_20240722::Cord::InlineRep::AppendArray((InlineRep *)*param_1,&local_18,kAppendString);
  return;
}

// AddFixed32 @ 14fabd370

/* public: void __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::AddFixed32(unsigned int,unsigned int)
   __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::AddFixed32
          (UnknownFieldLiteParserHelper *this,uint param_1,uint param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  <lambda_1> <Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  uint local_res8 [2];
  
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    WriteVarint((ulonglong)(param_1 * 8 + 5),
                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
    this_00 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this;
    uVar1 = (this_00->_Mypair)._Myval2._Myres;
    uVar2 = (this_00->_Mypair)._Myval2._Mysize;
    if (3 < uVar1 - uVar2) {
      (this_00->_Mypair)._Myval2._Mysize = uVar2 + 4;
      if (0xf < uVar1) {
        this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (this_00->_Mypair)._Myval2._Bx._Ptr;
      }
      *(uint *)((longlong)&(this_00->_Mypair)._Myval2._Bx + uVar2) = param_2;
      (this_00->_Mypair)._Myval2._Bx._Buf[uVar2 + 4] = '\0';
      return;
    }
    local_res8[0]._0_1_ = SUB41(param_2,0);
    <Var3 = local_res8[0]._0_1_;
    local_res8[0] = param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (this_00,4,<Var3,(char *)local_res8,4);
  }
  return;
}

// AddFixed64 @ 14fabd410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::AddFixed64(unsigned int,unsigned
   __int64) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::AddFixed64
          (UnknownFieldLiteParserHelper *this,uint param_1,__uint64 param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  undefined1 auStackY_58 [32];
  <lambda_1> local_28;
  __uint64 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    WriteVarint((ulonglong)(param_1 * 8 + 1),
                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
    this_00 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this;
    uVar1 = (this_00->_Mypair)._Myval2._Myres;
    uVar2 = (this_00->_Mypair)._Myval2._Mysize;
    if (uVar1 - uVar2 < 8) {
      local_20 = param_2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                (this_00,8,local_28,(char *)&local_20,8);
    }
    else {
      (this_00->_Mypair)._Myval2._Mysize = uVar2 + 8;
      if (0xf < uVar1) {
        this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (this_00->_Mypair)._Myval2._Bx._Ptr;
      }
      *(__uint64 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + uVar2) = param_2;
      (this_00->_Mypair)._Myval2._Bx._Buf[uVar2 + 8] = '\0';
    }
  }
  return;
}

// AddNAlreadyReserved @ 14fabd4c0

/* public: int * __ptr64 __cdecl google::protobuf::RepeatedField<int>::AddNAlreadyReserved(int)
   __ptr64 */

int * __thiscall
google::protobuf::RepeatedField<int>::AddNAlreadyReserved(RepeatedField<int> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    uVar3 = (uint)uVar2 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (longlong)(int)(uVar3 + param_1) | uVar2 & 0xfffffffffffffff8;
    return (int *)((longlong)&(this->soo_rep_).field0_0x0 + (longlong)(int)uVar3 * 4 + 8);
  }
  iVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
  (this->soo_rep_).field0_0x0.long_rep.size = (this->soo_rep_).field0_0x0.long_rep.size + param_1;
  return (int *)((uVar2 & 0xfffffffffffffff8) + (longlong)iVar1 * 4);
}

// AddNAlreadyReserved @ 14fabd520

/* public: float * __ptr64 __cdecl google::protobuf::RepeatedField<float>::AddNAlreadyReserved(int)
   __ptr64 */

float * __thiscall
google::protobuf::RepeatedField<float>::AddNAlreadyReserved(RepeatedField<float> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    uVar3 = (uint)uVar2 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (longlong)(int)(uVar3 + param_1) | uVar2 & 0xfffffffffffffff8;
    return (float *)((longlong)&(this->soo_rep_).field0_0x0 + (longlong)(int)uVar3 * 4 + 8);
  }
  iVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
  (this->soo_rep_).field0_0x0.long_rep.size = (this->soo_rep_).field0_0x0.long_rep.size + param_1;
  return (float *)((uVar2 & 0xfffffffffffffff8) + (longlong)iVar1 * 4);
}

// AddNAlreadyReserved @ 14fabd580

/* public: double * __ptr64 __cdecl
   google::protobuf::RepeatedField<double>::AddNAlreadyReserved(int) __ptr64 */

double * __thiscall
google::protobuf::RepeatedField<double>::AddNAlreadyReserved
          (RepeatedField<double> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    uVar3 = (uint)uVar2 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (longlong)(int)(uVar3 + param_1) | uVar2 & 0xfffffffffffffff8;
    return (double *)((longlong)&(this->soo_rep_).field0_0x0 + (longlong)(int)uVar3 * 8 + 8);
  }
  iVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
  (this->soo_rep_).field0_0x0.long_rep.size = (this->soo_rep_).field0_0x0.long_rep.size + param_1;
  return (double *)((uVar2 & 0xfffffffffffffff8) + (longlong)iVar1 * 8);
}

// AddNAlreadyReserved @ 14fabd5e0

/* public: __int64 * __ptr64 __cdecl
   google::protobuf::RepeatedField<__int64>::AddNAlreadyReserved(int) __ptr64 */

__int64 * __thiscall
google::protobuf::RepeatedField<__int64>::AddNAlreadyReserved
          (RepeatedField<__int64> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    uVar3 = (uint)uVar2 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (longlong)(int)(uVar3 + param_1) | uVar2 & 0xfffffffffffffff8;
    return (__int64 *)((longlong)&(this->soo_rep_).field0_0x0 + (longlong)(int)uVar3 * 8 + 8);
  }
  iVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
  (this->soo_rep_).field0_0x0.long_rep.size = (this->soo_rep_).field0_0x0.long_rep.size + param_1;
  return (__int64 *)((uVar2 & 0xfffffffffffffff8) + (longlong)iVar1 * 8);
}

// AddVarint @ 14fabd640

/* public: void __cdecl google::protobuf::internal::UnknownFieldLiteParserHelper::AddVarint(unsigned
   int,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::AddVarint
          (UnknownFieldLiteParserHelper *this,uint param_1,__uint64 param_2)

{
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    WriteVarint((ulonglong)(param_1 * 8),
                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
    WriteVarint(param_2,*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
  }
  return;
}

// Append @ 14fabd690

/* public: void __cdecl absl::lts_20240722::Cord::Append(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::Append
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  InlineRep::AppendArray(&this->contents_,&local_18,kAppendString);
  return;
}

// AppendString @ 14fabd6c0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::AppendString(char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::AppendString
          (EpsCopyInputStream *this,char *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  ulong64 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined1 local_res18;
  
  uVar6 = (ulong64)param_2;
  if (param_2 <= (*(int *)&this->buffer_end_ - (int)param_1) + 0x10) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_3,param_1,uVar6);
    return param_1 + uVar6;
  }
  if ((longlong)uVar6 <=
      (longlong)(this->buffer_end_ + ((longlong)this->limit_ - (longlong)param_1))) {
    uVar1 = (param_3->_Mypair)._Myval2._Mysize;
    if (50000000 < param_2) {
      param_2 = 50000000;
    }
    if ((param_3->_Mypair)._Myval2._Myres < uVar1 + (longlong)param_2) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
                (param_3,(longlong)param_2,local_res18);
      (param_3->_Mypair)._Myval2._Mysize = uVar1;
    }
  }
  iVar4 = (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
  do {
    if (this->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_3,param_1,(longlong)iVar4);
    uVar5 = (int)uVar6 - iVar4;
    uVar6 = (ulong64)uVar5;
    if (this->limit_ < 0x11) {
      return (char *)0x0;
    }
    pcVar3 = NextBuffer(this,0,-1);
    if (pcVar3 == (char *)0x0) {
      this->last_tag_minus_1_ = 1;
      this->limit_end_ = this->buffer_end_;
      return (char *)0x0;
    }
    iVar4 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar3;
    this->limit_ = iVar4;
    iVar2 = 0;
    if (iVar4 < 0) {
      iVar2 = iVar4;
    }
    param_1 = pcVar3 + 0x10;
    iVar4 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
    this->limit_end_ = this->buffer_end_ + iVar2;
  } while (iVar4 < (int)uVar5);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,param_1,(longlong)(int)uVar5);
  return param_1 + (int)uVar5;
}

// AppendStringFallback @ 14fabd810

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::AppendStringFallback(char const *
   __ptr64,int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   > * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::AppendStringFallback
          (EpsCopyInputStream *this,char *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  ulong64 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res18;
  
  uVar6 = (ulonglong)param_2;
  if ((longlong)uVar6 <=
      (longlong)(this->buffer_end_ + ((longlong)this->limit_ - (longlong)param_1))) {
    uVar1 = (param_3->_Mypair)._Myval2._Mysize;
    if (50000000 < param_2) {
      param_2 = 50000000;
    }
    if ((param_3->_Mypair)._Myval2._Myres < (longlong)param_2 + uVar1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
                (param_3,(longlong)param_2,local_res18);
      (param_3->_Mypair)._Myval2._Mysize = uVar1;
    }
  }
  iVar4 = (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
  do {
    if (this->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_3,param_1,(longlong)iVar4);
    uVar5 = (int)uVar6 - iVar4;
    uVar6 = (ulonglong)uVar5;
    if (this->limit_ < 0x11) {
      return (char *)0x0;
    }
    pcVar3 = NextBuffer(this,0,-1);
    if (pcVar3 == (char *)0x0) {
      this->last_tag_minus_1_ = 1;
      this->limit_end_ = this->buffer_end_;
      return (char *)0x0;
    }
    iVar4 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar3;
    this->limit_ = iVar4;
    iVar2 = 0;
    if (iVar4 < 0) {
      iVar2 = iVar4;
    }
    param_1 = pcVar3 + 0x10;
    iVar4 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
    this->limit_end_ = this->buffer_end_ + iVar2;
  } while (iVar4 < (int)uVar5);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,param_1,(longlong)(int)uVar5);
  return param_1 + (int)uVar5;
}

// DoneFallback @ 14fabd920

/* private: struct std::pair<char const * __ptr64,bool> __cdecl
   google::protobuf::internal::EpsCopyInputStream::DoneFallback(int,int) __ptr64 */

longlong * __thiscall
google::protobuf::internal::EpsCopyInputStream::DoneFallback
          (EpsCopyInputStream *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 in_register_00000014;
  longlong *plVar4;
  int iVar5;
  int in_R9D;
  
  plVar4 = (longlong *)CONCAT44(in_register_00000014,param_1);
  if (this->limit_ < param_2) {
    *plVar4 = 0;
    *(undefined1 *)(plVar4 + 1) = 1;
  }
  else {
    do {
      pcVar2 = NextBuffer(this,param_2,in_R9D);
      if (pcVar2 == (char *)0x0) {
        *(undefined1 *)(plVar4 + 1) = 1;
        if (param_2 != 0) {
          *plVar4 = 0;
          return plVar4;
        }
        pcVar2 = this->buffer_end_;
        *plVar4 = (longlong)pcVar2;
        this->last_tag_minus_1_ = 1;
        goto LAB_14fabd9af;
      }
      lVar3 = (longlong)param_2;
      iVar1 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar2;
      this->limit_ = iVar1;
      param_2 = (int)(pcVar2 + lVar3) - *(int *)&this->buffer_end_;
    } while (-1 < param_2);
    *plVar4 = (longlong)(pcVar2 + lVar3);
    *(undefined1 *)(plVar4 + 1) = 0;
    iVar5 = 0;
    if (iVar1 < 0) {
      iVar5 = iVar1;
    }
    pcVar2 = this->buffer_end_ + iVar5;
LAB_14fabd9af:
    this->limit_end_ = pcVar2;
  }
  return plVar4;
}

// Guard @ 14fabd9d0

/* public: static class google::protobuf::RepeatedField<int> * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<class google::protobuf::RepeatedField<int> *
   __ptr64>::Guard(class google::protobuf::RepeatedField<int> * __ptr64 const & __ptr64) */

RepeatedField<int> ** __cdecl
absl::lts_20240722::log_internal::NullGuard<google::protobuf::RepeatedField<int>*___ptr64>::Guard
          (RepeatedField<int> **param_1)

{
  return param_1;
}

// Guard @ 14fabd9e0

/* public: static class google::protobuf::RepeatedField<float> * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<class google::protobuf::RepeatedField<float> *
   __ptr64>::Guard(class google::protobuf::RepeatedField<float> * __ptr64 const & __ptr64) */

RepeatedField<float> ** __cdecl
absl::lts_20240722::log_internal::NullGuard<google::protobuf::RepeatedField<float>*___ptr64>::Guard
          (RepeatedField<float> **param_1)

{
  return param_1;
}

// Guard @ 14fabd9f0

/* public: static class google::protobuf::RepeatedField<double> * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<class google::protobuf::RepeatedField<double> *
   __ptr64>::Guard(class google::protobuf::RepeatedField<double> * __ptr64 const & __ptr64) */

RepeatedField<double> ** __cdecl
absl::lts_20240722::log_internal::NullGuard<google::protobuf::RepeatedField<double>*___ptr64>::Guard
          (RepeatedField<double> **param_1)

{
  return param_1;
}

// Guard @ 14fabda00

/* public: static class google::protobuf::RepeatedField<__int64> * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<class google::protobuf::RepeatedField<__int64> *
   __ptr64>::Guard(class google::protobuf::RepeatedField<__int64> * __ptr64 const & __ptr64) */

RepeatedField<__int64> ** __cdecl
absl::lts_20240722::log_internal::NullGuard<google::protobuf::RepeatedField<__int64>*___ptr64>::
Guard(RepeatedField<__int64> **param_1)

{
  return param_1;
}

// InitFrom @ 14fabda10

/* protected: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::InitFrom(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::InitFrom
          (EpsCopyInputStream *this,ZeroCopyInputStream *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  int local_res8 [2];
  char *local_res10;
  
  this->zcis_ = param_1;
  pcVar2 = this->patch_buffer_;
  this->limit_ = 0x7fffffff;
  cVar1 = (**(code **)((longlong)*param_1 + 8))(param_1,&local_res10,local_res8);
  if (cVar1 == '\0') {
    this->buffer_end_ = pcVar2;
    this->overall_limit_ = 0;
    this->next_chunk_ = (char *)0x0;
    this->size_ = 0;
    this->limit_end_ = pcVar2;
  }
  else {
    _Size = (size_t)local_res8[0];
    this->overall_limit_ = this->overall_limit_ - local_res8[0];
    this->next_chunk_ = pcVar2;
    if (local_res8[0] < 0x11) {
      this->buffer_end_ = this->patch_buffer_ + 0x10;
      this->limit_end_ = this->patch_buffer_ + 0x10;
      memcpy((void *)((longlong)this + (0x48 - _Size)),local_res10,_Size);
      return (char *)((longlong)this + (0x48 - _Size));
    }
    this->limit_ = this->limit_ + (0x10 - local_res8[0]);
    this->buffer_end_ = local_res10 + (_Size - 0x10);
    this->limit_end_ = local_res10 + (_Size - 0x10);
    pcVar2 = local_res10;
    if (this->aliasing_ == 1) {
      this->aliasing_ = 2;
      return local_res10;
    }
  }
  return pcVar2;
}

// InlineGreedyStringParser @ 14fabdaf0

/* char const * __ptr64 __cdecl google::protobuf::internal::InlineGreedyStringParser(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::InlineGreedyStringParser
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2,
          ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  if (local_res10[0] == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2 = EpsCopyInputStream::ReadString
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// Next @ 14fabdb50

/* private: char const * __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::Next(void)
   __ptr64 */

char * __thiscall google::protobuf::internal::EpsCopyInputStream::Next(EpsCopyInputStream *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = NextBuffer(this,0,-1);
  if (pcVar1 == (char *)0x0) {
    this->limit_end_ = this->buffer_end_;
    this->last_tag_minus_1_ = 1;
    return (char *)0x0;
  }
  iVar2 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar1;
  this->limit_ = iVar2;
  iVar3 = 0;
  if (iVar2 < 0) {
    iVar3 = iVar2;
  }
  this->limit_end_ = this->buffer_end_ + iVar3;
  return pcVar1;
}

// NextBuffer @ 14fabdbc0

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::NextBuffer(int,int) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::NextBuffer
          (EpsCopyInputStream *this,int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  char *_Dst;
  char *pcVar6;
  char *local_res8;
  
  pcVar6 = this->next_chunk_;
  if (pcVar6 == (char *)0x0) {
    return (char *)0x0;
  }
  _Dst = this->patch_buffer_;
  if (pcVar6 == _Dst) {
    memmove(_Dst,this->buffer_end_,0x10);
    if ((this->overall_limit_ < 1) ||
       ((-1 < param_2 && (bVar4 = ParseEndsInSlopRegion(_Dst,param_1,param_2), bVar4)))) {
LAB_14fabdcd7:
      if (this->aliasing_ == 2) {
        this->aliasing_ = (ulong64)(this->buffer_end_ + (-0x28 - (longlong)this));
      }
      this->next_chunk_ = (char *)0x0;
      this->buffer_end_ = this->patch_buffer_ + 0x10;
      this->size_ = 0;
    }
    else {
      do {
        cVar5 = (**(code **)((longlong)*this->zcis_ + 8))(this->zcis_,&local_res8,&this->size_);
        if (cVar5 == '\0') {
          this->overall_limit_ = 0;
          goto LAB_14fabdcd7;
        }
        iVar1 = this->size_;
        this->overall_limit_ = this->overall_limit_ - iVar1;
        if (0x10 < iVar1) {
          pcVar6 = this->patch_buffer_ + 0x10;
          uVar2 = *(undefined8 *)local_res8;
          uVar3 = *(undefined8 *)(local_res8 + 8);
          this->next_chunk_ = local_res8;
          *(undefined8 *)pcVar6 = uVar2;
          *(undefined8 *)(this->patch_buffer_ + 0x18) = uVar3;
          goto LAB_14fabdca9;
        }
      } while (iVar1 < 1);
      memcpy(this->patch_buffer_ + 0x10,local_res8,(longlong)iVar1);
      this->next_chunk_ = _Dst;
      pcVar6 = this->patch_buffer_ + this->size_;
LAB_14fabdca9:
      this->buffer_end_ = pcVar6;
      if (1 < this->aliasing_) {
        this->aliasing_ = 1;
      }
    }
  }
  else {
    this->next_chunk_ = _Dst;
    this->buffer_end_ = pcVar6 + (longlong)this->size_ + -0x10;
    _Dst = pcVar6;
    if (this->aliasing_ == 1) {
      this->aliasing_ = 2;
    }
  }
  return _Dst;
}

// PackedBoolParser @ 14fabdd20

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedBoolParser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedBoolParser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<bool,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedDoubleParser @ 14fabdd40

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedDoubleParser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedDoubleParser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<double>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedEnumParser @ 14fabdd90

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedEnumParser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedFixed32Parser @ 14fabddb0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedFixed32Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedFixed32Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<unsigned_int>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedFixed64Parser @ 14fabde00

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedFixed64Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedFixed64Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<unsigned___int64>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedFloatParser @ 14fabde50

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedFloatParser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedFloatParser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<float>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedInt32Parser @ 14fabdea0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedInt32Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedInt32Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedInt64Parser @ 14fabdec0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedInt64Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedInt64Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedSFixed32Parser @ 14fabdee0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedSFixed32Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedSFixed32Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<int>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedSFixed64Parser @ 14fabdf30

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedSFixed64Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedSFixed64Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = ReadSize(local_res10);
  pcVar2 = EpsCopyInputStream::ReadPackedFixed<__int64>
                     ((EpsCopyInputStream *)param_3,local_res10[0],uVar1,param_1);
  return pcVar2;
}

// PackedSInt32Parser @ 14fabdf80

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedSInt32Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedSInt32Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<int,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedSInt64Parser @ 14fabdfa0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedSInt64Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedSInt64Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<__int64,1>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedUInt32Parser @ 14fabdfc0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedUInt32Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedUInt32Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned_int,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// PackedUInt64Parser @ 14fabdfe0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedUInt64Parser(void * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::PackedUInt64Parser(void *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  undefined1 local_res8;
  
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::VarintParser<unsigned___int64,0>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,param_2,param_1,local_res8);
  return pcVar1;
}

// ParseEndsInSlopRegion @ 14fabe000

/* private: static bool __cdecl
   google::protobuf::internal::EpsCopyInputStream::ParseEndsInSlopRegion(char const *
   __ptr64,int,int) */

bool __cdecl
google::protobuf::internal::EpsCopyInputStream::ParseEndsInSlopRegion
          (char *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar1 = (byte *)(param_1 + 0x10);
  pbVar5 = (byte *)(param_1 + param_2);
  if (pbVar5 < pbVar1) {
    do {
      bVar2 = *pbVar5;
      uVar4 = (uint)bVar2;
      if (bVar2 < 0x80) {
        pbVar6 = pbVar5 + 1;
      }
      else {
        pbVar6 = pbVar5 + 2;
        uVar4 = (bVar2 - 0x80) + (uint)pbVar5[1] * 0x80;
        if (0x7f < pbVar5[1]) {
          uVar3 = 0xe;
          uVar7 = 2;
          do {
            uVar4 = uVar4 + (*pbVar6 - 1 << ((byte)uVar3 & 0x1f));
            if (*pbVar6 < 0x80) {
              pbVar6 = pbVar5 + (ulonglong)uVar7 + 1;
              goto LAB_14fabe0a3;
            }
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 + 7;
            pbVar6 = pbVar6 + 1;
          } while (uVar3 < 0x23);
          uVar4 = 0;
          pbVar6 = (byte *)0x0;
        }
      }
LAB_14fabe0a3:
      pbVar5 = pbVar6;
      if (pbVar5 == (byte *)0x0) {
        return false;
      }
      if (pbVar1 < pbVar5) {
        return false;
      }
      if (uVar4 == 0) {
        return true;
      }
      switch(uVar4 & 7) {
      case 0:
        if ((char)*pbVar5 < '\0') {
          uVar4 = 1;
          pbVar6 = pbVar5;
          do {
            pbVar6 = pbVar6 + 1;
            if (*pbVar6 < 0x80) {
              pbVar5 = pbVar5 + (ulonglong)uVar4 + 1;
              goto LAB_14fabe0fd;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 10);
          pbVar5 = (byte *)0x0;
        }
        else {
          pbVar5 = pbVar5 + 1;
        }
LAB_14fabe0fd:
        if (pbVar5 == (byte *)0x0) {
          return false;
        }
        break;
      case 1:
        pbVar5 = pbVar5 + 8;
        break;
      case 2:
        uVar4 = (uint)*pbVar5;
        if (*pbVar5 < 0x80) {
          pbVar5 = pbVar5 + 1;
        }
        else {
          uVar3 = 7;
          uVar7 = 1;
          pbVar6 = pbVar5;
          do {
            pbVar6 = pbVar6 + 1;
            uVar4 = uVar4 + (*pbVar6 - 1 << ((byte)uVar3 & 0x1f));
            if (*pbVar6 < 0x80) {
              pbVar5 = pbVar5 + (ulonglong)uVar7 + 1;
              goto LAB_14fabe1a3;
            }
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 + 7;
          } while (uVar3 < 0x1c);
          if (pbVar5[4] < 8) {
            uVar4 = (pbVar5[4] + 0xf) * 0x10000000 + uVar4;
            if (uVar4 < 0x7ffffff0) {
              pbVar5 = pbVar5 + 5;
            }
            else {
              pbVar5 = (byte *)0x0;
              uVar4 = 0;
            }
          }
          else {
            pbVar5 = (byte *)0x0;
            uVar4 = 0;
          }
        }
LAB_14fabe1a3:
        if (pbVar5 == (byte *)0x0) {
          return false;
        }
        if ((longlong)pbVar1 - (longlong)pbVar5 < (longlong)(int)uVar4) {
          return false;
        }
        pbVar5 = pbVar5 + (int)uVar4;
        break;
      case 3:
        param_3 = param_3 + 1;
        break;
      case 4:
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          return true;
        }
        break;
      case 5:
        pbVar5 = pbVar5 + 4;
        break;
      default:
        goto switchD_14fabe0cb_default;
      }
      if (pbVar1 <= pbVar5) {
        return false;
      }
    } while( true );
  }
switchD_14fabe0cb_default:
  return false;
}

// ParseGroup @ 14fabe220

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::ParseGroup
          (UnknownFieldLiteParserHelper *this,uint param_1,char *param_2,ParseContext *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = param_1 * 8;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    WriteVarint((ulonglong)(iVar4 + 3),
                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
  }
  piVar1 = &param_3->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    param_3->group_depth_ = param_3->group_depth_ + 1;
    pcVar3 = WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                       (this,param_2,param_3);
    lVar2 = param_3->_padding_;
    param_3->group_depth_ = param_3->group_depth_ + -1;
    param_3->depth_ = param_3->depth_ + 1;
    *(undefined4 *)&param_3->_padding_ = 0;
    if (((int)lVar2 == iVar4 + 3) && (pcVar3 != (char *)0x0)) {
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return pcVar3;
      }
      WriteVarint((ulonglong)(iVar4 + 4),
                  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
      return pcVar3;
    }
  }
  return (char *)0x0;
}

// ParseLengthDelimited @ 14fabe2d0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldLiteParserHelper::ParseLengthDelimited(unsigned int,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::UnknownFieldLiteParserHelper::ParseLengthDelimited
          (UnknownFieldLiteParserHelper *this,uint param_1,char *param_2,ParseContext *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  __uint64 _Var5;
  int iVar6;
  char *local_res18;
  
  local_res18 = param_2;
  uVar2 = ReadSize(&local_res18);
  pcVar4 = local_res18;
  _Var5 = (__uint64)(int)uVar2;
  if (local_res18 == (char *)0x0) {
    local_res18 = (char *)0x0;
  }
  else if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this ==
           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    iVar6 = ((int)param_3->_padding_ - (int)local_res18) + 0x10;
    if (iVar6 < (int)uVar2) {
      do {
        if (param_3->_padding_ == 0) {
          return (char *)0x0;
        }
        uVar2 = (int)_Var5 - iVar6;
        _Var5 = (__uint64)uVar2;
        if (*(int *)((longlong)&param_3->_padding_ + 4) < 0x11) {
          return (char *)0x0;
        }
        pcVar4 = EpsCopyInputStream::NextBuffer((EpsCopyInputStream *)param_3,0,-1);
        if (pcVar4 == (char *)0x0) {
          *(undefined4 *)&param_3->_padding_ = 1;
          param_3->_padding_ = param_3->_padding_;
          return (char *)0x0;
        }
        lVar1 = param_3->_padding_;
        iVar6 = ((int)pcVar4 - (int)param_3->_padding_) +
                *(int *)((longlong)&param_3->_padding_ + 4);
        *(int *)((longlong)&param_3->_padding_ + 4) = iVar6;
        iVar3 = 0;
        if (iVar6 < 0) {
          iVar3 = iVar6;
        }
        iVar6 = ((int)lVar1 - (int)(pcVar4 + 0x10)) + 0x10;
        param_3->_padding_ = iVar3 + lVar1;
      } while (iVar6 < (int)uVar2);
      local_res18 = pcVar4 + 0x10 + (int)uVar2;
    }
    else {
      local_res18 = local_res18 + _Var5;
    }
  }
  else {
    WriteVarint((ulonglong)(param_1 * 8 + 2),
                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
    WriteVarint(_Var5,*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this);
    local_res18 = EpsCopyInputStream::AppendString
                            ((EpsCopyInputStream *)param_3,pcVar4,uVar2,
                             *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                              this);
  }
  return local_res18;
}

// ParseMessage @ 14fabe400

/* public: char const * __ptr64 __cdecl google::protobuf::internal::ParseContext::ParseMessage(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::ParseMessage
          (ParseContext *this,MessageLite *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *local_res18;
  
  pcVar4 = (char *)0x0;
  local_res18 = param_2;
  uVar1 = ReadSize(&local_res18);
  if ((local_res18 != (char *)0x0) && (iVar6 = this->depth_, 0 < iVar6)) {
    iVar7 = *(int *)((longlong)&this->_padding_ + 4);
    iVar5 = (uVar1 - (int)this->_padding_) + (int)local_res18;
    *(int *)((longlong)&this->_padding_ + 4) = iVar5;
    iVar2 = 0;
    if (iVar5 < 0) {
      iVar2 = iVar5;
    }
    this->_padding_ = (longlong)iVar2 + this->_padding_;
    this->depth_ = iVar6 + -1;
    if (local_res18 != (char *)0x0) {
      pcVar3 = MessageLite::_InternalParse(param_1,local_res18,this);
      iVar6 = *(int *)((longlong)&this->_padding_ + 4);
      this->depth_ = this->depth_ + 1;
      iVar6 = iVar6 + (iVar7 - iVar5);
      *(int *)((longlong)&this->_padding_ + 4) = iVar6;
      if ((int)this->_padding_ == 0) {
        iVar7 = 0;
        if (iVar6 < 0) {
          iVar7 = iVar6;
        }
        this->_padding_ = (longlong)iVar7 + this->_padding_;
        pcVar4 = pcVar3;
      }
    }
  }
  return pcVar4;
}

// ReadCordFallback @ 14fabe4c0

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadCordFallback(char const * __ptr64,int,class
   absl::lts_20240722::Cord * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadCordFallback
          (EpsCopyInputStream *this,char *param_1,int param_2,Cord *param_3)

{
  ZeroCopyInputStream *pZVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  size_t _Size;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  basic_string_view<char,std::char_traits<char>_> local_48;
  
  iVar5 = *(int *)&this->buffer_end_;
  uVar8 = (ulonglong)param_2;
  iVar3 = (int)param_1;
  if (this->zcis_ != (ZeroCopyInputStream *)0x0) {
    iVar6 = (this->limit_ - iVar3) + iVar5;
    if (param_2 <= iVar6) {
      iVar6 = iVar6 - param_2;
      iVar5 = (iVar5 - iVar3) + 0x10;
      if ((iVar5 < 0x21) && (param_1 + (-0x28 - (longlong)this) < (char *)0x21)) {
        if (((iVar5 == 0x10) && (this->next_chunk_ != (char *)0x0)) &&
           (this->next_chunk_ != this->patch_buffer_)) {
          absl::lts_20240722::Cord::Clear(param_3);
          iVar5 = this->size_;
          (**(code **)((longlong)*this->zcis_ + 0x10))(this->zcis_,iVar5);
          this->overall_limit_ = this->overall_limit_ + iVar5;
        }
        else {
          local_48._Mysize = (ulong64)iVar5;
          param_2 = param_2 - iVar5;
          local_48._Mydata = param_1;
          absl::lts_20240722::Cord::operator=(param_3,&local_48);
          if (this->next_chunk_ != this->patch_buffer_) {
            if (this->next_chunk_ == (char *)0x0) {
              this->last_tag_minus_1_ = 1;
              return (char *)0x0;
            }
            iVar5 = this->size_ + -0x10;
            (**(code **)((longlong)*this->zcis_ + 0x10))(this->zcis_,iVar5);
            this->overall_limit_ = this->overall_limit_ + iVar5;
          }
        }
      }
      else {
        absl::lts_20240722::Cord::Clear(param_3);
        (**(code **)((longlong)*this->zcis_ + 0x10))(this->zcis_,iVar5);
        this->overall_limit_ = this->overall_limit_ + iVar5;
      }
      pcVar4 = this->patch_buffer_;
      if (param_2 <= this->overall_limit_) {
        this->overall_limit_ = this->overall_limit_ - param_2;
        cVar2 = (**(code **)((longlong)*this->zcis_ + 0x28))(this->zcis_,param_3,param_2);
        if (cVar2 != '\0') {
          pZVar1 = this->zcis_;
          this->zcis_ = pZVar1;
          this->limit_ = 0x7fffffff;
          cVar2 = (**(code **)((longlong)*pZVar1 + 8))(pZVar1,&local_48,local_res8);
          if (cVar2 == '\0') {
            this->overall_limit_ = 0;
            this->next_chunk_ = (char *)0x0;
            this->size_ = 0;
            this->buffer_end_ = pcVar4;
          }
          else {
            _Size = (size_t)local_res8[0];
            this->overall_limit_ = this->overall_limit_ - local_res8[0];
            this->next_chunk_ = pcVar4;
            if (local_res8[0] < 0x11) {
              this->buffer_end_ = this->patch_buffer_ + 0x10;
              this->limit_end_ = this->patch_buffer_ + 0x10;
              pcVar4 = (char *)((longlong)this + (0x48 - _Size));
              memcpy(pcVar4,local_48._Mydata,_Size);
            }
            else {
              this->buffer_end_ = local_48._Mydata + (_Size - 0x10);
              pcVar4 = local_48._Mydata;
              if (this->aliasing_ == 1) {
                this->aliasing_ = 2;
              }
            }
          }
          iVar6 = ((int)pcVar4 - *(int *)&this->buffer_end_) + iVar6;
          this->limit_ = iVar6;
          iVar5 = 0;
          if (iVar6 < 0) {
            iVar5 = iVar6;
          }
          this->limit_end_ = this->buffer_end_ + iVar5;
          return pcVar4;
        }
      }
    }
    return (char *)0x0;
  }
  iVar5 = (iVar5 - iVar3) + 0x10;
  if (param_2 <= iVar5) {
    local_48._Mydata = param_1;
    local_48._Mysize = uVar8;
    absl::lts_20240722::Cord::operator=(param_3,&local_48);
    return param_1 + uVar8;
  }
  do {
    if (this->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    local_48._Mysize = (ulong64)iVar5;
    local_48._Mydata = param_1;
    absl::lts_20240722::Cord::InlineRep::AppendArray(&param_3->contents_,&local_48,kAppendString);
    uVar7 = (int)uVar8 - iVar5;
    uVar8 = (ulonglong)uVar7;
    if (this->limit_ < 0x11) {
      return (char *)0x0;
    }
    pcVar4 = NextBuffer(this,0,-1);
    if (pcVar4 == (char *)0x0) {
      this->last_tag_minus_1_ = 1;
      this->limit_end_ = this->buffer_end_;
      return (char *)0x0;
    }
    iVar5 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar4;
    this->limit_ = iVar5;
    iVar3 = 0;
    if (iVar5 < 0) {
      iVar3 = iVar5;
    }
    param_1 = pcVar4 + 0x10;
    iVar5 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
    this->limit_end_ = this->buffer_end_ + iVar3;
  } while (iVar5 < (int)uVar7);
  local_48._Mydata = param_1;
  local_48._Mysize = (longlong)(int)uVar7;
  absl::lts_20240722::Cord::InlineRep::AppendArray(&param_3->contents_,&local_48,kAppendString);
  return param_1 + (int)uVar7;
}

// ReadSizeAndPushLimitAndDepth @ 14fabe7e0

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ParseContext::ReadSizeAndPushLimitAndDepth(char const * __ptr64,class
   google::protobuf::internal::EpsCopyInputStream::LimitToken * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::ReadSizeAndPushLimitAndDepth
          (ParseContext *this,char *param_1,LimitToken *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *local_res10;
  
  local_res10 = param_1;
  uVar1 = ReadSize(&local_res10);
  if ((local_res10 != (char *)0x0) && (0 < this->depth_)) {
    iVar2 = (uVar1 - (int)this->_padding_) + (int)local_res10;
    iVar3 = 0;
    if (iVar2 < 0) {
      iVar3 = iVar2;
    }
    this->_padding_ = (longlong)iVar3 + this->_padding_;
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    *(int *)((longlong)&this->_padding_ + 4) = iVar2;
    param_2->token_ = iVar3 - iVar2;
    this->depth_ = this->depth_ + -1;
    return local_res10;
  }
  return (char *)0x0;
}

// ReadSizeFallback @ 14fabe870

/* struct std::pair<char const * __ptr64,int> __cdecl
   google::protobuf::internal::ReadSizeFallback(char const * __ptr64,unsigned int) */

char * __cdecl google::protobuf::internal::ReadSizeFallback(char *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_register_00000014;
  uint uVar3;
  int in_R8D;
  byte *pbVar4;
  
  pbVar4 = (byte *)CONCAT44(in_register_00000014,param_2);
  uVar2 = 7;
  uVar3 = 1;
  do {
    pbVar4 = pbVar4 + 1;
    bVar1 = (byte)uVar2 & 0x1f;
    in_R8D = in_R8D + (*pbVar4 - 1 << bVar1);
    if (*pbVar4 < 0x80) {
      *(int *)(param_1 + 8) = in_R8D;
      *(ulonglong *)param_1 = (ulonglong)uVar3 + 1 + CONCAT44(in_register_00000014,param_2);
      return param_1;
    }
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 + 7;
  } while (uVar2 < 0x1c);
  uVar2 = (uint)*(byte *)(CONCAT44(in_register_00000014,param_2) + 4);
  if ((uVar2 < 8) && (uVar2 = (uVar2 + 0xf) * 0x10000000 + in_R8D, uVar2 < 0x7ffffff0)) {
    *(uint *)(param_1 + 8) = uVar2;
    *(longlong *)param_1 = CONCAT44(in_register_00000014,param_2) + 5;
    return param_1;
  }
  uVar2 = 0 << bVar1;
  *(ulonglong *)param_1 = (ulonglong)uVar2;
  *(uint *)(param_1 + 8) = uVar2;
  return param_1;
}

// ReadStringFallback @ 14fabe920

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadStringFallback(char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::ReadStringFallback
          (EpsCopyInputStream *this,char *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  ulong64 uVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_res18;
  
  uVar7 = (ulonglong)param_2;
  pbVar3 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  (param_3->_Mypair)._Myval2._Mysize = 0;
  (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((longlong)uVar7 <=
      (longlong)(this->buffer_end_ + ((longlong)this->limit_ - (longlong)param_1))) {
    uVar1 = (param_3->_Mypair)._Myval2._Mysize;
    if (50000000 < param_2) {
      param_2 = 50000000;
    }
    if ((param_3->_Mypair)._Myval2._Myres < (longlong)param_2 + uVar1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
                (param_3,(longlong)param_2,local_res18);
      (param_3->_Mypair)._Myval2._Mysize = uVar1;
    }
  }
  iVar5 = (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
  do {
    if (this->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_3,param_1,(longlong)iVar5);
    uVar6 = (int)uVar7 - iVar5;
    uVar7 = (ulonglong)uVar6;
    if (this->limit_ < 0x11) {
      return (char *)0x0;
    }
    pcVar4 = NextBuffer(this,0,-1);
    if (pcVar4 == (char *)0x0) {
      this->last_tag_minus_1_ = 1;
      this->limit_end_ = this->buffer_end_;
      return (char *)0x0;
    }
    iVar5 = (this->limit_ - *(int *)&this->buffer_end_) + (int)pcVar4;
    this->limit_ = iVar5;
    iVar2 = 0;
    if (iVar5 < 0) {
      iVar2 = iVar5;
    }
    param_1 = pcVar4 + 0x10;
    iVar5 = ((int)this->buffer_end_ - (int)param_1) + 0x10;
    this->limit_end_ = this->buffer_end_ + iVar2;
  } while (iVar5 < (int)uVar6);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,param_1,(longlong)(int)uVar6);
  return param_1 + (int)uVar6;
}

// ReadTagFallback @ 14fabea40

/* struct std::pair<char const * __ptr64,unsigned int> __cdecl
   google::protobuf::internal::ReadTagFallback(char const * __ptr64,unsigned int) */

char * __cdecl google::protobuf::internal::ReadTagFallback(char *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)(CONCAT44(in_register_00000014,param_2) + 2);
  uVar2 = 0xe;
  uVar4 = 2;
  do {
    bVar1 = (byte)uVar2 & 0x1f;
    in_R8D = in_R8D + (*pbVar3 - 1 << bVar1);
    if (*pbVar3 < 0x80) {
      *(int *)(param_1 + 8) = in_R8D;
      *(ulonglong *)param_1 = (ulonglong)uVar4 + 1 + CONCAT44(in_register_00000014,param_2);
      return param_1;
    }
    uVar4 = uVar4 + 1;
    uVar2 = uVar2 + 7;
    pbVar3 = pbVar3 + 1;
  } while (uVar2 < 0x23);
  uVar2 = 0 << bVar1;
  *(ulonglong *)param_1 = (ulonglong)uVar2;
  *(uint *)(param_1 + 8) = uVar2;
  return param_1;
}

// SetEndOfStream @ 14fabeac0

/* public: void __cdecl google::protobuf::internal::EpsCopyInputStream::SetEndOfStream(void) __ptr64
    */

void __thiscall
google::protobuf::internal::EpsCopyInputStream::SetEndOfStream(EpsCopyInputStream *this)

{
  this->last_tag_minus_1_ = 1;
  return;
}

// SkipFallback @ 14fabead0

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::SkipFallback(char const * __ptr64,int) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::SkipFallback
          (EpsCopyInputStream *this,char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
  do {
    if (this->next_chunk_ == (char *)0x0) {
      return (char *)0x0;
    }
    param_2 = param_2 - iVar3;
    if (this->limit_ < 0x11) {
      return (char *)0x0;
    }
    pcVar1 = NextBuffer(this,0,-1);
    if (pcVar1 == (char *)0x0) {
      this->last_tag_minus_1_ = 1;
      this->limit_end_ = this->buffer_end_;
      return (char *)0x0;
    }
    iVar3 = ((int)pcVar1 - *(int *)&this->buffer_end_) + this->limit_;
    this->limit_ = iVar3;
    iVar2 = 0;
    if (iVar3 < 0) {
      iVar2 = iVar3;
    }
    iVar3 = ((int)this->buffer_end_ - (int)(pcVar1 + 0x10)) + 0x10;
    this->limit_end_ = this->buffer_end_ + iVar2;
  } while (iVar3 < param_2);
  return pcVar1 + 0x10 + param_2;
}

// StreamNext @ 14fabeb80

/* private: bool __cdecl google::protobuf::internal::EpsCopyInputStream::StreamNext(void const *
   __ptr64 * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::StreamNext(EpsCopyInputStream *this,void **param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this->zcis_ + 8))(this->zcis_,param_1,&this->size_);
  if (cVar1 != '\0') {
    this->overall_limit_ = this->overall_limit_ - this->size_;
  }
  return (bool)cVar1;
}

// StringParser @ 14fabebc0

/* char const * __ptr64 __cdecl google::protobuf::internal::StringParser(char const * __ptr64,char
   const * __ptr64,void * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::StringParser
          (char *param_1,char *param_2,void *param_3,ParseContext *param_4)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// UnknownFieldParse @ 14fabebf0

/* char const * __ptr64 __cdecl google::protobuf::internal::UnknownFieldParse(unsigned int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::UnknownFieldParse
          (uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          char *param_3,ParseContext *param_4)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_res10 [3];
  
  local_res10[0] = param_2;
  pcVar1 = FieldParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                     ((ulonglong)param_1,(UnknownFieldLiteParserHelper *)local_res10,param_3,param_4
                     );
  return pcVar1;
}

// UnknownGroupLiteParse @ 14fabec10

/* char const * __ptr64 __cdecl google::protobuf::internal::UnknownGroupLiteParse(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::UnknownGroupLiteParse
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2,
          ParseContext *param_3)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_res8 [4];
  
  local_res8[0] = param_1;
  pcVar1 = WireFormatParser<google::protobuf::internal::UnknownFieldLiteParserHelper>
                     ((UnknownFieldLiteParserHelper *)local_res8,param_2,param_3);
  return pcVar1;
}

// VarintParseSlow32 @ 14fabec30

/* struct std::pair<char const * __ptr64,unsigned int> __cdecl
   google::protobuf::internal::VarintParseSlow32(char const * __ptr64,unsigned int) */

char * __cdecl google::protobuf::internal::VarintParseSlow32(char *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_register_00000014;
  uint uVar2;
  int in_R8D;
  byte *pbVar3;
  
  pbVar3 = (byte *)CONCAT44(in_register_00000014,param_2);
  uVar1 = 7;
  uVar2 = 1;
  do {
    pbVar3 = pbVar3 + 1;
    in_R8D = in_R8D + (*pbVar3 - 1 << ((byte)uVar1 & 0x1f));
    if (*pbVar3 < 0x80) goto LAB_14fabeca7;
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 7;
  } while (uVar1 < 0x23);
  uVar2 = 5;
  pbVar3 = (byte *)(CONCAT44(in_register_00000014,param_2) + 5);
  while (0x7f < *pbVar3) {
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 1;
    if (9 < uVar2) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      return param_1;
    }
  }
LAB_14fabeca7:
  *(int *)(param_1 + 8) = in_R8D;
  *(ulonglong *)param_1 = (ulonglong)uVar2 + 1 + CONCAT44(in_register_00000014,param_2);
  return param_1;
}

// VarintParseSlow64 @ 14fabecd0

/* struct std::pair<char const * __ptr64,unsigned __int64> __cdecl
   google::protobuf::internal::VarintParseSlow64(char const * __ptr64,unsigned int) */

char * __cdecl google::protobuf::internal::VarintParseSlow64(char *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_register_00000014;
  ulonglong uVar2;
  ulonglong in_R8;
  byte *pbVar3;
  uint uVar4;
  
  uVar2 = in_R8 & 0xffffffff;
  uVar1 = 7;
  pbVar3 = (byte *)CONCAT44(in_register_00000014,param_2);
  uVar4 = 1;
  do {
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 + ((ulonglong)*pbVar3 - 1 << ((byte)uVar1 & 0x3f));
    if ((ulonglong)*pbVar3 < 0x80) {
      *(ulonglong *)(param_1 + 8) = uVar2;
      *(ulonglong *)param_1 = (ulonglong)uVar4 + 1 + CONCAT44(in_register_00000014,param_2);
      return param_1;
    }
    uVar4 = uVar4 + 1;
    uVar1 = uVar1 + 7;
  } while (uVar1 < 0x46);
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  return param_1;
}

// VerifyUTF8 @ 14fabed50

/* bool __cdecl google::protobuf::internal::VerifyUTF8(class std::basic_string_view<char,struct
   std::char_traits<char> >,char const * __ptr64) */

bool __cdecl
google::protobuf::internal::VerifyUTF8
          (basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = utf8_range::IsStructurallyValid(&local_18);
  if (!bVar1) {
    local_28._Mysize = 0xffffffffffffffff;
    do {
      local_28._Mysize = local_28._Mysize + 1;
    } while (param_2[local_28._Mysize] != '\0');
    local_18._Mydata = "";
    local_18._Mysize = 0;
    local_28._Mydata = param_2;
    PrintUTF8ErrorLog(&local_18,&local_28,"parsing",false);
    return false;
  }
  return true;
}

// WriteLengthDelimited @ 14fabedf0

/* void __cdecl google::protobuf::internal::WriteLengthDelimited(unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
google::protobuf::internal::WriteLengthDelimited
          (uint param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  WriteVarint((ulonglong)(param_1 * 8 + 2),param_3);
  WriteVarint(param_2->_Mysize,param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,param_2->_Mydata,param_2->_Mysize);
  return;
}

// WriteVarint @ 14fabee40

/* void __cdecl google::protobuf::internal::WriteVarint(unsigned int,unsigned __int64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
google::protobuf::internal::WriteVarint
          (uint param_1,__uint64 param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  WriteVarint((ulonglong)(param_1 * 8),param_3);
  WriteVarint(param_2,param_3);
  return;
}

// WriteVarint @ 14fabee80

/* void __cdecl google::protobuf::internal::WriteVarint(unsigned __int64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
google::protobuf::internal::WriteVarint
          (__uint64 param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          )

{
  ulonglong uVar1;
  ulonglong uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  undefined1 local_res8;
  
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    uVar1 = (param_2->_Mypair)._Myval2._Mysize;
    uVar2 = (param_2->_Mypair)._Myval2._Myres;
    if (uVar1 < uVar2) {
      (param_2->_Mypair)._Myval2._Mysize = uVar1 + 1;
      pbVar3 = param_2;
      if (0xf < uVar2) {
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_2->_Mypair)._Myval2._Bx._Ptr;
      }
      (pbVar3->_Mypair)._Myval2._Bx._Buf[uVar1] = (byte)param_1 | 0x80;
      (pbVar3->_Mypair)._Myval2._Bx._Buf[uVar1 + 1] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                (param_2,1,local_res8);
    }
  }
  uVar1 = (param_2->_Mypair)._Myval2._Mysize;
  uVar2 = (param_2->_Mypair)._Myval2._Myres;
  if (uVar1 < uVar2) {
    (param_2->_Mypair)._Myval2._Mysize = uVar1 + 1;
    if (0xf < uVar2) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Bx._Buf[uVar1] = (byte)param_1;
    (param_2->_Mypair)._Myval2._Bx._Buf[uVar1 + 1] = '\0';
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
            (param_2,1,local_res8,param_1 & 0xff);
  return;
}

// FUN_1502a2130 @ 1502a2130

void FUN_1502a2130(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502a2160 @ 1502a2160

void FUN_1502a2160(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x138) & 1) != 0) {
    *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x48));
  }
  return;
}

// FUN_1502a21c0 @ 1502a21c0

void FUN_1502a21c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x138) & 1) != 0) {
    *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x48));
  }
  return;
}

// FUN_1502a2220 @ 1502a2220

void FUN_1502a2220(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x138) & 1) != 0) {
    *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x48));
  }
  return;
}

// FUN_1502a2280 @ 1502a2280

void FUN_1502a2280(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x138) & 1) != 0) {
    *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x48));
  }
  return;
}

