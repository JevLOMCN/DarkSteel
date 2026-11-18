// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 12

// FDirectSocketStream @ 14d38f200

FDirectSocketStream * __thiscall
UE::Trace::FDirectSocketStream::FDirectSocketStream
          (FDirectSocketStream *this,
          TUniquePtr<FArchiveFileWriterGeneric,TDefaultDelete<FArchiveFileWriterGeneric>_> *param_1)

{
  TUniquePtr<UE::Trace::FDirectSocketContext,TDefaultDelete<UE::Trace::FDirectSocketContext>_>
  *pTVar1;
  service *psVar2;
  longlong *plVar3;
  int iVar4;
  FEvent *pFVar5;
  FDirectSocketContext *pFVar6;
  FDirectSocketContext *this_00;
  bool bVar7;
  undefined8 local_18 [2];
  
  this_00 = (FDirectSocketContext *)0x0;
  pTVar1 = &this->AsioContext;
  (this->InternalStream).Ptr = (FTraceDataStream *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UE__Trace__IInDataStream__;
  (this->ListeningThread).Ptr = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  pTVar1->Ptr = (FDirectSocketContext *)0x0;
  (this->FileWriter).Ptr = param_1->Ptr;
  param_1->Ptr = (FArchiveFileWriterGeneric *)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ConnectionEvent = pFVar5;
  pFVar6 = ::operator_new(0xb8);
  if (pFVar6 != (FDirectSocketContext *)0x0) {
    this_00 = FDirectSocketContext::FDirectSocketContext(pFVar6);
  }
  if (pTVar1 == (TUniquePtr<UE::Trace::FDirectSocketContext,TDefaultDelete<UE::Trace::FDirectSocketContext>_>
                 *)local_18) {
    if (this_00 == (FDirectSocketContext *)0x0) {
      return this;
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(this_00->Acceptor).impl_);
    for (plVar3 = *(longlong **)((this_00->Context)._padding_ + 0x30); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[4]) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    LOCK();
    iVar4 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar4;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)this_00);
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar6 == (FDirectSocketContext *)0x0) {
      return this;
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(pFVar6->Acceptor).impl_);
    for (psVar2 = ((service_registry *)(pFVar6->Context)._padding_)->first_service_;
        psVar2 != (service *)0x0; psVar2 = psVar2->next_) {
      (**(code **)(psVar2->_padding_ + 8))(psVar2);
    }
    LOCK();
    iVar4 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar4;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)pFVar6);
    this_00 = pFVar6;
  }
  ::operator_delete(this_00,0xb8);
  return this;
}

// FDirectSocketStream @ 14d38f350

FDirectSocketStream * __thiscall
UE::Trace::FDirectSocketStream::FDirectSocketStream(FDirectSocketStream *this)

{
  TUniquePtr<UE::Trace::FDirectSocketContext,TDefaultDelete<UE::Trace::FDirectSocketContext>_>
  *pTVar1;
  service *psVar2;
  longlong *plVar3;
  int iVar4;
  FEvent *pFVar5;
  FDirectSocketContext *pFVar6;
  FDirectSocketContext *this_00;
  bool bVar7;
  undefined8 local_18 [2];
  
  this_00 = (FDirectSocketContext *)0x0;
  pTVar1 = &this->AsioContext;
  (this->InternalStream).Ptr = (FTraceDataStream *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UE__Trace__IInDataStream__;
  (this->ListeningThread).Ptr = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  (this->FileWriter).Ptr = (FArchiveFileWriterGeneric *)0x0;
  pTVar1->Ptr = (FDirectSocketContext *)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ConnectionEvent = pFVar5;
  pFVar6 = ::operator_new(0xb8);
  if (pFVar6 != (FDirectSocketContext *)0x0) {
    this_00 = FDirectSocketContext::FDirectSocketContext(pFVar6);
  }
  if (pTVar1 == (TUniquePtr<UE::Trace::FDirectSocketContext,TDefaultDelete<UE::Trace::FDirectSocketContext>_>
                 *)local_18) {
    if (this_00 == (FDirectSocketContext *)0x0) {
      return this;
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(this_00->Acceptor).impl_);
    for (plVar3 = *(longlong **)((this_00->Context)._padding_ + 0x30); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[4]) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    LOCK();
    iVar4 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar4;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)this_00);
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar6 == (FDirectSocketContext *)0x0) {
      return this;
    }
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(pFVar6->Acceptor).impl_);
    for (psVar2 = ((service_registry *)(pFVar6->Context)._padding_)->first_service_;
        psVar2 != (service *)0x0; psVar2 = psVar2->next_) {
      (**(code **)(psVar2->_padding_ + 8))(psVar2);
    }
    LOCK();
    iVar4 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar4;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)pFVar6);
    this_00 = pFVar6;
  }
  ::operator_delete(this_00,0xb8);
  return this;
}

// ~FDirectSocketStream @ 14d3921c0

void __thiscall UE::Trace::FDirectSocketStream::~FDirectSocketStream(FDirectSocketStream *this)

