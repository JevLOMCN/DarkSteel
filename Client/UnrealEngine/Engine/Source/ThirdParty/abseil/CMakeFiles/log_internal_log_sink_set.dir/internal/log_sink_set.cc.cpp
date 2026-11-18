// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 105

// FUN_1501d5c70 @ 1501d5c70

undefined8 * FUN_1501d5c70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1501d6d10(param_1,&PTR_vftable_154e47260);
  FUN_1501d6d10(param_1,&PTR_vftable_154e47268);
  return param_1;
}

// _Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1><> @ 1501d5d00

/* public: __cdecl std::_Compressed_pair<class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>,class std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink *
   __ptr64> >,1>::_Compressed_pair<class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>,class std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink *
   __ptr64> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1><>
          (_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// FUN_1501d5d20 @ 1501d5d20

undefined8 * FUN_1501d5d20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1501d6d10(param_1,&PTR_vftable_154e47260);
  FUN_1501d6d10(param_1,&PTR_vftable_154e47268);
  return param_1;
}

// operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[34]> @ 1501d5db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::operator()<enum
   absl::lts_20240722::LogSeverity,char const * __ptr64 const & __ptr64,int,char const (&
   __ptr64)[34]>(enum absl::lts_20240722::LogSeverity && __ptr64,char const * __ptr64 const &
   __ptr64,int && __ptr64,char const (& __ptr64)[34])const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[34]>
          (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,char *param_4)

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
  } while (param_4[uVar3] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4,
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

// operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[38]> @ 1501d5e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::operator()<enum
   absl::lts_20240722::LogSeverity,char const * __ptr64 const & __ptr64,int,char const (&
   __ptr64)[38]>(enum absl::lts_20240722::LogSeverity && __ptr64,char const * __ptr64 const &
   __ptr64,int && __ptr64,char const (& __ptr64)[38])const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[38]>
          (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,char *param_4)

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
  } while (param_4[uVar3] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4,
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

// FUN_1501d5f70 @ 1501d5f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d5f70(atomic<unsigned_int> *param_1,SchedulingMode param_2)

{
  atomic<unsigned_int> aVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined1 auStack_c8 [48];
  char *local_98;
  ulong64 uStack_90;
  basic_string_view<char,std::char_traits<char>_> local_88;
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar4 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f4c40,param_2), uVar4 == 0)) {
    bVar3 = absl::lts_20240722::log_internal::IsInitialized();
    if (!bVar3) {
      local_98 = local_78;
      local_78[0] = s_WARNING__All_log_messages_befor[0];
      local_78[1] = s_WARNING__All_log_messages_befor[1];
      local_78[2] = s_WARNING__All_log_messages_befor[2];
      local_78[3] = s_WARNING__All_log_messages_befor[3];
      local_78[4] = s_WARNING__All_log_messages_befor[4];
      local_78[5] = s_WARNING__All_log_messages_befor[5];
      local_78[6] = s_WARNING__All_log_messages_befor[6];
      local_78[7] = s_WARNING__All_log_messages_befor[7];
      acStack_70[0] = s_WARNING__All_log_messages_befor[8];
      acStack_70[1] = s_WARNING__All_log_messages_befor[9];
      acStack_70[2] = s_WARNING__All_log_messages_befor[10];
      acStack_70[3] = s_WARNING__All_log_messages_befor[0xb];
      acStack_70[4] = s_WARNING__All_log_messages_befor[0xc];
      acStack_70[5] = s_WARNING__All_log_messages_befor[0xd];
      acStack_70[6] = s_WARNING__All_log_messages_befor[0xe];
      acStack_70[7] = s_WARNING__All_log_messages_befor[0xf];
      local_58[0] = s_WARNING__All_log_messages_befor[0x20];
      local_58[1] = s_WARNING__All_log_messages_befor[0x21];
      local_58[2] = s_WARNING__All_log_messages_befor[0x22];
      local_58[3] = s_WARNING__All_log_messages_befor[0x23];
      local_58[4] = s_WARNING__All_log_messages_befor[0x24];
      local_58[5] = s_WARNING__All_log_messages_befor[0x25];
      local_58[6] = s_WARNING__All_log_messages_befor[0x26];
      local_58[7] = s_WARNING__All_log_messages_befor[0x27];
      acStack_50[0] = s_WARNING__All_log_messages_befor[0x28];
      acStack_50[1] = s_WARNING__All_log_messages_befor[0x29];
      acStack_50[2] = s_WARNING__All_log_messages_befor[0x2a];
      acStack_50[3] = s_WARNING__All_log_messages_befor[0x2b];
      acStack_50[4] = s_WARNING__All_log_messages_befor[0x2c];
      acStack_50[5] = s_WARNING__All_log_messages_befor[0x2d];
      acStack_50[6] = s_WARNING__All_log_messages_befor[0x2e];
      acStack_50[7] = s_WARNING__All_log_messages_befor[0x2f];
      local_38[0] = s_WARNING__All_log_messages_befor[0x40];
      local_38[1] = s_WARNING__All_log_messages_befor[0x41];
      local_38[2] = s_WARNING__All_log_messages_befor[0x42];
      local_38[3] = s_WARNING__All_log_messages_befor[0x43];
      local_38[4] = s_WARNING__All_log_messages_befor[0x44];
      local_38[5] = s_WARNING__All_log_messages_befor[0x45];
      local_38[6] = s_WARNING__All_log_messages_befor[0x46];
      local_38[7] = s_WARNING__All_log_messages_befor[0x47];
      acStack_30[0] = s_WARNING__All_log_messages_befor[0x48];
      acStack_30[1] = s_WARNING__All_log_messages_befor[0x49];
      acStack_30[2] = s_WARNING__All_log_messages_befor[0x4a];
      acStack_30[3] = s_WARNING__All_log_messages_befor[0x4b];
      acStack_30[4] = s_WARNING__All_log_messages_befor[0x4c];
      acStack_30[5] = s_WARNING__All_log_messages_befor[0x4d];
      acStack_30[6] = s_WARNING__All_log_messages_befor[0x4e];
      acStack_30[7] = s_WARNING__All_log_messages_befor[0x4f];
      local_68[0] = s_WARNING__All_log_messages_befor[0x10];
      local_68[1] = s_WARNING__All_log_messages_befor[0x11];
      local_68[2] = s_WARNING__All_log_messages_befor[0x12];
      local_68[3] = s_WARNING__All_log_messages_befor[0x13];
      local_68[4] = s_WARNING__All_log_messages_befor[0x14];
      local_68[5] = s_WARNING__All_log_messages_befor[0x15];
      local_68[6] = s_WARNING__All_log_messages_befor[0x16];
      local_68[7] = s_WARNING__All_log_messages_befor[0x17];
      acStack_60[0] = s_WARNING__All_log_messages_befor[0x18];
      acStack_60[1] = s_WARNING__All_log_messages_befor[0x19];
      acStack_60[2] = s_WARNING__All_log_messages_befor[0x1a];
      acStack_60[3] = s_WARNING__All_log_messages_befor[0x1b];
      acStack_60[4] = s_WARNING__All_log_messages_befor[0x1c];
      acStack_60[5] = s_WARNING__All_log_messages_befor[0x1d];
      acStack_60[6] = s_WARNING__All_log_messages_befor[0x1e];
      acStack_60[7] = s_WARNING__All_log_messages_befor[0x1f];
      local_28[0] = s_WARNING__All_log_messages_befor[0x50];
      local_28[1] = s_WARNING__All_log_messages_befor[0x51];
      local_28[2] = s_WARNING__All_log_messages_befor[0x52];
      local_28[3] = s_WARNING__All_log_messages_befor[0x53];
      local_28[4] = s_WARNING__All_log_messages_befor[0x54];
      local_28[5] = s_WARNING__All_log_messages_befor[0x55];
      local_28[6] = s_WARNING__All_log_messages_befor[0x56];
      local_28[7] = s_WARNING__All_log_messages_befor[0x57];
      local_48[0] = s_WARNING__All_log_messages_befor[0x30];
      local_48[1] = s_WARNING__All_log_messages_befor[0x31];
      local_48[2] = s_WARNING__All_log_messages_befor[0x32];
      local_48[3] = s_WARNING__All_log_messages_befor[0x33];
      local_48[4] = s_WARNING__All_log_messages_befor[0x34];
      local_48[5] = s_WARNING__All_log_messages_befor[0x35];
      local_48[6] = s_WARNING__All_log_messages_befor[0x36];
      local_48[7] = s_WARNING__All_log_messages_befor[0x37];
      acStack_40[0] = s_WARNING__All_log_messages_befor[0x38];
      acStack_40[1] = s_WARNING__All_log_messages_befor[0x39];
      acStack_40[2] = s_WARNING__All_log_messages_befor[0x3a];
      acStack_40[3] = s_WARNING__All_log_messages_befor[0x3b];
      acStack_40[4] = s_WARNING__All_log_messages_befor[0x3c];
      acStack_40[5] = s_WARNING__All_log_messages_befor[0x3d];
      acStack_40[6] = s_WARNING__All_log_messages_befor[0x3e];
      acStack_40[7] = s_WARNING__All_log_messages_befor[0x3f];
      uVar5 = 0xffffffffffffffff;
      do {
        uStack_90 = uVar5 + 1;
        lVar2 = uVar5 + 1;
        uVar5 = uStack_90;
      } while (local_78[lVar2] != '\0');
      local_88._Mydata = local_98;
      local_88._Mysize = uStack_90;
      absl::lts_20240722::log_internal::WriteToStderr(&local_88,kWarning);
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

// GetData<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d6090

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetData<class std::vector<class absl::lts_20240722::LogSink *
   __ptr64,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> > >(class
   std::vector<class absl::lts_20240722::LogSink * __ptr64,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> > & __ptr64) */

LogSink ** __cdecl
absl::lts_20240722::span_internal::
GetData<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *param_1)

{
  return *(LogSink ***)param_1;
}

