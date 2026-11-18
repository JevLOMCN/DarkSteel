// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 22

// FStoreCborClient @ 14d38fc30

FStoreCborClient * __thiscall
UE::Trace::FStoreCborClient::FStoreCborClient(FStoreCborClient *this,io_context *param_1)

{
  this->IoContext = param_1;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)&this->Socket,0,0,param_1);
  (this->Response).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Response).Buffer.ArrayNum = 0;
  (this->Response).Buffer.ArrayMax = 0;
  (this->Host).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Host).Data.ArrayNum = 0;
  (this->Host).Data.ArrayMax = 0;
  return this;
}

// ~FStoreCborClient @ 14d392600

void __thiscall UE::Trace::FStoreCborClient::~FStoreCborClient(FStoreCborClient *this)

{
  FScriptContainerElement *pFVar1;
  
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
  return;
}

// Close @ 14d398460

void __thiscall UE::Trace::FStoreCborClient::Close(FStoreCborClient *this)

{
  asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
            ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)&this->Socket);
  return;
}

// Communicate @ 14d398520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::Communicate(FStoreCborClient *this,FPayload *param_1)

{
  byte bVar1;
  ulong64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  error_category *peVar6;
  error_category *peVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *this_00;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FStoreCborClient *local_res8;
  FPayload *local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  ulonglong in_stack_fffffffffffffec8;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  uint uStack_104;
  undefined8 uStack_100;
  int local_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FScriptContainerElement *local_d8;
  error_category *peStack_d0;
  int local_c8 [2];
  uchar *local_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint uStack_94;
  error_category *peStack_90;
  uint local_88 [2];
  basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  error_category *peStack_70;
  undefined4 local_68 [2];
  longlong local_60;
  ulonglong local_58;
  
  local_80 = &this->Socket;
  if (*(longlong *)&(this->Socket).field_0x8 == -1) {
    return false;
  }
  local_88[0] = param_1->Size;
  uVar13 = 0;
  local_118 = (FScriptContainerElement *)((ulonglong)local_118 & 0xffffffff00000000);
  pFVar12 = local_118;
  uStack_110 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                ::__l2::_Static;
  local_118._0_4_ = 0;
  iVar5 = (int)local_118;
  local_res8 = this;
  local_res10 = param_1;
  local_118 = pFVar12;
  do {
    if (iVar5 != 0) break;
    uVar2 = *(ulong64 *)&(this->Socket).field_0x8;
    bVar1 = (this->Socket).field_0x10;
    uVar9 = uVar13;
    if (3 < uVar13) {
      uVar9 = 4;
    }
    local_c0 = (uchar *)((longlong)local_88 + uVar9);
    local_b8 = 0x10000;
    if (4 - uVar9 < 0x10000) {
      local_b8 = 4 - uVar9;
    }
    local_c8[0] = (int)local_b8;
    if (uVar2 == 0xffffffffffffffff) {
      local_d8 = (FScriptContainerElement *)CONCAT44(local_d8._4_4_,0x2719);
      peStack_d0 = asio::error::get_system_category();
      iVar5 = (int)local_d8;
    }
    else if ((local_b8 == 0) && ((bVar1 & 0x10) != 0)) {
      iVar5 = 0;
    }
    else {
      do {
        iVar5 = 0;
        in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffffff00000000;
        local_res20[0] = 0;
        iVar3 = WSASend(uVar2,local_c8,1,local_res20,in_stack_fffffffffffffec8,0,0);
        peVar6 = asio::error::get_system_category();
        iVar4 = WSAGetLastError();
        local_e8 = (FScriptContainerElement *)CONCAT44(local_e8._4_4_,iVar4);
        local_118 = local_e8;
        uStack_110 = (_System_error_category *)peVar6;
        uStack_e0 = peVar6;
        if (iVar4 == 0x40) {
          local_a8 = (uchar *)CONCAT44(local_a8._4_4_,0x2746);
          peVar6 = asio::error::get_system_category();
          iVar4 = 0x2746;
          uStack_a0._0_4_ = SUB84(peVar6,0);
          uStack_a0._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
          iVar14 = (undefined4)local_a8;
          uVar15 = local_a8._4_4_;
          uVar16 = (undefined4)uStack_a0;
          uVar17 = uStack_a0._4_4_;
          uStack_a0 = peVar6;
LAB_14d3986af:
          local_118 = (FScriptContainerElement *)CONCAT44(uVar15,iVar14);
          uStack_110 = (_System_error_category *)CONCAT44(uVar17,uVar16);
        }
        else if (iVar4 == 0x4d2) {
          local_108 = 0x274d;
          peVar6 = asio::error::get_system_category();
          iVar4 = 0x274d;
          uStack_100._0_4_ = SUB84(peVar6,0);
          uStack_100._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
          iVar14 = local_108;
          uVar15 = uStack_104;
          uVar16 = (undefined4)uStack_100;
          uVar17 = uStack_100._4_4_;
          uStack_100 = (_System_error_category *)peVar6;
          goto LAB_14d3986af;
        }
        this = local_res8;
        if (iVar3 == 0) {
          lVar8 = (longlong)local_res20[0];
          local_118 = (FScriptContainerElement *)((ulonglong)local_118 & 0xffffffff00000000);
          if (-1 < local_res20[0]) goto LAB_14d398740;
        }
        else {
          iVar5 = (int)local_118;
        }
        iVar14 = 0;
        if (iVar3 != 0) {
          iVar14 = iVar4;
        }
        if (((bVar1 & 1) != 0) ||
           (((peVar7 = asio::error::get_system_category(), peVar6 = (error_category *)uStack_110,
             (((error_category *)uStack_110)->_Addr)._Num != (peVar7->_Addr)._Num ||
             (iVar14 != 0x2733)) &&
            ((peVar7 = asio::error::get_system_category(), this = local_res8,
             (peVar6->_Addr)._Num != (peVar7->_Addr)._Num || (iVar5 != 0x4d5))))))
        goto LAB_14d39873d;
        iVar5 = asio::detail::socket_ops::poll_write(uVar2,'\0',-1,(error_code *)&local_118);
      } while (-1 < iVar5);
      this = local_res8;
      iVar5 = (int)local_118;
    }
LAB_14d39873d:
    lVar8 = 0;
LAB_14d398740:
    uVar13 = uVar13 + lVar8;
  } while (uVar13 < 4);
  uVar13 = 0;
  local_108 = 0;
  uStack_100 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                ::__l2::_Static;
  local_118 = (FScriptContainerElement *)((ulonglong)uStack_104 << 0x20);
  uVar9 = (ulonglong)local_res10->Size;
  local_a8 = local_res10->Data;
  uStack_110 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                ::__l2::_Static;
  iVar5 = 0;
  if (uVar9 != 0) {
    do {
      if (iVar5 != 0) break;
      uVar2 = *(ulong64 *)&(this->Socket).field_0x8;
      bVar1 = (this->Socket).field_0x10;
      uVar10 = uVar9;
      if (uVar13 < uVar9) {
        uVar10 = uVar13;
      }
      local_c0 = local_a8 + uVar10;
      local_b8 = 0x10000;
      if (uVar9 - uVar10 < 0x10000) {
        local_b8 = uVar9 - uVar10;
      }
      local_c8[0] = (int)local_b8;
      if (uVar2 == 0xffffffffffffffff) {
        local_108 = 0x2719;
        uStack_100 = (_System_error_category *)asio::error::get_system_category();
        iVar5 = local_108;
      }
      else if ((local_b8 == 0) && ((bVar1 & 0x10) != 0)) {
        iVar5 = 0;
      }
      else {
        do {
          iVar5 = 0;
          in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffffff00000000;
          local_res20[0] = 0;
          iVar3 = WSASend(uVar2,local_c8,1,local_res20,in_stack_fffffffffffffec8,0,0);
          peVar6 = asio::error::get_system_category();
          iVar4 = WSAGetLastError();
          local_d8 = (FScriptContainerElement *)CONCAT44(local_d8._4_4_,iVar4);
          local_118 = local_d8;
          uStack_110 = (_System_error_category *)peVar6;
          peStack_d0 = peVar6;
          if (iVar4 == 0x40) {
            local_e8 = (FScriptContainerElement *)CONCAT44(local_e8._4_4_,0x2746);
            peVar6 = asio::error::get_system_category();
            iVar4 = 0x2746;
            uStack_e0._0_4_ = SUB84(peVar6,0);
            uStack_e0._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
            iVar14 = (int)local_e8;
            uVar15 = local_e8._4_4_;
            uVar16 = (undefined4)uStack_e0;
            uVar17 = uStack_e0._4_4_;
            uStack_e0 = peVar6;
LAB_14d39889f:
            local_118 = (FScriptContainerElement *)CONCAT44(uVar15,iVar14);
            uStack_110 = (_System_error_category *)CONCAT44(uVar17,uVar16);
          }
          else if (iVar4 == 0x4d2) {
            local_f8 = 0x274d;
            peVar6 = asio::error::get_system_category();
            iVar4 = 0x274d;
            uStack_f0._0_4_ = SUB84(peVar6,0);
            uStack_f0._4_4_ = (undefined4)((ulonglong)peVar6 >> 0x20);
            iVar14 = local_f8;
            uVar15 = uStack_f4;
            uVar16 = (undefined4)uStack_f0;
            uVar17 = uStack_f0._4_4_;
            uStack_f0 = (_System_error_category *)peVar6;
            goto LAB_14d39889f;
          }
          this = local_res8;
          if (iVar3 == 0) {
            lVar8 = (longlong)local_res20[0];
            local_118 = (FScriptContainerElement *)((ulonglong)local_118 & 0xffffffff00000000);
            if (-1 < local_res20[0]) goto LAB_14d398930;
          }
          else {
            iVar5 = (int)local_118;
          }
          iVar14 = 0;
          if (iVar3 != 0) {
            iVar14 = iVar4;
          }
          if (((bVar1 & 1) != 0) ||
             (((peVar7 = asio::error::get_system_category(), peVar6 = (error_category *)uStack_110,
               (((error_category *)uStack_110)->_Addr)._Num != (peVar7->_Addr)._Num ||
               (iVar14 != 0x2733)) &&
              ((peVar7 = asio::error::get_system_category(), this = local_res8,
               (peVar6->_Addr)._Num != (peVar7->_Addr)._Num || (iVar5 != 0x4d5))))))
          goto LAB_14d39892d;
          iVar5 = asio::detail::socket_ops::poll_write(uVar2,'\0',-1,(error_code *)&local_118);
        } while (-1 < iVar5);
        this = local_res8;
        iVar5 = (int)local_118;
      }
LAB_14d39892d:
      lVar8 = 0;
LAB_14d398930:
      uVar13 = uVar13 + lVar8;
    } while (uVar13 < uVar9);
  }
  uVar13 = 0;
  this_00 = &this->Socket;
  if (iVar5 == 0) {
    local_f8 = 0;
    uStack_f0 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                 ::__l2::_Static;
    local_118 = (FScriptContainerElement *)((ulonglong)uStack_f4 << 0x20);
    uStack_110 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                  ::__l2::_Static;
    iVar5 = 0;
    local_res18[0] = 0;
    do {
      lVar8 = 0;
      if (iVar5 != 0) break;
      uVar2 = *(ulong64 *)&(this->Socket).field_0x8;
      bVar1 = (this->Socket).field_0x10;
      uVar9 = 4;
      if (uVar13 < 4) {
        uVar9 = uVar13;
      }
      local_c0 = (uchar *)((longlong)local_res18 + uVar9);
      local_b8 = 0x10000;
      if (4 - uVar9 < 0x10000) {
        local_b8 = 4 - uVar9;
      }
      local_c8[0] = (int)local_b8;
      if (uVar2 == 0xffffffffffffffff) {
        local_f8 = 0x2719;
        uStack_f0 = (_System_error_category *)asio::error::get_system_category();
        iVar5 = local_f8;
      }
      else {
        bVar11 = bVar1 & 0x10;
        if ((local_b8 == 0) && (bVar11 != 0)) {
          iVar5 = 0;
          this = local_res8;
        }
        else {
          do {
            local_res20[0] = 0;
            local_a8 = (uchar *)((ulonglong)local_a8 & 0xffffffff00000000);
            iVar5 = WSARecv(uVar2,local_c8,1,local_res20,&local_a8,0,0);
            peVar6 = asio::error::get_system_category();
            local_108 = WSAGetLastError();
            local_118 = (FScriptContainerElement *)CONCAT44(uStack_104,local_108);
            uStack_110 = (_System_error_category *)peVar6;
            uStack_100 = (_System_error_category *)peVar6;
            if (local_108 == 0x40) {
              local_d8 = (FScriptContainerElement *)CONCAT44(local_d8._4_4_,0x2746);
              peStack_d0 = asio::error::get_system_category();
              local_118 = local_d8;
              uStack_110 = (_System_error_category *)peStack_d0;
LAB_14d398aa9:
              if (iVar5 == 0) goto LAB_14d398aba;
              iVar5 = (int)local_118;
              iVar3 = -1;
            }
            else {
              if (local_108 == 0x4d2) {
                local_e8 = (FScriptContainerElement *)CONCAT44(local_e8._4_4_,0x274d);
                uStack_e0 = asio::error::get_system_category();
                local_118 = local_e8;
                uStack_110 = (_System_error_category *)uStack_e0;
                goto LAB_14d398aa9;
              }
              if ((local_108 != 0x2738) && (local_108 != 0xea)) goto LAB_14d398aa9;
LAB_14d398aba:
              iVar5 = 0;
              local_118 = (FScriptContainerElement *)((ulonglong)local_118 & 0xffffffff00000000);
              iVar3 = local_res20[0];
            }
            if ((bVar11 != 0) && (iVar3 == 0)) {
              local_98 = 2;
              peStack_90 = asio::error::get_misc_category();
              lVar8 = 0;
              this = local_res8;
              iVar5 = local_98;
              goto LAB_14d398b57;
            }
            if (-1 < iVar3) {
              lVar8 = (longlong)iVar3;
              this = local_res8;
              goto LAB_14d398b57;
            }
            if (((bVar1 & 1) != 0) ||
               (((peVar7 = asio::error::get_system_category(), peVar6 = (error_category *)uStack_110
                 , (((error_category *)uStack_110)->_Addr)._Num != (peVar7->_Addr)._Num ||
                 (iVar5 != 0x2733)) &&
                ((peVar7 = asio::error::get_system_category(),
                 (peVar6->_Addr)._Num != (peVar7->_Addr)._Num || (iVar5 != 0x4d5)))))) {
              lVar8 = 0;
              this = local_res8;
              goto LAB_14d398b57;
            }
            iVar5 = asio::detail::socket_ops::poll_read(uVar2,'\0',-1,(error_code *)&local_118);
            lVar8 = 0;
          } while (-1 < iVar5);
          this = local_res8;
          iVar5 = (int)local_118;
        }
      }
LAB_14d398b57:
      uVar13 = uVar13 + lVar8;
    } while (uVar13 < 4);
    this_00 = &this->Socket;
    if ((iVar5 == 0) && (local_res18[0] != 0)) {
      pFVar12 = (FScriptContainerElement *)&this->Response;
      local_d8 = pFVar12;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pFVar12,local_res18[0],No);
      uVar9 = (ulonglong)local_res18[0];
      peStack_90 = (error_category *)
                   &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                    ::__l2::_Static;
      uVar13 = 0;
      local_e8 = (((FResponse *)pFVar12)->Buffer).AllocatorInstance.Data;
      local_118 = (FScriptContainerElement *)((ulonglong)uStack_94 << 0x20);
      uStack_110 = &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                    ::__l2::_Static;
      iVar5 = 0;
      local_98 = 0;
      if (uVar9 != 0) {
        iVar5 = 0;
        do {
          lVar8 = 0;
          this_00 = local_80;
          if (iVar5 != 0) goto LAB_14d398dc0;
          uVar2 = *(ulong64 *)&(this->Socket).field_0x8;
          bVar1 = (this->Socket).field_0x10;
          uVar10 = uVar9;
          if (uVar13 < uVar9) {
            uVar10 = uVar13;
          }
          local_60 = (longlong)
                     &(((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_e8->field_0x0)->
                      AllocatorInstance).Data + uVar10;
          local_58 = 0x10000;
          if (uVar9 - uVar10 < 0x10000) {
            local_58 = uVar9 - uVar10;
          }
          local_68[0] = (undefined4)local_58;
          if (uVar2 == 0xffffffffffffffff) {
            local_98 = 0x2719;
            asio::error::get_system_category();
            iVar5 = local_98;
          }
          else {
            bVar11 = bVar1 & 0x10;
            if ((local_58 == 0) && (bVar11 != 0)) {
              iVar5 = 0;
              this = local_res8;
            }
            else {
              do {
                local_res20[0] = 0;
                local_a8 = (uchar *)((ulonglong)local_a8 & 0xffffffff00000000);
                iVar5 = WSARecv(uVar2,local_68,1,local_res20,&local_a8,0,0);
                peVar6 = asio::error::get_system_category();
                local_f8 = WSAGetLastError();
                local_118 = (FScriptContainerElement *)CONCAT44(uStack_f4,local_f8);
                uStack_110 = (_System_error_category *)peVar6;
                uStack_f0 = (_System_error_category *)peVar6;
                if (local_f8 == 0x40) {
                  local_108 = 0x2746;
                  uStack_100 = (_System_error_category *)asio::error::get_system_category();
                  local_118 = (FScriptContainerElement *)CONCAT44(uStack_104,local_108);
                  uStack_110 = uStack_100;
LAB_14d398cf9:
                  if (iVar5 == 0) goto LAB_14d398d0a;
                  iVar5 = (int)local_118;
                  iVar3 = -1;
                }
                else {
                  if (local_f8 == 0x4d2) {
                    local_78 = 0x274d;
                    peStack_70 = asio::error::get_system_category();
                    local_118 = (FScriptContainerElement *)CONCAT44(uStack_74,local_78);
                    uStack_110 = (_System_error_category *)peStack_70;
                    goto LAB_14d398cf9;
                  }
                  if ((local_f8 != 0x2738) && (local_f8 != 0xea)) goto LAB_14d398cf9;
LAB_14d398d0a:
                  iVar5 = 0;
                  local_118 = (FScriptContainerElement *)((ulonglong)local_118 & 0xffffffff00000000)
                  ;
                  iVar3 = local_res20[0];
                }
                if ((bVar11 != 0) && (iVar3 == 0)) {
                  local_c8[0] = 2;
                  asio::error::get_misc_category();
                  lVar8 = 0;
                  this = local_res8;
                  iVar5 = local_c8[0];
                  goto LAB_14d398da3;
                }
                if (-1 < iVar3) {
                  lVar8 = (longlong)iVar3;
                  this = local_res8;
                  goto LAB_14d398da3;
                }
                if (((bVar1 & 1) != 0) ||
                   (((peVar7 = asio::error::get_system_category(),
                     peVar6 = (error_category *)uStack_110,
                     (((error_category *)uStack_110)->_Addr)._Num != (peVar7->_Addr)._Num ||
                     (iVar5 != 0x2733)) &&
                    ((peVar7 = asio::error::get_system_category(),
                     (peVar6->_Addr)._Num != (peVar7->_Addr)._Num || (iVar5 != 0x4d5)))))) {
                  lVar8 = 0;
                  this = local_res8;
                  goto LAB_14d398da3;
                }
                iVar5 = asio::detail::socket_ops::poll_read(uVar2,'\0',-1,(error_code *)&local_118);
                lVar8 = 0;
              } while (-1 < iVar5);
              this = local_res8;
              iVar5 = (int)local_118;
            }
          }
LAB_14d398da3:
          uVar13 = uVar13 + lVar8;
          pFVar12 = local_d8;
        } while (uVar13 < uVar9);
      }
      this_00 = local_80;
      if (iVar5 == 0) {
        iVar5 = FResponse::GetValue<int,_UE::Trace::FResponse::GetInt32Checked_::__l2::<lambda_1>_>
                          ((FResponse *)pFVar12,"$status",0,(<lambda_1> *)&local_res8);
        return iVar5 == 200;
      }
    }
  }
LAB_14d398dc0:
  asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::close
            ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)this_00);
  return false;
}

