// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 25

// IID_PPV_ARGS_Helper<ABI::Windows::Globalization::ITimeZoneOnCalendar> @ 14f909e00

/* void * __ptr64 * __ptr64 __cdecl IID_PPV_ARGS_Helper<struct
   ABI::Windows::Globalization::ITimeZoneOnCalendar>(struct
   ABI::Windows::Globalization::ITimeZoneOnCalendar * __ptr64 * __ptr64) */

void ** __cdecl
IID_PPV_ARGS_Helper<ABI::Windows::Globalization::ITimeZoneOnCalendar>(ITimeZoneOnCalendar **param_1)

{
  return param_1;
}

// time_zone @ 14f909e10

/* private: __cdecl absl::lts_20240722::time_internal::cctz::time_zone::time_zone(class
   absl::lts_20240722::time_internal::cctz::time_zone::Impl const * __ptr64) __ptr64 */

time_zone * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::time_zone(time_zone *this,Impl *param_1)

{
  this->impl_ = param_1;
  return this;
}

// time_zone @ 14f909e20

/* public: __cdecl absl::lts_20240722::time_internal::cctz::time_zone::time_zone(void) __ptr64 */

time_zone * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::time_zone(time_zone *this)

{
  this->impl_ = (Impl *)0x0;
  return this;
}

// operator-> @ 14f909e40

/* public: class absl::lts_20240722::time_internal::cctz::TimeZoneIf * __ptr64 __cdecl
   std::unique_ptr<class absl::lts_20240722::time_internal::cctz::TimeZoneIf,struct
   std::default_delete<class absl::lts_20240722::time_internal::cctz::TimeZoneIf>
   >::operator->(void)const __ptr64 */

TimeZoneIf * __thiscall
std::
unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneIf,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneIf>_>
::operator->(unique_ptr<absl::lts_20240722::time_internal::cctz::TimeZoneIf,std::default_delete<absl::lts_20240722::time_internal::cctz::TimeZoneIf>_>
             *this)

{
  return *(TimeZoneIf **)this;
}

// BreakTime @ 14f909e50

/* public: struct absl::lts_20240722::time_internal::cctz::time_zone::absolute_lookup __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::Impl::BreakTime(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64)const __ptr64 */

absolute_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::BreakTime
          (Impl *this,absolute_lookup *__return_storage_ptr__,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1)

{
  (**(code **)(**(longlong **)(this + 0x20) + 8))();
  return __return_storage_ptr__;
}

// Description @ 14f909e80

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::time_internal::cctz::time_zone::Impl::Description(void)const __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::Description
          (Impl *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (**(code **)(**(longlong **)(this + 0x20) + 0x30))();
  return __return_storage_ptr__;
}

// MakeTime @ 14f909eb0

/* public: struct absl::lts_20240722::time_internal::cctz::time_zone::civil_lookup __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::Impl::MakeTime(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64)const __ptr64 */

civil_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::MakeTime
          (Impl *this,civil_lookup *__return_storage_ptr__,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1)

{
  (**(code **)(**(longlong **)(this + 0x20) + 0x10))();
  return __return_storage_ptr__;
}

// Name @ 14f909ee0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl absl::lts_20240722::time_internal::cctz::time_zone::Impl::Name(void)const
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::Name(Impl *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// NextTransition @ 14f909ef0

/* public: bool __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::Impl::NextTransition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::NextTransition
          (Impl *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f909ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(this + 0x20) + 0x18))();
  return (bool)uVar1;
}

// PrevTransition @ 14f909f10

/* public: bool __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::Impl::PrevTransition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::PrevTransition
          (Impl *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f909f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(this + 0x20) + 0x20))();
  return (bool)uVar1;
}

// Version @ 14f909f30

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::time_internal::cctz::time_zone::Impl::Version(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::Impl::Version
          (Impl *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (**(code **)(**(longlong **)(this + 0x20) + 0x28))();
  return __return_storage_ptr__;
}

// description @ 14f909f60

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::time_internal::cctz::time_zone::description(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::description
          (time_zone *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  (**(code **)(**(longlong **)(pIVar2 + 0x20) + 0x30))
            (*(longlong **)(pIVar2 + 0x20),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// effective_impl @ 14f909fa0

/* private: class absl::lts_20240722::time_internal::cctz::time_zone::Impl const & __ptr64 __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::effective_impl(void)const __ptr64 */

Impl * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::effective_impl(time_zone *this)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  return pIVar2;
}