// GetDataImpl<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d60a0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetDataImpl<class std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> > >(class std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> > & __ptr64,char) */

LogSink ** __cdecl
absl::lts_20240722::span_internal::
GetDataImpl<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *param_1,char param_2)

{
  return *(LogSink ***)param_1;
}

// FUN_1501d60e0 @ 1501d60e0

undefined1 * FUN_1501d60e0(undefined1 *param_1)

{
  *param_1 = 1;
  return param_1;
}

// FUN_1501d6100 @ 1501d6100

undefined1 * FUN_1501d6100(undefined1 *param_1)

{
  *param_1 = 1;
  return param_1;
}

// MakeSpan<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d6120

/* class absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64> __cdecl
   absl::lts_20240722::MakeSpan<class std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> > >(class std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> > & __ptr64) */

vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *
__cdecl absl::lts_20240722::
        MakeSpan<std::vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
                  (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                   *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *in_RDX;
  
  lVar1 = *in_RDX;
  lVar2 = in_RDX[1];
  *(longlong *)param_1 = lVar1;
  *(longlong *)(param_1 + 8) = lVar2 - lVar1 >> 3;
  return param_1;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_absl::lts_20240722::LogSink*___ptr64>_>_>_> @ 1501d6140

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > >(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > > const
   & __ptr64,class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_absl::lts_20240722::LogSink*___ptr64>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
          *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6150

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   std::_Allocate_at_least_helper<class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >(class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,unsigned __int64 &
   __ptr64) */

LogSink ** __cdecl
std::_Allocate_at_least_helper<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  LogSink *pLVar2;
  LogSink **ppLVar3;
  
  if (*param_2 < 0x2000000000000000) {
    uVar1 = *param_2 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppLVar3 = ::operator_new(uVar1);
        return ppLVar3;
      }
      return (LogSink **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pLVar2 = ::operator_new(uVar1 + 0x27);
      if (pLVar2 != (LogSink *)0x0) {
        ppLVar3 = (LogSink **)((ulonglong)&pLVar2[4].field_0x7 & 0xffffffffffffffe0);
        ppLVar3[-1] = pLVar2;
        return ppLVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Construct_in_place<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 1501d61d0

/* void __cdecl std::_Construct_in_place<class absl::lts_20240722::LogSink * __ptr64,class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 & __ptr64,class absl::lts_20240722::LogSink * __ptr64 const & __ptr64) */

void __cdecl
std::
_Construct_in_place<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (LogSink **param_1,LogSink **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Copy_memmove<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 1501d61e0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Copy_memmove<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink
   * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 * __ptr64) */

LogSink ** __cdecl
std::
_Copy_memmove<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64*___ptr64>
          (LogSink **param_1,LogSink **param_2,LogSink **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (LogSink **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Could_compare_equal_to_value_type<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64> @ 1501d6220

/* bool __cdecl std::_Could_compare_equal_to_value_type<class absl::lts_20240722::LogSink * __ptr64
   * __ptr64,class absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 const & __ptr64) */

bool __cdecl
std::
_Could_compare_equal_to_value_type<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64>
          (LogSink **param_1)

{
  return true;
}

// _Destroy_range<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6230

/* void __cdecl std::_Destroy_range<class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >(class absl::lts_20240722::LogSink * __ptr64 * __ptr64,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64) */

void __cdecl
std::_Destroy_range<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (LogSink **param_1,LogSink **param_2,
          allocator<absl::lts_20240722::LogSink*___ptr64> *param_3)

{
  return;
}

// _Emplace_back<absl::lts_20240722::LogSink*___ptr64> @ 1501d6240

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::_Emplace_back<class absl::lts_20240722::LogSink *
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Emplace_back<absl::lts_20240722::LogSink*___ptr64>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this,
          LogSink **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back_with_unused_capacity<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 1501d6260

/* private: class absl::lts_20240722::LogSink * __ptr64 & __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::_Emplace_back_with_unused_capacity<class absl::lts_20240722::LogSink * __ptr64 const
   & __ptr64>(class absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Emplace_back_with_unused_capacity<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1)

{
  LogSink **ppLVar1;
  
  **(undefined8 **)(this + 8) = *param_1;
  ppLVar1 = *(LogSink ***)(this + 8);
  *(LogSink ***)(this + 8) = ppLVar1 + 1;
  return ppLVar1;
}

// _Emplace_one_at_back<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 1501d6280

/* private: class absl::lts_20240722::LogSink * __ptr64 & __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::_Emplace_one_at_back<class absl::lts_20240722::LogSink * __ptr64 const &
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Emplace_one_at_back<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1)

{
  LogSink **ppLVar1;
  
  ppLVar1 = *(LogSink ***)(this + 8);
  if (ppLVar1 != *(LogSink ***)(this + 0x10)) {
    *ppLVar1 = *param_1;
    ppLVar1 = *(LogSink ***)(this + 8);
    *(LogSink ***)(this + 8) = ppLVar1 + 1;
    return ppLVar1;
  }
  ppLVar1 = _Emplace_reallocate<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
                      (this,ppLVar1,param_1);
  return ppLVar1;
}

// _Emplace_reallocate<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 1501d62b0

/* private: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::_Emplace_reallocate<class absl::lts_20240722::LogSink * __ptr64 const &
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Emplace_reallocate<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1,LogSink **param_2)

{
  ulonglong uVar1;
  LogSink **ppLVar2;
  longlong lVar3;
  LogSink **_Src;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  LogSink *pLVar7;
  ulonglong uVar8;
  LogSink **_Dst;
  void *pvVar9;
  ulong64 uVar10;
  LogSink **ppLVar11;
  size_t _Size;
  ulonglong uVar12;
  
  lVar3 = *(longlong *)this;
  lVar6 = *(longlong *)(this + 8) - lVar3 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
    _Xlength();
    pcVar5 = (code *)swi(3);
    ppLVar11 = (LogSink **)(*pcVar5)();
    return ppLVar11;
  }
  uVar1 = lVar6 + 1;
  uVar8 = *(longlong *)(this + 0x10) - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar8 >> 1) < uVar8) {
LAB_1501d6444:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar8 = (uVar8 >> 1) + uVar8;
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
  }
  if (0x1fffffffffffffff < uVar12) goto LAB_1501d6444;
  uVar8 = uVar12 * 8;
  if (uVar8 < 0x1000) {
    if (uVar8 == 0) {
      ppLVar11 = (LogSink **)0x0;
    }
    else {
      ppLVar11 = ::operator_new(uVar8);
    }
  }
  else {
    if (uVar8 + 0x27 <= uVar8) goto LAB_1501d6444;
    pLVar7 = ::operator_new(uVar8 + 0x27);
    if (pLVar7 == (LogSink *)0x0) goto LAB_1501d643d;
    ppLVar11 = (LogSink **)((ulonglong)&pLVar7[4].field_0x7 & 0xffffffffffffffe0);
    ppLVar11[-1] = pLVar7;
  }
  ppLVar2 = ppLVar11 + ((longlong)param_1 - lVar3 >> 3);
  *ppLVar2 = *param_2;
  _Src = *(LogSink ***)this;
  if (param_1 == *(LogSink ***)(this + 8)) {
    _Size = (longlong)*(LogSink ***)(this + 8) - (longlong)_Src;
    _Dst = ppLVar11;
    param_1 = _Src;
  }
  else {
    memmove(ppLVar11,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = ppLVar2 + 1;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    uVar10 = *(longlong *)(this + 0x10) - (longlong)pvVar4 & 0xfffffffffffffff8;
    pvVar9 = pvVar4;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      pvVar9 = *(void **)((longlong)pvVar4 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9))) {
LAB_1501d643d:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar9,uVar10);
  }
  *(LogSink ***)this = ppLVar11;
  *(LogSink ***)(this + 8) = ppLVar11 + uVar1;
  *(LogSink ***)(this + 0x10) = ppLVar11 + uVar12;
  return ppLVar2;
}

// _Find_unchecked<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64> @ 1501d6460

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Find_unchecked<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink *
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink
   * __ptr64 * __ptr64 const,class absl::lts_20240722::LogSink * __ptr64 const & __ptr64) */

LogSink ** __cdecl
std::
_Find_unchecked<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64>
          (LogSink **param_1,LogSink **param_2,LogSink **param_3)

{
  LogSink **ppLVar1;
  
  ppLVar1 = __std_find_trivial_8(param_1,param_2,(ulong64)*param_3);
  return ppLVar1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>&___ptr64> @ 1501d6470

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > > & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Get_unwrapped<absl::lts_20240722::LogSink*___ptr64*___ptr64_const&___ptr64> @ 1501d6480

/* UNKNOWN __cdecl std::_Get_unwrapped<class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const &
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const & __ptr64) */

LogSink ** __cdecl
std::_Get_unwrapped<absl::lts_20240722::LogSink*___ptr64*___ptr64_const&___ptr64>
          (LogSink ***param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>_const&___ptr64> @ 1501d6490

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > > const & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > const & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>_const&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Move_unchecked<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 1501d64a0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Move_unchecked<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink
   * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 * __ptr64) */

LogSink ** __cdecl
std::
_Move_unchecked<absl::lts_20240722::LogSink*___ptr64*___ptr64,absl::lts_20240722::LogSink*___ptr64*___ptr64>
          (LogSink **param_1,LogSink **param_2,LogSink **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (LogSink **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Refancy<absl::lts_20240722::LogSink*___ptr64*___ptr64,0> @ 1501d64e0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Refancy<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,0>(class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64) */

LogSink ** __cdecl std::_Refancy<absl::lts_20240722::LogSink*___ptr64*___ptr64,0>(LogSink **param_1)

{
  return param_1;
}

// _Seek_wrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 1501d64f0

/* void __cdecl std::_Seek_wrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64>(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > > &
   __ptr64,class absl::lts_20240722::LogSink * __ptr64 * __ptr64 && __ptr64) */

void __cdecl
std::
_Seek_wrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *param_1,LogSink ***param_2)

{
  *(LogSink ***)param_1 = *param_2;
  return;
}

// _To_address<absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 1501d6500

/* UNKNOWN __cdecl std::_To_address<class absl::lts_20240722::LogSink * __ptr64 * __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const & __ptr64) */

LogSink ** __cdecl
std::_To_address<absl::lts_20240722::LogSink*___ptr64*___ptr64>(LogSink ***param_1)

{
  return *param_1;
}

// _Unfancy<absl::lts_20240722::LogSink*___ptr64> @ 1501d6510

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Unfancy<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64) */

LogSink ** __cdecl std::_Unfancy<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return param_1;
}

// _Unfancy_maybe_null<absl::lts_20240722::LogSink*___ptr64> @ 1501d6520

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Unfancy_maybe_null<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64) */

LogSink ** __cdecl std::_Unfancy_maybe_null<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return param_1;
}

// _Uninitialized_move<absl::lts_20240722::LogSink*___ptr64*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6530

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Uninitialized_move<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(class absl::lts_20240722::LogSink * __ptr64 * __ptr64
   const,class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64) */

LogSink ** __cdecl
std::
_Uninitialized_move<absl::lts_20240722::LogSink*___ptr64*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (LogSink **param_1,LogSink **param_2,LogSink **param_3,
          allocator<absl::lts_20240722::LogSink*___ptr64> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1 >> 3);
}

// __std_find_trivial<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64> @ 1501d6570

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl __std_find_trivial<class
   absl::lts_20240722::LogSink * __ptr64,class absl::lts_20240722::LogSink * __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64,class absl::lts_20240722::LogSink * __ptr64 const) */

LogSink ** __cdecl
__std_find_trivial<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64>
          (LogSink **param_1,LogSink **param_2,LogSink *param_3)

{
  LogSink **ppLVar1;
  
  ppLVar1 = __std_find_trivial_8(param_1,param_2,(ulong64)param_3);
  return ppLVar1;
}

// __std_find_trivial<absl::lts_20240722::LogSink*___ptr64,unsigned___int64> @ 1501d6580

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl __std_find_trivial<class
   absl::lts_20240722::LogSink * __ptr64,unsigned __int64>(class absl::lts_20240722::LogSink *
   __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 * __ptr64,unsigned __int64) */

LogSink ** __cdecl
__std_find_trivial<absl::lts_20240722::LogSink*___ptr64,unsigned___int64>
          (LogSink **param_1,LogSink **param_2,__uint64 param_3)

{
  LogSink **ppLVar1;
  
  ppLVar1 = __std_find_trivial_8(param_1,param_2,param_3);
  return ppLVar1;
}

// addressof<absl::lts_20240722::LogSink*___ptr64> @ 1501d6590

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::addressof<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 & __ptr64) */

LogSink ** __cdecl std::addressof<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d65a0

/* class std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > *
   __ptr64 __cdecl std::addressof<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > >(class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > & __ptr64) */

_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_> * __cdecl
std::addressof<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
          (_Vector_val<struct_std::_Simple_types<class_absl::lts_20240722::LogSink*___ptr64>_>
           *param_1)

{
  return (_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_> *)param_1;
}

// FUN_1501d65b0 @ 1501d65b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d65b0(atomic<unsigned_int> *param_1)

{
  atomic<unsigned_int> aVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined1 auStack_c8 [48];
  char *local_98;
  ulong64 uStack_90;
  basic_string_view<char,std::char_traits<char>_> local_88;
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*param_1 != (atomic<unsigned_int>)0xdd) {
    LOCK();
    aVar1 = *param_1;
    if (aVar1 == (atomic<unsigned_int>)0x0) {
      *param_1 = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((aVar1 == (atomic<unsigned_int>)0x0) ||
       (uVar4 = absl::lts_20240722::base_internal::SpinLockWait
                          (param_1,3,(SpinLockWaitTransition *)&DAT_1536f4c40,
                           SCHEDULE_COOPERATIVE_AND_KERNEL), uVar4 == 0)) {
      bVar3 = absl::lts_20240722::log_internal::IsInitialized();
      if (!bVar3) {
        local_98 = local_78;
        local_78[0] = s_WARNING__All_log_messages_befor[0];
        local_78[1] = s_WARNING__All_log_messages_befor[1];
        local_78[2] = s_WARNING__All_log_messages_befor[2];
        local_78[3] = s_WARNING__All_log_messages_befor[3];
        local_78[4] = s_WARNING__All_log_messages_befor[4];
        local_78[5] = s_WARNING__All_log_messages_befor[5];
        local_78[6] = s_WARNING__All_log_messages_befor[6];
        local_78[7] = s_WARNING__All_log_messages_befor[7];
        acStack_70[0] = s_WARNING__All_log_messages_befor[8];
        acStack_70[1] = s_WARNING__All_log_messages_befor[9];
        acStack_70[2] = s_WARNING__All_log_messages_befor[10];
        acStack_70[3] = s_WARNING__All_log_messages_befor[0xb];
        acStack_70[4] = s_WARNING__All_log_messages_befor[0xc];
        acStack_70[5] = s_WARNING__All_log_messages_befor[0xd];
        acStack_70[6] = s_WARNING__All_log_messages_befor[0xe];
        acStack_70[7] = s_WARNING__All_log_messages_befor[0xf];
        local_58[0] = s_WARNING__All_log_messages_befor[0x20];
        local_58[1] = s_WARNING__All_log_messages_befor[0x21];
        local_58[2] = s_WARNING__All_log_messages_befor[0x22];
        local_58[3] = s_WARNING__All_log_messages_befor[0x23];
        local_58[4] = s_WARNING__All_log_messages_befor[0x24];
        local_58[5] = s_WARNING__All_log_messages_befor[0x25];
        local_58[6] = s_WARNING__All_log_messages_befor[0x26];
        local_58[7] = s_WARNING__All_log_messages_befor[0x27];
        acStack_50[0] = s_WARNING__All_log_messages_befor[0x28];
        acStack_50[1] = s_WARNING__All_log_messages_befor[0x29];
        acStack_50[2] = s_WARNING__All_log_messages_befor[0x2a];
        acStack_50[3] = s_WARNING__All_log_messages_befor[0x2b];
        acStack_50[4] = s_WARNING__All_log_messages_befor[0x2c];
        acStack_50[5] = s_WARNING__All_log_messages_befor[0x2d];
        acStack_50[6] = s_WARNING__All_log_messages_befor[0x2e];
        acStack_50[7] = s_WARNING__All_log_messages_befor[0x2f];
        local_38[0] = s_WARNING__All_log_messages_befor[0x40];
        local_38[1] = s_WARNING__All_log_messages_befor[0x41];
        local_38[2] = s_WARNING__All_log_messages_befor[0x42];
        local_38[3] = s_WARNING__All_log_messages_befor[0x43];
        local_38[4] = s_WARNING__All_log_messages_befor[0x44];
        local_38[5] = s_WARNING__All_log_messages_befor[0x45];
        local_38[6] = s_WARNING__All_log_messages_befor[0x46];
        local_38[7] = s_WARNING__All_log_messages_befor[0x47];
        acStack_30[0] = s_WARNING__All_log_messages_befor[0x48];
        acStack_30[1] = s_WARNING__All_log_messages_befor[0x49];
        acStack_30[2] = s_WARNING__All_log_messages_befor[0x4a];
        acStack_30[3] = s_WARNING__All_log_messages_befor[0x4b];
        acStack_30[4] = s_WARNING__All_log_messages_befor[0x4c];
        acStack_30[5] = s_WARNING__All_log_messages_befor[0x4d];
        acStack_30[6] = s_WARNING__All_log_messages_befor[0x4e];
        acStack_30[7] = s_WARNING__All_log_messages_befor[0x4f];
        local_68[0] = s_WARNING__All_log_messages_befor[0x10];
        local_68[1] = s_WARNING__All_log_messages_befor[0x11];
        local_68[2] = s_WARNING__All_log_messages_befor[0x12];
        local_68[3] = s_WARNING__All_log_messages_befor[0x13];
        local_68[4] = s_WARNING__All_log_messages_befor[0x14];
        local_68[5] = s_WARNING__All_log_messages_befor[0x15];
        local_68[6] = s_WARNING__All_log_messages_befor[0x16];
        local_68[7] = s_WARNING__All_log_messages_befor[0x17];
        acStack_60[0] = s_WARNING__All_log_messages_befor[0x18];
        acStack_60[1] = s_WARNING__All_log_messages_befor[0x19];
        acStack_60[2] = s_WARNING__All_log_messages_befor[0x1a];
        acStack_60[3] = s_WARNING__All_log_messages_befor[0x1b];
        acStack_60[4] = s_WARNING__All_log_messages_befor[0x1c];
        acStack_60[5] = s_WARNING__All_log_messages_befor[0x1d];
        acStack_60[6] = s_WARNING__All_log_messages_befor[0x1e];
        acStack_60[7] = s_WARNING__All_log_messages_befor[0x1f];
        local_28[0] = s_WARNING__All_log_messages_befor[0x50];
        local_28[1] = s_WARNING__All_log_messages_befor[0x51];
        local_28[2] = s_WARNING__All_log_messages_befor[0x52];
        local_28[3] = s_WARNING__All_log_messages_befor[0x53];
        local_28[4] = s_WARNING__All_log_messages_befor[0x54];
        local_28[5] = s_WARNING__All_log_messages_befor[0x55];
        local_28[6] = s_WARNING__All_log_messages_befor[0x56];
        local_28[7] = s_WARNING__All_log_messages_befor[0x57];
        local_48[0] = s_WARNING__All_log_messages_befor[0x30];
        local_48[1] = s_WARNING__All_log_messages_befor[0x31];
        local_48[2] = s_WARNING__All_log_messages_befor[0x32];
        local_48[3] = s_WARNING__All_log_messages_befor[0x33];
        local_48[4] = s_WARNING__All_log_messages_befor[0x34];
        local_48[5] = s_WARNING__All_log_messages_befor[0x35];
        local_48[6] = s_WARNING__All_log_messages_befor[0x36];
        local_48[7] = s_WARNING__All_log_messages_befor[0x37];
        acStack_40[0] = s_WARNING__All_log_messages_befor[0x38];
        acStack_40[1] = s_WARNING__All_log_messages_befor[0x39];
        acStack_40[2] = s_WARNING__All_log_messages_befor[0x3a];
        acStack_40[3] = s_WARNING__All_log_messages_befor[0x3b];
        acStack_40[4] = s_WARNING__All_log_messages_befor[0x3c];
        acStack_40[5] = s_WARNING__All_log_messages_befor[0x3d];
        acStack_40[6] = s_WARNING__All_log_messages_befor[0x3e];
        acStack_40[7] = s_WARNING__All_log_messages_befor[0x3f];
        uVar5 = 0xffffffffffffffff;
        do {
          uStack_90 = uVar5 + 1;
          lVar2 = uVar5 + 1;
          uVar5 = uStack_90;
        } while (local_78[lVar2] != '\0');
        local_88._Mydata = local_98;
        local_88._Mysize = uStack_90;
        absl::lts_20240722::log_internal::WriteToStderr(&local_88,kWarning);
      }
      LOCK();
      aVar1 = *param_1;
      *param_1 = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(param_1,1);
      }
    }
  }
  return;
}

