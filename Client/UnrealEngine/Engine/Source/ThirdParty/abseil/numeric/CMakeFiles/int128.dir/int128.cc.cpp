// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 46

// operator<<<char,std::char_traits<char>_> @ 1501d2000

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<char,struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,struct std::_Fillobj<char> const & __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<char,std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,_Fillobj<char> *param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::fill
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),(char)*param_2);
  return (basic_ostream<char,std::char_traits<char>_> *)param_1;
}

// FUN_1501d2030 @ 1501d2030

longlong * FUN_1501d2030(longlong *param_1,float param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= param_2) {
    plVar3 = (longlong *)FUN_1501d21e0(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d21e0(local_28);
    local_38 = ~*puVar2 + 1;
    plVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  lVar1 = plVar3[1];
  *param_1 = *plVar3;
  param_1[1] = lVar1;
  return param_1;
}

// FUN_1501d20c0 @ 1501d20c0

longlong * FUN_1501d20c0(longlong *param_1,double param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= param_2) {
    plVar3 = (longlong *)FUN_1501d2320(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d2320(local_28);
    local_38 = ~*puVar2 + 1;
    plVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  lVar1 = plVar3[1];
  *param_1 = *plVar3;
  param_1[1] = lVar1;
  return param_1;
}

// FUN_1501d2150 @ 1501d2150

longlong * FUN_1501d2150(longlong *param_1,double param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= param_2) {
    plVar3 = (longlong *)FUN_1501d2450(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d2450(local_28);
    local_38 = ~*puVar2 + 1;
    plVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  lVar1 = plVar3[1];
  *param_1 = *plVar3;
  param_1[1] = lVar1;
  return param_1;
}

// FUN_1501d21e0 @ 1501d21e0

longlong * FUN_1501d21e0(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  
  dVar4 = ldexp(__real_3ff0000000000000,0x40);
  if (param_2 < (float)dVar4) {
    lVar3 = 0;
    if ((__real_5f000000 <= param_2) &&
       (param_2 = param_2 - __real_5f000000, param_2 < __real_5f000000)) {
      lVar3 = -0x8000000000000000;
    }
    param_1[1] = 0;
  }
  else {
    dVar4 = ldexp((double)param_2,-0x40);
    fVar1 = __real_5f000000;
    fVar5 = (float)dVar4;
    lVar2 = 0;
    if ((__real_5f000000 <= fVar5) && (fVar5 = fVar5 - __real_5f000000, fVar5 < __real_5f000000)) {
      lVar2 = -0x8000000000000000;
    }
    dVar4 = ldexp((double)(ulonglong)((longlong)fVar5 + lVar2),0x40);
    lVar3 = 0;
    param_2 = param_2 - (float)dVar4;
    if ((fVar1 <= param_2) && (param_2 = param_2 - fVar1, param_2 < fVar1)) {
      lVar3 = -0x8000000000000000;
    }
    param_1[1] = (longlong)fVar5 + lVar2;
  }
  *param_1 = (longlong)param_2 + lVar3;
  return param_1;
}

// FUN_1501d2320 @ 1501d2320

longlong * FUN_1501d2320(longlong *param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = ldexp(__real_3ff0000000000000,0x40);
  if (param_2 < dVar3) {
    lVar2 = 0;
    if ((__real_43e0000000000000 <= param_2) &&
       (param_2 = param_2 - __real_43e0000000000000, param_2 < __real_43e0000000000000)) {
      lVar2 = -0x8000000000000000;
    }
    param_1[1] = 0;
  }
  else {
    dVar4 = ldexp(param_2,-0x40);
    dVar3 = __real_43e0000000000000;
    lVar1 = 0;
    if ((__real_43e0000000000000 <= dVar4) &&
       (dVar4 = dVar4 - __real_43e0000000000000, dVar4 < __real_43e0000000000000)) {
      lVar1 = -0x8000000000000000;
    }
    dVar5 = ldexp((double)(ulonglong)((longlong)dVar4 + lVar1),0x40);
    param_2 = param_2 - dVar5;
    lVar2 = 0;
    if ((dVar3 <= param_2) && (param_2 = param_2 - dVar3, param_2 < dVar3)) {
      lVar2 = -0x8000000000000000;
    }
    param_1[1] = (longlong)dVar4 + lVar1;
  }
  *param_1 = (longlong)param_2 + lVar2;
  return param_1;
}

// FUN_1501d2450 @ 1501d2450

longlong * FUN_1501d2450(longlong *param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = ldexp(__real_3ff0000000000000,0x40);
  if (param_2 < dVar3) {
    lVar2 = 0;
    if ((__real_43e0000000000000 <= param_2) &&
       (param_2 = param_2 - __real_43e0000000000000, param_2 < __real_43e0000000000000)) {
      lVar2 = -0x8000000000000000;
    }
    param_1[1] = 0;
  }
  else {
    dVar4 = ldexp(param_2,-0x40);
    dVar3 = __real_43e0000000000000;
    lVar1 = 0;
    if ((__real_43e0000000000000 <= dVar4) &&
       (dVar4 = dVar4 - __real_43e0000000000000, dVar4 < __real_43e0000000000000)) {
      lVar1 = -0x8000000000000000;
    }
    dVar5 = ldexp((double)(ulonglong)((longlong)dVar4 + lVar1),0x40);
    param_2 = param_2 - dVar5;
    lVar2 = 0;
    if ((dVar3 <= param_2) && (param_2 = param_2 - dVar3, param_2 < dVar3)) {
      lVar2 = -0x8000000000000000;
    }
    param_1[1] = (longlong)dVar4 + lVar1;
  }
  *param_1 = (longlong)param_2 + lVar2;
  return param_1;
}

// _Reallocate_grow_by<`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(unsigned___int64,unsigned___int64,char)___ptr64'::`2'::<lambda_1>,unsigned___int64,unsigned___int64,char> @ 1501d2580

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class `public: class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64 __cdecl
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::insert(unsigned __int64,unsigned __int64,char) __ptr64'::`2'::<lambda_1>,unsigned
   __int64,unsigned __int64,char>(unsigned __int64,class `public: class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64
   __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::insert(unsigned __int64,unsigned __int64,char) __ptr64'::`2'::<lambda_1>,unsigned
   __int64,unsigned __int64,char) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<_public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(unsigned___int64,unsigned___int64,char)___ptr64_::_2_::<lambda_1>,unsigned___int64,unsigned___int64,char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulonglong param_1,
          undefined8 param_3,size_t param_4,size_t param_5,char param_6)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  char *_Src;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *_Dst;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar5 = uVar2 + param_1 | 0xf;
  uVar3 = (this->_Mypair)._Myval2._Myres;
  if ((uVar5 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar1 = uVar6 + 1;
    if (0xfff < uVar1) {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      goto LAB_1501d261f;
    }
    if (uVar1 == 0) {
      _Dst = (char *)0x0;
    }
    else {
      _Dst = ::operator_new(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_1501d261f:
    pvVar4 = ::operator_new(uVar5);
    if (pvVar4 == (void *)0x0) goto LAB_1501d26d7;
    _Dst = (char *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -8) = pvVar4;
  }
  (this->_Mypair)._Myval2._Myres = uVar6;
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  pcVar7 = _Dst + param_4;
  if (uVar3 < 0x10) {
    memcpy(_Dst,this,param_4);
    memset(pcVar7,(int)param_6,param_5);
    memcpy(pcVar7 + param_5,(void *)((longlong)&(this->_Mypair)._Myval2._Bx + param_4),
           (uVar2 - param_4) + 1);
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,param_4);
    memset(pcVar7,(int)param_6,param_5);
    memcpy(pcVar7 + param_5,_Src + param_4,(uVar2 - param_4) + 1);
    uVar6 = uVar3 + 1;
    pcVar7 = _Src;
    if (0xfff < uVar6) {
      pcVar7 = *(char **)(_Src + -8);
      uVar6 = uVar3 + 0x28;
      if ((char *)0x1f < _Src + (-8 - (longlong)pcVar7)) {
LAB_1501d26d7:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar7,uVar6);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// setfill<char> @ 1501d2740

/* struct std::_Fillobj<char> __cdecl std::setfill<char>(char) */

undefined8 __cdecl std::setfill<char>(char param_1)

{
  undefined7 in_register_00000009;
  undefined1 in_DL;
  
  *(undefined1 *)CONCAT71(in_register_00000009,param_1) = in_DL;
  return CONCAT71(in_register_00000009,param_1);
}

// _Fillobj<char> @ 1501d2750

/* public: __cdecl std::_Fillobj<char>::_Fillobj<char>(char) __ptr64 */

_Fillobj<char> * __thiscall std::_Fillobj<char>::_Fillobj<char>(_Fillobj<char> *this,char param_1)

{
  *this = (_Fillobj<char>)param_1;
  return this;
}

// int128 @ 1501d2760

/* public: __cdecl absl::lts_20240722::int128::int128(float) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::int128(int128 *this,float param_1)

{
  ulong64 uVar1;
  ulonglong *puVar2;
  ulong64 *puVar3;
  ulong64 local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= param_1) {
    puVar3 = (ulong64 *)FUN_1501d21e0(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d21e0(local_28);
    local_38 = ~*puVar2 + 1;
    puVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  uVar1 = puVar3[1];
  this->lo_ = *puVar3;
  this->hi_ = uVar1;
  return this;
}

// int128 @ 1501d27f0

/* public: __cdecl absl::lts_20240722::int128::int128(double) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::int128(int128 *this,double param_1)

{
  ulong64 uVar1;
  ulonglong *puVar2;
  ulong64 *puVar3;
  ulong64 local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= param_1) {
    puVar3 = (ulong64 *)FUN_1501d2320(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d2320(local_28);
    local_38 = ~*puVar2 + 1;
    puVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  uVar1 = puVar3[1];
  this->lo_ = *puVar3;
  this->hi_ = uVar1;
  return this;
}

// int128 @ 1501d2880

/* public: __cdecl absl::lts_20240722::int128::int128(long double) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::int128(int128 *this,longdouble param_1)

{
  ulong64 uVar1;
  ulonglong *puVar2;
  ulong64 *puVar3;
  ulong64 local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (0.0 <= (double)param_1) {
    puVar3 = (ulong64 *)FUN_1501d2450(local_18);
  }
  else {
    puVar2 = (ulonglong *)FUN_1501d2450(local_28);
    local_38 = ~*puVar2 + 1;
    puVar3 = &local_38;
    lStack_30 = (ulonglong)(*puVar2 == 0) + ~puVar2[1];
  }
  uVar1 = puVar3[1];
  this->lo_ = *puVar3;
  this->hi_ = uVar1;
  return this;
}

// uint128 @ 1501d2910

/* public: __cdecl absl::lts_20240722::uint128::uint128(float) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,float param_1)

{
  FUN_1501d21e0();
  return this;
}

// uint128 @ 1501d2930

/* public: __cdecl absl::lts_20240722::uint128::uint128(double) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,double param_1)

{
  FUN_1501d2320();
  return this;
}

// uint128 @ 1501d2950

/* public: __cdecl absl::lts_20240722::uint128::uint128(long double) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,longdouble param_1)

{
  FUN_1501d2450();
  return this;
}

// uint128 @ 1501d2970

/* public: __cdecl absl::lts_20240722::uint128::uint128(__int64) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,__int64 param_1)

{
  this->lo_ = param_1;
  this->hi_ = param_1 >> 0x3f;
  return this;
}

// operator= @ 1501d2990

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator=(__int64) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator=(uint128 *this,__int64 param_1)

{
  this->lo_ = param_1;
  this->hi_ = param_1 >> 0x3f;
  return this;
}

// operator= @ 1501d29b0

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator=(unsigned __int64) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator=(uint128 *this,__uint64 param_1)

{
  this->lo_ = param_1;
  this->hi_ = 0;
  return this;
}

// operator<< @ 1501d29d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,class absl::lts_20240722::int128) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,int128 *param_2)

{
  bool bVar1;
  ulonglong _Size;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  void *pvVar8;
  ulong64 uVar9;
  char *_Dst;
  size_t sVar10;
  undefined8 uVar11;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_a8;
  ulong64 local_98;
  long64 lStack_90;
  _Bxty local_78;
  ulonglong local_68;
  ulonglong local_60;
  void *local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  local_78._8_8_ = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78._Ptr = (char *)0x0;
  if ((uVar3 & 0xc00) == 0) {
    bVar1 = true;
    if (param_2->hi_ < 0) {
      local_78._Ptr = &DAT_0000002d;
    }
    else {
      if ((uVar3 & 0x20) == 0) goto LAB_1501d2a73;
      local_78._Ptr = (char *)0x2b;
    }
    local_68 = 1;
  }
  else {
    bVar1 = false;
  }
LAB_1501d2a73:
  iVar4 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  local_98 = param_2->lo_;
  if (bVar1) {
    if (param_2->hi_ < 0) {
      lStack_90 = (ulonglong)(local_98 == 0) + ~param_2->hi_;
      local_98 = -local_98;
    }
    else {
      lStack_90 = param_2->hi_;
    }
  }
  else {
    lStack_90 = param_2->hi_;
  }
  pcVar5 = (char *)FUN_1501d3bc0(local_58,&local_98,iVar4);
  uVar9 = *(ulong64 *)(pcVar5 + 0x10);
  if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
    pcVar5 = *(char **)pcVar5;
  }
  if (local_60 - local_68 < uVar9) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,uVar9,
               local_a8,pcVar5,uVar9);
  }
  else {
    uVar11 = &local_78;
    if (0xf < local_60) {
      uVar11 = local_78._Ptr;
    }
    _Dst = (char *)(uVar11 + local_68);
    local_68 = local_68 + uVar9;
    memmove(_Dst,pcVar5,uVar9);
    _Dst[uVar9] = '\0';
  }
  if (0xf < local_40) {
    uVar9 = local_40 + 1;
    pvVar8 = local_58[0];
    if (0xfff < uVar9) {
      uVar9 = local_40 + 0x28;
      pvVar8 = *(void **)((longlong)local_58[0] + -8);
      if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar8,uVar9);
  }
  uVar6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  if (uVar6 <= local_68) goto LAB_1501d2e2a;
  uVar6 = uVar6 - local_68;
  if ((uVar3 & 0x1c0) == 0x40) {
    cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                      ((basic_ios<char,std::char_traits<char>_> *)
                       (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if (local_60 - local_68 < uVar6) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,uVar6,
                 local_a8,uVar6,cVar2);
    }
    else {
      uVar11 = &local_78;
      if (0xf < local_60) {
        uVar11 = local_78._Ptr;
      }
      pcVar5 = (char *)(uVar11 + local_68);
      local_68 = local_68 + uVar6;
      memset(pcVar5,(int)cVar2,uVar6);
      pcVar5[uVar6] = '\0';
    }
    goto LAB_1501d2e2a;
  }
  if ((uVar3 & 0x1c0) == 0x100) {
    if (bVar1) {
      uVar11 = &local_78;
      if (0xf < local_60) {
        uVar11 = local_78._Ptr;
      }
      if (*(char *)uVar11 != '+') {
        uVar11 = &local_78;
        if (0xf < local_60) {
          uVar11 = local_78._Ptr;
        }
        if (*(char *)uVar11 != '-') goto LAB_1501d2d06;
      }
      cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      _Size = local_68;
      if (local_68 == 0) {
LAB_1501d2eb5:
                    /* WARNING: Subroutine does not return */
        std::_String_val<std::_Simple_types<char>_>::_Xran();
      }
      if (uVar6 <= local_60 - local_68) {
        local_68 = local_68 + uVar6;
        uVar11 = &local_78;
        if (0xf < local_60) {
          uVar11 = local_78._Ptr;
        }
        pcVar5 = (char *)(uVar11 + 1);
        memmove(pcVar5 + uVar6,pcVar5,_Size);
        memset(pcVar5,(int)cVar2,uVar6);
        goto LAB_1501d2e2a;
      }
      uVar11 = 1;
    }
    else {
LAB_1501d2d06:
      if ((((uVar3 & 0xe00) != 0x800) || ((uVar3 & 8) == 0)) ||
         ((param_2->lo_ == 0 && (param_2->hi_ == 0)))) {
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,0,
                   uVar6,cVar2);
        goto LAB_1501d2e2a;
      }
      cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      if (local_68 < 2) goto LAB_1501d2eb5;
      if (uVar6 <= local_60 - local_68) {
        uVar11 = &local_78;
        if (0xf < local_60) {
          uVar11 = local_78._Ptr;
        }
        pcVar5 = (char *)(uVar11 + 2);
        sVar10 = local_68 - 1;
        local_68 = local_68 + uVar6;
        memmove(pcVar5 + uVar6,pcVar5,sVar10);
        memset(pcVar5,(int)cVar2,uVar6);
        goto LAB_1501d2e2a;
      }
      uVar11 = 2;
    }
  }
  else {
    cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                      ((basic_ios<char,std::char_traits<char>_> *)
                       (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if (uVar6 <= local_60 - local_68) {
      uVar11 = &local_78;
      if (0xf < local_60) {
        uVar11 = local_78._Ptr;
      }
      sVar10 = local_68 + 1;
      local_68 = local_68 + uVar6;
      memmove((char *)(uVar11 + uVar6),(void *)uVar11,sVar10);
      memset((void *)uVar11,(int)cVar2,uVar6);
      goto LAB_1501d2e2a;
    }
    uVar11 = 0;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(unsigned___int64,unsigned___int64,char)___ptr64_::_2_::<lambda_1>,unsigned___int64,unsigned___int64,char>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,uVar6,
             local_a8,uVar11);
LAB_1501d2e2a:
  uVar11 = &local_78;
  if (0xf < local_60) {
    uVar11 = local_78._Ptr;
  }
  pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)uVar11,local_68
                     );
  if (0xf < local_60) {
    uVar9 = local_60 + 1;
    uVar11 = local_78._Ptr;
    if (0xfff < uVar9) {
      uVar9 = local_60 + 0x28;
      uVar11 = *(undefined8 *)(local_78._Ptr + -8);
      if ((char *)0x1f < local_78._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar11,uVar9);
  }
  return pbVar7;
}

// operator<< @ 1501d2ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,class absl::lts_20240722::uint128) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,uint128 *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  undefined8 uVar5;
  __uint64 _Var6;
  ulong64 uVar7;
  char *_Dst;
  undefined1 auStack_98 [32];
  <lambda_1> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  _Bxty local_48;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar2 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  local_58 = (undefined4)param_2->lo_;
  uStack_54 = *(undefined4 *)((longlong)&param_2->lo_ + 4);
  uStack_50 = (undefined4)param_2->hi_;
  uStack_4c = *(undefined4 *)((longlong)&param_2->hi_ + 4);
  FUN_1501d3bc0(&local_48,&local_58,uVar2);
  uVar3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  if (local_38 < uVar3) {
    uVar3 = uVar3 - local_38;
    if ((uVar2 & 0x1c0) == 0x40) {
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      if (local_30 - local_38 < uVar3) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
                   uVar3,local_68,uVar3,cVar1);
      }
      else {
        uVar5 = &local_48;
        if (0xf < local_30) {
          uVar5 = local_48._Ptr;
        }
        _Dst = (char *)(uVar5 + local_38);
        local_38 = local_38 + uVar3;
        memset(_Dst,(int)cVar1,uVar3);
        _Dst[uVar3] = '\0';
      }
    }
    else {
      if (((((uVar2 & 0x1c0) == 0x100) && ((uVar2 & 8) != 0)) && ((uVar2 & 0xe00) == 0x800)) &&
         ((param_2->lo_ != 0 || (param_2->hi_ != 0)))) {
        cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        _Var6 = 2;
      }
      else {
        cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        _Var6 = 0;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,_Var6,
                 uVar3,cVar1);
    }
  }
  uVar5 = &local_48;
  if (0xf < local_30) {
    uVar5 = local_48._Ptr;
  }
  pbVar4 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)uVar5,local_38)
  ;
  if (0xf < local_30) {
    uVar7 = local_30 + 1;
    uVar5 = local_48._Ptr;
    if (0xfff < uVar7) {
      uVar7 = local_30 + 0x28;
      uVar5 = *(undefined8 *)(local_48._Ptr + -8);
      if ((char *)0x1f < local_48._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar5,uVar7);
  }
  return pbVar4;
}

