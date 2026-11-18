// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 24

// _Compressed_pair<std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64,1><absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64&___ptr64> @ 14f9191e0

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64,1>::_Compressed_pair<struct
   std::default_delete<class absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64,1><class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64 & __ptr64>(struct
   std::_Zero_then_variadic_args_t,class absl::lts_20240722::time_internal::cctz::TimeZoneLibC *
   __ptr64 & __ptr64) __ptr64 */

_Compressed_pair<std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64,1>
::
_Compressed_pair<std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64,1><absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1,TimeZoneLibC **param_2)

{
  *(TimeZoneLibC **)this = *param_2;
  return this;
}

// unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneLibC,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>_><std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,0> @ 14f9191f0

/* public: __cdecl std::unique_ptr<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC,struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC> >::unique_ptr<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC,struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC> ><struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,0>(class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64) __ptr64 */

unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneLibC,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>_>
* __thiscall
std::
unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneLibC,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>_>
::
unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneLibC,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>_><std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>,0>
          (unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneLibC,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneLibC>_>
           *this,TimeZoneLibC *param_1)

{
  *(TimeZoneLibC **)this = param_1;
  return this;
}

// forward<absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64&___ptr64> @ 14f919200

/* class absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64 & __ptr64 __cdecl
   std::forward<class absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64 &
   __ptr64>(class absl::lts_20240722::time_internal::cctz::TimeZoneLibC * __ptr64 & __ptr64) */

TimeZoneLibC ** __cdecl
std::forward<absl::lts_20240722::time_internal::cctz::TimeZoneLibC*___ptr64&___ptr64>
          (TimeZoneLibC **param_1)

{
  return param_1;
}

// move<__int64&___ptr64> @ 14f919210

/* __int64 && __ptr64 __cdecl std::move<__int64 & __ptr64>(__int64 & __ptr64) */

__int64 * __cdecl std::move<__int64&___ptr64>(__int64 *param_1)

{
  return param_1;
}

// swap<__int64,0> @ 14f919220

/* void __cdecl std::swap<__int64,0>(__int64 & __ptr64,__int64 & __ptr64) */

void __cdecl std::swap<__int64,0>(__int64 *param_1,__int64 *param_2)

{
  __int64 _Var1;
  
  _Var1 = *param_1;
  *param_1 = *param_2;
  *param_2 = _Var1;
  return;
}

// TimeZoneLibC @ 14f919240

/* private: __cdecl absl::lts_20240722::time_internal::cctz::TimeZoneLibC::TimeZoneLibC(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

TimeZoneLibC * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::TimeZoneLibC
          (TimeZoneLibC *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  int iVar2;
  
  *(undefined ***)this = vftable;
  p_Var1 = &param_1->_Mypair;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((p_Var1->_Myval2)._Mysize == 9) {
    iVar2 = memcmp(param_1,"localtime",9);
    if (iVar2 == 0) {
      this[8] = (TimeZoneLibC)0x1;
      return this;
    }
  }
  this[8] = (TimeZoneLibC)0x0;
  return this;
}

// absolute_lookup @ 14f9192a0

/* public: __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::absolute_lookup::absolute_lookup(void)
   __ptr64 */

absolute_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::absolute_lookup::absolute_lookup
          (absolute_lookup *this)

{
  (this->cs).f_.y = 0x7b2;
  (this->cs).f_.m = '\x01';
  (this->cs).f_.d = '\x01';
  (this->cs).f_.hh = '\0';
  (this->cs).f_.mm = '\0';
  (this->cs).f_.ss = '\0';
  return this;
}

// ~TimeZoneLibC @ 14f9192c0

/* public: virtual __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::~TimeZoneLibC(void) __ptr64 */

void __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::~TimeZoneLibC(TimeZoneLibC *this)

{
  TimeZoneIf::~TimeZoneIf((TimeZoneIf *)this);
  return;
}

// `vector_deleting_destructor' @ 14f9192d0

/* public: virtual void * __ptr64 __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::`vector deleting destructor'(unsigned int)
   __ptr64 */

void * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::_vector_deleting_destructor_
          (TimeZoneLibC *this,uint param_1)