// find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,absl::lts_20240722::LogSink*___ptr64> @ 1501d66f0

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > __cdecl std::find<class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >,class
   absl::lts_20240722::LogSink * __ptr64>(class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > >,class absl::lts_20240722::LogSink * __ptr64 const &
   __ptr64) */

undefined8 * __cdecl
std::
find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>,absl::lts_20240722::LogSink*___ptr64>
          (undefined8 *param_1,void *param_2,void *param_3,ulong64 *param_4)

{
  void *pvVar1;
  
  pvVar1 = __std_find_trivial_8(param_2,param_3,*param_4);
  *param_1 = pvVar1;
  return param_1;
}

// forward<char_const_(&___ptr64)[34]> @ 1501d6720

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[34]>(char const (&
   __ptr64)[34]))[34] */

char * __cdecl std::forward<char_const_(&___ptr64)[34]>(char *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[38]> @ 1501d6730

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[38]>(char const (&
   __ptr64)[38]))[38] */

char * __cdecl std::forward<char_const_(&___ptr64)[38]>(char *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 1501d6740

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64 & __ptr64) */

LogSink *** __cdecl std::forward<absl::lts_20240722::LogSink*___ptr64*___ptr64>(LogSink ***param_1)

{
  return param_1;
}

// FUN_1501d6760 @ 1501d6760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d6760(void)