// fixed_time_zone @ 14f909fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class absl::lts_20240722::time_internal::cctz::time_zone __cdecl
   absl::lts_20240722::time_internal::cctz::fixed_time_zone(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

time_zone __cdecl
absl::lts_20240722::time_internal::cctz::fixed_time_zone
          (duration<__int64,std::ratio<1,1>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  duration<__int64,std::ratio<1,1>_> *in_RDX;
  ulong64 uVar3;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  param_1->_MyRep = 0;
  pbVar1 = FixedOffsetToName((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_38,in_RDX);
  time_zone::Impl::LoadTimeZone(pbVar1,(time_zone *)param_1);
  if (0xf < local_20) {
    uVar3 = local_20 + 1;
    uVar2 = local_38._Ptr;
    if (0xfff < uVar3) {
      uVar3 = local_20 + 0x28;
      uVar2 = *(undefined8 *)(local_38._Ptr + -8);
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  return (time_zone)(Impl *)param_1;
}

// load_time_zone @ 14f90a070

/* bool __cdecl absl::lts_20240722::time_internal::cctz::load_time_zone(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class absl::lts_20240722::time_internal::cctz::time_zone * __ptr64) */

bool __cdecl
absl::lts_20240722::time_internal::cctz::load_time_zone
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          time_zone *param_2)

{
  bool bVar1;
  
  bVar1 = time_zone::Impl::LoadTimeZone(param_1,param_2);
  return bVar1;
}

// local_time_zone @ 14f90a080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class absl::lts_20240722::time_internal::cctz::time_zone __cdecl
   absl::lts_20240722::time_internal::cctz::local_time_zone(void) */

time_zone __cdecl absl::lts_20240722::time_internal::cctz::local_time_zone(void)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  char *****pppppcVar5;
  Impl *in_RCX;
  void *pvVar6;
  undefined8 uVar7;
  char *****pppppcVar8;
  ulong64 uVar9;
  char ****ppppcVar10;
  char ****ppppcVar11;
  undefined1 auStack_c8 [32];
  char ****local_a8;
  char ****local_a0;
  char ****local_98;
  char ***pppcStack_90;
  char ***local_88;
  char ***pppcStack_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  void *local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pppcStack_90 = (char ***)0x0;
  ppppcVar10 = (char ****)0x0;
  local_88 = (char ***)0x0;
  ppppcVar11 = (char ****)0xf;
  pppcStack_80 = (char ***)0xf;
  local_98 = (char ****)0x0;
  hModule = LoadLibraryExA("combase.dll",(HANDLE)0x0,0x800);
  pppppcVar8 = (char *****)":localtime";
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"RoInitialize");
    pFVar3 = GetProcAddress(hModule,"RoUninitialize");
    if ((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) {
      IVar4 = (*pFVar2)(1);
      iVar1 = (int)IVar4;
      if (((iVar1 + 0x80000000U & 0x80000000) != 0) || (iVar1 == -0x7ffefefa)) {
        pppppcVar5 = (char *****)FUN_14f90a560(local_58,hModule);
        if (&local_98 != pppppcVar5) {
          local_98 = *pppppcVar5;
          pppcStack_90 = (char ***)pppppcVar5[1];
          ppppcVar10 = pppppcVar5[2];
          ppppcVar11 = pppppcVar5[3];
          pppppcVar5[2] = (char ****)0x0;
          pppppcVar5[3] = (char ****)0xf;
          *(undefined1 *)pppppcVar5 = 0;
          local_88 = (char ***)ppppcVar10;
          pppcStack_80 = (char ***)ppppcVar11;
        }
        if (0xf < local_40) {
          uVar9 = local_40 + 1;
          pvVar6 = local_58[0];
          if (0xfff < uVar9) {
            uVar9 = local_40 + 0x28;
            pvVar6 = *(void **)((longlong)local_58[0] + -8);
            if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pvVar6,uVar9);
        }
        if (-1 < iVar1) {
          (*pFVar3)();
        }
      }
    }
    FreeLibrary(hModule);
    if (ppppcVar10 != (char ****)0x0) {
      pppppcVar8 = &local_98;
      if ((char ****)0xf < ppppcVar11) {
        pppppcVar8 = (char *****)local_98;
      }
    }
  }
  local_a0 = (char ****)0x0;
  _dupenv_s((char **)&local_a0,(size_t *)0x0,"TZ");
  if ((char *****)local_a0 != (char *****)0x0) {
    pppppcVar8 = (char *****)local_a0;
  }
  pppppcVar5 = (char *****)((longlong)pppppcVar8 + 1);
  if (*(char *)pppppcVar8 != ':') {
    pppppcVar5 = pppppcVar8;
  }
  local_a8 = (char ****)0x0;
  iVar1 = strcmp((char *)pppppcVar5,"localtime");
  if (iVar1 == 0) {
    _dupenv_s((char **)&local_a8,(size_t *)0x0,"LOCALTIME");
    if ((char *****)local_a8 != (char *****)0x0) {
      pppppcVar5 = (char *****)local_a8;
    }
  }
  local_78._Ptr = (char *)0x0;
  local_78._8_8_ = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (*(char *)((longlong)pppppcVar5 + uVar9) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
             (char *)pppppcVar5,uVar9);
  free(local_a8);
  free(local_a0);
  *(undefined8 *)in_RCX = 0;
  time_zone::Impl::LoadTimeZone
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
             (time_zone *)in_RCX);
  if (0xf < uStack_60) {
    uVar9 = uStack_60 + 1;
    uVar7 = local_78._Ptr;
    if (0xfff < uVar9) {
      uVar9 = uStack_60 + 0x28;
      uVar7 = *(undefined8 *)(local_78._Ptr + -8);
      if ((char *)0x1f < local_78._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar7,uVar9);
  }
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  local_78._Ptr = local_78._Ptr & 0xffffffffffffff00;
  if ((char ****)0xf < pppcStack_80) {
    ppppcVar10 = (char ****)((longlong)pppcStack_80 + 1);
    pppppcVar8 = (char *****)local_98;
    if ((char ****)0xfff < ppppcVar10) {
      ppppcVar10 = (char ****)(pppcStack_80 + 5);
      pppppcVar8 = (char *****)local_98[-1];
      if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)pppppcVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pppppcVar8,(ulong64)ppppcVar10);
  }
  return (time_zone)in_RCX;
}