{
  TimeZoneIf::~TimeZoneIf((TimeZoneIf *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// BreakTime @ 14f919310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual struct absl::lts_20240722::time_internal::cctz::time_zone::absolute_lookup
   __cdecl absl::lts_20240722::time_internal::cctz::TimeZoneLibC::BreakTime(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64)const __ptr64 */

absolute_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::BreakTime
          (TimeZoneLibC *this,absolute_lookup *__return_storage_ptr__,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  schar sVar6;
  schar sVar7;
  undefined3 uVar8;
  int iVar9;
  fields *pfVar10;
  long *plVar11;
  char **ppcVar12;
  char *pcVar13;
  long lVar14;
  tm *ptVar15;
  tm *ptVar16;
  undefined1 auStackY_a8 [32];
  duration<__int64,std::ratio<1,1>_> local_68;
  undefined8 uStack_60;
  fields local_58;
  tm local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->cs).f_.y = 0x7b2;
  (__return_storage_ptr__->cs).f_.m = '\x01';
  (__return_storage_ptr__->cs).f_.d = '\x01';
  (__return_storage_ptr__->cs).f_.hh = '\0';
  (__return_storage_ptr__->cs).f_.mm = '\0';
  ptVar15 = (tm *)0x0;
  (__return_storage_ptr__->cs).f_.ss = '\0';
  lVar14 = 0;
  __return_storage_ptr__->offset = 0;
  __return_storage_ptr__->is_dst = false;
  __return_storage_ptr__->abbr = "-00";
  lVar1 = (param_1->_MyDur)._MyRep;
  local_68._MyRep = lVar1;
  if (this[8] == (TimeZoneLibC)0x0) {
    iVar9 = _gmtime64_s(&local_48,&local_68._MyRep);
  }
  else {
    iVar9 = _localtime64_s(&local_48,&local_68._MyRep);
  }
  ptVar16 = &local_48;
  if (iVar9 != 0) {
    ptVar16 = ptVar15;
  }
  if (ptVar16 == (tm *)0x0) {
    if (lVar1 < 0) {
      (__return_storage_ptr__->cs).f_.y = -0x8000000000000000;
      uStack_60._0_1_ = (undefined1)0x101;
      uStack_60._1_1_ = (undefined1)(0x101 >> 8);
      uStack_60._2_1_ = (undefined1)(0x101 >> 0x10);
      uStack_60._3_1_ = (undefined1)(0x101 >> 0x18);
      uStack_60._4_1_ = (undefined1)(0x101 >> 0x20);
      (__return_storage_ptr__->cs).f_.m = (undefined1)uStack_60;
      (__return_storage_ptr__->cs).f_.d = uStack_60._1_1_;
      (__return_storage_ptr__->cs).f_.hh = uStack_60._2_1_;
      (__return_storage_ptr__->cs).f_.mm = uStack_60._3_1_;
      (__return_storage_ptr__->cs).f_.ss = uStack_60._4_1_;
      *(undefined3 *)&(__return_storage_ptr__->cs).f_.field_0xd = uStack_60._5_3_;
    }
    else {
      detail::impl::n_day(&local_58,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';');
      (__return_storage_ptr__->cs).f_.y = local_58.y;
      (__return_storage_ptr__->cs).f_.m = local_58.m;
      (__return_storage_ptr__->cs).f_.d = local_58.d;
      (__return_storage_ptr__->cs).f_.hh = local_58.hh;
      (__return_storage_ptr__->cs).f_.mm = local_58.mm;
      (__return_storage_ptr__->cs).f_.ss = local_58.ss;
      *(undefined3 *)&(__return_storage_ptr__->cs).f_.field_0xd = local_58._13_3_;
    }
  }
  else {
    pfVar10 = detail::impl::n_sec(&local_58,(longlong)ptVar16->tm_year + 0x76c,
                                  (longlong)ptVar16->tm_mon + 1,(longlong)ptVar16->tm_mday,
                                  (longlong)ptVar16->tm_hour,(longlong)ptVar16->tm_min,
                                  (longlong)ptVar16->tm_sec);
    uVar2 = *(undefined4 *)((longlong)&pfVar10->y + 4);
    sVar3 = pfVar10->m;
    sVar4 = pfVar10->d;
    sVar5 = pfVar10->hh;
    sVar6 = pfVar10->mm;
    sVar7 = pfVar10->ss;
    uVar8 = *(undefined3 *)&pfVar10->field_0xd;
    *(int *)&(__return_storage_ptr__->cs).f_.y = (int)pfVar10->y;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->cs).f_.y + 4) = uVar2;
    (__return_storage_ptr__->cs).f_.m = sVar3;
    (__return_storage_ptr__->cs).f_.d = sVar4;
    (__return_storage_ptr__->cs).f_.hh = sVar5;
    (__return_storage_ptr__->cs).f_.mm = sVar6;
    (__return_storage_ptr__->cs).f_.ss = sVar7;
    *(undefined3 *)&(__return_storage_ptr__->cs).f_.field_0xd = uVar8;
    if (0 < ptVar16->tm_isdst) {
      plVar11 = __dstbias();
      lVar14 = *plVar11;
    }
    plVar11 = __timezone();
    __return_storage_ptr__->offset = *plVar11 + lVar14;
    if (this[8] == (TimeZoneLibC)0x0) {
      pcVar13 = "UTC";
    }
    else {
      iVar9 = ptVar16->tm_isdst;
      ppcVar12 = __tzname();
      if (0 < iVar9) {
        ptVar15 = (tm *)&DAT_00000008;
      }
      pcVar13 = *(char **)((longlong)ppcVar12 + (longlong)ptVar15);
    }
    iVar9 = ptVar16->tm_isdst;
    __return_storage_ptr__->abbr = pcVar13;
    __return_storage_ptr__->is_dst = 0 < iVar9;
  }
  return __return_storage_ptr__;
}