{
  longlong lVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  basic_string_view<char,std::char_traits<char>_> local_88;
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = absl::lts_20240722::log_internal::IsInitialized();
  if (!bVar2) {
    local_88._Mydata = local_78;
    local_78[0] = s_WARNING__All_log_messages_befor[0];
    local_78[1] = s_WARNING__All_log_messages_befor[1];
    local_78[2] = s_WARNING__All_log_messages_befor[2];
    local_78[3] = s_WARNING__All_log_messages_befor[3];
    local_78[4] = s_WARNING__All_log_messages_befor[4];
    local_78[5] = s_WARNING__All_log_messages_befor[5];
    local_78[6] = s_WARNING__All_log_messages_befor[6];
    local_78[7] = s_WARNING__All_log_messages_befor[7];
    acStack_70[0] = s_WARNING__All_log_messages_befor[8];
    acStack_70[1] = s_WARNING__All_log_messages_befor[9];
    acStack_70[2] = s_WARNING__All_log_messages_befor[10];
    acStack_70[3] = s_WARNING__All_log_messages_befor[0xb];
    acStack_70[4] = s_WARNING__All_log_messages_befor[0xc];
    acStack_70[5] = s_WARNING__All_log_messages_befor[0xd];
    acStack_70[6] = s_WARNING__All_log_messages_befor[0xe];
    acStack_70[7] = s_WARNING__All_log_messages_befor[0xf];
    local_58[0] = s_WARNING__All_log_messages_befor[0x20];
    local_58[1] = s_WARNING__All_log_messages_befor[0x21];
    local_58[2] = s_WARNING__All_log_messages_befor[0x22];
    local_58[3] = s_WARNING__All_log_messages_befor[0x23];
    local_58[4] = s_WARNING__All_log_messages_befor[0x24];
    local_58[5] = s_WARNING__All_log_messages_befor[0x25];
    local_58[6] = s_WARNING__All_log_messages_befor[0x26];
    local_58[7] = s_WARNING__All_log_messages_befor[0x27];
    acStack_50[0] = s_WARNING__All_log_messages_befor[0x28];
    acStack_50[1] = s_WARNING__All_log_messages_befor[0x29];
    acStack_50[2] = s_WARNING__All_log_messages_befor[0x2a];
    acStack_50[3] = s_WARNING__All_log_messages_befor[0x2b];
    acStack_50[4] = s_WARNING__All_log_messages_befor[0x2c];
    acStack_50[5] = s_WARNING__All_log_messages_befor[0x2d];
    acStack_50[6] = s_WARNING__All_log_messages_befor[0x2e];
    acStack_50[7] = s_WARNING__All_log_messages_befor[0x2f];
    local_38[0] = s_WARNING__All_log_messages_befor[0x40];
    local_38[1] = s_WARNING__All_log_messages_befor[0x41];
    local_38[2] = s_WARNING__All_log_messages_befor[0x42];
    local_38[3] = s_WARNING__All_log_messages_befor[0x43];
    local_38[4] = s_WARNING__All_log_messages_befor[0x44];
    local_38[5] = s_WARNING__All_log_messages_befor[0x45];
    local_38[6] = s_WARNING__All_log_messages_befor[0x46];
    local_38[7] = s_WARNING__All_log_messages_befor[0x47];
    acStack_30[0] = s_WARNING__All_log_messages_befor[0x48];
    acStack_30[1] = s_WARNING__All_log_messages_befor[0x49];
    acStack_30[2] = s_WARNING__All_log_messages_befor[0x4a];
    acStack_30[3] = s_WARNING__All_log_messages_befor[0x4b];
    acStack_30[4] = s_WARNING__All_log_messages_befor[0x4c];
    acStack_30[5] = s_WARNING__All_log_messages_befor[0x4d];
    acStack_30[6] = s_WARNING__All_log_messages_befor[0x4e];
    acStack_30[7] = s_WARNING__All_log_messages_befor[0x4f];
    local_68[0] = s_WARNING__All_log_messages_befor[0x10];
    local_68[1] = s_WARNING__All_log_messages_befor[0x11];
    local_68[2] = s_WARNING__All_log_messages_befor[0x12];
    local_68[3] = s_WARNING__All_log_messages_befor[0x13];
    local_68[4] = s_WARNING__All_log_messages_befor[0x14];
    local_68[5] = s_WARNING__All_log_messages_befor[0x15];
    local_68[6] = s_WARNING__All_log_messages_befor[0x16];
    local_68[7] = s_WARNING__All_log_messages_befor[0x17];
    acStack_60[0] = s_WARNING__All_log_messages_befor[0x18];
    acStack_60[1] = s_WARNING__All_log_messages_befor[0x19];
    acStack_60[2] = s_WARNING__All_log_messages_befor[0x1a];
    acStack_60[3] = s_WARNING__All_log_messages_befor[0x1b];
    acStack_60[4] = s_WARNING__All_log_messages_befor[0x1c];
    acStack_60[5] = s_WARNING__All_log_messages_befor[0x1d];
    acStack_60[6] = s_WARNING__All_log_messages_befor[0x1e];
    acStack_60[7] = s_WARNING__All_log_messages_befor[0x1f];
    local_28[0] = s_WARNING__All_log_messages_befor[0x50];
    local_28[1] = s_WARNING__All_log_messages_befor[0x51];
    local_28[2] = s_WARNING__All_log_messages_befor[0x52];
    local_28[3] = s_WARNING__All_log_messages_befor[0x53];
    local_28[4] = s_WARNING__All_log_messages_befor[0x54];
    local_28[5] = s_WARNING__All_log_messages_befor[0x55];
    local_28[6] = s_WARNING__All_log_messages_befor[0x56];
    local_28[7] = s_WARNING__All_log_messages_befor[0x57];
    local_48[0] = s_WARNING__All_log_messages_befor[0x30];
    local_48[1] = s_WARNING__All_log_messages_befor[0x31];
    local_48[2] = s_WARNING__All_log_messages_befor[0x32];
    local_48[3] = s_WARNING__All_log_messages_befor[0x33];
    local_48[4] = s_WARNING__All_log_messages_befor[0x34];
    local_48[5] = s_WARNING__All_log_messages_befor[0x35];
    local_48[6] = s_WARNING__All_log_messages_befor[0x36];
    local_48[7] = s_WARNING__All_log_messages_befor[0x37];
    acStack_40[0] = s_WARNING__All_log_messages_befor[0x38];
    acStack_40[1] = s_WARNING__All_log_messages_befor[0x39];
    acStack_40[2] = s_WARNING__All_log_messages_befor[0x3a];
    acStack_40[3] = s_WARNING__All_log_messages_befor[0x3b];
    acStack_40[4] = s_WARNING__All_log_messages_befor[0x3c];
    acStack_40[5] = s_WARNING__All_log_messages_befor[0x3d];
    acStack_40[6] = s_WARNING__All_log_messages_befor[0x3e];
    acStack_40[7] = s_WARNING__All_log_messages_befor[0x3f];
    uVar3 = 0xffffffffffffffff;
    do {
      local_88._Mysize = uVar3 + 1;
      lVar1 = uVar3 + 1;
      uVar3 = local_88._Mysize;
    } while (local_78[lVar1] != '\0');
    absl::lts_20240722::log_internal::WriteToStderr(&local_88,kWarning);
  }
  return;
}

// to_address<absl::lts_20240722::LogSink*___ptr64> @ 1501d6890

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::to_address<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64
   const) */

