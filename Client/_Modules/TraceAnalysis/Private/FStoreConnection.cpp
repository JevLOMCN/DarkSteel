// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// FStoreConnection @ 14d38fc80

FStoreConnection * __thiscall UE::Trace::FStoreConnection::FStoreConnection(FStoreConnection *this)

{
  this->_padding_ = (longlong)&___7FStoreConnection_Trace_UE__6B_;
  (this->StoreClient).Ptr = (FStoreClient *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StoreClientCriticalSection,4000);
  (this->LastStoreHost).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastStoreHost).Data.ArrayNum = 0;
  (this->LastStoreHost).Data.ArrayMax = 0;
  this->LastStorePort = 0;
  this->bIsLocalHost = false;
  return this;
}

// ~FStoreConnection @ 14d392660

void __thiscall UE::Trace::FStoreConnection::~FStoreConnection(FStoreConnection *this)

{
  FStoreClient *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FStoreConnection_Trace_UE__6B_;
  pFVar1 = (this->StoreClient).Ptr;
  if (pFVar1 != (FStoreClient *)0x0) {
    (this->StoreClient).Ptr = (FStoreClient *)0x0;
    asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)(pFVar1 + 8));
    if (*(void **)(pFVar1 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xb8));
    }
    if (*(void **)(pFVar1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xa8));
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)(pFVar1 + 8));
    ::operator_delete(pFVar1,0xd0);
  }
  pFVar2 = (this->LastStoreHost).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StoreClientCriticalSection);
  pFVar1 = (this->StoreClient).Ptr;
  if (pFVar1 != (FStoreClient *)0x0) {
    asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)(pFVar1 + 8));
    if (*(void **)(pFVar1 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xb8));
    }
    if (*(void **)(pFVar1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xa8));
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)(pFVar1 + 8));
    ::operator_delete(pFVar1,0xd0);
  }
  return;
}

// ConnectToStore @ 14d399960

bool __thiscall
UE::Trace::FStoreConnection::ConnectToStore(FStoreConnection *this,wchar_t *param_1,uint param_2)

{
  FStoreClient *pFVar1;
  int iVar2;
  FStoreClient *pFVar3;
  bool bVar4;
  bool bVar5;
  FString local_38;
  FString local_28;
  
  pFVar3 = FStoreClient::Connect(param_1,param_2);
  pFVar1 = (this->StoreClient).Ptr;
  if ((pFVar1 != pFVar3) && ((this->StoreClient).Ptr = pFVar3, pFVar1 != (FStoreClient *)0x0)) {
    asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)(pFVar1 + 8));
    if (*(void **)(pFVar1 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xb8));
    }
    if (*(void **)(pFVar1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xa8));
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)(pFVar1 + 8));
    ::operator_delete(pFVar1,0xd0);
  }
  if ((this->StoreClient).Ptr == (FStoreClient *)0x0) {
    return false;
  }
  ::FString::operator=(&this->LastStoreHost,param_1);
  this->LastStorePort = param_2;
  ::FString::FString(&local_28,L"localhost");
  iVar2 = (this->LastStoreHost).Data.ArrayNum;
  if (iVar2 == local_28.Data.ArrayNum) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->LastStoreHost).Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
      goto LAB_14d399a37;
    }
LAB_14d399a9c:
    bVar4 = false;