// Description @ 14f9194f0

/* public: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Description(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Description
          (TimeZoneLibC *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  TimeZoneLibC TVar1;
  char *pcVar2;
  ulong64 uVar3;
  
  pcVar2 = "UTC";
  TVar1 = this[8];
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  if (TVar1 != (TimeZoneLibC)0x0) {
    pcVar2 = "localtime";
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (pcVar2[uVar3] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,pcVar2,uVar3);
  return __return_storage_ptr__;
}

// Make @ 14f919560

/* public: static class std::unique_ptr<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC,struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC> > __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Make(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Make
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *in_RDX;
  
  pcVar3 = ::operator_new(0x10);
  if (pcVar3 == (char *)0x0) {
    (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    return param_1;
  }
  *(undefined ***)pcVar3 = vftable;
  plVar1 = in_RDX + 2;
  if (0xf < (ulonglong)in_RDX[3]) {
    in_RDX = (undefined8 *)*in_RDX;
  }
  if (*plVar1 == 9) {
    iVar2 = memcmp(in_RDX,"localtime",9);
    if (iVar2 == 0) {
      pcVar3[8] = '\x01';
      (param_1->_Mypair)._Myval2._Bx._Ptr = pcVar3;
      return param_1;
    }
  }
  pcVar3[8] = '\0';
  (param_1->_Mypair)._Myval2._Bx._Ptr = pcVar3;
  return param_1;
}

// MakeTime @ 14f919620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct absl::lts_20240722::time_internal::cctz::time_zone::civil_lookup __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::MakeTime(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64)const __ptr64 */

civil_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::MakeTime
          (TimeZoneLibC *this,civil_lookup *__return_storage_ptr__,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1)