LogSink ** __cdecl std::to_address<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return param_1;
}

// _Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d68e0

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::_Uninitialized_backout_al<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> * __thiscall
std::_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this,
          LogSink **param_1,allocator<absl::lts_20240722::LogSink*___ptr64> *param_2)

{
  *(LogSink ***)this = param_1;
  *(LogSink ***)(this + 8) = param_1;
  *(allocator<absl::lts_20240722::LogSink*___ptr64> **)(this + 0x10) = param_2;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d6900

/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >::_Vector_const_iterator<class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,struct std::_Container_base0 const * __ptr64)
   __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
* __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *this,LogSink **param_1,_Container_base0 *param_2)

{
  *(LogSink ***)this = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_> @ 1501d6910

/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > >::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,struct std::_Container_base0 const * __ptr64)
   __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_> *
__thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *this,LogSink **param_1,_Container_base0 *param_2)

{
  *(LogSink ***)this = param_1;
  return this;
}

// _Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6920

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink *
   __ptr64> >::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64>
   >(void) __ptr64 */

_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_> * __thiscall
std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>::
_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>
          (_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6940

/* public: __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >(void) __ptr64 */

vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *
__thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// FUN_1501d6960 @ 1501d6960

undefined8 * FUN_1501d6960(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1501d6d10(param_1,&PTR_vftable_154e47260);
  FUN_1501d6d10(param_1,&PTR_vftable_154e47268);
  return param_1;
}

// LogSink @ 1501d69b0

/* protected: __cdecl absl::lts_20240722::LogSink::LogSink(void) __ptr64 */

LogSink * __thiscall absl::lts_20240722::LogSink::LogSink(LogSink *this)

{
  *this = (LogSink)vftable;
  return this;
}

// ~_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6a70

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::~_Uninitialized_backout_al<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
~_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  return;
}

// ~vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 1501d6a80

/* public: __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::~vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >(void) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
~vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
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

// ~LogSink @ 1501d6af0

/* public: virtual __cdecl absl::lts_20240722::LogSink::~LogSink(void) __ptr64 */

void __thiscall absl::lts_20240722::LogSink::~LogSink(LogSink *this)

{
  return;
}

// operator== @ 1501d6b20

/* public: bool __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >::operator==(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > const & __ptr64)const __ptr64 */

bool __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::operator==(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
             *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_absl::lts_20240722::LogSink*___ptr64>_>_>
                   *param_1)

{
  return *(longlong *)this == *(longlong *)param_1;
}

// FUN_1501d6b40 @ 1501d6b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d6b40(void)

{
  longlong lVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  basic_string_view<char,std::char_traits<char>_> local_88;
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = absl::lts_20240722::log_internal::IsInitialized();
  if (!bVar2) {
    local_88._Mydata = local_78;
    local_78[0] = s_WARNING__All_log_messages_befor[0];
    local_78[1] = s_WARNING__All_log_messages_befor[1];
    local_78[2] = s_WARNING__All_log_messages_befor[2];
    local_78[3] = s_WARNING__All_log_messages_befor[3];
    local_78[4] = s_WARNING__All_log_messages_befor[4];
    local_78[5] = s_WARNING__All_log_messages_befor[5];
    local_78[6] = s_WARNING__All_log_messages_befor[6];
    local_78[7] = s_WARNING__All_log_messages_befor[7];
    acStack_70[0] = s_WARNING__All_log_messages_befor[8];
    acStack_70[1] = s_WARNING__All_log_messages_befor[9];
    acStack_70[2] = s_WARNING__All_log_messages_befor[10];
    acStack_70[3] = s_WARNING__All_log_messages_befor[0xb];
    acStack_70[4] = s_WARNING__All_log_messages_befor[0xc];
    acStack_70[5] = s_WARNING__All_log_messages_befor[0xd];
    acStack_70[6] = s_WARNING__All_log_messages_befor[0xe];
    acStack_70[7] = s_WARNING__All_log_messages_befor[0xf];
    local_58[0] = s_WARNING__All_log_messages_befor[0x20];
    local_58[1] = s_WARNING__All_log_messages_befor[0x21];
    local_58[2] = s_WARNING__All_log_messages_befor[0x22];
    local_58[3] = s_WARNING__All_log_messages_befor[0x23];
    local_58[4] = s_WARNING__All_log_messages_befor[0x24];
    local_58[5] = s_WARNING__All_log_messages_befor[0x25];
    local_58[6] = s_WARNING__All_log_messages_befor[0x26];
    local_58[7] = s_WARNING__All_log_messages_befor[0x27];
    acStack_50[0] = s_WARNING__All_log_messages_befor[0x28];
    acStack_50[1] = s_WARNING__All_log_messages_befor[0x29];
    acStack_50[2] = s_WARNING__All_log_messages_befor[0x2a];
    acStack_50[3] = s_WARNING__All_log_messages_befor[0x2b];
    acStack_50[4] = s_WARNING__All_log_messages_befor[0x2c];
    acStack_50[5] = s_WARNING__All_log_messages_befor[0x2d];
    acStack_50[6] = s_WARNING__All_log_messages_befor[0x2e];
    acStack_50[7] = s_WARNING__All_log_messages_befor[0x2f];
    local_38[0] = s_WARNING__All_log_messages_befor[0x40];
    local_38[1] = s_WARNING__All_log_messages_befor[0x41];
    local_38[2] = s_WARNING__All_log_messages_befor[0x42];
    local_38[3] = s_WARNING__All_log_messages_befor[0x43];
    local_38[4] = s_WARNING__All_log_messages_befor[0x44];
    local_38[5] = s_WARNING__All_log_messages_befor[0x45];
    local_38[6] = s_WARNING__All_log_messages_befor[0x46];
    local_38[7] = s_WARNING__All_log_messages_befor[0x47];
    acStack_30[0] = s_WARNING__All_log_messages_befor[0x48];
    acStack_30[1] = s_WARNING__All_log_messages_befor[0x49];
    acStack_30[2] = s_WARNING__All_log_messages_befor[0x4a];
    acStack_30[3] = s_WARNING__All_log_messages_befor[0x4b];
    acStack_30[4] = s_WARNING__All_log_messages_befor[0x4c];
    acStack_30[5] = s_WARNING__All_log_messages_befor[0x4d];
    acStack_30[6] = s_WARNING__All_log_messages_befor[0x4e];
    acStack_30[7] = s_WARNING__All_log_messages_befor[0x4f];
    local_68[0] = s_WARNING__All_log_messages_befor[0x10];
    local_68[1] = s_WARNING__All_log_messages_befor[0x11];
    local_68[2] = s_WARNING__All_log_messages_befor[0x12];
    local_68[3] = s_WARNING__All_log_messages_befor[0x13];
    local_68[4] = s_WARNING__All_log_messages_befor[0x14];
    local_68[5] = s_WARNING__All_log_messages_befor[0x15];
    local_68[6] = s_WARNING__All_log_messages_befor[0x16];
    local_68[7] = s_WARNING__All_log_messages_befor[0x17];
    acStack_60[0] = s_WARNING__All_log_messages_befor[0x18];
    acStack_60[1] = s_WARNING__All_log_messages_befor[0x19];
    acStack_60[2] = s_WARNING__All_log_messages_befor[0x1a];
    acStack_60[3] = s_WARNING__All_log_messages_befor[0x1b];
    acStack_60[4] = s_WARNING__All_log_messages_befor[0x1c];
    acStack_60[5] = s_WARNING__All_log_messages_befor[0x1d];
    acStack_60[6] = s_WARNING__All_log_messages_befor[0x1e];
    acStack_60[7] = s_WARNING__All_log_messages_befor[0x1f];
    local_28[0] = s_WARNING__All_log_messages_befor[0x50];
    local_28[1] = s_WARNING__All_log_messages_befor[0x51];
    local_28[2] = s_WARNING__All_log_messages_befor[0x52];
    local_28[3] = s_WARNING__All_log_messages_befor[0x53];
    local_28[4] = s_WARNING__All_log_messages_befor[0x54];
    local_28[5] = s_WARNING__All_log_messages_befor[0x55];
    local_28[6] = s_WARNING__All_log_messages_befor[0x56];
    local_28[7] = s_WARNING__All_log_messages_befor[0x57];
    local_48[0] = s_WARNING__All_log_messages_befor[0x30];
    local_48[1] = s_WARNING__All_log_messages_befor[0x31];
    local_48[2] = s_WARNING__All_log_messages_befor[0x32];
    local_48[3] = s_WARNING__All_log_messages_befor[0x33];
    local_48[4] = s_WARNING__All_log_messages_befor[0x34];
    local_48[5] = s_WARNING__All_log_messages_befor[0x35];
    local_48[6] = s_WARNING__All_log_messages_befor[0x36];
    local_48[7] = s_WARNING__All_log_messages_befor[0x37];
    acStack_40[0] = s_WARNING__All_log_messages_befor[0x38];
    acStack_40[1] = s_WARNING__All_log_messages_befor[0x39];
    acStack_40[2] = s_WARNING__All_log_messages_befor[0x3a];
    acStack_40[3] = s_WARNING__All_log_messages_befor[0x3b];
    acStack_40[4] = s_WARNING__All_log_messages_befor[0x3c];
    acStack_40[5] = s_WARNING__All_log_messages_befor[0x3d];
    acStack_40[6] = s_WARNING__All_log_messages_befor[0x3e];
    acStack_40[7] = s_WARNING__All_log_messages_befor[0x3f];
    uVar3 = 0xffffffffffffffff;
    do {
      local_88._Mysize = uVar3 + 1;
      lVar1 = uVar3 + 1;
      uVar3 = local_88._Mysize;
    } while (local_78[lVar1] != '\0');
    absl::lts_20240722::log_internal::WriteToStderr(&local_88,kWarning);
  }
  return;
}

// `vector_deleting_destructor' @ 1501d6c80