// operator== @ 1501d30c0

/* bool __cdecl absl::lts_20240722::operator==(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

bool __cdecl absl::lts_20240722::operator==(int128 *param_1,int128 *param_2)

{
  if ((param_1->lo_ == param_2->lo_) && (param_1->hi_ == param_2->hi_)) {
    return true;
  }
  return false;
}

// operator!= @ 1501d30e0

/* bool __cdecl absl::lts_20240722::operator!=(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

bool __cdecl absl::lts_20240722::operator!=(int128 *param_1,int128 *param_2)

{
  if ((param_1->lo_ == param_2->lo_) && (param_1->hi_ == param_2->hi_)) {
    return false;
  }
  return true;
}

// operator!= @ 1501d3110

/* bool __cdecl absl::lts_20240722::operator!=(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator!=(uint128 *param_1,uint128 *param_2)

{
  if ((param_1->lo_ == param_2->lo_) && (param_1->hi_ == param_2->hi_)) {
    return false;
  }
  return true;
}

// operator- @ 1501d3140

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::uint128) */

uint128 * __cdecl absl::lts_20240722::operator-(uint128 *__return_storage_ptr__,uint128 *param_1)

{
  __return_storage_ptr__->lo_ = ~param_1->lo_ + 1;
  __return_storage_ptr__->hi_ = (ulonglong)(param_1->lo_ == 0) + ~param_1->hi_;
  return __return_storage_ptr__;
}

