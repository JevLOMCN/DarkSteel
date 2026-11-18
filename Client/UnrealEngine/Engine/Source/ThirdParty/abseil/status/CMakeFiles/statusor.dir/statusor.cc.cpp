// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 18

// operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const*___ptr64&___ptr64> @ 1501d9650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::operator()<enum
   absl::lts_20240722::LogSeverity,char const * __ptr64 const & __ptr64,int,char const * __ptr64 &
   __ptr64>(enum absl::lts_20240722::LogSeverity && __ptr64,char const * __ptr64 const & __ptr64,int
   && __ptr64,char const * __ptr64 & __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const*___ptr64&___ptr64>
          (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,char **param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong64 uVar3;
  undefined1 auStack_78 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  pcVar2 = *(code **)this;
  if (pcVar2 == (code *)0x0) {
    pcVar2 = *(code **)(this + 8);
  }
  local_58._Ptr = (char *)0x0;
  local_58._8_8_ = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while ((*param_4)[uVar3] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4,
             uVar3);
  (*pcVar2)(*param_1,*param_2,*param_3,&local_58);
  if (0xf < uStack_40) {
    uVar3 = uStack_40 + 1;
    uVar1 = local_58._Ptr;
    if (0xfff < uVar3) {
      uVar3 = uStack_40 + 0x28;
      uVar1 = *(undefined8 *)(local_58._Ptr + -8);
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar1,uVar3);
  }
  return;
}

// FUN_1501d9730 @ 1501d9730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */

void FUN_1501d9730(atomic<unsigned_int> *param_1,SchedulingMode param_2,longlong *param_3)

{
  atomic<unsigned_int> aVar1;
  void *pvVar2;
  uint uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  undefined1 auStack_e8 [40];
  char *local_c0;
  undefined8 uStack_b8;
  _Bxty local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  _Bxty local_90;
  ulonglong local_78;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar3 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f4df0,param_2), uVar3 == 0)) {
    pbVar4 = absl::lts_20240722::Status::ToString
                       ((Status *)(*param_3 + 0x18),
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90
                        ,kDefault);
    local_70.piece_._Mydata = (char *)pbVar4;
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      local_70.piece_._Mydata = (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    local_70.piece_._Mysize = (pbVar4->_Mypair)._Myval2._Mysize;
    local_c0 = "Bad StatusOr access: ";
    uStack_b8 = 0x15;
    local_40.piece_._Mydata = "Bad StatusOr access: ";
    local_40.piece_._Mysize = 0x15;
    pbVar4 = absl::lts_20240722::StrCat
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0
                        ,&local_40,&local_70);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*param_3 + 0x28),
               pbVar4);
    if (0xf < uStack_98) {
      uVar7 = uStack_98 + 1;
      pvVar2 = (void *)CONCAT71(local_b0._1_7_,local_b0._Buf[0]);
      pvVar5 = pvVar2;
      if (0xfff < uVar7) {
        uVar7 = uStack_98 + 0x28;
        pvVar5 = *(void **)((longlong)pvVar2 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,uVar7);
    }
    local_a0 = ___xmm_000000000000000f0000000000000000;
    uStack_98 = _UNK_15076add8;
    local_b0._Buf[0] = '\0';
    if (0xf < local_78) {
      uVar7 = local_78 + 1;
      uVar6 = local_90._Ptr;
      if (0xfff < uVar7) {
        uVar7 = local_78 + 0x28;
        uVar6 = *(undefined8 *)(local_90._Ptr + -8);
        if ((char *)0x1f < local_90._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar6,uVar7);
    }
    LOCK();
    aVar1 = *param_1;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
    }
  }
  return;
}

// FUN_1501d9910 @ 1501d9910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */

