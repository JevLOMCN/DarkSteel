// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 15

// FormatArgImpl<unsigned_short> @ 14fbad7b0

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<unsigned
   short>(unsigned short const & __ptr64) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<unsigned_short>
          (FormatArgImpl *this,ushort *param_1)

{
  Data DVar1;
  undefined6 uStackX_a;
  
  DVar1._2_6_ = uStackX_a;
  DVar1._0_2_ = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<unsigned_short>;
  return this;
}

// Init<unsigned_short> @ 14fbad800

/* private: void __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Init<unsigned
   short>(unsigned short const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::Init<unsigned_short>
          (FormatArgImpl *this,ushort *param_1)

{
  Data DVar1;
  undefined6 uStackX_a;
  
  DVar1._2_6_ = uStackX_a;
  DVar1._0_2_ = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<unsigned_short>;
  return;
}

// SNPrintF<unsigned_short> @ 14fbad830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::SNPrintF<unsigned short>(char * __ptr64,unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355> const & __ptr64,unsigned
   short const & __ptr64) */

int __cdecl
absl::lts_20240722::SNPrintF<unsigned_short>
          (char *param_1,__uint64 param_2,FormatSpecTemplate<655355> *param_3,ushort *param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  ushort *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ushort local_28 [4];
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)(param_3 + 4);
  uStack_30 = *(undefined4 *)(param_3 + 8);
  uStack_2c = *(undefined4 *)(param_3 + 0xc);
  local_28[0] = *param_4;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned_short>;
  local_48 = local_28;
  uStack_40 = 1;
  iVar1 = str_format_internal::SnprintF(local_48._0_4_,local_38,&local_38,&local_48);
  return iVar1;
}

// _Adl_verify_range<std::pair<unsigned_int,unsigned_int>_const*___ptr64,std::pair<unsigned_int,unsigned_int>_const*___ptr64> @ 14fbad8b0

/* void __cdecl std::_Adl_verify_range<struct std::pair<unsigned int,unsigned int> const *
   __ptr64,struct std::pair<unsigned int,unsigned int> const * __ptr64>(struct std::pair<unsigned
   int,unsigned int> const * __ptr64 const & __ptr64,struct std::pair<unsigned int,unsigned int>
   const * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::pair<unsigned_int,unsigned_int>_const*___ptr64,std::pair<unsigned_int,unsigned_int>_const*___ptr64>
          (pair<unsigned_int,unsigned_int> **param_1,pair<unsigned_int,unsigned_int> **param_2)

{
  return;
}

// _Get_unwrapped<std::pair<unsigned_int,unsigned_int>_const*___ptr64_const&___ptr64> @ 14fbad8c0

/* UNKNOWN __cdecl std::_Get_unwrapped<struct std::pair<unsigned int,unsigned int> const * __ptr64
   const & __ptr64>(struct std::pair<unsigned int,unsigned int> const * __ptr64 const & __ptr64) */

pair<unsigned_int,unsigned_int> * __cdecl
std::_Get_unwrapped<std::pair<unsigned_int,unsigned_int>_const*___ptr64_const&___ptr64>
          (pair<unsigned_int,unsigned_int> **param_1)

{
  return *param_1;
}

// begin<std::pair<unsigned_int,unsigned_int>_const_,9> @ 14fbad900

/* struct std::pair<unsigned int,unsigned int> const * __ptr64 __cdecl std::begin<struct
   std::pair<unsigned int,unsigned int> const ,9>(struct std::pair<unsigned int,unsigned int> const
   (& __ptr64)[9]) */

pair<unsigned_int,unsigned_int> * __cdecl
std::begin<std::pair<unsigned_int,unsigned_int>_const_,9>(pair<unsigned_int,unsigned_int> *param_1)

{
  return param_1;
}

// c_begin<struct_std::pair<unsigned_int,unsigned_int>_const_[9]> @ 14fbad950

/* struct std::pair<unsigned int,unsigned int> const * __ptr64 __cdecl
   absl::lts_20240722::container_algorithm_internal::c_begin<struct std::pair<unsigned int,unsigned
   int> const [9]>(struct std::pair<unsigned int,unsigned int> const (& __ptr64)[9]) */

pair<unsigned_int,unsigned_int> * __cdecl
absl::lts_20240722::container_algorithm_internal::
c_begin<struct_std::pair<unsigned_int,unsigned_int>_const_[9]>
          (pair<unsigned_int,unsigned_int> *param_1)

{
  return param_1;
}

// c_end<struct_std::pair<unsigned_int,unsigned_int>_const_[9]> @ 14fbad960