LAB_14d399aa1:
    this->bIsLocalHost = true;
    if (!bVar4) goto LAB_14d399ab6;
  }
  else {
    bVar4 = iVar2 + local_28.Data.ArrayNum == 1;
LAB_14d399a37:
    if (bVar4) goto LAB_14d399a9c;
    ::FString::FString(&local_38,L"127.0.0.1");
    iVar2 = (this->LastStoreHost).Data.ArrayNum;
    if (iVar2 == local_38.Data.ArrayNum) {
      if (1 < iVar2) {
        iVar2 = wcscmp((wchar_t *)(this->LastStoreHost).Data.AllocatorInstance.Data,
                       (wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
        goto LAB_14d399a7f;
      }
      bVar4 = true;
      goto LAB_14d399aa1;
    }
    bVar5 = iVar2 + local_38.Data.ArrayNum == 1;
LAB_14d399a7f:
    bVar4 = true;
    if (bVar5) goto LAB_14d399aa1;
    this->bIsLocalHost = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14d399ab6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// Disconnect @ 14d39a6c0

void __thiscall UE::Trace::FStoreConnection::Disconnect(FStoreConnection *this)

{
  FStoreClient *pFVar1;
  
  pFVar1 = (this->StoreClient).Ptr;
  if (pFVar1 != (FStoreClient *)0x0) {
    (this->StoreClient).Ptr = (FStoreClient *)0x0;
    asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)(pFVar1 + 8));
    if (*(void **)(pFVar1 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xb8));
    }
    if (*(void **)(pFVar1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + 0xa8));
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
                *)(pFVar1 + 8));
    ::operator_delete(pFVar1,0xd0);
  }
  return;
}

// GetStoreAddressAndPort @ 14d39e8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Trace::FStoreConnection::GetStoreAddressAndPort
          (FStoreConnection *this,uint *param_1,uint *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  implementation_type *piVar1;
  FStoreClient *pFVar2;
  u_short uVar3;
  u_long uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  error_code local_68;
  data_union local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->StoreClient).Ptr == (FStoreClient *)0x0) {
    return false;
  }
  lpCriticalSection = &this->StoreClientCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->StoreClient).Ptr;
  piVar1 = (implementation_type *)(pFVar2 + 0x10);
  uVar5 = 0;
  if (piVar1->_padding_ != -1) {
    local_68._Myval = 0;
    local_68._Mycat =
         (error_category *)
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
              (*(win_iocp_socket_service<asio::ip::tcp> **)(pFVar2 + 8),
               (basic_endpoint<asio::ip::tcp> *)&local_58.base,piVar1,&local_68);
    asio::detail::throw_error(&local_68,"remote_endpoint");
    if (local_58.base.sa_family == 2) {
      uVar4 = ntohl(local_58.v6.sin6_flowinfo);
      uVar4 = htonl(uVar4);
      local_58.base.sa_data[6] = '\0';
      local_58.base.sa_data[7] = '\0';
      local_58.base.sa_data[8] = '\0';
      local_58.base.sa_data[9] = '\0';
      local_58.base.sa_data[10] = '\0';
      local_58.base.sa_data[0xb] = '\0';
      local_58.base.sa_data[0xc] = '\0';
      local_58.base.sa_data[0xd] = '\0';
      local_58._16_8_ = 0;
      uVar4 = ntohl(uVar4);
      goto LAB_14d39e98a;
    }
  }
  uVar4 = 0;
LAB_14d39e98a:
  *param_1 = uVar4;
  pFVar2 = (this->StoreClient).Ptr;
  if (*(longlong *)(pFVar2 + 0x10) != -1) {
    local_68._Myval = 0;
    local_68._Mycat =
         (error_category *)
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
              (*(win_iocp_socket_service<asio::ip::tcp> **)(pFVar2 + 8),
               (basic_endpoint<asio::ip::tcp> *)&local_58.base,
               (implementation_type *)(pFVar2 + 0x10),&local_68);
    asio::detail::throw_error(&local_68,"remote_endpoint");
    uVar3 = ntohs(local_58.v4.sin_port);
    uVar5 = (uint)uVar3;
  }
  *param_2 = uVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// GetStoreDir @ 14d39ea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FString * __thiscall