{
  longlong lVar1;
  char cVar2;
  errno_t eVar3;
  long *plVar4;
  duration<__int64,std::ratio<1,1>_> dVar5;
  tm *ptVar6;
  long lVar7;
  duration<__int64,std::ratio<1,1>_> dVar8;
  int iVar9;
  tm *ptVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStackY_148 [32];
  fields local_108;
  duration<__int64,std::ratio<1,1>_> local_f8;
  duration<__int64,std::ratio<1,1>_> local_f0;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> local_e8;
  tm local_d8;
  tm local_b0;
  undefined1 local_88 [32];
  int local_68;
  tm local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this[8] == (TimeZoneLibC)0x0) {
    piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar11 < DAT_1553e49b8) && (_Init_thread_header(&DAT_1553e49b8), DAT_1553e49b8 == -1)) {
      detail::impl::n_sec(&local_108,0x7b2,1,1,0,-0x222222222222222,-8);
      DAT_1553e49a8 = local_108.y;
      DAT_1553e49b0 = local_108.m;
      DAT_1553e49b1 = local_108.d;
      DAT_1553e49b2 = local_108.hh;
      DAT_1553e49b3 = local_108.mm;
      DAT_1553e49b4 = local_108.ss;
      DAT_1553e49b0_1._4_3_ = local_108._13_3_;
      _Init_thread_footer(&DAT_1553e49b8);
    }
    if ((*piVar11 < DAT_1553e49d0) && (_Init_thread_header(&DAT_1553e49d0), DAT_1553e49d0 == -1)) {
      detail::impl::n_sec(&local_108,0x7b2,1,1,0,0x222222222222222,7);
      DAT_1553e49c0 = local_108.y;
      DAT_1553e49c8 = local_108.m;
      DAT_1553e49c9 = local_108.d;
      DAT_1553e49ca = local_108.hh;
      DAT_1553e49cb = local_108.mm;
      DAT_1553e49cc = local_108.ss;
      DAT_1553e49c8_1._4_3_ = local_108._13_3_;
      _Init_thread_footer(&DAT_1553e49d0);
    }
    lVar1 = (param_1->f_).y;
    if (lVar1 < DAT_1553e49a8) {
LAB_14f919af7:
      local_f8._MyRep = -0x8000000000000000;
      goto LAB_14f919b01;
    }
    if (lVar1 == DAT_1553e49a8) {
      cVar2 = (param_1->f_).m;
      if (cVar2 < DAT_1553e49b0) goto LAB_14f919af7;
      if (cVar2 == DAT_1553e49b0) {
        cVar2 = (param_1->f_).d;
        if (cVar2 < DAT_1553e49b1) goto LAB_14f919af7;
        if (cVar2 == DAT_1553e49b1) {
          cVar2 = (param_1->f_).hh;
          if (cVar2 < DAT_1553e49b2) goto LAB_14f919af7;
          if (cVar2 == DAT_1553e49b2) {
            cVar2 = (param_1->f_).mm;
            if ((cVar2 < DAT_1553e49b3) ||
               ((cVar2 == DAT_1553e49b3 && ((param_1->f_).ss < DAT_1553e49b4)))) goto LAB_14f919af7;
          }
        }
      }
    }
    if (lVar1 <= DAT_1553e49c0) {
      if (DAT_1553e49c0 == lVar1) {
        cVar2 = (param_1->f_).m;
        if (DAT_1553e49c8 < cVar2) goto LAB_14f919aeb;
        if (DAT_1553e49c8 == cVar2) {
          cVar2 = (param_1->f_).d;
          if (DAT_1553e49c9 < cVar2) goto LAB_14f919aeb;
          if (DAT_1553e49c9 == cVar2) {
            cVar2 = (param_1->f_).hh;
            if (DAT_1553e49ca < cVar2) goto LAB_14f919aeb;
            if (DAT_1553e49ca == cVar2) {
              cVar2 = (param_1->f_).mm;
              if ((DAT_1553e49cb < cVar2) ||
                 ((DAT_1553e49cb == cVar2 && (DAT_1553e49cc < (param_1->f_).ss))))
              goto LAB_14f919aeb;
            }
          }
        }
      }
      local_e8.f_.y = (param_1->f_).y;
      local_e8.f_.m = (param_1->f_).m;
      local_e8.f_.d = (param_1->f_).d;
      local_e8.f_.hh = (param_1->f_).hh;
      local_e8.f_.mm = (param_1->f_).mm;
      local_e8.f_.ss = (param_1->f_).ss;
      local_e8.f_._13_3_ = *(undefined3 *)&(param_1->f_).field_0xd;
      local_108.m = '\x01';
      local_108.d = '\x01';
      local_108.hh = '\0';
      local_108.mm = '\0';
      local_108.ss = '\0';
      local_108.y = 0x7b2;
      local_f8._MyRep =
           detail::operator-(&local_e8,
                             (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>
                              *)&local_108);
      goto LAB_14f919b01;
    }
  }
  else {
    lVar1 = (param_1->f_).y;
    if (lVar1 < 0) {
      if (lVar1 < -0x7ffff894) {
        __return_storage_ptr__->kind = UNIQUE;
        (__return_storage_ptr__->pre)._MyDur._MyRep = -0x8000000000000000;
        (__return_storage_ptr__->trans)._MyDur._MyRep = -0x8000000000000000;
        (__return_storage_ptr__->post)._MyDur._MyRep = -0x8000000000000000;
        return __return_storage_ptr__;
      }
    }
    else if (0x7fffffff < lVar1 + -0x76c) {
      __return_storage_ptr__->kind = UNIQUE;
      (__return_storage_ptr__->pre)._MyDur._MyRep = 0x7fffffffffffffff;
      (__return_storage_ptr__->trans)._MyDur._MyRep = 0x7fffffffffffffff;
      (__return_storage_ptr__->post)._MyDur._MyRep = 0x7fffffffffffffff;
      return __return_storage_ptr__;
    }
    local_d8.tm_year = (int)lVar1 + -0x76c;
    ptVar10 = (tm *)0x0;
    local_d8.tm_mon = (param_1->f_).m + -1;
    iVar9 = 0;
    local_d8.tm_isdst = 0;
    local_d8.tm_mday = (int)(param_1->f_).d;
    local_d8.tm_hour = (int)(param_1->f_).hh;
    local_d8.tm_min = (int)(param_1->f_).mm;
    local_d8.tm_sec = (int)(param_1->f_).ss;
    local_f8._MyRep = _mktime64(&local_d8);
    if (local_f8._MyRep == -1) {
      eVar3 = _localtime64_s(&local_60,&local_f8._MyRep);
      ptVar6 = &local_60;
      if (eVar3 != 0) {
        ptVar6 = ptVar10;
      }
      if (((((ptVar6 != (tm *)0x0) && (ptVar6->tm_year == local_d8.tm_year)) &&
           (ptVar6->tm_mon == local_d8.tm_mon)) &&
          ((ptVar6->tm_mday == local_d8.tm_mday && (ptVar6->tm_hour == local_d8.tm_hour)))) &&
         ((ptVar6->tm_min == local_d8.tm_min && (ptVar6->tm_sec == local_d8.tm_sec))))
      goto LAB_14f9198b7;
    }
    else {
LAB_14f9198b7:
      cVar2 = FUN_14f919e20(param_1,1,&local_f0,local_88);
      if (cVar2 != '\0') {
        if (local_d8.tm_isdst != local_68) {
          lVar7 = iVar9;
          if (0 < local_d8.tm_isdst) {
            plVar4 = __dstbias();
            lVar7 = *plVar4;
          }
          plVar4 = __timezone();
          dVar5._MyRep = local_f8._MyRep;
          iVar12 = *plVar4 + lVar7;
          if (local_f8._MyRep < local_f0._MyRep) {
            local_f8._MyRep = local_f0._MyRep;
            local_f0._MyRep = dVar5._MyRep;
            lVar7 = iVar9;
            if (0 < local_68) {
              plVar4 = __dstbias();
              lVar7 = *plVar4;
            }
            plVar4 = __timezone();
            iVar12 = *plVar4 + lVar7;
          }
          local_e8.f_.y = local_f0._MyRep;
          dVar5._MyRep = local_f8._MyRep;
          dVar8._MyRep = local_f8._MyRep;
          if (local_f0._MyRep + 1 != local_f8._MyRep) {
            do {
              local_108.y = (dVar8._MyRep - local_e8.f_.y) / 2 + local_e8.f_.y;
              eVar3 = _localtime64_s(&local_b0,&local_108.y);
              ptVar6 = &local_b0;
              if (eVar3 != 0) {
                ptVar6 = ptVar10;
              }
              if (ptVar6 == (tm *)0x0) goto joined_r0x00014f919a2e;
              lVar7 = iVar9;
              if (0 < ptVar6->tm_isdst) {
                plVar4 = __dstbias();
                lVar7 = *plVar4;
              }
              plVar4 = __timezone();
              dVar5._MyRep = local_108.y;
              if (*plVar4 + lVar7 != iVar12) {
                local_e8.f_.y = local_108.y;
                dVar5._MyRep = dVar8._MyRep;
              }
              dVar8._MyRep = dVar5._MyRep;
            } while (local_e8.f_.y + 1 != dVar5._MyRep);
          }
LAB_14f9199f3:
          (__return_storage_ptr__->trans)._MyDur._MyRep = dVar5._MyRep;
          if (local_d8.tm_isdst != 0) {
            __return_storage_ptr__->kind = SKIPPED;
            (__return_storage_ptr__->pre)._MyDur._MyRep = local_f8._MyRep;
            (__return_storage_ptr__->post)._MyDur._MyRep = local_f0._MyRep;
            return __return_storage_ptr__;
          }
          __return_storage_ptr__->kind = REPEATED;
          (__return_storage_ptr__->pre)._MyDur._MyRep = local_f0._MyRep;
          (__return_storage_ptr__->post)._MyDur._MyRep = local_f8._MyRep;
          return __return_storage_ptr__;
        }
        if (local_d8.tm_isdst != 0) {
          local_f8._MyRep = local_f0._MyRep;
        }
        goto LAB_14f919b01;
      }
    }
    lVar1 = (param_1->f_).y;
    if ((lVar1 < 0x7b2) ||
       ((lVar1 == 0x7b2 &&
        ((cVar2 = (param_1->f_).m, cVar2 < '\x01' ||
         ((cVar2 == '\x01' &&
          ((cVar2 = (param_1->f_).d, cVar2 < '\x01' ||
           ((cVar2 == '\x01' &&
            ((cVar2 = (param_1->f_).hh, cVar2 < '\0' ||
             ((cVar2 == '\0' &&
              ((cVar2 = (param_1->f_).mm, cVar2 < '\0' ||
               ((cVar2 == '\0' && ((param_1->f_).ss < '\0')))))))))))))))))))) goto LAB_14f919af7;
  }
