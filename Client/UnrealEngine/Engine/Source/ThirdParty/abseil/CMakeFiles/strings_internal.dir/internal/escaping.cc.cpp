// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 7

// Base64EscapeInternal @ 14f8fe0f0

/* unsigned __int64 __cdecl absl::lts_20240722::strings_internal::Base64EscapeInternal(unsigned char
   const * __ptr64,unsigned __int64,char * __ptr64,unsigned __int64,char const * __ptr64,bool) */

__uint64 __cdecl
absl::lts_20240722::strings_internal::Base64EscapeInternal
          (uchar *param_1,__uint64 param_2,char *param_3,__uint64 param_4,char *param_5,bool param_6
          )

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uchar *puVar8;
  uint *puVar9;
  
  if (param_2 * 4 < param_4 * 3 || param_2 * 4 + param_4 * -3 == 0) {
    pcVar4 = param_3;
    puVar9 = (uint *)param_1;
    if (2 < param_2) {
      for (; puVar9 < param_1 + (param_2 - 3); puVar9 = (uint *)((longlong)puVar9 + 3)) {
        uVar6 = *puVar9;
        uVar2 = (uVar6 & 0xff0000) >> 8;
        uVar3 = (uVar6 & 0xff00) << 8;
        *pcVar4 = param_5[(uVar6 & 0xff) >> 2];
        pcVar4[1] = param_5[(uVar3 | (uVar6 & 3) << 0x18) >> 0x14];
        pcVar4[2] = param_5[(uVar2 | uVar3 & 0xfff00) >> 0xe];
        pcVar4[3] = param_5[(uVar2 & 0x3f00) >> 8];
        pcVar4 = pcVar4 + 4;
      }
    }
    pcVar7 = param_3 + (param_4 - (longlong)pcVar4);
    puVar8 = param_1 + (param_2 - (longlong)puVar9);
    pcVar5 = pcVar4;
    if (puVar8 == (uchar *)0x0) {
LAB_14f8fe2fe:
      return (longlong)pcVar5 - (longlong)param_3;
    }
    if (puVar8 == (uchar *)0x1) {
      if ((char *)0x1 < pcVar7) {
        uVar6 = *puVar9;
        *pcVar4 = param_5[(byte)((byte)uVar6 >> 2)];
        pcVar4[1] = param_5[((byte)uVar6 & 3) << 4];
        pcVar5 = pcVar4 + 2;
        if (param_6) {
          if (pcVar7 + -2 < (char *)0x2) {
            return 0;
          }
          pcVar5[0] = '=';
          pcVar5[1] = '=';
          pcVar5 = pcVar4 + 4;
        }
        goto LAB_14f8fe2fe;
      }
    }
    else if (puVar8 == (uchar *)0x2) {
      if ((char *)0x2 < pcVar7) {
        uVar1 = (ushort)*puVar9;
        uVar6 = (uint)(ushort)(uVar1 >> 8 | uVar1 << 8);
        *pcVar4 = param_5[(uVar1 & 0xff) >> 2];
        pcVar4[1] = param_5[(uVar6 & 0x3ff) >> 4];
        pcVar4[2] = param_5[(uVar6 & 0xf) << 2];
        pcVar5 = pcVar4 + 3;
        if (!param_6) goto LAB_14f8fe2fe;
        if (pcVar7 != (char *)0x3) {
          *pcVar5 = '=';
          return (__uint64)(pcVar4 + (4 - (longlong)param_3));
        }
      }
    }
    else {
      if (puVar8 != (uchar *)0x3) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog(kFatal,"escaping.cc",0xc9,"Logic problem? szsrc = %zu",puVar8);
      }
      if ((char *)0x3 < pcVar7) {
        uVar6 = (uint)(ushort)(*(ushort *)((longlong)puVar9 + 1) >> 8 |
                              *(ushort *)((longlong)puVar9 + 1) << 8) +
                (uint)(byte)*puVar9 * 0x10000;
        *pcVar4 = param_5[uVar6 >> 0x12];
        pcVar4[1] = param_5[(uVar6 & 0x3ffff) >> 0xc];
        pcVar4[2] = param_5[(uVar6 & 0xfff) >> 6];
        pcVar4[3] = param_5[uVar6 & 0x3f];
        return (__uint64)(pcVar4 + (4 - (longlong)param_3));
      }
    }
  }
  return 0;
}

// CalculateBase64EscapedLenInternal @ 14f8fe320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CalculateBase64EscapedLenInternal(unsigned __int64,bool) */

__uint64 __cdecl
absl::lts_20240722::strings_internal::CalculateBase64EscapedLenInternal
          (__uint64 param_1,bool param_2)

{
  __uint64 _Var1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  __uint64 _Var3;
  int *piVar4;
  undefined1 auStackY_98 [32];
  int local_68 [2];
  char *local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  piVar4 = (int *)(ulonglong)param_2;
  if (0xbffffffffffffffd < param_1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_58,"Check input_len <= kMaxSize failed: ");
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>
                       (&local_38,"CalculateBase64EscapedLenInternal() overflow");
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_58,pbVar2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
    local_60 = 
    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\internal\\escaping.cc"
    ;
    local_68[0] = 0x2b;
    local_68[1] = 3;
    piVar4 = local_68;
    param_1 = (__uint64)&local_60;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_68 + 1),
               (char **)param_1,piVar4,&local_58);
  }
  _Var1 = (param_1 / 3) * 4;
  _Var3 = _Var1;
  if ((char **)param_1 != (char **)((param_1 / 3) * 3)) {
    if (param_1 % 3 == 1) {
      _Var3 = _Var1 + (longlong)piVar4 * 2 + 2;
    }
    else {
      _Var3 = _Var1 + 3;
      if ((char)piVar4 != '\0') {
        _Var3 = _Var1 + 4;
      }
    }
  }
  return _Var3;
}

// Load16 @ 14f8fe430

/* unsigned short __cdecl absl::lts_20240722::big_endian::Load16(void const * __ptr64) */

ushort __cdecl absl::lts_20240722::big_endian::Load16(void *param_1)

{
  return *(ushort *)param_1 >> 8 | *(ushort *)param_1 << 8;
}

// Load32 @ 14f8fe440

/* unsigned int __cdecl absl::lts_20240722::big_endian::Load32(void const * __ptr64) */

uint __cdecl absl::lts_20240722::big_endian::Load32(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

// ToHost16 @ 14f8fe450

/* unsigned short __cdecl absl::lts_20240722::big_endian::ToHost16(unsigned short) */

ushort __cdecl absl::lts_20240722::big_endian::ToHost16(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}

// ToHost32 @ 14f8fe460

/* unsigned int __cdecl absl::lts_20240722::big_endian::ToHost32(unsigned int) */

uint __cdecl absl::lts_20240722::big_endian::ToHost32(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

// gbswap_16 @ 14f8fe470

/* unsigned short __cdecl absl::lts_20240722::gbswap_16(unsigned short) */

ushort __cdecl absl::lts_20240722::gbswap_16(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}