void FUN_1501d9910(longlong *param_1)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined8 uStack_c0;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  _Bxty local_98;
  ulonglong local_80;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pbVar2 = absl::lts_20240722::Status::ToString
                     ((Status *)(*param_1 + 0x18),
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
                      kDefault);
  local_78.piece_._Mydata = (char *)pbVar2;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    local_78.piece_._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  local_78.piece_._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
  local_c8 = "Bad StatusOr access: ";
  uStack_c0 = 0x15;
  local_48.piece_._Mydata = "Bad StatusOr access: ";
  local_48.piece_._Mysize = 0x15;
  pbVar2 = absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b8,
                      &local_48,&local_78);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*param_1 + 0x28),
             pbVar2);
  if (0xf < uStack_a0) {
    uVar5 = uStack_a0 + 1;
    pvVar1 = (void *)CONCAT71(local_b8._1_7_,local_b8._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_a0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar5);
  }
  local_a8 = ___xmm_000000000000000f0000000000000000;
  uStack_a0 = _UNK_15076add8;
  local_b8._Buf[0] = '\0';
  if (0xf < local_80) {
    uVar5 = local_80 + 1;
    uVar4 = local_98._Ptr;
    if (0xfff < uVar5) {
      uVar5 = local_80 + 0x28;
      uVar4 = *(undefined8 *)(local_98._Ptr + -8);
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  return;
}

// BadStatusOrAccess @ 1501d9a70

/* public: __cdecl absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess(class
   absl::lts_20240722::BadStatusOrAccess && __ptr64) __ptr64 */

BadStatusOrAccess * __thiscall
absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess
          (BadStatusOrAccess *this,BadStatusOrAccess *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0x37;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xf;
  this[0x28] = (BadStatusOrAccess)0x0;
  return this;
}

// BadStatusOrAccess @ 1501d9ac0

/* public: __cdecl absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess(class
   absl::lts_20240722::BadStatusOrAccess const & __ptr64) __ptr64 */

BadStatusOrAccess * __thiscall
absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess
          (BadStatusOrAccess *this,BadStatusOrAccess *param_1)

{
  int *piVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = vftable;
  piVar1 = *(int **)(param_1 + 0x18);
  *(int **)(this + 0x18) = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xf;
  this[0x28] = (BadStatusOrAccess)0x0;
  return this;
}

// BadStatusOrAccess @ 1501d9b10

/* public: __cdecl absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess(class
   absl::lts_20240722::Status) __ptr64 */

BadStatusOrAccess * __thiscall
absl::lts_20240722::BadStatusOrAccess::BadStatusOrAccess(BadStatusOrAccess *this,Status param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1.rep_;
  *(undefined8 *)param_1.rep_ = 0x37;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xf;
  this[0x28] = (BadStatusOrAccess)0x0;
  if (((ulonglong)*(StatusRep **)param_1.rep_ & 1) == 0) {
    status_internal::StatusRep::Unref(*(StatusRep **)param_1.rep_);
  }
  return this;
}

// ~BadStatusOrAccess @ 1501d9b70

/* public: virtual __cdecl absl::lts_20240722::BadStatusOrAccess::~BadStatusOrAccess(void) __ptr64
    */

void __thiscall absl::lts_20240722::BadStatusOrAccess::~BadStatusOrAccess(BadStatusOrAccess *this)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(this + 0x40);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x28);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar1 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xf;
  this[0x28] = (BadStatusOrAccess)0x0;
  if (((ulonglong)*(StatusRep **)(this + 0x18) & 1) == 0) {
    status_internal::StatusRep::Unref(*(StatusRep **)(this + 0x18));
  }
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy(this + 8);
  return;
}

// operator= @ 1501d9c00

/* public: class absl::lts_20240722::BadStatusOrAccess & __ptr64 __cdecl
   absl::lts_20240722::BadStatusOrAccess::operator=(class absl::lts_20240722::BadStatusOrAccess &&
   __ptr64) __ptr64 */

BadStatusOrAccess * __thiscall
absl::lts_20240722::BadStatusOrAccess::operator=(BadStatusOrAccess *this,BadStatusOrAccess *param_1)