LAB_14f919aeb:
  local_f8._MyRep = 0x7fffffffffffffff;
LAB_14f919b01:
  __return_storage_ptr__->kind = UNIQUE;
  (__return_storage_ptr__->post)._MyDur._MyRep = local_f8._MyRep;
  (__return_storage_ptr__->trans)._MyDur._MyRep = local_f8._MyRep;
  (__return_storage_ptr__->pre)._MyDur._MyRep = local_f8._MyRep;
  return __return_storage_ptr__;
  while( true ) {
    lVar7 = iVar9;
    if (0 < ptVar6->tm_isdst) {
      plVar4 = __dstbias();
      lVar7 = *plVar4;
    }
    plVar4 = __timezone();
    dVar5._MyRep = local_e8.f_.y;
    if (*plVar4 + lVar7 == iVar12) break;
joined_r0x00014f919a2e:
    do {
      local_e8.f_.y = local_e8.f_.y + 1;
      dVar5._MyRep = local_e8.f_.y;
      if (local_e8.f_.y == dVar8._MyRep) goto LAB_14f9199f3;
      eVar3 = _localtime64_s(&local_b0,(__time64_t *)&local_e8);
      ptVar6 = &local_b0;
      if (eVar3 != 0) {
        ptVar6 = ptVar10;
      }
    } while (ptVar6 == (tm *)0x0);
  }
  goto LAB_14f9199f3;
}

