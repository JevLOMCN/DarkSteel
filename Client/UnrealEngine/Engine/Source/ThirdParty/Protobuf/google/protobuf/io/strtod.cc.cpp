// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 17

// FormatArgImpl<float> @ 14fb6a850

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<float>(float const &
   __ptr64) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<float>
          (FormatArgImpl *this,float *param_1)

{
  Data DVar1;
  undefined4 uStackX_c;
  
  DVar1._4_4_ = uStackX_c;
  DVar1._0_4_ = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<float>;
  return this;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848>_> @ 14fb6a880

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848>_>
          (FormatSpecTemplate<655355,654848> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Init<float> @ 14fb6a890

/* private: void __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Init<float>(float
   const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::Init<float>
          (FormatArgImpl *this,float *param_1)

{
  Data DVar1;
  undefined4 uStackX_c;
  
  DVar1._4_4_ = uStackX_c;
  DVar1._0_4_ = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<float>;
  return;
}

// SNPrintF<> @ 14fb6a8b0

/* int __cdecl absl::lts_20240722::SNPrintF<>(char * __ptr64,unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<> const & __ptr64) */

int __cdecl
absl::lts_20240722::SNPrintF<>(char *param_1,__uint64 param_2,FormatSpecTemplate<> *param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = *(undefined4 *)param_3;
  uStack_14 = *(undefined4 *)(param_3 + 4);
  uStack_10 = *(undefined4 *)(param_3 + 8);
  uStack_c = *(undefined4 *)(param_3 + 0xc);
  iVar1 = str_format_internal::SnprintF(local_18,param_2,&local_18,&local_28);
  return iVar1;
}

// SNPrintF<int,float> @ 14fb6a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::SNPrintF<int,float>(char * __ptr64,unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848> const & __ptr64,int
   const & __ptr64,float const & __ptr64) */

int __cdecl
absl::lts_20240722::SNPrintF<int,float>
          (char *param_1,__uint64 param_2,FormatSpecTemplate<655355,654848> *param_3,int *param_4,
          float *param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)param_3;
  uStack_44 = *(undefined4 *)(param_3 + 4);
  uStack_40 = *(undefined4 *)(param_3 + 8);
  uStack_3c = *(undefined4 *)(param_3 + 0xc);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,*param_4);
  local_38 = local_58;
  local_30 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,*param_5);
  local_28 = local_58;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<float>;
  local_58 = &local_38;
  uStack_50 = 2;
  iVar1 = str_format_internal::SnprintF(param_1,local_48,&local_48,&local_58);
  return iVar1;
}

// SNPrintF<int,double> @ 14fb6a990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::SNPrintF<int,double>(char * __ptr64,unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848> const & __ptr64,int
   const & __ptr64,double const & __ptr64) */

int __cdecl
absl::lts_20240722::SNPrintF<int,double>
          (char *param_1,__uint64 param_2,FormatSpecTemplate<655355,654848> *param_3,int *param_4,
          double *param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  code *local_30;
  double local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,*param_4);
  local_38 = local_58;
  local_48 = *(undefined4 *)param_3;
  uStack_44 = *(undefined4 *)(param_3 + 4);
  uStack_40 = *(undefined4 *)(param_3 + 8);
  uStack_3c = *(undefined4 *)(param_3 + 0xc);
  local_30 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_28 = *param_5;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<double>;
  local_58 = &local_38;
  uStack_50 = 2;
  iVar1 = str_format_internal::SnprintF(local_58._0_4_,local_48,&local_48,&local_58);
  return iVar1;
}

// FormatSpecTemplate<655355,654848> @ 14fb6aa30

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848>::FormatSpecTemplate<655355,654848>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<655355,654848> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,654848>::
FormatSpecTemplate<655355,654848>(FormatSpecTemplate<655355,654848> *this,char *param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  *(longlong *)(this + 8) = lVar1;
  *(char **)this = param_1;
  return this;
}

// FUN_14fb6aa60 @ 14fb6aa60