UE::Trace::FStoreConnection::GetStoreDir(FStoreConnection *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FResponse *this_00;
  uint uVar1;
  FStoreCborClient *this_01;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FPayload *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_1b8 [32];
  FPayload local_188;
  FPayload local_178;
  undefined4 local_168;
  TStringView<char8_t> local_158;
  <lambda_1> local_148;
  TInlineMemoryWriter<32> local_128;
  FCborWriter local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar6 = (FScriptContainerElement *)0x0;
  local_168 = 0;
  if ((this->StoreClient).Ptr == (FStoreClient *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    lpCriticalSection = &this->StoreClientCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_01 = (FStoreCborClient *)(this->StoreClient).Ptr;
    TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(&local_128);
    bVar3 = true;
    bVar2 = false;
    FCborWriter::FCborWriter(&local_60,(FArchive *)&local_128,BigEndian);
    FCborWriter::WriteContainerStart(&local_60,Map,-1);
    FCborWriter::WriteValue(&local_60,"$request",8);
    FCborWriter::WriteValue(&local_60,"GET",3);
    FCborWriter::WriteValue(&local_60,"$path",5);
    FCborWriter::WriteValue(&local_60,"v1/status",9);
    FCborWriter::WriteContainerEnd(&local_60);
    local_188.Data = (uchar *)&local_128.Buffer;
    if (local_128.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
      local_188.Data = (uchar *)local_128.Buffer.AllocatorInstance.SecondaryData;
    }
    local_188.Size = local_128.Buffer.ArrayNum;
    bVar4 = FStoreCborClient::Communicate(this_01,&local_188);
    FCborWriter::~FCborWriter(&local_60);
    if (local_128.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
      FMemory::Free((void *)local_128.Buffer.AllocatorInstance.SecondaryData);
    }
    FArchive::~FArchive((FArchive *)&local_128);
    if ((bVar4) && (this_00 = &this_01->Response, this_00 != (FResponse *)0x0)) {
      local_148.DefaultView._12_4_ = local_188._12_4_;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_188.Data = "";
      local_148.DefaultView.DataPtr = "";
      local_148.DefaultView.Size = 0;
      local_158.DataPtr = "";
      local_158.Size = local_188.Size;
      local_158._12_4_ = local_188._12_4_;
      local_148.__this = this_00;
      FResponse::
      GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<1>_::__l2::<lambda_1>_>
                (this_00,(TStringView<char8_t> *)&local_188,"store_dir",&local_158,&local_148);
      local_178.Size = 0;
      local_178._12_4_ = 0;
      pFVar5 = (FPayload *)
               ::FString::ConstructFromPtrSize((FString *)&local_158,local_188.Data,local_188.Size);
      if (&local_178 != pFVar5) {
        pFVar6 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->Data)->AllocatorInstance)
                 .Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->Data)->AllocatorInstance).Data =
             (FScriptContainerElement *)0x0;
        local_178.Size = pFVar5->Size;
        local_178._12_4_ = *(undefined4 *)&pFVar5->field_0xc;
        *(undefined8 *)&pFVar5->Size = 0;
      }
      if (local_158.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_158.DataPtr);
      }
      pFVar5 = &local_178;
    }
    else {
      local_188._8_8_ = 0;
      pFVar5 = &local_188;
      bVar3 = false;
      bVar2 = true;
    }
    pFVar5->Data = (uchar *)0x0;
    uVar1 = pFVar5->Size;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = pFVar6;
    (__return_storage_ptr__->Data).ArrayNum = uVar1;
    (__return_storage_ptr__->Data).ArrayMax = *(int *)&pFVar5->field_0xc;
    *(undefined8 *)&pFVar5->Size = 0;
    if (bVar2) {
      if ((ForElementType<unsigned_char>)local_188.Data != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    if ((bVar3) && (local_178.Data != (uchar *)0x0)) {
      FMemory::Free(local_178.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// ReconnectToStore @ 14d3a6600

bool __thiscall UE::Trace::FStoreConnection::ReconnectToStore(FStoreConnection *this)

{
  FStoreCborClient *this_00;
  bool bVar1;
  
  this_00 = (FStoreCborClient *)(this->StoreClient).Ptr;
  if (this_00 == (FStoreCborClient *)0x0) {
    return false;
  }
  if ((this->LastStoreHost).Data.ArrayNum != 0) {
    bVar1 = FStoreCborClient::Connect
                      (this_00,(wchar_t *)(this->LastStoreHost).Data.AllocatorInstance.Data,
                       (ushort)this->LastStorePort);
    return bVar1;
  }
  bVar1 = FStoreCborClient::Connect(this_00,L"",(ushort)this->LastStorePort);
  return bVar1;
}