// NextTransition @ 14f919c10

/* public: virtual bool __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::NextTransition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::NextTransition
          (TimeZoneLibC *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  return false;
}

// PrevTransition @ 14f919c20

/* public: virtual bool __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::PrevTransition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::PrevTransition
          (TimeZoneLibC *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  return false;
}

// Version @ 14f919c30

/* public: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl
   absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Version(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::TimeZoneLibC::Version
          (TimeZoneLibC *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return __return_storage_ptr__;
}

// FUN_14f919c60 @ 14f919c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f919c60(longlong param_1,longlong param_2,int param_3)

{
  errno_t eVar1;
  long *plVar2;
  tm *ptVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  tm local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 + 1 == param_2) {
    return param_2;
  }
  local_58 = param_1;
  do {
    local_50 = (param_2 - local_58) / 2 + local_58;
    eVar1 = _localtime64_s(&local_48,&local_50);
    ptVar3 = &local_48;
    if (eVar1 != 0) {
      ptVar3 = (tm *)0x0;
    }
    lVar4 = 0;
    if (ptVar3 == (tm *)0x0) {
      do {
        do {
          local_58 = local_58 + 1;
          if (local_58 == param_2) {
            return local_58;
          }
          eVar1 = _localtime64_s(&local_48,&local_58);
          ptVar3 = &local_48;
          if (eVar1 != 0) {
            ptVar3 = (tm *)0x0;
          }
        } while (ptVar3 == (tm *)0x0);
        lVar5 = lVar4;
        if (0 < ptVar3->tm_isdst) {
          plVar2 = __dstbias();
          lVar5 = *plVar2;
        }
        plVar2 = __timezone();
      } while (*plVar2 + lVar5 != param_3);
      return local_58;
    }
    if (0 < ptVar3->tm_isdst) {
      plVar2 = __dstbias();
      lVar4 = *plVar2;
    }
    plVar2 = __timezone();
    if (*plVar2 + lVar4 != param_3) {
      local_58 = local_50;
      local_50 = param_2;
    }
    param_2 = local_50;
  } while (local_58 + 1 != local_50);
  return local_50;
}

// FUN_14f919dc0 @ 14f919dc0

tm * FUN_14f919dc0(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  
  eVar1 = _gmtime64_s(param_2,param_1);
  if (eVar1 != 0) {
    param_2 = (tm *)0x0;
  }
  return param_2;
}

// FUN_14f919df0 @ 14f919df0

tm * FUN_14f919df0(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  
  eVar1 = _localtime64_s(param_2,param_1);
  if (eVar1 != 0) {
    param_2 = (tm *)0x0;
  }
  return param_2;
}

// FUN_14f919e20 @ 14f919e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f919e20(int *param_1,int param_2,__time64_t *param_3,tm *param_4)

{
  errno_t eVar1;
  __time64_t _Var2;
  tm *ptVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  tm local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_4->tm_year = *param_1 + -0x76c;
  param_4->tm_mon = (char)param_1[2] + -1;
  param_4->tm_mday = (int)*(char *)((longlong)param_1 + 9);
  param_4->tm_hour = (int)*(char *)((longlong)param_1 + 10);
  param_4->tm_min = (int)*(char *)((longlong)param_1 + 0xb);
  param_4->tm_sec = (int)(char)param_1[3];
  param_4->tm_isdst = param_2;
  _Var2 = _mktime64(param_4);
  *param_3 = _Var2;
  if (_Var2 == -1) {
    eVar1 = _localtime64_s(&local_38,param_3);
    ptVar3 = &local_38;
    if (eVar1 != 0) {
      ptVar3 = (tm *)0x0;
    }
    if ((((ptVar3 == (tm *)0x0) || (ptVar3->tm_year != param_4->tm_year)) ||
        (ptVar3->tm_mon != param_4->tm_mon)) ||
       (((ptVar3->tm_mday != param_4->tm_mday || (ptVar3->tm_hour != param_4->tm_hour)) ||
        (ptVar3->tm_min != param_4->tm_min)))) {
      bVar4 = false;
    }
    else {
      bVar4 = ptVar3->tm_sec == param_4->tm_sec;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// max @ 14f919f00

/* public: static class absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> __cdecl
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::max(void) */

