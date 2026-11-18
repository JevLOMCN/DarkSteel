// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 19

// <lambda_invoker_cdecl> @ 144569450

/* WARNING: Removing unreachable block (ram,0x000144569562) */

int __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (nghttp2_session *param_1,nghttp2_frame *param_2,nghttp2_rcbuf *param_3,
          nghttp2_rcbuf *param_4,uchar param_5,void *param_6)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  nghttp2_rcbuf *local_18;
  nghttp2_rcbuf *local_10;
  
  if (*(longlong *)((longlong)param_6 + 8) == 0) {
    return -0x386;
  }
  local_18 = param_3;
  nghttp2_rcbuf_incref(param_3);
  local_10 = param_4;
  nghttp2_rcbuf_incref(param_4);
  pFVar2 = *(ForAnyElementType **)((longlong)param_6 + 8);
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar6 = pFVar2->Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(nghttp2_rcbuf **)pFVar6 = local_18;
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(nghttp2_rcbuf **)(pFVar6 + 8) = local_10;
  return 0;
}

// <lambda_invoker_cdecl> @ 144569580

void * __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (ulong64 param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,0);
  return pvVar1;
}

// <lambda_invoker_cdecl> @ 144569590

void __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,void *param_2)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1445695b0

void * __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (ulong64 param_1,ulong64 param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = FMemory::MallocZeroed(param_1 * param_2,0);
  return pvVar1;
}

// <lambda_invoker_cdecl> @ 1445695d0

void * __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (void *param_1,ulong64 param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_1,param_2,0);
  return pvVar1;
}

// FDriverNg @ 14456aeb0

FDriverNg * __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg(FDriverNg *this,FTlsPeer *param_1)

