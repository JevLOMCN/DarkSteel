// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 13

// operator<<<205> @ 14fbae490

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<205>(char const (& __ptr64)[205])
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<205>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// ~Closure @ 14fbae4e0

/* public: virtual __cdecl google::protobuf::Closure::~Closure(void) __ptr64 */

void __thiscall google::protobuf::Closure::~Closure(Closure *this)

{
  *(undefined ***)this = vftable;
  return;
}

// ~FunctionClosure0 @ 14fbae500

/* public: virtual __cdecl google::protobuf::internal::FunctionClosure0::~FunctionClosure0(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::FunctionClosure0::~FunctionClosure0(FunctionClosure0 *this)

{
  *(undefined ***)this = Closure::vftable;
  return;
}

// `scalar_deleting_destructor' @ 14fbae520

/* public: virtual void * __ptr64 __cdecl google::protobuf::Closure::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Closure::_scalar_deleting_destructor_(Closure *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DoNothing @ 14fbae560

/* void __cdecl google::protobuf::DoNothing(void) */

void __cdecl google::protobuf::DoNothing(void)

{
  return;
}

// ProtocVersionString @ 14fbae570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::internal::ProtocVersionString(int) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::internal::ProtocVersionString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  ulong64 uVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a0;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  ulong64 uVar3;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = param_1 % 1000;
  local_a0 = __return_storage_ptr__;
  _snprintf(local_98,0x80,"%d.%d",(ulonglong)(uint)((param_1 / 1000) % 1000));
  local_19 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar2 = uVar3 + 1;
    lVar1 = uVar3 + 1;
    uVar3 = uVar2;
  } while (local_98[lVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,local_98,uVar2);
  return __return_storage_ptr__;
}

// VerifyVersion @ 14fbae660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl google::protobuf::internal::VerifyVersion(int,char const * __ptr64) */

void __cdecl google::protobuf::internal::VerifyVersion(int param_1,char *param_2)

{
  void *pvVar1;
  LogMessage *pLVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> local_138;
  undefined4 local_128;
  LogMessageFatal local_120;
  OstreamView local_108;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  _Bxty local_48;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  if (param_1 == 0x5c02b0) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_128 = 0;
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_120,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\stubs\\common.cc"
                      ,0x30);
  local_128 = 1;
  local_138._Mydata = "This program was compiled with Protobuf C++ version ";
  local_138._Mysize = 0x34;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_138);
  pbVar3 = VersionString((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_48,param_1);
  local_128 = 3;
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,pbVar3);
  local_138._Mydata = ", but the linked version is ";
  local_138._Mysize = 0x1c;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_138);
  pbVar3 = VersionString((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_68,0x5c02b0);
  local_128 = 7;
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,pbVar3);
  local_138._Mydata =
       ".  Please update your library.  If you compiled the program yourself, make sure thatyour headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
  ;
  local_138._Mysize = 0xcc;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_138);
  absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
            (&local_108,(pLVar2->data_)._Mypair._Myval2);
  pbVar4 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_108);
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
  }
  std::operator<<<std::char_traits<char>_>(pbVar4,param_2);
  absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_108);
  local_138._Mydata = "\".)";
  local_138._Mysize = 3;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_138);
  if (0xf < uStack_50) {
    uVar6 = uStack_50 + 1;
    pvVar1 = (void *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
    pvVar5 = pvVar1;
    if (0xfff < uVar6) {
      uVar6 = uStack_50 + 0x28;
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar6);
  }
  local_58 = ___xmm_000000000000000f0000000000000000;
  uStack_50 = _UNK_15076add8;
  local_68._Buf[0] = '\0';
  if (0xf < uStack_30) {
    uVar6 = uStack_30 + 1;
    pvVar1 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    pvVar5 = pvVar1;
    if (0xfff < uVar6) {
      uVar6 = uStack_30 + 0x28;
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar6);
  }
  local_38 = ___xmm_000000000000000f0000000000000000;
  uStack_30 = _UNK_15076add8;
  local_48._Buf[0] = '\0';
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_120);
}

// VersionString @ 14fbae8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::internal::VersionString(int) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::internal::VersionString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  ulong64 uVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a0;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  ulong64 uVar3;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = param_1 % 1000;
  local_b8 = (param_1 / 1000) % 1000;
  local_a0 = __return_storage_ptr__;
  _snprintf(local_98,0x80,"%d.%d.%d",(ulonglong)(uint)(param_1 / 1000000));
  local_19 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar2 = uVar3 + 1;
    lVar1 = uVar3 + 1;
    uVar3 = uVar2;
  } while (local_98[lVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,local_98,uVar2);
  return __return_storage_ptr__;
}

// ghtonl @ 14fbae9d0

/* unsigned int __cdecl google::protobuf::ghtonl(unsigned int) */

uint __cdecl google::protobuf::ghtonl(uint param_1)

{
  return ((param_1 >> 8 & 0xff | (param_1 & 0xff) << 8) << 8 | param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}

// _snprintf @ 14fbaea00

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  ulong64 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_Dest,_Count,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// FUN_1502aefd0 @ 1502aefd0

void FUN_1502aefd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x38));
  }
  return;
}

// FUN_1502af000 @ 1502af000

void FUN_1502af000(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x110))
    ;
  }
  return;
}

// FUN_1502af030 @ 1502af030

void FUN_1502af030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xf0));
  }
  return;
}