{
  FDirectSocketContext *pFVar1;
  FRunnableThread *pFVar2;
  FTraceDataStream *pFVar3;
  service *psVar4;
  FArchiveFileWriterGeneric *pFVar5;
  int iVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Trace__IInDataStream__;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  pFVar1 = (this->AsioContext).Ptr;
  if (pFVar1 != (FDirectSocketContext *)0x0) {
    asio::basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor>::close(&pFVar1->Acceptor);
  }
  pFVar2 = (this->ListeningThread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x20))();
    pFVar2 = (this->ListeningThread).Ptr;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (this->ListeningThread).Ptr = (FRunnableThread *)0x0;
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
  }
  pFVar3 = (this->InternalStream).Ptr;
  if (pFVar3 != (FTraceDataStream *)0x0) {
    (this->InternalStream).Ptr = (FTraceDataStream *)0x0;
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar1 = (this->AsioContext).Ptr;
  if (pFVar1 != (FDirectSocketContext *)0x0) {
    (this->AsioContext).Ptr = (FDirectSocketContext *)0x0;
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(pFVar1->Acceptor).impl_);
    for (psVar4 = ((service_registry *)(pFVar1->Context)._padding_)->first_service_;
        psVar4 != (service *)0x0; psVar4 = psVar4->next_) {
      (**(code **)(psVar4->_padding_ + 8))(psVar4);
    }
    LOCK();
    iVar6 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar6;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)pFVar1);
    ::operator_delete(pFVar1,0xb8);
  }
  pFVar5 = (this->FileWriter).Ptr;
  if (pFVar5 != (FArchiveFileWriterGeneric *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar2 = (this->ListeningThread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  pFVar3 = (this->InternalStream).Ptr;
  if (pFVar3 != (FTraceDataStream *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar1 = (this->AsioContext).Ptr;
  if (pFVar1 != (FDirectSocketContext *)0x0) {
    asio::detail::
    io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
    ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              (&(pFVar1->Acceptor).impl_);
    for (psVar4 = ((service_registry *)(pFVar1->Context)._padding_)->first_service_;
        psVar4 != (service *)0x0; psVar4 = psVar4->next_) {
      (**(code **)(psVar4->_padding_ + 8))(psVar4);
    }
    LOCK();
    iVar6 = asio::detail::winsock_init<2,2>::data_.init_count_ + -1;
    UNLOCK();
    bVar7 = asio::detail::winsock_init<2,2>::data_.init_count_ == 1;
    asio::detail::winsock_init<2,2>::data_.init_count_ = iVar6;
    if (bVar7) {
      WSACleanup();
    }
    asio::execution_context::~execution_context((execution_context *)pFVar1);
    ::operator_delete(pFVar1,0xb8);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Accept @ 14d3967d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Trace::FDirectSocketStream::Accept(FDirectSocketStream *this)

{
  TUniquePtr<UE::Trace::FTraceDataStream,TDefaultDelete<UE::Trace::FTraceDataStream>_> *pTVar1;
  FDirectSocketContext *pFVar2;
  SOCKET s;
  data_union *pdVar3;
  ulonglong uVar4;
  longlong lVar5;
  FDirectSocketStream *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  DWORD DVar9;
  u_long uVar10;
  HANDLE FileHandle;
  error_category *peVar11;
  HANDLE pvVar12;
  error_category *peVar13;
  size_t sVar14;
  ulong64 uVar15;
  void *pvVar16;
  FTraceDataStream *pFVar17;
  FTraceDataStream *pFVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  data_union *pdVar21;
  int iVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [8];
  undefined8 uStack_2d0;
  noop_deleter local_2c8;
  undefined8 local_2b8;
  undefined1 auStack_2b0 [16];
  sockaddr_in6_u_24 sStack_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  u_long local_288 [2];
  FDirectSocketStream *local_280;
  longlong local_278 [2];
  data_union local_268;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [16];
  undefined1 local_1f8 [64];
  tcp local_1b8;
  bool local_1b4;
  data_union local_1b0 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar2 = (this->AsioContext).Ptr;
  if (pFVar2 == (FDirectSocketContext *)0x0) {
    return;
  }
  local_280 = this;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_1f8,0,0,&pFVar2->Context);
  pFVar2 = (this->AsioContext).Ptr;
  pFVar18 = (FTraceDataStream *)0x0;
  uStack_2d0 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                ::__l2::_Static;
  iVar22 = 0;
  if ((HANDLE)local_1f8._8_8_ == (HANDLE)0xffffffffffffffff) {
    lVar5 = (pFVar2->Acceptor).impl_.implementation_._padding_;
    s = (pFVar2->Acceptor).impl_.implementation_._padding_;
    do {
      if (s == 0xffffffffffffffff) {
        local_268.base.sa_family = 0x2719;
        local_268.v4.sin_port = 0;
        peVar13 = asio::error::get_system_category();
        local_268._8_4_ = SUB84(peVar13,0);
        local_268._12_4_ = (undefined4)((ulonglong)peVar13 >> 0x20);
        local_2d8._0_4_ = CONCAT22(local_268.v4.sin_port,local_268.base.sa_family);
        local_2d8._4_4_ = local_268.v4.sin_addr.S_un;
        uVar24 = local_268._8_4_;
        uVar25 = local_268._12_4_;
        iVar8 = 0x2719;
      }
      else {
        FileHandle = (HANDLE)accept(s,(sockaddr *)0x0,(int *)0x0);
        if (FileHandle != (HANDLE)0xffffffffffffffff) {
          uStack_24c = 0;
          uStack_248 = 0;
          local_268._20_4_ = 0;
          local_268.v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
          local_268._12_4_ = 2;
          local_268._16_4_ = 0;
          if ((HANDLE)local_1f8._8_8_ == (HANDLE)0xffffffffffffffff) {
            pvVar12 = CreateIoCompletionPort
                                (FileHandle,
                                 *(HANDLE *)(*(longlong *)(local_1f8._0_8_ + 0x30) + 0x28),0,0);
            if (pvVar12 == (HANDLE)0x0) {
              DVar9 = GetLastError();
              local_2b8 = CONCAT44(local_2b8._4_4_,DVar9);
              uStack_2d0 = (_System_error_category *)asio::error::get_system_category();
              auStack_2b0._0_4_ = SUB84(uStack_2d0,0);
              auStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2d0 >> 0x20);
              local_2d8 = (undefined1  [8])local_2b8;
              if (DVar9 != 0) goto LAB_14d3969f8;
            }
            local_1f8[0x10] = 0x10;
            local_1f8._8_8_ = FileHandle;
            std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
                      ((shared_ptr<void> *)(local_1f8 + 0x18),(void *)0x0,local_2c8);
            local_1b8.family_ = (pFVar2->Acceptor).impl_.implementation_.protocol_.family_;
            local_1b0[0]._0_8_ = CONCAT44(local_268._16_4_,local_268._12_4_);
            local_1b0[0]._12_4_ = local_268.v6.field4_0x18;
            local_1b0[0]._8_1_ = local_268._20_1_;
            local_1b0[0]._9_1_ = local_268._21_1_;
            local_1b0[0]._10_1_ = local_268._22_1_;
            local_1b0[0]._11_1_ = local_268._23_1_;
            local_1b0[0]._16_8_ = CONCAT44(uStack_248,uStack_24c);
            local_1b4 = false;
            local_1b0[0].v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
            goto LAB_14d396b01;
          }
          local_2b8 = CONCAT44(local_2b8._4_4_,1);
          uStack_2d0 = (_System_error_category *)asio::error::get_misc_category();
          auStack_2b0._0_4_ = SUB84(uStack_2d0,0);
          auStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2d0 >> 0x20);
LAB_14d3969f8:
          local_2d8 = (undefined1  [8])local_2b8;
          iVar8 = closesocket((SOCKET)FileHandle);
          if (iVar8 != 0) {
            peVar13 = asio::error::get_system_category();
            iVar8 = WSAGetLastError();
            peVar11 = asio::error::get_system_category();
            if ((((peVar13->_Addr)._Num == (peVar11->_Addr)._Num) && (iVar8 == 0x2733)) ||
               ((peVar11 = asio::error::get_system_category(),
                (peVar13->_Addr)._Num == (peVar11->_Addr)._Num && (iVar8 == 0x4d5)))) {
              local_288[0] = 0;
              ioctlsocket((SOCKET)FileHandle,-0x7ffb9982,local_288);
              iVar8 = closesocket((SOCKET)FileHandle);
              if (iVar8 != 0) {
                asio::error::get_system_category();
                WSAGetLastError();
              }
            }
          }
          break;
        }
        peVar13 = asio::error::get_system_category();
        local_2d8._0_4_ = WSAGetLastError();
        local_2b8 = CONCAT44(local_2b8._4_4_,local_2d8._0_4_);
        auStack_2b0._0_4_ = SUB84(peVar13,0);
        auStack_2b0._4_4_ = (undefined4)((ulonglong)peVar13 >> 0x20);
        local_2d8._4_4_ = local_2b8._4_4_;
        uVar24 = auStack_2b0._0_4_;
        uVar25 = auStack_2b0._4_4_;
        iVar8 = local_2d8._0_4_;
      }
      uStack_2d0 = (_System_error_category *)CONCAT44(uVar25,uVar24);
      peVar11 = asio::error::get_system_category();
      if ((((peVar13->_Addr)._Num == (peVar11->_Addr)._Num) && (iVar8 == 0x2733)) ||
         ((peVar11 = asio::error::get_system_category(),
          (peVar13->_Addr)._Num == (peVar11->_Addr)._Num && (iVar8 == 0x4d5)))) {
        if ((lVar5 & 1) != 0) break;
      }
      else {
        peVar11 = asio::error::get_system_category();
        iVar8 = local_2d8._0_4_;
        if (((((peVar13->_Addr)._Num != (peVar11->_Addr)._Num) || (local_2d8._0_4_ != 0x2745)) &&
            (local_2d8._0_4_ != 0x86)) || ((lVar5 & 4) != 0)) goto LAB_14d396a74;
      }
      iVar8 = asio::detail::socket_ops::poll_read(s,'\0',-1,(error_code *)local_2d8);
    } while (-1 < iVar8);
    iVar8 = local_2d8._0_4_;
  }
  else {
    local_2d8._0_4_ = 1;
    uStack_2d0 = (_System_error_category *)asio::error::get_misc_category();
    iVar8 = local_2d8._0_4_;
  }
LAB_14d396a74:
  if (iVar8 != 0) {
    peVar13 = asio::error::get_system_category();
    if ((((((error_category *)uStack_2d0)->_Addr)._Num != (peVar13->_Addr)._Num) ||
        (iVar8 != 0x2714)) && (1 < (byte)LogCore._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    goto LAB_14d396d98;
  }
LAB_14d396b01:
  if (local_1b4 == false) {
    auStack_2b0._4_4_ = 0;
    auStack_2b0._8_4_ = 0;
    stack0xfffffffffffffd5c = 0;
    local_29c = 0;
    local_294 = 0;
  }
  SetHandleInformation((HANDLE)local_1f8._8_8_,1,0);
  uStack_2d0 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                ::__l2::_Static;
  local_2d8 = (undefined1  [8])((ulonglong)local_2d8 & 0xffffffff00000000);
  asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
            ((win_iocp_socket_service<asio::ip::tcp> *)local_1f8._0_8_,
             (basic_endpoint<asio::ip::tcp> *)&local_268.base,(implementation_type *)(local_1f8 + 8)
             ,(error_code *)local_2d8);
  asio::detail::throw_error((error_code *)local_2d8,"remote_endpoint");
  bVar23 = local_268.base.sa_family != 2;
  if (bVar23) {
    local_2b8 = 1;
    auStack_2b0._0_4_ = local_268._8_4_;
    auStack_2b0._4_4_ = local_268._12_4_;
    auStack_2b0._8_4_ = local_268._16_4_;
    auStack_2b0._12_4_ = local_268._20_4_;
    sStack_2a0 = local_268.v6.field4_0x18;
  }
  else {
    uVar10 = ntohl(local_268.v6.sin6_flowinfo);
    local_2b8 = local_2b8 & 0xffffffff00000000;
    uVar10 = htonl(uVar10);
    local_2b8 = CONCAT44(uVar10,(undefined4)local_2b8);
    auStack_2b0._0_4_ = 0;
    auStack_2b0._4_4_ = 0;
    auStack_2b0._8_4_ = 0;
    auStack_2b0._12_4_ = 0;
    sStack_2a0.sin6_scope_id = 0;
  }
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_1f8;
  if (bVar23) {
    asio::ip::address_v6::to_string
              ((address_v6 *)auStack_2b0,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_268.base);
  }
  else {
    asio::ip::address_v4::to_string
              ((address_v4 *)((longlong)&local_2b8 + 4),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_268.base);
  }
  uVar4 = CONCAT44(uStack_24c,local_268.v6.field4_0x18.sin6_scope_id);
  pdVar3 = (data_union *)
           CONCAT44(local_268.v6.sin6_flowinfo,
                    CONCAT22(local_268.v4.sin_port,local_268.base.sa_family));
  local_158._padding_ = 0;
  pdVar21 = &local_268;
  if (0xf < uVar4) {
    pdVar21 = pdVar3;
  }
  if (pdVar21 == (data_union *)0x0) {
    local_158.StringLength = 0;
    local_158.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar14 = strlen((char *)pdVar21);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,(char *)pdVar21,(int)sVar14,Yes);
  }
  pwVar7 = local_158.Ptr;
  if (local_158.Ptr != (wchar_t *)0x0) {
    sVar14 = wcslen(local_158.Ptr);
    iVar22 = (int)sVar14;
  }
  uVar15 = (ulong64)iVar22;
  if (local_238.End < local_238.CurPos + uVar15) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,uVar15);
  }
  if (iVar22 != 0) {
    pvVar16 = FGenericPlatformString::Memcpy(local_238.CurPos,pwVar7,uVar15 * 2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar16 + uVar15 * 2);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xf < uVar4) {
    uVar20 = uVar4 + 1;
    pdVar21 = pdVar3;
    if (0xfff < uVar20) {
      pdVar21 = *(data_union **)((longlong)pdVar3 + -8);
      uVar20 = uVar4 + 0x28;
      if ((char *)0x1f < (char *)((longlong)pdVar3 + (-8 - (longlong)pdVar21))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pdVar21,uVar20);
  }
  if (4 < (byte)LogCore._0_1_) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'\0';
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  pFVar6 = local_280;
  asio::basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor>::close
            (&((local_280->AsioContext).Ptr)->Acceptor);
  pFVar17 = ::operator_new(0xa8);
  if (pFVar17 != (FTraceDataStream *)0x0) {
    pFVar18 = FTraceDataStream::FTraceDataStream
                        (pFVar17,(basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *)
                                 local_1f8);
  }
  pTVar1 = &pFVar6->InternalStream;
  if (pTVar1 == (TUniquePtr<UE::Trace::FTraceDataStream,TDefaultDelete<UE::Trace::FTraceDataStream>_>
                 *)local_278) {
    if (pFVar18 != (FTraceDataStream *)0x0) {
      puVar19 = (undefined8 *)pFVar18->_padding_;
      goto LAB_14d396d87;
    }
  }
  else {
    pFVar17 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar18;
    if (pFVar17 != (FTraceDataStream *)0x0) {
      puVar19 = (undefined8 *)pFVar17->_padding_;
      pFVar18 = pFVar17;
LAB_14d396d87:
      (*(code *)*puVar19)(pFVar18,1);
    }
  }
  (**(code **)(pFVar6->ConnectionEvent->_padding_ + 0x10))();
LAB_14d396d98:
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_1f8);
  return;
}

// BindToExistingConnection @ 14d397f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Trace::FDirectSocketStream::BindToExistingConnection(FDirectSocketStream *this,FSocket *param_1)

{
  TUniquePtr<UE::Trace::FTraceDataStream,TDefaultDelete<UE::Trace::FTraceDataStream>_> *pTVar1;
  DWORD DVar2;
  HANDLE FileHandle;
  HANDLE pvVar3;
  FTraceDataStream *pFVar4;
  FTraceDataStream *pFVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_128 [32];
  noop_deleter local_108;
  undefined8 local_f4;
  char acStack_ec [8];
  undefined8 local_e4;
  longlong local_d8;
  undefined1 local_d0 [64];
  tcp local_90;
  bool local_8c;
  data_union local_88 [3];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_128;
  FileHandle = (HANDLE)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_d0,0,0,&((this->AsioContext).Ptr)->Context);
  local_e4 = 0;
  pFVar5 = (FTraceDataStream *)0x0;
  acStack_ec[0] = '\0';
  acStack_ec[1] = '\0';
  acStack_ec[2] = '\0';
  acStack_ec[3] = '\0';
  acStack_ec[4] = '\0';
  acStack_ec[5] = '\0';
  acStack_ec[6] = '\0';
  acStack_ec[7] = '\0';
  local_f4 = 2;
  if ((HANDLE)local_d0._8_8_ != (HANDLE)0xffffffffffffffff) {
    asio::error::get_misc_category();
LAB_14d39800a:
    if (1 < (byte)LogCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    bVar7 = false;
    goto LAB_14d3980e2;
  }
  pvVar3 = CreateIoCompletionPort
                     (FileHandle,*(HANDLE *)(*(longlong *)(local_d0._0_8_ + 0x30) + 0x28),0,0);
  if (pvVar3 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    asio::error::get_system_category();
    if (DVar2 != 0) goto LAB_14d39800a;
  }
  local_d0[0x10] = 0x10;
  local_d0._8_8_ = FileHandle;
  std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
            ((shared_ptr<void> *)(local_d0 + 0x18),(void *)0x0,local_108);
  local_90.family_ = 2;
  local_88[0]._0_8_ = local_f4;
  local_88[0]._8_1_ = acStack_ec[0];
  local_88[0]._9_1_ = acStack_ec[1];
  local_88[0]._10_1_ = acStack_ec[2];
  local_88[0]._11_1_ = acStack_ec[3];
  local_88[0]._12_1_ = acStack_ec[4];
  local_88[0]._13_1_ = acStack_ec[5];
  local_88[0]._14_1_ = acStack_ec[6];
  local_88[0]._15_1_ = acStack_ec[7];
  local_8c = false;
  local_88[0]._16_8_ = local_e4;
  local_88[0].v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
  pFVar4 = ::operator_new(0xa8);
  if (pFVar4 != (FTraceDataStream *)0x0) {
    pFVar5 = FTraceDataStream::FTraceDataStream
                       (pFVar4,(basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *)local_d0)
    ;
  }
  pTVar1 = &this->InternalStream;
  if (pTVar1 == (TUniquePtr<UE::Trace::FTraceDataStream,TDefaultDelete<UE::Trace::FTraceDataStream>_>
                 *)&local_d8) {
    if (pFVar5 != (FTraceDataStream *)0x0) {
      puVar6 = (undefined8 *)pFVar5->_padding_;
      goto LAB_14d3980cf;
    }
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 != (FTraceDataStream *)0x0) {
      puVar6 = (undefined8 *)pFVar4->_padding_;
      pFVar5 = pFVar4;
LAB_14d3980cf:
      (*(code *)*puVar6)(pFVar5,1);
    }
  }
  (**(code **)(this->ConnectionEvent->_padding_ + 0x10))();
  bVar7 = true;
LAB_14d3980e2:
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_d0);
  return bVar7;
}