/* public: virtual void * __ptr64 __cdecl absl::lts_20240722::LogSink::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::LogSink::_vector_deleting_destructor_(LogSink *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// FUN_1501d6cb0 @ 1501d6cb0

void * FUN_1501d6cb0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,8);
  }
  return param_1;
}

// FUN_1501d6ce0 @ 1501d6ce0

void * FUN_1501d6ce0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,8);
  }
  return param_1;
}

// FUN_1501d6d10 @ 1501d6d10

void FUN_1501d6d10(Mutex *param_1,LogSink *param_2)

{
  Mutex MVar1;
  code *pcVar2;
  atomic<__int64> aVar3;
  Mutex *local_res8;
  LogSink *local_res10;
  LogSeverity local_res18 [2];
  char *local_res20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  absl::lts_20240722::Mutex::Lock(param_1);
  aVar3 = (atomic<__int64>)
          __std_find_trivial_8((void *)param_1[1].mu_,(void *)param_1[2].mu_,(ulong64)param_2);
  MVar1.mu_ = param_1[2].mu_;
  if (aVar3 == MVar1.mu_) {
    if (MVar1.mu_ == param_1[3].mu_) {
      std::
      vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      ::_Emplace_reallocate<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
                ((vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *)(param_1 + 1),(LogSink **)MVar1.mu_,&local_res10);
    }
    else {
      *(LogSink **)MVar1.mu_ = param_2;
      param_1[2].mu_ = (atomic<__int64>)((longlong)param_1[2].mu_ + 8);
    }
    absl::lts_20240722::Mutex::Unlock(param_1);
    return;
  }
  absl::lts_20240722::WriterMutexLock::~WriterMutexLock((WriterMutexLock *)&local_res8);
  local_res20 = 
  "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\log\\internal\\log_sink_set.cc"
  ;
  local_res8 = (Mutex *)CONCAT44(local_res8._4_4_,0xd7);
  local_res18[0] = kFatal;
  absl::lts_20240722::base_internal::
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  ::
  operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[38]>
            (&absl::lts_20240722::raw_log_internal::internal_log_function,local_res18,&local_res20,
             (int *)&local_res8,"Duplicate log sinks are not supported");
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AddLogSink @ 1501d6dd0

/* void __cdecl absl::lts_20240722::log_internal::AddLogSink(class absl::lts_20240722::LogSink *
   __ptr64) */

void __cdecl absl::lts_20240722::log_internal::AddLogSink(LogSink *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1501d7040();
  FUN_1501d6d10(uVar1,param_1);
  return;
}

// Flush @ 1501d6e20

/* public: virtual void __cdecl absl::lts_20240722::LogSink::Flush(void) __ptr64 */

void __thiscall absl::lts_20240722::LogSink::Flush(LogSink *this)

{
  return;
}

// FUN_1501d6e30 @ 1501d6e30

void FUN_1501d6e30(Mutex *param_1)

{
  Mutex MVar1;
  atomic<__int64> aVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9e68);
  if (*pcVar3 == '\0') {
    absl::lts_20240722::Mutex::ReaderLock(param_1);
    *pcVar3 = '\x01';
    MVar1.mu_ = param_1[2].mu_;
    for (aVar2 = param_1[1].mu_; aVar2 != MVar1.mu_; aVar2 = (atomic<__int64>)((longlong)aVar2 + 8))
    {
      (**(code **)(**(longlong **)aVar2 + 0x10))();
    }
    *pcVar3 = '\0';
    absl::lts_20240722::Mutex::ReaderUnlock(param_1);
  }
  else {
    absl::lts_20240722::Mutex::AssertReaderHeld(param_1);
    MVar1.mu_ = param_1[2].mu_;
    aVar2 = param_1[1].mu_;
    if (aVar2 != MVar1.mu_) {
      do {
        (**(code **)(**(longlong **)aVar2 + 0x10))();
        aVar2 = (atomic<__int64>)((longlong)aVar2 + 8);
      } while (aVar2 != MVar1.mu_);
      return;
    }
  }
  return;
}

// FlushLogSinks @ 1501d6ef0

/* void __cdecl absl::lts_20240722::log_internal::FlushLogSinks(void) */

void __cdecl absl::lts_20240722::log_internal::FlushLogSinks(void)

{
  Mutex MVar1;
  Mutex *this;
  atomic<__int64> aVar2;
  char *pcVar3;
  
  this = (Mutex *)FUN_1501d7040();
  pcVar3 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9e68);
  if (*pcVar3 == '\0') {
    Mutex::ReaderLock(this);
    *pcVar3 = '\x01';
    MVar1.mu_ = this[2].mu_;
    for (aVar2 = this[1].mu_; aVar2 != MVar1.mu_; aVar2 = (atomic<__int64>)((longlong)aVar2 + 8)) {
      (**(code **)(**(longlong **)aVar2 + 0x10))();
    }
    *pcVar3 = '\0';
    Mutex::ReaderUnlock(this);
  }
  else {
    Mutex::AssertReaderHeld(this);
    MVar1.mu_ = this[2].mu_;
    aVar2 = this[1].mu_;
    if (aVar2 != MVar1.mu_) {
      do {
        (**(code **)(**(longlong **)aVar2 + 0x10))();
        aVar2 = (atomic<__int64>)((longlong)aVar2 + 8);
      } while (aVar2 != MVar1.mu_);
      return;
    }
  }
  return;
}

// FUN_1501d6fc0 @ 1501d6fc0

void FUN_1501d6fc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x10))();
  }
  return;
}

// FUN_1501d7040 @ 1501d7040

undefined * FUN_1501d7040(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_155407748) {
    _Init_thread_header(&DAT_155407748);
    if (DAT_155407748 == -1) {
      FUN_1501d6d10(&DAT_155407728,&PTR_vftable_154e47260);
      FUN_1501d6d10(&DAT_155407728,&PTR_vftable_154e47268);
      _Init_thread_footer(&DAT_155407748);
      return &DAT_155407728;
    }
  }
  return &DAT_155407728;
}

// FUN_1501d7160 @ 1501d7160

void FUN_1501d7160(Mutex *param_1,longlong param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  atomic<__int64> aVar2;
  undefined8 *puVar3;
  Mutex MVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  puVar3 = (undefined8 *)*param_3;
  puVar1 = puVar3 + param_3[1];
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,param_2);
  }
  if (param_4 == '\0') {
    pcVar5 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9e68);
    if (*pcVar5 == '\0') {
      absl::lts_20240722::Mutex::ReaderLock(param_1);
      *pcVar5 = '\x01';
      MVar4.mu_ = param_1[1].mu_;
      aVar2 = MVar4.mu_ + ((longlong)param_1[2].mu_ - (longlong)MVar4.mu_ >> 3) * 8;
      for (; MVar4.mu_ != aVar2; MVar4.mu_ = MVar4.mu_ + 8) {
        (**(code **)(**(longlong **)MVar4.mu_ + 8))(*(longlong **)MVar4.mu_,param_2);
      }
      *pcVar5 = '\0';
      absl::lts_20240722::Mutex::ReaderUnlock(param_1);
    }
    else {
      local_28._Mydata = *(char **)(param_2 + 0x40);
      local_28._Mysize = *(longlong *)(param_2 + 0x48) - 1;
      absl::lts_20240722::log_internal::WriteToStderr(&local_28,*(LogSeverity *)(param_2 + 0x28));
    }
  }
  return;
}

// LogToSinks @ 1501d7260

/* void __cdecl absl::lts_20240722::log_internal::LogToSinks(class absl::lts_20240722::LogEntry
   const & __ptr64,class absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64>,bool)
    */

void __cdecl
absl::lts_20240722::log_internal::LogToSinks(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  atomic<__int64> aVar2;
  Mutex *this;
  Mutex MVar3;
  undefined8 *puVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  this = (Mutex *)FUN_1501d7040();
  puVar4 = (undefined8 *)*param_2;
  puVar1 = puVar4 + param_2[1];
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,param_1);
  }
  if (param_3 == '\0') {
    pcVar5 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9e68);
    if (*pcVar5 == '\0') {
      Mutex::ReaderLock(this);
      *pcVar5 = '\x01';
      MVar3.mu_ = this[1].mu_;
      aVar2 = MVar3.mu_ + ((longlong)this[2].mu_ - (longlong)MVar3.mu_ >> 3) * 8;
      for (; MVar3.mu_ != aVar2; MVar3.mu_ = MVar3.mu_ + 8) {
        (**(code **)(**(longlong **)MVar3.mu_ + 8))(*(longlong **)MVar3.mu_,param_1);
      }
      *pcVar5 = '\0';
      Mutex::ReaderUnlock(this);
    }
    else {
      local_28._Mydata = *(char **)(param_1 + 0x40);
      local_28._Mysize = *(longlong *)(param_1 + 0x48) - 1;
      WriteToStderr(&local_28,*(LogSeverity *)(param_1 + 0x28));
    }
  }
  return;
}

// FUN_1501d7380 @ 1501d7380

void FUN_1501d7380(Mutex *param_1,ulong64 param_2)

{
  code *pcVar1;
  atomic<__int64> _Dst;
  Mutex *local_res8;
  LogSeverity local_res18 [2];
  char *local_res20;
  
  local_res8 = param_1;
  absl::lts_20240722::Mutex::Lock(param_1);
  _Dst = (atomic<__int64>)
         __std_find_trivial_8((void *)param_1[1].mu_,(void *)param_1[2].mu_,param_2);
  if (_Dst != param_1[2].mu_) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + 8),
            (longlong)param_1[2].mu_ - ((longlong)_Dst + 8));
    param_1[2].mu_ = (atomic<__int64>)((longlong)param_1[2].mu_ + -8);
    absl::lts_20240722::Mutex::Unlock(param_1);
    return;
  }
  absl::lts_20240722::WriterMutexLock::~WriterMutexLock((WriterMutexLock *)&local_res8);
  local_res20 = 
  "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\log\\internal\\log_sink_set.cc"
  ;
  local_res8 = (Mutex *)CONCAT44(local_res8._4_4_,0xe3);
  local_res18[0] = kFatal;
  absl::lts_20240722::base_internal::
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  ::
  operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[34]>
            (&absl::lts_20240722::raw_log_internal::internal_log_function,local_res18,&local_res20,
             (int *)&local_res8,"Mismatched log sink being removed");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// RemoveLogSink @ 1501d7430