void FUN_14fb6aa60(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  pcVar3 = strchr(param_1,0x2e);
  if (pcVar3 == (char *)0x0) {
    while( true ) {
      bVar1 = *param_1 - 0x2b;
      if ((0x3a < bVar1) || ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
      break;
      param_1 = param_1 + 1;
    }
    if (*param_1 != '\0') {
      *param_1 = '.';
      param_1 = param_1 + 1;
      bVar1 = *param_1 - 0x2b;
      if (((0x3a < bVar1) || ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) &&
         (pcVar3 = param_1, *param_1 != '\0')) {
        do {
          pcVar2 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
          bVar1 = *pcVar2 - 0x2b;
          if ((bVar1 < 0x3b) && ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0))
          break;
        } while (*pcVar2 != '\0');
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (pcVar3[lVar4] != '\0');
        memmove(param_1,pcVar3,lVar5 + 2);
        return;
      }
    }
  }
  return;
}

// FUN_14fb6ab20 @ 14fb6ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14fb6ab20(double param_1,char *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  double *local_a8;
  undefined8 uStack_a0;
  double *local_98;
  undefined8 uStack_90;
  double *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78 [16];
  double local_68;
  code *local_60;
  double local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == __real_7ff0000000000000) {
    local_b8 = "inf";
    local_b0 = 3;
  }
  else if (param_1 == __real_fff0000000000000) {
    local_b8 = "-inf";
    local_b0 = 4;
  }
  else {
    if (!NAN(param_1) && !NAN(param_1)) {
      local_b8 = (char *)CONCAT44(local_b8._4_4_,0xf);
      local_68 = (double)local_b8;
      local_98 = &local_68;
      uStack_90 = 2;
      uStack_80 = 2;
      uStack_7c = 0;
      local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
      local_50 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<double>;
      local_a8 = (double *)0x1535ddfb8;
      uStack_a0 = 4;
      local_58 = param_1;
      local_88 = local_98;
      absl::lts_20240722::str_format_internal::SnprintF(param_2,0x20,&local_a8,&local_88);
      local_b8 = (char *)0x0;
      pdVar1 = (double *)strchr(param_2,0);
      local_c8 = 3;
      lVar2 = absl::lts_20240722::from_chars(local_78,param_2,pdVar1,(chars_format)&local_b8);
      if ((*(int *)(lVar2 + 8) == 0x22) &&
         ((dVar3 = __real_7ff0000000000000, __real_3ff0000000000000 < (double)local_b8 ||
          (dVar3 = __real_fff0000000000000, (double)local_b8 < __real_bff0000000000000)))) {
        local_b8 = (char *)dVar3;
      }
      if ((double)local_b8 != param_1) {
        local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        local_b8 = (char *)CONCAT44(local_b8._4_4_,0x11);
        local_68 = (double)local_b8;
        local_a8 = &local_68;
        uStack_a0 = 2;
        uStack_80 = 2;
        uStack_7c = 0;
        local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
        local_50 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<double>;
        local_98 = (double *)0x1535ddfb8;
        uStack_90 = 4;
        local_58 = param_1;
        local_88 = local_a8;
        absl::lts_20240722::str_format_internal::SnprintF(param_2,0x20,&local_98,&local_88);
      }
      FUN_14fb6aa60(param_2);
      return param_2;
    }
    local_b8 = "nan";
    local_b0 = 3;
  }
  local_a8 = (double *)0x0;
  uStack_a0 = 0;
  absl::lts_20240722::str_format_internal::SnprintF(param_2,0x20,&local_b8,&local_a8);
  return param_2;
}

// FUN_14fb6ad80 @ 14fb6ad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14fb6ad80(float param_1,char *param_2)

{
  int *piVar1;
  float fVar2;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 uStack_90;
  char **local_88;
  undefined8 uStack_80;
  char *local_78;
  code *local_70;
  char *local_68;
  code *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((double)param_1 == __real_7ff0000000000000) {
    local_98 = "inf";
    uStack_90 = 3;
  }
  else if ((double)param_1 == __real_fff0000000000000) {
    local_98 = "-inf";
    uStack_90 = 4;
  }
  else {
    if (!NAN(param_1)) {
      local_98 = (char *)CONCAT44(local_98._4_4_,6);
      local_78 = local_98;
      local_98 = (char *)CONCAT44(local_98._4_4_,param_1);
      local_68 = local_98;
      local_88 = &local_78;
      uStack_80 = 2;
      local_70 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
      local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<float>;
      local_98 = "%.*g";
      uStack_90 = 4;
      absl::lts_20240722::str_format_internal::SnprintF(param_2,0x18,&local_98,&local_88);
      piVar1 = _errno();
      *piVar1 = 0;
      fVar2 = (float)strtof(param_2,&local_98);
      if ((((*param_2 == '\0') || (*local_98 != '\0')) || (piVar1 = _errno(), *piVar1 != 0)) ||
         (fVar2 != param_1)) {
        local_98 = (char *)CONCAT44(local_98._4_4_,9);
        local_78 = local_98;
        local_98 = (char *)CONCAT44(local_98._4_4_,param_1);
        local_68 = local_98;
        local_88 = &local_78;
        uStack_80 = 2;
        local_70 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
        local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<float>;
        local_98 = "%.*g";
        uStack_90 = 4;
        absl::lts_20240722::str_format_internal::SnprintF(param_2,0x18,&local_98,&local_88);
      }
      FUN_14fb6aa60(param_2);
      return param_2;
    }
    local_98 = "nan";
    uStack_90 = 3;
  }
  local_88 = (char **)0x0;
  uStack_80 = 0;
  absl::lts_20240722::str_format_internal::SnprintF(param_2,0x18,&local_98,&local_88);
  return param_2;
}