// Close @ 14d3983d0

void __thiscall UE::Trace::FDirectSocketStream::Close(FDirectSocketStream *this)

{
  FTraceDataStream *pFVar1;
  FArchiveFileWriterGeneric *pFVar2;
  
  pFVar1 = (this->InternalStream).Ptr;
  if (pFVar1 != (FTraceDataStream *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x10))();
  }
  pFVar2 = (this->FileWriter).Ptr;
  if (pFVar2 != (FArchiveFileWriterGeneric *)0x0) {
    FArchiveFileWriterGeneric::Close(pFVar2);
    pFVar2 = (this->FileWriter).Ptr;
    if (pFVar2 != (FArchiveFileWriterGeneric *)0x0) {
      (this->FileWriter).Ptr = (FArchiveFileWriterGeneric *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d398414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// CreateSocket @ 14d399c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Trace::FDirectSocketStream::CreateSocket(FDirectSocketStream *this,ushort param_1)

{
  FDirectSocketContext *pFVar1;
  ulonglong uVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  HANDLE FileHandle;
  error_category *peVar6;
  HANDLE pvVar7;
  size_t sVar8;
  error_code *peVar9;
  ulong64 uVar10;
  bool bVar11;
  basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor> *pbVar12;
  undefined1 auStackY_298 [32];
  noop_deleter local_268;
  char local_264 [12];
  error_code local_258;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  sockaddr local_228;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 local_208 [64];
  tcp local_1c8;
  bool local_1c4;
  data_union local_1c0;
  undefined1 local_1a0 [24];
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_208,0,0,&((this->AsioContext).Ptr)->Context);
  FileHandle = (HANDLE)WSASocketW(2,1);
  uStack_244 = 0;
  uStack_240 = 0;
  local_258._Mycat._4_4_ = 2;
  uStack_248 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  if ((HANDLE)local_208._8_8_ == (HANDLE)0xffffffffffffffff) {
    pvVar7 = CreateIoCompletionPort
                       (FileHandle,*(HANDLE *)(*(longlong *)(local_208._0_8_ + 0x30) + 0x28),0,0);
    if (pvVar7 == (HANDLE)0x0) {
      DVar3 = GetLastError();
      peVar6 = asio::error::get_system_category();
      if (DVar3 != 0) goto LAB_14d399d4f;
    }
    local_208[0x10] = 0x10;
    local_208._8_8_ = FileHandle;
    std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
              ((shared_ptr<void> *)(local_208 + 0x18),(void *)0x0,local_268);
    local_1c0._0_8_ = CONCAT44(uStack_248,local_258._Mycat._4_4_);
    local_1c0._12_1_ = (undefined1)uStack_240;
    local_1c0._13_1_ = uStack_240._1_1_;
    local_1c0._14_1_ = uStack_240._2_1_;
    local_1c0._15_1_ = uStack_240._3_1_;
    local_1c0._8_1_ = (undefined1)uStack_244;
    local_1c0._9_1_ = uStack_244._1_1_;
    local_1c0._10_1_ = uStack_244._2_1_;
    local_1c0._11_1_ = uStack_244._3_1_;
    iVar5 = 0x2719;
    local_1c0._16_8_ = CONCAT44(uStack_238,uStack_23c);
    local_1c8.family_ = 2;
    local_1c4 = false;
    local_1c0.v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
    local_264[0] = '\x01';
    local_264[1] = '\0';
    local_264[2] = '\0';
    local_264[3] = '\0';
    if ((HANDLE)local_208._8_8_ == (HANDLE)0xffffffffffffffff) {
      local_258._Myval = 0x2719;
      peVar6 = asio::error::get_system_category();
      local_258._Mycat._0_4_ = SUB84(peVar6,0);
      local_258._Mycat._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
    }
    else {
      iVar4 = setsockopt(local_208._8_8_,0xffff,4,local_264,4);
      if (iVar4 == 0) {
        local_258._0_8_ = local_258._0_8_ & 0xffffffff00000000;
        local_258._Mycat._0_4_ = 0x54d848f0;
        local_258._Mycat._4_4_ = 1;
      }
      else {
        peVar6 = asio::error::get_system_category();
        local_258._Myval = WSAGetLastError();
        local_258._Mycat._0_4_ = SUB84(peVar6,0);
        local_258._Mycat._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
      }
    }
    asio::detail::throw_error(&local_258,"set_option");
    local_210 = 0;
    local_228.sa_family = 2;
    local_228.sa_data[6] = '\0';
    local_228.sa_data[7] = '\0';
    local_228.sa_data[8] = '\0';
    local_228.sa_data[9] = '\0';
    local_228.sa_data[10] = '\0';
    local_228.sa_data[0xb] = '\0';
    local_228.sa_data[0xc] = '\0';
    local_228.sa_data[0xd] = '\0';
    uStack_218 = 0;
    local_228.sa_data._0_2_ = htons(param_1);
    local_228.sa_data[2] = '\0';
    local_228.sa_data[3] = '\0';
    local_228.sa_data[4] = '\0';
    local_228.sa_data[5] = '\0';
    if ((HANDLE)local_208._8_8_ == (HANDLE)0xffffffffffffffff) {
      peVar6 = asio::error::get_system_category();
      iVar4 = 0x2719;
LAB_14d399f80:
      if (1 < (byte)LogCore._0_1_) {
        (**(code **)(peVar6->_padding_ + 0x10))(peVar6,&local_258,iVar4);
        local_168._padding_ = 0;
        peVar9 = &local_258;
        if (0xf < CONCAT44(uStack_23c,uStack_240)) {
          peVar9 = (error_code *)local_258._0_8_;
        }
        if (peVar9 == (error_code *)0x0) {
          local_168.Ptr = (wchar_t *)0x0;
          local_168.StringLength = 0;
        }
        else {
          sVar8 = strlen((char *)peVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,(char *)peVar9,(int)sVar8,Yes);
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        uVar2 = CONCAT44(uStack_23c,uStack_240);
        if (0xf < uVar2) {
          uVar10 = uVar2 + 1;
          peVar9 = (error_code *)local_258._0_8_;
          if (0xfff < uVar10) {
            uVar10 = uVar2 + 0x28;
            peVar9 = (error_code *)((error_code *)(local_258._0_8_ + -0x10))->_Mycat;
            if ((char *)0x1f <
                (char *)(local_258._0_8_ +
                        (-8 - (longlong)((error_code *)(local_258._0_8_ + -0x10))->_Mycat))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          goto LAB_14d39a18e;
        }
      }
    }
    else {
      iVar4 = 0x10;
      if (local_228.sa_family != 2) {
        iVar4 = 0x1c;
      }
      iVar4 = bind(local_208._8_8_,&local_228,iVar4);
      if (iVar4 != 0) {
        peVar6 = asio::error::get_system_category();
        iVar4 = WSAGetLastError();
        if (iVar4 != 0) goto LAB_14d399f80;
      }
      if ((HANDLE)local_208._8_8_ != (HANDLE)0xffffffffffffffff) {
        iVar5 = listen(local_208._8_8_,4);
        if (iVar5 != 0) {
          peVar6 = asio::error::get_system_category();
          iVar5 = WSAGetLastError();
          if (iVar5 != 0) goto LAB_14d39a0ab;
        }
        pFVar1 = (this->AsioContext).Ptr;
        pbVar12 = &pFVar1->Acceptor;
        if (pbVar12 != (basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor> *)local_208) {
          asio::detail::win_iocp_socket_service<asio::ip::tcp>::move_assign
                    ((pbVar12->impl_).service_,&(pFVar1->Acceptor).impl_.implementation_,
                     (win_iocp_socket_service_base *)(local_208._0_8_ + 0x28),
                     (implementation_type *)(local_208 + 8));
          if (*(longlong *)&(pFVar1->Acceptor).impl_.executor_.field_0x20 != 0) {
            (*(code *)**(undefined8 **)&(pFVar1->Acceptor).impl_.executor_.field_0x18)
                      (&(pFVar1->Acceptor).impl_.executor_);
          }
          if (local_180 == 0) {
            *(undefined8 *)&(pFVar1->Acceptor).impl_.executor_.field_0x18 = 0;
            *(undefined8 *)&(pFVar1->Acceptor).impl_.executor_.field_0x20 = 0;
            *(undefined8 *)&(pFVar1->Acceptor).impl_.executor_.field_0x28 = 0;
          }
          else {
            *(longlong *)&(pFVar1->Acceptor).impl_.executor_.field_0x18 = local_188;
            *(undefined8 *)&(pFVar1->Acceptor).impl_.executor_.field_0x28 = local_178;
            (**(code **)(local_188 + 8))(&(pFVar1->Acceptor).impl_.executor_,local_1a0);
          }
          *(undefined8 *)&(pFVar1->Acceptor).impl_.executor_.field_0x30 = local_170;
          (pbVar12->impl_).service_ = (win_iocp_socket_service<asio::ip::tcp> *)local_208._0_8_;
        }
        bVar11 = true;
        goto LAB_14d39a235;
      }
      peVar6 = asio::error::get_system_category();
LAB_14d39a0ab:
      if (1 < (byte)LogCore._0_1_) {
        (**(code **)(peVar6->_padding_ + 0x10))(peVar6,&local_258,iVar5);
        local_168._padding_ = 0;
        peVar9 = &local_258;
        if (0xf < CONCAT44(uStack_23c,uStack_240)) {
          peVar9 = (error_code *)local_258._0_8_;
        }
        if (peVar9 == (error_code *)0x0) {
          local_168.Ptr = (wchar_t *)0x0;
          local_168.StringLength = 0;
        }
        else {
          sVar8 = strlen((char *)peVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,(char *)peVar9,(int)sVar8,Yes);
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        uVar2 = CONCAT44(uStack_23c,uStack_240);
        if (0xf < uVar2) {
          uVar10 = uVar2 + 1;
          peVar9 = (error_code *)local_258._0_8_;
          if (0xfff < uVar10) {
            peVar9 = (error_code *)((error_code *)(local_258._0_8_ + -0x10))->_Mycat;
            uVar10 = uVar2 + 0x28;
            if ((char *)0x1f < (char *)(local_258._0_8_ + (-8 - (longlong)peVar9))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          goto LAB_14d39a18e;
        }
      }
    }
  }
  else {
    peVar6 = asio::error::get_misc_category();
    DVar3 = 1;
LAB_14d399d4f:
    if (1 < (byte)LogCore._0_1_) {
      (**(code **)(peVar6->_padding_ + 0x10))(peVar6,&local_258,DVar3);
      local_168._padding_ = 0;
      peVar9 = &local_258;
      if (0xf < CONCAT44(uStack_23c,uStack_240)) {
        peVar9 = (error_code *)local_258._0_8_;
      }
      if (peVar9 == (error_code *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar8 = strlen((char *)peVar9);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,(char *)peVar9,(int)sVar8,Yes);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      uVar2 = CONCAT44(uStack_23c,uStack_240);
      if (0xf < uVar2) {
        uVar10 = uVar2 + 1;
        peVar9 = (error_code *)local_258._0_8_;
        if (0xfff < uVar10) {
          uVar10 = uVar2 + 0x28;
          peVar9 = (error_code *)((error_code *)(local_258._0_8_ + -0x10))->_Mycat;
          if ((char *)0x1f <
              (char *)(local_258._0_8_ +
                      (-8 - (longlong)((error_code *)(local_258._0_8_ + -0x10))->_Mycat))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14d39a18e:
        ::operator_delete(peVar9,uVar10);
      }
    }
  }
  bVar11 = false;
LAB_14d39a235:
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_208);
  return bVar11;
}

// Read @ 14d3a5cb0

int __thiscall
UE::Trace::FDirectSocketStream::Read(FDirectSocketStream *this,void *param_1,uint param_2)

{
  FTraceDataStream *pFVar1;
  FArchiveFileWriterGeneric *this_00;
  int iVar2;
  undefined4 in_register_00000084;
  
  pFVar1 = (this->InternalStream).Ptr;
  if (pFVar1 == (FTraceDataStream *)0x0) {
    return -1;
  }
  iVar2 = (**(code **)(pFVar1->_padding_ + 8))
                    (pFVar1,param_1,CONCAT44(in_register_00000084,param_2));
  if (((0 < iVar2) &&
      (this_00 = (this->FileWriter).Ptr, this_00 != (FArchiveFileWriterGeneric *)0x0)) &&
     ((this_00->_padding_ & 0x200) == 0)) {
    FArchiveFileWriterGeneric::Serialize(this_00,param_1,(longlong)iVar2);
  }
  return iVar2;
}

// Run @ 14d3a6b80

uint __thiscall UE::Trace::FDirectSocketStream::Run(FDirectSocketStream *this)

{
  Accept((FDirectSocketStream *)&this[-1].ConnectionEvent);
  return 0;
}

// StartListening @ 14d3a86a0

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall
UE::Trace::FDirectSocketStream::StartListening(FDirectSocketStream *this,ushort param_1)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  longlong lVar4;
  FRunnable *pFVar5;
  ushort uVar6;
  TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *pTVar7;
  uint uVar8;
  longlong local_18 [2];
  
  uVar6 = 0x7c2;
  if (param_1 != 0) {
    uVar6 = param_1;
  }
  bVar2 = CreateSocket(this,uVar6);
  pFVar5 = (FRunnable *)0x0;
  if (!bVar2) {
    do {
      if (0xf < (int)pFVar5) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar8 = (int)pFVar5 + 1;
      pFVar5 = (FRunnable *)(ulonglong)uVar8;
      bVar2 = CreateSocket(this,uVar6);
    } while (!bVar2);
    if (0xf < (int)uVar8) {
      return 0;
    }
  }
  pFVar5 = (FRunnable *)&this->_padding_;
  if (this == (FDirectSocketStream *)0x0) {
    pFVar5 = (FRunnable *)0x0;
  }
  pFVar3 = FRunnableThread::Create
                     (pFVar5,L"FDirectSocketStreamListener",0,TPri_Normal,0xffffffffffffffff,None);
  pTVar7 = &this->ListeningThread;
  if (pTVar7 == (TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *)local_18) {
    if (pFVar3 == (FRunnableThread *)0x0) goto LAB_14d3a8758;
    lVar4 = pFVar3->_padding_;
  }
  else {
    pFVar1 = pTVar7->Ptr;
    pTVar7->Ptr = pFVar3;
    if (pFVar1 == (FRunnableThread *)0x0) goto LAB_14d3a8758;
    lVar4 = pFVar1->_padding_;
    pFVar3 = pFVar1;
  }
  (**(code **)(lVar4 + 0x30))(pFVar3,1);
LAB_14d3a8758:
  if (4 < (byte)LogCore._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  return uVar6;
}

// Stop @ 14d3a8800

void __thiscall UE::Trace::FDirectSocketStream::Stop(FDirectSocketStream *this)

{
  if (this->_padding_ != 0) {
    asio::basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor>::close
              ((basic_socket_acceptor<asio::ip::tcp,asio::any_io_executor> *)
               (this->_padding_ + 0x18));
    return;
  }
  return;
}

// WaitUntilReady @ 14d3a8bd0

bool __thiscall UE::Trace::FDirectSocketStream::WaitUntilReady(FDirectSocketStream *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d3a8bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->ConnectionEvent->_padding_ + 0x20))(this->ConnectionEvent,0,1);
  return (bool)uVar1;
}