{
  StatusRep *this_00;
  BadStatusOrAccess *local_res8;
  
  local_res8 = param_1;
  if (*(int *)(param_1 + 0x20) != 0xdd) {
    FUN_1501d9730(param_1 + 0x20,1,&local_res8);
  }
  this_00 = *(StatusRep **)(this + 0x18);
  if (*(StatusRep **)(param_1 + 0x18) != this_00) {
    *(StatusRep **)(this + 0x18) = *(StatusRep **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0x37;
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x28),
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x28));
  return this;
}

// operator= @ 1501d9c80

/* public: class absl::lts_20240722::BadStatusOrAccess & __ptr64 __cdecl
   absl::lts_20240722::BadStatusOrAccess::operator=(class absl::lts_20240722::BadStatusOrAccess
   const & __ptr64) __ptr64 */

BadStatusOrAccess * __thiscall
absl::lts_20240722::BadStatusOrAccess::operator=(BadStatusOrAccess *this,BadStatusOrAccess *param_1)

{
  StatusRep *this_00;
  StatusRep *pSVar1;
  BadStatusOrAccess *pBVar2;
  BadStatusOrAccess *local_res8;
  
  local_res8 = param_1;
  if (*(int *)(param_1 + 0x20) != 0xdd) {
    FUN_1501d9730(param_1 + 0x20,1,&local_res8);
  }
  this_00 = *(StatusRep **)(this + 0x18);
  pSVar1 = *(StatusRep **)(param_1 + 0x18);
  if (pSVar1 != this_00) {
    if (((ulonglong)pSVar1 & 1) == 0) {
      LOCK();
      pSVar1->ref_ = (atomic<int>)((int)pSVar1->ref_ + 1);
      UNLOCK();
    }
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  pBVar2 = param_1 + 0x28;
  if (this + 0x28 != pBVar2) {
    if (0xf < *(ulonglong *)(param_1 + 0x40)) {
      pBVar2 = *(BadStatusOrAccess **)pBVar2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x28),
               (char *)pBVar2,*(ulong64 *)(param_1 + 0x38));
  }
  return this;
}

// operator= @ 1501d9d10

/* public: class absl::lts_20240722::Status & __ptr64 __cdecl
   absl::lts_20240722::Status::operator=(class absl::lts_20240722::Status const & __ptr64) __ptr64
    */

Status * __thiscall absl::lts_20240722::Status::operator=(Status *this,Status *param_1)

