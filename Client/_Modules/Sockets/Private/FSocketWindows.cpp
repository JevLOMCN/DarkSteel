// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 3

// RecvFromWithPktInfo @ 143114b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSocketWindows::RecvFromWithPktInfo
          (FSocketWindows *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4,
          FInternetAddr *param_5,Type param_6)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStackY_538 [32];
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6;
  undefined1 local_4f5;
  ulong local_4f4;
  int local_4f0;
  ForAnyElementType local_4e8;
  int local_4e0 [2];
  ForAnyElementType local_4d8;
  undefined4 local_4d0;
  int local_4cc;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  LARGE_INTEGER local_4b0;
  _WSAMSG local_4a8;
  _WSABUF local_470;
  undefined1 local_460 [8];
  longlong local_458 [128];
  ulonglong local_58;
  ulonglong uVar11;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  if (this->WSARecvMsg ==
      (_func___cdecl_int_ulong64__WSAMSG_ptr_ulong_ptr__OVERLAPPED_ptr__func___cdecl_void_ulong_ulong__OVERLAPPED_ptr_ulong_ptr
       *)0x0) {
    return false;
  }
  lVar2 = this->_padding_;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (lVar2 == local_4c8) {
    plVar7 = (longlong *)(**(code **)((longlong)*param_5 + 0xa8))(param_5,local_460);
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
    if (*plVar7 != local_4c0) {
      return false;
    }
  }
  local_4f0 = (int)this->_padding_;
  local_4a8.name = (sockaddr *)(param_4 + 1);
  uVar9 = 0;
  local_4a8.lpBuffers = &local_470;
  local_4a8.Control.buf = (char *)local_458;
  local_4a8.namelen = 0x80;
  local_4a8._12_4_ = 0;
  local_4a8.dwBufferCount = 1;
  local_4a8._28_4_ = 0;
  local_4a8.Control._0_8_ = 0x400;
  local_4a8.dwFlags = 0;
  local_4a8._52_4_ = 0;
  local_4f4 = 0;
  local_470.len = param_2;
  local_470.buf = (char *)param_1;
  iVar6 = (*this->WSARecvMsg)(this->_padding_,&local_4a8,&local_4f4,(_OVERLAPPED *)0x0,
                              (_func___cdecl_void_ulong_ulong__OVERLAPPED_ptr_ulong *)0x0);
  if (iVar6 == 0) {
    plVar7 = (longlong *)0x0;
    if (0xf < local_4a8.Control.len) {
      plVar7 = (longlong *)local_4a8.Control.buf;
    }
    *param_3 = local_4f4;
    if (plVar7 != (longlong *)0x0) {
LAB_143114cb2:
      if (*(int *)((longlong)plVar7 + 0xc) != 0x13) goto code_r0x000143114cb8;
      lVar2 = this->_padding_;
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
      if (lVar2 == local_4b8) {
        local_4e8.Data = (FScriptContainerElement *)0x0;
        local_4e0[0] = 0;
        local_4e0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x10,&local_4e8,local_4e0,local_4e0 + 1);
        uVar11 = uVar9;
        do {
          FVar1 = *(FScriptContainerElement *)(uVar9 + 0x10 + (longlong)plVar7);
          if ((local_4e0[0] <= (int)uVar11) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          local_4e8.Data[uVar9] = FVar1;
          uVar9 = uVar9 + 1;
        } while ((int)uVar10 < 0x10);
        (**(code **)((longlong)*param_5 + 0x58))(param_5,&local_4e8);
        FVar8.Data = local_4e8.Data;
      }
      else {
        local_4f8 = (undefined1)plVar7[2];
        local_4f7 = *(undefined1 *)((longlong)plVar7 + 0x11);
        local_4f6 = *(undefined1 *)((longlong)plVar7 + 0x12);
        local_4f5 = *(undefined1 *)((longlong)plVar7 + 0x13);
        local_4d8.Data = (FScriptContainerElement *)0x0;
        local_4d0 = 4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,4,0,&local_4d8,4,&local_4cc);
        memcpy(local_4d8.Data,&local_4f8,4);
        (**(code **)((longlong)*param_5 + 0x58))(param_5,&local_4d8);
        FVar8.Data = local_4d8.Data;
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
LAB_143114e29:
    if ((local_4f0 != 2) || (0 < *param_3)) goto LAB_143114e56;
  }
  else {
    if ((local_4f0 == 2) &&
       (iVar6 = (**(code **)(*(longlong *)this->_padding_ + 0xc0))
                          ((longlong *)this->_padding_,iVar6), iVar6 == 7)) {
      *param_3 = 0;
LAB_143114e56:
      QueryPerformanceCounter(&local_4b0);
      LOCK();
      this->_padding_ =
           (longlong)
           ((double)local_4b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000);
      UNLOCK();
      return true;
    }
    *param_3 = 0;
  }
  return false;
code_r0x000143114cb8:
  plVar7 = (longlong *)((*plVar7 + 7U & 0xfffffffffffffff8) + (longlong)plVar7);
  if (((longlong *)((longlong)local_4a8.Control.buf + (local_4a8.Control._0_8_ & 0xffffffff)) <
       plVar7 + 2) || (plVar7 == (longlong *)0x0)) goto LAB_143114e29;
  goto LAB_143114cb2;
}

// SetIpPktInfo @ 143117310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSocketWindows::SetIpPktInfo(FSocketWindows *this,bool param_1)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  _func___cdecl_int_ulong64__WSAMSG_ptr_ulong_ptr__OVERLAPPED_ptr__func___cdecl_void_ulong_ulong__OVERLAPPED_ptr_ulong_ptr
  **local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar1 = FSocketBSD::SetIpPktInfo((FSocketBSD *)this,param_1);
  if (bVar1) {
    bVar1 = false;
    if (this->WSARecvMsg ==
        (_func___cdecl_int_ulong64__WSAMSG_ptr_ulong_ptr__OVERLAPPED_ptr__func___cdecl_void_ulong_ulong__OVERLAPPED_ptr_ulong_ptr
         *)0x0) {
      local_20 = 0xf689d7c8;
      local_38 = 0;
      local_40 = 0;
      local_48 = local_28;
      local_1c = 0x436b6f1f;
      local_50 = 8;
      local_18 = 0x4fe5538a;
      local_14 = 0x22c351e3;
      local_58 = &this->WSARecvMsg;
      WSAIoctl(this->_padding_,0xc8000006,&local_20,0x10);
      bVar1 = this->WSARecvMsg ==
              (_func___cdecl_int_ulong64__WSAMSG_ptr_ulong_ptr__OVERLAPPED_ptr__func___cdecl_void_ulong_ulong__OVERLAPPED_ptr_ulong_ptr
               *)0x0;
    }
    return !bVar1;
  }
  return false;
}

// Shutdown @ 143117c10

bool __thiscall FSocketWindows::Shutdown(FSocketWindows *this,ESocketShutdownMode param_1)

{
  int iVar1;
  
  if (param_1 == Read) {
    iVar1 = ::shutdown(this->_padding_,0);
    return iVar1 == 0;
  }
  if (param_1 != Write) {
    if (param_1 != ReadWrite) {
      return false;
    }
    iVar1 = ::shutdown(this->_padding_,2);
    return iVar1 == 0;
  }
  iVar1 = ::shutdown(this->_padding_,1);
  return iVar1 == 0;
}