// Connect @ 14d3992d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Trace::FStoreCborClient::Connect(FStoreCborClient *this,wchar_t *param_1,ushort param_2)

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
  ushort uVar14;
  bool bVar15;
  undefined1 auStackY_218 [32];
  noop_deleter local_1e8;
  undefined1 local_1d8 [16];
  ulong64 local_1c8;
  undefined8 local_1b8 [2];
  basic_string_view<char,std::char_traits<char>_> local_1a8;
  char *local_198;
  error_category *local_190;
  undefined1 local_180 [20];
  undefined8 uStack_16c;
  undefined8 local_164;
  basic_resolver_iterator<asio::ip::tcp> local_158;
  FScriptContainerElement local_138 [128];
  ForAnyElementType local_b8;
  FScriptContainerElement *local_b0;
  int local_a8;
  io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor> local_98;
  char local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar14 = 0x7c5;
  if (param_2 != 0) {
    uVar14 = param_2;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    local_b0 = (FScriptContainerElement *)0x0;
    local_a8 = 0;
  }
  else {
    sVar10 = wcslen(param_1);
    local_a8 = Core::Private::GetConvertedLength((uchar *)0x0,param_1,(int)sVar10);
    uVar1 = local_a8 + 1;
    uVar13 = uVar1;
    if (uVar1 < 0x81) {
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14d399358;
      }
    }
    else {
LAB_14d399358:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar13,1);
    }
    local_b0 = local_138;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      local_b0 = local_b8.Data;
    }
    Core::Private::Convert((uchar *)local_b0,uVar1,param_1,(int)sVar10 + 1);
  }
  TCString<char>::SprintfImpl(local_48,"%d");
  asio::detail::io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>
  ::
  io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            (&local_98,0,0,this->IoContext);
  sVar10 = strlen(local_48);
  pFVar8 = local_b0;
  local_1d8._8_8_ = strlen((char *)local_b0);
  local_1a8._Mydata = local_48;
  local_1b8[0] = CONCAT44(local_1b8[0]._4_4_,2);
  local_1d8._0_8_ = pFVar8;
  local_1a8._Mysize = sVar10;
  asio::ip::basic_resolver<asio::ip::tcp,asio::any_io_executor>::resolve
            ((basic_resolver<asio::ip::tcp,asio::any_io_executor> *)&local_98,
             (basic_resolver_results<asio::ip::tcp> *)&local_198,(tcp *)local_1b8,
             (basic_string_view<char,std::char_traits<char>_> *)local_1d8,&local_1a8,0);
  local_1a8._Mysize =
       (ulong64)&`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
                 ::__l2::_Static;
  local_1a8._Mydata = (char *)((ulonglong)local_1a8._Mydata & 0xffffffff00000000);
  FileHandle = (HANDLE)WSASocketW(2,1,6,0);
  uStack_16c = 0;
  local_1b8[0] = 0;
  local_164 = 0;
  local_180._12_8_ = 2;
  if (*(longlong *)&(this->Socket).field_0x8 == -1) {
    pvVar11 = CreateIoCompletionPort
                        (FileHandle,
                         *(HANDLE *)(*(longlong *)(*(longlong *)&this->Socket + 0x30) + 0x28),0,0);
    if (pvVar11 == (HANDLE)0x0) {
      DVar9 = GetLastError();
      local_1d8._0_4_ = DVar9;
      local_1d8._8_8_ = asio::error::get_system_category();
      if (DVar9 != 0) goto LAB_14d399548;
    }
    *(HANDLE *)&(this->Socket).field_0x8 = FileHandle;
    (this->Socket).field_0x10 = 0x10;
    std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
              ((shared_ptr<void> *)&(this->Socket).field_0x18,(void *)0x0,local_1e8);
    *(undefined4 *)&(this->Socket).field_0x40 = 2;
    (this->Socket).field_0x44 = 0;
    local_1d8._0_8_ = local_1d8._0_8_ & 0xffffffff00000000;
    local_1d8._8_8_ =
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    *(undefined8 *)&(this->Socket).field_0x48 = local_180._12_8_;
    *(undefined8 *)&(this->Socket).field_0x50 = uStack_16c;
    *(undefined8 *)&(this->Socket).field_0x58 = local_164;
    *(int *)&(this->Socket).field_0x60 = (int)local_1b8[0];
  }
  else {
    local_1d8._0_4_ = 1;
    local_1d8._8_8_ = asio::error::get_misc_category();
  }
LAB_14d399548:
  asio::detail::throw_error((error_code *)local_1d8,"assign");
  local_158.index_ = 0;
  local_158.values_._0_8_ = 0;
  local_158.values_._8_8_ = 0;
  if (local_190 != (error_category *)0x0) {
    LOCK();
    *(int *)&local_190->_Addr = *(int *)&local_190->_Addr + 1;
    UNLOCK();
  }
  local_1d8._0_8_ = local_198;
  local_1d8._8_8_ = local_190;
  local_1c8 = 0;
  pbVar12 = asio::
            connect<asio::ip::tcp,asio::any_io_executor,asio::ip::basic_resolver_iterator<asio::ip::tcp>,asio::detail::default_connect_condition>
                      ((basic_resolver_iterator<asio::ip::tcp> *)local_180,
                       (basic_socket<asio::ip::tcp,asio::any_io_executor> *)&this->Socket,
                       (basic_resolver_iterator<asio::ip::tcp> *)local_1d8,&local_158,
                       (default_connect_condition)local_1e8,(error_code *)&local_1a8);
  bVar15 = (int)local_1a8._Mydata == 0;
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
    ::FString::operator=(&this->Host,param_1);
    this->Port = uVar14;
  }
  if (local_190 != (error_category *)0x0) {
    LOCK();
    p_Var4 = &local_190->_Addr;
    iVar5 = *(int *)p_Var4;
    *(int *)p_Var4 = *(int *)p_Var4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)local_190->_padding_)(local_190);
      LOCK();
      piVar3 = (int *)((longlong)&local_190->_Addr + 4);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(local_190->_padding_ + 8))(local_190);
      }
    }
  }
  asio::detail::io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>
  ::~io_object_impl<asio::detail::resolver_service<asio::ip::tcp>,asio::any_io_executor>(&local_98);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return bVar15;
}

// GetResponse @ 14d39d2e0

FResponse * __thiscall UE::Trace::FStoreCborClient::GetResponse(FStoreCborClient *this)

{
  return &this->Response;
}

// GetSessionCount @ 14d39d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetSessionCount(FStoreCborClient *this)

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
  FCborWriter::WriteValue(&local_40,"v1/session/count",0x10);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetSessionInfo @ 14d39d670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetSessionInfo(FStoreCborClient *this,uint param_1)

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
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"index",5);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetSessionInfoById @ 14d39db80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetSessionInfoById(FStoreCborClient *this,uint param_1)

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
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"id",2);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetSessionInfoByTraceGuid @ 14d39deb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall
UE::Trace::FStoreCborClient::GetSessionInfoByTraceGuid(FStoreCborClient *this,FGuid *param_1)

{
  char *_Str;
  bool bVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  size_t sVar3;
  wchar_t *pwVar4;
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
  pwVar4 = L"";
  if (local_228.Size != 0) {
    pwVar4 = (wchar_t *)local_228.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar4);
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
  bVar1 = Communicate(this,&local_228);
  FCborWriter::~FCborWriter(&local_f0);
  if (local_218.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_218.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_218);
  return bVar1;
}

// GetSessionInfoByTraceId @ 14d39e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall
UE::Trace::FStoreCborClient::GetSessionInfoByTraceId(FStoreCborClient *this,uint param_1)

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
  FCborWriter::WriteValue(&local_40,"v1/session/info",0xf);
  FCborWriter::WriteValue(&local_40,"trace_id",8);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetStatus @ 14d39e4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetStatus(FStoreCborClient *this)

{
  bool bVar1;
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
  bVar1 = Communicate(this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  return bVar1;
}

// GetStoreAddress @ 14d39e7b0

uint __thiscall UE::Trace::FStoreCborClient::GetStoreAddress(FStoreCborClient *this)

{
  u_long uVar1;
  error_code local_38;
  data_union local_28;
  
  if (*(longlong *)&(this->Socket).field_0x8 == -1) {
    return 0;
  }
  uVar1 = 0;
  local_38._Mycat =
       (error_category *)
       &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
        ::__l2::_Static;
  local_38._Myval = 0;
  asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
            (*(win_iocp_socket_service<asio::ip::tcp> **)&this->Socket,
             (basic_endpoint<asio::ip::tcp> *)&local_28.base,
             (implementation_type *)&(this->Socket).field_0x8,&local_38);
  asio::detail::throw_error(&local_38,"remote_endpoint");
  if (local_28.base.sa_family == 2) {
    uVar1 = ntohl(local_28.v6.sin6_flowinfo);
    uVar1 = htonl(uVar1);
    uVar1 = ntohl(uVar1);
  }
  return uVar1;
}

// GetStorePort @ 14d39ed70

uint __thiscall UE::Trace::FStoreCborClient::GetStorePort(FStoreCborClient *this)

{
  u_short uVar1;
  error_code local_38;
  basic_endpoint<asio::ip::tcp> local_28;
  
  if (*(longlong *)&(this->Socket).field_0x8 == -1) {
    return 0;
  }
  local_38._Mycat =
       (error_category *)
       &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
        ::__l2::_Static;
  local_38._Myval = 0;
  asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
            (*(win_iocp_socket_service<asio::ip::tcp> **)&this->Socket,&local_28,
             (implementation_type *)&(this->Socket).field_0x8,&local_38);
  asio::detail::throw_error(&local_38,"remote_endpoint");
  uVar1 = ntohs(local_28.impl_.data_.v4.sin_port);
  return (uint)uVar1;
}

// GetTraceCount @ 14d39f650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetTraceCount(FStoreCborClient *this)

{
  bool bVar1;
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
  bVar1 = Communicate(this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  return bVar1;
}

// GetTraceInfo @ 14d39f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetTraceInfo(FStoreCborClient *this,uint param_1)

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
  FCborWriter::WriteValue(&local_40,"v1/trace/info",0xd);
  FCborWriter::WriteValue(&local_40,"index",5);
  FCborWriter::WriteValue(&local_40,(ulonglong)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetTraceInfoById @ 14d39fc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetTraceInfoById(FStoreCborClient *this,uint param_1)

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
  FCborWriter::WriteValue(&local_40,"v1/trace/info",0xd);
  FCborWriter::WriteValue(&local_40,"id",2);
  FCborWriter::WriteValue(&local_40,(longlong)(int)param_1);
  FCborWriter::WriteContainerEnd(&local_40);
  local_178.Data = (uchar *)&local_168.Buffer;
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_178.Data = (uchar *)local_168.Buffer.AllocatorInstance.SecondaryData;
  }
  local_178.Size = local_168.Buffer.ArrayNum;
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// GetVersion @ 14d3a01a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::GetVersion(FStoreCborClient *this)

{
  bool bVar1;
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
  bVar1 = Communicate(this,&local_118);
  FCborWriter::~FCborWriter(&local_40);
  if (local_108.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_108.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  return bVar1;
}

// IsOpen @ 14d3a06d0

bool __thiscall UE::Trace::FStoreCborClient::IsOpen(FStoreCborClient *this)

{
  return *(longlong *)&(this->Socket).field_0x8 != -1;
}

// ReadTrace @ 14d3a6190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FTraceDataStream * __thiscall
UE::Trace::FStoreCborClient::ReadTrace(FStoreCborClient *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  u_long uVar3;
  DWORD DVar4;
  HANDLE FileHandle;
  HANDLE pvVar5;
  FTraceDataStream *this_00;
  FTraceDataStream *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 local_2d0;
  error_code local_2c8;
  noop_deleter local_2b8;
  data_union local_2b0;
  undefined8 local_284;
  char acStack_27c [8];
  undefined8 local_274;
  data_union local_268;
  undefined1 local_248 [64];
  tcp local_208;
  bool local_204;
  data_union local_200 [3];
  TInlineMemoryWriter<128> local_1a8;
  FCborWriter local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_1a8);
  FCborWriter::FCborWriter(&local_80,(FArchive *)&local_1a8,BigEndian);
  FCborWriter::WriteContainerStart(&local_80,Map,-1);
  FCborWriter::WriteValue(&local_80,"$request",8);
  FCborWriter::WriteValue(&local_80,"GET",3);
  FCborWriter::WriteValue(&local_80,"$path",5);
  FCborWriter::WriteValue(&local_80,"v1/trace/read",0xd);
  FCborWriter::WriteValue(&local_80,"id",2);
  FCborWriter::WriteValue(&local_80,(ulonglong)param_1);
  FCborWriter::WriteContainerEnd(&local_80);
  local_2b0._0_8_ = &local_1a8.Buffer;
  if (local_1a8.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_2b0._0_8_ = local_1a8.Buffer.AllocatorInstance.SecondaryData;
  }
  local_2b0._8_4_ = local_1a8.Buffer.ArrayNum;
  bVar1 = Communicate(this,(FPayload *)&local_2b0.base);
  if ((!bVar1) ||
     (uVar2 = FResponse::
              GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                        (&this->Response,"port",0,(<lambda_1> *)&local_2c8), uVar2 == 0)) {
    pFVar6 = (FTraceDataStream *)0x0;
    goto LAB_14d3a6551;
  }
  pFVar6 = (FTraceDataStream *)0x0;
  uVar3 = 0;
  local_2c8._Mycat =
       (error_category *)
       &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
        ::__l2::_Static;
  local_2c8._0_8_ = local_2c8._0_8_ & 0xffffffff00000000;
  asio::detail::win_iocp_socket_service<asio::ip::tcp>::remote_endpoint
            (*(win_iocp_socket_service<asio::ip::tcp> **)&this->Socket,
             (basic_endpoint<asio::ip::tcp> *)&local_2b0.base,
             (implementation_type *)&(this->Socket).field_0x8,&local_2c8);
  asio::detail::throw_error(&local_2c8,"remote_endpoint");
  bVar1 = local_2b0.base.sa_family != 2;
  uVar8 = local_2b0._8_4_;
  uVar9 = local_2b0._12_4_;
  uVar10 = local_2b0._16_4_;
  uVar11 = local_2b0._20_4_;
  uVar7 = local_2b0.v6.field4_0x18;
  if (!bVar1) {
    uVar3 = ntohl(local_2b0.v6.sin6_flowinfo);
    uVar3 = htonl(uVar3);
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar7 = 0;
  }
  local_268.v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
  local_268.base.sa_data[6] = '\0';
  local_268.base.sa_data[7] = '\0';
  local_268.base.sa_data[8] = '\0';
  local_268.base.sa_data[9] = '\0';
  local_268.base.sa_data[10] = '\0';
  local_268.base.sa_data[0xb] = '\0';
  local_268.base.sa_data[0xc] = '\0';
  local_268.base.sa_data[0xd] = '\0';
  local_268._16_8_ = 0;
  if (bVar1) {
    local_268.base.sa_family = 0x17;
    local_268.v4.sin_port = htons((u_short)uVar2);
    local_268.v6.sin6_flowinfo = 0;
    local_268._12_4_ = uVar9;
    local_268._8_4_ = uVar8;
    local_268._20_4_ = uVar11;
    local_268._16_4_ = uVar10;
    local_268.v6.field4_0x18 = (sockaddr_in6_u_24)uVar7;
  }
  else {
    local_268.base.sa_family = 2;
    local_268.v4.sin_port = htons((u_short)uVar2);
    uVar3 = ntohl(uVar3);
    local_268.v6.sin6_flowinfo = htonl(uVar3);
  }
  local_2b0._0_8_ = local_2b0._0_8_ & 0xffffffff00000000;
  local_2b0._8_4_ = 0x54d848f0;
  local_2b0._12_4_ = 1;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_248,0,0,this->IoContext);
  local_2d0 = 0x81;
  local_2d8 = 0;
  FileHandle = (HANDLE)WSASocketW(2,1,6,0);
  acStack_27c[0] = '\0';
  acStack_27c[1] = '\0';
  acStack_27c[2] = '\0';
  acStack_27c[3] = '\0';
  acStack_27c[4] = '\0';
  acStack_27c[5] = '\0';
  acStack_27c[6] = '\0';
  acStack_27c[7] = '\0';
  local_284 = 2;
  local_274 = 0;
  if ((HANDLE)local_248._8_8_ == (HANDLE)0xffffffffffffffff) {
    pvVar5 = CreateIoCompletionPort
                       (FileHandle,*(HANDLE *)(*(longlong *)(local_248._0_8_ + 0x30) + 0x28),0,0);
    if (pvVar5 == (HANDLE)0x0) {
      DVar4 = GetLastError();
      local_2c8._Myval = DVar4;
      local_2c8._Mycat = asio::error::get_system_category();
      if (DVar4 != 0) goto LAB_14d3a64f0;
    }
    local_248[0x10] = 0x10;
    local_248._8_8_ = FileHandle;
    std::shared_ptr<void>::reset<void,asio::detail::socket_ops::noop_deleter,0>
              ((shared_ptr<void> *)(local_248 + 0x18),(void *)0x0,local_2b8);
    local_2c8._0_8_ = local_2c8._0_8_ & 0xffffffff00000000;
    local_2c8._Mycat =
         (error_category *)
         &`class_std::_System_error_category_const&___ptr64___cdecl_std::_Immortalize_memcpy_image<std::_System_error_category>(void)'
          ::__l2::_Static;
    local_208.family_ = 2;
    local_204 = false;
    local_200[0]._0_8_ = local_284;
    local_200[0]._8_1_ = acStack_27c[0];
    local_200[0]._9_1_ = acStack_27c[1];
    local_200[0]._10_1_ = acStack_27c[2];
    local_200[0]._11_1_ = acStack_27c[3];
    local_200[0]._12_1_ = acStack_27c[4];
    local_200[0]._13_1_ = acStack_27c[5];
    local_200[0]._14_1_ = acStack_27c[6];
    local_200[0]._15_1_ = acStack_27c[7];
    local_200[0].v6.field4_0x18.sin6_scope_id = (sockaddr_in6_u_24)0x0;
    local_200[0]._16_8_ = local_274;
  }
  else {
    local_2c8._Myval = 1;
    local_2c8._Mycat = asio::error::get_misc_category();
  }