// lookup @ 14f90a380

/* public: struct absl::lts_20240722::time_internal::cctz::time_zone::absolute_lookup __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::lookup(class std::chrono::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1> > > const &
   __ptr64)const __ptr64 */

absolute_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::lookup
          (time_zone *this,absolute_lookup *__return_storage_ptr__,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  (**(code **)(**(longlong **)(pIVar2 + 0x20) + 8))
            (*(longlong **)(pIVar2 + 0x20),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// lookup @ 14f90a3d0

/* public: struct absl::lts_20240722::time_internal::cctz::time_zone::civil_lookup __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::lookup(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64)const __ptr64 */

civil_lookup * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::lookup
          (time_zone *this,civil_lookup *__return_storage_ptr__,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  (**(code **)(**(longlong **)(pIVar2 + 0x20) + 0x10))
            (*(longlong **)(pIVar2 + 0x20),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// name @ 14f90a420

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::time_internal::cctz::time_zone::name(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::name
          (time_zone *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (__return_storage_ptr__,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pIVar2);
  return __return_storage_ptr__;
}

// next_transition @ 14f90a460

/* public: bool __cdecl absl::lts_20240722::time_internal::cctz::time_zone::next_transition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::next_transition
          (time_zone *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  undefined1 uVar1;
  time_zone tVar2;
  Impl *pIVar3;
  
  pIVar3 = this->impl_;
  if (pIVar3 == (Impl *)0x0) {
    tVar2 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar3 = *tVar2.impl_;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f90a49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(pIVar3 + 0x20) + 0x18))
                    (*(longlong **)(pIVar3 + 0x20),param_1,param_2);
  return (bool)uVar1;
}

// prev_transition @ 14f90a4b0

/* public: bool __cdecl absl::lts_20240722::time_internal::cctz::time_zone::prev_transition(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,struct
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition * __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::prev_transition
          (time_zone *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_1,civil_transition *param_2)

{
  undefined1 uVar1;
  time_zone tVar2;
  Impl *pIVar3;
  
  pIVar3 = this->impl_;
  if (pIVar3 == (Impl *)0x0) {
    tVar2 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar3 = *tVar2.impl_;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f90a4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(pIVar3 + 0x20) + 0x20))
                    (*(longlong **)(pIVar3 + 0x20),param_1,param_2);
  return (bool)uVar1;
}

// utc_time_zone @ 14f90a500

/* class absl::lts_20240722::time_internal::cctz::time_zone __cdecl
   absl::lts_20240722::time_internal::cctz::utc_time_zone(void) */

time_zone __cdecl absl::lts_20240722::time_internal::cctz::utc_time_zone(void)

{
  Impl *in_RCX;
  
  time_zone::Impl::UTC();
  return (time_zone)in_RCX;
}

// version @ 14f90a520

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::time_internal::cctz::time_zone::version(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::version
          (time_zone *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  time_zone tVar1;
  Impl *pIVar2;
  
  pIVar2 = this->impl_;
  if (pIVar2 == (Impl *)0x0) {
    tVar1 = Impl::UTC();
                    /* WARNING: Load size is inaccurate */
    pIVar2 = *tVar1.impl_;
  }
  (**(code **)(**(longlong **)(pIVar2 + 0x20) + 0x28))
            (*(longlong **)(pIVar2 + 0x20),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FUN_14f90a560 @ 14f90a560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f90a560(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             HMODULE param_2)

{
  int iVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  LPCWSTR lpWideCharStr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *lpMultiByteStr;
  undefined1 auStackY_b8 [32];
  int local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_50 = param_1;
  pFVar2 = GetProcAddress(param_2,"RoActivateInstance");
  if (pFVar2 != (FARPROC)0x0) {
    pFVar3 = GetProcAddress(param_2,"WindowsCreateStringReference");
    if (pFVar3 != (FARPROC)0x0) {
      pFVar4 = GetProcAddress(param_2,"WindowsDeleteString");
      if (pFVar4 != (FARPROC)0x0) {
        pFVar5 = GetProcAddress(param_2,"WindowsGetStringRawBuffer");
        if (pFVar5 != (FARPROC)0x0) {
          IVar6 = (*pFVar3)(L"Windows.Globalization.Calendar",0x1e,local_48,&local_58);
          if (-1 < (int)IVar6) {
            IVar6 = (*pFVar2)(local_58,&local_70);
            if (-1 < (int)IVar6) {
              iVar1 = (**(code **)*local_70)
                                (local_70,&_GUID_bb3c25e5_46cf_4317_a3f5_02621ad54478,&local_60);
              if (iVar1 < 0) {
                (**(code **)(*local_70 + 0x10))();
              }
              else {
                iVar1 = (**(code **)(*local_60 + 0x30))(local_60,&local_68);
                if (-1 < iVar1) {
                  lpWideCharStr = (LPCWSTR)(*pFVar5)(local_68);
                  if (lpWideCharStr != (LPCWSTR)0x0) {
                    iVar1 = WideCharToMultiByte(0xfde9,0,lpWideCharStr,local_78,(LPSTR)0x0,0,
                                                (LPCSTR)0x0,(LPBOOL)0x0);
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                              (param_1,(longlong)iVar1,'\0');
                    lpMultiByteStr = param_1;
                    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
                      lpMultiByteStr =
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (param_1->_Mypair)._Myval2._Bx._Ptr;
                    }
                    WideCharToMultiByte(0xfde9,0,lpWideCharStr,local_78,(LPSTR)lpMultiByteStr,iVar1,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  (*pFVar4)(local_68);
                }
                (**(code **)(*local_60 + 0x10))();
                (**(code **)(*local_70 + 0x10))();
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}

// FUN_150294590 @ 150294590

void FUN_150294590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x68)
              );
  }
  return;
}

