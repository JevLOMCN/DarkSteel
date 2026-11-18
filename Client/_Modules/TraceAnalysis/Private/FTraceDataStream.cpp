// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// FTraceDataStream @ 14d38fe80

FTraceDataStream * __thiscall
UE::Trace::FTraceDataStream::FTraceDataStream
          (FTraceDataStream *this,basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *param_1)

{
  SOCKET s;
  int iVar1;
  error_category *peVar2;
  char local_res8 [8];
  error_code local_18;
  
  this->_padding_ = (longlong)&___7FTraceDataStream_Trace_UE__6B_;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)&this->Socket,
             (io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)param_1);
  s = *(SOCKET *)&(this->Socket).field_0x8;
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '@';
  local_res8[3] = '\0';
  if (s == 0xffffffffffffffff) {
    local_18._Myval = 0x2719;
    local_18._Mycat = asio::error::get_system_category();
  }
  else {
    iVar1 = setsockopt(s,0xffff,0x1002,local_res8,4);
    if (iVar1 == 0) {
      local_18._0_8_ = (ulonglong)(uint)local_18._4_4_ << 0x20;
      local_18._Mycat =
           (error_category *)
           &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
            ::__l2::_Static;
    }
    else {
      peVar2 = asio::error::get_system_category();
      local_18._Myval = WSAGetLastError();
      local_18._Mycat = peVar2;
    }
  }
  asio::detail::throw_error(&local_18,"set_option");
  return this;
}

// ~FTraceDataStream @ 14d3928f0

void __thiscall UE::Trace::FTraceDataStream::~FTraceDataStream(FTraceDataStream *this)

{
  SOCKET s;
  int iVar1;
  error_category *peVar2;
  error_code local_18;
  
  this->_padding_ = (longlong)&___7FTraceDataStream_Trace_UE__6B_;
  s = *(SOCKET *)&(this->Socket).field_0x8;
  if (s == 0xffffffffffffffff) {
    local_18._Myval = 0x2719;
    local_18._Mycat = asio::error::get_system_category();
  }
  else {
    iVar1 = ::shutdown(s,0);
    if (iVar1 == 0) {
      local_18._0_8_ = (ulonglong)(uint)local_18._4_4_ << 0x20;
      local_18._Mycat =
           (error_category *)
           &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
            ::__l2::_Static;
    }
    else {
      peVar2 = asio::error::get_system_category();
      local_18._Myval = WSAGetLastError();
      local_18._Mycat = peVar2;
    }
  }
  asio::detail::throw_error(&local_18,"shutdown");
  asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
            ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)&this->Socket);
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)&this->Socket);
  return;
}

// Close @ 14d398470

void __thiscall UE::Trace::FTraceDataStream::Close(FTraceDataStream *this)

{
  SOCKET s;
  int iVar1;
  error_category *peVar2;
  error_code local_18;
  
  s = *(SOCKET *)&(this->Socket).field_0x8;
  if (s == 0xffffffffffffffff) {
    local_18._Myval = 0x2719;
    local_18._Mycat = asio::error::get_system_category();
  }
  else {
    iVar1 = ::shutdown(s,0);
    if (iVar1 == 0) {
      local_18._0_8_ = (ulonglong)(uint)local_18._4_4_ << 0x20;
      local_18._Mycat =
           (error_category *)
           &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
            ::__l2::_Static;
    }
    else {
      peVar2 = asio::error::get_system_category();
      local_18._Myval = WSAGetLastError();
      local_18._Mycat = peVar2;
    }
  }
  asio::detail::throw_error(&local_18,"shutdown");
  asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
            ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)&this->Socket);
  return;
}

// IsOpen @ 14d3a06e0

bool __thiscall UE::Trace::FTraceDataStream::IsOpen(FTraceDataStream *this)

{
  return *(longlong *)&(this->Socket).field_0x8 != -1;
}

// Read @ 14d3a5da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall UE::Trace::FTraceDataStream::Read(FTraceDataStream *this,void *param_1,uint param_2)

