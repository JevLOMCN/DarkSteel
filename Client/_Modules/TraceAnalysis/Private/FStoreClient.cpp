// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 19

// operator_delete @ 14d393710

void __cdecl UE::Trace::FStoreClient::operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)((longlong)param_1 + 8));
    if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
    }
    if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)((longlong)param_1 + 8));
    ::operator_delete(param_1,0xd0);
  }
  return;
}

// Connect @ 14d3996a0

FStoreClient * __cdecl UE::Trace::FStoreClient::Connect(wchar_t *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FStoreCborClient *pFVar3;
  FStoreCborClient *this;
  win_mutex *this_00;
  FStoreCborClient *pFVar4;
  HANDLE pvVar5;
  error_code local_18;
  
  this = (FStoreCborClient *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    this_00 = ::operator_new(0x38);
    if (this_00 == (win_mutex *)0x0) {
      IoContext._padding_ = 0;
    }
    else {
      local_18._Myval = asio::detail::win_mutex::do_init(this_00);
      local_18._Mycat = asio::error::get_system_category();
      asio::detail::throw_error(&local_18,"mutex");
      this_00[1].crit_section_.DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)&IoContext;
      this_00[1].crit_section_.LockCount = 0;
      this_00[1].crit_section_.RecursionCount = 0;
      IoContext._padding_ = (longlong)this_00;
    }
    asio::detail::winsock_init<2,2>::winsock_init<2,2>(&IoContext.init_,true);
    pFVar4 = ::operator_new(0xb0);
    pFVar3 = this;
    if (pFVar4 != (FStoreCborClient *)0x0) {
      *(undefined8 *)&pFVar4->Socket = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x8 = 0;
      *(io_context **)&(pFVar4->Socket).field_0x10 = &IoContext;
      *(undefined8 *)&(pFVar4->Socket).field_0x18 = 0;
      pFVar4->IoContext = (io_context *)&___7win_iocp_io_context_detail_asio__6B_;
      *(undefined8 *)&(pFVar4->Socket).field_0x20 = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x28 = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x30 = 0;
      *(undefined4 *)&(pFVar4->Socket).field_0x38 = 0xffffffff;
      *(undefined8 *)&(pFVar4->Socket).field_0x40 = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x48 = 0;
      *(undefined4 *)&(pFVar4->Socket).field_0x50 = 0;
      local_18._Myval = asio::detail::win_mutex::do_init((win_mutex *)&(pFVar4->Socket).field_0x58);
      local_18._Mycat = asio::error::get_system_category();
      asio::detail::throw_error(&local_18,"mutex");
      *(undefined8 *)&(pFVar4->Socket).field_0x80 = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x88 = 0;
      *(undefined8 *)&(pFVar4->Socket).field_0x90 = 0;
      *(undefined4 *)&(pFVar4->Socket).field_0x98 = 0xffffffff;
      (pFVar4->Response).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar5 = CreateIoCompletionPort((HANDLE)0xffffffffffffffff,(HANDLE)0x0,0,0xffffffff);
      *(HANDLE *)&(pFVar4->Socket).field_0x20 = pvVar5;
      pFVar3 = pFVar4;
      if (pvVar5 == (HANDLE)0x0) {
        local_18._Myval = GetLastError();
        local_18._Mycat = asio::error::get_system_category();
        asio::detail::throw_error(&local_18,"iocp");
      }
    }
    IoContext.impl_ = asio::io_context::add_impl(&IoContext,(win_iocp_io_context *)pFVar3);
    atexit(`UE::Trace::FStoreClient::Connect'::__l2::_dynamic_atexit_destructor_for__IoContext__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = ::operator_new(0xd0);
  if (pFVar3 != (FStoreCborClient *)0x0) {
    pFVar3->IoContext = &IoContext;
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)&pFVar3->Socket,0,0,&IoContext);
    (pFVar3->Response).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Response).Buffer.ArrayNum = 0;
    (pFVar3->Response).Buffer.ArrayMax = 0;
    (pFVar3->Host).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Host).Data.ArrayNum = 0;
    (pFVar3->Host).Data.ArrayMax = 0;
    this = pFVar3;
  }
  bVar2 = FStoreCborClient::Connect(this,param_1,(ushort)param_2);
  if (!bVar2) {
    if (this != (FStoreCborClient *)0x0) {
      asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
                ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)&this->Socket);
      pFVar1 = (this->Host).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->Response).Buffer.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      asio::detail::
      io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
      ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                  *)&this->Socket);
      ::operator_delete(this,0xd0);
    }
    this = (FStoreCborClient *)0x0;
  }
  return (FStoreClient *)this;
}

// GetSessionCount @ 14d39d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

uint __thiscall UE::Trace::FStoreClient::GetSessionCount(FStoreClient *this)

{
  bool bVar1;
  uint uVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/session/count",0x10);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  if (bVar1) {
    uVar2 = FResponse::
            GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                      ((FResponse *)(this + 0xa8),"count",0,(<lambda_1> *)&local_178);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// GetSessionInfo @ 14d39d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FSessionInfo * __thiscall UE::Trace::FStoreClient::GetSessionInfo(FStoreClient *this,uint param_1)

{
  bool bVar1;
  FSessionInfo *pFVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"index",5);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar2 = (FSessionInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FSessionInfo *)0x0;
  }
  return pFVar2;
}

// GetSessionInfoByGuid @ 14d39d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FSessionInfo * __thiscall
UE::Trace::FStoreClient::GetSessionInfoByGuid(FStoreClient *this,FGuid *param_1)

{
  char *_Str;
  bool bVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  size_t sVar3;
  FSessionInfo *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_248 [32];
  FPayload local_228;
  TInlineMemoryWriter<128> local_218;
  FCborWriter local_f0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_218);
  FCborWriter::FCborWriter(&local_f0,(FArchive *)&local_218,BigEndian);
  FCborWriter::WriteContainerStart(&local_f0,Map,-1);
  FCborWriter::WriteValue(&local_f0,"$request",8);
  FCborWriter::WriteValue(&local_f0,"GET",3);
  FCborWriter::WriteValue(&local_f0,"$path",5);
  FCborWriter::WriteValue(&local_f0,"v1/session/info",0xf);
  local_228.Data = (uchar *)0x0;
  local_228.Size = 0;
  local_228._12_4_ = 0;
  FGuid::AppendString(param_1,(FString *)&local_228,Digits);
  pwVar5 = L"";
  if (local_228.Size != 0) {
    pwVar5 = (wchar_t *)local_228.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar5);
  _Str = pTVar2->Ptr;
  sVar3 = strlen(_Str);
  FCborWriter::WriteValue(&local_f0,"trace_guid",10);
  FCborWriter::WriteValue(&local_f0,_Str,(longlong)(int)sVar3);
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if ((wchar_t *)local_228.Data != (wchar_t *)0x0) {
    FMemory::Free(local_228.Data);
  }
  FCborWriter::WriteContainerEnd(&local_f0);
  local_228.Data = (uchar *)&local_218.Buffer;
  if (local_218.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_228.Data = (uchar *)local_218.Buffer.AllocatorInstance.SecondaryData;
  }
  local_228.Size = local_218.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_228);
  FCborWriter::~FCborWriter(&local_f0);
  if (local_218.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_218.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_218);
  pFVar4 = (FSessionInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar4 = (FSessionInfo *)0x0;
  }
  return pFVar4;
}

// GetSessionInfoById @ 14d39dd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FSessionInfo * __thiscall
UE::Trace::FStoreClient::GetSessionInfoById(FStoreClient *this,uint param_1)

{
  bool bVar1;
  FSessionInfo *pFVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"id",2);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar2 = (FSessionInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FSessionInfo *)0x0;
  }
  return pFVar2;
}

// GetSessionInfoByTraceId @ 14d39e210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FSessionInfo * __thiscall
UE::Trace::FStoreClient::GetSessionInfoByTraceId(FStoreClient *this,uint param_1)

{
  bool bVar1;
  FSessionInfo *pFVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"trace_id",8);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar2 = (FSessionInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FSessionInfo *)0x0;
  }
  return pFVar2;
}

// GetStatus @ 14d39e640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FStatus * __thiscall UE::Trace::FStoreClient::GetStatus(FStoreClient *this)

{
  bool bVar1;
  FStatus *pFVar2;
  undefined1 auStack_138 [32];
  FPayload local_118;
  TInlineMemoryWriter<32> local_108;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&local_108);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_108,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/status",9);
  FCborWriter::WriteContainerEnd(&local_40);
  local_118.Data = (uchar *)&local_108.Buffer;
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_118.Data = (uchar *)local_108.Buffer.AllocatorInstance.SecondaryData;
  }
  local_118.Size = local_108.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  pFVar2 = (FStatus *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FStatus *)0x0;
  }
  return pFVar2;
}

// GetStoreAddress @ 14d39e840

uint __thiscall UE::Trace::FStoreClient::GetStoreAddress(FStoreClient *this)

{
  u_long uVar1;
  error_code local_38;
  data_union local_28;
  
  if (((implementation_type *)(this + 0x10))->_padding_ != -1) {
    local_38._Mycat =
         (error_category *)
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    local_38._Myval = 0;
    asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
              (*(win_iocp_socket_service<asio::ip::tcp> **)(this + 8),
               (basic_endpoint<asio::ip::tcp> *)&local_28.base,(implementation_type *)(this + 0x10),
               &local_38);
    asio::detail::throw_error(&local_38,"remote_endpoint");
    if (local_28.base.sa_family == 2) {
      uVar1 = ntohl(local_28.v6.sin6_flowinfo);
      uVar1 = htonl(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00014d39e8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = ntohl(uVar1);
      return uVar1;
    }
  }
  return 0;
}

// GetStorePort @ 14d39ede0

uint __thiscall UE::Trace::FStoreClient::GetStorePort(FStoreClient *this)

{
  u_short uVar1;
  error_code local_38;
  basic_endpoint<asio::ip::tcp> local_28;
  
  if (*(longlong *)(this + 0x10) == -1) {
    return 0;
  }
  local_38._Mycat =
       (error_category *)
       &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
        ::__l2::_Static;
  local_38._Myval = 0;
  asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
            (*(win_iocp_socket_service<asio::ip::tcp> **)(this + 8),&local_28,
             (implementation_type *)(this + 0x10),&local_38);
  asio::detail::throw_error(&local_38,"remote_endpoint");
  uVar1 = ntohs(local_28.impl_.data_.v4.sin_port);
  return (uint)uVar1;
}

// GetTraceCount @ 14d39f7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

uint __thiscall UE::Trace::FStoreClient::GetTraceCount(FStoreClient *this)

{
  bool bVar1;
  uint uVar2;
  undefined1 auStack_138 [32];
  FPayload local_118;
  TInlineMemoryWriter<32> local_108;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&local_108);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_108,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/trace/count",0xe);
  FCborWriter::WriteContainerEnd(&local_40);
  local_118.Data = (uchar *)&local_108.Buffer;
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_118.Data = (uchar *)local_108.Buffer.AllocatorInstance.SecondaryData;
  }
  local_118.Size = local_108.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  if (bVar1) {
    uVar2 = FResponse::
            GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                      ((FResponse *)(this + 0xa8),"count",0,(<lambda_1> *)&local_118);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// GetTraceInfo @ 14d39fad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FTraceInfo * __thiscall UE::Trace::FStoreClient::GetTraceInfo(FStoreClient *this,uint param_1)

{
  bool bVar1;
  FTraceInfo *pFVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/trace/info",0xd);
  FCborWriter::WriteValue(&local_40,"index",5);
  FCborWriter::WriteValue(&local_40,(ulonglong)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar2 = (FTraceInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FTraceInfo *)0x0;
  }
  return pFVar2;
}

// GetTraceInfoById @ 14d39fdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FTraceInfo * __thiscall UE::Trace::FStoreClient::GetTraceInfoById(FStoreClient *this,uint param_1)

{
  bool bVar1;
  FTraceInfo *pFVar2;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/trace/info",0xd);
  FCborWriter::WriteValue(&local_40,"id",2);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  pFVar2 = (FTraceInfo *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FTraceInfo *)0x0;
  }
  return pFVar2;
}

// GetVersion @ 14d3a02f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FVersion * __thiscall UE::Trace::FStoreClient::GetVersion(FStoreClient *this)

{
  bool bVar1;
  FVersion *pFVar2;
  undefined1 auStack_138 [32];
  FPayload local_118;
  TInlineMemoryWriter<32> local_108;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&local_108);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_108,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/version",10);
  FCborWriter::WriteContainerEnd(&local_40);
  local_118.Data = (uchar *)&local_108.Buffer;
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_118.Data = (uchar *)local_108.Buffer.AllocatorInstance.SecondaryData;
  }
  local_118.Size = local_108.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  pFVar2 = (FVersion *)(this + 0xa8);
  if (!bVar1) {
    pFVar2 = (FVersion *)0x0;
  }
  return pFVar2;
}

// IsValid @ 14d3a0810

bool __thiscall UE::Trace::FStoreClient::IsValid(FStoreClient *this)

{
  return *(longlong *)(this + 0x10) != -1;
}

// ReadTrace @ 14d3a65c0

FTraceData __thiscall UE::Trace::FStoreClient::ReadTrace(FStoreClient *this,uint param_1)

{
  FTraceDataStream *pFVar1;
  undefined4 in_register_00000014;
  FTraceData FVar2;
  uint in_R8D;
  
  FVar2._4_4_ = in_register_00000014;
  FVar2._0_4_ = param_1;
  pFVar1 = FStoreCborClient::ReadTrace((FStoreCborClient *)this,in_R8D);
  *(FTraceDataStream **)FVar2 = pFVar1;
  return FVar2;
}

// Reconnect @ 14d3a65f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Trace::FStoreClient::Reconnect(FStoreClient *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  _Addr_storage *p_Var4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  DWORD DVar9;
  size_t sVar10;
  HANDLE FileHandle;
  HANDLE pvVar11;
  basic_resolver_iterator<asio::ip::tcp> *pbVar12;
  uint uVar13;
  short sVar14;
  bool bVar15;
  undefined1 auStackY_218 [32];
  noop_deleter nStack_1e8;
  undefined1 auStack_1d8 [16];
  ulong64 uStack_1c8;
  undefined8 auStack_1b8 [2];
  basic_string_view<char,std::char_traits<char>_> bStack_1a8;
  char *pcStack_198;
  error_category *peStack_190;
  undefined1 auStack_180 [20];
  undefined8 uStack_16c;
  undefined8 uStack_164;
  basic_resolver_iterator<asio::ip::tcp> bStack_158;
  FScriptContainerElement aFStack_138 [128];
  ForAnyElementType FStack_b8;
  FScriptContainerElement *pFStack_b0;
  int iStack_a8;
  io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor> iStack_98;
  char acStack_48 [8];
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_218;
  sVar14 = 0x7c5;
  if ((short)param_2 != 0) {
    sVar14 = (short)param_2;
  }
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    pFStack_b0 = (FScriptContainerElement *)0x0;
    iStack_a8 = 0;
  }
  else {
    sVar10 = wcslen(param_1);
    iStack_a8 = Core::Private::GetConvertedLength((uchar *)0x0,param_1,(int)sVar10);
    uVar1 = iStack_a8 + 1;
    uVar13 = uVar1;
    if (uVar1 < 0x81) {
      if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14d399358;
      }
    }
    else {
LAB_14d399358:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,uVar13,1);
    }
    pFStack_b0 = aFStack_138;
    if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
      pFStack_b0 = FStack_b8.Data;
    }
    Core::Private::Convert((uchar *)pFStack_b0,uVar1,param_1,(int)sVar10 + 1);
  }
  TCString<char>::SprintfImpl(acStack_48,"%d");
  asio::detail::io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>
  ::
  io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            (&iStack_98,0,0,*(io_context **)this);
  sVar10 = strlen(acStack_48);
  pFVar8 = pFStack_b0;
  auStack_1d8._8_8_ = strlen((char *)pFStack_b0);
  bStack_1a8._Mydata = acStack_48;
  auStack_1b8[0] = CONCAT44(auStack_1b8[0]._4_4_,2);
  auStack_1d8._0_8_ = pFVar8;
  bStack_1a8._Mysize = sVar10;
  asio::ip::basic_resolver<asio::ip::tcp,asio::any_io_executor>::resolve
            ((basic_resolver<asio::ip::tcp,asio::any_io_executor> *)&iStack_98,
             (basic_resolver_results<asio::ip::tcp> *)&pcStack_198,(tcp *)auStack_1b8,
             (basic_string_view<char,std::char_traits<char>_> *)auStack_1d8,&bStack_1a8,0);
  bStack_1a8._Mysize =
       (ulong64)&`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                 ::__l2::_Static;
  bStack_1a8._Mydata = (char *)((ulonglong)bStack_1a8._Mydata & 0xffffffff00000000);
  FileHandle = (HANDLE)WSASocketW(2,1,6,0);
  uStack_16c = 0;
  auStack_1b8[0] = 0;
  uStack_164 = 0;
  auStack_180._12_8_ = 2;
  if (*(longlong *)(this + 0x10) == -1) {
    pvVar11 = CreateIoCompletionPort
                        (FileHandle,
                         *(HANDLE *)(*(longlong *)(*(longlong *)(this + 8) + 0x30) + 0x28),0,0);
    if (pvVar11 == (HANDLE)0x0) {
      DVar9 = GetLastError();
      auStack_1d8._0_4_ = DVar9;
      auStack_1d8._8_8_ = asio::error::get_system_category();
      if (DVar9 != 0) goto LAB_14d399548;
    }
    *(HANDLE *)(this + 0x10) = FileHandle;
    this[0x18] = (FStoreClient)0x10;
    std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
              ((shared_ptr<void> *)(this + 0x20),(void *)0x0,nStack_1e8);
    *(undefined4 *)(this + 0x48) = 2;
    this[0x4c] = (FStoreClient)0x0;
    auStack_1d8._0_8_ = auStack_1d8._0_8_ & 0xffffffff00000000;
    auStack_1d8._8_8_ =
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    *(undefined8 *)(this + 0x50) = auStack_180._12_8_;
    *(undefined8 *)(this + 0x58) = uStack_16c;
    *(undefined8 *)(this + 0x60) = uStack_164;
    *(int *)(this + 0x68) = (int)auStack_1b8[0];
  }
  else {
    auStack_1d8._0_4_ = 1;
    auStack_1d8._8_8_ = asio::error::get_misc_category();
  }
LAB_14d399548:
  asio::detail::throw_error((error_code *)auStack_1d8,"assign");
  bStack_158.index_ = 0;
  bStack_158.values_._0_8_ = 0;
  bStack_158.values_._8_8_ = 0;
  if (peStack_190 != (error_category *)0x0) {
    LOCK();
    *(int *)&peStack_190->_Addr = *(int *)&peStack_190->_Addr + 1;
    UNLOCK();
  }
  auStack_1d8._0_8_ = pcStack_198;
  auStack_1d8._8_8_ = peStack_190;
  uStack_1c8 = 0;
  pbVar12 = asio::
            connect<asio::ip::tcp,asio::any_io_executor,asio::ip::basic_resolver_iterator<asio::ip::tcp>,asio::detail::default_connect_condition>
                      ((basic_resolver_iterator<asio::ip::tcp> *)auStack_180,
                       (basic_socket<asio::ip::tcp,asio::any_io_executor> *)(this + 8),
                       (basic_resolver_iterator<asio::ip::tcp> *)auStack_1d8,&bStack_158,
                       (default_connect_condition)nStack_1e8,(error_code *)&bStack_1a8);
  bVar15 = (int)bStack_1a8._Mydata == 0;
  plVar6 = *(longlong **)&(pbVar12->values_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (bVar15) {
    ::FString::operator=((FString *)(this + 0xb8),param_1);
    *(short *)(this + 200) = sVar14;
  }
  if (peStack_190 != (error_category *)0x0) {
    LOCK();
    p_Var4 = &peStack_190->_Addr;
    iVar5 = *(int *)p_Var4;
    *(int *)p_Var4 = *(int *)p_Var4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)peStack_190->_padding_)(peStack_190);
      LOCK();
      piVar3 = (int *)((longlong)&peStack_190->_Addr + 4);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(peStack_190->_padding_ + 8))(peStack_190);
      }
    }
  }
  asio::detail::io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>
  ::~io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>(&iStack_98)
  ;
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  return bVar15;
}