/* struct std::pair<unsigned int,unsigned int> const * __ptr64 __cdecl
   absl::lts_20240722::container_algorithm_internal::c_end<struct std::pair<unsigned int,unsigned
   int> const [9]>(struct std::pair<unsigned int,unsigned int> const (& __ptr64)[9]) */

pair<unsigned_int,unsigned_int> * __cdecl
absl::lts_20240722::container_algorithm_internal::
c_end<struct_std::pair<unsigned_int,unsigned_int>_const_[9]>
          (pair<unsigned_int,unsigned_int> *param_1)

{
  return param_1 + 0x48;
}

// end<std::pair<unsigned_int,unsigned_int>_const_,9> @ 14fbad970

/* struct std::pair<unsigned int,unsigned int> const * __ptr64 __cdecl std::end<struct
   std::pair<unsigned int,unsigned int> const ,9>(struct std::pair<unsigned int,unsigned int> const
   (& __ptr64)[9]) */

pair<unsigned_int,unsigned_int> * __cdecl
std::end<std::pair<unsigned_int,unsigned_int>_const_,9>(pair<unsigned_int,unsigned_int> *param_1)

{
  return param_1 + 0x48;
}

// FUN_14fbad9d0 @ 14fbad9d0

uint * FUN_14fbad9d0(uint *param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  pbVar2 = (byte *)*param_2;
  iVar9 = 0;
  lVar7 = 1;
  bVar1 = *pbVar2;
  uVar3 = (uint)bVar1;
  if (param_2[1] == 0) {
LAB_14fbadb20:
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  lVar6 = param_2[1] + -1;
  lVar5 = -1;
  if (lVar6 != -1) {
    lVar5 = lVar6;
  }
  bVar4 = ~bVar1;
  *param_2 = (longlong)(pbVar2 + 1);
  param_2[1] = lVar5;
  if (__isa_available < 5) {
    iVar8 = 0x1f;
    if (bVar4 != 0) {
      for (; bVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (bVar4 != 0) {
      iVar8 = 7 - iVar8;
    }
    else {
      iVar8 = 8;
    }
  }
  else {
    iVar8 = (ushort)LZCOUNT((ushort)bVar4) - 8;
  }
  if (iVar8 == 0) {
LAB_14fbadaf7:
    if (uVar3 < 0x110000) goto LAB_14fbadb03;
  }
  else {
    uVar3 = (uint)bVar1;
    if (iVar8 == 2) {
      iVar8 = 1;
      uVar3 = uVar3 & 0x1f;
LAB_14fbada95:
      do {
        lVar5 = param_2[1];
        if (lVar5 == 0) goto LAB_14fbadafe;
        bVar1 = *(byte *)*param_2;
        if (lVar5 == 0) goto LAB_14fbadb20;
        lVar6 = -1;
        if (lVar5 + -1 != -1) {
          lVar6 = lVar5 + -1;
        }
        lVar7 = lVar7 + 1;
        *param_2 = (longlong)((byte *)*param_2 + 1);
        param_2[1] = lVar6;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_14fbadafe;
        uVar3 = bVar1 & 0x3f | uVar3 << 6;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
      goto LAB_14fbadaf7;
    }
    if (iVar8 == 3) {
      iVar8 = 2;
      uVar3 = uVar3 & 0xf;
      goto LAB_14fbada95;
    }
    if (iVar8 == 4) {
      iVar8 = 3;
      uVar3 = uVar3 & 7;
      iVar9 = 0;
      goto LAB_14fbada95;
    }
  }
LAB_14fbadafe:
  uVar3 = 0xaaaaaaaa;
LAB_14fbadb03:
  *param_1 = uVar3;
  *(byte **)(param_1 + 2) = pbVar2;
  *(longlong *)(param_1 + 4) = lVar7;
  return param_1;
}

// MaybeWriteSpecialFp @ 14fbadb30

/* private: bool __cdecl google::protobuf::json_internal::JsonWriter::MaybeWriteSpecialFp(double)
   __ptr64 */

bool __thiscall
google::protobuf::json_internal::JsonWriter::MaybeWriteSpecialFp(JsonWriter *this,double param_1)

{
  if (param_1 == __real_7ff0000000000000) {
    io::zc_sink_internal::ZeroCopyStreamByteSink::Append
              ((ZeroCopyStreamByteSink *)this,"\"Infinity\"",10);
    return true;
  }
  if (param_1 != __real_fff0000000000000) {
    if (!NAN(param_1)) {
      return false;
    }
    io::zc_sink_internal::ZeroCopyStreamByteSink::Append((ZeroCopyStreamByteSink *)this,"\"NaN\"",5)
    ;
    return true;
  }
  io::zc_sink_internal::ZeroCopyStreamByteSink::Append
            ((ZeroCopyStreamByteSink *)this,"\"-Infinity\"",0xb);
  return true;
}

// SetValue @ 14fbadde0

/* public: static union absl::lts_20240722::str_format_internal::FormatArgImpl::Data __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned
   short,2>::SetValue(unsigned short const & __ptr64) */

Data __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_short,2>::SetValue
          (ushort *param_1)

{
  Data DVar1;
  undefined6 uStackX_a;
  
  DVar1._2_6_ = uStackX_a;
  DVar1._0_2_ = *param_1;
  return (Data)DVar1.ptr;
}

// WriteBase64 @ 14fbade00

/* public: void __cdecl google::protobuf::json_internal::JsonWriter::WriteBase64(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::json_internal::JsonWriter::WriteBase64
          (JsonWriter *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong64 uVar4;
  char local_res8;
  char local_res9;
  undefined2 local_resa;
  
  pbVar3 = (byte *)param_1->_Mydata;
  uVar1 = param_1->_Mysize;
  io::zc_sink_internal::ZeroCopyStreamByteSink::Append((ZeroCopyStreamByteSink *)this,"\"",1);
  pbVar2 = pbVar3;
  for (uVar4 = uVar1; 2 < (longlong)uVar4; uVar4 = uVar4 - 3) {
    local_res8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar2 >> 2];
    local_res9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulonglong)(*pbVar2 & 3) << 4 | (ulonglong)(pbVar2[1] >> 4)];
    local_resa = CONCAT11("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                          [pbVar2[2] & 0x3f],
                          "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                          [(ulonglong)(pbVar2[1] & 0xf) << 2 | (ulonglong)(pbVar2[2] >> 6)]);
    io::zc_sink_internal::ZeroCopyStreamByteSink::Append
              ((ZeroCopyStreamByteSink *)this,&local_res8,4);
    pbVar2 = pbVar2 + 3;
  }
  pbVar3 = pbVar3 + (uVar1 - (longlong)pbVar2);
  if (pbVar3 == (byte *)0x1) {
    local_res8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar2 >> 2];
    local_res9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulonglong)(*pbVar2 & 3) * 0x10];
    local_resa = 0x3d3d;
  }
  else {
    if (pbVar3 != (byte *)0x2) goto LAB_14fbadf69;
    local_res8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar2 >> 2];
    local_res9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulonglong)(*pbVar2 & 3) << 4 | (ulonglong)(pbVar2[1] >> 4)];
    local_resa = CONCAT11(0x3d,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                               [(ulonglong)(pbVar2[1] & 0xf) * 4]);
  }
  io::zc_sink_internal::ZeroCopyStreamByteSink::Append((ZeroCopyStreamByteSink *)this,&local_res8,4)
  ;
LAB_14fbadf69:
  io::zc_sink_internal::ZeroCopyStreamByteSink::Append((ZeroCopyStreamByteSink *)this,"\"",1);
  return;
}

// WriteEscapedUtf8 @ 14fbadfa0

/* private: void __cdecl google::protobuf::json_internal::JsonWriter::WriteEscapedUtf8(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::json_internal::JsonWriter::WriteEscapedUtf8
          (JsonWriter *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  byte bVar1;
  ulong64 uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  __uint64 _Var10;
  int iVar11;
  bool bVar12;
  
  uVar2 = param_1->_Mysize;
  iVar8 = __isa_available;
  do {
    if (uVar2 == 0) {
      __isa_available = iVar8;
      return;
    }
    pbVar3 = (byte *)param_1->_Mydata;
    _Var10 = 1;
    bVar1 = *pbVar3;
    uVar9 = (uint)bVar1;
    __isa_available = iVar8;
    if (uVar2 == 0) {
LAB_14fbae2fc:
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    uVar5 = 0xffffffffffffffff;
    if (uVar2 - 1 != 0xffffffffffffffff) {
      uVar5 = uVar2 - 1;
    }
    bVar4 = ~bVar1;
    param_1->_Mydata = (char *)(pbVar3 + 1);
    param_1->_Mysize = uVar5;
    if (iVar8 < 5) {
      iVar8 = 0x1f;
      if (bVar4 != 0) {
        for (; bVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (bVar4 != 0) {
        iVar8 = 7 - iVar8;
      }
      else {
        iVar8 = 8;
      }
    }
    else {
      iVar8 = (ushort)LZCOUNT((ushort)bVar4) - 8;
    }
    if (iVar8 == 0) {
LAB_14fbae0f3:
      if (0x10ffff < uVar9) goto LAB_14fbae0fb;
      if (uVar9 < 0x6de) {
        if (uVar9 == 0x6dd) goto switchD_14fbae14e_caseD_3c;
        switch(uVar9) {
        case 8:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\b",2);
          break;
        case 9:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\t",2);
          break;
        case 10:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\n",2);
          break;
        default:
switchD_14fbae14e_caseD_b:
          puVar6 = &DAT_1535e05c0;
          do {
            if (((uint)*puVar6 <= uVar9) && (uVar9 <= (uint)((ulonglong)*puVar6 >> 0x20))) {
              bVar12 = true;
              goto LAB_14fbae26b;
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 != (undefined8 *)&DAT_1535e0608);
          bVar12 = false;
LAB_14fbae26b:
          if (bVar12) goto switchD_14fbae14e_caseD_3c;
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,(char *)pbVar3,_Var10);
          break;
        case 0xc:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\f",2);
          break;
        case 0xd:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\r",2);
          break;
        case 0x22:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\\"",2);
          break;
        case 0x3c:
        case 0x3e:
        case 0xad:
          goto switchD_14fbae14e_caseD_3c;
        case 0x5c:
          io::zc_sink_internal::ZeroCopyStreamByteSink::Append
                    ((ZeroCopyStreamByteSink *)this,"\\\\",2);
        }
      }
      else {
        if (uVar9 < 0xfffa) {
          if ((((uVar9 != 0xfff9) && (uVar9 != 0x70f)) && (uVar9 != 0x17b4)) && (uVar9 != 0x17b5)) {
            bVar12 = uVar9 == 0xfeff;
LAB_14fbae246:
            if (!bVar12) goto switchD_14fbae14e_caseD_b;
          }
        }
        else if ((uVar9 != 0xfffa) && (uVar9 != 0xfffb)) {
          bVar12 = uVar9 == 0xe0001;
          goto LAB_14fbae246;
        }
switchD_14fbae14e_caseD_3c:
        uVar7 = (ushort)uVar9;
        if (0xffff < uVar9) {
          WriteUEscape(this,(short)(uVar9 >> 10) + 0xd7c0);
          uVar7 = (uVar7 & 0x3ff) + 0xdc00;
        }
        WriteUEscape(this,uVar7);
      }
    }
    else {
      uVar9 = (uint)bVar1;
      if (iVar8 == 2) {
        iVar8 = 1;
        uVar9 = uVar9 & 0x1f;
LAB_14fbae091:
        iVar11 = 0;
        do {
          uVar2 = param_1->_Mysize;
          if (uVar2 == 0) goto LAB_14fbae0fb;
          bVar1 = *param_1->_Mydata;
          if (uVar2 == 0) goto LAB_14fbae2fc;
          uVar5 = 0xffffffffffffffff;
          if (uVar2 - 1 != 0xffffffffffffffff) {
            uVar5 = uVar2 - 1;
          }
          _Var10 = _Var10 + 1;
          param_1->_Mydata = param_1->_Mydata + 1;
          param_1->_Mysize = uVar5;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_14fbae0fb;
          uVar9 = bVar1 & 0x3f | uVar9 << 6;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar8);
        goto LAB_14fbae0f3;
      }
      if (iVar8 == 3) {
        iVar8 = 2;
        uVar9 = uVar9 & 0xf;
        goto LAB_14fbae091;
      }
      if (iVar8 == 4) {
        iVar8 = 3;
        uVar9 = uVar9 & 7;
        goto LAB_14fbae091;
      }
LAB_14fbae0fb:
      io::zc_sink_internal::ZeroCopyStreamByteSink::Append((ZeroCopyStreamByteSink *)this," ",1);
    }
    uVar2 = param_1->_Mysize;
    iVar8 = __isa_available;
  } while( true );
}

// WriteUEscape @ 14fbae3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __cdecl google::protobuf::json_internal::JsonWriter::WriteUEscape(unsigned short)
   __ptr64 */

void __thiscall
google::protobuf::json_internal::JsonWriter::WriteUEscape(JsonWriter *this,ushort param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_28 = (undefined8 *)CONCAT62(local_28._2_6_,param_1);
  local_38 = local_28;
  uStack_20 = 1;
  local_30 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_short>;
  local_28 = &local_38;
  local_58 = "\\u%04x";
  uStack_40 = 1;
  uStack_3c = 0;
  local_50 = 6;
  local_48 = local_28;
  iVar1 = absl::lts_20240722::str_format_internal::SnprintF(&local_28,7,&local_58,&local_48);
  io::zc_sink_internal::ZeroCopyStreamByteSink::Append
            ((ZeroCopyStreamByteSink *)this,(char *)&local_28,(longlong)iVar1);
  return;
}