{
  SOCKET *pSVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  SOCKET *pSVar9;
  SOCKET SVar10;
  SOCKET SVar11;
  SOCKET SVar12;
  SOCKET SVar13;
  error_category *peVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  SOCKET *pSVar18;
  error_category *peVar19;
  longlong lVar20;
  fd_set *pfVar21;
  int iVar22;
  byte bVar23;
  undefined1 auStackY_4c8 [32];
  error_code local_498;
  timeval local_488;
  _WSABUF local_480;
  uint uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined4 local_458 [2];
  undefined8 uStack_450;
  fd_set local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  uVar3 = *(undefined8 *)&(this->Socket).field_0x8;
  if ((this->Socket).field_0x44 == '\0') {
    local_480.buf._4_4_ = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    local_464 = 0;
    local_45c = 0;
  }
  uStack_450 = uVar3;
  local_458[0] = 1;
  iVar22 = 0;
  local_488.tv_sec = 1;
  local_488.tv_usec = 0;
  do {
    lVar20 = 4;
    pSVar18 = (SOCKET *)local_458;
    pfVar21 = &local_248;
    do {
      pSVar9 = pfVar21->fd_array;
      SVar10 = pSVar18[1];
      SVar12 = pSVar18[2];
      SVar13 = pSVar18[3];
      pSVar1 = pSVar18 + 0x10;
      *(SOCKET *)pfVar21 = *pSVar18;
      pfVar21->fd_array[0] = SVar10;
      SVar10 = pSVar18[4];
      SVar11 = pSVar18[5];
      pfVar21->fd_array[1] = SVar12;
      pfVar21->fd_array[2] = SVar13;
      SVar12 = pSVar18[6];
      SVar13 = pSVar18[7];
      pfVar21->fd_array[3] = SVar10;
      pfVar21->fd_array[4] = SVar11;
      SVar10 = pSVar18[8];
      SVar11 = pSVar18[9];
      pfVar21->fd_array[5] = SVar12;
      pfVar21->fd_array[6] = SVar13;
      SVar12 = pSVar18[10];
      SVar13 = pSVar18[0xb];
      pfVar21->fd_array[7] = SVar10;
      pfVar21->fd_array[8] = SVar11;
      SVar10 = pSVar18[0xc];
      uVar5 = *(undefined4 *)((longlong)pSVar18 + 100);
      SVar11 = pSVar18[0xd];
      uVar6 = *(undefined4 *)((longlong)pSVar18 + 0x6c);
      pfVar21->fd_array[9] = SVar12;
      pfVar21->fd_array[10] = SVar13;
      SVar12 = pSVar18[0xe];
      uVar7 = *(undefined4 *)((longlong)pSVar18 + 0x74);
      SVar13 = pSVar18[0xf];
      uVar8 = *(undefined4 *)((longlong)pSVar18 + 0x7c);
      *(int *)(pfVar21->fd_array + 0xb) = (int)SVar10;
      *(undefined4 *)((longlong)pfVar21->fd_array + 0x5c) = uVar5;
      *(int *)(pfVar21->fd_array + 0xc) = (int)SVar11;
      *(undefined4 *)((longlong)pfVar21->fd_array + 100) = uVar6;
      *(int *)(pfVar21->fd_array + 0xd) = (int)SVar12;
      *(undefined4 *)((longlong)pfVar21->fd_array + 0x6c) = uVar7;
      *(int *)(pfVar21->fd_array + 0xe) = (int)SVar13;
      *(undefined4 *)((longlong)pfVar21->fd_array + 0x74) = uVar8;
      lVar20 = lVar20 + -1;
      pSVar18 = pSVar1;
      pfVar21 = (fd_set *)(pSVar9 + 0xf);
    } while (lVar20 != 0);
    pSVar9[0xf] = *pSVar1;
    iVar15 = select((int)uVar3 + 1,&local_248,(fd_set *)0x0,(fd_set *)0x0,&local_488);
    if (iVar15 < 0) {
      (**(code **)(this->_padding_ + 0x10))(this);
      return -1;
    }
  } while (iVar15 == 0);
  bVar2 = (this->Socket).field_0x10;
  uVar4 = *(ulong64 *)&(this->Socket).field_0x8;
  local_498._Myval = 0;
  local_498._Mycat =
       (error_category *)
       &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
        ::__l2::_Static;
  uStack_46c = 0;
  local_480.len = param_2;
  uStack_470 = param_2;
  if (uVar4 == 0xffffffffffffffff) {
    local_498._Myval = 0x2719;
    local_480.buf = param_1;
    asio::error::get_system_category();
    iVar16 = 0;
    iVar15 = local_498._Myval;
  }
  else {
    bVar23 = bVar2 & 0x10;
    if ((param_2 == 0) && (bVar23 != 0)) {
      return 0;
    }
    while( true ) {
      local_480.buf = param_1;
      iVar16 = asio::detail::socket_ops::recv(uVar4,&local_480,1,0,&local_498);
      iVar15 = local_498._Myval;
      if ((bVar23 != 0) && (iVar16 == 0)) break;
      if ((-1 < iVar16) || (iVar16 = 0, (bVar2 & 1) != 0)) goto LAB_14d3a5fae;
      peVar19 = asio::error::get_system_category();
      peVar14 = local_498._Mycat;
      if ((((local_498._Mycat)->_Addr)._Num != (peVar19->_Addr)._Num) || (iVar15 != 0x2733)) {
        peVar19 = asio::error::get_system_category();
        iVar16 = iVar22;
        if (((peVar14->_Addr)._Num != (peVar19->_Addr)._Num) || (iVar15 != 0x4d5))
        goto LAB_14d3a5fae;
      }
      iVar17 = asio::detail::socket_ops::poll_read(uVar4,'\0',-1,&local_498);
      iVar16 = iVar22;
      iVar15 = local_498._Myval;
      param_1 = local_480.buf;
      if (iVar17 < 0) goto LAB_14d3a5fae;
    }
    local_498._Myval = 2;
    asio::error::get_misc_category();
    iVar16 = iVar22;
    iVar15 = local_498._Myval;
  }
LAB_14d3a5fae:
  if (iVar15 != 0) {
    (**(code **)(this->_padding_ + 0x10))(this);
    iVar16 = -1;
  }
  return iVar16;
}