{
  StatusRep *pSVar1;
  StatusRep *this_00;
  
  pSVar1 = (StatusRep *)param_1->rep_;
  this_00 = (StatusRep *)this->rep_;
  if (pSVar1 != this_00) {
    if (((ulonglong)pSVar1 & 1) == 0) {
      LOCK();
      pSVar1->ref_ = (atomic<int>)((int)pSVar1->ref_ + 1);
      UNLOCK();
    }
    this->rep_ = param_1->rep_;
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  return this;
}

// FUN_1501d9d50 @ 1501d9d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */

void FUN_1501d9d50(longlong *param_1)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined8 uStack_c0;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  _Bxty local_98;
  ulonglong local_80;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pbVar2 = absl::lts_20240722::Status::ToString
                     ((Status *)(*param_1 + 0x18),
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
                      kDefault);
  local_78.piece_._Mydata = (char *)pbVar2;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    local_78.piece_._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  local_78.piece_._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
  local_c8 = "Bad StatusOr access: ";
  uStack_c0 = 0x15;
  local_48.piece_._Mydata = "Bad StatusOr access: ";
  local_48.piece_._Mysize = 0x15;
  pbVar2 = absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b8,
                      &local_48,&local_78);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*param_1 + 0x28),
             pbVar2);
  if (0xf < uStack_a0) {
    uVar5 = uStack_a0 + 1;
    pvVar1 = (void *)CONCAT71(local_b8._1_7_,local_b8._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_a0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar5);
  }
  local_a8 = ___xmm_000000000000000f0000000000000000;
  uStack_a0 = _UNK_15076add8;
  local_b8._Buf[0] = '\0';
  if (0xf < local_80) {
    uVar5 = local_80 + 1;
    uVar4 = local_98._Ptr;
    if (0xfff < uVar5) {
      uVar5 = local_80 + 0x28;
      uVar4 = *(undefined8 *)(local_98._Ptr + -8);
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  return;
}

// `scalar_deleting_destructor' @ 1501d9ea0

/* public: virtual void * __ptr64 __cdecl absl::lts_20240722::BadStatusOrAccess::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::BadStatusOrAccess::_scalar_deleting_destructor_
          (BadStatusOrAccess *this,uint param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(this + 0x40);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x28);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar1 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xf;
  this[0x28] = (BadStatusOrAccess)0x0;
  if (((ulonglong)*(StatusRep **)(this + 0x18) & 1) == 0) {
    status_internal::StatusRep::Unref(*(StatusRep **)(this + 0x18));
  }
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy(this + 8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Crash @ 1501d9f50

/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */
/* public: static void __cdecl absl::lts_20240722::internal_statusor::Helper::Crash(class
   absl::lts_20240722::Status const & __ptr64) */

void __cdecl absl::lts_20240722::internal_statusor::Helper::Crash(Status *param_1)

{
  code *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int local_b8 [2];
  char *local_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_88;
  AlphaNum local_68;
  AlphaNum local_38;
  
  local_b0 = 
  "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\status\\statusor.cc";
  pbVar2 = lts_20240722::Status::ToString(param_1,&local_88,kDefault);
  AlphaNum::AlphaNum<std::allocator<char>_>(&local_68,pbVar2);
  AlphaNum::AlphaNum(&local_38,"Attempting to fetch value instead of handling error ");
  pbVar2 = StrCat(&local_a8,&local_38,&local_68);
  local_b8[0] = 0x59;
  local_b8[1] = 3;
  base_internal::
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  ::
  operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&raw_log_internal::internal_log_function,(LogSeverity *)(local_b8 + 1),&local_b0,
             local_b8,pbVar2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_a8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// HandleInvalidStatusCtorArg @ 1501da000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl
   absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(class
   absl::lts_20240722::Status * __ptr64) */

void __cdecl
absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(Status *param_1)

{
  StatusRep *this;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Status SVar5;
  char *pcVar6;
  ulong64 uVar7;
  code *pcVar8;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined8 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pcVar8 = _internal_log_function;
  if (_internal_log_function == (code *)0x0) {
    pcVar8 = DAT_154e167e8;
  }
  local_38._Mysize = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0xf;
  local_38._Mysize = (ulong64)::operator_new(0x40);
  uVar1 = s_An_OK_status_is_not_a_valid_con._8_8_;
  local_20 = 0x3f;
  local_18 = 0x3f;
  *(undefined8 *)local_38._Mysize = s_An_OK_status_is_not_a_valid_con._0_8_;
  *(undefined8 *)(local_38._Mysize + 8) = uVar1;
  uVar4 = s_An_OK_status_is_not_a_valid_con._28_4_;
  uVar3 = s_An_OK_status_is_not_a_valid_con._24_4_;
  uVar2 = s_An_OK_status_is_not_a_valid_con._20_4_;
  *(undefined4 *)(local_38._Mysize + 0x10) = s_An_OK_status_is_not_a_valid_con._16_4_;
  *(undefined4 *)(local_38._Mysize + 0x14) = uVar2;
  *(undefined4 *)(local_38._Mysize + 0x18) = uVar3;
  *(undefined4 *)(local_38._Mysize + 0x1c) = uVar4;
  uVar1 = s_An_OK_status_is_not_a_valid_con._40_8_;
  *(undefined8 *)(local_38._Mysize + 0x20) = s_An_OK_status_is_not_a_valid_con._32_8_;
  *(undefined8 *)(local_38._Mysize + 0x28) = uVar1;
  *(undefined8 *)(local_38._Mysize + 0x30) = s_An_OK_status_is_not_a_valid_con._48_8_;
  *(undefined4 *)(local_38._Mysize + 0x38) = s_An_OK_status_is_not_a_valid_con._56_4_;
  *(undefined2 *)(local_38._Mysize + 0x3c) = s_An_OK_status_is_not_a_valid_con._60_2_;
  *(char *)(local_38._Mysize + 0x3e) = s_An_OK_status_is_not_a_valid_con[0x3e];
  *(char *)(local_38._Mysize + 0x3f) = '\0';
  (*pcVar8)(2,
            "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\status\\statusor.cc"
            ,0x4d,&local_38._Mysize);
  if (0xf < local_18) {
    uVar7 = local_18 + 1;
    pcVar6 = (char *)local_38._Mysize;
    if (0xfff < uVar7) {
      uVar7 = local_18 + 0x28;
      pcVar6 = *(char **)(local_38._Mysize + -8);
      if ((char *)0x1f < (char *)(local_38._Mysize + (-8 - (longlong)pcVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar6,uVar7);
  }
  local_48 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_40 = 0x3f;
  SVar5 = InternalError(&local_38);
  this = (StatusRep *)param_1->rep_;
  if (*(StatusRep **)SVar5.rep_ != this) {
    param_1->rep_ = (ulong64)*(StatusRep **)SVar5.rep_;
    *(undefined8 *)SVar5.rep_ = 0x37;
    if (((ulonglong)this & 1) == 0) {
      status_internal::StatusRep::Unref(this);
    }
  }
  if (((ulonglong)local_38._Mydata & 1) == 0) {
    status_internal::StatusRep::Unref((StatusRep *)local_38._Mydata);
  }
  return;
}

// InitWhat @ 1501da1a0

/* private: void __cdecl absl::lts_20240722::BadStatusOrAccess::InitWhat(void)const __ptr64 */

void __thiscall absl::lts_20240722::BadStatusOrAccess::InitWhat(BadStatusOrAccess *this)

{
  BadStatusOrAccess *local_res8 [4];
  
  if (*(int *)(this + 0x20) != 0xdd) {
    local_res8[0] = this;
    FUN_1501d9730(this + 0x20,1,local_res8);
  }
  return;
}

// ThrowBadStatusOrAccess @ 1501da1e0

/* void __cdecl absl::lts_20240722::internal_statusor::ThrowBadStatusOrAccess(class
   absl::lts_20240722::Status) */

void __cdecl absl::lts_20240722::internal_statusor::ThrowBadStatusOrAccess(Status param_1)

{
  Status SVar1;
  Status local_68;
  ulong64 local_60;
  BadStatusOrAccess local_58 [88];
  
  local_60 = param_1.rep_;
  SVar1.rep_ = lts_20240722::Status::Status(&local_68,param_1.rep_);
  BadStatusOrAccess::BadStatusOrAccess(local_58,SVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_58,(ThrowInfo *)&_TI2_AVBadStatusOrAccess_lts_20240722_absl__);
}

// status @ 1501da220

/* public: class absl::lts_20240722::Status const & __ptr64 __cdecl
   absl::lts_20240722::BadStatusOrAccess::status(void)const __ptr64 */

Status * __thiscall absl::lts_20240722::BadStatusOrAccess::status(BadStatusOrAccess *this)

{
  return (Status *)(this + 0x18);
}

// what @ 1501da230

/* public: virtual char const * __ptr64 __cdecl
   absl::lts_20240722::BadStatusOrAccess::what(void)const __ptr64 */

char * __thiscall absl::lts_20240722::BadStatusOrAccess::what(BadStatusOrAccess *this)

{
  BadStatusOrAccess *pBVar1;
  BadStatusOrAccess *local_res8 [4];
  
  if (*(int *)(this + 0x20) != 0xdd) {
    local_res8[0] = this;
    FUN_1501d9730(this + 0x20,1,local_res8);
  }
  pBVar1 = this + 0x28;
  if (0xf < *(ulonglong *)(this + 0x40)) {
    pBVar1 = *(BadStatusOrAccess **)pBVar1;
  }
  return (char *)pBVar1;
}