/* void __cdecl absl::lts_20240722::log_internal::RemoveLogSink(class absl::lts_20240722::LogSink *
   __ptr64) */

void __cdecl absl::lts_20240722::log_internal::RemoveLogSink(LogSink *param_1)

{
  code *pcVar1;
  Mutex *this;
  atomic<__int64> _Dst;
  Mutex *local_res8;
  LogSeverity local_res10 [2];
  char *local_res18;
  
  this = (Mutex *)FUN_1501d7040();
  local_res8 = this;
  Mutex::Lock(this);
  _Dst = (atomic<__int64>)
         __std_find_trivial_8((void *)this[1].mu_,(void *)this[2].mu_,(ulong64)param_1);
  if (_Dst != this[2].mu_) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + 8),(longlong)this[2].mu_ - ((longlong)_Dst + 8));
    this[2].mu_ = (atomic<__int64>)((longlong)this[2].mu_ + -8);
    Mutex::Unlock(this);
    return;
  }
  WriterMutexLock::~WriterMutexLock((WriterMutexLock *)&local_res8);
  local_res18 = 
  "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\log\\internal\\log_sink_set.cc"
  ;
  local_res8 = (Mutex *)CONCAT44(local_res8._4_4_,0xe3);
  local_res10[0] = kFatal;
  base_internal::
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  ::
  operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,char_const_(&___ptr64)[34]>
            (&raw_log_internal::internal_log_function,local_res10,&local_res18,(int *)&local_res8,
             "Mismatched log sink being removed");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// FUN_1501d74f0 @ 1501d74f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d74f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  LogSeverityAtLeast LVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined1 auStack_d8 [32];
  basic_string_view<char,std::char_traits<char>_> local_b8 [2];
  char *local_98;
  ulong64 uStack_90;
  basic_string_view<char,std::char_traits<char>_> local_88;
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char acStack_30 [8];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  LVar4 = absl::lts_20240722::StderrThreshold();
  if (((int)LVar4 <= *(int *)(param_2 + 0x28)) ||
     (bVar3 = absl::lts_20240722::log_internal::IsInitialized(), !bVar3)) {
    if (DAT_155407720 != 0xdd) {
      LOCK();
      bVar3 = DAT_155407720 == 0;
      if (bVar3) {
        DAT_155407720 = 0x65c2937b;
      }
      UNLOCK();
      if ((bVar3) ||
         (uVar5 = absl::lts_20240722::base_internal::SpinLockWait
                            ((atomic<unsigned_int> *)&DAT_155407720,3,
                             (SpinLockWaitTransition *)&DAT_1536f4c40,
                             SCHEDULE_COOPERATIVE_AND_KERNEL), uVar5 == 0)) {
        bVar3 = absl::lts_20240722::log_internal::IsInitialized();
        if (!bVar3) {
          local_98 = local_78;
          local_78[0] = s_WARNING__All_log_messages_befor[0];
          local_78[1] = s_WARNING__All_log_messages_befor[1];
          local_78[2] = s_WARNING__All_log_messages_befor[2];
          local_78[3] = s_WARNING__All_log_messages_befor[3];
          local_78[4] = s_WARNING__All_log_messages_befor[4];
          local_78[5] = s_WARNING__All_log_messages_befor[5];
          local_78[6] = s_WARNING__All_log_messages_befor[6];
          local_78[7] = s_WARNING__All_log_messages_befor[7];
          acStack_70[0] = s_WARNING__All_log_messages_befor[8];
          acStack_70[1] = s_WARNING__All_log_messages_befor[9];
          acStack_70[2] = s_WARNING__All_log_messages_befor[10];
          acStack_70[3] = s_WARNING__All_log_messages_befor[0xb];
          acStack_70[4] = s_WARNING__All_log_messages_befor[0xc];
          acStack_70[5] = s_WARNING__All_log_messages_befor[0xd];
          acStack_70[6] = s_WARNING__All_log_messages_befor[0xe];
          acStack_70[7] = s_WARNING__All_log_messages_befor[0xf];
          local_58[0] = s_WARNING__All_log_messages_befor[0x20];
          local_58[1] = s_WARNING__All_log_messages_befor[0x21];
          local_58[2] = s_WARNING__All_log_messages_befor[0x22];
          local_58[3] = s_WARNING__All_log_messages_befor[0x23];
          local_58[4] = s_WARNING__All_log_messages_befor[0x24];
          local_58[5] = s_WARNING__All_log_messages_befor[0x25];
          local_58[6] = s_WARNING__All_log_messages_befor[0x26];
          local_58[7] = s_WARNING__All_log_messages_befor[0x27];
          acStack_50[0] = s_WARNING__All_log_messages_befor[0x28];
          acStack_50[1] = s_WARNING__All_log_messages_befor[0x29];
          acStack_50[2] = s_WARNING__All_log_messages_befor[0x2a];
          acStack_50[3] = s_WARNING__All_log_messages_befor[0x2b];
          acStack_50[4] = s_WARNING__All_log_messages_befor[0x2c];
          acStack_50[5] = s_WARNING__All_log_messages_befor[0x2d];
          acStack_50[6] = s_WARNING__All_log_messages_befor[0x2e];
          acStack_50[7] = s_WARNING__All_log_messages_befor[0x2f];
          local_38[0] = s_WARNING__All_log_messages_befor[0x40];
          local_38[1] = s_WARNING__All_log_messages_befor[0x41];
          local_38[2] = s_WARNING__All_log_messages_befor[0x42];
          local_38[3] = s_WARNING__All_log_messages_befor[0x43];
          local_38[4] = s_WARNING__All_log_messages_befor[0x44];
          local_38[5] = s_WARNING__All_log_messages_befor[0x45];
          local_38[6] = s_WARNING__All_log_messages_befor[0x46];
          local_38[7] = s_WARNING__All_log_messages_befor[0x47];
          acStack_30[0] = s_WARNING__All_log_messages_befor[0x48];
          acStack_30[1] = s_WARNING__All_log_messages_befor[0x49];
          acStack_30[2] = s_WARNING__All_log_messages_befor[0x4a];
          acStack_30[3] = s_WARNING__All_log_messages_befor[0x4b];
          acStack_30[4] = s_WARNING__All_log_messages_befor[0x4c];
          acStack_30[5] = s_WARNING__All_log_messages_befor[0x4d];
          acStack_30[6] = s_WARNING__All_log_messages_befor[0x4e];
          acStack_30[7] = s_WARNING__All_log_messages_befor[0x4f];
          local_68[0] = s_WARNING__All_log_messages_befor[0x10];
          local_68[1] = s_WARNING__All_log_messages_befor[0x11];
          local_68[2] = s_WARNING__All_log_messages_befor[0x12];
          local_68[3] = s_WARNING__All_log_messages_befor[0x13];
          local_68[4] = s_WARNING__All_log_messages_befor[0x14];
          local_68[5] = s_WARNING__All_log_messages_befor[0x15];
          local_68[6] = s_WARNING__All_log_messages_befor[0x16];
          local_68[7] = s_WARNING__All_log_messages_befor[0x17];
          acStack_60[0] = s_WARNING__All_log_messages_befor[0x18];
          acStack_60[1] = s_WARNING__All_log_messages_befor[0x19];
          acStack_60[2] = s_WARNING__All_log_messages_befor[0x1a];
          acStack_60[3] = s_WARNING__All_log_messages_befor[0x1b];
          acStack_60[4] = s_WARNING__All_log_messages_befor[0x1c];
          acStack_60[5] = s_WARNING__All_log_messages_befor[0x1d];
          acStack_60[6] = s_WARNING__All_log_messages_befor[0x1e];
          acStack_60[7] = s_WARNING__All_log_messages_befor[0x1f];
          local_28[0] = s_WARNING__All_log_messages_befor[0x50];
          local_28[1] = s_WARNING__All_log_messages_befor[0x51];
          local_28[2] = s_WARNING__All_log_messages_befor[0x52];
          local_28[3] = s_WARNING__All_log_messages_befor[0x53];
          local_28[4] = s_WARNING__All_log_messages_befor[0x54];
          local_28[5] = s_WARNING__All_log_messages_befor[0x55];
          local_28[6] = s_WARNING__All_log_messages_befor[0x56];
          local_28[7] = s_WARNING__All_log_messages_befor[0x57];
          local_48[0] = s_WARNING__All_log_messages_befor[0x30];
          local_48[1] = s_WARNING__All_log_messages_befor[0x31];
          local_48[2] = s_WARNING__All_log_messages_befor[0x32];
          local_48[3] = s_WARNING__All_log_messages_befor[0x33];
          local_48[4] = s_WARNING__All_log_messages_befor[0x34];
          local_48[5] = s_WARNING__All_log_messages_befor[0x35];
          local_48[6] = s_WARNING__All_log_messages_befor[0x36];
          local_48[7] = s_WARNING__All_log_messages_befor[0x37];
          acStack_40[0] = s_WARNING__All_log_messages_befor[0x38];
          acStack_40[1] = s_WARNING__All_log_messages_befor[0x39];
          acStack_40[2] = s_WARNING__All_log_messages_befor[0x3a];
          acStack_40[3] = s_WARNING__All_log_messages_befor[0x3b];
          acStack_40[4] = s_WARNING__All_log_messages_befor[0x3c];
          acStack_40[5] = s_WARNING__All_log_messages_befor[0x3d];
          acStack_40[6] = s_WARNING__All_log_messages_befor[0x3e];
          acStack_40[7] = s_WARNING__All_log_messages_befor[0x3f];
          uVar6 = 0xffffffffffffffff;
          do {
            uStack_90 = uVar6 + 1;
            lVar1 = uVar6 + 1;
            uVar6 = uStack_90;
          } while (local_78[lVar1] != '\0');
          local_88._Mydata = local_98;
          local_88._Mysize = uStack_90;
          absl::lts_20240722::log_internal::WriteToStderr(&local_88,kWarning);
        }
        iVar2 = DAT_155407720;
        LOCK();
        DAT_155407720 = 0xdd;
        UNLOCK();
        if (iVar2 == 0x5a308d2) {
          AbslInternalSpinLockWake_lts_20240722(&DAT_155407720,1);
        }
      }
    }
    if (*(longlong *)(param_2 + 0x78) == 0) {
      local_b8[0]._Mydata = *(char **)(param_2 + 0x40);
      local_b8[0]._Mysize = *(longlong *)(param_2 + 0x48) - 1;
    }
    else {
      local_b8[0]._Mydata = (char *)(param_2 + 0x68);
      if (0xf < *(ulonglong *)(param_2 + 0x80)) {
        local_b8[0]._Mydata = *(char **)(param_2 + 0x68);
      }
      local_b8[0]._Mysize = *(ulong64 *)(param_2 + 0x78);
    }
    absl::lts_20240722::log_internal::WriteToStderr(local_b8,*(LogSeverity *)(param_2 + 0x28));
  }
  return;
}