// SetSponsored @ 14d3a80c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreClient::SetSponsored(FStoreClient *this,bool param_1)

{
  bool bVar1;
  undefined1 auStack_198 [32];
  FPayload local_178;
  TInlineMemoryWriter<128> local_168;
  FCborWriter local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_168);
  FCborWriter::FCborWriter(&local_40,(FArchive *)&local_168,BigEndian);
  FCborWriter::WriteContainerStart(&local_40,Map,-1);
  FCborWriter::WriteValue(&local_40,"$request",8);
  FCborWriter::WriteValue(&local_40,"GET",3);
  FCborWriter::WriteValue(&local_40,"$path",5);
  FCborWriter::WriteValue(&local_40,"v1/settings/write",0x11);
  FCborWriter::WriteValue(&local_40,"Sponsored",9);
  FCborWriter::WriteValue(&local_40,(ulonglong)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = FStoreCborClient::Communicate((FStoreCborClient *)this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// SetStoreDirectories @ 14d3a8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d3a84a4) */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall
UE::Trace::FStoreClient::SetStoreDirectories
          (FStoreClient *this,wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_238 [32];
  undefined1 auStack_1e8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_1e0;
  undefined1 auStack_1d0 [8];
  FString FStack_1c8;
  TStringView<wchar_t> TStack_1b8;
  FPayload FStack_1a8;
  TInlineMemoryWriter<128> TStack_198;
  FCborWriter FStack_70;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&TStack_198);
  FCborWriter::FCborWriter(&FStack_70,(FArchive *)&TStack_198,BigEndian);
  FCborWriter::WriteContainerStart(&FStack_70,Map,-1);
  FCborWriter::WriteValue(&FStack_70,"$request",8);
  FCborWriter::WriteValue(&FStack_70,"GET",3);
  FCborWriter::WriteValue(&FStack_70,"$path",5);
  FCborWriter::WriteValue(&FStack_70,"v1/settings/write",0x11);
  if (param_1 != (wchar_t *)0x0) {
    TStack_1b8.DataPtr = param_1;
    sVar6 = wcslen(param_1);
    TStack_1b8.Size = (int)sVar6;
    FCborWriter::WriteValue(&FStack_70,"StoreDir",8);
    FCborWriter::WriteValue(&FStack_70,&TStack_1b8);
  }
  iVar1 = param_3->ArrayNum;
  TStack_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1e0.ArrayNum = 0;
  TStack_1e0.ArrayMax = 0;
  if (iVar1 != 0) {
    pFVar11 = (param_3->AllocatorInstance).Data;
    pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        auStack_1e8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_1e8);
      }
      if (pFVar11 == pFVar10) break;
      ::FString::ConcatCF(&FStack_1c8,L"-",(FString *)pFVar11);
      if (((TStack_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&FStack_1c8) &&
          ((FScriptContainerElement *)&FStack_1c8 <
           TStack_1e0.AllocatorInstance.Data + (longlong)TStack_1e0.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = TStack_1e0.ArrayNum;
      if (TStack_1e0.ArrayNum == TStack_1e0.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_1e0.AllocatorInstance,&TStack_1e0.ArrayMax);
      }
      TStack_1e0.ArrayNum = iVar5 + 1;
      pFVar8 = TStack_1e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(FScriptContainerElement **)pFVar8 = FStack_1c8.Data.AllocatorInstance.Data;
      FStack_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar8 + 8) = FStack_1c8.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = FStack_1c8.Data.ArrayMax;
      FStack_1c8.Data.ArrayNum = 0;
      FStack_1c8.Data.ArrayMax = 0;
      pFVar11 = pFVar11 + 0x10;
    }
  }
  if (param_2->ArrayNum != 0) {
    if ((&TStack_1e0 == param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar1 = param_2->ArrayNum;
    if (iVar1 != 0) {
      iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,&TStack_1e0.AllocatorInstance,&TStack_1e0.ArrayNum,
                         &TStack_1e0.ArrayMax);
      ConstructItems<FString,FString,int>
                (TStack_1e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10,
                 (FString *)(param_2->AllocatorInstance).Data,iVar1);
    }
  }
  if (TStack_1e0.ArrayNum != 0) {
    FCborWriter::WriteValue(&FStack_70,"Additionalwatchdirs",0x13);
    FCborWriter::WriteContainerStart(&FStack_70,Array,(longlong)TStack_1e0.ArrayNum);
    iVar1 = TStack_1e0.ArrayNum;
    uVar7 = (ulonglong)TStack_1e0.ArrayNum;
    pFVar11 = TStack_1e0.AllocatorInstance.Data + uVar7 * 0x10;
    FVar9.Data = TStack_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_1d0);
      }
      if (FVar9.Data == pFVar11) break;
      FCborWriter::WriteValue(&FStack_70,(FString *)FVar9.Data);
      uVar7 = TStack_1e0._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  FCborWriter::WriteContainerEnd(&FStack_70);
  FStack_1a8.Data = (uchar *)&TStack_198.Buffer;
  if (TStack_198.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FStack_1a8.Data = (uchar *)TStack_198.Buffer.AllocatorInstance.SecondaryData;
  }
  FStack_1a8.Size = TStack_198.Buffer.ArrayNum;
  bVar3 = FStoreCborClient::Communicate((FStoreCborClient *)this,&FStack_1a8);
  DestructItems<FString,int>((FString *)TStack_1e0.AllocatorInstance.Data,TStack_1e0.ArrayNum);
  if (TStack_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_1e0.AllocatorInstance.Data);
  }
  FCborWriter::~FCborWriter(&FStack_70);
  if (TStack_198.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_198.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&TStack_198);
  return bVar3;
}