LAB_14d3a64f0:
  asio::detail::throw_error(&local_2c8,"assign");
  asio::basic_socket<asio::ip::tcp,asio::any_io_executor>::connect
            ((basic_socket<asio::ip::tcp,asio::any_io_executor> *)local_248,&local_2c8,
             (basic_endpoint<asio::ip::tcp> *)&local_268.base,(error_code *)&local_2b0.base);
  if ((local_2b0._0_4_ == 0) && (this_00 = ::operator_new(0xa8), this_00 != (FTraceDataStream *)0x0)
     ) {
    pFVar6 = FTraceDataStream::FTraceDataStream
                       (this_00,(basic_stream_socket<asio::ip::tcp,asio::any_io_executor> *)
                                local_248);
  }
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  ~io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
            ((io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>
              *)local_248);
LAB_14d3a6551:
  FCborWriter::~FCborWriter(&local_80);
  if (local_1a8.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_1a8.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  return pFVar6;
}

// SetSponsored @ 14d3a7f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall UE::Trace::FStoreCborClient::SetSponsored(FStoreCborClient *this,bool param_1)

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
  bVar1 = Communicate(this,&local_178);
  FCborWriter::~FCborWriter(&local_40);
  if (local_168.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_168.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_168);
  return bVar1;
}

// SetStoreDirectories @ 14d3a8250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d3a84a4) */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall
UE::Trace::FStoreCborClient::SetStoreDirectories
          (FStoreCborClient *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
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
  undefined1 local_1e8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  undefined1 local_1d0 [8];
  FString local_1c8;
  TStringView<wchar_t> local_1b8;
  FPayload local_1a8;
  TInlineMemoryWriter<128> local_198;
  FCborWriter local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(&local_198);
  FCborWriter::FCborWriter(&local_70,(FArchive *)&local_198,BigEndian);
  FCborWriter::WriteContainerStart(&local_70,Map,-1);
  FCborWriter::WriteValue(&local_70,"$request",8);
  FCborWriter::WriteValue(&local_70,"GET",3);
  FCborWriter::WriteValue(&local_70,"$path",5);
  FCborWriter::WriteValue(&local_70,"v1/settings/write",0x11);
  if (param_1 != (wchar_t *)0x0) {
    local_1b8.DataPtr = param_1;
    sVar6 = wcslen(param_1);
    local_1b8.Size = (int)sVar6;
    FCborWriter::WriteValue(&local_70,"StoreDir",8);
    FCborWriter::WriteValue(&local_70,&local_1b8);
  }
  iVar1 = param_3->ArrayNum;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  if (iVar1 != 0) {
    pFVar11 = (param_3->AllocatorInstance).Data;
    pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_1e8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e8);
      }
      if (pFVar11 == pFVar10) break;
      ::FString::ConcatCF(&local_1c8,L"-",(FString *)pFVar11);
      if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) &&
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
      iVar5 = local_1e0.ArrayNum;
      if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
      }
      local_1e0.ArrayNum = iVar5 + 1;
      pFVar8 = local_1e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(FScriptContainerElement **)pFVar8 = local_1c8.Data.AllocatorInstance.Data;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar8 + 8) = local_1c8.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = local_1c8.Data.ArrayMax;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      pFVar11 = pFVar11 + 0x10;
    }
  }
  if (param_2->ArrayNum != 0) {
    if ((&local_1e0 == param_2) &&
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
                        (0x10,8,iVar1,&local_1e0.AllocatorInstance,&local_1e0.ArrayNum,
                         &local_1e0.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_1e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10,
                 (FString *)(param_2->AllocatorInstance).Data,iVar1);
    }
  }
  if (local_1e0.ArrayNum != 0) {
    FCborWriter::WriteValue(&local_70,"Additionalwatchdirs",0x13);
    FCborWriter::WriteContainerStart(&local_70,Array,(longlong)local_1e0.ArrayNum);
    iVar1 = local_1e0.ArrayNum;
    uVar7 = (ulonglong)local_1e0.ArrayNum;
    pFVar11 = local_1e0.AllocatorInstance.Data + uVar7 * 0x10;
    FVar9.Data = local_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1d0);
      }
      if (FVar9.Data == pFVar11) break;
      FCborWriter::WriteValue(&local_70,(FString *)FVar9.Data);
      uVar7 = local_1e0._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  FCborWriter::WriteContainerEnd(&local_70);
  local_1a8.Data = (uchar *)&local_198.Buffer;
  if (local_198.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_1a8.Data = (uchar *)local_198.Buffer.AllocatorInstance.SecondaryData;
  }
  local_1a8.Size = local_198.Buffer.ArrayNum;
  bVar3 = Communicate(this,&local_1a8);
  DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  FCborWriter::~FCborWriter(&local_70);
  if (local_198.Buffer.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_198.Buffer.AllocatorInstance.SecondaryData);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  return bVar3;
}