// operator/ @ 1501d3170

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator/(class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::operator/(int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  ulonglong local_48;
  ulonglong local_40;
  ulong64 local_38;
  longlong lStack_30;
  ulong64 local_28;
  long64 lStack_20;
  undefined1 local_18 [16];
  
  local_38 = param_2->lo_;
  local_48 = 0;
  local_40 = 0;
  if (param_2->hi_ < 0) {
    lStack_30 = (ulonglong)(local_38 == 0) + ~param_2->hi_;
    local_38 = -local_38;
  }
  else {
    lStack_30 = param_2->hi_;
  }
  local_28 = param_1->lo_;
  if (param_1->hi_ < 0) {
    lStack_20 = (ulonglong)(local_28 == 0) + ~param_1->hi_;
    local_28 = -local_28;
  }
  else {
    lStack_20 = param_1->hi_;
  }
  FUN_1501d3690(&local_28,&local_38,&local_48,local_18);
  if (param_1->hi_ < 0 != param_2->hi_ < 0) {
    local_40 = (ulonglong)(local_48 == 0) + ~local_40;
    local_48 = ~local_48 + 1;
  }
  __return_storage_ptr__->hi_ = local_40;
  __return_storage_ptr__->lo_ = local_48;
  return __return_storage_ptr__;
}

// operator/ @ 1501d32c0

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator/(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator/(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_38 = (undefined4)param_2->lo_;
  uStack_34 = *(undefined4 *)((longlong)&param_2->lo_ + 4);
  uStack_30 = (undefined4)param_2->hi_;
  uStack_2c = *(undefined4 *)((longlong)&param_2->hi_ + 4);
  local_28 = (undefined4)param_1->lo_;
  uStack_24 = *(undefined4 *)((longlong)&param_1->lo_ + 4);
  uStack_20 = (undefined4)param_1->hi_;
  uStack_1c = *(undefined4 *)((longlong)&param_1->hi_ + 4);
  __return_storage_ptr__->lo_ = 0;
  __return_storage_ptr__->hi_ = 0;
  FUN_1501d3690(&local_28,&local_38,__return_storage_ptr__,local_18);
  return __return_storage_ptr__;
}

// operator% @ 1501d3310

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator%(class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::operator%(int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  ulonglong local_48;
  ulonglong local_40;
  ulong64 local_38;
  longlong lStack_30;
  ulong64 local_28;
  long64 lStack_20;
  undefined1 local_18 [16];
  
  local_38 = param_2->lo_;
  local_48 = 0;
  local_40 = 0;
  if (param_2->hi_ < 0) {
    lStack_30 = (ulonglong)(local_38 == 0) + ~param_2->hi_;
    local_38 = -local_38;
  }
  else {
    lStack_30 = param_2->hi_;
  }
  local_28 = param_1->lo_;
  if (param_1->hi_ < 0) {
    lStack_20 = (ulonglong)(local_28 == 0) + ~param_1->hi_;
    local_28 = -local_28;
  }
  else {
    lStack_20 = param_1->hi_;
  }
  FUN_1501d3690(&local_28,&local_38,local_18,&local_48);
  if (param_1->hi_ < 0) {
    local_40 = (ulonglong)(local_48 == 0) + ~local_40;
    local_48 = ~local_48 + 1;
  }
  __return_storage_ptr__->hi_ = local_40;
  __return_storage_ptr__->lo_ = local_48;
  return __return_storage_ptr__;
}

// operator% @ 1501d3440

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator%(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator%(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_38 = (undefined4)param_2->lo_;
  uStack_34 = *(undefined4 *)((longlong)&param_2->lo_ + 4);
  uStack_30 = (undefined4)param_2->hi_;
  uStack_2c = *(undefined4 *)((longlong)&param_2->hi_ + 4);
  local_28 = (undefined4)param_1->lo_;
  uStack_24 = *(undefined4 *)((longlong)&param_1->lo_ + 4);
  uStack_20 = (undefined4)param_1->hi_;
  uStack_1c = *(undefined4 *)((longlong)&param_1->hi_ + 4);
  __return_storage_ptr__->lo_ = 0;
  __return_storage_ptr__->hi_ = 0;
  FUN_1501d3690(&local_28,&local_38,local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 1501d3490

/* public: __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::insert(unsigned __int64,unsigned
   __int64,char) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64
   const,unsigned __int64,unsigned __int64,unsigned __int64,char)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(unsigned___int64,unsigned___int64,char)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,__uint64 param_4,
          __uint64 param_5,char param_6)

{
  memcpy(param_1,param_2,param_4);
  memset(param_1 + param_4,(int)param_6,param_5);
  memcpy(param_1 + param_4 + param_5,param_2 + param_4,(param_3 - param_4) + 1);
  return;
}

// operator| @ 1501d3520

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator|(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator|(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  __return_storage_ptr__->lo_ = param_1->lo_ | param_2->lo_;
  __return_storage_ptr__->hi_ = param_1->hi_ | param_2->hi_;
  return __return_storage_ptr__;
}

// operator-= @ 1501d3550

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator-=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator-=(uint128 *this,uint128 *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = this->lo_ - param_1->lo_;
  uVar2 = this->hi_ - param_1->hi_;
  if (this->lo_ < param_1->lo_) {
    this->lo_ = uVar1;
    this->hi_ = uVar2 - 1;
    return this;
  }
  this->lo_ = uVar1;
  this->hi_ = uVar2;
  return this;
}

// operator<<= @ 1501d35b0

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator<<=(int) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator<<=(uint128 *this,int param_1)

{
  ulong64 uVar1;
  byte bVar2;
  ulong64 local_18;
  ulong64 uStack_10;
  
  bVar2 = (byte)param_1;
  if (0x3f < param_1) {
    uVar1 = this->lo_;
    this->lo_ = 0;
    this->hi_ = uVar1 << (bVar2 - 0x40 & 0x3f);
    return this;
  }
  if (param_1 == 0) {
    local_18 = this->lo_;
    uStack_10 = this->hi_;
  }
  else {
    local_18 = this->lo_ << (bVar2 & 0x3f);
    uStack_10 = this->lo_ >> (0x40 - bVar2 & 0x3f) | this->hi_ << (bVar2 & 0x3f);
  }
  this->lo_ = local_18;
  this->hi_ = uStack_10;
  return this;
}

// operator|= @ 1501d3650

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator|=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator|=(uint128 *this,uint128 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1->hi_;
  this->lo_ = this->lo_ | param_1->lo_;
  this->hi_ = this->hi_ | uVar1;
  return this;
}

// FUN_1501d3690 @ 1501d3690

void FUN_1501d3690(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  ulonglong local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  
  uVar7 = param_2[1];
  uStack_40 = 0;
  bVar9 = param_1[1] < uVar7;
  if (param_1[1] == uVar7) {
    bVar9 = *param_1 < *param_2;
  }
  if (bVar9) {
    *param_3 = 0;
    param_3[1] = 0;
    uVar7 = param_1[1];
    *param_4 = *param_1;
    param_4[1] = uVar7;
    return;
  }
  if ((*param_2 == *param_1) && (uVar7 == param_1[1])) {
    *param_3 = 1;
    param_3[1] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  uVar1 = *param_1;
  local_38 = *param_2;
  iVar6 = 0x3f;
  uVar7 = param_2[1];
  iVar8 = 0x40;
  iVar3 = iVar8;
  if (uVar7 == 0) {
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (local_38 != 0) {
        for (; local_38 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      if (local_38 != 0) {
        iVar3 = 0x3f - (int)lVar2;
      }
    }
    else {
      iVar3 = (int)LZCOUNT(local_38);
    }
  }
  else if (__isa_available < 5) {
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar7 != 0) {
      iVar6 = 0x7f;
      iVar3 = 0x3f - (int)lVar2;
    }
    else {
      iVar6 = 0x7f;
    }
  }
  else {
    iVar6 = 0x7f;
    iVar3 = (int)LZCOUNT(uVar7);
  }
  local_28 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 == 0) {
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      if (uVar1 != 0) {
        iVar8 = 0x3f - (int)lVar2;
      }
    }
    else {
      iVar8 = (int)LZCOUNT(uVar1);
    }
    iVar8 = 0x3f - iVar8;
  }
  else if (__isa_available < 5) {
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar7 != 0) {
      iVar8 = 0x7f - (0x3f - (int)lVar2);
    }
    else {
      iVar8 = 0x3f;
    }
  }
  else {
    iVar8 = 0x7f - (int)LZCOUNT(uVar7);
  }
  iVar8 = iVar8 - (iVar6 - iVar3);
  bVar5 = (byte)iVar8;
  if (iVar8 < 0x40) {
    if (iVar8 == 0) {
      uStack_30 = param_2[1];
      puVar4 = &local_38;
    }
    else {
      local_78 = *param_2 << (bVar5 & 0x3f);
      puVar4 = &local_78;
      uStack_70 = *param_2 >> (0x40 - bVar5 & 0x3f) | param_2[1] << (bVar5 & 0x3f);
    }
    local_38 = *puVar4;
    uStack_30 = puVar4[1];
    if (iVar8 < 0) {
      local_88 = 0;
      uStack_40 = 0;
      goto LAB_1501d3979;
    }
  }
  else {
    uStack_30 = *param_2 << (bVar5 - 0x40 & 0x3f);
    local_38 = 0;
  }
  uVar7 = (ulonglong)(iVar8 + 1);
  local_88 = uStack_40;
  do {
    local_78 = local_88 * 2;
    uStack_40 = local_88 >> 0x3f | uStack_40 * 2;
    uVar1 = param_1[1];
    uStack_70 = uStack_40;
    bVar9 = uVar1 < uStack_30;
    if (uVar1 == uStack_30) {
      bVar9 = *param_1 < local_38;
    }
    local_88 = local_78;
    if (!bVar9) {
      local_58 = *param_1 - local_38;
      lStack_50 = uVar1 - uStack_30;
      if (*param_1 < local_38) {
        local_68 = local_58;
        lStack_60 = lStack_50 + -1;
        puVar4 = &local_68;
      }
      else {
        puVar4 = &local_28;
        local_28 = local_58;
        lStack_20 = lStack_50;
      }
      uVar1 = puVar4[1];
      local_88 = local_78 | 1;
      local_48 = local_88;
      *param_1 = *puVar4;
      param_1[1] = uVar1;
    }
    local_38 = uStack_30 << 0x3f | local_38 >> 1;
    uStack_30 = uStack_30 >> 1;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
LAB_1501d3979:
  uVar7 = *param_1;
  uVar1 = param_1[1];
  *param_3 = local_88;
  param_3[1] = uStack_40;
  *param_4 = uVar7;
  param_4[1] = uVar1;
  return;
}

// ToString @ 1501d3a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::int128::ToString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::int128::ToString
          (int128 *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  ulong64 *puVar1;
  char *pcVar2;
  void *pvVar3;
  ulong64 uVar4;
  undefined1 auStack_88 [32];
  ulong64 local_68;
  long64 lStack_60;
  undefined4 local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_50;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_58 = 1;
  if (this->hi_ < 0) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x2d;
  }
  local_68 = this->lo_;
  if (this->hi_ < 0) {
    lStack_60 = (ulonglong)(local_68 == 0) + ~this->hi_;
    local_68 = -local_68;
  }
  else {
    lStack_60 = this->hi_;
  }
  local_50 = __return_storage_ptr__;
  pcVar2 = (char *)FUN_1501d3bc0(local_38,&local_68,0x200);
  puVar1 = (ulong64 *)(pcVar2 + 0x10);
  if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
    pcVar2 = *(char **)pcVar2;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar2,*puVar1);
  if (0xf < local_20) {
    uVar4 = local_20 + 1;
    pvVar3 = local_38[0];
    if (0xfff < uVar4) {
      uVar4 = local_20 + 0x28;
      pvVar3 = *(void **)((longlong)local_38[0] + -8);
      if (0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// ToString @ 1501d3b80

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::uint128::ToString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::uint128::ToString
          (uint128 *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined4)this->lo_;
  uStack_14 = *(undefined4 *)((longlong)&this->lo_ + 4);
  uStack_10 = (undefined4)this->hi_;
  uStack_c = *(undefined4 *)((longlong)&this->hi_ + 4);
  FUN_1501d3bc0(__return_storage_ptr__,&local_18,0x200);
  return __return_storage_ptr__;
}

// FUN_1501d3bc0 @ 1501d3bc0

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_1501d3bc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             undefined4 *param_2,uint param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char *local_158;
  ulong64 uStack_150;
  int iStack_13c;
  undefined1 local_138 [8];
  undefined1 local_130 [104];
  char *local_c8;
  uint local_c0;
  basic_ios<char,std::char_traits<char>_> local_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_48;
  
  uStack_190 = 0;
  if ((param_3 & 0xe00) == 0x400) {
    local_198 = 0x8000000000000000;
  }
  else if ((param_3 & 0xe00) == 0x800) {
    local_198 = 0x1000000000000000;
  }
  else {
    local_198 = 10000000000000000000;
  }
  local_138 = (undefined1  [8])
              &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable_;
  local_48 = param_1;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_b0);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_138,
             (basic_streambuf<char,std::char_traits<char>_> *)local_130,false);
  *(undefined ***)(local_138 + *(int *)((longlong)local_138 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)((longlong)local_138 + 4)) =
       *(int *)((longlong)local_138 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
  local_130._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_c8 = (char *)0x0;
  local_c0 = 4;
  std::ios_base::setf((ios_base *)(local_138 + *(int *)((longlong)local_138 + 4)),param_3 & 0xe0c,
                      0xe0c);
  local_188 = *param_2;
  uStack_184 = param_2[1];
  uStack_180 = param_2[2];
  uStack_17c = param_2[3];
  uVar8 = (undefined4)local_198;
  uVar9 = local_198._4_4_;
  uVar10 = (undefined4)uStack_190;
  uVar11 = uStack_190._4_4_;
  local_168 = local_188;
  uStack_164 = uStack_184;
  uStack_160 = uStack_180;
  uStack_15c = uStack_17c;
  FUN_1501d3690(&local_168,&local_198,&local_188,&local_158);
  local_178 = local_188;
  uStack_174 = uStack_184;
  uStack_170 = uStack_180;
  uStack_16c = uStack_17c;
  local_168 = uVar8;
  uStack_164 = uVar9;
  uStack_160 = uVar10;
  uStack_15c = uVar11;
  FUN_1501d3690(&local_178,&local_168,&local_188,&local_198);
  if (CONCAT44(uStack_184,local_188) == 0) {
    if (local_198 == 0) goto LAB_1501d3e31;
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_138,local_198);
    pbVar1 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)local_138,std::noshowbase);
    std::basic_ios<char,std::char_traits<char>_>::fill
              ((basic_ios<char,std::char_traits<char>_> *)
               (pbVar1 + *(int *)(*(longlong *)pbVar1 + 4)),'0');
    puVar2 = (undefined8 *)std::setw((__int64)&local_178);
    uVar5 = puVar2[1];
    pcVar7 = (code *)*puVar2;
    pbVar1 = pbVar1 + *(int *)(*(longlong *)pbVar1 + 4);
  }
  else {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_138,
               CONCAT44(uStack_184,local_188));
    pbVar1 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)local_138,std::noshowbase);
    std::basic_ios<char,std::char_traits<char>_>::fill
              ((basic_ios<char,std::char_traits<char>_> *)
               (pbVar1 + *(int *)(*(longlong *)pbVar1 + 4)),'0');
    puVar2 = (undefined8 *)std::setw((__int64)&local_178);
    (*(code *)*puVar2)(pbVar1 + *(int *)(*(longlong *)pbVar1 + 4),puVar2[1]);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_138,local_198);
    puVar2 = (undefined8 *)std::setw((__int64)&local_178);
    uVar5 = puVar2[1];
    pcVar7 = (code *)*puVar2;
    pbVar1 = (basic_ostream<char,struct_std::char_traits<char>_> *)
             (local_138 + *(int *)((longlong)local_138 + 4));
  }
  (*pcVar7)(pbVar1,uVar5);
LAB_1501d3e31:
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_138,(__uint64)local_158);
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_158 = (char *)0x0;
  uStack_150 = 0;
  if ((((byte)local_c0 & 0x22) == 2) ||
     (pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_130),
     pcVar3 == (char *)0x0)) {
    uVar6 = uStack_150;
    pcVar4 = local_158;
    if (((local_c0 & 4) == 0) &&
       (pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)local_130),
       uVar6 = uStack_150, pcVar4 = local_158, pcVar3 != (char *)0x0)) {
      pcVar4 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
      pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
      uVar6 = (longlong)pcVar3 - (longlong)pcVar4;
    }
  }
  else {
    pcVar4 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                       ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
    pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
    if (pcVar3 < local_c8) {
      pcVar3 = local_c8;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::epptr
              ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
    uVar6 = (longlong)pcVar3 - (longlong)pcVar4;
  }
  if (pcVar4 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pcVar4,uVar6);
  }
  *(undefined ***)(local_138 + *(int *)((longlong)local_138 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)((longlong)local_138 + 4)) =
       *(int *)((longlong)local_138 + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_130);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_130 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_b0);
  return param_1;
}

// FUN_1501d3f70 @ 1501d3f70

longlong * FUN_1501d3f70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  if (lVar1 < 0) {
    uVar3 = param_2[1];
    *param_1 = -lVar2;
    param_1[1] = (ulonglong)(lVar2 == 0) + ~uVar3;
    return param_1;
  }
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return param_1;
}

// ldexp @ 1501d3ff0

/* float __cdecl ldexp(float,int) */

float __cdecl ldexp(float param_1,int param_2)

{
  double dVar1;
  
  dVar1 = ldexp((double)param_1,param_2);
  return (float)dVar1;
}

// ldexp @ 1501d4010

/* long double __cdecl ldexp(long double,int) */

longdouble __cdecl ldexp(longdouble param_1,int param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501d4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ldexp((double)param_1,param_2);
  return (longdouble)dVar1;
}

// noshowbase @ 1501d4020

/* class std::ios_base & __ptr64 __cdecl std::noshowbase(class std::ios_base & __ptr64) */

ios_base * __cdecl std::noshowbase(ios_base *param_1)

{
  std::ios_base::unsetf(param_1,8);
  return param_1;
}

// ldexpf @ 1501d4050

float ldexpf(float param_1,int param_2)

{
  double dVar1;
  
  dVar1 = ldexp((double)param_1,param_2);
  return (float)dVar1;
}

// FUN_150330100 @ 150330100

void FUN_150330100(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x38)
              );
  }
  return;
}

// FUN_150330170 @ 150330170

void FUN_150330170(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));
  }
  return;
}

// FUN_1503301d0 @ 1503301d0

void FUN_1503301d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                (param_2 + 0x180));
  }
  return;
}