// FUN_1501d76b0 @ 1501d76b0

void FUN_1501d76b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  LogSeverityAtLeast LVar2;
  
  LVar2 = absl::lts_20240722::StderrThreshold();
  if (*(int *)(param_2 + 0x28) < (int)LVar2) {
    bVar1 = absl::lts_20240722::log_internal::IsInitialized();
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001501d76d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(*(LPCSTR *)(param_2 + 0x40));
  return;
}

// FUN_1501d76f0 @ 1501d76f0

void FUN_1501d76f0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  puVar1 = puVar2 + param_2[1];
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,param_1);
  }
  return;
}

// ThreadIsLoggingToLogSink @ 1501d7760

/* bool __cdecl absl::lts_20240722::log_internal::ThreadIsLoggingToLogSink(void) */

bool __cdecl absl::lts_20240722::log_internal::ThreadIsLoggingToLogSink(void)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9e68);
}

// _Calculate_growth @ 1501d7790

/* private: unsigned __int64 __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::_Calculate_growth(unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Calculate_growth(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
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

// _Change_array @ 1501d77d0

/* private: void __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::_Change_array(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
    */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Change_array(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
              *this,LogSink **param_1,__uint64 param_2,__uint64 param_3)

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
  *(LogSink ***)this = param_1;
  *(LogSink ***)(this + 8) = param_1 + param_2;
  *(LogSink ***)(this + 0x10) = param_1 + param_3;
  return;
}

// _Compat @ 1501d7860

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >::_Compat(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > const & __ptr64)const __ptr64 */

void __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::_Compat(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
          *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_absl::lts_20240722::LogSink*___ptr64>_>_>
                *param_1)

{
  return;
}

// _Get_first @ 1501d7870

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64>
   >,1>::_Get_first(void) __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// _Get_first @ 1501d7880

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> const & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64>
   >,1>::_Get_first(void)const __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// _Getal @ 1501d7890

/* private: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   std::vector<class absl::lts_20240722::LogSink * __ptr64,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::_Getal(void) __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Getal(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
       *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// _Getal @ 1501d78a0

/* private: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> const & __ptr64
   __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::_Getal(void)const __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Getal(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
       *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// _Orphan_range @ 1501d78b0

/* private: void __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::_Orphan_range(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64)const __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Orphan_range(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
              *this,LogSink **param_1,LogSink **param_2)

{
  return;
}

// _Release @ 1501d78c0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_backout_al<class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::_Release(void) __ptr64 */

LogSink ** __thiscall
std::_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::_Release
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  *(LogSink ***)this = *(LogSink ***)(this + 8);
  return *(LogSink ***)(this + 8);
}

// _Seek_to @ 1501d78d0

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> > >::_Seek_to(class
   absl::lts_20240722::LogSink * __ptr64 const * __ptr64) __ptr64 */

void __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::_Seek_to(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
           *this,LogSink **param_1)

{
  *(LogSink ***)this = param_1;
  return;
}

// _Tidy @ 1501d78e0

/* private: void __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Tidy(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
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

// _Unchecked_begin @ 1501d7950

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::_Unchecked_begin(void) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Unchecked_begin(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 *this)

{
  return *(LogSink ***)this;
}

// _Unchecked_end @ 1501d7960

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::_Unchecked_end(void) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Unchecked_end(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
               *this)

{
  return *(LogSink ***)(this + 8);
}

// _Unwrapped @ 1501d7970

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class absl::lts_20240722::LogSink * __ptr64> >
   >::_Unwrapped(void)const __ptr64 */

LogSink ** __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
::_Unwrapped(_Vector_iterator<std::_Vector_val<std::_Simple_types<absl::lts_20240722::LogSink*___ptr64>_>_>
             *this)

{
  return *(LogSink ***)this;
}

// _Xlength @ 1501d7980

/* private: static void __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::_Xlength(void) */

void __cdecl
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// begin @ 1501d79a0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64>::begin(void)const __ptr64
    */

LogSink ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::LogSink*___ptr64>::begin
          (Span<absl::lts_20240722::LogSink*___ptr64> *this)

{
  return *(LogSink ***)this;
}

// begin @ 1501d79b0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > __cdecl std::vector<class absl::lts_20240722::LogSink
   * __ptr64,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::begin(void)
   __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
begin(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// capacity @ 1501d79c0

/* public: unsigned __int64 __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
capacity(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
         *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 3;
}

// data @ 1501d79e0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64>::data(void)const __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::LogSink*___ptr64>::data
          (Span<absl::lts_20240722::LogSink*___ptr64> *this)

{
  return *(LogSink ***)this;
}

// data @ 1501d79f0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::vector<class
   absl::lts_20240722::LogSink * __ptr64,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::data(void) __ptr64 */

LogSink ** __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
data(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
     *this)

{
  return *(LogSink ***)this;
}

// end @ 1501d7a00

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64>::end(void)const __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::LogSink*___ptr64>::end
          (Span<absl::lts_20240722::LogSink*___ptr64> *this)

{
  return (LogSink **)(*(longlong *)this + *(longlong *)(this + 8) * 8);
}

// end @ 1501d7a20

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > __cdecl std::vector<class absl::lts_20240722::LogSink
   * __ptr64,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::end(void) __ptr64
    */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
end(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
    *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// erase @ 1501d7a40

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > > __cdecl std::vector<class absl::lts_20240722::LogSink
   * __ptr64,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::erase(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   absl::lts_20240722::LogSink * __ptr64> > >) __ptr64 */

undefined8 * __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
erase(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      *this,undefined8 *param_2,void *param_3)

{
  memmove(param_3,(void *)((longlong)param_3 + 8),*(longlong *)(this + 8) - ((longlong)param_3 + 8))
  ;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + -8;
  *param_2 = param_3;
  return param_2;
}

// max_size @ 1501d7af0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::max_size(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::max_size
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 1501d7b10

/* public: unsigned __int64 __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
max_size(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
         *this)

{
  return 0x1fffffffffffffff;
}

// push_back @ 1501d7b30

/* public: void __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::push_back(class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
push_back(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          *this,LogSink **param_1)

{
  LogSink **ppLVar1;
  
  ppLVar1 = *(LogSink ***)(this + 8);
  if (ppLVar1 != *(LogSink ***)(this + 0x10)) {
    *ppLVar1 = *param_1;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    return;
  }
  _Emplace_reallocate<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>(this,ppLVar1,param_1);
  return;
}

// size @ 1501d7b60

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<class absl::lts_20240722::LogSink *
   __ptr64>::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<absl::lts_20240722::LogSink*___ptr64>::size
          (Span<absl::lts_20240722::LogSink*___ptr64> *this)

{
  return *(__uint64 *)(this + 8);
}

// size @ 1501d7b70

/* public: unsigned __int64 __cdecl std::vector<class absl::lts_20240722::LogSink * __ptr64,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
size(vector<absl::lts_20240722::LogSink*___ptr64,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
     *this)

{
  return *(longlong *)(this + 8) - *(longlong *)this >> 3;
}

// stacktrace @ 1501d7b90

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::LogEntry::stacktrace(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::LogEntry::stacktrace
          (LogEntry *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = &this->stacktrace_;
  if (0xf < (this->stacktrace_)._Mypair._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar1->_Mypair)._Myval2._Bx._Ptr;
  }
  __return_storage_ptr__->_Mysize = (this->stacktrace_)._Mypair._Myval2._Mysize;
  __return_storage_ptr__->_Mydata = (char *)pbVar1;
  return __return_storage_ptr__;
}

// text_message_with_prefix_and_newline @ 1501d7bc0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::LogEntry::text_message_with_prefix_and_newline(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::LogEntry::text_message_with_prefix_and_newline
          (LogEntry *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  __return_storage_ptr__->_Mydata = (this->text_message_with_prefix_and_newline_and_nul_).ptr_;
  __return_storage_ptr__->_Mysize = (this->text_message_with_prefix_and_newline_and_nul_).len_ - 1;
  return __return_storage_ptr__;
}

// text_message_with_prefix_and_newline_c_str @ 1501d7be0

/* public: char const * __ptr64 __cdecl
   absl::lts_20240722::LogEntry::text_message_with_prefix_and_newline_c_str(void)const __ptr64 */

char * __thiscall
absl::lts_20240722::LogEntry::text_message_with_prefix_and_newline_c_str(LogEntry *this)

{
  return (this->text_message_with_prefix_and_newline_and_nul_).ptr_;
}

// FUN_150330330 @ 150330330

void FUN_150330330(undefined8 param_1,longlong param_2)

{
  std::allocator<absl::lts_20240722::LogSink*___ptr64>::deallocate
            (*(allocator<absl::lts_20240722::LogSink*___ptr64> **)(param_2 + 0x60),
             *(LogSink ***)(param_2 + 0x78),*(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