{
  ulonglong uVar1;
  nghttp2_session_callbacks *local_res8 [4];
  
  this->ResponseHeaders =
       (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0;
  (this->SendPending).Data = (void *)0x0;
  (this->SendPending).Size = 0;
  uVar1 = (ulonglong)_tls_index;
  this->bWithTls = param_1->Ssl != (ssl_st *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::
             _dynamic_atexit_destructor_for__Statics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Statics.Instance == (nghttp2_session_callbacks *)0x0) {
    nghttp2_session_callbacks_new(local_res8);
    nghttp2_session_callbacks_set_on_header_callback2
              (local_res8[0],
               `UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>);
    Statics.Instance = local_res8[0];
  }
  this->RecvRemaining = -9;
  nghttp2_session_client_new3(this,Statics.Instance,this,0,&Mem);
  return this;
}

// GetTransactId @ 144574bb0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::GetTransactId(FDriverNg *this,FTlsPeer *param_1)

{
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  
  if ((-1 < this->RecvRemaining) && (bVar1 = (this->field6_0x21c).RecvFrame.Id[3], (bVar1 & 1) != 0)
     ) {
    uVar2 = (this->field6_0x21c).RecvFrame.Id[1];
    uVar3 = (this->field6_0x21c).RecvFrame.Id[0];
    uVar4 = (this->field6_0x21c).RecvFrame.Id[2];
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(uint *)&param_1->_padding_ = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),bVar1);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  Tick(this,param_1);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// GoAway @ 144574d20

void __thiscall UE::IoStore::HTTP::DetailTwo::FDriverNg::GoAway(FDriverNg *this,FTlsPeer *param_1)

{
  if (this->Session != (nghttp2_session *)0x0) {
    nghttp2_session_terminate_session(this->Session,0);
    PumpSend(this,(FTlsPeer *)&stack0x00000008);
    nghttp2_session_del(this->Session);
  }
  return;
}

// Handshake @ 144574de0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::Handshake(FDriverNg *this,FTlsPeer *param_1)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  nghttp2_submit_settings(this->Session,0,0,0);
  PumpSend(this,(FTlsPeer *)&local_res8);
  uVar1 = 0x800000000000;
  if ((local_res8 & 0xffffffffffff) < 0x800000000000) {
    uVar1 = local_res8;
  }
  param_1->_padding_ = uVar1;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// IsUsingTls @ 144578b70

bool __thiscall UE::IoStore::HTTP::DetailTwo::FDriverNg::IsUsingTls(FDriverNg *this)

{
  return this->bWithTls;
}

// OnHeader @ 14457bb80

/* WARNING: Removing unreachable block (ram,0x00014457bc8d) */

int __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::OnHeader
          (FDriverNg *this,nghttp2_rcbuf *param_1,nghttp2_rcbuf *param_2)

{
  TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  nghttp2_rcbuf *local_18;
  nghttp2_rcbuf *local_10;
  
  if (this->ResponseHeaders ==
      (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0) {
    return -0x386;
  }
  local_18 = param_1;
  nghttp2_rcbuf_incref(param_1);
  local_10 = param_2;
  nghttp2_rcbuf_incref(param_2);
  pTVar1 = this->ResponseHeaders;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)pTVar1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = pTVar1->ArrayNum;
  if (iVar4 == pTVar1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar4 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(nghttp2_rcbuf **)pFVar5 = local_18;
  *(undefined8 *)(pFVar5 + 8) = 0;
  *(nghttp2_rcbuf **)(pFVar5 + 8) = local_10;
  return 0;
}

// PumpRecv @ 14457c9e0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::PumpRecv
          (FDriverNg *this,FTlsPeer *param_1,TMemoryView<void_const_> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  FOutcome FVar6;
  undefined8 *in_R9;
  
  uVar1 = in_R9[1];
  iVar4 = nghttp2_session_mem_recv2(this->Session,*in_R9,uVar1);
  if (iVar4 < 0) {
    uVar5 = nghttp2_strerror(iVar4);
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Message != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x99,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
        return (FOutcome)FVar6.field0_0x0;
      }
    }
    param_1->_padding_ = (uVar5 ^ param_1->_padding_) & 0xffff000000000000 ^ uVar5;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
  }
  else if (iVar4 == (int)uVar1) {
    iVar4 = nghttp2_session_want_write(this->Session);
    if (iVar4 != 0) {
      PumpSend(this,(FTlsPeer *)&stack0x00000008);
    }
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(undefined4 *)&param_1->_padding_ = 0;
  }
  else {
    param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d72468;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// PumpSend @ 14457cae0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::PumpSend(FDriverNg *this,FTlsPeer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FOutcome FVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  int iVar8;
  FTlsPeer *in_R8;
  void *local_res8;
  int local_res20;
  int iStackX_24;
  
  iVar8 = 0;
  do {
    if ((this->SendPending).Size == 0) {
      local_res8 = (void *)0x0;
      uVar3 = nghttp2_session_mem_send2(this->Session,&local_res8);
      if ((int)uVar3 < 0) {
        uVar5 = nghttp2_strerror(uVar3);
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Message != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
          return (FOutcome)FVar4.field0_0x0;
        }
        param_1->_padding_ = (uVar5 ^ param_1->_padding_) & 0xffff000000000000 ^ uVar5;
        *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      if (uVar3 == 0) {
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
        *(int *)&param_1->_padding_ = iVar8;
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      (this->SendPending).Data = local_res8;
      (this->SendPending).Size = (ulonglong)uVar3;
    }
    FTlsPeer::Send(in_R8,(char *)&local_res20,(int)(this->SendPending).Data);
    if ((CONCAT44(iStackX_24,local_res20) & 0xffffffffffff) < 0x800000000000) {
      param_1->_padding_ = CONCAT44(iStackX_24,local_res20);
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    if (iStackX_24 != 0x8000) break;
    iVar8 = iVar8 + local_res20;
    uVar5 = (this->SendPending).Size;
    uVar6 = (longlong)local_res20;
    if (uVar5 < (ulonglong)(longlong)local_res20) {
      uVar6 = uVar5;
    }
    uVar7 = 0xffffffffffffffff;
    if (uVar5 - uVar6 != 0xffffffffffffffff) {
      uVar7 = uVar5 - uVar6;
    }
    (this->SendPending).Data = (void *)((longlong)(this->SendPending).Data + uVar6);
    (this->SendPending).Size = uVar7;
  } while (uVar7 == 0);
  if (((this->SendPending).Size == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SendPending.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                         ,0x13c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
    return (FOutcome)FVar4.field0_0x0;
  }
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x18000;
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// RecvBody @ 14457d650

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::RecvBody
          (FDriverNg *this,FTlsPeer *param_1,TMemoryView<void> *param_2)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FOutcome FVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *in_R9;
  int iVar15;
  byte bVar16;
  int local_res8;
  undefined8 local_88;
  undefined1 local_80 [48];
  longlong local_50;
  ulonglong uStack_48;
  
  if ((this->field6_0x21c).RecvFrame.Type == RstStream) {
    param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d724b0;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
  }
  else {
    if ((this->RecvRemaining < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecvRemaining >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x1fb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    if (((this->field6_0x21c).RecvFrame.Type != Data) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecvFrame.Type == FFrame::EType::Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x1fc,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    iVar15 = 0;
    local_50 = *in_R9;
    bVar16 = (this->field6_0x21c).RecvFrame.Flags & 1;
    local_res8 = 0;
    uVar14 = (longlong)this->RecvRemaining;
    if ((ulonglong)in_R9[1] < (ulonglong)(longlong)this->RecvRemaining) {
      uVar14 = in_R9[1];
    }
    if (uVar14 == 0) {
LAB_14457da74:
      *(int *)&param_1->_padding_ = iVar15;
      if (bVar16 == 0) {
LAB_14457d9ed:
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x38000;
      }
      else {
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
        *(undefined8 *)&this->field6_0x21c = 0;
        (this->field6_0x21c).RecvFrame.Id[3] = '\0';
      }
    }
    else {
      uStack_48 = uVar14;
      FTlsPeer::Recv((FTlsPeer *)param_2,(char *)&local_88,(int)local_50);
      iVar15 = local_res8;
      uVar11 = local_88;
      while (local_88._4_4_ == 0x8000) {
        local_88 = uVar11;
        if (((uVar11 & 0xffffffffffff) < 0x800000000000) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x59,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
          return (FOutcome)FVar8.field0_0x0;
        }
        iVar7 = (int)uVar11;
        this->RecvRemaining = this->RecvRemaining - iVar7;
        iVar15 = iVar15 + iVar7;
        uVar13 = (ulonglong)iVar7;
        uVar11 = in_R9[1];
        uVar12 = uVar13;
        if (uVar11 < uVar13) {
          uVar12 = uVar11;
        }
        *in_R9 = *in_R9 + uVar12;
        lVar9 = -1;
        if (uVar11 - uVar12 != -1) {
          lVar9 = uVar11 - uVar12;
        }
        in_R9[1] = lVar9;
        if (uVar14 < uVar13) {
          uVar13 = uVar14;
        }
        iVar7 = nghttp2_session_mem_recv2(this->Session,local_50,uVar13);
        if (iVar7 < 0) {
          pcVar10 = (char *)nghttp2_strerror(iVar7);
          if ((pcVar10 == (char *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Message != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                                 ,0x99,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
            return (FOutcome)FVar8.field0_0x0;
          }
LAB_14457d886:
          local_88 = (ulonglong)pcVar10 | 0xffff000000000000;
          if (((ulonglong)pcVar10 & 0xffffffffffff) < 0x800000000000) {
            param_1->_padding_ = local_88;
            return (FOutcome)(FOutcome_u_0)param_1;
          }
        }
        else {
          if (iVar7 != (int)uVar13) {
            pcVar10 = "Not enough data consumed";
            goto LAB_14457d886;
          }
          iVar7 = nghttp2_session_want_write(this->Session);
          if (iVar7 != 0) {
            PumpSend(this,(FTlsPeer *)local_80);
          }
          local_88 = 0x800000000000;
        }
        if (this->RecvRemaining < 1) {
          this->RecvRemaining = -9 - this->RecvRemaining;
          if (bVar16 != 0) {
            *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
            *(undefined8 *)&this->field6_0x21c = 0;
            (this->field6_0x21c).RecvFrame.Id[3] = '\0';
            *(int *)&param_1->_padding_ = iVar15;
            return (FOutcome)(FOutcome_u_0)param_1;
          }
          uVar1 = (this->field6_0x21c).RecvFrame.Id[1];
          uVar2 = (this->field6_0x21c).RecvFrame.Id[0];
          uVar3 = (this->field6_0x21c).RecvFrame.Id[2];
          uVar4 = (this->field6_0x21c).RecvFrame.Id[3];
          FVar8 = Tick(this,(FTlsPeer *)(local_80 + 8));
          uVar11 = *(ulonglong *)FVar8.field0_0x0;
          if ((uVar11 & 0xffffffffffff) < 0x800000000000) goto LAB_14457da19;
          local_88 = uVar11;
          if (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4) != (int)uVar11) {
            *(int *)&param_1->_padding_ = iVar15;
            goto LAB_14457d9ed;
          }
        }
        local_50 = *in_R9;
        bVar16 = (this->field6_0x21c).RecvFrame.Flags & 1;
        uVar14 = (longlong)this->RecvRemaining;
        if ((ulonglong)in_R9[1] < (ulonglong)(longlong)this->RecvRemaining) {
          uVar14 = in_R9[1];
        }
        if (uVar14 == 0) goto LAB_14457da74;
        uStack_48 = uVar14;
        FTlsPeer::Recv((FTlsPeer *)param_2,(char *)&local_88,(int)local_50);
        uVar11 = local_88;
      }
      if ((uVar11 & 0xffffffffffff) < 0x800000000000) {
LAB_14457da19:
        param_1->_padding_ = uVar11;
      }
      else {
        *(int *)&param_1->_padding_ = iVar15;
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x18000;
      }
    }
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// RecvResponse @ 14457e6d0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::RecvResponse
          (FDriverNg *this,FTlsPeer *param_1,
          TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *param_2)

{
  uchar uVar1;
  uchar uVar2;
  byte bVar3;
  uchar uVar4;
  uchar uVar5;
  code *pcVar6;
  bool bVar7;
  FOutcome FVar8;
  TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *in_R9;
  ulonglong local_res8;
  
  if ((this->field6_0x21c).RecvFrame.Type == RstStream) {
    param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d724b0;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if (this->RecvRemaining < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecvRemaining > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                       ,0x1dc,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar6)();
      return (FOutcome)FVar8.field0_0x0;
    }
  }
  if ((this->field6_0x21c).RecvFrame.Type != Headers) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecvFrame.Type == FFrame::EType::Headers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                       ,0x1dd,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar6)();
      return (FOutcome)FVar8.field0_0x0;
    }
  }
  this->ResponseHeaders = in_R9;
  do {
    uVar1 = (this->field6_0x21c).RecvFrame.Id[1];
    uVar2 = (this->field6_0x21c).RecvFrame.Id[0];
    bVar3 = (this->field6_0x21c).RecvFrame.Flags;
    uVar4 = (this->field6_0x21c).RecvFrame.Id[2];
    uVar5 = (this->field6_0x21c).RecvFrame.Id[3];
    if ((bVar3 & 4) != 0) {
      *(undefined8 *)&this->field6_0x21c = 0;
      (this->field6_0x21c).RecvFrame.Id[3] = '\0';
    }
    Tick(this,(FTlsPeer *)&local_res8);
    if ((local_res8 & 0xffffffffffff) < 0x800000000000) {
      param_1->_padding_ = local_res8;
      goto LAB_14457e849;
    }
    if ((bVar3 & 4) != 0) {
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
      *(undefined4 *)&param_1->_padding_ = 0;
      goto LAB_14457e849;
    }
  } while ((int)local_res8 == CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar4),uVar5));
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x58000;
  *(undefined4 *)&param_1->_padding_ = 0;
LAB_14457e849:
  this->ResponseHeaders =
       (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Send @ 144580e50

FOutcome __thiscall UE::IoStore::HTTP::DetailTwo::FDriverNg::Send(FDriverNg *this,FTlsPeer *param_1)

{
  PumpSend(this,param_1);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Submit @ 144581ea0

uint __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::Submit(FDriverNg *this,FDriverHeaders *param_1)

{
  uint uVar1;
  
  uVar1 = nghttp2_submit_request2
                    (this->Session,0,(param_1->Headers).AllocatorInstance.Data,
                     (longlong)(param_1->Headers).ArrayNum,0,this);
  return uVar1;
}

// Tick @ 1445820d0

FOutcome __thiscall UE::IoStore::HTTP::DetailTwo::FDriverNg::Tick(FDriverNg *this,FTlsPeer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOutcome FVar3;
  
  TickInner(this,param_1);
  if ((param_1->_padding_ & 0x1800000000000) != 0x1800000000000) {
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  do {
    if (((param_1->_padding_ & 0xffffffffffffU) < 0x800000000000) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                           ,0x59,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar3.field0_0x0;
    }
  } while (((int)param_1->_padding_ != 0) &&
          (TickInner(this,param_1), (param_1->_padding_ & 0x1800000000000) == 0x1800000000000));
  return (FOutcome)(FOutcome_u_0)param_1;
}

// TickInner @ 144582a70

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverNg::TickInner(FDriverNg *this,FTlsPeer *param_1)

{
  int *piVar1;
  FDriverNg_u_540 *pFVar2;
  byte bVar3;
  uchar uVar4;
  uchar uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  uint3 uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  bool bVar11;
  FOutcome FVar12;
  uchar *puVar13;
  uchar *puVar14;
  int iVar15;
  TMemoryView<void_const_> *in_R8;
  uchar *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 local_res8;
  FDriverNg_u_540 *local_res20;
  FTlsPeer local_b8;
  FTlsPeer local_a8;
  uchar *local_98;
  uchar *puStack_90;
  uchar *local_88;
  uchar *puStack_80;
  FDriverNg_u_540 *local_78;
  uchar *puStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FDriverNg_u_540 *local_58;
  uchar *puStack_50;
  
  local_98 = this->RecvBuffer;
  iVar17 = this->RecvRemaining;
  puStack_90 = (uchar *)0x200;
  if (iVar17 < 0) {
    puVar16 = (uchar *)(longlong)-iVar17;
    if ((uchar *)0x200 < puVar16) {
      puVar16 = (uchar *)0x200;
    }
    local_98 = local_98 + (0x200 - (longlong)puVar16);
    puStack_90 = puVar16;
  }
  else {
    puVar16 = (uchar *)0x1f7;
    if (iVar17 < 0x1f8) {
      puVar16 = (uchar *)((longlong)iVar17 + 9);
      if ((uchar *)0x200 < puVar16) {
        puVar16 = (uchar *)0x200;
      }
      local_98 = local_98 + (0x200 - (longlong)puVar16);
      puStack_90 = puVar16;
    }
    else {
      local_a8.Ssl = (ssl_st *)0x1f7;
      local_a8._padding_ = (longlong)local_98;
    }
  }
  puVar10 = local_98;
  FTlsPeer::Recv((FTlsPeer *)in_R8,(char *)&local_res8,(int)local_98);
  uVar9 = local_res8;
  if (local_res8._4_4_ != 0x8000) {
    param_1->_padding_ = local_res8;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if (((local_res8 & 0xffffffffffff) < 0x800000000000) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                          ,0x59,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    FVar12.field0_0x0 = (FOutcome_u_0)(*pcVar6)();
    return (FOutcome)FVar12.field0_0x0;
  }
  pFVar2 = &this->field6_0x21c;
  puVar14 = (uchar *)(longlong)(int)uVar9;
  if (puVar16 < (uchar *)(longlong)(int)uVar9) {
    puVar14 = puVar16;
  }
  puVar16 = (uchar *)0x0;
  iVar15 = 0;
  iVar17 = (int)puVar14;
  local_res20 = (FDriverNg_u_540 *)0x0;
  if (pFVar2 < puVar10 + (longlong)puVar14) {
    puVar16 = puVar10 + (longlong)puVar14 + (-0x21c - (longlong)this);
    iVar15 = (int)puVar16;
    puVar13 = puVar16;
    if (puVar14 < puVar16) {
      puVar13 = puVar14;
    }
    puVar14 = puVar14 + -(longlong)puVar13;
    iVar17 = (int)puVar14;
    local_res20 = pFVar2;
  }
  puStack_80 = puVar14;
  local_88 = puVar10;
  uVar18 = (undefined4)((ulonglong)puVar14 >> 0x20);
  if (puVar14 == (uchar *)0x0) {
LAB_144582cb4:
    if (puVar16 == (uchar *)0x0) {
      if (this->RecvRemaining < (int)puVar14) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecvRemaining >= int32(Dest.GetSize())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                            ,0x1a4,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          FVar12.field0_0x0 = (FOutcome_u_0)(*pcVar6)();
          return (FOutcome)FVar12.field0_0x0;
        }
      }
      auVar7._8_4_ = iVar17;
      auVar7._0_8_ = puVar10;
      auVar7._12_4_ = uVar18;
      piVar1 = &this->RecvRemaining;
      *piVar1 = *piVar1 - iVar17;
      if (*piVar1 == 0) {
        this->RecvRemaining = -9;
      }
      *(uint *)&param_1->_padding_ = (uint)((FDriverNg_u_540 *)(puVar10 + auVar7._8_8_) == pFVar2);
    }
    else if (iVar15 + -9 < 0) {
      this->RecvRemaining = iVar15 + -9;
      *(undefined4 *)&param_1->_padding_ = 0;
    }
    else {
      local_78 = local_res20;
      local_58 = local_res20;
      puStack_70 = puVar16;
      puStack_50 = puVar16;
      FVar12 = PumpRecv(this,&local_a8,in_R8);
      local_res8 = *(ulonglong *)FVar12.field0_0x0;
      if ((local_res8 & 0xffffffffffff) < 0x800000000000) goto LAB_144582cac;
      uVar8 = CONCAT21(CONCAT11((pFVar2->RecvFrame).Size[0],(this->field6_0x21c).RecvFrame.Size[1]),
                       (this->field6_0x21c).RecvFrame.Size[2]);
      this->RecvRemaining = (uint)uVar8;
      bVar3 = (this->field6_0x21c).RecvFrame.Id[3];
      if ((bVar3 & 1) != 0) {
        uVar4 = (this->field6_0x21c).RecvFrame.Id[1];
        uVar5 = (this->field6_0x21c).RecvFrame.Id[0];
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
        *(uint *)&param_1->_padding_ =
             CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),(this->field6_0x21c).RecvFrame.Id[2]),bVar3);
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      if (uVar8 == 0) {
        this->RecvRemaining = -9;
      }
      *(undefined4 *)&param_1->_padding_ = 1;
    }
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x18000;
  }
  else {
    iStack_60 = iVar17;
    uStack_5c = uVar18;
    local_68 = puVar10;
    FVar12 = PumpRecv(this,&local_b8,in_R8);
    local_res8 = *(ulonglong *)FVar12.field0_0x0;
    if (0x7fffffffffff < (local_res8 & 0xffffffffffff)) goto LAB_144582cb4;
LAB_144582cac:
    param_1->_padding_ = local_res8;
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