// NoLocaleStrtod @ 14fb6aff0

/* double __cdecl google::protobuf::io::NoLocaleStrtod(char const * __ptr64,char * __ptr64 *
   __ptr64) */

double __cdecl google::protobuf::io::NoLocaleStrtod(char *param_1,char **param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double local_res10 [3];
  char local_18 [16];
  
  local_res10[0] = 0.0;
  pdVar1 = (double *)strchr(param_1,0);
  puVar2 = (undefined8 *)
           absl::lts_20240722::from_chars(local_18,param_1,pdVar1,(chars_format)local_res10);
  dVar3 = local_res10[0];
  if (((*(int *)(puVar2 + 1) == 0x22) &&
      (dVar3 = __real_7ff0000000000000, local_res10[0] <= __real_3ff0000000000000)) &&
     (dVar3 = local_res10[0], local_res10[0] < __real_bff0000000000000)) {
    dVar3 = __real_fff0000000000000;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = (char *)*puVar2;
  }
  return dVar3;
}

// SafeDoubleToFloat @ 14fb6b090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl google::protobuf::io::SafeDoubleToFloat(double) */

float __cdecl google::protobuf::io::SafeDoubleToFloat(double param_1)

{
  if (__real_47efffffe0000000 < param_1) {
    if (param_1 <= __real_47effffff0000000) {
      return __real_7f7fffff;
    }
    return __real_7f800000;
  }
  if (__real_c7efffffe0000000 <= param_1) {
    return (float)param_1;
  }
  if (___real_c7effffff0000000 <= param_1) {
    return __real_ff7fffff;
  }
  return __real_ff800000;
}

// SetValue @ 14fb6b100

/* public: static union absl::lts_20240722::str_format_internal::FormatArgImpl::Data __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<float,2>::SetValue(float const &
   __ptr64) */

Data __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<float,2>::SetValue(float *param_1)

{
  Data DVar1;
  undefined4 uStackX_c;
  
  DVar1._4_4_ = uStackX_c;
  DVar1._0_4_ = *param_1;
  return (Data)DVar1.ptr;
}

// SimpleDtoa @ 14fb6b120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::io::SimpleDtoa(double) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::io::SimpleDtoa
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          double param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = __return_storage_ptr__;
  pcVar1 = (char *)FUN_14fb6ab20(SUB84(param_1,0),local_38);
  uVar2 = 0xffffffffffffffff;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,pcVar1,uVar2);
  return __return_storage_ptr__;
}

// SimpleFtoa @ 14fb6b1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::io::SimpleFtoa(float) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::io::SimpleFtoa
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          float param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_58 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = __return_storage_ptr__;
  pcVar1 = (char *)FUN_14fb6ad80(param_1,local_28);
  uVar2 = 0xffffffffffffffff;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,pcVar1,uVar2);
  return __return_storage_ptr__;
}

// FUN_14fb6b240 @ 14fb6b240

undefined8 FUN_14fb6b240(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *local_res8;
  
  piVar1 = _errno();
  *piVar1 = 0;
  uVar2 = strtof(param_1,&local_res8);
  *param_2 = uVar2;
  if ((*param_1 != '\0') && (*local_res8 == '\0')) {
    piVar1 = _errno();
    if (*piVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// strchr @ 14fb6b2b0

/* char * __ptr64 __cdecl strchr(char * __ptr64 const,int) */

char * __cdecl strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,param_2);
  return pcVar1;
}