void __cdecl
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::max(void)

{
  long64 *in_RCX;
  fields local_18;
  
  impl::n_day(&local_18,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';');
  *in_RCX = local_18.y;
  in_RCX[1] = local_18._8_8_;
  return;
}

// min @ 14f919f60

/* public: static class absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> __cdecl
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::min(void) */

void __cdecl
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::min(void)

{
  undefined8 *in_RCX;
  uint uStack_c;
  
  uStack_c = uStack_c & 0xffffff00;
  *in_RCX = 0x8000000000000000;
  in_RCX[1] = CONCAT44(uStack_c,0x101);
  return;
}

// FUN_14f919fa0 @ 14f919fa0

int FUN_14f919fa0(longlong param_1)

{
  int iVar1;
  long *plVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    plVar2 = __dstbias();
    iVar1 = *plVar2;
    plVar2 = __timezone();
    return *plVar2 + iVar1;
  }
  plVar2 = __timezone();
  return *plVar2;
}

// FUN_14f919fe0 @ 14f919fe0

longlong FUN_14f919fe0(longlong param_1)

{
  int iVar1;
  char **ppcVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  ppcVar2 = __tzname();
  lVar3 = 0;
  if (0 < iVar1) {
    lVar3 = 8;
  }
  return (longlong)ppcVar2 + lVar3;
}

